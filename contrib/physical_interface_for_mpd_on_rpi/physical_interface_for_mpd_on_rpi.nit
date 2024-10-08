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

# Backend to a hardware interface to control an MPD server from a Raspberry Pi
#
# It supports two inputs: a play/pause button and a rotary encoder to adjust
# the volume.
#
# The each data output of the volume control are connected to the board
# pins #3 and #5.
module physical_interface_for_mpd_on_rpi

import bcm2835
import mpd
import privileges

class PhysicalInterface
	var mpd = new MPDConnection(server, port, password)
	protected fun password: String do return "password"
	fun server: String do return "localhost"
	fun port: Int do return 6600

	var but_play: Switch is noinit
	var but_playlist_a: Switch is noinit

	var vol: RotaryEncoder is noinit
	var vol_step = 2

	var lcd: HD44780 is noinit

	var lcd_backlight: RPiPin is noinit
	var lcd_backlight_delay = 1000

	var buzzer: Buzzer is noinit

	init
	do
		# commandline options for privileges drop
		var opts = new OptionContext
		var opt_ug = new OptionUserAndGroup.for_dropping_privileges
		#opt_ug.mandatory = true
		opts.add_option(opt_ug)

		# parse and check command line options
		opts.parse(args)
		if not opts.errors.is_empty then
			print opts.errors
			print "Usage: {sys.program_name} [options]"
			opts.usage
			exit 1
		end

		assert bcm2835_init else print "Failed to init"

		# drop privileges!
		var user_group = opt_ug.value
		if user_group != null then user_group.drop_privileges

		# Play button
		but_play = new Switch(new RPiPin.p1_13, new PUDControl.down)

		# Playlist a button
		but_playlist_a = new Switch(new RPiPin.p1_15, new PUDControl.down)

		# Vol +
		var vol3 = new RPiPin.p1_03
		vol3.fsel = new FunctionSelect.inpt
		vol3.pud = new PUDControl.up

		# Vol -
		var vol5 = new RPiPin.p1_05
		vol5.fsel = new FunctionSelect.inpt
		vol5.pud = new PUDControl.up

		vol = new RotaryEncoder(vol3,vol5)

		# LCD
		var lcd_rs = new RPiPin.p1_23
		var lcd_en = new RPiPin.p1_21
		var lcd_d4 = new RPiPin.p1_19
		var lcd_d5 = new RPiPin.p1_26
		var lcd_d6 = new RPiPin.p1_24
		var lcd_d7 = new RPiPin.p1_22
		lcd = new HD44780(lcd_rs, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7)
		lcd.setup
		lcd.clear

		lcd_backlight = new RPiPin.p1_18
		lcd_backlight.fsel = new FunctionSelect.outp

		# Buzzer
		var buzzer_pin = new RPiPin.p1_11
		buzzer_pin.fsel = new FunctionSelect.outp
		buzzer = new Buzzer(buzzer_pin)
	end

	fun run
	do
		var tick = 0
		var last_event = 0
		loop
			var force_lcd_update = false

			# play button
			if but_play.changed and but_play.is_down then
				print "but"
				hit_play_stop
				force_lcd_update = true
			end

			if but_playlist_a.changed and but_playlist_a.is_down then
				play_playlist_a
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
						last_event = tick
						status_char = ">"
					else status_char = "#"

					var tr = status.time_ratio
					var pos = "-"
					if tr != null then pos = (status.time_ratio*10.0).to_i.to_s

					lcd.text = "{status_char} {song.artist}\n{pos} {song.title}"
				end
			end

			# manage backlight
			if force_lcd_update then last_event = tick

			var diff_with_last_event = tick - last_event
			if diff_with_last_event == 0 then
				lcd_backlight.write(true)
			else if diff_with_last_event == lcd_backlight_delay then
				lcd_backlight.write(false)
			end

			10.bcm2835_delay
			tick += 1
		end
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

		bell
	end

	fun play_playlist_a
	do
		mpd.load_playlist("alexis")
	end

	fun bell do buzzer.buzz(1.5, 20)
end

var phy = new PhysicalInterface
phy.run
