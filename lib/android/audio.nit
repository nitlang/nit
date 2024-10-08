# This file is part of NIT ( https://nitlanguage.org ).
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
# This module modifies the default behaviour of the audio loading:
# It is first loaded from the `res/raw` folder.
# The file extension is not needed for the `res/raw` loading part.
# If it didn't work, it is loaded from the `assets` folder.
# The file extension is needed for the `assets` loading part.
#
# `assets` contains the portable version of sounds, since the `res` folder exsists only in android projects.
#
# For this example, the sounds "test_sound" and "test_music" are located in the "assets/sounds" folder,
# they both have ".ogg" extension. "test_sound" is a short sound and "test_music" a music track
#
# ~~~nitish
# # Note that you need to specify the path from "assets" folder and the extension
# var s = new Sound("sounds/test_sound.ogg")
# var m = new Music("sounds/test_music.ogg")
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
intrude import assets_and_resources
import activities
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
private extern class NativeAudioManager in "Java" `{ android.media.AudioManager `}
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
		}catch(Exception e) {
			Log.e("Error preparing the Media Player", e.getMessage());
			e.printStackTrace();
		}
	`}

	new create(context: NativeActivity, id: Int): NativeMediaPlayer
	in "Java" `{
		try {
			return MediaPlayer.create(context, (int)id);
		}catch(Exception e) {
			return null;
		}
	`}

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
	fun data_source_fd(fd: NativeFileDescriptor, start_offset, length: Int): Int in "Java"  `{
		try {
			self.setDataSource(fd, start_offset, length);
			return 1;
		}catch(Exception e) {
			return 0;
		}
	`}
	fun data_source_path(path: JavaString): Int in "Java" `{
		try {
			self.setDataSource(path);
			return 1;
		}catch(Exception e) {
			Log.e("Error loading the Media Player", e.getMessage());
			return 0;
		}
	`}
	fun reset in "Java" `{ self.reset(); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeMediaPlayer_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

# Sound Pool from Java, used to play sounds simultaneously
# This is a low-level class, use `SoundPool`instead
private extern class NativeSoundPool in "Java" `{ android.media.SoundPool `}
	super JavaObject

	new(max_streams, stream_type, src_quality: Int) in "Java" `{
		return new SoundPool((int)max_streams, (int)stream_type, (int)src_quality);
	`}
	fun load_asset_fd(afd: NativeAssetFileDescriptor, priority: Int): Int in "Java" `{
		try {
			int id =  self.load(afd, (int)priority);
			return id;
		}catch(Exception e){
			return -1;
		}
	`}

	fun load_id(context: NativeActivity, resid, priority: Int): Int in "Java" `{
		try {
			int id =  self.load(context, (int)resid, (int)priority);
			return id;
		}catch(Exception e){
			return -1;
		}
	`}

	fun load_path(path: JavaString, priority: Int): Int in "Java" `{
		try {
			int id =  self.load(path, (int)priority);
			return id;
		}catch(Exception e){
			return -1;
		}
	`}

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

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeSoundPool_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end


