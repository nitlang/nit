# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module geometry

interface Pointable[N: Numeric]
	fun x: N is abstract
	fun y: N is abstract
end

class Point[N: Numeric]
	super Pointable[N]

	redef var x: N
	redef var y: N

	init(x, y: N)
	do
		self.x = x
		self.y = y
	end
end
