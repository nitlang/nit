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

class A
	fun foo do
		print "about to abort in A.foo"
		abort
	end

	fun test do
		var b
		do
			b = new A
			foo
		catch
			print "catched abort from A.foo"
			b = new B
			b.bar
		end
	end
end

class B
	fun bar do
		print "about to abort in B.bar"
		abort
	end

end

do
	var a = new A
	a.test
catch
	print "catched the abort from B.bar"
end
