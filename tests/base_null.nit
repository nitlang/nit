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

import kernel

class A
	redef fun output do 10.output
end

var a: Object = new A
var na: nullable Object = new A
var nn: nullable Object = null

(null == a).output
(null == na).output
(null == nn).output
(null == null).output

'\n'.output

null.is_same_instance(a).output
null.is_same_instance(na).output
null.is_same_instance(nn).output
null.is_same_instance(null).output

'\n'.output

(null != a).output
(null != na).output
(null != nn).output
(null != null).output
