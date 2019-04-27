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

# Check usage of contract on a diamond inheritance

class ArrayInt
	super Array[Int]

	fun toto(e: Int)
	do
		print "toto ArrayInt"
	end
end


class MyArrayInt
	super ArrayInt

	redef fun toto(e)
	is
		ensures(e == 12)
	do
		print "toto MyArrayInt"
		super e
	end
end

class MyArrayInt2
	super ArrayInt

	redef fun toto(e)
	is
		ensures(e == 11)
	do
		print "toto MyArrayInt2"
		super e
		print "Good"
	end
end

class MySubArray
	super MyArrayInt
	super MyArrayInt2
end

var test = new MySubArray
test.toto(11)# fail contract on MyArrayInt define e == 12
