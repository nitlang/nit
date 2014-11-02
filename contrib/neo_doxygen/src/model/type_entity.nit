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

# Typing and parameters.
module model::type_entity

import graph

# Base class of all types and signatures.
abstract class TypeEntity
	super Entity

	init do
		super
		self.labels.add("MType")
	end
end

# A type parameter or a type argument.
#
# Note : The class relationship and the rank are set by `MClassType.put_edges`.
class TypeParameter
	super TypeEntity
	super Parameter

	init do
		super
		self.labels.add("MParameterType")
	end
end

# A signature of a method.
class Signature
	super TypeEntity

	# The parameters.
	var parameters = new Array[MemberParameter]

	# The static type of the returned value.
	var return_type: nullable TypeEntity = null is writable

	init do
		super
		self.labels.add("MSignature")
	end

	redef fun put_in_graph do
		super
		if return_type isa TypeEntity then
			return_type.as(TypeEntity).put_in_graph
		end
		for p in parameters do
			p.put_in_graph
		end
	end

	redef fun put_edges do
		super
		if parameters.length > 0 then
			var names = new JsonArray

			for i in [0..parameters.length[ do
				var p = parameters[i]
				p.rank = i
				names.add(p.name)
				graph.add_edge(self, "PARAMETER", p)
			end
			self["parameter_names"] = names
		end
		if return_type != null then
			graph.add_edge(self, "RETURNTYPE", return_type.as(not null))
		end
	end
end

# A parameter or an argument.
abstract class Parameter
	super Entity

	# The static type of the parameter.
	var static_type: nullable TypeEntity = null is writable

	init do
		super
		self["is_vararg"] = false
		self["rank"] = -1
	end

	# Is the parameter a “vararg”?
	fun is_vararg=(is_vararg: Bool) do
		self["is_vararg"] = is_vararg
	end

	# Is the parameter a “vararg”?
	fun is_vararg: Bool do
		var value = self["is_vararg"]
		assert value isa Bool
		return value
	end

	# Set the rank (index) of the parameter in the signature.
	fun rank=(rank: Int) do
		self["rank"] = rank
	end

	redef fun put_in_graph do
		super
		if static_type != null then
			static_type.as(not null).put_in_graph
		end
	end

	redef fun put_edges do
		super
		graph.add_edge(self, "TYPE", static_type.as(not null))
	end
end

# A parameter of a member.
#
# Note : The rank are set by `Signature.put_edges`.
class MemberParameter
	super Parameter

	init do
		super
		self.labels.add("MParameter")
	end
end
