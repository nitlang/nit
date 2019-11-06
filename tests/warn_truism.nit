# This file is part of NIT ( http://www.nitlanguage.org ).
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

import core::kernel

var a = true
if a == true then end
var b = a != false
var c = ((a or b) == false) and b != true

# only warn the common case (not those)
if true == a then end
if a == (true) then end

# dont warn if operand 1 is not a bool
var o: nullable Bool = a
if o == true then end
if o or else false then end
