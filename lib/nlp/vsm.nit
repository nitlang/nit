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

# NLPVector Space Model.
#
# The Vector Space Model (VSM) is used to compare natural language texts.
# Texts are translated to multidimensionnal vectors then compared by cosine
# similarity.
module vsm

import counter

# A multi-dimensional vector.
class NLPVector
	super Counter[String]

	# Cosine similarity of `self` and `other`.
	#
	# Gives the proximity in the range `[0.0 .. 1.0]` where 0.0 means that the
	# two vectors are orthogonal and 1.0 means that they are identical.
	#
	# ~~~
	# var v1 = new NLPVector
	# v1["x"] = 1
	# v1["y"] = 2
	# v1["z"] = 3
	#
	# var v2 = new NLPVector
	# v2["x"] = 1
	# v2["y"] = 2
	# v2["z"] = 3
	#
	# var v3 = new NLPVector
	# v3["a"] = 1
	# v3["b"] = 2
	# v3["c"] = 3
	#
	# print v1.cosine_similarity(v2)
	# #assert v1.cosine_similarity(v2) == 1.0
	# print v1.cosine_similarity(v3)
	# assert v1.cosine_similarity(v3) == 0.0
	# ~~~
	fun cosine_similarity(other: SELF): Float do
		# Collect terms
		var terms = new HashSet[String]
		for k in self.keys do terms.add k
		for k in other.keys do terms.add k

		# Get dot product of two verctors
		var dot = 0
		for term in terms do
			dot += self.get_or_default(term, 0) * other.get_or_default(term, 0)
		end

		return dot.to_f / (self.norm * other.norm)
	end

	# The norm of the vector.
	#
	# `||x|| = (x1 ** 2 ... + xn ** 2).sqrt`
	#
	# ~~~
	# var v = new NLPVector
	# v["x"] = 1
	# v["y"] = 1
	# v["z"] = 1
	# v["t"] = 1
	# assert v.norm.is_approx(2.0, 0.001)
	#
	# v["x"] = 1
	# v["y"] = 2
	# v["z"] = 3
	# v["t"] = 0
	# assert v.norm.is_approx(3.742, 0.001)
	# ~~~
	fun norm: Float do
		var sum = 0
		for v in self.values do sum += v ** 2
		return sum.to_f.sqrt
	end
end
