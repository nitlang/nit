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

# Commands about how mentities are used
module commands_usage

import commands_model
import semantize

# Retrieve all the mproperties using `mentity` as a type for its parameters
#
# `mentity` must be a MClass or a MClassDef.
class CmdParam
	super CmdEntityList

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MClassDef then mentity = mentity.mclass
		if not mentity isa MClass then return new ErrorNotClass(mentity)

		var mentities = new HashSet[MEntity]
		for mproperty in model.collect_mproperties(filter) do
			if not mproperty isa MMethod then continue
			var msignature = mproperty.intro.msignature
			if msignature != null then
				for mparam in msignature.mparameters do
					var mtype = mparam.mtype
					if mtype isa MNullableType then mtype = mtype.mtype
					if not mtype isa MClassType then continue
					if mtype.mclass != mentity then continue
					mentities.add mproperty
				end
			end
		end
		results = mentities.to_a
		return res
	end
end

# Retrieve all the mproperties that return somethinf of the `mentity` type.
#
# `mentity` must be a MClass or a MClassDef.
class CmdReturn
	super CmdEntityList

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MClassDef then mentity = mentity.mclass
		if not mentity isa MClass then return new ErrorNotClass(mentity)

		var mentities = new HashSet[MEntity]
		for mproperty in model.collect_mproperties(filter) do
			if not mproperty isa MMethod then continue
			var msignature = mproperty.intro.msignature
			if msignature != null then
				var mtype = msignature.return_mtype
				if mtype == null then continue
				if mtype isa MNullableType then mtype = mtype.mtype
				if not mtype isa MClassType then continue
				if mtype.mclass != mentity then continue
				mentities.add mproperty
			end
		end
		results = mentities.to_a
		return res
	end
end

# Retrieve all the mproperties that initialize `mentity`
#
# `mentity` must be a MClass or a MClassDef.
class CmdNew
	super CmdEntityList

	autoinit(model, modelbuilder, filter, mentity, mentity_name, limit, page, count, max)

	# ModelBuilder used to retrieve AST nodes
	var modelbuilder: ModelBuilder

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MClassDef then mentity = mentity.mclass
		if not mentity isa MClass then return new ErrorNotClass(mentity)

		var mentities = new HashSet[MEntity]
		for mpropdef in model.collect_mpropdefs(filter) do
			var visitor = new TypeInitVisitor(mentity)
			var npropdef = modelbuilder.mpropdef2node(mpropdef)
			if npropdef == null then continue
			visitor.enter_visit(npropdef)
			if visitor.called then
				mentities.add mpropdef
			end
		end
		results = mentities.to_a
		return res
	end
end

# Retrieve all the mproperties that call `mentity`
#
# `mentity` must be a MProperty or a MPropDef.
class CmdCall
	super CmdEntityList

	autoinit(model, modelbuilder, filter, mentity, mentity_name, limit, page, count, max)

	# ModelBuilder used to retrieve AST nodes
	var modelbuilder: ModelBuilder

	redef fun init_results do
		if results != null then return new CmdSuccess

		var res = super
		if not res isa CmdSuccess then return res
		var mentity = self.mentity.as(not null)

		if mentity isa MPropDef then mentity = mentity.mproperty
		if not mentity isa MProperty then return new ErrorNotProperty(mentity)

		var mentities = new HashSet[MEntity]
		for mpropdef in model.collect_mpropdefs(filter) do
			if mpropdef.mproperty == mentity then continue
			var visitor = new MPropertyCallVisitor
			var npropdef = modelbuilder.mpropdef2node(mpropdef)
			if npropdef == null then continue
			visitor.enter_visit(npropdef)
			if visitor.calls.has(mentity) then
				mentities.add mpropdef
			end
		end
		results = mentities.to_a
		return res
	end
end

## exploration

# Visitor looking for initialized `MType` (new T).
#
# See `NewCmd`.
private class TypeInitVisitor
	super Visitor

	var mclass: MClass

	var called = false

	redef fun visit(node)
	do
		node.visit_all(self)
		# look for init
		if not node isa ANewExpr then return
		var mtype = node.n_type.mtype

		if mtype == null then return
		if mtype isa MNullableType then mtype = mtype.mtype
		if not mtype isa MClassType then return
		if mtype.mclass != mclass then return

		called = true
	end
end

# Visitor looking for calls to a `MProperty` (new T).
#
# See `CallCmd`.
private class MPropertyCallVisitor
	super Visitor

	var calls = new HashSet[MProperty]
	redef fun visit(node)
	do
		node.visit_all(self)
		if not node isa ASendExpr then return
		calls.add node.callsite.as(not null).mproperty
	end
end

# The MEntity is not a MClass or a MClassDef
class ErrorNotClass
	super CmdError

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "`{mentity.full_name}` is not a class"
end

# The MEntity is not a MProperty or a MClassDef
class ErrorNotProperty
	super CmdError

	# MEntity provided
	var mentity: MEntity

	redef fun to_s do return "`{mentity.full_name}` is not a property"
end
