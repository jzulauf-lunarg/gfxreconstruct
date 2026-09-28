/*
** Copyright (c) 2026 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
** THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

// The encode oracle harness: fill a structure with synthetic values through its schema, encode it through the
// library's EncodeStruct and through the generated oracle body, and compare the bytes. Before encode inversion the
// two are the same procedural code and the comparison proves only the filler and the harness; after inversion the
// library side is the schema Action and the comparison is the proof. Test-only; retired with the oracle files.

#ifndef GFXRECON_TEST_ENCODE_ORACLE_ENCODE_ORACLE_HARNESS_H
#define GFXRECON_TEST_ENCODE_ORACLE_ENCODE_ORACLE_HARNESS_H

#include "encode/parameter_buffer.h"
#include "encode/parameter_encoder.h"
#include "encode/vulkan_encode_struct.h"
#include "generated/generated_vulkan_schema.h"
#include "generated/generated_vulkan_schema_native_struct_members.h"
#include "schema/field.h"
#include "schema/schema.h"
#include "test/encode_oracle/oracle_encoder.h"
#include "util/defines.h"

#include <cstddef>
#include <cstring>
#include <memory>
#include <type_traits>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(test)
GFXRECON_BEGIN_NAMESPACE(encode_oracle)

// Every scalar the filler writes, and every count it therefore produces. Small, so a nested run of runs stays small;
// not zero, so runs are not empty.
inline constexpr int kPattern = 2;

// Owns everything a filled structure points to, for the life of one comparison.
class FillContext
{
  public:
    template <typename T>
    T* Make(size_t count)
    {
        T* p = new T[count]();
        keep_.emplace_back(static_cast<void*>(p), [](void* q) { delete[] static_cast<T*>(q); });
        return p;
    }

    template <typename Char>
    const Char* MakeText()
    {
        Char* text = Make<Char>(3);
        text[0]    = static_cast<Char>('a');
        text[1]    = static_cast<Char>('b');
        text[2]    = static_cast<Char>(0);
        return text;
    }

  private:
    std::vector<std::shared_ptr<void>> keep_;
};

template <typename ApiElement, typename Storage>
void Fill(FillContext& context, Storage& storage);

// One Apply per shape; the kind decides the value inside. Handles stay null, so no capture wrapper is needed and a
// handle encodes as the null id on both sides. Extension chains stay null. Unions and structures without a schema
// stay value-initialized, and their encoders run identically on both sides.
class FillAction
{
  public:
    explicit FillAction(FillContext& context) : context_(context) {}

    template <typename Field, typename Storage>
    requires schema::ValueShapeField<Field> && schema::HasMember<Storage, Field>
    void Apply(Field field, Storage& storage)
    {
        using Element = schema::FieldElementType<Field>;

        if constexpr (schema::StructKindField<Field>)
        {
            if constexpr (schema::HasSchema<typename Field::api_type> && schema::Addressable<Storage, Field>)
            {
                Fill<typename Field::api_type>(context_, schema::GetRef(storage, field));
            }
        }
        else if constexpr (!schema::HandleKindField<Field> && IsPatternable<Element>)
        {
            schema::Set(storage, field, static_cast<Element>(kPattern));
        }
    }

    template <typename Field, typename Storage>
    requires schema::PointerShapeField<Field> && schema::HasMember<Storage, Field>
    void Apply(Field field, Storage& storage)
    {
        using Element = schema::FieldElementType<Field>;

        if constexpr (schema::TextKindField<Field>)
        {
            schema::Set(storage, field, context_.MakeText<Element>());
        }
        else if constexpr (!std::is_void_v<Element>)
        {
            Element* one = context_.Make<Element>(1);
            FillElement<Field>(*one);
            schema::Set(storage, field, one);
        }
    }

    template <typename Field, typename Storage>
    requires schema::AnyCountedShapeField<Field> && schema::HasMember<Storage, Field> &&
        schema::HasFieldCount<Storage, Field>
    void Apply(Field field, Storage& storage)
    {
        using Element      = schema::FieldElementType<Field>;
        const size_t count = static_cast<size_t>(schema::FieldCount<Field>::Get(storage));

        if constexpr (schema::PointerArrayShapeField<Field>)
        {
            const Element** rows = context_.Make<const Element*>(count);
            for (size_t i = 0; i < count; ++i)
            {
                if constexpr (schema::TextKindField<Field>)
                {
                    rows[i] = context_.MakeText<Element>();
                }
                else
                {
                    Element* one = context_.Make<Element>(1);
                    FillElement<Field>(*one);
                    rows[i] = one;
                }
            }
            schema::Set(storage, field, rows);
        }
        else
        {
            Element* run = context_.Make<Element>(count);
            for (size_t i = 0; i < count; ++i)
            {
                FillElement<Field>(run[i]);
            }
            schema::Set(storage, field, run);
        }
    }

    template <typename Field, typename Storage>
    requires schema::StaticArrayShapeField<Field> && schema::Addressable<Storage, Field>
    void Apply(Field field, Storage& storage)
    {
        auto& array     = schema::GetRef(storage, field);
        using ArrayType = std::remove_cvref_t<decltype(array)>;

        if constexpr (schema::TextKindField<Field>)
        {
            constexpr size_t extent = std::extent_v<ArrayType, 0>;
            using Char              = std::remove_extent_t<ArrayType>;
            if constexpr (extent > 1)
            {
                array[0] = static_cast<Char>('a');
            }
            if constexpr (extent > 2)
            {
                array[1] = static_cast<Char>('b');
            }
        }
        else if constexpr (std::rank_v<ArrayType> == 2)
        {
            for (auto& row : array)
            {
                for (auto& element : row)
                {
                    FillElement<Field>(element);
                }
            }
        }
        else
        {
            for (auto& element : array)
            {
                FillElement<Field>(element);
            }
        }
    }

    template <typename Field, typename Storage>
    requires schema::ExtensionChainShapeField<Field> && schema::HasMember<Storage, Field>
    void Apply(Field, Storage&) {}

  private:
    template <typename T>
    static constexpr bool IsPatternable = std::is_arithmetic_v<T> || std::is_enum_v<T>;

    template <typename Field, typename Element>
    void FillElement(Element& element)
    {
        if constexpr (schema::StructKindField<Field>)
        {
            if constexpr (schema::HasSchema<typename Field::api_type>)
            {
                Fill<typename Field::api_type>(context_, element);
            }
        }
        else if constexpr (!schema::HandleKindField<Field> && IsPatternable<Element>)
        {
            element = static_cast<Element>(kPattern);
        }
    }

    FillContext& context_;
};

template <typename ApiElement, typename Storage>
void Fill(FillContext& context, Storage& storage)
{
    FillAction action(context);
    schema::WalkFields<ApiElement>(action, storage);
}

struct OracleComparison
{
    bool   same;
    size_t library_size;
    size_t oracle_size;
};

// Fill one Struct through its ApiElement's schema, encode it both ways, compare.
template <typename ApiElement, typename Struct>
OracleComparison CompareEncodeToOracle()
{
    FillContext context;
    Struct      value{};
    Fill<ApiElement>(context, value);

    encode::ParameterBuffer  library_buffer;
    encode::ParameterEncoder library_encoder(&library_buffer);
    encode::EncodeStruct(&library_encoder, value);

    encode::ParameterBuffer       oracle_buffer;
    encode::oracle::OracleEncoder oracle_encoder(&oracle_buffer);
    encode::oracle::EncodeStruct(&oracle_encoder, value);

    const bool same = library_buffer.GetDataSize() == oracle_buffer.GetDataSize() &&
                      std::memcmp(library_buffer.GetData(), oracle_buffer.GetData(), library_buffer.GetDataSize()) == 0;

    return { same, library_buffer.GetDataSize(), oracle_buffer.GetDataSize() };
}

GFXRECON_END_NAMESPACE(encode_oracle)
GFXRECON_END_NAMESPACE(test)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_TEST_ENCODE_ORACLE_ENCODE_ORACLE_HARNESS_H
