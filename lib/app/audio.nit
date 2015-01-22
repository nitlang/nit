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

# Abstraction of a sound
abstract class Sound

	# Plays the sound
	fun play is abstract

	# Pauses the sound
	fun pause is abstract

	# Resumes the sound
	fun resume is abstract
end

redef class App

	# Loads a sound from the assets of the app, returns `null` if the loading failed
	fun load_sound(name: String): nullable Sound do return null
end
