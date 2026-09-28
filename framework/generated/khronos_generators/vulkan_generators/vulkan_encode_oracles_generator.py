#!/usr/bin/python3 -i
#
# Copyright (c) 2026 LunarG, Inc.
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

"""The encode oracle files, test-only, in framework/generated/encode_oracles/.

The oracle for a structure is its procedural EncodeStruct body, emitted exactly as the encoders body generator
emits it but taking an OracleEncoder* (test/encode_oracle/oracle_encoder.h) and living in namespace
gfxrecon::encode::oracle, for every structure the schema describes, ported or not. A generated test fills each
structure through its schema, encodes it through the library and through the oracle, and compares bytes. Everything
here is retired once encode inversion is proven; canaries that found differences are copied by hand into
test_vulkan_schema.cpp first.
"""

import sys
from vulkan_base_generator import VulkanBaseGenerator, VulkanBaseGeneratorOptions, write
from khronos_struct_encoders_body_generator import KhronosStructEncodersBodyGenerator

ORACLE_HEADER = 'generated/encode_oracles/generated_vulkan_encode_oracles.h'


class VulkanEncodeOraclesHeaderGeneratorOptions(VulkanBaseGeneratorOptions):
    """Options for the oracle prototypes."""

    def __init__(
        self,
        blacklists=None,
        platform_types=None,
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=True,
        protect_feature=False,
        extra_headers=[]
    ):
        VulkanBaseGeneratorOptions.__init__(
            self,
            blacklists,
            platform_types,
            filename,
            directory,
            prefix_text,
            protect_file,
            protect_feature,
            extra_headers=extra_headers
        )

        self.begin_end_file_data.specific_headers.extend((
            'test/encode_oracle/oracle_encoder.h',
            'util/defines.h',
        ))
        self.begin_end_file_data.namespaces.extend(('gfxrecon', 'encode', 'oracle'))


class VulkanEncodeOraclesHeaderGenerator(VulkanBaseGenerator):
    """One oracle prototype per described structure."""

    def __init__(self, err_file=sys.stderr, warn_file=sys.stderr, diag_file=sys.stdout):
        VulkanBaseGenerator.__init__(self, err_file=err_file, warn_file=warn_file, diag_file=diag_file)

    def endFile(self):
        """Method override."""
        for struct in self.get_all_filtered_struct_names():
            write('void EncodeStruct(OracleEncoder* encoder, const {}& value);'.format(struct), file=self.outFile)
        self.newline()

        VulkanBaseGenerator.endFile(self)

    def need_feature_generation(self):
        return bool(self.feature_struct_members)


class VulkanEncodeOraclesBodyGeneratorOptions(VulkanBaseGeneratorOptions):
    """Options for the oracle bodies."""

    def __init__(
        self,
        blacklists=None,
        platform_types=None,
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=False,
        protect_feature=False,
        extra_headers=[]
    ):
        VulkanBaseGeneratorOptions.__init__(
            self,
            blacklists,
            platform_types,
            filename,
            directory,
            prefix_text,
            protect_file,
            protect_feature,
            extra_headers=extra_headers
        )

        # The same headers the encoders body generator gives its bodies, so a nested call resolves to the library
        # where no oracle exists, plus the oracle prototypes.
        self.begin_end_file_data.specific_headers.extend((
            ORACLE_HEADER,
            '',
            'encode/vulkan_encode_struct.h',
            'encode/custom_vulkan_struct_encoders.h',
            'encode/parameter_encoder.h',
            'encode/struct_pointer_encoder.h',
            'util/defines.h',
        ))
        self.begin_end_file_data.namespaces.extend(('gfxrecon', 'encode', 'oracle'))


class VulkanEncodeOraclesBodyGenerator(VulkanBaseGenerator, KhronosStructEncodersBodyGenerator):
    """Every procedural body, ported or not, under OracleEncoder*."""

    def __init__(self, err_file=sys.stderr, warn_file=sys.stderr, diag_file=sys.stdout):
        VulkanBaseGenerator.__init__(self, err_file=err_file, warn_file=warn_file, diag_file=diag_file)

    def skip_struct_type(self, struct_type):
        """Method override. An oracle exists for every structure, including the ones the schema drives."""
        return False

    def generate_struct_bodies(self, api_data, struct, struct_members):
        """Method override. The encoders body generator's emission with the oracle signature."""
        body = '\n'
        value_name = 'value'
        value_ref = value_name + '.'
        array_loop_specialization = None
        struct_type_var = self.get_struct_type_var_name()
        body += 'void EncodeStruct(OracleEncoder* encoder, const {}& {})\n'.format(struct, value_name)
        body += '{\n'
        if struct in self.children_structs:
            body += self.make_child_struct_cast_switch(struct, value_name, struct_type_var)
            array_loop_specialization = self.make_child_loop_cast_switch(struct, struct_type_var)
        else:
            body += self.makeStructBody(api_data, struct, struct_members, value_ref)
        body += '}'
        if (array_loop_specialization):
            body += '\n\n' + array_loop_specialization
        write(body, file=self.outFile)

    def endFile(self):
        """Method override."""
        KhronosStructEncodersBodyGenerator.write_encoder_content(self)
        self.newline()

        VulkanBaseGenerator.endFile(self)

    def need_feature_generation(self):
        return bool(self.feature_struct_members)


class VulkanEncodeOracleTestsGeneratorOptions(VulkanBaseGeneratorOptions):
    """Options for the oracle tests."""

    def __init__(
        self,
        blacklists=None,
        platform_types=None,
        filename=None,
        directory='.',
        prefix_text='',
        protect_file=False,
        protect_feature=False,
        extra_headers=[]
    ):
        VulkanBaseGeneratorOptions.__init__(
            self,
            blacklists,
            platform_types,
            filename,
            directory,
            prefix_text,
            protect_file,
            protect_feature,
            extra_headers=extra_headers
        )

        # Catch2 first: the Vulkan platform headers behind the oracle header define macros (X11's Always, None) that
        # break Catch2's enums when they come first, which is why the hand-written tests include it first too.
        self.begin_end_file_data.specific_headers.extend((
            'catch2/catch.hpp',
            '',
            ORACLE_HEADER,
            'test/encode_oracle/encode_oracle_harness.h',
        ))


class VulkanEncodeOracleTestsGenerator(VulkanBaseGenerator):
    """One Catch2 case per described structure: fill, encode both ways, compare."""

    def __init__(self, err_file=sys.stderr, warn_file=sys.stderr, diag_file=sys.stdout):
        VulkanBaseGenerator.__init__(self, err_file=err_file, warn_file=warn_file, diag_file=diag_file)

    def endFile(self):
        """Method override."""
        for struct in self.get_all_filtered_struct_names():
            write('TEST_CASE("encode oracle: {name}", "[oracle]")'.format(name=struct), file=self.outFile)
            write('{', file=self.outFile)
            write(
                '    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<'
                'gfxrecon::schema::vulkan::api_types::{name}, {name}>();'.format(name=struct),
                file=self.outFile
            )
            write('    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);', file=self.outFile)
            write('    CHECK(result.same);', file=self.outFile)
            write('}', file=self.outFile)
            self.newline()

        VulkanBaseGenerator.endFile(self)

    def need_feature_generation(self):
        return bool(self.feature_struct_members)
