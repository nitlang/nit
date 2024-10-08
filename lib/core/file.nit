# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean-Sébastien Gélinas <calestar@gmail.com>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# File manipulations (create, read, write, etc.)
module file

intrude import stream
intrude import text::ropes
import text
import time
import gc

in "C Header" `{
	#include <dirent.h>
	#include <string.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <unistd.h>
	#include <stdio.h>
	#include <errno.h>
#ifndef _WIN32
	#include <poll.h>
#endif
`}

in "C" `{
#ifdef _WIN32
	#include <windows.h>
#endif
`}

# `Stream` used to interact with a File or FileDescriptor
abstract class FileStream
	super Stream
	# The path of the file.
	var path: nullable String = null

	# The FILE *.
	private var file: nullable NativeFile = null

	# The status of a file. see POSIX stat(2).
	#
	#     var f = new FileReader.open("/etc/issue")
	#     assert f.file_stat.is_file
	#
	# Return null in case of error
	fun file_stat: nullable FileStat
	do
		var stat = _file.as(not null).file_stat
		if stat.address_is_null then return null
		return new FileStat(stat)
	end

	# File descriptor of this file
	fun fd: Int do return _file.as(not null).fileno

	redef fun close
	do
		var file = _file
		if file == null then return
		if file.address_is_null then
			if last_error != null then return
			last_error = new IOError("Cannot close unopened file")
			return
		end
		var i = file.io_close
		if i != 0 then
			last_error = new IOError("Close failed due to error {sys.errno.strerror}")
		end
		_file = null
	end

	# Sets the buffering mode for the current FileStream
	#
	# If the buf_size is <= 0, its value will be 512 by default
	#
	# The mode is any of the buffer_mode enumeration in `Sys`:
	#
	# * `buffer_mode_full`
	# * `buffer_mode_line`
	# * `buffer_mode_none`
	fun set_buffering_mode(buf_size, mode: Int) do
		if buf_size <= 0 then buf_size = 512
		if _file.as(not null).set_buffering_type(buf_size, mode) != 0 then
			last_error = new IOError("Error while changing buffering type for FileStream, returned error {sys.errno.strerror}")
		end
	end
end

# `Stream` that can read from a File
class FileReader
	super FileStream
	super PollableReader
	# Misc

	# Open the same file again.
	# The original path is reused, therefore the reopened file can be a different file.
	#
	#     var f = new FileReader.open("/etc/issue")
	#     var l = f.read_line
	#     f.reopen
	#     assert l == f.read_line
	fun reopen
	do
		var fl = _file
		if fl != null and not fl.address_is_null then close
		last_error = null
		_file = new NativeFile.io_open_read(path.as(not null).to_cstring)
		if _file.as(not null).address_is_null then
			last_error = new IOError("Cannot open `{path.as(not null)}`: {sys.errno.strerror}")
			return
		end
	end

	redef fun raw_read_byte
	do
		var nb = _file.as(not null).io_read(write_buffer, 1)
		if last_error == null and _file.as(not null).ferror then
			last_error = new IOError("Cannot read `{path.as(not null)}`: {sys.errno.strerror}")
		end
		if nb == 0 then return -1
		return write_buffer[0].to_i
	end

	redef fun raw_read_bytes(cstr, max)
	do
		var nb = _file.as(not null).io_read(cstr, max)
		if last_error == null and _file.as(not null).ferror then
			last_error = new IOError("Cannot read `{path.as(not null)}`: {sys.errno.strerror}")
		end
		return nb
	end

	redef fun eof do
		var fl = _file
		if fl == null then return true
		if fl.address_is_null then return true
		if last_error != null then return true
		if super then
			if last_error != null then return true
			return fl.feof
		end
		return false
	end

	# Open the file at `path` for reading.
	#
	#     var f = new FileReader.open("/etc/issue")
	#     assert not f.eof
	#     f.close
	#
	# In case of error, `last_error` is set
	#
	#     f = new FileReader.open("/fail/does not/exist")
	#     assert f.eof
	#     assert f.last_error != null
	init open(path: String)
	do
		self.path = path
		_file = new NativeFile.io_open_read(path.to_cstring)
		if _file.as(not null).address_is_null then
			last_error = new IOError("Cannot open `{path}`: {sys.errno.strerror}")
		end
	end

	# Creates a new File stream from a file descriptor
	#
	# This is a low-level method.
	init from_fd(fd: Int) do
		self.path = ""
		_file = fd.fd_to_stream(read_only)
		if _file.as(not null).address_is_null then
			last_error = new IOError("Error: Converting fd {fd} to stream failed with '{sys.errno.strerror}'")
		end
	end

	redef fun poll_in
	do
		var res = native_poll_in(fd)
		if res == -1 then
			last_error = new IOError(errno.to_s)
			return false
		else return res > 0
	end

	private fun native_poll_in(fd: Int): Int `{
#ifndef _WIN32
		struct pollfd fds = {(int)fd, POLLIN, 0};
		return poll(&fds, 1, 0);
#else
		return 0;
#endif
	`}
end

