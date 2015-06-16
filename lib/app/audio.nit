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

# App audio abstraction
#
# Once the application has started (after `App.setup`)
# use `App.load_sound` to get a sound
# then `Sound.play` to play it
module audio

import app_base
import standard::error

# Abstraction of a playable Audio
abstract class PlayableAudio

	# Name of this playable audio
	var name: String

	# Error which is not null if an error happened
	var error: nullable Error = null is writable

	# Is this already loaded ?
	protected var is_loaded = false is writable

	# load this playable audio
	fun load is abstract

	# Plays the sound
	fun play is abstract

	# Pauses the sound
	fun pause is abstract

	# Resumes the sound
	fun resume is abstract
end

# Abstraction of a short sound
class Sound
	super PlayableAudio
end

# Abstraction of a long song, that can bee looped
class Music
	super PlayableAudio
end

redef class App

	# Load a sound
	fun load_sound(name: String): Sound is abstract

	# Load a music
	fun load_music(name: String): Music is abstract
end
