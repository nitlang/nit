# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Basic Java collections
#
# ~~~
# var coll = new JavaArray(2)
#
# assert coll[0].is_java_null
# coll[0] = "zero".to_java_string
# coll[1] = "one".to_java_string
#
# assert coll.length == 2
# assert coll.first.to_s == "zero"
# assert coll[1].to_s == "one"
# assert [for e in coll do e.to_s] == ["zero", "one"]
# ~~~
module collections

import java

# Java primitive array
#
# These have fixed size so they offer the same services as `SequenceRead` and
# `[]=`, but would not support `Sequence::add`.
extern class AbstractJavaArray[E: Object]
	super SequenceRead[E]
	super JavaObject

	# Set the `value` at `key`
	fun []=(key: Int, value: E) is abstract

	redef fun iterator do return new JavaArrayIterator[E](self)

	redef fun reverse_iterator do return new JavaArrayReverseIterator[E](self)
end

# Java primitive array `float[]`
#
# Note that Nit `Float` is the size of a double, so storing them in a
# `JavaFloatArray` may lead to a loss of precision.
extern class JavaFloatArray in "Java" `{ float[] `}
	super AbstractJavaArray[Float]

	# Get a new array of the given `size`
	new(size: Int) in "Java" `{ return new float[(int)size]; `}

	redef fun [](i) in "Java" `{ return (double)recv[(int)i]; `}

	redef fun []=(i, e) in "Java" `{ recv[(int)i] = (float)e; `}

	redef fun length in "Java" `{ return recv.length; `}
end

# Java primitive array `double[]`
extern class JavaDoubleArray in "Java" `{ double[] `}
	super AbstractJavaArray[Float]

	# Get a new array of the given `size`
	new(size: Int) in "Java" `{ return new double[(int)size]; `}

	redef fun [](i) in "Java" `{ return recv[(int)i]; `}

	redef fun []=(i, e) in "Java" `{ recv[(int)i] = (float)e; `}

	redef fun length in "Java" `{ return recv.length; `}
end

# Java primitive array `Object[]`
extern class JavaArray in "Java" `{ java.lang.Object[] `}
	super AbstractJavaArray[JavaObject]

	# Get a new array of the given `size`
	new(size: Int) in "Java" `{ return new Object[(int)size]; `}

	redef fun [](i) in "Java" `{ return recv[(int)i]; `}

	redef fun []=(i, e) in "Java" `{ recv[(int)i] = e; `}

	redef fun length in "Java" `{ return recv.length; `}
end

# TODO other primitive arrays:
# * Java primitive array `byte[]`
# * Java primitive array `short[]`
# * Java primitive array `int[]`
# * Java primitive array `long[]`
# * Java primitive array `boolean[]`
# * Java primitive array `char[]`

# An `Iterator` on Java primitive arrays
private class JavaArrayIterator[E: Object]
	super IndexedIterator[E]

	var array: AbstractJavaArray[E]

	redef fun item do return array[index]

	redef fun is_ok do return index < array.length

	redef fun next do index += 1

	redef var index = 0
end

# A reverse `Iterator` on Java primitive arrays
private class JavaArrayReverseIterator[E: Object]
	super IndexedIterator[E]

	var array: AbstractJavaArray[E]

	redef fun item do return array[index]

	redef fun is_ok do return index >= 0

	redef fun next do index -= 1

	redef var index = array.length - 1
end
