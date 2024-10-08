# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# toplevel comment

# block
# block
# block

# Adoc1
class A # ending comments
	super Object
	# super Int
	super String
	# super Truc

	# inclass comments
	# comm
	#    ented
	#      blocks

	# Adoc2
	fun foo do

		# comment

		var truc

		# comment
		# comment

		# comment

		var chose
		# comment
	end

	# comm
	#    ented
	#      blocks

	fun bar do end
	fun baz do end
	# comment before end
end # ending comments

# comm
#    ented
#      blocks

abstract class B # comment
end

abstract class C end

abstract class B # comment 2
end

abstract class C end
