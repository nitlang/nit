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

module syntax_annotations2 is
	annot
	annot2
end

import kernel is annot
import kernel is annot, annot2
import kernel is
	annot
	annot2
end

class A
	annot
	super Toto is annot
	super Tata is annot, annot2
	super Titi is
		annot
		annot2
	end
	fun foo1 is
		annot
	do
		var x: Toto@foo
	end
	fun foo2 is annot
	fun foo3 is annot, annot2
	fun foo4 is
		annot
		annot2
	end
	var bar: Int is annot, annot2
	var bar2: Int is
		annot
		annot2
	end
end

interface Toto
end
interface Tata
end
interface Titi
end