# `Stream` that can write to a File
class FileWriter
	super FileStream
	super Writer

	redef fun write_bytes_from_cstring(cs, len) do
		if last_error != null then return
		if not _is_writable then
			last_error = new IOError("cannot write to non-writable stream")
			return
		end
		write_native(cs, 0, len)
	end

	redef fun write(s)
	do
		if last_error != null then return
		if not _is_writable then
			last_error = new IOError("cannot write to non-writable stream")
			return
		end
		s.write_native_to(self)
	end

	redef fun write_byte(value)
	do
		if last_error != null then return
		if not _is_writable then
			last_error = new IOError("Cannot write to non-writable stream")
			return
		end
		if _file.as(not null).address_is_null then
			last_error = new IOError("Writing on a null stream")
			_is_writable = false
			return
		end

		var err = _file.as(not null).write_byte(value)
		if err != 1 then
			# Big problem
			last_error = new IOError("Problem writing a byte: {err}")
		end
	end

	redef fun close
	do
		super
		_is_writable = false
	end
	redef var is_writable = false

	# Write `len` bytes from `native`.
	private fun write_native(native: CString, from, len: Int)
	do
		if last_error != null then return
		if not _is_writable then
			last_error = new IOError("Cannot write to non-writable stream")
			return
		end
		if _file.as(not null).address_is_null then
			last_error = new IOError("Writing on a null stream")
			_is_writable = false
			return
		end
		var err = _file.as(not null).io_write(native, from, len)
		if err != len then
			# Big problem
			last_error = new IOError("Problem in writing : {err} {len} \n")
		end
	end

	# Open the file at `path` for writing.
	init open(path: String)
	do
		_file = new NativeFile.io_open_write(path.to_cstring)
		self.path = path
		_is_writable = true
		if _file.as(not null).address_is_null then
			last_error = new IOError("Cannot open `{path}`: {sys.errno.strerror}")
			is_writable = false
		end
	end

	# Creates a new File stream from a file descriptor
	init from_fd(fd: Int) do
		self.path = ""
		_file = fd.fd_to_stream(wipe_write)
		_is_writable = true
		 if _file.as(not null).address_is_null then
			 last_error = new IOError("Error: Opening stream from file descriptor {fd} failed with '{sys.errno.strerror}'")
			_is_writable = false
		end
	end
end

redef class Int
	# Creates a file stream from a file descriptor `fd` using the file access `mode`.
	#
	# NOTE: The `mode` specified must be compatible with the one used in the file descriptor.
	private fun fd_to_stream(mode: CString): NativeFile `{
		return fdopen((int)self, mode);
	`}

	# Does the file descriptor `self` refer to a terminal?
	fun isatty: Bool `{ return isatty(self); `}
end

# Constant for read-only file streams
private fun read_only: CString do return once "r".to_cstring

# Constant for write-only file streams
#
# If a stream is opened on a file with this method,
# it will wipe the previous file if any.
# Else, it will create the file.
private fun wipe_write: CString do return once "w".to_cstring

###############################################################################

# Standard input stream.
#
# The class of the default value of `sys.stdin`.
class Stdin
	super FileReader

	init do
		_file = new NativeFile.native_stdin
		path = "/dev/stdin"
	end
end

# Standard output stream.
#
# The class of the default value of `sys.stdout`.
class Stdout
	super FileWriter
	init do
		_file = new NativeFile.native_stdout
		path = "/dev/stdout"
		_is_writable = true
		set_buffering_mode(256, sys.buffer_mode_line)
	end
end

# Standard error stream.
#
# The class of the default value of `sys.stderr`.
class Stderr
	super FileWriter
	init do
		_file = new NativeFile.native_stderr
		path = "/dev/stderr"
		_is_writable = true
	end
end

###############################################################################

redef class Writable
	# Like `write_to` but take care of creating the file
	fun write_to_file(filepath: String)
	do
		var stream = new FileWriter.open(filepath)
		write_to(stream)
		stream.close
	end
end

