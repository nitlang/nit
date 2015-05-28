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

# Android audio services, wraps a part of android audio API
#
# For this example, the sounds "test_sound" and "test_music" are located in the "assets/sounds" folder,
# they both have ".ogg" extension. "test_sound" is a short sound and "test_music" a music track
# ~~~nitish
# # Note that you need to specify the path from "assets" folder and the extension
# var s = app.load_sound("sounds/test_sound.ogg")
# var m = app.load_music("sounds/test_music.ogg")
# s.play
# m.play
# ~~~
#
# Now, the sounds are in "res/raw"
# ~~~nitish
# s = app.load_sound_from_res("test_sound")
# m = app.load_music_from_res("test_sound")
# s.play
# m.play
# ~~~
#
# See http://developer.android.com/reference/android/media/package-summary.html for more infos
module audio

import java
import java::io
import assets_and_resources
import native_app_glue # FIXME update this module to use nit_activity
import app::audio

in "Java" `{
	import android.media.MediaPlayer;
	import android.media.SoundPool;
	import java.io.IOException;
	import android.media.AudioManager;
	import android.media.AudioManager.OnAudioFocusChangeListener;
	import android.content.Context;
	import android.util.Log;
`}

# FIXME: This listener is not working at the moment, but is needed to gain or give up the audio focus
# of the application
in "Java inner" `{
	static OnAudioFocusChangeListener afChangeListener = new OnAudioFocusChangeListener() {
		public void onAudioFocusChange(int focusChange) {
			if(focusChange == AudioManager.AUDIOFOCUS_LOSS_TRANSIENT) {
			}else if (focusChange == AudioManager.AUDIOFOCUS_GAIN) {
			}else if (focusChange == AudioManager.AUDIOFOCUS_LOSS) {
			}
		}
	};
`}

# AudioManager of the application, used to manage the audio mode
extern class NativeAudioManager in "Java" `{ android.media.AudioManager `}
	super JavaObject

	# Current audio mode.
	# ( MODE_NORMAL = 0, MODE_RINGTONE = 1, MODE_IN_CALL = 2 or MODE_IN_COMMUNICATION = 3 )
	fun mode: Int in "Java" `{ return self.getMode(); `}

	# Sets the audio mode.
	# ( MODE_NORMAL = 0, MODE_RINGTONE = 1, MODE_IN_CALL = 2 or MODE_IN_COMMUNICATION = 3 )
	fun mode=(i: Int) in "Java" `{ self.setMode((int)i); `}

	# Sends a request to obtain audio focus
	fun request_audio_focus: Int in "Java" `{
		return self.requestAudioFocus(afChangeListener, AudioManager.STREAM_MUSIC, AudioManager.AUDIOFOCUS_GAIN);
	`}

	# Gives up audio focus
	fun abandon_audio_focus: Int in "Java" `{ return self.abandonAudioFocus(afChangeListener); `}
end

# Media Player from Java, used to play long sounds or musics, not simultaneously
# This is a low-level class, use `MediaPlater` instead
private extern class NativeMediaPlayer in "Java" `{ android.media.MediaPlayer `}
	super JavaObject

	new in "Java" `{
		MediaPlayer mp = new MediaPlayer();
		mp.setAudioStreamType(AudioManager.STREAM_MUSIC);
		return mp;
	`}
	fun start in "Java" `{ self.start(); `}
	fun prepare in "Java" `{
		try {
			self.prepare();
		}catch(IOException e) {
			Log.e("Error preparing the Media Player", e.getMessage());
			e.printStackTrace();
		}
	`}

	fun create(context: NativeActivity, id: Int): NativeMediaPlayer in "Java" `{ return self.create(context, (int)id); `}
	fun pause in "Java" `{ self.pause(); `}
	fun stop in "Java" `{ self.stop(); `}
	fun playing: Bool in "Java" `{ return self.isPlaying(); `}
	fun release in "Java" `{ self.release(); `}
	fun duration: Int in "Java" `{ return self.getDuration(); `}
	fun looping: Bool in "Java" `{ return self.isLooping(); `}
	fun looping=(b: Bool) in "Java" `{ self.setLooping(b); `}
	fun volume=(vol: Float) in "Java" `{ self.setVolume((float)vol, (float)vol); `}
	fun both_volume(left_volume, right_volume: Float) in "Java" `{ self.setVolume((float)left_volume, (float)right_volume); `}
	fun stream_type=(stream_type: Int) in "Java" `{ self.setAudioStreamType((int)stream_type); `}
	fun data_source_fd(fd: NativeFileDescriptor, start_offset, length: Int) in "Java"  `{
		try {
			self.setDataSource(fd, start_offset, length);
		}catch(IOException e) {
			Log.e("Error loading the Media Player with a file descriptor", e.getMessage());
			e.printStackTrace();
		}
	`}
	fun data_source_path(path: JavaString) in "Java" `{
		try {
			self.setDataSource(path);
		}catch(IOException e) {
			Log.e("Error loading the Media Player", e.getMessage());
			e.printStackTrace();
		}
	`}
	fun reset in "Java" `{ self.reset(); `}
