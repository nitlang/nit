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

# Approximation of Pi using a Monte Carlo simulation.
#
# This is just an example of basic math and random operations.
module montecarlo

# Number of iterations
var n = 1000
if args.not_empty then n = 2 ** args.first.to_i

# Threshold for output
var j = 1

# Number of hits
var h = 0

for i in [1..n] do
	# Random position in the ([0..1[,[0..1[) square
	var x = 1.0.rand
	var y = 1.0.rand

	# Hit if in the circle
	if x*x + y*y <= 1.0 then h += 1

	# Print
	if i >= j or i == n then
		print "i={i} h={h} p={(4.0*h.to_f/i.to_f).to_precision(6)}"
		j *= 2
	end
end
