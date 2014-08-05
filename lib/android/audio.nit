# this file is part of NIT ( http://www.nitlanguage.org ).
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

# Android audio services
#
# You can get a sound by loading it with a `SoundPool` or a `MediaPlayer`
# the recommended way to load a sound is by it's resource ID or it's name
# other ways are for advanced use
module audio

import java
import java_io
import assets_and_resources
import app

in "Java" `{
	import android.media.MediaPlayer;
	import android.media.SoundPool;
	import java.io.IOException;
	import android.media.AudioManager;
	import android.content.Context;
	import android.util.Log;
`}

# AudioManager of the application, used to manage the audio mode
extern class NativeAudioManager in "Java" `{ android.media.AudioManager `}
	super JavaObject
	redef type SELF: NativeAudioManager

	fun mode: Int in "Java" `{ return recv.getMode(); `}
	fun mode=(i: Int) in "Java" `{ recv.setMode((int)i); `}
	fun wired_headset_on: Bool in "Java" `{ return recv.isWiredHeadsetOn(); `}
	fun wired_headset_on=(b: Bool) in "Java" `{ recv.setWiredHeadsetOn(b); `}
	fun speakerphone_on: Bool in "Java" `{ return recv.isSpeakerphoneOn(); `}
	fun speakerphone_on=(b: Bool) in "Java" `{ recv.setSpeakerphoneOn(b); `}
	fun manage_audio_mode in "Java" `{
		recv.setMode(0);
		if (recv.isWiredHeadsetOn()) {
			recv.setSpeakerphoneOn(false);
		} else {
			recv.setSpeakerphoneOn(true);
		}
	`}

end

# Media Player from Java, used to play long sounds or musics, not simultaneously
# This is a low-level class, use `MediaPlater` instead
extern class NativeMediaPlayer in "Java" `{ android.media.MediaPlayer `}
	super JavaObject
	redef type SELF: NativeMediaPlayer

	new in "Java" `{ return new MediaPlayer(); `}
	fun start in "Java" `{ recv.start(); `}
	fun prepare in "Java" `{
		try {
			recv.prepare();
		}catch(IOException e) {
			Log.e("Error preparing the Media Player", e.getMessage());
			e.printStackTrace();
		}
	`}

	fun create(context: NativeActivity, id: Int): NativeMediaPlayer in "Java" `{ return recv.create(context, (int)id); `}
	fun pause in "Java" `{ recv.pause(); `}
	fun stop in "Java" `{ recv.stop(); `}
	fun playing: Bool in "Java" `{ return recv.isPlaying(); `}
	fun release in "Java" `{ recv.release(); `}
	fun duration: Int in "Java" `{ return recv.getDuration(); `}
	fun looping: Bool in "Java" `{ return recv.isLooping(); `}
	fun looping=(b: Bool) in "Java" `{ recv.setLooping(b); `}
	fun volume=(vol: Float) in "Java" `{ recv.setVolume((float)vol, (float)vol); `}
	fun both_volume(left_volume, right_volume: Float) in "Java" `{ recv.setVolume((float)left_volume, (float)right_volume); `}
	fun stream_type=(stream_type: Int) in "Java" `{ recv.setAudioStreamType((int)stream_type); `}
	fun data_source_fd(fd: NativeFileDescriptor, start_offset, length: Int) in "Java"  `{
		try {
			recv.setDataSource(fd, start_offset, length);
		}catch(IOException e) {
			Log.e("Error loading the Media Player with a file descriptor", e.getMessage());
			e.printStackTrace();
		}
	`}
	fun data_source_path(path: JavaString) in "Java" `{
		try {
			recv.setDataSource(path);
		}catch(IOException e) {
			Log.e("Error loading the Media Player", e.getMessage());
			e.printStackTrace();
		}
	`}
	fun reset in "Java" `{ recv.reset(); `}
end

