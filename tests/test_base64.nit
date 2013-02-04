# This file is part of NIT ( http://www.nitlanguage.org ).
#
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

import base64

print ":" + "".encode_base64
print "f:      " + "f".encode_base64
print "fo:     " + "fo".encode_base64
print "foo:    " + "foo".encode_base64
print "foob:   " + "foob".encode_base64
print "fooba:  " + "fooba".encode_base64
print "foobar: " + "foobar".encode_base64

print ":" + "".decode_base64
print "Zg==:     " + "Zg==".decode_base64
print "Zm8=:     " + "Zm8=".decode_base64
print "Zm9v:     " + "Zm9v".decode_base64
print "Zm9vYg==: " + "Zm9vYg==".decode_base64
print "Zm9vYmE=: " + "Zm9vYmE=".decode_base64
print "Zm9vYmFy: " + "Zm9vYmFy".decode_base64
