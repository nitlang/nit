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

import base_conflict_submodule_name_submodule1
import base_conflict_submodule_name_submodule2

var a1 = newa1
fooa1(a1)
var a2 = newa2
fooa2(a2)
#alt1#fooa1(a2)
#alt2#fooa2(a1)
