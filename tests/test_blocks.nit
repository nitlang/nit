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


         do
	    printn(0)
	 end
         var a = 1
	 do
	    printn(a)
	 end
	 var b = 2
	 while b < 3 do
	    printn(b)
	    b = b + 1
	 end
	 var c = 3
	 while c < 4 do
	    printn(c)
	    c = c + 1
	 end
	 var d = 4 
	 var e = 2
	 while e > 0 do
	    printn(d)
	    d = d + 1 
	    e = e - 1
	 end
