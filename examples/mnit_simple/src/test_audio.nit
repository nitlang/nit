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
	var soundsp: nullable Sound
	var soundmp: nullable Sound
	var test_assets = false
	var test_ressources = true

	redef fun on_create
	do
		super
		if test_assets then
			soundsp = load_sound("testsound.ogg")
			soundmp = load_music("xylofon.ogg")
		end
		if test_ressources then
			soundsp = load_sound_from_res("testsound")
			soundmp = load_music_from_res("xylofon")
		end
		default_mediaplayer.looping = true
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