# Sound Pool from Java, used to play sounds simultaneously
# This is a low-level class, use `SoundPool`instead
extern class NativeSoundPool in "Java" `{ android.media.SoundPool `}
	super JavaObject
	redef type SELF: NativeSoundPool

	new(max_streams, stream_type, src_quality: Int) in "Java" `{
		return new SoundPool((int)max_streams, (int)stream_type, (int)src_quality);
	`}
	fun load_asset_fd(afd: NativeAssetFileDescriptor, priority: Int): Int in "Java" `{ return recv.load(afd, (int)priority); `}
	fun load_id(context: NativeActivity, resid, priority: Int): Int in "Java" `{ return recv.load(context, (int)resid, (int)priority); `}
	fun load_path(path: JavaString, priority: Int): Int in "Java" `{ return recv.load(path, (int)priority); `}
	fun play(sound_id: Int, left_volume, right_volume: Float, priority, l: Int, rate: Float): Int in "Java" `{
		return recv.play((int)sound_id, (float)left_volume, (float)right_volume, (int)priority, (int)l, (float)rate);
	`}
	fun pause(stream_id: Int) in "Java" `{ recv.pause((int)stream_id); `}
	fun auto_pause in "Java" `{ recv.autoPause(); `}
	fun auto_resume in "Java" `{ recv.autoResume(); `}
	fun resume(stream_id: Int) in "Java" `{ recv.resume((int)stream_id); `}
	fun set_loop(stream_id, l: Int) in "Java" `{ recv.setLoop((int)stream_id, (int)l); `}
	fun set_priority(stream_id, priority: Int) in "Java" `{ recv.setPriority((int)stream_id, (int)priority); `}
	fun set_rate(stream_id: Int, rate: Float) in "Java" `{ recv.setRate((int)stream_id, (float)rate); `}
	fun set_volume(stream_id: Int, left_volume, right_volume: Float) in "Java" `{ recv.setVolume((int)stream_id, (float)left_volume, (float)right_volume); `}
	fun stop(stream_id: Int) in "Java" `{ recv.stop((int)stream_id); `}
	fun unload(sound_id: Int): Bool in "Java" `{ return recv.unload((int)sound_id); `}
	fun release in "Java" `{ recv.release(); `}
end


# Used to play sound, best suited for sounds effects in apps or games
class SoundPool
	private var nsoundpool: NativeSoundPool
	# The maximum number of simultaneous streams for this SoundPool
	var max_streams writable = 10

	# The audio stream type, 3 is STREAM_MUSIC, default for game application
	var stream_type writable = 3

	# The sample-rate converter quality, currently has no effect
	var src_quality writable = 0

	# Left volume value, range 0.0 to 1.0
	var left_volume writable = 1.0

	# Right volume value, range 0.0 to 1.0
	var right_volume writable = 1.0

	# Playback rate, 1.0 = normal playback, range 0.5 to 2.0
	var rate writable = 1.0

	# Loop mode, 0 = no loop, -1 = loop forever
	var looping writable = 0

	# Stream priority
	private var priority = 1

	init do self.nsoundpool = new NativeSoundPool(max_streams, stream_type, src_quality)

	# Load the sound from an asset file descriptor
	# this function is for advanced use
	fun load_asset_fd(afd: NativeAssetFileDescriptor): Sound do
		return new SoundSP(null, nsoundpool.load_asset_fd(afd, priority), self)
	end

	# Load the sound from it's resource id
	fun load_id(context: NativeActivity, id:Int): Sound do
		return new SoundSP(null, nsoundpool.load_id(context, id, priority), self)
	end

	# Load the sound from the specified path
	fun load_path(path: String): Sound do
		sys.jni_env.push_local_frame(1)
		var return_value = new SoundSP(0, nsoundpool.load_path(path.to_java_string, priority), self)
		sys.jni_env.pop_local_frame
		return return_value
	end

	# Play a sound from a sound ID
	# return non-zero streamID if successful, zero if failed
	fun play(id: Int): Int do
		return nsoundpool.play(id, left_volume, right_volume, priority, looping, rate)
	end

	# Load a sound by it's name in the resources, the sound must be in the `res/raw` folder
	fun load_name(resource_manager: ResourcesManager, context: NativeActivity, sound: String): Sound do
		var id = resource_manager.raw_id(sound)
		return new SoundSP(id, nsoundpool.load_id(context, id, priority), self)
	end

	# Pause a playback stream
	fun pause_stream(stream_id: Int) do nsoundpool.pause(stream_id)

	# Pause all active_streams
	fun auto_pause do nsoundpool.auto_pause

	# Resume all previously active streams
	fun auto_resume do nsoundpool.auto_resume

	# Resume a playback stream
	fun resume(stream_id: Int) do nsoundpool.resume(stream_id)

	# Set loop mode on a stream
	fun stream_loop=(stream_id, looping: Int) do nsoundpool.set_loop(stream_id, looping)

	# Change stream priority
	fun stream_priority=(stream_id, priority: Int) do nsoundpool.set_priority(stream_id, priority)

	# Change playback rate
	fun stream_rate=(stream_id: Int, rate: Float) do nsoundpool.set_rate(stream_id, rate)

	# Set stream volume
	fun stream_volume(stream_id: Int, left_volume, right_volume: Float) do
		nsoundpool.set_volume(stream_id, left_volume, right_volume)
	end

	# Stop a playback stream
	fun stop_stream(stream_id: Int) do nsoundpool.stop(stream_id)

	# Unload a sound from a sound ID
	fun unload(sound: SoundSP): Bool do return nsoundpool.unload(sound.soundpool_id)

	fun destroy do nsoundpool.release
