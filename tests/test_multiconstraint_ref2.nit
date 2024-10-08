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

import test_multiconstraint

var a = new A
var b = new B
var c = new C
var ga = new G[A]
var gb = new G[B]
var gc = new G[C]
ga.out0
ga.out1(a)
#ga.out2(a)
gb.out1(b)
gb.out2(b)
gc.out1(c)
gc.out2(c)
