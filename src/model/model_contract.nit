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

# The abstract concept of a contract in the model
module model_contract
import model
import scope

# The root of all contracts
abstract class MContract
	super MMethod
end

# An expect (precondition) contract representation
class MExpect
	super MContract
end

# The root of all contracts where the call is after the execution of the original method (`invariant` and `ensure`).
abstract class BottomMContract
	super MContract
end

# A ensure (postcondition) representation
class MEnsure
	super BottomMContract

	# Old MClass, this class contains the set of old attributes used in the contract
	var old_mclass: nullable MOldClass = null

	# Check if self has an old mclass
	private fun check_old_mclass: Bool
	do
		return self.old_mclass != null
	end

	# Build old_mclass if it does not exist already and return it
	private fun build_old_mclass: MOldClass
	do
		var m_old_mclass = self.old_mclass
		# build a new `MClass` to keep the old value
		if m_old_mclass == null then m_old_mclass = new MOldClass(intro_mclassdef.mmodule, "old_{self.c_name}", intro_mclassdef.location, new Array[String], concrete_kind, public_visibility)
		self.old_mclass = m_old_mclass
		return m_old_mclass
	end
end

# An invariant contract representation
class MInvariant
	super BottomMContract
end

# A facet contract representation
# This class is created to keep the information of which method is a contract facet
class MFacet
	super MMethod
end

redef class MMethod

	# The contract facet of the method
	# is representing the method with a contract
	# This method calls the contract and the method
	var mcontract_facet: nullable MFacet = null

	# The contract facet of the method with an invariant
	# is representing the method with a contract
	# This method calls the `mcontract_facet`
	var minvariant_facet: nullable MFacet = null

	# The expected contract method
	var mexpect: nullable MExpect = null

	# The ensure contract method
	var mensure: nullable MEnsure = null

	# Build ensure if is not exist and return it
	private fun build_ensure: MEnsure
	do
		var m_mensure = self.mensure
		# build a new `MEnsure` contract
		if m_mensure == null then m_mensure = new MEnsure(intro_mclassdef, "_ensure_{name}", intro_mclassdef.location, public_visibility)
		self.mensure = m_mensure
		return m_mensure
	end

	# Check if the MMethod has no ensure contract
	private fun check_ensure: Bool
	do
		return self.mensure != null
	end

	# Build expect if is not exist and return it
	private fun build_expect: MExpect
	do
		var m_mexpect = self.mexpect
		# build a new `MExpect` contract
		if m_mexpect == null then m_mexpect = new MExpect(intro_mclassdef, "_expect_{name}", intro_mclassdef.location, public_visibility)
		self.mexpect = m_mexpect
		return m_mexpect
	end

	# Check if the MMethod has no expect contract
	private fun check_expect: Bool
	do
		return self.mexpect != null
	end

	# Build contract facet if is not exist and return it
	private fun build_contract_facet: MFacet
	do
		var m_mcontract_facet = self.mcontract_facet
		# build a new `MFacet` contract
		if m_mcontract_facet == null then m_mcontract_facet = new MFacet(intro_mclassdef, "_contract_{name}", intro_mclassdef.location, public_visibility)
		self.mcontract_facet = m_mcontract_facet
		return m_mcontract_facet
	end

	# Check if the MMethod has an contract facet
	private fun check_contract_facet: Bool
	do
		return self.mcontract_facet != null
	end

	# Build invariant_facet if is not exist and return it
	private fun build_invariant_facet: MFacet
	do
		var m_minvariant_facet = self.minvariant_facet
		# build a new `MFacet` contract
		if m_minvariant_facet == null then m_minvariant_facet = new MFacet(intro_mclassdef, "_contract_inv_{name}", intro_mclassdef.location, public_visibility)
		self.minvariant_facet = m_minvariant_facet
		return m_minvariant_facet
	end

	# Check if the MMethod has an invariant facet
	private fun check_invariant_facet: Bool
	do
		return self.minvariant_facet != null
	end
end

redef class MClass
	# The invariant contract method
	# This method checks all invariants
	var minvariant: nullable MInvariant = null

	# Check if the MClass has no invariant contract
	private fun has_invariant: Bool do return self.minvariant != null
end

# Representation of `old` class to store an old context
class MOldClass
	super MClass

	# Property to init all old attributes.
	var init_old_property: nullable MMethod

	# The old variable.
	var old_variable = new Variable("old")
end

class MOldInit
	super MMethod
end

redef class MModule
	fun get_mclassdef(mclass: MClass): nullable MClassDef
	do
		for mclassdef in mclassdefs do
			if mclassdef.mclass == mclass then return mclassdef
		end
		return null
	end
end