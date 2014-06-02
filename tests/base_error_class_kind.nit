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

import end

interface Object
end

extern class Pointer
end

##

interface IC
end

abstract class AC
end

class CC
end

enum EnC
end

extern class ExC
end

##

interface SubI
	super IC
	#alt1# super AC
	#alt2# super CC
	#alt3# super EnC
	#alt4# super ExC
end

abstract class SubA
	super IC
	super AC
	super CC
	#alt5# super EnC
	#alt6# super ExC
end

class SubC
	super IC
	super AC
	super CC
	#alt7# super EnC
	#alt8# super ExC
end

enum SubEn
	super IC
	#alt9# super AC
	#alt10# super CC
	#alt11# super EnC
	#alt12# super ExC
end

extern class SubEx
	super IC
	#alt13# super AC
	#alt14# super CC
	#alt15# super EnC
	super ExC
end
