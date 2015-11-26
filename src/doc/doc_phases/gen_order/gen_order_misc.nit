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
module gen_order_misc

import gen_order_base

# Always set weight to `0`.
#
# Dummy weighter used to reproduce the model order.
class NoneWeighter
	super MEntityWeighter

	redef fun weight_mentity(concern) do concern.weight = 0.0
end

# Set a random weight.
#
# Dummy weighter used to produce the *worst* possible result.
#
# Weight is between `0.0` and `100.0`.
class RandomWeighter
	super MEntityWeighter

	redef fun weight_mentity(concern) do concern.weight = 100.0.rand
end

# Weight entities following code declaration order.
class NaturalWeighter
	super MEntityWeighter

	# Custom order
	var alphabet: String is lazy do return "_0123456789abcdefghijklmnopqrstuvwxyz".reversed

	private fun weight_name(name: String): Float do
		var w = 0.0
		for i in [0..name.chars.length[ do
			var c = name.chars[i].to_lower
			w += alphabet.index_of(c).to_f / (10 ** i).to_f
		end
		return w
	end

	redef fun weight_mpackage(mpackage) do
		mpackage.weight = weight_name(mpackage.name)
	end

	redef fun weight_mgroup(mgroup) do
		mgroup.weight = weight_name(mgroup.name)
	end

	redef fun weight_mmodule(mmodule) do
		mmodule.weight = weight_name(mmodule.name)
	end

	redef fun weight_mclass(mclass) do
		mclass.weight = weight_name(mclass.name)
	end

	redef fun weight_mclassdef(mclassdef) do
		mclassdef.weight = 1.0 / mclassdef.location.line_start.to_f
	end

	redef fun weight_mproperty(mproperty) do
		mproperty.weight = weight_name(mproperty.name)
	end

	redef fun weight_mpropdef(mpropdef) do
		mpropdef.weight = mpropdef.location.line_start.to_f
	end
end
