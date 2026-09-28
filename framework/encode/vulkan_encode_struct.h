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
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

// Every EncodeStruct declaration, in one header. The generated struct-encoders header declares the prototypes of
// the structures that keep a generated body, and the NonSchemaDrivenStructs list; this header includes it and adds
// the one declaration that serves every other structure, a constrained function template in place of one prototype
// per structure. Include this, not the generated header, to call EncodeStruct.
//
// The split is deliberate: the generated file carries the data, which is the list, and this file carries the logic
// that reads it, so that logic is C++ in a header rather than a Python string in a generator.
//
// Encode is inverted: the schema drives every describable structure, and the list is the exclusion, which is empty
// until a structure appears that the schema has no shape for. It reads inverted so that a new structure is driven
// by default, the way decode's list reads.
//
// The constraint is for diagnosis, not selection: a non-template beats a template wherever a prototype still
// exists, so a structure with a body of its own fails at the call naming its type rather than at the link.
//
// The definition is in encode/vulkan_encode_struct_impl.h, which is private to the one translation unit that
// instantiates it.

#ifndef GFXRECON_ENCODE_VULKAN_ENCODE_STRUCT_H
#define GFXRECON_ENCODE_VULKAN_ENCODE_STRUCT_H

#include "generated/generated_vulkan_struct_encoders.h"
#include "util/defines.h"
#include "util/type_list.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

template <typename Struct>
concept SchemaDriven = !util::TypeListContainsV<NonSchemaDrivenStructs, Struct>;

template <SchemaDriven Struct>
void EncodeStruct(ParameterEncoder* encoder, const Struct& value);

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_ENCODE_VULKAN_ENCODE_STRUCT_H
