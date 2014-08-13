# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@viacesi.fr>
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

# Test for the audio module of App.nit framework
module test_audio

import simple_android
import android::audio

redef class App
	var soundsp: Sound
	var soundmp: Sound

	redef fun init_window
	do
		super

		default_mediaplayer.reset
		manage_audio_mode

		# Retrieve sound
		soundsp = load_sound("sound.ogg")
		soundmp = load_music("xylofon.ogg")
		default_mediaplayer.looping = true
		default_mediaplayer.prepare
		soundmp.play
	end

	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			soundsp.play
		end
		return super
	end
end