end

# Sound Pool from Java, used to play sounds simultaneously
# This is a low-level class, use `SoundPool`instead
private extern class NativeSoundPool in "Java" `{ android.media.SoundPool `}
	super JavaObject

	new(max_streams, stream_type, src_quality: Int) in "Java" `{
		return new SoundPool((int)max_streams, (int)stream_type, (int)src_quality);
	`}
	fun load_asset_fd(afd: NativeAssetFileDescriptor, priority: Int): Int in "Java" `{ return self.load(afd, (int)priority); `}
	fun load_id(context: NativeActivity, resid, priority: Int): Int in "Java" `{ return self.load(context, (int)resid, (int)priority); `}
	fun load_path(path: JavaString, priority: Int): Int in "Java" `{ return self.load(path, (int)priority); `}
	fun play(sound_id: Int, left_volume, right_volume: Float, priority, l: Int, rate: Float): Int in "Java" `{
		return self.play((int)sound_id, (float)left_volume, (float)right_volume, (int)priority, (int)l, (float)rate);
	`}
	fun pause(stream_id: Int) in "Java" `{ self.pause((int)stream_id); `}
	fun auto_pause in "Java" `{ self.autoPause(); `}
	fun auto_resume in "Java" `{ self.autoResume(); `}
	fun resume(stream_id: Int) in "Java" `{ self.resume((int)stream_id); `}
	fun set_loop(stream_id, l: Int) in "Java" `{ self.setLoop((int)stream_id, (int)l); `}
	fun set_priority(stream_id, priority: Int) in "Java" `{ self.setPriority((int)stream_id, (int)priority); `}
	fun set_rate(stream_id: Int, rate: Float) in "Java" `{ self.setRate((int)stream_id, (float)rate); `}
	fun set_volume(stream_id: Int, left_volume, right_volume: Float) in "Java" `{ self.setVolume((int)stream_id, (float)left_volume, (float)right_volume); `}
	fun stop(stream_id: Int) in "Java" `{ self.stop((int)stream_id); `}
	fun unload(sound_id: Int): Bool in "Java" `{ return self.unload((int)sound_id); `}
	fun release in "Java" `{ self.release(); `}
end


# Used to play sound, best suited for sounds effects in apps or games
class SoundPool
	private var nsoundpool: NativeSoundPool is noinit
	# The maximum number of simultaneous streams for this SoundPool
	var max_streams = 10 is writable

	# The audio stream type, 3 is STREAM_MUSIC, default for game application
	var stream_type = 3 is writable

	# The sample-rate converter quality, currently has no effect
	var src_quality = 0 is writable

	# Left volume value, range 0.0 to 1.0
	var left_volume = 1.0 is writable

	# Right volume value, range 0.0 to 1.0
	var right_volume = 1.0 is writable

	# Playback rate, 1.0 = normal playback, range 0.5 to 2.0
	var rate = 1.0 is writable

	# Loop mode, 0 = no loop, -1 = loop forever
	var looping = 0 is writable

	# Stream priority
	private var priority = 1

	init do self.nsoundpool = new NativeSoundPool(max_streams, stream_type, src_quality)

	# Load the sound from an asset file descriptor
	# this function is for advanced use
	fun load_asset_fd(afd: NativeAssetFileDescriptor): Sound do
		return new SoundSP(null, nsoundpool.load_asset_fd(afd, priority), self)
	end

	# Load the sound from its resource id
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

	# Load a sound by its name in the resources, the sound must be in the `res/raw` folder
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
	private var nmedia_player: NativeMediaPlayer is noinit

	# Used to control the state of the mediaplayer
	private var is_prepared = false is writable

	# The sound associated with this mediaplayer
	var sound: nullable Sound = null is writable

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
		self.is_prepared = true
		return self.sound.as(not null)
	end

	# Starts or resumes playback
	# REQUIRE `self.sound != null`
	fun start do
		if not is_prepared then prepare
		nmedia_player.start
	end

	# Stops playback after playback has been stopped or paused
	# REQUIRE `self.sound != null`
	fun stop do
		is_prepared = false
		nmedia_player.stop
	end

	# Prepares the player for playback, synchronously
	# REQUIRE `self.sound != null`
	fun prepare do
		assert sound != null
		nmedia_player.prepare
		is_prepared = true
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

	# Sets the datasource (file-path or http/rtsp URL) to use
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

