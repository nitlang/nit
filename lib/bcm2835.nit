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

# Services to control the bcm2835 chipset as used in the Raspberry Pi
# model B revision 1 Uses the C library by Mike McCauley from
# http://www.airspayce.com/mikem/bcm2835/
module bcm2835

import gpio

in "C Header" `{
	#include <bcm2835.h>
`}

redef class Object
	protected fun bcm2835_init: Bool `{ return bcm2835_init(); `}
	protected fun bcm2835_close `{ bcm2835_close(); `}
	protected fun bcm2835_debug=(v: Bool) `{ bcm2835_set_debug(v); `}
end

extern class RPiPin `{ RPiGPIOPin `}
	super Pin

	new p1_03 `{ return RPI_GPIO_P1_03; `}

	new p1_05 `{ return RPI_GPIO_P1_05; `}
	new p1_07 `{ return RPI_GPIO_P1_07; `}

	new p1_11 `{ return RPI_GPIO_P1_11; `}
	new p1_12 `{ return RPI_GPIO_P1_12; `}
	new p1_13 `{ return RPI_GPIO_P1_13; `}

	new p1_15 `{ return RPI_GPIO_P1_15; `}
	new p1_16 `{ return RPI_GPIO_P1_16; `}

	new p1_18 `{ return RPI_GPIO_P1_18; `}
	new p1_19 `{ return RPI_GPIO_P1_19; `}

	new p1_21 `{ return RPI_GPIO_P1_21; `}
	new p1_22 `{ return RPI_GPIO_P1_22; `}
	new p1_23 `{ return RPI_GPIO_P1_23; `}
	new p1_24 `{ return RPI_GPIO_P1_24; `}

	new p1_26 `{ return RPI_GPIO_P1_26; `}

	# Select mode: input, output or alts
	fun fsel=(mode: FunctionSelect) `{ bcm2835_gpio_fsel(recv, mode); `}

	# Set output
	redef fun write(high) `{ bcm2835_gpio_write(recv, high? HIGH: LOW); `}

	# Set pull up mode
	fun pud=(pud: PUDControl) `{ bcm2835_gpio_set_pud(recv, pud); `}

	# Falling edge detect
	# Do not use on raspbian, it is bugged!
	fun fen `{ bcm2835_gpio_fen(recv); `}
	fun clr_fen `{ bcm2835_gpio_clr_fen(recv); `}

	# Raising edge detect
	# Do not use on raspbian, it is bugged!
	fun ren `{ bcm2835_gpio_ren(recv); `}
	fun clr_ren `{ bcm2835_gpio_clr_ren(recv); `}

	# High edge detect
	# Do not use on raspbian, it is bugged!
	fun hen `{ bcm2835_gpio_hen(recv); `}
	fun clr_hen `{ bcm2835_gpio_clr_hen(recv); `}

	# Low edge detect
	# Do not use on raspbian, it is bugged!
	fun len `{ bcm2835_gpio_len(recv); `}
	fun clr_len `{ bcm2835_gpio_clr_len(recv); `}

	fun set_eds `{ bcm2835_gpio_set_eds(recv); `}
	fun eds: Bool `{ return bcm2835_gpio_eds(recv); `}

	# Return input on pin, true for high and false for low
	fun lev: Bool `{ return bcm2835_gpio_lev(recv); `}
end

extern class FunctionSelect `{ bcm2835FunctionSelect `}
	# Input function
	new inpt `{ return BCM2835_GPIO_FSEL_INPT; `}

	# Output function
	new outp `{ return BCM2835_GPIO_FSEL_OUTP; `}

	new alt0 `{ return BCM2835_GPIO_FSEL_ALT0; `}
	new alt1 `{ return BCM2835_GPIO_FSEL_ALT1; `}
	new alt2 `{ return BCM2835_GPIO_FSEL_ALT2; `}
	new alt3 `{ return BCM2835_GPIO_FSEL_ALT3; `}
	new alt4 `{ return BCM2835_GPIO_FSEL_ALT4; `}
	new alt5 `{ return BCM2835_GPIO_FSEL_ALT5; `}
	new mask `{ return BCM2835_GPIO_FSEL_MASK; `}
end

extern class PUDControl `{ bcm2835PUDControl `}
	new off `{ return BCM2835_GPIO_PUD_OFF; `}
	new down `{ return BCM2835_GPIO_PUD_DOWN; `}
	new up `{ return BCM2835_GPIO_PUD_UP; `}
end

redef universal Int
	fun bcm2835_delay `{ bcm2835_delay(recv); `}
	fun bcm2835_delay_micros `{ bcm2835_delayMicroseconds(recv); `}
end

class RotaryEncoder
	var pin_a: RPiPin
	var pin_b: RPiPin
	var old_a= false
	var old_b= false

	# returns '<', '>' or null accoring to rotation or lack thereof
	fun update: nullable Char
	do
		var new_a = pin_a.lev
		var new_b = pin_b.lev
		var res = null

		if new_a != old_a or new_b != old_b then
			if not old_a and not old_b then
				# everything was on
				if not new_a and new_b then
					res = '<'
				else if new_a and not new_b then
					res = '>'
				end
			else if old_a and old_b then
				# everything was off
				if not new_a and new_b then
					res = '>'
				else if new_a and not new_b then
					res = '<'
				end
			end

			old_a = new_a
			old_b = new_b
		end

		return res
	end
