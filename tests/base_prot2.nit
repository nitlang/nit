# This file is part of NIT ( http://www.nitlanguage.org ).
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

private import base_prot

class A2
	super A
	fun o
	do
		pub
		pro
		#alt1#pri
	end
	init do end
end

class O2
	fun o
	do
		var a = new A
		a.pub
		#alt2#a.pro
		#alt3#a.pri

		var a2 = new A2
		a2.o
		a2.pub
		#alt4#a2.pro
		#alt5#a2.pri
	end
	init do end
end

(new O2).o
