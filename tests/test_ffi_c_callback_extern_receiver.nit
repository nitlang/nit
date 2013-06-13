# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Jean-Philippe Caissy <jpcaissy@piji.ca>
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# tests for a recurring bug when callbacking a Nit method on an extern receiver 
module test_ffi_c_callback_extern_receiver

`{
#include <stdio.h>
`}

extern Test
    new create_me is extern `{
        int* foobar = malloc(sizeof(int));
        *foobar = 12345;
        return foobar;
    `}

    fun test_me is extern import Test::foo, String::from_cstring `{
        int i;
        for(i = 0; i < 2000; ++i) {
            printf("%d\n", i);
            Test_foo(recv, new_String_from_cstring("asdf"));
        }
    `}

    fun foo(bar : String) do
        print bar
    end
end

var t = new Test.create_me
t.test_me
