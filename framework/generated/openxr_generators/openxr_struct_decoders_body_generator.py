#!/usr/bin/python3 -i
#
# Copyright (c) 2018-2020 Valve Corporation
# Copyright (c) 2018-2024 LunarG, Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

import sys
from base_generator import BaseGenerator, BaseGeneratorOptions, write
from base_struct_decoders_body_generator import BaseStructDecodersBodyGenerator
from reformat_code import format_cpp_code


class OpenXrStructDecodersBodyGeneratorOptions(BaseGeneratorOptions):
    """Options for generating C++ functions for OpenXR struct decoding."""

    def __init__(
        self,
        blacklists=None,  # Path to JSON file listing apicalls and structs to ignore.
        platform_types=None,  # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=False,
        protect_feature=True,
        extraOpenXrHeaders=[]
    ):
        BaseGeneratorOptions.__init__(
            self,
            blacklists,
            platform_types,
            filename,
            directory,
            prefix_text,
            protect_file,
            protect_feature,
            extraOpenXrHeaders=extraOpenXrHeaders
        )


class OpenXrStructDecodersBodyGenerator(
    BaseStructDecodersBodyGenerator, BaseGenerator
):
    """OpenXrStructDecodersBodyGenerator - subclass of BaseGenerator.
    Generates C++ functions for decoding OpenXR API structures.
    Generate C++ functions for OpenXR struct decoding."""

    def __init__(
        self, err_file=sys.stderr, warn_file=sys.stderr, diag_file=sys.stdout
    ):
        BaseGenerator.__init__(
            self,
            process_cmds=False,
            process_structs=True,
            feature_break=False,
            err_file=err_file,
            warn_file=warn_file,
            diag_file=diag_file
        )
        self.all_feature_struct_members = []

    def beginFile(self, gen_opts):
        """Method override."""
        BaseGenerator.beginFile(self, gen_opts)

        write(
            format_cpp_code(
                '''
            #include "decode/custom_dx12_struct_decoders.h"
            #include "decode/custom_openxr_struct_decoders.h"
            #include "decode/custom_vulkan_struct_decoders.h"
            #include "decode/decode_allocator.h"

            #include "generated/generated_openxr_struct_decoders.h"

            #include <cassert>

            GFXRECON_BEGIN_NAMESPACE(gfxrecon)
            GFXRECON_BEGIN_NAMESPACE(decode)

            size_t DecodeNextStruct(const uint8_t* buffer, size_t buffer_size, OpenXrNextNode** next);
        '''
            ),
            file=self.outFile
        )

    def endFile(self):
        """Method override."""
        for feature_struct_members in self.all_feature_struct_members:
            self.generate_decode_struct_bodies(feature_struct_members)

        self.newline()
        write('GFXRECON_END_NAMESPACE(decode)', file=self.outFile)
        write('GFXRECON_END_NAMESPACE(gfxrecon)', file=self.outFile)

        # Finish processing in superclass
        BaseGenerator.endFile(self)

    def need_feature_generation(self):
        """Indicates that the current feature has C++ code to generate."""
        if self.feature_struct_members:
            return True
        return False

    def generate_feature(self):
        """Gather up struct names for processing deferred to endFile"""
        self.all_feature_struct_members.append(self.feature_struct_members)

    def generate_decode_struct_bodies(self, feature_struct_members):
        """Performs C++ code generation for the feature."""

        for struct in [ key for key in feature_struct_members if not self.is_struct_black_listed(key)]:
            body = '\n' 
            body += self.make_decode_struct_preamble(struct)
            if struct in self.base_header_structs:
                body += self.make_decode_child_struct_cast_switch(struct)
            else:
                body += self.make_decode_struct_body(struct, feature_struct_members[struct])
 
            body += self.make_decode_struct_epilog(struct)
            write(body, file=self.outFile)

    def make_decode_child_struct_cast_switch(self, base_struct):
        """ Base structs are abstract, need to case to specific child struct based on type """
        indent = '    '
        indent2 = indent + indent
        indent3 = indent2 + indent

        body = ''
        body += f'{indent}// Cast and call the appropriate encoder based on the structure type\n'
        body += f'{indent}// Peek the structure type\n'
        body += f'{indent}ValueDecoder::DecodeEnumValue(buffer, buffer_size, &(value->type));\n'

        body += f'{indent}switch(value->type)\n'

        body += f'{indent}{{\n'
        body += f'{indent2}default:\n'
        body += f'{indent2}{{\n'
        body += f'{indent3}GFXRECON_LOG_WARNING("DecodeStruct: unrecognized Base Header child structure type %d", value->type);\n'
        body += f'{indent3}break;\n'
        body += f'{indent2}}}\n'

        for child_struct in self.base_header_structs[base_struct]:
            struct_type_name = self.struct_type_enums[child_struct]
            body += f'{indent2}case {struct_type_name}:\n'
            body += f'{indent2}{{\n'
            body += f'{indent3}Decoded_{child_struct}* child_wrapper = reinterpret_cast<Decoded_{child_struct}*>(wrapper);\n'
            body += f'{indent3}bytes_read += DecodeStruct(buffer, buffer_size, child_wrapper);\n'
            body += f'{indent3}break;\n'
            body += f'{indent2}}}\n'
 
        body += f'{indent}}}\n'
        return body


