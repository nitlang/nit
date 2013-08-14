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

# Implementation of the method-related annotation `cached`
#
# Note this module can be used as a reference on how to implements
# complex annotation that modify both the model and the AST of a Nit program
module cached

import modelize_property
import parser_util
import simple_misc_analysis

redef class ToolContext
	var cached_phase: Phase = new CachedPhase(self, [modelize_property_phase])
end

private class CachedPhase
	super Phase

	init(toolcontext, depends)
	do
		# FIXME The phase has to be executed just after `modelize_property_phase`
		# But there is no simple way to express this
		# So, for the moment, I just looked at the linearization and see what phase is after `modelize_property_phase`
		# And inserted before it
		toolcontext.phases.add_edge(toolcontext.simple_misc_analysis_phase, self)
	end

	redef fun process_annotated_node(npropdef, nat)
	do
		# Skip if we are not interested
		if nat.n_atid.n_id.text != "cached" then return

		# Do some validity checks and print errors if the annotation is used incorrectly
		var modelbuilder = toolcontext.modelbuilder

		if not npropdef isa AConcreteMethPropdef then
			modelbuilder.error(npropdef, "Syntax error: only a function can be cached.")
			return
		end

		var mpropdef = npropdef.mpropdef.as(not null)

		var mtype = mpropdef.msignature.return_mtype
		if mtype == null then
			modelbuilder.error(npropdef, "Syntax error: only a function can be cached.")
			return
		end

		if not npropdef.n_signature.n_params.is_empty then
			modelbuilder.error(npropdef, "Syntax error: only a function without arguments can be cached.")
			return
		end

		# OK, let we do some meta-programming...

		var location = npropdef.location
		var name = mpropdef.mproperty.name
		var nclassdef = npropdef.parent.as(AStdClassdef)
		var mclassdef = nclassdef.mclassdef.as(not null)

		# Create a new private attribute to store the cache
		var cache_mpropdef = new MAttributeDef(mclassdef, new MAttribute(mclassdef, "@{name}<cache>", private_visibility), location)
		cache_mpropdef.static_mtype = mtype.as_nullable

		# Create another new private attribute to store the boolean «is the function cached?»
		# The point is to manage the case where `null' is a genuine return value of the method
		var is_cached_mpropdef = new MAttributeDef(mclassdef, new MAttribute(mclassdef, "@{name}<is_cached>", private_visibility), location)
		is_cached_mpropdef.static_mtype = mclassdef.mmodule.get_primitive_class("Bool").mclass_type
		# FIXME? Because there is a default value ("false") a real propdef is required
		var is_cached_npropdef = toolcontext.parse_propdef("var is_cached = false").as(AAttrPropdef)
		associate_propdef(is_cached_mpropdef, is_cached_npropdef)

		# Create a new private method to do the real work
		var real_mpropdef = new MMethodDef(mclassdef, new MMethod(mclassdef, "{name}<real>", private_visibility), location)
		real_mpropdef.msignature = mpropdef.msignature
		# FIXME: Again, if the engine require a real propdef even if it is empty
		var real_npropdef = toolcontext.parse_propdef("fun real do end").as(AConcreteMethPropdef)
		associate_propdef(real_mpropdef, real_npropdef)
		# Note: the body is set at the last line of this function

		# Save the original body
		var real_body = npropdef.n_block.as(not null)

		# Replace the original body with a new body that do the proxy'n'cache work
		var proxy_body = toolcontext.parse_stmts("if self._is_cached then return self._cache.as(not null)\nvar res = call_real\nself._cache_write = res\nself._is_cached_write = true\nreturn res")
		real_body.replace_with(proxy_body)

		# Do some transformation on the identifiers used on the proxy body so that correct entities are designated
		# FIXME: we just trick the following phases into associating by name some tokens with some model-entities
		# But this is bad at at least two levels
		# - we already know the real model-entities, so why doing latter the association and not now?
		# - associating by names may cause a useless fragility (name-conflicts, etc.)
		proxy_body.collect_tokens_by_text("_is_cached").first.text = is_cached_mpropdef.mproperty.name
		proxy_body.collect_tokens_by_text("_is_cached_write").first.text = is_cached_mpropdef.mproperty.name
		proxy_body.collect_tokens_by_text("_cache").first.text = cache_mpropdef.mproperty.name
		proxy_body.collect_tokens_by_text("_cache_write").first.text = cache_mpropdef.mproperty.name
		proxy_body.collect_tokens_by_text("call_real").first.text = real_mpropdef.mproperty.name

		# FIXME a last transformation cannot be done yet. So, the call to `super` (ASuperExpr) is broken in cached methods.

		# Give the original body to the private real methoddef
		real_npropdef.n_block.replace_with(real_body)
	end

	# Detach `n` from its original AST and attach it to `m` (and its related AST)
	# `n' must not be already attached to an existing model entity
	# `m' must not be already attached to an existing AST node
	fun associate_propdef(m: MPropDef, n: APropdef)
	do
		# FIXME: the model-AST relations **must** be rationalized:
		# * 1- fragility: the risk of inconsistencies is too hight
		# * 2- complexity: there is too much paths to access the same things

		# Easy attach
		assert n.mpropdef == null
		n.mpropdef = m

		# Required to so that look-for implementation works
		assert not toolcontext.modelbuilder.mpropdef2npropdef.has_key(m)
		toolcontext.modelbuilder.mpropdef2npropdef[m] = n

		var mclassdef = m.mclassdef
		var nclassdef = toolcontext.modelbuilder.mclassdef2nclassdef[mclassdef]
		# Sanity checks
		assert nclassdef.mclassdef == mclassdef

		# Required so that propdef are visited in visitors
		if not nclassdef.n_propdefs.has(n) then nclassdef.n_propdefs.add(n)
	end
end
