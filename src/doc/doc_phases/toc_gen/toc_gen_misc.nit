# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Miscellaneous TOC generation approaches
module toc_gen_misc

import toc_gen_base

# Always set weight to `0`.
#
# Dummy weighter used to reproduce the model order.
class NoneWeighter
	super ConcernsWeighter

	redef fun weight_concern(concern) do concern.weight = 0.0
end

# Set a random weight.
#
# Dummy weighter used to produce the *worst* possible result.
#
# Weight is between `0.0` and `100.0`.
class RandomWeighter
	super ConcernsWeighter

	redef fun weight_concern(concern) do concern.weight = 100.0.rand
end

# Weight entities following code declaration order.
class NaturalWeighter
	super ConcernsWeighter

	redef fun weight_concern(concern) do
		if concern isa MClassDef then
			concern.weight = 1.0 / concern.location.line_start.to_f
		else if concern isa MPropDef then
			concern.weight = 1.0 / concern.location.line_start.to_f
		else
			concern.weight = 0.0
		end
	end
end
