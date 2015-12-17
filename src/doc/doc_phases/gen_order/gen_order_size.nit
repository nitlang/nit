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

# TOC generation approaches based on size
#
# Size is a generic concept here where it can be about the number of line of code,
# the number of line of documentation or the number of properties.
#
# See included analysis for more details.
module gen_order_size

import gen_order_base
import modelbuilder

# Weight concerns based on their size.
class SizeWeighter
	super MEntityWeighter

	redef fun weight_mgroup(mgroup) do
		var w = 0.0
		for m in mgroup.mmodules do
			weight_mmodule(m)
			w += m.weight
		end
		mgroup.weight = w
	end

	redef fun weight_mmodule(mmodule) do
		mmodule.weight = mmodule.mclassdefs.length.to_f
	end

	redef fun weight_mclassdef(mclassdef) do
		mclassdef.weight = mclassdef.mpropdefs.length.to_f
	end

	redef fun weight_mpropdef(mpropdef) do
		mpropdef.weight = 0.0
	end
end

# Weight concerns based on the number of line of code
#
# TODO exclude lod from loc?
class LOCWeighter
	super MEntityWeighter

	# Model builder used to access AST.
	var modelbuilder: ModelBuilder

	redef fun weight_mgroup(mgroup) do
		var w = 0.0
		for m in mgroup.mmodules do
			weight_mmodule(m)
			w += m.weight
		end
		mgroup.weight = w
	end

	redef fun weight_mmodule(mmodule) do
		var amod = modelbuilder.mmodule2node(mmodule)
		if amod == null then return
		var file = amod.location.file
		if file == null then return
		mmodule.weight = (file.line_starts.length).to_f
	end

	redef fun weight_mclassdef(mclassdef) do
		var loc = mclassdef.location
		mclassdef.weight = (loc.line_end - loc.line_start).to_f
	end

	redef fun weight_mpropdef(mpropdef) do
		var loc = mpropdef.location
		mpropdef.weight = (loc.line_end - loc.line_start).to_f
	end
end

# Weight concerns based on the number of line of documentation
class LODWeighter
	super MEntityWeighter

	redef fun weight_mgroup(mgroup) do
		var w = 0.0
		for m in mgroup.mmodules do
			weight_mmodule(m)
			w += m.weight
		end
		mgroup.weight = w
	end

	redef fun weight_mentity(mconcern) do
		var doc = mconcern.mdoc
		if doc != null then
			mconcern.weight = doc.content.length.to_f
		end
	end
end