end

# Used to play sounds, designed to use with medium sized sounds or streams
# The Android MediaPlayer has a complex state diagram that you'll need to
# respect if you want your MediaPlayer to work fine, see the android doc
class MediaPlayer
	private var nmedia_player: NativeMediaPlayer

	# The sound associated with this mediaplayer
	var sound: nullable Sound

	# Create a new MediaPlayer, but no sound is attached, you'll need
	# to use `load_sound` before using it
	init do self.nmedia_player = new NativeMediaPlayer

	# Init the mediaplayer with a sound resource id
	init from_id(context: NativeActivity, id: Int) do
		self.nmedia_player = new NativeMediaPlayer
		self.nmedia_player = nmedia_player.create(context, id)
		self.sound = new SoundMP(id, self)
	end

	# Load a sound for a given resource id
	fun load_sound(id: Int, context: NativeActivity): Sound do
		self.nmedia_player = self.nmedia_player.create(context, id)
		self.sound = new SoundMP(id, self)
		return self.sound.as(not null)
	end

	# Starts or resume playback
	# REQUIRE `self.sound != null`
	fun start do
		assert sound != null
		nmedia_player.start
	end

	# Stops playback after playback has been stopped or paused
	# REQUIRE `self.sound != null`
	fun stop do
		assert sound != null
		nmedia_player.stop
	end

	# Prepares the player for playback, synchronously
	# REQUIRE `self.sound != null`
	fun prepare do
		assert sound != null
		nmedia_player.prepare
	end

	# Pauses playback
	# REQUIRE `self.sound != null`
	fun pause do
		assert sound != null
		nmedia_player.pause
	end

	# Checks whether the mediaplayer is playing
	fun playing: Bool do return nmedia_player.playing

	# Releases the resources associated with this MediaPlayer
	fun destroy do
		nmedia_player.release
		self.sound = null
	end

	# Reset MediaPlayer to its initial state
	fun reset do nmedia_player.reset

	# Sets the datasource (file-pathor http/rtsp URL) to use
	fun data_source(path: String): Sound do
		sys.jni_env.push_local_frame(1)
		nmedia_player.data_source_path(path.to_java_string)
		sys.jni_env.pop_local_frame
		self.sound = new SoundMP(null, self)
		return self.sound.as(not null)
	end
	# Sets the data source (NativeFileDescriptor) to use
	fun data_source_fd(fd: NativeFileDescriptor, start_offset, length: Int): Sound do
		nmedia_player.data_source_fd(fd, start_offset, length)
		self.sound = new SoundMP(null, self)
		return self.sound.as(not null)
	end

	# Checks whether the MediaPlayer is looping or non-looping
	fun looping: Bool do return nmedia_player.looping

	# Sets the player to be looping or non-looping
	fun looping=(b: Bool) do nmedia_player.looping = b

	# Sets the volume on this player
	fun volume=(volume: Float) do nmedia_player.volume = volume

	# Sets the left volume and the right volume of this player
	fun both_volume(left_volume, right_volume: Float) do nmedia_player.both_volume(left_volume, right_volume)

	# Sets the audio stream type for this media player
	fun stream_type=(stream_type: Int) do nmedia_player.stream_type = stream_type
