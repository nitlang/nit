# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexandre Terrasa <alexandre@moz-code.org>
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

import wiringPi

if args.length != 1 then
	print "usage: blink pin_id"
	exit(1)
end

# init wiringPi lib
wiringPi_setup

# init the pin
var id = args.first.to_i
var pin = new RPiPin(id)
pin.mode(new RPiPinMode.output_mode)

# blink
loop
	pin.write(true)
	nanosleep(1, 0)
	pin.write(false)
	nanosleep(1, 0)
end
