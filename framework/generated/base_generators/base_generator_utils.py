#!/usr/bin/python3 -i
#
# Copyright (c) 2018-2020 Valve Corporation
# Copyright (c) 2018-2020 LunarG, Inc.
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


class BaseGeneratorUtils:
    @staticmethod
    def lookup_type_converter(type):
        # convert incoming type into the encode/decode function suffix
        # NOTE: WIP WIP WIP Copied from DX12 Generator, remove from there to DRY
        # NOTE: WIP WIP WIP -- perhaps we should be passing in a "platform" parameter or find a way to amend or extend the map
        CONVERTER_MAPPING = {
            'UInt8': {'BYTE', 'byte', 'UINT8', 'unsigned char', 'uint8_t'},
            'Int8': {'INT8', 'int8_t'},
            'UInt16': {'UINT16', 'uint16_t'},
            'Int16': {'SHORT', 'int16_t'},
            'UInt32': { 'ULONG', 'DWORD', 'UINT', 'UINT32', 'DXGI_USAGE', 'uint32_t' },
            'Int32': {'HRESULT', 'LONG', 'BOOL', 'INT', 'int32_t'},
            'UInt64': {'UINT64', 'D3D12_GPU_VIRTUAL_ADDRESS', 'uint64_t'},
            'Int64': {'int64_t'},
            'SizeT': {'LONG_PTR', 'SIZE_T', 'size_t'},
            'LUID': {'LUID'},
            'Float': {'FLOAT', 'float'},
            'Void': {'void'},
            'String': {'char'},
            'WString': {'wchar_t'},
            'Function': {'PFN_DESTRUCTION_CALLBACK', 'D3D12MessageFunc'}
        }
        converter = [ k for (k, v) in CONVERTER_MAPPING.items() if type in v ]
        if converter:
            return converter[0]
        return None




