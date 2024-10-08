# This file is part of NIT ( https://nitlanguage.org ).
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

# Explain failed assert to the console (service declaration only)
#
# The only service `assert_expr_str` is implemented by the
# `explain_assert` module.
module explain_assert_api

import parser

redef class AAssertExpr
	# Superstring explaining `self` if the assert fails
	#
	# Engines should print out this superstring.
	fun explain_assert_str: nullable ASuperstringExpr do return null
end
