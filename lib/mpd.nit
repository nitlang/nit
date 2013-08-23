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

# Client for a MPD server
module mpd

import socket

# Connection to a MPD server
class MPDConnection
	var socket: nullable Socket = null

	var host: String
	var port: Int
	var password: nullable String

	var error: nullable String = null

	# Connect to the MPD server
	fun connect
	do
		var p: nullable Socket = null

		p = new Socket.stream_with_host(host, port)
		p.connect

		sys.nanosleep(0,5000)

		var rep = p.read
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
		var rep = socket.read
		assert rep.has_prefix("OK") else print "MPD responded {rep}"
	end

	# Get MPD server status
	fun status: nullable ServerStatus
	do
		if socket == null then connect

		var volume: nullable Int = null
		var state: nullable String = null

		# get current status
		socket.write("status\n")
		var rep = socket.read
		for l in rep.split_with("\n") do
			var words = l.split_with(" ")
			if words.length > 1 then
				var key = words[0].to_lower
				var first_space = l.index_of(' ')
				var rest = l.substring_from(first_space+1)
				if  key == "volume:" then
					volume = rest.to_i
					if volume == -1 then volume = null
				else if  key == "volume:" then
					state = rest
				end
			end
		end

		if state != null then
			return new ServerStatus(volume, state)
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
				new_vol = new_vol.max(0).min(100)
				volume = new_vol
				return
			end
		end

		error = "Cannot get volume"
	end

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

		socket.write("currentsong\n")
		var rep = socket.read
		for l in rep.split_with("\n") do
			var words = l.split_with(" ")
			if words.length > 1 then
				var key = words[0].to_lower
				var first_space = l.index_of(' ')
				var rest = l.substring_from(first_space+1)
				if key == "album:" then
					album = rest
				else if key == "artist:" then
					artist = rest
				else if key == "title:" then
					title = rest
				end
			end
		end

		if album != null and artist != null and title != null then
			return new SongInfo(album, artist, title)
		else
			return null
		end
	end
end

# MPD song info
class SongInfo
	var album: String
	var artist: String
	var title: String
end

# MPD server status
class ServerStatus
	var volume: nullable Int
	var state: String
end