end

# Hitachi HD44780 or similar 2-4 lines LCD displays
class HD44780
	var rs: RPiPin
	var en: RPiPin
	var d4: RPiPin
	var d5: RPiPin
	var d6: RPiPin
	var d7: RPiPin

	var ds = new Array[RPiPin]

	# commands
	fun flag_clear_display: Int do return 1
	fun flag_return_home: Int do return 2
	fun flag_entry_mode_set: Int do return 4
	fun flag_display_control: Int do return 8
	fun flag_cursor_shift: Int do return 16
	fun flag_function_set: Int do return 32
	fun flag_set_cgram_addr: Int do return 64
	fun flag_set_ggram_addr: Int do return 128

	# entry mode
	fun flag_entry_right: Int do return 0
	fun flag_entry_left: Int do return 2
	fun flag_entry_shift_increment: Int do return 1
	fun flag_entry_shift_decrement: Int do return 0

	# display flags
	fun flag_display_on: Int do return 4
	fun flag_display_off: Int do return 0
	fun flag_cursor_on: Int do return 2
	fun flag_cursor_off: Int do return 0
	fun flag_blink_on: Int do return 1
	fun flag_blink_off: Int do return 0

	# display/cursor shift
	fun flag_display_move: Int do return 8
	fun flag_cursor_move: Int do return 0
	fun flag_move_right: Int do return 4
	fun flag_move_left: Int do return 0

	# function set
	fun flag_8bit_mode: Int do return 16
	fun flag_4bit_mode: Int do return 0
	fun flag_2_lines: Int do return 8
	fun flag_1_line: Int do return 0
	fun flag_5x10_dots: Int do return 4
	fun flag_5x8_dots: Int do return 0

	# last text displayed
	private var last_text: nullable String = null

	fun function_set(bits, lines, dots_wide: Int)
	do
		var fs = flag_function_set
		if bits == 8 then
			fs = fs.bin_or(16)
		else if bits != 4 then abort

		if lines == 2 then
			fs = fs.bin_or(8)
		else if lines != 1 then abort

		if dots_wide == 10 then
			fs = fs.bin_or(4)
		else if dots_wide != 8 then abort

		write(true, fs)
	end

	fun display_control(on, cursor, blink: Bool)
	do
		var fs = flag_display_control

		if on then
			fs = fs.bin_or(flag_display_on)
		else fs = fs.bin_or(flag_display_off)

		if cursor then
			fs = fs.bin_or(flag_cursor_on)
		else fs = fs.bin_or(flag_cursor_off)

		if blink then
			fs = fs.bin_or(flag_blink_on)
		else fs = fs.bin_or(flag_blink_off)

		write(true, fs)
	end

	fun entry_mode(left, incr: Bool)
	do
		var fs = flag_entry_mode_set

		if left then
			fs = fs.bin_or(flag_entry_left)
		else fs = fs.bin_or(flag_entry_right)

		if incr then
			fs = fs.bin_or(flag_entry_shift_increment)
		else fs = fs.bin_or(flag_entry_shift_decrement)

		write(true, fs)
	end

	fun setup_alt
	do
		ds = [d4,d5,d6,d7]

		rs.fsel = new FunctionSelect.outp
		en.fsel = new FunctionSelect.outp
		d4.fsel = new FunctionSelect.outp
		d5.fsel = new FunctionSelect.outp
		d6.fsel = new FunctionSelect.outp
		d7.fsel = new FunctionSelect.outp

		rs.write(false)
		en.write(false)

		# wait 20ms for power up
		50.bcm2835_delay

		write_4bits(true,true,false,false)
		write_4_bits(3)

		5.bcm2835_delay

		write_4bits(true,true,false,false)
		write_4_bits(3)

		5.bcm2835_delay

		write_4bits(true,true,false,false)
		write_4_bits(3)

		200.bcm2835_delay_micros

		write_4bits(false,true,false,false)
		write_4_bits(2)

		# wait 5ms
		5.bcm2835_delay

		# set interface
		# 4bits, 2 lines
		function_set(4, 2, 8)

		# cursor
		# don't shift & hide
		display_control(true, true, true)

		# clear & home
		clear

		# set cursor move direction
		# move right
		write(true, 6)

		# turn on display
		write(true, 4)

		# set entry mode
		entry_mode(true, true)
	end

	fun setup
	do
		ds = [d4,d5,d6,d7]

		rs.fsel = new FunctionSelect.outp
		en.fsel = new FunctionSelect.outp
		d4.fsel = new FunctionSelect.outp
		d5.fsel = new FunctionSelect.outp
		d6.fsel = new FunctionSelect.outp
		d7.fsel = new FunctionSelect.outp

		rs.write(false)
		en.write(false)

		write(true, "33".to_hex) # init
		write(true, "32".to_hex) # init
		write(true, "28".to_hex) # 2 lines, 5x7
		write(true, "0C".to_hex) # hide cursor
		write(true, "06".to_hex) # cursor move right
		write(true, "04".to_hex) # turn on display
		write(true, "01".to_hex) # clear display
	end

	fun write_4_bits(v: Int)
	do
		var lb = once [1,2,4,8]
		for i in [0..4[ do
			var b = lb[i]
			var r = b.bin_and(v) != 0
			var d = ds[i]
			d.write(r)
		end
		pulse_enable
	end

	fun write_4bits(a,b,c,d:Bool)
	do
		d4.write(a)
		d5.write(b)
		d6.write(c)
		d7.write(d)
		pulse_enable
	end

	fun pulse_enable
	do
		en.write(false)
		1.bcm2835_delay_micros
		en.write(true)
		100.bcm2835_delay_micros
		en.write(false)
		1.bcm2835_delay_micros
	end

	fun write(is_cmd: Bool, cmd: Int)
	do
		en.write(false)
		rs.write(not is_cmd)

		# high byte
		var hb = once [16,32,64,128]
		for i in [0..4[ do
			var b = hb[i]
			var r = b.bin_and(cmd) != 0
			var d = ds[i]
			d.write(r)
		end

		pulse_enable

		if is_cmd then
			# wait 5ms
			5.bcm2835_delay
		else
			# wait 200us
			200.bcm2835_delay_micros
		end

		# low byte
		var lb = once [1,2,4,8]
		for i in [0..4[ do
			var b = lb[i]
			var r = b.bin_and(cmd) != 0
			var d = ds[i]
			d.write(r)
		end

		pulse_enable

		if is_cmd then
			# wait 5ms
			5.bcm2835_delay
		else
			# wait 200us
			200.bcm2835_delay_micros
		end
	end

	fun clear
	do
		write(true,1)
		2.bcm2835_delay
	end

	fun return_home
	do
		write(true,2)
		2.bcm2835_delay
	end

	fun text=(v: String)
	do
		# do not redraw the samething
		var last_text = last_text
		if last_text != null and last_text == v then return

		clear
		return_home
		var count = 0
		for c in v.chars do
			if c == '\n' then
				# FIXME, this should work
				#write(true, "C0".to_hex)
				# instead we use the following which may not be portable

				for s in [count..40[ do write(false, ' '.ascii)
				count = 0
			else
				write(false, c.ascii)
				count += 1
			end
		end

		self.last_text = v
	end
end

# Component for any kind of buttons or switches
class Switch
	var pin: RPiPin

	init (pin: RPiPin, pud: PUDControl)
	do
		self.pin = pin
		pin.fsel = new FunctionSelect.inpt
		pin.pud = pud
	end

	fun is_down: Bool do return pin.lev

	var last_down: nullable Bool = null

	# Returns true is state (is_down) changed since last call to `changed`
	fun changed: Bool
	do
		var now = is_down
		var last_down = last_down
		if last_down == null then
			self.last_down = now
			return false
		else if last_down != now then
			self.last_down = now
			return true
		else return false
	end
end

class StepperMotor
	var pins: Sequence[RPiPin]
	var delay: Int

	init (delay: Int, a, b, c, d: RPiPin)
	do
		pins = [a, b, c, d]
		self.delay = delay

		for p in pins do p.fsel = new FunctionSelect.outp
	end

	fun forward(steps: Int)
	do
		for s in [0..steps[ do
			set(true, false, false, false)
			delay.bcm2835_delay
			set(true, true, false, false)
			delay.bcm2835_delay
			set(false, true, false, false)
			delay.bcm2835_delay
			set(false, true, true, false)
			delay.bcm2835_delay
			set(false, false, true, false)
			delay.bcm2835_delay
			set(false, false, true, true)
			delay.bcm2835_delay
			set(false, false, false, true)
			delay.bcm2835_delay
			set(true, false, false, true)
			delay.bcm2835_delay
		end
	end

	fun backwards(steps: Int)
	do
		for s in [0..steps[ do
			set(true, false, false, true)
			delay.bcm2835_delay
			set(false, false, false, true)
			delay.bcm2835_delay
			set(false, false, true, true)
			delay.bcm2835_delay
			set(false, false, true, false)
			delay.bcm2835_delay
			set(false, true, true, false)
			delay.bcm2835_delay
			set(false, true, false, false)
			delay.bcm2835_delay
			set(true, true, false, false)
			delay.bcm2835_delay
			set(true, false, false, false)
			delay.bcm2835_delay
		end
	end

	fun release do set(false, false, false, false)

	protected fun set(a, b, c, d: Bool)
	do
		var bits = new Array[Bool].with_items(a, b, c, d)

		for i in [0..4[ do pins[i].write(bits[i])
	end
end

class Buzzer
	var pin: RPiPin

	fun buzz(delay: Float, times: Int)
	do
		assert times > 0
		assert delay > 0.0
		var delay_i = (delay*1000.0).to_i
		for i in [0..times[ do
			pin.write(true)
			delay_i.bcm2835_delay_micros
			pin.write(false)
			delay_i.bcm2835_delay_micros
		end
	end
end
