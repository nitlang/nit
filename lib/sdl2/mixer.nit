# This file is part of NIT ( http://www.nitlanguage.org ).
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

# SDL2 mixer with sample/sounds and music
#
# C API documentation: https://www.libsdl.org/projects/SDL_mixer/docs/SDL_mixer.html
module mixer is pkgconfig "SDL2_mixer"

import sdl2_base

`{
	#include "SDL2/SDL_mixer.h"
`}

redef class Sys
	# SDL2 mixer services
	var mix = new Mix is lazy
end

# SDL2 mixer services
class Mix
	# Initialize supports for loading formats in `flags`
	#
	# Returns the initialized supports.
	fun initialize(flags: MixInitFlags): MixInitFlags `{
		return Mix_Init(flags);
	`}

	# FLAC format support, for `initialize`
	fun flac: MixInitFlags `{ return MIX_INIT_FLAC; `}

	# MOD format support, for `initialize`
	fun mod: MixInitFlags `{ return MIX_INIT_MOD; `}

	# MP3 format support, for `initialize`
	fun mp3: MixInitFlags `{ return MIX_INIT_MP3; `}

	# OGG format support, for `initialize`
	fun ogg: MixInitFlags `{ return MIX_INIT_OGG; `}

	# Clean up all dynamically loaded library handles
	#
	# May be called after loading all the sounds.
	fun quit `{ Mix_Quit(); `}

	# Initialize and configure the mixer API
	#
	# Playback is configured with:
	# * The output sample `frequency`, in samples per second (Hz).
	# * The output sample `format`, may be `mix_default_format`.
	# * The number of sound `channels`, 1 for mono or 2 for stereo.
	# * The number of bytes used by output sample size as `chunk_size`.
	fun open_audio(frequency: Int, format: MixFormat, channels, chunk_size: Int): Bool `{
		return Mix_OpenAudio(frequency, format, channels, chunk_size) == 0;
	`}

	# Default frequency for `open_audio` (22050)
	fun default_frequency: Int `{ return MIX_DEFAULT_FREQUENCY; `}

	# Default format for `open_audio`
	fun default_format: MixFormat `{ return MIX_DEFAULT_FORMAT; `}
	# TODO other formats: AUDIO_U8, AUDIO_S8, etc.

	# Shutdown and cleanup the mixer API
	fun close_audio `{ Mix_CloseAudio(); `}

	# Last error produced by the mixer API
	fun error: CString `{ return (char*)Mix_GetError(); `}

	# ---
	# Chunks/sounds

	# Load `file` for use as a sample
	#
	# Returns a null pointer on error.
	#
	# Can load WAVE, AIFF, RIFF, OGG and VOC files.
	fun load_wav(file: CString): MixChunk `{ return Mix_LoadWAV(file); `}

	# Play `chunk` on `channel`
	#
	# If `channel == -1` the first unreserved channel is used.
	# The sound is repeated `loops` times, `loops == 0` plays it once,
	# `loops == 1` plays it twice and `loops == -1` loops infinitely.
	#
	# Returns the channel used, or `-1` on error.
	fun play_channel(channel: Int, chunk: MixChunk, loops: Int): Int `{
		return Mix_PlayChannel(channel, chunk, loops);
	`}

	# Play `chunk` on `channel`
	#
	# If `channel == -1` the first unreserved channel is used.
	# The sound is repeated `loops` times, `loops == 0` plays it once,
	# `loops == 1` plays it twice and `loops == -1` loops infinitely.
	# If `ticks != -1`, the sample plays for at most `ticks` milliseconds.
	fun play_channel_timed(channel: Int, chunk: MixChunk, loops, ticks: Int): Int `{
		return Mix_PlayChannelTimed(channel, chunk, loops, ticks);
	`}

	# Halt/stop `channel` playback
	#
	# If `channel == -1`, halt all channels.
	fun halt_channel(channel: Int) `{
		Mix_HaltChannel(channel);
	`}

	# Halt `channel` in `ticks` milliseconds and return the number of channels set to expire
	#
	# If `channel == -1`, halt all channels.
	fun expire_channel(channel, ticks: Int): Int `{
		return Mix_ExpireChannel(channel, ticks);
	`}

	# Reserve `num` channels from being used by `play_channel(-1...)`
	#
	# Returns the number of of channels reserved.
	fun reserve_channels(num: Int): Int `{
		return Mix_ReserveChannels(num);
	`}

	# Set the `volume` of `channel`, out of `mix.max_volume`
	#
	# If `channel == -1`, set the volume of all channels.
	#
	# Returns the current volume of the channel, or if `channel == -1` the average volume.
	fun volume(channel, volume: Int): Int `{
		return Mix_Volume(channel, volume);
	`}

	# Set the `volume` for `chunk`, out of `mix.max_volume`
	#
	# If `volume == -1`, only read the previous value.
	#
	# Returns the previous volume value.
	fun volume_chunk(chunk: MixChunk, volume: Int) `{
		Mix_VolumeChunk(chunk, volume);
	`}

	# Pause `channel`, or all playing channels if -1
	fun pause(channel: Int) `{
		Mix_Pause(channel);
	`}

	# Unpause `channel`, or all paused channels if -1
	fun resume(channel: Int) `{
		Mix_Resume(channel);
	`}

	# ---
	# Music

	# Load music from `file`
	#
	# Returns a null pointer on error.
	#
	# WAVE, MOD, MIDI, OGG, MP3, FLAC VOC files
	fun load_mus(file: CString): MixMusic `{ return Mix_LoadMUS(file); `}

	# Play `music` `loops` times
	#
	# The music is plays once if `loops == 1` and repeats infinitely if `loops == -1`.
	fun play_music(music: MixMusic, loops: Int): Bool `{
		return Mix_PlayMusic(music, loops) == 0;
	`}

	# Pause music playback
	fun pause_music `{ Mix_PauseMusic(); `}

	# Resume music playback
	fun resume_music `{ Mix_ResumeMusic(); `}

	# Set the music volume out of `mix.max_volume` and return the previous value
	#
	# Use `volume = -1` to only read the previous value.
	fun volume_music(volume: Int): Int `{
		return Mix_VolumeMusic(volume);
	`}

	# Maximum volume value for `volume_music` and `volume_chunk`
	fun max_volume: Int `{ return MIX_MAX_VOLUME; `}
end

# Chunk/sound handle, loaded by `mix.load_wav`
extern class MixChunk
	redef fun free `{ Mix_FreeChunk(self); `}
end

# Music handle, loaded by `mix.load_mus`
extern class MixMusic
	redef fun free `{ Mix_FreeMusic(self); `}
end

# ---
# Flags & enums

# Flags for `mix.initialize`
extern class MixInitFlags `{ int `}

	# Binary OR
	fun | (other: MixInitFlags): MixInitFlags `{ return self | other; `}

	private fun to_i: Int `{ return self; `}

	redef fun ==(o) do return o isa MixInitFlags and o.to_i == to_i
end

# Sample format for `mix.open_audio`
extern class MixFormat `{ int `}
end
