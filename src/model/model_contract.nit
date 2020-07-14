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

	# Is the contract is it already applied on the given `mfacet`
	fun is_already_applied(mfacet: MFacet): Bool is abstract
end

# An expect (precondition) contract representation
class MExpect
	super MContract

	redef fun is_already_applied(mfacet: MFacet): Bool do return mfacet.has_applied_expect
end

# The root of all contracts where the call is after the execution of the original method (`invariant` and `ensure`).
abstract class BottomMContract
	super MContract
end

# A ensure (postcondition) representation
class MEnsure
	super BottomMContract

	redef fun is_already_applied(mfacet: MFacet): Bool do return mfacet.has_applied_ensure
end

# An invariant contract representation
class MInvariant
	super BottomMContract

	redef fun is_already_applied(mfacet: MFacet): Bool do return mfacet.has_applied_invariant
end

# A facet contract representation
# This class is created to keep the information of which method is a contract facet
class MFacet
	super MMethod

	# Is there an `expect` contract applied?
	var has_applied_expect: Bool = false

	# Is there an `ensure` contract applied?
	var has_applied_ensure: Bool = false

	# Is there an `invariant` contract applied?
	var has_applied_invariant: Bool = false
end

redef class MClass

	# The `MInvariant` contract if any
	var minvariant: nullable MInvariant = null

	# Is there an invariant contract?
	private fun has_invariant: Bool
	do
		return self.minvariant != null
	end
end

redef class MMethod

	# The contract facet of the method
	# is representing the method with a contract
	# This method calls contracts (expect, ensure) and the method
	var mcontract_facet: nullable MFacet = null

	# The entry point of the method with the invariant and contracts verification
	# This method calls the `mcontract_facet` and invariant contract
	var minvariant_facet: nullable MFacet = null

	# The `MExpect` contract if any
	var mexpect: nullable MExpect = null

	# The `MEnsure` contract if any
	var mensure: nullable MEnsure = null

	# Build `mensure` if is not exist and return it
	private fun build_ensure: MEnsure
	do
		var m_mensure = self.mensure
		# build a new `MEnsure` contract
		if m_mensure == null then m_mensure = new MEnsure(intro_mclassdef, "_ensure_{name}", intro_mclassdef.location, public_visibility)
		self.mensure = m_mensure
		return m_mensure
	end

	# Is there an ensure contract?
	fun has_ensure: Bool
	do
		return self.mensure != null
	end

	# Build `mexpect` if is not exist and return it
	private fun build_expect: MExpect
	do
		var m_mexpect = self.mexpect
		# build a new `MExpect` contract
		if m_mexpect == null then m_mexpect = new MExpect(intro_mclassdef, "_expect_{name}", intro_mclassdef.location, public_visibility)
		self.mexpect = m_mexpect
		return m_mexpect
	end

	# Is there an expect contract?
	fun has_expect: Bool
	do
		return self.mexpect != null
	end

	# Build `mcontract_facet` if is not exist and return it
	private fun build_contract_facet: MFacet
	do
		var m_mcontract_facet = self.mcontract_facet
		# build a new `MFacet` contract
		if m_mcontract_facet == null then m_mcontract_facet = new MFacet(intro_mclassdef, "_contract_{name}", intro_mclassdef.location, public_visibility)
		self.mcontract_facet = m_mcontract_facet
		return m_mcontract_facet
	end

	# Is there an contract facet?
	fun has_contract_facet: Bool
	do
		return self.mcontract_facet != null
	end

	# Build `invariant_facet` if is not exist and return it
	private fun build_invariant_facet: MFacet
	do
		var m_minvariant_facet = self.minvariant_facet
		# build a new `MFacet` contract
		if m_minvariant_facet == null then m_minvariant_facet = new MFacet(intro_mclassdef, "_invariant_{name}", intro_mclassdef.location, public_visibility)
		self.minvariant_facet = m_minvariant_facet
		return m_minvariant_facet
	end

	# Is there an invariant facet?
	fun has_invariant_facet: Bool
	do
		return self.mcontract_facet != null
	end
end
