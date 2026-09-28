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

// The encoder the generated oracle bodies take. An oracle body is a procedural EncodeStruct body emitted into the
// test build under this first parameter, so that a nested EncodeStruct(encoder, value.member) call inside it
// resolves to the oracle body for the member's type when one exists (exact match) and to the library's otherwise
// (derived-to-base). Nested structures behind pointers go through the library's templates on both sides, so each
// oracle proves one structure's own field sequence. Test-only; retired with the oracle files.

#ifndef GFXRECON_TEST_ENCODE_ORACLE_ORACLE_ENCODER_H
#define GFXRECON_TEST_ENCODE_ORACLE_ORACLE_ENCODER_H

#include "encode/parameter_encoder.h"
#include "util/defines.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)
GFXRECON_BEGIN_NAMESPACE(oracle)

class OracleEncoder : public ParameterEncoder
{
  public:
    using ParameterEncoder::ParameterEncoder;
};

GFXRECON_END_NAMESPACE(oracle)
GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_TEST_ENCODE_ORACLE_ORACLE_ENCODER_H
