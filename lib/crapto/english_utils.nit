# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2016 Philippe Pépos Petitclerc <ppeposp@gmail.com>
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

# English language utilities for cryptographic purposes.
module english_utils

redef class Sys
	# English letter frequency map
	var english_freqs: HashMap[Char, Float] is lazy do
		var freqs = new HashMap[Char, Float]

		freqs['a'] = 0.0651738
		freqs['b'] = 0.0124248
		freqs['c'] = 0.0217339
		freqs['d'] = 0.0349835
		freqs['e'] = 0.1041442
		freqs['f'] = 0.0197881
		freqs['g'] = 0.0158610
		freqs['h'] = 0.0492888
		freqs['i'] = 0.0558094
		freqs['j'] = 0.0009033
		freqs['k'] = 0.0050529
		freqs['l'] = 0.0331490
		freqs['m'] = 0.0202124
		freqs['n'] = 0.0564513
		freqs['o'] = 0.0596302
		freqs['p'] = 0.0137645
		freqs['q'] = 0.0008606
		freqs['r'] = 0.0497563
		freqs['s'] = 0.0515760
		freqs['t'] = 0.0729357
		freqs['u'] = 0.0225134
		freqs['v'] = 0.0082903
		freqs['w'] = 0.0171272
		freqs['x'] = 0.0013692
		freqs['y'] = 0.0145984
		freqs['z'] = 0.0007836
		freqs[' '] = 0.1918182

		return freqs
	end
end

redef class Text

	# Score `self` according to english's letter frequency.
	# This function is useful mainly for cryptography but could happen to be helpful
	# elsewhere.
	#
	#     assert "aaaa".english_scoring > "bbbb".english_scoring
	fun english_scoring: Float do

		var freqs = english_freqs
		var score = 0.0

		for c in self do
			c = c.to_lower
			var points = freqs.get_or_null(c)
			if points != null then
				score += points
			end
		end

		return score

	end
end
