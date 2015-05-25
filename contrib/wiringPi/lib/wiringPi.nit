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

# Nit wrapping of the wiringPi library [http://wiringpi.com/]
# WiringPi is an Arduino wiring-like library written in C
# and released under the GNU LGPLv3 license which is usable
# from C and C++ and many other languages with suitable wrappers
module wiringPi

in "C Header" `{
	#include <wiringPi.h>

	typedef struct {
		int id;
	} CRPiPin;
`}


redef class Object
	# This initialises wiringPi and assumes that the calling program is
	# going to be using the wiringPi pin numbering scheme.
	fun wiringPi_setup `{ wiringPiSetup(); `}
	# Same as wiringPi_setup, however it allows the calling programs to
	# use the Broadcom GPIO pin numbers directly with no re-mapping.
	fun wiringPi_setup_gpio `{ wiringPiSetupGpio(); `}
	# Identical to wiringPi_setup, however it allows the calling
	# programs to use the physical pin numbers on the P1 connector only.
	fun wiringPi_setup_phys `{ wiringPiSetupPhys(); `}
	# This initialises wiringPi but uses the /sys/class/gpio interface
	# rather than accessing the hardware directly.
	fun wiringPi_setup_sys `{ wiringPiSetupSys(); `}
end

# A Raspberry Pi GPIO Pin
extern class RPiPin `{ CRPiPin *`}
	new (id: Int) `{
		CRPiPin *pin = malloc( sizeof(CRPiPin) );
		pin->id = id;
		return pin;
	`}

	# The pin `id` depends on wiringPi setup used
	fun id: Int `{ return self->id; `}

	# Sets the mode of the pin
	fun mode(mode: RPiPinMode) `{ pinMode(self->id, mode); `}

	# This sets the pull-up or pull-down resistor mode on the given pin,
	# which should be set as an input.
	fun pullup_dncontrol(pud: PUDControl) `{ pullUpDnControl(self->id, pud); `}

	# Writes the value HIGH or LOW (true or false) to the given pin which must
	# have been previously set as an output.
	fun write(high: Bool) `{ digitalWrite(self->id, high? HIGH: LOW); `}

	# Writes the value to the PWM register for the given pin.
	# The Raspberry Pi has one on-board PWM pin, pin 1 (BMC_GPIO 18, Phys 12)
	# and the range is 0-1024.
	# Other PWM devices may have other PWM ranges.
	fun pwm_write(value: Int) `{ pwmWrite(self->id, value); `}

	# This function returns the value read at the given pin.
	# It will be HIGH or LOW (true or false) depending on the logic level at the pin.
	fun read: Bool `{ return digitalRead(self->id) == HIGH? true: false; `}
end

# RPI Pin modes
# Modes are:
# * INPUT
# * OUTPUT
# * PWM_OUTPUT
# * GPIO_CLOCK
# Note that only wiringPi pin 1 (BCM_GPIO 18) supports PWM output
# and only wiringPi pin 7 (BCM_GPIO 4) supports CLOCK output modes.
extern class RPiPinMode `{ int `}
	new input_mode `{ return INPUT; `}
	new output_mode `{ return OUTPUT; `}
	new pwm_mode `{ return PWM_OUTPUT; `}
	new clock_mode `{ return GPIO_CLOCK; `}
end

# The BCM2835 has both pull-up an down internal resistors.
# The parameter pud should be:
# * PUD_OFF, (no pull up/down)
# * PUD_DOWN (pull to ground)
# * PUD_UP (pull to 3.3v)
# The internal pull up/down resistors have a value of approximately
# 50Kohms on the Raspberry Pi.
extern class PUDControl `{ int `}
	new off `{ return PUD_OFF; `}
	new down `{ return PUD_DOWN; `}
	new up `{ return PUD_UP; `}
end

# Abstraction a daisy chain of 74×595 shift registers
class SR595
	private var registers: Array[Bool]
	private var nb_pins: Int
	private var ser: RPiPin
	private var rclk: RPiPin
	private var srclk: RPiPin

	# Initialize a new shift register chain
	# `nb_pins`: number of pins available
	# `ser_pin`: SER (serial) pin id
	# `rclk_pin`: RCLK (register clock) pin id
	# `srclk_pin`: SRCLK (serial clock) pin id
	init(nb_pins, ser_pin, rclk_pin, srclk_pin: Int) do
		# configure pin layout
		self.nb_pins = nb_pins
		self.ser = new RPiPin(7)
		self.rclk = new RPiPin(6)
		self.srclk = new RPiPin(5)
		clear_registers
		# enable output mode on shift register output
		ser.mode(new RPiPinMode.output_mode)
		rclk.mode(new RPiPinMode.output_mode)
		srclk.mode(new RPiPinMode.output_mode)
	end

	# write 'state' on register 'reg'
	fun write(reg: Int, state: Bool) do
		registers[reg] = state
		write_registers
	end

	# write all registers
	fun write_all(regs: Array[Bool]) do
		assert regs.length == nb_pins
		registers = regs
		write_registers
	end

	# clear all registers
	fun clear_registers do
		registers = new Array[Bool].filled_with(false, nb_pins)
		write_registers
	end

	private fun write_registers do
		rclk.write(false)
		var i = registers.length - 1
		while i >= 0 do
			var reg = registers[i]
			srclk.write(false)
			ser.write(reg)
			srclk.write(true)
			i -= 1
		end
		rclk.write(true)
	end
end

