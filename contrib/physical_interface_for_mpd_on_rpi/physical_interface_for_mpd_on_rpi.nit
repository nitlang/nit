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
import privileges

redef class Object
	fun mpd: MPDConnection do return once new MPDConnection("localhost", 6600, "password")
end

fun hit_play_stop
do
	# get current status
	var status = mpd.status
	var playing = false
	if status != null then
		playing = status.playing
	else
		print "Cannot get state"
		return
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

# commandline options for privileges drop
var opts = new OptionContext
var opt_ug = new OptionDropPrivileges
#opt_ug.mandatory = true
opts.add_option(opt_ug)

# parse and check command line options
opts.parse(args)
if not opts.errors.is_empty then
	print opts.errors
	print "Usage: {program_name} [options]"
	opts.usage
	exit 1
end

assert bcm2835_init else print "Failed to init"

# drop privileges!
var user_group = opt_ug.value
if user_group != null then user_group.drop_privileges

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
var lcd = new HD44780(lcd_rs, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7)
lcd.setup
lcd.clear

var last_in = false
var led_on = false
var tick = 0
loop
	var force_lcd_update = false

	# play button
	var lev = inp.lev
	if lev != last_in then
		last_in = lev
		if lev then hit_play_stop
		force_lcd_update = true
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
		force_lcd_update = true
	end

	# update lcd
	if tick % 100 == 0 or force_lcd_update then
		var status = mpd.status
		var song = mpd.current_song

		var status_char
		if status == null then
			lcd.text = "Unknown status"
		else if song == null then
			lcd.text = "No song playing"
		else
			if status.playing then
				status_char = ">"
			else status_char = "#"

			var tr = status.time_ratio
			var pos = "-"
			if tr != null then pos = (status.time_ratio*10.0).to_i.to_s

			lcd.text = "{status_char} {song.artist}\n{pos} {song.title}"
		end
	end

	10.bcm2835_delay
	tick += 1
end