# Used to play sound, best suited for sounds effects in apps or games
class SoundPool

	# Latest error on this sound pool
	var error: nullable Error = null

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

	init do self.nsoundpool = (new NativeSoundPool(max_streams, stream_type, src_quality)).new_global_ref

	# Load the sound from an asset file descriptor
	# this function is for advanced use
	private fun load_asset_fd(afd: NativeAssetFileDescriptor): Sound do
		var resval = nsoundpool.load_asset_fd(afd, self.priority)
		if  resval == -1 then
			self.error = new Error("Unable to load sound from assets")
			return new Sound.priv_init(null, -1, self, self.error)
		else
			return new Sound.priv_init(null, resval, self, null)
		end
	end

	# Returns only the id corresponding to the soundpool where the sound is loaded.
	# Needed by `load` of `Sound`.
	private fun load_asset_fd_rid(afd: NativeAssetFileDescriptor): Int do
		return nsoundpool.load_asset_fd(afd, self.priority)
	end

	# Load the sound from its resource id
	fun load_id(context: NativeActivity, id:Int): Sound do
		var resval = nsoundpool.load_id(context, id, priority)
			if  resval == -1 then
			self.error = new Error("Unable to load sound from assets")
			return new Sound.priv_init(null, -1, self, self.error)
		else
			return new Sound.priv_init(null, resval, self, null)
		end
	end

	# Returns only the id corresponding to the soundpool where the sound is loaded.
	private fun load_id_rid(context: NativeActivity, id: Int): Int do
		return nsoundpool.load_id(context, id, priority)
	end

	# Load the sound from the specified path
	fun load_path(path: String): Sound do
		sys.jni_env.push_local_frame(1)
		var resval = nsoundpool.load_path(path.to_java_string, priority)
		sys.jni_env.pop_local_frame
		if  resval == -1 then
			self.error = new Error("Unable to load sound from path: " + path)
			return new Sound.priv_init(null, -1, self, self.error)
		else
			return new Sound.priv_init(null, resval, self, null)
		end
	end

	# Play a sound from a sound ID
	# return non-zero streamID if successful, zero if failed
	fun play(id: Int): Int do
		return nsoundpool.play(id, left_volume, right_volume, priority, looping, rate)
	end

	# Load a sound by its `name` in the resources, the sound must be in the `res/raw` folder
	fun load_name(resource_manager: ResourcesManager, context: NativeActivity, name: String): Sound do
		var id = resource_manager.raw_id(name)
		var resval = nsoundpool.load_id(context, id, priority)
		if  resval == -1 then
			self.error = new Error("Unable to load sound from resources: " + name)
			return new Sound.priv_init(null, -1, self, self.error)
		else
			return new Sound.priv_init(null, resval, self, null)
		end
	end

	# Returns only the id corresponding to the soundpool where the sound is loaded.
	private fun load_name_rid(resource_manager: ResourcesManager, context: NativeActivity, sound: String): Int do
		var id = resource_manager.raw_id(sound)
		return nsoundpool.load_id(context, id, priority)
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
	fun unload(sound: Sound): Bool do return nsoundpool.unload(sound.soundpool_id)

	# Destroys the object
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
	var sound: nullable Music = null is writable

	# Error gestion
	var error: nullable Error = null

	# Create a new MediaPlayer, but no sound is attached, you'll need
	# to use `load_sound` before using it
	init do self.nmedia_player = (new NativeMediaPlayer).new_global_ref

	# Init the mediaplayer with a sound resource id
	init from_id(context: NativeActivity, id: Int) do
		self.nmedia_player = new NativeMediaPlayer.create(context, id)
		if self.nmedia_player.is_java_null then
			self.error = new Error("Failed to create the MediaPlayer")
			self.sound = new Music.priv_init(id, self, self.error)
		end
		self.sound = new Music.priv_init(id, self, null)
	end

	# Load a sound for a given resource id
	fun load_sound(id: Int, context: NativeActivity): Music do
		# FIXME: maybe find a better way to handle this situation
		# If two different music are loaded with the same `MediaPlayer`,
		# a new `NativeMediaPlayer` will be created for the secondd music
		# and the nit program will loose the handle to the previous one
		# If the previous music is playing, we need to stop it
		if playing then
			stop
			reset
			destroy
		end

		self.nmedia_player = new NativeMediaPlayer.create(context, id)
		if self.nmedia_player.is_java_null then
			self.error = new Error("Failed to load a sound")
			self.sound = new Music.priv_init(id, self, new Error("Sound loading failed"))
			return self.sound.as(not null)
		else
			if self.error != null then self.error = null
			self.sound = new Music.priv_init(id, self, null)
			self.is_prepared = true
			return self.sound.as(not null)
		end
	end

	# Starts or resumes playback
	# REQUIRE `self.sound != null`
	fun start do
		if self.error != null then return
		if not is_prepared then prepare
		nmedia_player.start
	end

	# Stops playback after playback has been stopped or paused
	# REQUIRE `self.sound != null`
	fun stop do
		if self.error != null then return
		is_prepared = false
		nmedia_player.stop
	end

	# Prepares the player for playback, synchronously
	# REQUIRE `self.sound != null`
	fun prepare do
		if self.error != null then return
		assert sound != null
		nmedia_player.prepare
		is_prepared = true
	end

	# Pauses playback
	# REQUIRE `self.sound != null`
	fun pause do
		if self.error != null then return
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
	fun data_source(path: String): Music do
		sys.jni_env.push_local_frame(1)
		var retval = nmedia_player.data_source_path(path.to_java_string)
		sys.jni_env.pop_local_frame
		if retval == 0 then
			self.error = new Error("could not load the sound " + path)
			self.sound = new Music.priv_init(null, self, self.error)

		else
			self.sound = new Music.priv_init(null, self, null)
		end
		return self.sound.as(not null)
	end
	# Sets the data source (NativeFileDescriptor) to use
	fun data_source_fd(fd: NativeAssetFileDescriptor): Music do
		if not fd.is_java_null then
			if nmedia_player.data_source_fd(fd.file_descriptor, fd.start_offset, fd.length) == 0 then
				self.error = new Error("could not load the sound")
				self.sound = new Music.priv_init(null, self, self.error)
			else
				self.sound = new Music.priv_init(null, self, null)
			end
			return self.sound.as(not null)
		else
			var error = new Error("could not load the sound")
			return new Music.priv_init(null, self, error)
		end
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

redef class PlayableAudio
	# Flag to know if the user paused the sound
	# Used when the app pause all sounds or resume all sounds
	var paused: Bool = false

	# Is `self` already loaded?
	protected var is_loaded = false is writable

	redef var error = null
end