redef class Sound

	# Resource ID of this sound
	var id: nullable Int
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
	redef fun pause do soundpool.pause_stream(soundpool_id)
	redef fun resume do soundpool.resume(soundpool_id)
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

	redef fun play do media_player.start
	redef fun pause do media_player.pause
	redef fun resume do play
end

redef class App

	# Sounds handled by the application, when you load a sound, it's added to this list.
	# This array is used in `pause` and `resume`
	private var sounds = new Array[Sound]

	# Returns the default MediaPlayer of the application.
	# When you load a music, it goes in this MediaPlayer.
	# Use it for advanced sound management
	var default_mediaplayer: MediaPlayer is lazy do return new MediaPlayer

	# Returns the default MediaPlayer of the application.
	# When you load a short sound (not a music), it's added to this soundpool.
	# Use it for advanced sound management.
	var default_soundpool: SoundPool is lazy do return new SoundPool

	# Get the native audio manager
	fun audio_manager: NativeAudioManager import native_activity in "Java" `{
		return (AudioManager)App_native_activity(self).getSystemService(Context.AUDIO_SERVICE);
	`}

	# Sets the stream of the app to STREAM_MUSIC.
	# STREAM_MUSIC is the default stream used by android apps.
	private fun manage_audio_stream import native_activity, native_app_glue in "Java" `{
		App_native_activity(self).setVolumeControlStream(AudioManager.STREAM_MUSIC);
	`}

	# Retrieves a sound with a soundpool in the `assets` folder using its name.
	# Used to play short songs, can play multiple sounds simultaneously
	redef fun load_sound(path: String): Sound do
		return add_to_sounds(default_soundpool.load_asset_fd(asset_manager.open_fd(path)))
	end

	# Retrieves a music with a media player in the `assets` folder using its name.
	# Used to play long sounds or musics, can't play multiple sounds simultaneously
	fun load_music(path: String): Sound do
		var fd = asset_manager.open_fd(path)
		return add_to_sounds(default_mediaplayer.data_source_fd(fd.file_descriptor, fd.start_offset, fd.length))
	end

	# Same as `load_sound` but load the sound from the `res/raw` folder
	fun load_sound_from_res(sound_name: String): Sound do
		return add_to_sounds(default_soundpool.load_name(resource_manager,self.native_activity, sound_name))
	end

	# Same as `load_music` but load the sound from the `res/raw` folder
	fun load_music_from_res(music: String): Sound do
		return add_to_sounds(default_mediaplayer.load_sound(resource_manager.raw_id(music), self.native_activity))
	end

	# Factorizes `sounds.add` to use it in `load_music`, `load_sound`, `load_music_from_res` and `load_sound_from_res`
	private fun add_to_sounds(sound: Sound): Sound do
		sounds.add(sound)
		return sound
	end

	redef fun pause do
		for s in sounds do s.pause
		audio_manager.abandon_audio_focus
	end

	redef fun init_window do
		super
		audio_manager.request_audio_focus
		manage_audio_stream
	end

	redef fun resume do
		super
		audio_manager.request_audio_focus
		for s in sounds do s.resume
	end
end
