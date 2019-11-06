# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Music Player Daemon client library
module mpd

import socket

# Connection to a MPD server
class MPDConnection

	# Socket connection to server.
	var socket: nullable TCPStream = null

	# Server hostname.
	var host: String

	# Server port.
	var port: Int

	# Server password.
	var password: nullable String

	# Last occured error.
	var error: nullable String = null

	# Connect to the MPD server
	fun connect
	do
		var p: nullable TCPStream = null

		p = new TCPStream.connect(host, port)
		assert p.connected

		sys.nanosleep(0,5000)

		var rep = p.read(1024)
		assert not rep.is_empty
		if not rep.has_prefix("OK") then
			print "MPD responded {rep}"
			abort
		end

		socket = p

		var password = password
		if password != null then
			write_and_check("password {password}\n")
		end
	end

	# Write a command to the MPD server
	protected fun write_and_check(msg: String)
	do
		if socket == null then connect

		socket.write(msg)
		sys.nanosleep(0,5000)
		var rep = socket.read(1024)
		if not rep.has_prefix("OK") then
			print "Error: MPD responded {rep}"
			socket.close
			socket = null
		end
	end

	# Get MPD server status
	fun status: nullable ServerStatus
	do
		if socket == null then connect

		var volume: nullable Int = null
		var state: nullable String = null
		var elapsed: nullable Int = null
		var time_at: nullable Int = null
		var time_total: nullable Int = null

		# get current status
		socket.write("status\n")
		var rep = socket.read(1024)
		for l in rep.split_with("\n") do
			var words = l.split_with(" ")
			if words.length > 1 then
				var key = words[0].to_lower
				var first_space = l.chars.index_of(' ')
				var rest = l.substring_from(first_space+1)
				if  key == "volume:" then
					volume = rest.to_i
					if volume == -1 then volume = null
				else if  key == "state:" then
					state = rest
				else if  key == "elapsed:" then
					elapsed = rest.to_i
				else if  key == "time:" then
					var times = rest.split(":")
					time_at = times[0].to_i
					time_total = times[1].to_i
				end
			end
		end

		if state != null then
			var status = new ServerStatus(volume, state, elapsed, time_at, time_total)
			return status
		else
			return null
		end
	end

	# Set the volume relatively
	fun relative_volume=(diff: Int)
	do
		if socket == null then connect

		var status = status
		if status != null then
			var vol = status.volume
			if vol != null then
				var new_vol = vol + diff
				new_vol = new_vol.clamp(0, 100)
				volume = new_vol
				return
			end
		end

		error = "Cannot get volume"
	end

	# Set MPD server volume.
	fun volume=(vol: Int) do write_and_check("setvol {vol}\n")

	# Pause music playing on the MPD server
	fun pause do write_and_check("pause\n")

	# Stop music playing on the MPD server
	fun stop do write_and_check("stop\n")

	# Play music playing on the MPD server
	fun play do write_and_check("play\n")

	# Get information on the currently playing song on the MPD server
	fun current_song: nullable SongInfo
	do
		if socket == null then connect

		var album: nullable String = null
		var artist: nullable String = null
		var title: nullable String = null
		var time: nullable Int = null

		socket.write("currentsong\n")
		var rep = socket.read(1024)
		for l in rep.split_with("\n") do
			var words = l.split_with(" ")
			if words.length > 1 then
				var key = words[0].to_lower
				var first_space = l.chars.index_of(' ')
				var rest = l.substring_from(first_space+1)
				if key == "album:" then
					album = rest
				else if key == "artist:" then
					artist = rest
				else if key == "title:" then
					title = rest
				else if key == "time:" then
					time = rest.to_i
				end
			end
		end

		if album != null and artist != null and
			title != null and time != null then
			return new SongInfo(album, artist, title, time)
		else
			return null
		end
	end

	# Load playlist named `name`.
	fun load_playlist(name: String)
	do
		write_and_check "load \"{name}\""
	end
end

# MPD song info
class SongInfo
	# Song album.
	var album: String

	# Song artist.
	var artist: String

	# Song title.
	var title: String

	# Song total duration.
	var time: Int
end

# MPD server status
class ServerStatus

	# MPD server volume.
	var volume: nullable Int

	# Playback state (play/stop/pause).
	var state: String

	# Is MPD server playing?
	fun playing: Bool do return state == "play"

	# Is MPD server stopped?
	fun stopped: Bool do return state == "stop"

	# Time elapsed within the current song.
	var elapsed: nullable Int

	# TODO comment
	var time_at: nullable Int

	# Total time of the current song.
	var time_total: nullable Int

	# Get the cursor position on the song duration.
	fun time_ratio: nullable Float do
		if time_at == null or time_total == null then return null
		return time_at.to_f / time_total.to_f
	end

	redef fun to_s do
		var vol = "unknown"
		if volume != null then vol = volume.to_s

		var time_at = time_at
		var time_total = time_total
		var elapsed = elapsed
		if time_at != null and time_total != null and elapsed != null then
			return "volume: {vol}\nstate: {state}\nelapsed: {elapsed}\ntime_[at|total]: {time_at}:{time_total}\ntime_ratio: {time_ratio.as(not null)}"
		else
			return "volume: {vol}\nstate: {state}"
		end
	end
end
