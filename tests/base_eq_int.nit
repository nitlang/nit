# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

import kernel

var a = 5
var b = 5
var c: Object = 5
var d: Object = 6
var e: Object = 5.0

(5 == 5).output
(not 5 == 5.0).output
(5.0 == 5.0).output
(not 5.0 == 5).output
(not 6 == 5).output
(not 6 == 5.0).output
(not 6.0 == 5.0).output
(not 6.0 == 5).output

'\n'.output

(a is 5).output
(not a is 6).output
(a is a).output
(a is b).output
(a is c).output
(not a is d).output
(not a is e).output

'\n'.output

(a == 5).output
(not a == 6).output
(a == a).output
(a == b).output
(a == c).output
(not a == d).output
(not a == e).output

'\n'.output

(c is 5).output
(not c is 6).output
(c is a).output
(c is b).output
(c is c).output
(not c is d).output
(not c is e).output

'\n'.output

(c == 5).output
(not c == 6).output
(c == a).output
(c == b).output
(c == c).output
(not c == d).output
(not c == e).output

