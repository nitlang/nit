# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Encapsulates all primitive data types of nit
#
# Ensures that the use in the interpreter is independant of the
# underlying implementation and that the services are semantically correct.
module primitive_types

intrude import standard::file
intrude import standard::string

# Wrapper for `NativeFile`
class PrimitiveNativeFile

	var file: Stream

	init native_stdin do
		file = sys.stdin
	end

	init native_stdout do
		file = sys.stdout
	end

	init native_stderr do
		file = sys.stderr
	end

	init io_open_read(path: String) do
		file = new FileReader.open(path.to_s)
	end

	init io_open_write(path: String) do
		file = new FileWriter.open(path.to_s)
	end

	fun address_is_null: Bool do
		if file isa FileStream then return file.as(FileStream)._file.address_is_null
		return false
	end

	fun io_read(buf: NativeString, len: Int): Int do
		if file isa FileStream then return file.as(FileStream)._file.io_read(buf, len)
		var str = file.as(Reader).read(len)
		str.to_cstring.copy_to(buf, str.length, 0, 0)
		return str.length
	end

	fun io_write(buf: NativeString, len: Int): Int do
		if file isa FileStream then return file.as(FileStream)._file.io_write(buf, len)
		file.as(Writer).write(buf.to_s_with_length(len))
		return len
	end

	fun io_close: Int do
		if file isa FileStream then return file.as(FileStream)._file.io_close
		file.close
		return 0
	end

	fun fileno: Int do
		if file isa FileStream then return file.as(FileStream)._file.fileno
		return 0
	end

	fun flush: Int do
		if file isa FileStream then return file.as(FileStream)._file.flush
		return 0
	end

	fun set_buffering_type(size, mode: Int): Int do
		if file isa FileStream then return file.as(FileStream)._file.set_buffering_type(size, mode)
		return 0
	end
end
