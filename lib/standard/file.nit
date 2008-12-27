# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module handle file input and output
package file

intrude import stream
intrude import string
import string_search

redef class Object
# Simple I/O

	# Print `objects' on the standard output (`stdout').
	protected meth printn(objects: Object...)
	do
		stdout.write(objects.to_s)
	end

	# Print an `object' on the standard output (`stdout') and add a newline.
	protected meth print(object: Object)
	do
		if object != null then
			stdout.write(object.to_s)
		end
		stdout.write("\n")
	end

	# Read a character from the standard input (`stdin').
	protected meth getc: Char
	do
		return stdin.read_char.ascii
	end

	# Read a line from the standard input (`stdin').
	protected meth gets: String
	do
		return stdin.read_line
	end
end

# File Abstract Stream
class FStream
special IOS
special NativeFileCapable
	
	# The path of the file.
	readable attr _path: String = null

	# The FILE *.
	attr _file: NativeFile = null

	meth file_stat: FileStat
	do return _file.file_stat end
end

# File input stream
class IFStream
special FStream
special BufferedIStream
	# Misc

	meth reopen
	do
		if not eof then close
		_file = io_open_read(_path.to_cstring)
		_end_reached = false
		_buffer_pos = 0
		_buffer.clear
	end

	redef meth close
	do
		var i = _file.io_close
		_end_reached = true
	end

	# Fill the internal read buffer. Needed by read operations.
	redef meth fill_buffer
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
	redef readable attr _end_reached: Bool = false

	# Open the file at `path' for reading.
	init open(path: String)
	do
		_path = path
		prepare_buffer(10)
		_file = io_open_read(_path.to_cstring)
		assert cant_open_file: _file != null
	end

	private init do end
	private init without_file do end
end

# File output stream
class OFStream
special FStream
special OStream
	
	# Write a string.
	redef meth write(s)
	do
		assert _writable
		write_native(s.to_cstring, s.length)
	end

	redef meth is_writable do return _writable
	
	redef meth close
	do
		var i = _file.io_close
		_writable = false
	end

	# Is the file open in write mode
	attr _writable: Bool
	
	# Write `len' bytes from `native'.
	private meth write_native(native: NativeString, len: Int)
	do
		assert _writable
		var err = _file.io_write(native, len)
		if err != len then
			# Big problem
			printn("Problem in writing : ", err, " ", len, "\n")
		end
	end
	
	# Open the file at `path' for writing.
	init open(path: String)
	do
		_file = io_open_write(path.to_cstring)
		assert cant_open_file: _file != null
		_path = path
		_writable = true
	end
	
	private init do end
	private init without_file do end
end

###############################################################################

class Stdin
special IFStream
	private init do
		_file = native_stdin
		_path = "/dev/stdin"
		prepare_buffer(1)
	end
end

class Stdout
special OFStream
	private init do
		_file = native_stdout
		_path = "/dev/stdout"
		_writable = true
	end
end

class Stderr
special OFStream
	private init do
		_file = native_stderr
		_path = "/dev/stderr"
		_writable = true
	end
end

###############################################################################

redef class String
	# return true if a file with this names exists
	meth file_exists: Bool do return to_cstring.file_exists

	meth file_stat: FileStat do return to_cstring.file_stat

	meth strip_extension(ext: String): String
	do
		if has_suffix(ext) then
			return substring(0, length - ext.length)
		end
		return self
	end

	meth basename(ext: String): String
	do
		var pos = last_index_of_from('/', _length - 1)
		var n = self
		if pos >= 0 then
			n = substring_from(pos+1)
		end
		return n.strip_extension(ext)
	end

	meth dirname: String
	do
		var pos = last_index_of_from('/', _length - 1)
		if pos >= 0 then
			return substring(0, pos)
		else
			return "."
		end
	end

	meth file_path: String
	do
		var l = _length
		var pos = last_index_of_from('/', l - 1)
		if pos >= 0 then
			return substring(0, pos)
		end
		return "."
	end

	# Create a directory (and all intermediate directories if needed)
	meth mkdir
	do
		var dirs = self.split_with("/")
		var path = new String
		if dirs.is_empty then return
		if dirs[0].is_empty then
			# it was a starting /
			path.add('/')
		end
		for d in dirs do
			if d.is_empty then continue
			path.append(d)
			path.add('/')
			path.to_cstring.file_mkdir
		end
	end
end

redef class NativeString
	private meth file_exists: Bool is extern "string_NativeString_NativeString_file_exists_0"
	private meth file_stat: FileStat is extern "string_NativeString_NativeString_file_stat_0"
	private meth file_mkdir: Bool is extern "string_NativeString_NativeString_file_mkdir_0"
end

universal FileStat
special Pointer
# This class is system dependent ... must reify the vfs
	meth mode: Int is extern "file_FileStat_FileStat_mode_0"
	meth atime: Int is extern "file_FileStat_FileStat_atime_0"
	meth ctime: Int is extern "file_FileStat_FileStat_ctime_0"
	meth mtime: Int is extern "file_FileStat_FileStat_mtime_0"
	meth size: Int is extern "file_FileStat_FileStat_size_0"
end

# Instance of this class are standard FILE * pointers
private universal NativeFile
special Pointer
	meth io_read(buf: NativeString, len: Int): Int is extern "file_NativeFile_NativeFile_io_read_2"
	meth io_write(buf: NativeString, len: Int): Int is extern "file_NativeFile_NativeFile_io_write_2"
	meth io_close: Int is extern "file_NativeFile_NativeFile_io_close_0"
	meth file_stat: FileStat is extern "file_NativeFile_NativeFile_file_stat_0"
end

private interface NativeFileCapable
	meth io_open_read(path: NativeString): NativeFile is extern "file_NativeFileCapable_NativeFileCapable_io_open_read_1"
	meth io_open_write(path: NativeString): NativeFile is extern "file_NativeFileCapable_NativeFileCapable_io_open_write_1"
	meth native_stdin: NativeFile is extern "file_NativeFileCapable_NativeFileCapable_native_stdin_0"
	meth native_stdout: NativeFile is extern "file_NativeFileCapable_NativeFileCapable_native_stdout_0"
	meth native_stderr: NativeFile is extern "file_NativeFileCapable_NativeFileCapable_native_stderr_0"
end

# Standard input.
meth stdin: IFStream do return once new Stdin

# Standard output.
meth stdout: OFStream do return once new Stdout

# Standard output for error.
meth stderr: OFStream do return once new Stderr
