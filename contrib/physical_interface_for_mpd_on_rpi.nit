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

# This programs interprets the input of a physical interface thought the
# GPIO pins of a Raspberry Pi to control an MPD server.
#
# It suppot two inputs: a play/pause button and a rotary encoder to adjust
# the volume.
#
# The each data output of the volume control are connected to the board
# pins #3 and #5.
module physical_interface_for_mpd_on_rpi

import bcm2835
import mpd

redef class Object
	fun mpd: MPDConnection do return once new MPDConnection("localhost", 6600, "password")
end

class RotaryEncoder
	var pin_a: RPiPin
	var pin_b: RPiPin
	var old_a= false
	var old_b= false

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

class LCD
	var rs: RPiPin
	var en: RPiPin
	var d4: RPiPin
	var d5: RPiPin
	var d6: RPiPin
	var d7: RPiPin

	var ds = new Array[RPiPin]# = [d4,d5,d6,d7]

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

		# wait 20ms for power up
		#50.bcm2835_delay

		#write_4bits(true,true,false,false)
		#write_4_bits(3)

		#5.bcm2835_delay

		#write_4bits(true,true,false,false)
		#write_4_bits(3)

		#5.bcm2835_delay

		#write_4bits(true,true,false,false)
		#write_4_bits(3)

		#200.bcm2835_delay_micros

		#write_4bits(false,true,false,false)
		#write_4_bits(2)

		# wait 5ms
		#5.bcm2835_delay

		# set interface
		# 4bits, 2 lines
		#write(true, flow)
		#function_set(4, 2, 8)

		# cursor
		# don't shift & hide
		#display_control(true, true, true)

		# clear & home
		#write(true, flag_)
		#clear

		# set cursor move direction
		# move right
		#write(true, 6)

		# turn on display
		#write(true, 4)

		# set entry mode
		#entry_mode(true, true)

		write(true, "33".to_hex)
		write(true, "32".to_hex)
		write(true, "28".to_hex)
		write(true, "0C".to_hex)
		write(true, "01".to_hex)
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

		en.write(true)

		# wait 450 ns
		1.bcm2835_delay_micros

		en.write(false)

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

		en.write(true)

		# wait 450ns
		1.bcm2835_delay_micros

		en.write(false)

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
		clear
		return_home
		for c in v do write(false, c.ascii)
	end
end

fun hit_play_stop
do
	# get current status
	var status = mpd.status
	var playing = false
	if status != null then
		playing = status.state == "play"
	end

	if playing then
		# stop
		print "playing -> stop"
		mpd.pause
	else
		print "stopped -> play"
		mpd.play
	end
end

assert bcm2835_init else print "Failed to init"

# Debug LED
var out = new RPiPin.p1_11
out.fsel = new FunctionSelect.outp
out.write(false)

# Play button
var inp = new RPiPin.p1_13
inp.fsel = new FunctionSelect.inpt
inp.pud = new PUDControl.down

# Vol +
var vol3 = new RPiPin.p1_03
vol3.fsel = new FunctionSelect.inpt
vol3.pud = new PUDControl.up

# Vol -
var vol5 = new RPiPin.p1_05
vol5.fsel = new FunctionSelect.inpt
vol5.pud = new PUDControl.up

var vol = new RotaryEncoder(vol3,vol5)
var vol_step = 2

# LCD
var lcd_rs = new RPiPin.p1_23
var lcd_en = new RPiPin.p1_21
var lcd_d4 = new RPiPin.p1_19
var lcd_d5 = new RPiPin.p1_26
var lcd_d6 = new RPiPin.p1_24
var lcd_d7 = new RPiPin.p1_22
var lcd = new LCD(lcd_rs, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7)
lcd.setup
#lcd.write(false, 'a'.to_i.to_ascii)
lcd.clear
lcd.write(false, 'a'.ascii)
lcd.write(false, 'C'.ascii)

var last_in = false
var led_on = false
var tick = 0
loop
	# play button
	var lev = inp.lev
	if lev != last_in then
		last_in = lev
		if lev then
			print "hps"
			hit_play_stop
		end
	end

	# volume
	var s = vol.update
	if s != null then
		if s == '<' then
			print "vol down"
			mpd.relative_volume = -vol_step
		else # >
			print "vol up"
			mpd.relative_volume = vol_step
		end
	end

	if tick % 100 == 0 then
		print tick
		#var now_playing = mpd.status("")
		#lcd.text = tick.to_s
	end

	10.bcm2835_delay
	tick += 1
end
