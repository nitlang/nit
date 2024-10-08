# This file is part of NIT ( https://nitlanguage.org ).
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

intrude import names::n0
intrude import names::n1
intrude import names::n2
intrude import names::n3
intrude import names1

var a

a = new A1
a = new names::A1
a = new names::n0::A1
a = new names::n1::A1
a = new names::n2::A1
a = new names1::A1
a = new names1::names1::A1

a = new P1
a = new names::P1
a = new names::n0::P1
a = new names::n1::P1
a = new names::n2::P1
a = new names1::P1
a = new names1::names1::P1
