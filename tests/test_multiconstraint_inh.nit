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

import kernel

class A
end

class I[F]
   fun foo do 1.output end
end

class J
	super I[A]
   fun bar do 2.output end

	init do end
end

class G[E]
   fun baz(e: I[E]) do e.foo end
end

class H[F]
	super G[A]
   redef fun baz(e: J) do e.bar end

   init do end
end

var ha = new H[A]
var j =  new J
ha.baz(j)
