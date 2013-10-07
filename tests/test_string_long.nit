# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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


var s = "Bonjour !\n"
var r = new Buffer.with_capacity(50)
var r2 = new Buffer

var i = 0
while i < 5000 do
    var j = 0
    while j < s.length do
        r.add(s.chars[j])
        r2.add(s.chars[j])
        j = j + 1
    end
    i = i + 1
end
printn(r)
printn(r2)
