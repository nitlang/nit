# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Examples for Model entities
#
# This module introduce flags in all mentities so they can be tagged as example.
# Flagged classes will be treated differently by the documentation tools.
#
# See `MEntity::is_example` and `MEntity::examples`.
module model_examples

import model

# An example from a MEntity flagged with `is example`.
class MExample

	redef init do
		super
		mentity.mexample = self
	end

	# MEntity containing this example
	var mentity: MEntity

	# MEntities this example is for
	#
	# For each entity we provide a weight so examples can be ranked.
	var example_for = new ArrayMap[MEntity, Int]

	redef fun to_s do return mentity.full_name
end

redef class MEntity

	# Is `self` existing for an example purpose?
	#
	# All mentities annotated with `is example` or located inside a mentity that
	# is an example are considered as examples.
	fun is_example: Bool do return mexample != null

	# Return this entity as a MExample
	var mexample: nullable MExample = null

	# Examples found for `self`
	var examples = new Array[MExample]
end

redef class MPackage
	redef fun examples do
		var res = super
		for mgroup in mgroups do
			for example in mgroup.examples do
				if not res.has(example) then res.add example
			end
		end
		return res
	end
end

redef class MGroup
	redef var is_example is lazy do
		var parent = self.parent
		if parent != null and parent.is_example then return true
		return name == "examples"
	end

	redef fun examples do
		var res = super
		for mmodule in mmodules do
			for example in mmodule.examples do
				if not res.has(example) then res.add example
			end
		end
		return res
	end
end

redef class MClass
	redef var is_example is lazy do return intro.is_example

	redef fun examples do
		var res = super
		for mclassdef in mclassdefs do
			for example in mclassdef.examples do
				if not res.has(example) then res.add example
			end
		end
		return res
	end
end

redef class MProperty
	redef var is_example is lazy do return intro.is_example

	redef fun examples do
		var res = super
		for mpropdef in mpropdefs do
			for example in mpropdef.examples do
				if not res.has(example) then res.add example
			end
		end
		return res
	end
end