# Utility class to access file system services.
#
# Usually created with `Text::to_path`.
#
# `Path` objects does not necessarily represent existing files in a file system.
# They are sate-less objects that efficiently represent path information.
# They also provide an easy to use API on file-system services and are used to store their error status (see `last_error`)
class Path

	private var path: String

	# Path to this file
	redef fun to_s do return path

	# Short name of the file at `to_s`
	#
	# ~~~
	# var path = "/tmp/somefile".to_path
	# assert path.filename == "somefile"
	# ~~~
	#
	# The result does not depend of the file system, thus is cached for efficiency.
	var filename: String = path.basename is lazy

	# The path simplified by removing useless `.`, removing `//`, and resolving `..`
	#
	# ~~~
	# var path = "somedir/./tmp/../somefile".to_path
	# assert path.simplified.to_s == "somedir/somefile"
	# ~~~
	#
	# See `String:simplify_path` for details.
	#
	# The result does not depend of the file system, thus is cached for efficiency.
	var simplified: Path is lazy do
		var res = path.simplify_path.to_path
		res.simplified = res
		return res
	end

	# Return the directory part of the path.
	#
	# ~~~
	# var path = "/foo/bar/baz".to_path
	# assert path.dir.to_s == "/foo/bar"
	# assert path.dir.dir.to_s == "/foo"
	# assert path.dir.dir.dir.to_s == "/"
	# ~~~
	#
	# See `String:dirname` for details.
	#
	# The result does not depend of the file system, thus is cached for efficiency.
	var dir: Path is lazy do
		return path.dirname.to_path
	end

	# Last error produced by I/O operations.
	#
	# ~~~
	# var path = "/does/not/exists".to_path
	# assert path.last_error == null
	# path.read_all
	# assert path.last_error != null
	# ~~~
	#
	# Since `Path` objects are stateless, `last_error` is reset on most operations and reflect its status.
	var last_error: nullable IOError = null is writable

	# Does the file at `path` exists?
	#
	# If the file does not exists, `last_error` is set to the information.
	fun exists: Bool do return stat != null

	# Information on the file at `self` following symbolic links
	#
	# Returns `null` if there is no file at `self`.
	# `last_error` is updated to contains the error information on error, and null on success.
	#
	#     assert "/etc/".to_path.stat.is_dir
	#     assert "/etc/issue".to_path.stat.is_file
	#     assert "/fail/does not/exist".to_path.stat == null
	#
	# ~~~
	# var p = "/tmp/".to_path
	# var stat = p.stat
	# if stat != null then # Does `p` exist?
	#     print "It's size is {stat.size}"
	#     if stat.is_dir then print "It's a directory"
	# else
	#     print p.last_error.to_s
	# end
	# ~~~
	fun stat: nullable FileStat
	do
		var stat = path.to_cstring.file_stat
		if stat.address_is_null then
			last_error = new IOError("Cannot open `{path}`: {sys.errno.strerror}")
			return null
		end
		last_error = null
		return new FileStat(stat)
	end

	# Information on the file or link at `self`
	#
	# Do not follow symbolic links.
	fun link_stat: nullable FileStat
	do
		var stat = path.to_cstring.file_lstat
		if stat.address_is_null then
			last_error = new IOError("Cannot open `{path}`: {sys.errno.strerror}")
			return null
		end
		last_error = null
		return new FileStat(stat)
	end

	# Delete a file from the file system.
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	fun delete
	do
		var res = path.to_cstring.file_delete
		if not res then
			last_error = new IOError("Cannot delete `{path}`: {sys.errno.strerror}")
		else
			last_error = null
		end
	end

	# Copy content of file at `path` to `dest`.
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	fun copy(dest: Path)
	do
		last_error = null
		var input = open_ro
		var output = dest.open_wo

		var buffer = new CString(4096)
		while not input.eof do
			var read = input.read_bytes_to_cstring(buffer, 4096)
			output.write_bytes_from_cstring(buffer, read)
		end

		input.close
		output.close
		last_error = input.last_error or else output.last_error
	end

	# Open this file for reading.
	#
	# ~~~
	# var file = "/etc/issue".to_path.open_ro
	# print file.read_line
	# file.close
	# ~~~
	#
	# Note that it is the user's responsibility to close the stream.
	# Therefore, for simple use case, look at `read_all` or `each_line`.
	#
	# ENSURE `last_error == result.last_error`
	fun open_ro: FileReader
	do
		var res = new FileReader.open(path)
		last_error = res.last_error
		return res
	end

	# Open this file for writing
	#
	# ~~~
	# var file = "bla.log".to_path.open_wo
	# file.write "Blabla\n"
	# file.close
	# ~~~
	#
	# Note that it is the user's responsibility to close the stream.
	# Therefore, for simple use case, look at `Writable::write_to_file`.
	#
	# ENSURE `last_error == result.last_error`
	fun open_wo: FileWriter
	do
		var res = new FileWriter.open(path)
		last_error = res.last_error
		return res
	end

	# Read all the content of the file as a string.
	#
	# ~~~
	# var content = "/etc/issue".to_path.read_all
	# print content
	# ~~~
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	# In case of error, the result might be empty or truncated.
	#
	# See `Reader::read_all` for details.
	fun read_all: String do return read_all_bytes.to_s

	# Read all the content on the file as a raw sequence of bytes.
	#
	# ~~~
	# var content = "/etc/issue".to_path.read_all_bytes
	# print content.to_s
	# ~~~
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	# In case of error, the result might be empty or truncated.
	fun read_all_bytes: Bytes
	do
		var s = open_ro
		var res = s.read_all_bytes
		s.close
		last_error = s.last_error
		return res
	end

	# Read all the lines of the file
	#
	# ~~~
	# var lines = "/etc/passwd".to_path.read_lines
	#
	# print "{lines.length} users"
	#
	# for l in lines do
	#     var fields = l.split(":")
	#     print "name={fields[0]} uid={fields[2]}"
	# end
	# ~~~
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	# In case of error, the result might be empty or truncated.
	#
	# See `Reader::read_lines` for details.
	fun read_lines: Array[String]
	do
		var s = open_ro
		var res = s.read_lines
		s.close
		last_error = s.last_error
		return res
	end

	# Return an iterator on each line of the file
	#
	# ~~~
	# for l in "/etc/passwd".to_path.each_line do
	#     var fields = l.split(":")
	#     print "name={fields[0]} uid={fields[2]}"
	# end
	# ~~~
	#
	# Note: the stream is automatically closed at the end of the file (see `LineIterator::close_on_finish`)
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	#
	# See `Reader::each_line` for details.
	fun each_line: LineIterator
	do
		var s = open_ro
		var res = s.each_line
		res.close_on_finish = true
		last_error = s.last_error
		return res
	end

	# Correctly join `self` with `subpath` using the directory separator.
	#
	# Using a standard "{self}/{path}" does not work in the following cases:
	#
	# * `self` is empty.
	# * `path` starts with `'/'`.
	#
	# This method ensures that the join is valid.
	#
	#     var hello = "hello".to_path
	#     assert (hello/"world").to_s   == "hello/world"
	#     assert ("hel/lo".to_path / "wor/ld").to_s == "hel/lo/wor/ld"
	#     assert ("".to_path / "world").to_s == "world"
	#     assert (hello / "/world").to_s  == "/world"
	#     assert ("hello/".to_path / "world").to_s  == "hello/world"
	fun /(subpath: String): Path do return new Path(path / subpath)

	# Lists the files contained within the directory at `path`.
	#
	#     var files = "/etc".to_path.files
	#     assert files.has("/etc/issue".to_path)
	#
	# `last_error` is updated to contains the error information on error, and null on success.
	# In case of error, the result might be empty or truncated.
	#
	#     var path = "/etc/issue".to_path
	#     files = path.files
	#     assert files.is_empty
	#     assert path.last_error != null
	fun files: Array[Path]
	do
		last_error = null
		var res = new Array[Path]
		var d = new NativeDir.opendir(path.to_cstring)
		if d.address_is_null then
			last_error = new IOError("Cannot list directory `{path}`: {sys.errno.strerror}")
			return res
		end

		loop
			var de = d.readdir
			if de.address_is_null then
				# readdir cannot fail, so null means end of list
				break
			end
			var name = de.to_s
			if name == "." or name == ".." then continue
			res.add self / name
		end
		d.closedir

		return res
	end

	# Is `self` the path to an existing directory ?
	#
	# ~~~nit
	# assert ".".to_path.is_dir
	# assert not "/etc/issue".to_path.is_dir
	# assert not "/should/not/exist".to_path.is_dir
	# ~~~
	fun is_dir: Bool do
		var st = stat
		if st == null then return false
		return st.is_dir
	end

	# Recursively delete a directory and all of its content
	#
	# Does not go through symbolic links and may get stuck in a cycle if there
	# is a cycle in the file system.
	#
	# `last_error` is updated with the first encountered error, or null on success.
	# The method does not stop on the first error and tries to remove the most files and directories.
	#
	# ~~~
	# var path = "/does/not/exists/".to_path
	# path.rmdir
	# assert path.last_error != null
	#
	# path = "/tmp/path/to/create".to_path
	# path.to_s.mkdir
	# assert path.exists
	# path.rmdir
	# assert path.last_error == null
	# ~~~
	fun rmdir
	do
		var first_error = null
		for file in self.files do
			var stat = file.link_stat
			if stat == null then
				if first_error == null then first_error = file.last_error
				continue
			end
			if stat.is_dir then
				# Recursively rmdir
				file.rmdir
			else
				file.delete
			end
			if first_error == null then first_error = file.last_error
		end

		# Delete the directory itself if things are fine
		if first_error == null then
			if not path.to_cstring.rmdir then
				first_error = new IOError("Cannot remove `{self}`: {sys.errno.strerror}")
			end
		end
		self.last_error = first_error
	end

	redef fun ==(other) do return other isa Path and simplified.path == other.simplified.path
	redef fun hash do return simplified.path.hash
