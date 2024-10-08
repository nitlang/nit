# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

fun one: Int do return 1
fun two: Int do return 2
fun three: Int do return 3

(-(one)).output
(two+three).output
(two-three).output
(two*three).output
(two/three).output
(two%three).output
'\n'.output

(three+two).output
(three-two).output
(three*two).output
(three/two).output
(three%two).output
'\n'.output

(not one==two).output
(two==two).output
'\n'.output

(not one.is_same_instance(two)).output
(two.is_same_instance(two)).output
'\n'.output

(not one>two).output
(not two>two).output
(three>two).output
'\n'.output

(not one>=two).output
(two>=two).output
(three>=two).output
'\n'.output

(one<two).output
(not two<two).output
(not three<two).output
'\n'.output

(one<=two).output
(two<=two).output
(not three<=two).output
'\n'.output

(not one>=two).output
(two>=two).output
(three>=two).output
'\n'.output

(one<=>two).output
(two<=>two).output
(three<=>two).output
'\n'.output

one.successor(1).output
three.predecessor(1).output
