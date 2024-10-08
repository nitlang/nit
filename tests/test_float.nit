# This file is part of NIT ( https://nitlanguage.org ).
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

var f = 5.5 
f.output
(f/10.0).output
f = 12.34567891011
print(f)
print(f.to_s)
print(f.to_precision(3))
print(f.to_precision(1))
print(f.to_precision(0))
f = 5.0e-1
print(f)
f = 3.125e-6
print(f.to_precision(3))
print(f.to_precision(9))
f = 3.41e3
print f
f = 4e2
print f
f = .1e2
print f
