# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

import base_super_linext

redef class A
	redef fun foo
	do
		'a'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'a'
	end
end

redef class B
	redef fun foo
	do
		'b'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'b'
	end
end

redef class C
	redef fun foo
	do
		'c'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'c'
	end
end

redef class D
	redef fun foo
	do
		'd'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'd'
	end
end
