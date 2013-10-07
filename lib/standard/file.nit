# This file is part of NIT ( http://www.nitlanguage.org ).
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
intrude import string
import string_search
import time

redef class Object
# Simple I/O

	# Print `objects` on the standard output (`stdout`).
	protected fun printn(objects: Object...)
	do
		stdout.write(objects.to_s)
	end

	# Print an `object` on the standard output (`stdout`) and add a newline.
	protected fun print(object: Object)
	do
		stdout.write(object.to_s)
		stdout.write("\n")
	end

	# Read a character from the standard input (`stdin`).
	protected fun getc: Char
	do
		return stdin.read_char.ascii
	end

	# Read a line from the standard input (`stdin`).
	protected fun gets: String
	do
		return stdin.read_line
	end

	# Return the working (current) directory
	protected fun getcwd: String do return file_getcwd.to_s
	private fun file_getcwd: NativeString is extern "string_NativeString_NativeString_file_getcwd_0"
end

# File Abstract Stream
abstract class FStream
	super IOS
	# The path of the file.
	readable var _path: nullable String = null

	# The FILE *.
	var _file: nullable NativeFile = null

	fun file_stat: FileStat
	do return _file.file_stat end
end

# File input stream
class IFStream
	super FStream
	super BufferedIStream
	# Misc

	# Open the same file again.
	# The original path is reused, therefore the reopened file can be a different file.
	fun reopen
	do
		if not eof then close
		_file = new NativeFile.io_open_read(_path.to_cstring)
		_end_reached = false
		_buffer_pos = 0
		_buffer.clear
	end

	redef fun close
	do
		var i = _file.io_close
		_end_reached = true
	end

	redef fun fill_buffer
	do
		var nb = _file.io_read(_buffer._items, _buffer._capacity)
		if nb <= 0 then
			_end_reached = true
			nb = 0
		end
		_buffer._length = nb
		_buffer_pos = 0
	end
	
	# End of file?
	redef readable var _end_reached: Bool = false

	# Open the file at `path` for reading.
	init open(path: String)
	do
		_path = path
		prepare_buffer(10)
		_file = new NativeFile.io_open_read(_path.to_cstring)
		assert cant_open_file: _file != null
	end

	private init do end
	private init without_file do end
end

# File output stream
class OFStream
	super FStream
	super OStream
	
	redef fun write(s)
	do
		assert _writable
		write_native(s.to_cstring, s.length)
	end

	redef fun is_writable do return _writable
	
	redef fun close
	do
		var i = _file.io_close
		_writable = false
	end

	# Is the file open in write mode
	var _writable: Bool
	
	# Write `len` bytes from `native`.
	private fun write_native(native: NativeString, len: Int)
	do
		assert _writable
		var err = _file.io_write(native, len)
		if err != len then
			# Big problem
			printn("Problem in writing : ", err, " ", len, "\n")
		end
	end
	
	# Open the file at `path` for writing.
	init open(path: String)
	do
		_file = new NativeFile.io_open_write(path.to_cstring)
		assert cant_open_file: _file != null
		_path = path
		_writable = true
	end
	
	private init do end
	private init without_file do end
end

###############################################################################

class Stdin
	super IFStream
	private init do
		_file = new NativeFile.native_stdin
		_path = "/dev/stdin"
		prepare_buffer(1)
	end

	# Is these something to read? (non blocking)
	# FIXME: should be generalized
	fun poll_in: Bool is extern "file_stdin_poll_in"
end

class Stdout
	super OFStream
	private init do
		_file = new NativeFile.native_stdout
		_path = "/dev/stdout"
		_writable = true
	end
end

class Stderr
	super OFStream
	private init do
		_file = new NativeFile.native_stderr
		_path = "/dev/stderr"
		_writable = true
	end
end

###############################################################################