redef class Sound

	# Resource ID of this sound
	var id: nullable Int is noinit

	# The SoundPool who loaded this sound
	var soundpool: SoundPool is noinit

	# The SoundID of this sound in his SoundPool
	var soundpool_id: Int is noinit

	private	init priv_init(id: nullable Int, soundpool_id: Int, soundpool: SoundPool, error: nullable Error) is nosuper do
		self.id = id
		self.soundpool_id = soundpool_id
		self.soundpool = soundpool
		if error != null then
			self.error = error
		else
			self.is_loaded = true
		end
	end

	redef fun load do
		if is_loaded then return

		# Try resources (res)
		var rid = app.default_soundpool.load_name_rid(app.resource_manager, app.native_activity, path.strip_extension)
		if rid > 0 then
			self.soundpool_id = rid
			self.soundpool = app.default_soundpool
			self.error = null
			self.soundpool.error = null
		else
			# Try assets
			var nam = app.asset_manager.open_fd(path)
			if nam.is_java_null then
				self.error = new Error("Failed to get file descriptor for " + path)
			else
				var retval_assets = app.default_soundpool.load_asset_fd_rid(nam)
				nam.close
				if retval_assets == -1 then
					self.error = new Error("Failed to load " + path)
				else
					self.soundpool_id = retval_assets
					self.soundpool = app.default_soundpool
					self.error = null
					self.soundpool.error = null
				end
			end
		end
		is_loaded = true

		var error = error
		if error != null then print_error error
	end

	redef fun play do
		if not is_loaded then load
		if self.error != null then return
		soundpool.play(soundpool_id)
	end

	redef fun pause do
		if self.error != null or not self.is_loaded then return
		soundpool.pause_stream(soundpool_id)
		paused = true
	end

	redef fun resume do
		if self.error != null or not self.is_loaded then return
		soundpool.resume(soundpool_id)
		paused = false
	end

end

redef class Music

	# Resource ID of this sound
	var id: nullable Int is noinit

	# The MediaPlayer who loaded this sound
	var media_player: MediaPlayer is noinit

	private init priv_init(id: nullable Int, media_player: MediaPlayer, error: nullable Error) is nosuper do
		self.id = id
		self.media_player = media_player
		if error != null then
			self.error = error
		else
			self.is_loaded = true
		end
	end

	redef fun load do
		if is_loaded then return

		# Try resources (res)
		var rid = app.resource_manager.raw_id(path.strip_extension)
		if rid > 0 then
			var mp_sound_resources = app.default_mediaplayer.load_sound(rid, app.native_activity)
			if mp_sound_resources.error != null then
				self.media_player = app.default_mediaplayer
				self.error = null
				self.media_player.error = null
			end
			self.error = mp_sound_resources.error
		else
			# Try assets
			var nam = app.asset_manager.open_fd(path)
			if nam.is_java_null then
				self.error = new Error("Failed to get file descriptor for " + path)
			else
				var mp_sound_assets = app.default_mediaplayer.data_source_fd(nam)
				nam.close
				if mp_sound_assets.error != null then
					self.error = mp_sound_assets.error
				else
					self.media_player = app.default_mediaplayer
					self.error = null
					self.media_player.error = null
				end
			end
		end
		is_loaded = true

		var error = error
		if error != null then print_error error
	end

	redef fun play do
		if not is_loaded then load
		if self.error != null then return
		media_player.start
	end

	redef fun pause do
		if self.error != null or not self.is_loaded then return
		media_player.pause
		paused = true
	end

	redef fun resume do
		if self.error != null or not self.is_loaded then return
		play
		paused = false
	end
end

redef class App

	# Returns the default MediaPlayer of the application.
	# When you load a music, it goes in this MediaPlayer.
	# Use it for advanced sound management
	var default_mediaplayer: MediaPlayer is lazy do return new MediaPlayer

	# Returns the default MediaPlayer of the application.
	# When you load a short sound (not a music), it's added to this soundpool.
	# Use it for advanced sound management.
	var default_soundpool: SoundPool is lazy do return new SoundPool

	# Get the native audio manager
	private fun audio_manager(native_activity: NativeContext): NativeAudioManager in "Java" `{
		return (AudioManager)native_activity.getSystemService(Context.AUDIO_SERVICE);
	`}

	# Sets the stream of the app to STREAM_MUSIC.
	# STREAM_MUSIC is the default stream used by android apps.
	private fun manage_audio_stream(native_activity: NativeActivity) in "Java" `{
		native_activity.setVolumeControlStream(AudioManager.STREAM_MUSIC);
	`}

	# Same as `load_sound` but load the sound from the `res/raw` folder
	fun load_sound_from_res(sound_name: String): Sound do
		return default_soundpool.load_name(resource_manager, native_activity, sound_name)
	end

	# Same as `load_music` but load the sound from the `res/raw` folder
	fun load_music_from_res(music: String): Music do
		return default_mediaplayer.load_sound(resource_manager.raw_id(music), native_activity)
	end

	redef fun on_pause do
		super
		for s in sounds do
			# Pausing sounds that are not already paused by user
			# `s.paused` is set to false because `pause` set it to true
			# and we want to know which sound has been paused by the user
			# and which one has been paused by the app
			if not s.paused then
				s.pause
				s.paused = false
			end
		end
		audio_manager(native_activity).abandon_audio_focus
	end

	redef fun on_create do
		super
		audio_manager(native_activity).request_audio_focus
		manage_audio_stream native_activity
	end

	redef fun on_resume do
		super
		audio_manager(native_activity).request_audio_focus
		for s in sounds do
			# Resumes only the sounds paused by the App
			if not s.paused then s.resume
		end
	end
end