end

# Information on a file
#
# Created by `Path::stat` and `Path::link_stat`.
#
# The information within this class is gathered when the instance is initialized
# it will not be updated if the targeted file is modified.
class FileStat
	super Finalizable

	# TODO private init

	# The low-level status of a file
	#
	# See: POSIX stat(2)
	private var stat: NativeFileStat

	private var finalized = false

	redef fun finalize
	do
		if not finalized then
			stat.free
			finalized = true
		end
	end

	# Returns the last access time in seconds since Epoch
	fun last_access_time: Int
	do
		assert not finalized
		return stat.atime
	end

	# Returns the last access time
	#
	# alias for `last_access_time`
	fun atime: Int do return last_access_time

	# Returns the last modification time in seconds since Epoch
	fun last_modification_time: Int
	do
		assert not finalized
		return stat.mtime
	end

	# Returns the last modification time
	#
	# alias for `last_modification_time`
	fun mtime: Int do return last_modification_time


	# Size of the file at `path`
	fun size: Int
	do
		assert not finalized
		return stat.size
	end

	# Is self a regular file and not a device file, pipe, socket, etc.?
	fun is_file: Bool
	do
		assert not finalized
		return stat.is_reg
	end

	# Alias for `is_file`
	fun is_reg: Bool do return is_file

	# Is this a directory?
	fun is_dir: Bool
	do
		assert not finalized
		return stat.is_dir
	end

	# Is this a symbolic link?
	fun is_link: Bool
	do
		assert not finalized
		return stat.is_lnk
	end

	# FIXME Make the following POSIX only? or implement in some other way on Windows

	# Returns the last status change time in seconds since Epoch
	fun last_status_change_time: Int
	do
		assert not finalized
		return stat.ctime
	end

	# Returns the last status change time
	#
	# alias for `last_status_change_time`
	fun ctime: Int do return last_status_change_time

	# Returns the permission bits of file
	fun mode: Int
	do
		assert not finalized
		return stat.mode
	end

	# Is this a character device?
	fun is_chr: Bool
	do
		assert not finalized
		return stat.is_chr
	end

	# Is this a block device?
	fun is_blk: Bool
	do
		assert not finalized
		return stat.is_blk
	end

	# Is this a FIFO pipe?
	fun is_fifo: Bool
	do
		assert not finalized
		return stat.is_fifo
	end

	# Is this a UNIX socket
	fun is_sock: Bool
	do
		assert not finalized
		return stat.is_sock
	end
end