end

# Represents an android sound that can be played by a SoundPool or a MediaPlayer
# The only way to get a sound is by a MediaPlayer, a SoundPool, or the App
abstract class Sound

	# The resource ID of this sound
	var id: nullable Int

	fun play is abstract
end

# Sound implemented with a SoundPool
class SoundSP
	super Sound

	# The SoundPool who loaded this sound
	var soundpool: SoundPool

	# The SoundID of this sound in his SoundPool
	var soundpool_id: Int

	private init (id: nullable Int, soundpool_id: Int, soundpool: SoundPool) do
		self.id = id
		self.soundpool_id = soundpool_id
		self.soundpool = soundpool
	end

	redef fun play do soundpool.play(soundpool_id)
end

# Sound Implemented with a MediaPlayer
class SoundMP
	super Sound

	# The MediaPlayer who loaded this sound
	var media_player: MediaPlayer

	private init (id: nullable Int, media_player: MediaPlayer) do
		self.id = id
		self.media_player = media_player
	end

	redef fun play do self.media_player.start
end

redef class App

	fun default_mediaplayer: MediaPlayer is cached do return new MediaPlayer
	fun default_soundpool: SoundPool is cached do return new SoundPool

	# Get the native audio manager
	private	fun audio_manager: NativeAudioManager import native_activity in "Java" `{
		return (AudioManager)App_native_activity(recv).getSystemService(Context.AUDIO_SERVICE);
	`}

	# Manages whether the app sound need to be in headphones mode or not
	# TODO: this method is not ideal, need to find a better way
	fun manage_audio_mode import native_activity in "Java" `{
		AudioManager manager = (AudioManager)App_native_activity(recv).getSystemService(Context.AUDIO_SERVICE);
		manager.setMode(0);
			if (manager.isWiredHeadsetOn()) {
				manager.setSpeakerphoneOn(false);
			} else {
				manager.setSpeakerphoneOn(true);
			}
	`}

	# Retrieve a sound with a soundpool in the `assets` folder using it's name
	# Used to play short songs, can play multiple sounds simultaneously
	fun load_sound(path: String): Sound do
		return default_soundpool.load_asset_fd(asset_manager.open_fd(path))
	end

	# Retrieve a music with a media player in the `assets`folder using it's name
	# Used to play long sounds or musics, can't play multiple sounds simultaneously
	fun load_music(path: String): Sound do
		var fd = asset_manager.open_fd(path)
		var sound =  default_mediaplayer.data_source_fd(fd.file_descriptor, fd.start_offset, fd.length)
		return sound
	end

	# same as `load_sound` but load the sound from the `res\raw` folder
	fun load_sound_from_res(sound_name: String): Sound do
		return default_soundpool.load_name(resource_manager,self.native_activity, sound_name)
	end

	# same as `load_music` but load the sound from the `res\raw` folder
	fun load_music_from_res(music: String): Sound do
		return default_mediaplayer.load_sound(resource_manager.raw_id(music), self.native_activity)
	end

end
