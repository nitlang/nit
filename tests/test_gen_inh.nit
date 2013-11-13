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

import kernel

class Gen1[E, F]

   readable writable var _e: E
   var _f_: F
   fun f: F do return _f_ end 
   fun f=(x: F) do _f_ = x end

   init(e:E) do _e = e
end

class Gen2[G: Int]
	super Gen1[G, Char]
   init(e:G) do super(e)
end

class Gen3[H: Int]
	super Gen1[H, Char]
   redef readable redef writable redef var _e: H
   redef var _f_: Char = 'N'
   redef fun f: Char do return _f_ end 
   redef fun f=(x: Char) do _f_ = x end

   init(e:H) do super(e)
end

var g1 = new Gen1[Int, Char](1)
var g2 = new Gen2[Int](2)
var g3 = new Gen3[Int](3)
g1.e = 1
g1.f = '1'
g2.e = 2
g2.f = '2'
g3.e = 3
g3.f = '3'

g1.f.output
g1.e.output
g2.f.output
g2.e.output
g3.f.output
g3.e.output

g1 = g2
g1.f.output
g1.e.output

g1 = g3
g1.f.output
g1.e.output