redef class Text
	# Access file system related services on the path at `self`
	fun to_path: Path do return new Path(to_s)

	private fun write_native_to(s: FileWriter)
	do
		for i in substrings do s.write_native(i.to_cstring, 0, i.byte_length)
	end

	# return true if a file with this names exists
	fun file_exists: Bool do return to_cstring.file_exists

	# The status of a file. see POSIX stat(2).
	fun file_stat: nullable FileStat
	do
		var stat = to_cstring.file_stat
		if stat.address_is_null then return null
		return new FileStat(stat)
	end

	# The status of a file or of a symlink. see POSIX lstat(2).
	fun file_lstat: nullable FileStat
	do
		var stat = to_cstring.file_lstat
		if stat.address_is_null then return null
		return new FileStat(stat)
	end

	# Remove a file, return true if success
	fun file_delete: Bool do return to_cstring.file_delete

	# Copy content of file at `self` to `dest`
	fun file_copy_to(dest: String) do to_path.copy(dest.to_path)

	# Remove the trailing `extension`.
	#
	# `extension` usually starts with a dot but could be anything.
	#
	#     assert "file.txt".strip_extension(".txt")   == "file"
	#     assert "file.txt".strip_extension("le.txt") == "fi"
	#     assert "file.txt".strip_extension("xt")     == "file.t"
	#
	# If `extension == null`, the rightmost extension is stripped, including the last dot.
	#
	#     assert "file.txt".strip_extension           == "file"
	#
	# If `extension` is not present, `self` is returned unmodified.
	#
	#     assert "file.txt".strip_extension(".tar.gz")  == "file.txt"
	fun strip_extension(extension: nullable String): String
	do
		if extension == null then
			extension = file_extension
			if extension == null then
				return self.to_s
			else extension = ".{extension}"
		end

		if has_suffix(extension) then
			return substring(0, length - extension.length).to_s
		end
		return self.to_s
	end

	# Extract the basename of a path and strip the `extension`
	#
	# The extension is stripped only if `extension != null`.
	#
	#     assert "/path/to/a_file.ext".basename(".ext")     == "a_file"
	#     assert "path/to/a_file.ext".basename(".ext")      == "a_file"
	#     assert "path/to/a_file.ext".basename              == "a_file.ext"
	#     assert "path/to".basename(".ext")                 == "to"
	#     assert "path/to/".basename(".ext")                == "to"
	#     assert "path/to".basename                         == "to"
	#     assert "path".basename                            == "path"
	#     assert "/path".basename                           == "path"
	#     assert "/".basename                               == "/"
	#     assert "".basename                                == ""
	#
	# On Windows, '\' are replaced by '/':
	#
	# ~~~nitish
	# assert "C:\\path\\to\\a_file.ext".basename(".ext")    == "a_file"
	# assert "C:\\".basename                                == "C:"
	# ~~~
	fun basename(extension: nullable String): String
	do
		var n = self
		if is_windows then n = n.replace("\\", "/")

		var l = length - 1 # Index of the last char
		while l > 0 and self.chars[l] == '/' do l -= 1 # remove all trailing `/`
		if l == 0 then return "/"
		var pos = chars.last_index_of_from('/', l)
		if pos >= 0 then
			n = substring(pos+1, l-pos)
		end

		if extension != null then
			return n.strip_extension(extension)
		else return n.to_s
	end

	# Extract the dirname of a path
	#
	#     assert "/path/to/a_file.ext".dirname         == "/path/to"
	#     assert "path/to/a_file.ext".dirname          == "path/to"
	#     assert "path/to".dirname                     == "path"
	#     assert "path/to/".dirname                    == "path"
	#     assert "path".dirname                        == "."
	#     assert "/path".dirname                       == "/"
	#     assert "/".dirname                           == "/"
	#     assert "".dirname                            == "."
	#
	# On Windows, '\' are replaced by '/':
	#
	# ~~~nitish
	# assert "C:\\path\\to\\a_file.ext".dirname        == "C:/path/to"
	# assert "C:\\file".dirname                        == "C:"
	# ~~~
	fun dirname: String
	do
		var s = self
		if is_windows then s = s.replace("\\", "/")

		var l = length - 1 # Index of the last char
		while l > 0 and s.chars[l] == '/' do l -= 1 # remove all trailing `/`
		var pos = s.chars.last_index_of_from('/', l)
		if pos > 0 then
			return s.substring(0, pos).to_s
		else if pos == 0 then
			return "/"
		else
			return "."
		end
	end

	# Return the canonicalized absolute pathname (see POSIX function `realpath`)
	#
	# Require: `file_exists`
	fun realpath: String do
		var cs = to_cstring.file_realpath
		assert file_exists
		var res = cs.to_s
		cs.free
		return res
	end

	# Simplify a file path by remove useless `.`, removing `//`, and resolving `..`
	#
	# * `..` are not resolved if they start the path
	# * starting `.` is simplified unless the path is empty
	# * starting `/` is not removed
	# * trailing `/` is removed
	#
	# Note that the method only work on the string:
	#
	#  * no I/O access is performed
	#  * the validity of the path is not checked
	#
	# ~~~
	# assert "some/./complex/../../path/from/../to/a////file//".simplify_path	     ==  "path/to/a/file"
	# assert "../dir/file".simplify_path       ==  "../dir/file"
	# assert "dir/../../".simplify_path        ==  ".."
	# assert "dir/..".simplify_path            ==  "."
	# assert "//absolute//path/".simplify_path ==  "/absolute/path"
	# assert "//absolute//../".simplify_path   ==  "/"
	# assert "/".simplify_path                 == "/"
	# assert "../".simplify_path               == ".."
	# assert "./".simplify_path                == "."
	# assert "././././././".simplify_path      == "."
	# assert "./../dir".simplify_path		   == "../dir"
	# assert "./dir".simplify_path			   == "dir"
	# ~~~
	#
	# On Windows, '\' are replaced by '/':
	#
	# ~~~nitish
	# assert "C:\\some\\.\\complex\\../../path/to/a_file.ext".simplify_path == "C:/path/to/a_file.ext"
	# assert "C:\\".simplify_path              == "C:"
	# ~~~
	fun simplify_path: String
	do
		var s = self
		if is_windows then s = s.replace("\\", "/")
		var a = s.split_with("/")
		var a2 = new Array[String]
		for x in a do
			if x == "." and not a2.is_empty then continue # skip `././`
			if x == "" and not a2.is_empty then continue # skip `//`
			if x == ".." and not a2.is_empty and a2.last != ".." then
				if a2.last == "." then # do not skip `./../`
					a2.pop # reduce `./../` in `../`
				else # reduce `dir/../` in `/`
					a2.pop
					continue
				end
			else if not a2.is_empty and a2.last == "." then
				a2.pop # reduce `./dir` in `dir`
			end
			a2.push(x)
		end
		if a2.is_empty then return "."
		if a2.length == 1 and a2.first == "" then return "/"
		return a2.join("/")
	end

	# Correctly join two path using the directory separator.
	#
	# Using a standard "{self}/{path}" does not work in the following cases:
	#
	# * `self` is empty.
	# * `path` starts with `'/'`.
	#
	# This method ensures that the join is valid.
	#
	#     assert "hello".join_path("world")   == "hello/world"
	#     assert "hel/lo".join_path("wor/ld") == "hel/lo/wor/ld"
	#     assert "".join_path("world")        == "world"
	#     assert "hello".join_path("/world")  == "/world"
	#     assert "hello/".join_path("world")  == "hello/world"
	#     assert "hello/".join_path("/world") == "/world"
	#
	# Note: You may want to use `simplify_path` on the result.
	#
	# Note: This method works only with POSIX paths.
	fun join_path(path: Text): String
	do
		if path.is_empty then return self.to_s
		if self.is_empty then return path.to_s
		if path.chars[0] == '/' then return path.to_s
		if self.last == '/' then return "{self}{path}"
		return "{self}/{path}"
	end

	# Convert the path (`self`) to a program name.
	#
	# Ensure the path (`self`) will be treated as-is by POSIX shells when it is
	# used as a program name. In order to do that, prepend `./` if needed.
	#
	#     assert "foo".to_program_name == "./foo"
	#     assert "/foo".to_program_name == "/foo"
	#     assert "".to_program_name == "./" # At least, your shell will detect the error.
	fun to_program_name: String do
		if self.has_prefix("/") then
			return self.to_s
		else
			return "./{self}"
		end
	end

	# Alias for `join_path`
	#
	#     assert "hello" / "world"      ==  "hello/world"
	#     assert "hel/lo" / "wor/ld"    ==  "hel/lo/wor/ld"
	#     assert "" / "world"           ==  "world"
	#     assert "/hello" / "/world"    ==  "/world"
	#
	# This operator is quite useful for chaining changes of path.
	# The next one being relative to the previous one.
	#
	#     var a = "foo"
	#     var b = "/bar"
	#     var c = "baz/foobar"
	#     assert a/b/c == "/bar/baz/foobar"
	fun /(path: Text): String do return join_path(path)

	# Returns the relative path needed to go from `self` to `dest`.
	#
	#     assert "/foo/bar".relpath("/foo/baz") == "../baz"
	#     assert "/foo/bar".relpath("/baz/bar") == "../../baz/bar"
	#
	# If `self` or `dest` is relative, they are considered relatively to `getcwd`.
	#
	# In some cases, the result is still independent of the current directory:
	#
	#     assert "foo/bar".relpath("..") == "../../.."
	#
	# In other cases, parts of the current directory may be exhibited:
	#
	#     var p = "../foo/bar".relpath("baz")
	#     var c = getcwd.basename
	#     assert p == "../../{c}/baz"
	#
	# For path resolution independent of the current directory (eg. for paths in URL),
	# or to use an other starting directory than the current directory,
	# just force absolute paths:
	#
	#     var start = "/a/b/c/d"
	#     var p2 = (start/"../foo/bar").relpath(start/"baz")
	#     assert p2 == "../../d/baz"
	#
	#
	# Neither `self` or `dest` has to be real paths or to exist in directories since
	# the resolution is only done with string manipulations and without any access to
	# the underlying file system.
	#
	# If `self` and `dest` are the same directory, the empty string is returned:
	#
	#     assert "foo".relpath("foo") == ""
	#     assert "foo/../bar".relpath("bar") == ""
	#
	# The empty string and "." designate both the current directory:
	#
	#     assert "".relpath("foo/bar")  == "foo/bar"
	#     assert ".".relpath("foo/bar") == "foo/bar"
	#     assert "foo/bar".relpath("")  == "../.."
	#     assert "/" + "/".relpath(".") == getcwd
	fun relpath(dest: String): String
	do
		# TODO windows support
		var cwd = getcwd
		var from = (cwd/self).simplify_path.split("/")
		if from.last.is_empty then from.pop # case for the root directory
		var to = (cwd/dest).simplify_path.split("/")
		if to.last.is_empty then to.pop # case for the root directory

		# Remove common prefixes
		while not from.is_empty and not to.is_empty and from.first == to.first do
			from.shift
			to.shift
		end

		# Result is going up in `from` with ".." then going down following `to`
		var from_len = from.length
		if from_len == 0 then return to.join("/")
		var up = "../"*(from_len-1) + ".."
		if to.is_empty then return up
		var res = up + "/" + to.join("/")
		return res
	end

	# Create a directory (and all intermediate directories if needed)
	#
	# The optional `mode` parameter specifies the permissions of the directory,
	# the default value is `0o777`.
	#
	# Return an error object in case of error.
	#
	#    assert "/etc/".mkdir != null
	fun mkdir(mode: nullable Int): nullable Error
	do
		mode = mode or else 0o777
		var s = self
		if is_windows then s = s.replace("\\", "/")

		var dirs = s.split_with("/")
		var path = new FlatBuffer
		if dirs.is_empty then return null
		if dirs[0].is_empty then
			# it was a starting /
			path.add('/')
		end
		var error: nullable Error = null
		for i in [0 .. dirs.length - 1[ do
			var d = dirs[i]
			if d.is_empty then continue
			path.append(d)
			path.add('/')
			if path.file_exists then continue
			var res = path.to_cstring.file_mkdir(mode)
			if not res and error == null then
				error = new IOError("Cannot create directory `{path}`: {sys.errno.strerror}")
			end
		end
		var res = s.to_cstring.file_mkdir(mode)
		if not res and error == null then
			error = new IOError("Cannot create directory `{path}`: {sys.errno.strerror}")
		end
		return error
	end

	# Delete a directory and all of its content, return `true` on success
	#
	# Does not go through symbolic links and may get stuck in a cycle if there
	# is a cycle in the filesystem.
	#
	# Return an error object in case of error.
	#
	#     assert "/fail/does not/exist".rmdir != null
	fun rmdir: nullable Error
	do
		var p = to_path
		p.rmdir
		return p.last_error
	end

	# Change the current working directory
	#
	#     "/etc".chdir
	#     assert getcwd == "/etc"
	#     "..".chdir
	#     assert getcwd == "/"
	#
	# Return an error object in case of error.
	#
	#     assert "/etc".chdir == null
	#     assert "/fail/does no/exist".chdir != null
	#     assert getcwd == "/etc" # unchanger
	fun chdir: nullable Error
	do
		var res = to_cstring.file_chdir
		if res then return null
		var error = new IOError("Cannot change directory to `{self}`: {sys.errno.strerror}")
		return error
	end

	# Return right-most extension (without the dot)
	#
	# Only the last extension is returned.
	# There is no special case for combined extensions.
	#
	#     assert "file.txt".file_extension      == "txt"
	#     assert "file.tar.gz".file_extension   == "gz"
	#
	# For file without extension, `null` is returned.
	# Hoever, for trailing dot, `""` is returned.
	#
	#     assert "file".file_extension          == null
	#     assert "file.".file_extension         == ""
	#
	# The starting dot of hidden files is never considered.
	#
	#     assert ".file.txt".file_extension     == "txt"
	#     assert ".file".file_extension         == null
	fun file_extension: nullable String
	do
		var last_slash = chars.last_index_of('.')
		if last_slash > 0 then
			return substring( last_slash+1, length ).to_s
		else
			return null
		end
	end

	# Returns entries contained within the directory represented by self.
	#
	#     var files = "/etc".files
	#     assert files.has("issue")
	#
	# Returns an empty array in case of error
	#
	#     files = "/etc/issue".files
	#     assert files.is_empty
	#
	# TODO find a better way to handle errors and to give them back to the user.
	fun files: Array[String]
	do
		var res = new Array[String]
		var d = new NativeDir.opendir(to_cstring)
		if d.address_is_null then return res

		loop
			var de = d.readdir
			if de.address_is_null then break
			var name = de.to_s
			if name == "." or name == ".." then continue
			res.add name
		end
		d.closedir

		return res
	end
end

redef class FlatString
	redef fun write_native_to(s)
	do
		s.write_native(items, first_byte, byte_length)
	end

	redef fun file_extension do
		var its = _items
		var p = last_byte
		var c = its[p]
		var st = _first_byte
		while p >= st and c != u'.' do
			p -= 1
			c = its[p]
		end
		if p <= st then return null
		var ls = last_byte
		return new FlatString.with_infos(its, ls - p, p + 1)
	end

	redef fun basename(extension) do
		var s = self
		if is_windows then s = s.replace("\\", "/").as(FlatString)

		var bname
		var l = s.last_byte
		var its = s._items
		var min = s._first_byte
		var sl = u'/'
		while l > min and its[l] == sl do l -= 1
		if l == min then return "/"
		var ns = l
		while ns >= min and its[ns] != sl do ns -= 1
		bname = new FlatString.with_infos(its, l - ns, ns + 1)

		return if extension != null then bname.strip_extension(extension) else bname
	end
end

redef class CString
	private fun file_exists: Bool `{
#ifdef _WIN32
		DWORD attribs = GetFileAttributesA(self);
		return attribs != INVALID_FILE_ATTRIBUTES;
#else
		FILE *hdl = fopen(self,"r");
		if(hdl != NULL){
			fclose(hdl);
		}
		return hdl != NULL;
#endif
	`}

	private fun file_stat: NativeFileStat `{
		struct stat buff;
		if(stat(self, &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	`}

	private fun file_lstat: NativeFileStat `{
#ifdef _WIN32
		// FIXME use a higher level abstraction to support WIN32
		return NULL;
#else
		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(self, stat_element);
		if (res == -1) return NULL;
		return stat_element;
#endif
	`}

	private fun file_mkdir(mode: Int): Bool `{
#ifdef _WIN32
		return !mkdir(self);
#else
		return !mkdir(self, mode);
#endif
	`}

	private fun rmdir: Bool `{ return !rmdir(self); `}

	private fun file_delete: Bool `{
		return remove(self) == 0;
	`}

	private fun file_chdir: Bool `{ return !chdir(self); `}

	private fun file_realpath: CString `{
#ifdef _WIN32
		DWORD len = GetFullPathName(self, 0, NULL, NULL);
		char *buf = malloc(len+1); // FIXME don't leak memory
		len = GetFullPathName(self, len+1, buf, NULL);
		return buf;
#else
		return realpath(self, NULL);
#endif
	`}
