# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

module input is example

import bcm2835

assert bcm2835_init else print "Failed to init"

var out = new RPiPin.p1_11
out.fsel = new FunctionSelect.outp
out.write(false)

var inp = new RPiPin.p1_22
inp.fsel = new FunctionSelect.inpt
inp.pud = new PUDControl.down

var last_in = false
loop
	var lev = inp.lev
	if lev != last_in then
		last_in = lev
		if lev then print "button pressed"
	end

	out.write(true)
	100.bcm2835_delay
	out.write(false)
	100.bcm2835_delay
end
