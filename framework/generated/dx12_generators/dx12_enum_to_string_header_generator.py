#!/usr/bin/env python3
#
# Copyright (c) 2021 LunarG, Inc.
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
from base_generator import write
from dx12_base_generator import Dx12BaseGenerator

class Dx12EnumToStringHeaderGenerator(Dx12BaseGenerator):
    """TODO : Generates C++ functions responsible for Convert to texts."""

    BITS_LIST = [
        '_FLAGS', '_STATES', '_STATUS', 'D3D12_SHADER_MIN_PRECISION_SUPPORT',
        'D3D12_FORMAT_SUPPORT1', 'D3D12_FORMAT_SUPPORT2'
    ]

    def __init__(
        self,
        source_dict,
        dx12_prefix_strings,
        err_file=sys.stderr,
        warn_file=sys.stderr,
        diag_file=sys.stdout
    ):
        Dx12BaseGenerator.__init__(
            self, source_dict, dx12_prefix_strings, err_file, warn_file,
            diag_file
        )

    def beginFile(self, gen_opts):
        """Methond override."""
        Dx12BaseGenerator.beginFile(self, gen_opts)

        self.write_include()

        write('GFXRECON_BEGIN_NAMESPACE(gfxrecon)', file=self.outFile)
        write('GFXRECON_BEGIN_NAMESPACE(util)', file=self.outFile)
        self.newline()

    def generate_feature(self):
        enum_dict = self.source_dict['enum_dict']
        for k, v in enum_dict.items():
            # Generate enum handler for all enums
            body = 'template <> std::string ToString<{0}>(const {0}& value, ToStringFlags to_string_flags, uint32_t tab_count, uint32_t tab_size);'

            # Generate flags handler for enums identified as bitmasks
            for bits in self.BITS_LIST:
                if k.find(bits) >= 0:
                    body += '\ntemplate <> std::string ToString<{0}>(uint32_t flags, ToStringFlags to_string_flags, uint32_t tab_count, uint32_t tab_size);'
            write(body.format(k), file=self.outFile)

        # Generate REFIID handler
        body = 'template <> std::string ToString<IID>(const IID& riid, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);'
        write(body, file=self.outFile)

    def write_include(self):
        code = ''
        header_dict = self.source_dict['header_dict']
        for k, v in header_dict.items():
            code += '#include <{}>\n'.format(k)

        code += '#include "format/platform_types.h"\n'
        code += '#include "util/defines.h"\n'
        code += '#include "util/to_string.h"\n'
        write(code, file=self.outFile)

    def endFile(self):
        """Methond override."""
        self.newline()
        write('GFXRECON_END_NAMESPACE(util)', file=self.outFile)
        write('GFXRECON_END_NAMESPACE(gfxrecon)', file=self.outFile)

        # Finish processing in superclass
        Dx12BaseGenerator.endFile(self)
