# This file is part of NIT ( http://www.nitlanguage.org ).
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

meth a
	with a1
	with a2 #!alt1#
#alt2#	with a3
do
	a1
	a2 #!alt1#
#alt2#	a3
end

meth b
	with b1
	with b2
do
	b1
	b2
end

meth c
	with c1
do
	c1
end

meth d
	with d1
	with d2
	with d3
do
	d1
	d2
	d3
end

0.output
a with do
	b with do
		1.output
	with do #!alt3#
		2.output #!alt3#
#alt4#	with do
#alt4#		20.output
	end
with do
	3.output
end
4.output
c with do
	d with do
		5.output
	with do
		6.output
	with do 7.output
end
8.output
