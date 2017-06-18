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

# Some unit tests on `model`.
#
# Most of tests are actually done through `tests.sh`.
module test_model is test_suite

import test_suite
import model

class TestMType
	super TestSuite

	private var model: ModelDiamond is noinit

	private var mmodule: MModule is noinit

	private var object_type: MClassType is noinit

	private var type_a: MClassType is noinit

	private var type_b: MClassType is noinit

	private var type_c: MClassType is noinit

	private var type_d: MClassType is noinit

	init do
		model = new ModelDiamond
		mmodule = model.mmodule0
		object_type = model.mclass_o.mclass_type
		type_a = model.mclass_a.mclass_type
		type_b = model.mclass_b.mclass_type
		type_c = model.mclass_c.mclass_type
		type_d = model.mclass_d.mclass_type
	end

	fun test_is_subtype_nullable do
		var nullable_b = type_b.as_nullable
		var null_type = new MNullType(model)

		assert type_b.is_subtype(mmodule, null, nullable_b)
		assert not nullable_b.is_subtype(mmodule, null, type_b)
		assert null_type.is_subtype(mmodule, null, nullable_b)
		assert not nullable_b.is_subtype(mmodule, null, null_type)
	end

	fun test_is_subtype_intersection do
		var b_and_c = type_b.intersection(type_c, mmodule)
		var c_and_b = type_c.intersection(type_b, mmodule)

		# Are supertypes of D
		assert type_d.is_subtype(mmodule, null, b_and_c)
		assert type_d.is_subtype(mmodule, null, c_and_b)

		# Are sub-types of A
		assert b_and_c.is_subtype(mmodule, null, type_a)
		assert c_and_b.is_subtype(mmodule, null, type_a)
	end

	fun test_intersection_nullable_not_null do
		# Check that intersection with nullables are correctly computed in
		# order to make `is_subtype` work.

		var nullable_b = type_b.as_nullable
		var b_and_c = nullable_b.intersection(type_c, mmodule)
		var c_and_b = type_c.intersection(nullable_b, mmodule)
		var null_type = new MNullType(model)

		# Equivalence
		assert b_and_c == c_and_b

		# Are not null
		assert not b_and_c.can_be_null(mmodule)
		assert not c_and_b.can_be_null(mmodule)
		assert not null_type.is_subtype(mmodule, null, b_and_c)
		assert not null_type.is_subtype(mmodule, null, c_and_b)
		assert b_and_c.is_subtype(mmodule, null, object_type)
		assert c_and_b.is_subtype(mmodule, null, object_type)

		# Are supertypes of D
		assert type_d.is_subtype(mmodule, null, b_and_c)
		assert type_d.is_subtype(mmodule, null, c_and_b)
	end
end
