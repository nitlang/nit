# This file is part of NIT ( https://nitlanguage.org ).
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

import meta

class XObject
	redef type CLASS: XClass[SELF]
	redef fun class_factory(name) do return new XClass[SELF](name)
end

class XClass[E: XObject]
	super Class[E]
end

class YObject
	redef type CLASS: YClass[SELF]
	redef fun class_factory(name) do return new YClass[SELF](name)
end

class YClass[E: YObject]
	super Class[E]
	super YObject # Yeah, a meta-loop!
end

var s = "hello"
print s.class_name
print s.get_class
print s.get_class.get_class
print s.get_class.get_class.get_class

print ""

var x = new XObject
print x.class_name
print x.get_class
print x.get_class.get_class
print x.get_class.get_class.get_class

print ""

var y = new YObject
print y.class_name
print y.get_class
print y.get_class.get_class
print y.get_class.get_class.get_class
