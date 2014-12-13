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

# Wrapper for `NativeFile`
class PrimitiveNativeFile

	var file: FStream

	init native_stdin do
		file = new IFStream.from_fd(0)
	end

	init native_stdout do
		file = new OFStream.from_fd(1)
	end

	init native_stderr do
		file = new OFStream.from_fd(2)
	end

	init io_open_read(path: String) do
		file = new IFStream.open(path.to_s)
	end

	init io_open_write(path: String) do
		file = new OFStream.open(path.to_s)
	end

	fun address_is_null: Bool do return file._file.address_is_null

	fun io_read(buf: NativeString, len: Int): Int do return file._file.io_read(buf, len)

	fun io_write(buf: NativeString, len: Int): Int do return file._file.io_write(buf, len)

	fun io_close: Int do return file._file.io_close

	fun file_stat: FileStat do return file._file.file_stat

	fun fileno: Int do return file._file.fileno

	fun flush: Int do return file._file.flush

	fun set_buffering_type(size, mode: Int): Int do
		return file._file.set_buffering_type(size, mode)
	end
end
