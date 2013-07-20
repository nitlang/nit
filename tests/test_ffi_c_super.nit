# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

class A
	fun id : String do return "A"
end

class B
	super A

	redef fun id : String import super, String::from_cstring, String::to_cstring `{
		char *new_name;
		char *prefix = "B special ";
		char *super_name = String_to_cstring( B_id___super( recv ) );

		new_name = calloc( strlen( prefix )+strlen( super_name )+1, sizeof(char) );
		strcpy( new_name, prefix );
		strcpy( new_name+strlen( prefix ), super_name );
		new_name[ strlen( prefix )+strlen( super_name ) ] = '\0';

		return new_String_from_cstring( new_name );
	`}
end

var a = new A
print a.id

var b = new B
print b.id
