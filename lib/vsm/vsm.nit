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

# Vector Space Model
#
# Vector Space Model (VSM) is an algebraic model for representing text documents
# (and any objects, in general) as vectors of identifiers, such as, for example,
# index terms.
#
# It is used in information filtering, information retrieval, indexing and
# relevancy rankings.
module vsm

import counter

# A n-dimensions vector
#
# *n-dimensions* vectors are used to represent a text document or an object.
class Vector
	super HashMap[nullable Object, Float]

	# Cosine similarity of `self` and `other`.
	#
	# Gives the proximity in the range `[0.0 .. 1.0]` where 0.0 means that the
	# two vectors are orthogonal and 1.0 means that they are identical.
	#
	# ~~~
	# var v1 = new Vector
	# v1["x"] = 1.0
	# v1["y"] = 2.0
	# v1["z"] = 3.0
	#
	# var v2 = new Vector
	# v2["x"] = 1.0
	# v2["y"] = 2.0
	# v2["z"] = 3.0
	#
	# var v3 = new Vector
	# v3["a"] = 1.0
	# v3["b"] = 2.0
	# v3["c"] = 3.0
	#
	# print v1.cosine_similarity(v2)
	# assert v1.cosine_similarity(v2) == 1.0
	# print v1.cosine_similarity(v3)
	# assert v1.cosine_similarity(v3) == 0.0
	# ~~~
	fun cosine_similarity(other: SELF): Float do
		# Collect terms
		var terms = new HashSet[nullable Object]
		for k in self.keys do terms.add k
		for k in other.keys do terms.add k

		# Get dot product of two vectors
		var dot = 0.0
		for term in terms do
			dot += self.get_or_default(term, 0.0) * other.get_or_default(term, 0.0)
		end
		var cos = dot.to_f / (self.norm * other.norm)
		if cos.is_nan then return 0.0
		return cos
	end

	# The norm of the vector.
	#
	# `||x|| = (x1 ** 2 ... + xn ** 2).sqrt`
	#
	# ~~~
	# var v = new Vector
	# v["x"] = 1.0
	# v["y"] = 1.0
	# v["z"] = 1.0
	# v["t"] = 1.0
	# assert v.norm.is_approx(2.0, 0.001)
	#
	# v["x"] = 1.0
	# v["y"] = 2.0
	# v["z"] = 3.0
	# v["t"] = 0.0
	# assert v.norm.is_approx(3.742, 0.001)
	# ~~~
	fun norm: Float do
		var sum = 0.0
		for v in self.values do sum += v.pow(2.0)
		return sum.to_f.sqrt
	end

	redef fun to_s do
		return "[{join(", ", ":")}]"
	end
end
