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

var x = ""
do
	x = "1st lvl do"
	print x
	do
		x = "2nd lvl do"
		print x
		do
			x = "3rd lvl do"
			print x
		end
		abort
	catch
		x = "2nd lvl catch"
		print x
		abort
	end
catch
	x = "1st lvl catch"
	print x
end
x = "fin du programme"
print x
