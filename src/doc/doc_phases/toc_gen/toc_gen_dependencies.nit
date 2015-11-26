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

# TOC generation approaches based on dependencies/inheritance.
module toc_gen_dependencies

import toc_gen_base

# Weight concerns based on dependencies.
class DepWeighter
	super ConcernsWeighter

	# Main module used to resolve class hierarchy
	var mainmodule: MModule

	redef fun weight_mmodule(mmodule) do
		mmodule.weight = mmodule.in_importation.greaters.length.to_f
	end

	redef fun weight_mclassdef(mclassdef) do
		mclassdef.weight = 1.0 / mclassdef.mclass.in_hierarchy(mainmodule).greaters.length.to_f
	end

	redef fun weight_mpropdef(mpropdef) do
		if mpropdef.is_intro then
			mpropdef.weight = 2.0
		else
			mpropdef.weight = 1.0
		end
	end
end