end

# This class is system dependent ... must reify the vfs
private extern class NativeFileStat `{ struct stat * `}

	# Returns the permission bits of file
	fun mode: Int `{ return self->st_mode; `}

	# Returns the last access time
	fun atime: Int `{ return self->st_atime; `}

	# Returns the last status change time
	fun ctime: Int `{ return self->st_ctime; `}

	# Returns the last modification time
	fun mtime: Int `{ return self->st_mtime; `}

	# Returns the size
	fun size: Int `{ return self->st_size; `}

	# Returns true if it is a regular file (not a device file, pipe, sockect, ...)
	fun is_reg: Bool `{ return S_ISREG(self->st_mode); `}

	# Returns true if it is a directory
	fun is_dir: Bool `{ return S_ISDIR(self->st_mode); `}

	# Returns true if it is a character device
	fun is_chr: Bool `{ return S_ISCHR(self->st_mode); `}

	# Returns true if it is a block device
	fun is_blk: Bool `{ return S_ISBLK(self->st_mode); `}

	# Returns true if the type is fifo
	fun is_fifo: Bool `{ return S_ISFIFO(self->st_mode); `}

	# Returns true if the type is a link
	fun is_lnk: Bool `{
#ifdef _WIN32
	return 0;
#else
	return S_ISLNK(self->st_mode);
#endif
	`}

	# Returns true if the type is a socket
	fun is_sock: Bool `{
#ifdef _WIN32
	return 0;
#else
	return S_ISSOCK(self->st_mode);
#endif
	`}
