# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Romain Chanoir  <romain.chanoir@viacesi.fr>
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

# `app::audio` implementation for GNU/Linux using SDL2 mixer
module audio

import app::audio
import sdl2::mixer
import linux

redef class PlayableAudio
	redef var error = null

	# Real file system path to this asset
	private fun fs_path: String do return app.assets_dir / path

	# Does `fs_path` exist?
	private fun fs_path_exists: Bool
	do
		if not fs_path.file_exists then
			error = new Error("Failed to load audio '{path}': file not found")
			return false
		end
		return true
	end
end

redef class Sound

	private var native: nullable MixChunk = null

	redef fun load
	do
		if not fs_path_exists then return

		# SDL2 mixer load
		var native = mix.load_wav(fs_path.to_cstring)
		if native.address_is_null then
			error = new Error("Failed to load sound '{path}': {mix.error}")
			return
		end

		self.native = native
	end

	redef fun play do play_channel(-1, 0)

	# Play this sound on `channel` (or any channel if -1) and return the channel
	#
	# Repeat the sound `loops` times, `loops == 0` plays it once,
	# `loops == 1` plays it twice and `loops == -1` loops infinitely.
	fun play_channel(channel, loops: Int): Int
	do
		var native = native

		if native == null and error == null then
			# Lazy load
			load

			# Auto print errors on lazy loading only
			var error = error
			if error != null then print_error error
		end

		# If there's an error, silently skip
		if error != null then return -1
		native = self.native
		assert native != null

		# Play on any available channel
		return mix.play_channel(channel, native, loops)
	end
end

redef class Music

	private var native: nullable MixMusic = null

	redef fun load
	do
		if not fs_path_exists then return

		# SDL2 mixer load
		var native = mix.load_mus(fs_path.to_cstring)
		if native.address_is_null then
			error = new Error("Failed to load music '{path}': {mix.error}")
			return
		end

		self.native = native
	end

	redef fun play
	do
		var native = native

		if native == null and error == null then
			# Lazy load
			load

			# Auto print errors on lazy loading only
			var error = error
			if error != null then print_error error
		end

		# If there's an error, silently skip
		if error != null then return
		native = self.native
		assert native != null

		# Play looping
		mix.play_music(native, -1)
	end

	redef fun pause do mix.pause_music

	redef fun resume do mix.resume_music
end
