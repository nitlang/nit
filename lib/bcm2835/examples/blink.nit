# This file is part of NIT ( http://www.nitlanguage.org ).
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

module blink is example

import bcm2835

assert bcm2835_init else print "Failed to init"

var out = new RPiPin.p1_11
out.fsel = new FunctionSelect.outp

for i in [0..1000[ do
	out.write(true)
	500.bcm2835_delay
	out.write(false)
	500.bcm2835_delay
end

bcm2835_close