end

# Instance of this class are standard FILE * pointers
private extern class NativeFile `{ FILE* `}
	fun io_read(buf: CString, len: Int): Int `{
		return fread(buf, 1, len, self);
	`}

	fun io_write(buf: CString, from, len: Int): Int `{
		size_t res = fwrite(buf+from, 1, len, self);
#ifdef _WIN32
		// Force flushing buffer because end of line does not trigger a flush
		fflush(self);
#endif
		return (long)res;
	`}

	fun write_byte(value: Int): Int `{
		unsigned char b = (unsigned char)value;
		return fwrite(&b, 1, 1, self);
	`}

	fun io_close: Int `{ return fclose(self); `}

	fun file_stat: NativeFileStat `{
		struct stat buff;
		if(fstat(fileno(self), &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	`}

	fun ferror: Bool `{ return ferror(self); `}

	fun feof: Bool `{ return feof(self); `}

	fun fileno: Int `{ return fileno(self); `}

	# Flushes the buffer, forcing the write operation
	fun flush: Int `{ return fflush(self); `}

	# Used to specify how the buffering will be handled for the current stream.
	fun set_buffering_type(buf_length, mode: Int): Int `{
		return setvbuf(self, NULL, (int)mode, buf_length);
	`}

	new io_open_read(path: CString) `{ return fopen(path, "r"); `}

	new io_open_write(path: CString) `{ return fopen(path, "w"); `}

	new native_stdin `{ return stdin; `}

	new native_stdout `{ return stdout; `}

	new native_stderr `{ return stderr; `}
