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

module wiringPi is example

import wiringPi

if args.is_empty or args.length > 2 then
	print "usage:"
	print "\tshift <register> <state>"
	print "\tshift clear"
	print "\tshift all"
	exit(1)
end

# init wiringPi lib
wiringPi_setup

# register layout and pin numbering
var nb_pins = 8
var ser_pin = 7
var rclk_pin = 6
var srclk_pin = 5
var sr = new SR595(nb_pins, ser_pin, rclk_pin, srclk_pin)

# set all registers to 0
if args.first == "clear" then
	sr.clear_registers
# set all registers to 1
else if args.first == "all" then
	var regs = new Array[Bool].filled_with(true, nb_pins)
	sr.clear_registers
	sr.write_all(regs)
# set specified register to specified value
else
	if args[1].to_i == 0 then
		sr.write(args.first.to_i, false)
	else
		sr.write(args.first.to_i, true)
	end
end
