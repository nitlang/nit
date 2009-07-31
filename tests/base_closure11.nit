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

fun foo
	!x
do
	'F'.output
	0.output
	bar !y do
		'F'.output
		1.output
		x
		'F'.output
		1.output
	end
	'F'.output
	0.output
end

fun bar
	!y
do
	'B'.output
	0.output
	y
	'B'.output
	0.output
end

'M'.output
0.output
foo !x do
	'M'.output
	1.output
	foo !x do
		'M'.output
		2.output
		#alt1#break
		#alt2#return
	end
	'M'.output
	1.output
end
'M'.output
0.output