end

# Standard `DIR*` pointer
private extern class NativeDir `{ DIR* `}

	# Open a directory
	new opendir(path: CString) `{ return opendir(path); `}

	# Close a directory
	fun closedir `{ closedir(self); `}

	# Read the next directory entry
	fun readdir: CString `{
		struct dirent *de;
		de = readdir(self);
		if (!de) return NULL;
		return de->d_name;
	`}
end

redef class Sys

	# Standard input
	var stdin: PollableReader = new Stdin is protected writable, lazy

	# Standard output
	var stdout: Writer = new Stdout is protected writable, lazy

	# Standard output for errors
	var stderr: Writer = new Stderr is protected writable, lazy

	# Enumeration for buffer mode full (flushes when buffer is full)
	fun buffer_mode_full: Int `{ return _IOFBF; `}

	# Enumeration for buffer mode line (flushes when a `\n` is encountered)
	fun buffer_mode_line: Int `{ return _IONBF; `}

	# Enumeration for buffer mode none (flushes ASAP when something is written)
	fun buffer_mode_none: Int `{ return _IOLBF; `}

	# returns first available stream to read or write to
	# return null on interruption (possibly a signal)
	protected fun poll( streams : Sequence[FileStream] ) : nullable FileStream
	do
		var in_fds = new Array[Int]
		var out_fds = new Array[Int]
		var fd_to_stream = new HashMap[Int,FileStream]
		for s in streams do
			var fd = s.fd
			if s isa FileReader then in_fds.add( fd )
			if s isa FileWriter then out_fds.add( fd )

			fd_to_stream[fd] = s
		end

		var polled_fd = intern_poll( in_fds, out_fds )

		if polled_fd == null then
			return null
		else
			return fd_to_stream[polled_fd]
		end
	end

	private fun intern_poll(in_fds: Array[Int], out_fds: Array[Int]): nullable Int
	import Array[Int].length, Array[Int].[], Int.as(nullable Int) `{
#ifndef _WIN32
		// FIXME use a higher level abstraction to support WIN32

		int in_len, out_len, total_len;
		struct pollfd *c_fds;
		int i;
		int first_polled_fd = -1;
		int result;

		in_len = (int)Array_of_Int_length( in_fds );
		out_len = (int)Array_of_Int_length( out_fds );
		total_len = in_len + out_len;
		c_fds = malloc( sizeof(struct pollfd) * total_len );

		/* input streams */
		for ( i=0; i<in_len; i ++ ) {
			int fd = (int)Array_of_Int__index( in_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLIN;
		}

		/* output streams */
		for ( i=0; i<out_len; i ++ ) {
			int fd = (int)Array_of_Int__index( out_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLOUT;
		}

		/* poll all fds, unlimited timeout */
		result = poll( c_fds, total_len, -1 );

		if ( result > 0 ) {
			/* analyse results */
			for ( i=0; i<total_len; i++ )
				if ( c_fds[i].revents & c_fds[i].events || /* awaited event */
					 c_fds[i].revents & POLLHUP ) /* closed */
				{
					first_polled_fd = c_fds[i].fd;
					break;
				}

			return Int_as_nullable( first_polled_fd );
		}
		else if ( result < 0 )
			fprintf( stderr, "Error in Stream:poll: %s\n", strerror( errno ) );
#endif

		return null_Int();
	`}

end

# Print `objects` on the standard output (`stdout`).
fun printn(objects: Object...)
do
	sys.stdout.write(objects.plain_to_s)
end

# Print an `object` on the standard output (`stdout`) and add a newline.
fun print(object: Object)
do
	sys.stdout.write(object.to_s)
	sys.stdout.write("\n")
end

# Print `object` on the error output (`stderr` or a log system)
fun print_error(object: Object)
do
	sys.stderr.write object.to_s
	sys.stderr.write "\n"
end

# Read a character from the standard input (`stdin`).
fun getc: Char
do
	var c = sys.stdin.read_char
	if c == null then return '\1'
	return c
end

# Read a line from the standard input (`stdin`).
fun gets: String
do
	return sys.stdin.read_line
end

# Return the working (current) directory
fun getcwd: String do return native_getcwd.to_s

private fun native_getcwd: CString `{ return getcwd(NULL, 0); `}