redef class String
	# return true if a file with this names exists
	fun file_exists: Bool do return to_cstring.file_exists

	fun file_stat: FileStat do return to_cstring.file_stat
	fun file_lstat: FileStat do return to_cstring.file_lstat

	# Remove a file, return true if success
	fun file_delete: Bool do return to_cstring.file_delete

	# remove the trailing extension "ext"
	fun strip_extension(ext: String): String
	do
		if has_suffix(ext) then
			return substring(0, length - ext.length)
		end
		return self
	end

	# Extract the basename of a path and remove the extension
	fun basename(ext: String): String
	do
		var pos = last_index_of_from('/', _length - 1)
		var n = self
		if pos >= 0 then
			n = substring_from(pos+1)
		end
		return n.strip_extension(ext)
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
	fun dirname: String
	do
		var l = _length - 1 # Index of the last char
		if l > 0 and self.chars[l] == '/' then l -= 1 # remove trailing `/`
		var pos = last_index_of_from('/', l)
		if pos > 0 then
			return substring(0, pos)
		else if pos == 0 then
			return "/"
		else
			return "."
		end
	end

	# Simplify a file path by remove useless ".", removing "//", and resolving ".."
	# ".." are not resolved if they start the path
	# starting "/" is not removed
	# trainling "/" is removed
	#
	# Note that the method only wonrk on the string:
	#  * no I/O access is performed
	#  * the validity of the path is not checked
	#
	#     assert "some/./complex/../../path/from/../to/a////file//".simplify_path	     ==  "path/to/a/file"
	#     assert "../dir/file".simplify_path      ==  "../dir/file"
	#     assert "dir/../../".simplify_path      ==  ".."
	#     assert "//absolute//path/".simplify_path      ==  "/absolute/path"
	fun simplify_path: String
	do
		var a = self.split_with("/")
		var a2 = new Array[String]
		for x in a do
			if x == "." then continue
			if x == "" and not a2.is_empty then continue
			if x == ".." and not a2.is_empty and a2.last != ".." then
				a2.pop
				continue
			end
			a2.push(x)
		end
		return a2.join("/")
	end

	# Correctly join two path using the directory separator.
	#
	# Using a standard "{self}/{path}" does not work when `self` is the empty string.
	# This method ensure that the join is valid.
	#
	#     assert "hello".join_path("world")      ==  "hello/world"
	#     assert "hel/lo".join_path("wor/ld")      ==  "hel/lo/wor/ld"
	#     assert "".join_path("world")      ==  "world"
	#     assert "/hello".join_path("/world")      ==  "/world"
	#
	# Note: you may want to use `simplify_path` on the result
	#
	# Note: I you want to join a great number of path, you can write
	#
	#     [p1, p2, p3, p4].join("/")
	fun join_path(path: String): String
	do
		if path.is_empty then return self
		if self.is_empty then return path
		if path.chars[0] == '/' then return path
		return "{self}/{path}"
	end

	# Create a directory (and all intermediate directories if needed)
	fun mkdir
	do
		var dirs = self.split_with("/")
		var path = new Buffer
		if dirs.is_empty then return
		if dirs[0].is_empty then
			# it was a starting /
			path.add('/')
		end
		for d in dirs do
			if d.is_empty then continue
			path.append(d)
			path.add('/')
			path.to_s.to_cstring.file_mkdir
		end
	end

	# Change the current working directory
	#
	#     "/etc".chdir
	#     assert getcwd == "/etc"
	#     "..".chdir
	#     assert getcwd == "/"
	#
	# TODO: errno
	fun chdir do to_cstring.file_chdir

	# Return right-most extension (without the dot)
	fun file_extension : nullable String
	do
		var last_slash = last_index_of('.')
		if last_slash >= 0 then
			return substring( last_slash+1, length )
		else
			return null
		end
	end

	# returns files contained within the directory represented by self
	fun files : Set[ String ] is extern import HashSet, HashSet::add, NativeString::to_s, String::to_cstring, HashSet[String] as( Set[String] ), String as( Object )
end

redef class NativeString
	private fun file_exists: Bool is extern "string_NativeString_NativeString_file_exists_0"
	private fun file_stat: FileStat is extern "string_NativeString_NativeString_file_stat_0"
	private fun file_lstat: FileStat `{
		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(recv, stat_element);
		if (res == -1) return NULL;
		return stat_element;
	`}
	private fun file_mkdir: Bool is extern "string_NativeString_NativeString_file_mkdir_0"
	private fun file_delete: Bool is extern "string_NativeString_NativeString_file_delete_0"
	private fun file_chdir is extern "string_NativeString_NativeString_file_chdir_0"
end

extern FileStat `{ struct stat * `}
# This class is system dependent ... must reify the vfs
	fun mode: Int is extern "file_FileStat_FileStat_mode_0"
	fun atime: Int is extern "file_FileStat_FileStat_atime_0"
	fun ctime: Int is extern "file_FileStat_FileStat_ctime_0"
	fun mtime: Int is extern "file_FileStat_FileStat_mtime_0"
	fun size: Int is extern "file_FileStat_FileStat_size_0"

	fun is_reg: Bool `{ return S_ISREG(recv->st_mode); `}
	fun is_dir: Bool `{ return S_ISDIR(recv->st_mode); `}
	fun is_chr: Bool `{ return S_ISCHR(recv->st_mode); `}
	fun is_blk: Bool `{ return S_ISBLK(recv->st_mode); `}
	fun is_fifo: Bool `{ return S_ISFIFO(recv->st_mode); `}
	fun is_lnk: Bool `{ return S_ISLNK(recv->st_mode); `}
	fun is_sock: Bool `{ return S_ISSOCK(recv->st_mode); `}
end

# Instance of this class are standard FILE * pointers
private extern NativeFile
	fun io_read(buf: NativeString, len: Int): Int is extern "file_NativeFile_NativeFile_io_read_2"
	fun io_write(buf: NativeString, len: Int): Int is extern "file_NativeFile_NativeFile_io_write_2"
	fun io_close: Int is extern "file_NativeFile_NativeFile_io_close_0"
	fun file_stat: FileStat is extern "file_NativeFile_NativeFile_file_stat_0"

	new io_open_read(path: NativeString) is extern "file_NativeFileCapable_NativeFileCapable_io_open_read_1"
	new io_open_write(path: NativeString) is extern "file_NativeFileCapable_NativeFileCapable_io_open_write_1"
	new native_stdin is extern "file_NativeFileCapable_NativeFileCapable_native_stdin_0"
	new native_stdout is extern "file_NativeFileCapable_NativeFileCapable_native_stdout_0"
	new native_stderr is extern "file_NativeFileCapable_NativeFileCapable_native_stderr_0"
end

# Standard input.
fun stdin: Stdin do return once new Stdin

# Standard output.
fun stdout: OFStream do return once new Stdout

# Standard output for error.
fun stderr: OFStream do return once new Stderr
