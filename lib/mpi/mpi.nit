# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Implementation of the Message Passing Interface protocol by wrapping OpenMPI
#
# OpenMPI is used only at linking and for it's `mpi.h`. Other implementations
# could be used without much modification.
#
# Supports transfer of any valid `Serializable` instances as well as basic
# C arrays defined in module `c`. Using C arrays is encouraged when performance
# is critical.
#
# Since this module is a thin wrapper around OpenMPI, in case of missing
# documentation, you can refer to https://www.open-mpi.org/doc/v1.8/.
module mpi is
	cflags exec("mpicc", "-showme:compile")
	ldflags exec("mpicc", "-showme:link")
end

import c
intrude import core::text::flat
import serialization
private import json

in "C Header" `{
	#include <mpi.h>
`}

# Handle to most MPI services
class MPI
	# Initialize the MPI execution environment
	init do native_init

	private fun native_init `{ MPI_Init(NULL, NULL); `}

	# Terminates the MPI execution environment
	fun finalize `{ MPI_Finalize(); `}

	# Name of this processor, usually the hostname
	fun processor_name: String import CString.to_s_with_length `{
		char *name = malloc(MPI_MAX_PROCESSOR_NAME);
		int size;
		MPI_Get_processor_name(name, &size);
		return CString_to_s_with_length(name, size);
	`}

	# Send the content of a buffer
	fun send_from(buffer: Sendable, at, count: Int, dest: Rank, tag: Tag, comm: Comm)
	do
		buffer.send(self, at, count, dest, tag, comm)
	end

	# Send the full content of a buffer
	fun send_all(buffer: Sendable, dest: Rank, tag: Tag, comm: Comm)
	do
		buffer.send_all(self, dest, tag, comm)
	end

	# Efficiently receive data in an existing buffer
	fun recv_into(buffer: Receptacle, at, count: Int, source: Rank, tag: Tag, comm: Comm)
	do
		buffer.recv(self, at, count, source, tag, comm)
	end

	# Efficiently receive data and fill an existing buffer
	fun recv_fill(buffer: Receptacle, source: Rank, tag: Tag, comm: Comm)
	do
		buffer.recv_fill(self, source, tag, comm)
	end

	# Send a complex `Serializable` object
	fun send(data: nullable Serializable, dest: Rank, tag: Tag, comm: Comm)
	do
		# Serialize data
		var stream = new StringWriter
		var serializer = new JsonSerializer(stream)
		serializer.serialize(data)

		# Send message
		var str = stream.to_s
		send_from(str, 0, str.length, dest, tag, comm)
	end

	# Receive a complex object
	fun recv(source: Rank, tag: Tag, comm: Comm): nullable Object
	do
		var status = new Status

		# Block until a message in in queue
		var err = probe(source, tag, comm, status)
		assert err.is_success else print err

		# Get message length
		var count = status.count(new DataType.char)
		assert not count.is_undefined

		# Receive message into buffer
		var buffer = new FlatBuffer.with_capacity(count)
		recv_into(buffer, 0, count, status.source, status.tag, comm)

		# Free our status
		status.free

		# Deserialize message
		var deserializer = new JsonDeserializer(buffer)
		var deserialized = deserializer.deserialize

		if deserialized == null then print "|{buffer}|{buffer.chars.join("-")}| {buffer.length}"

		return deserialized
	end

	# Send an empty buffer, only for the `tag`
	fun send_empty(dest: Rank, tag: Tag, comm: Comm): SuccessOrError
	`{
		return MPI_Send(NULL, 0, MPI_CHAR, dest, tag, comm);
	`}

	# Receive an empty buffer, only for the `tag`
	fun recv_empty(dest: Rank, tag: Tag, comm: Comm): SuccessOrError
	`{
		return MPI_Recv(NULL, 0, MPI_CHAR, dest, tag, comm, MPI_STATUS_IGNORE);
	`}

	# Send a `NativeCArray` `buffer` with a given `count` of `data_type`
	fun native_send(buffer: NativeCArray, count: Int, data_type: DataType, dest: Rank, tag: Tag, comm: Comm): SuccessOrError
	`{
		return MPI_Send(buffer, count, data_type, dest, tag, comm);
	`}

	# Receive into a `NativeCArray` `buffer` with a given `count` of `data_type`
	fun native_recv(buffer: NativeCArray, count: Int, data_type: DataType, dest: Rank, tag: Tag, comm: Comm, status: Status): SuccessOrError
	`{
		return MPI_Recv(buffer, count, data_type, dest, tag, comm, status);
	`}

	# Probe for the next data to receive, store the result in `status`
	#
	# Note: If you encounter an error where the next receive does not correspond
	# to the last `probe`, call this method twice to ensure a correct result.
	fun probe(source: Rank, tag: Tag, comm: Comm, status: Status): SuccessOrError
	`{
		return MPI_Probe(source, tag, comm, status);
	`}

	# Synchronize all processors
	fun barrier(comm: Comm) `{ MPI_Barrier(comm); `}

	# Seconds since some time in the past which does not change
	fun wtime: Float `{ return MPI_Wtime(); `}
end

# An MPI communicator
extern class Comm `{ MPI_Comm `}
	# The _null_ communicator, targeting no processors
	new null_ `{ return MPI_COMM_NULL; `}

	# The _world_ communicator, targeting all processors
	new world `{ return MPI_COMM_WORLD; `}

	# The _self_ communicator, targeting this processor only
	new self_ `{ return MPI_COMM_SELF; `}

	# Number of processors in this communicator
	fun size: Int `{
		int size;
		MPI_Comm_size(self, &size);
		return size;
	`}

	# Rank on this processor in this communicator
	fun rank: Rank `{
		int rank;
		MPI_Comm_rank(self, &rank);
		return rank;
	`}
end

# An MPI data type
extern class DataType `{ MPI_Datatype `}
	# Get a MPI char.
	new char `{ return MPI_CHAR; `}

	# Get a MPI short.
	new short `{ return MPI_SHORT; `}

	# Get a MPI int.
	new int `{ return MPI_INT; `}

	# Get a MPI long.
	new long `{ return MPI_LONG; `}

	# Get a MPI long long.
	new long_long `{ return MPI_LONG_LONG; `}

	# Get a MPI unsigned char.
	new unsigned_char `{ return MPI_UNSIGNED_CHAR; `}

	# Get a MPI unsigned short.
	new unsigned_short `{ return MPI_UNSIGNED_SHORT; `}

	# Get a MPI unsigned int.
	new unsigned `{ return MPI_UNSIGNED; `}

	# Get a MPI unsigned long.
	new unsigned_long `{ return MPI_UNSIGNED_LONG; `}

	# Get a MPI unsigned long long.
	new unsigned_long_long `{ return MPI_UNSIGNED_LONG_LONG; `}

	# Get a MPI float.
	new float `{ return MPI_FLOAT; `}

	# Get a MPI double.
	new double `{ return MPI_DOUBLE; `}

	# Get a MPI long double.
	new long_double `{ return MPI_LONG_DOUBLE; `}

	# Get a MPI byte.
	new byte `{ return MPI_BYTE; `}
end

# Status of a communication used by `MPI::probe`
extern class Status `{ MPI_Status* `}
	# Ignore the resulting status
	new ignore `{ return MPI_STATUS_IGNORE; `}

	# Allocated a new `Status`, must be freed with `free`
	new `{ return malloc(sizeof(MPI_Status)); `}

	# Source of this communication
	fun source: Rank `{ return self->MPI_SOURCE; `}

	# Tag of this communication
	fun tag: Tag `{ return self->MPI_TAG; `}

	# Success or error on this communication
	fun error: SuccessOrError `{ return self->MPI_ERROR; `}

	# Count of the given `data_type` in this communication
	fun count(data_type: DataType): Int
	`{
		int count;
		MPI_Get_count(self, data_type, &count);
		return count;
	`}
end

# An MPI operation
#
# Used with the `reduce` method.
#
# See <http://www.mpi-forum.org/docs/mpi-1.1/mpi-11-html/node78.html>
extern class Op `{ MPI_Op `}
	# Get a MPI null operation.
	new op_null `{ return MPI_OP_NULL; `}

	# Get a MPI maximum operation.
	new max `{ return MPI_MAX; `}

	# Get a MPI minimum operation.
	new min `{ return MPI_MIN; `}

	# Get a MPI sum operation.
	new sum `{ return MPI_SUM; `}

	# Get a MPI product operation.
	new prod `{ return MPI_PROD; `}

	# Get a MPI logical and operation.
	new land `{ return MPI_LAND; `}

	# Get a MPI bit-wise and operation.
	new band `{ return MPI_BAND; `}

	# Get a MPI logical or operation.
	new lor `{ return MPI_LOR; `}

	# Get a MPI bit-wise or operation.
	new bor `{ return MPI_BOR; `}

	# Get a MPI logical xor operation.
	new lxor `{ return MPI_LXOR; `}

	# Get a MPI bit-wise xor operation.
	new bxor `{ return MPI_BXOR; `}

	# Get a MPI minloc operation.
	#
	# Used to compute a global minimum and also an index attached
	# to the minimum value.
	#
	# See <http://www.mpi-forum.org/docs/mpi-1.1/mpi-11-html/node79.html#Node79>
	new minloc `{ return MPI_MINLOC; `}

	# Get a MPI maxloc operation.
	#
	# Used to compute a global maximum and also an index attached
	# to the maximum value.
	#
	# See <http://www.mpi-forum.org/docs/mpi-1.1/mpi-11-html/node79.html#Node79>
	new maxloc `{ return MPI_MAXLOC; `}

	# Get a MPI replace operation.
	new replace `{ return MPI_REPLACE; `}
end

# An MPI return code to report success or errors
extern class SuccessOrError `{ int `}
	# Is this a success?
	fun is_success: Bool `{ return self == MPI_SUCCESS; `}

	# Is this an error?
	fun is_error: Bool do return not is_success

	# TODO add is_... for each variant

	# The class of this error
	fun error_class: ErrorClass
	`{
		int class;
		MPI_Error_class(self, &class);
		return class;
	`}

	redef fun to_s do return native_to_s.to_s
	private fun native_to_s: CString `{
		char *err = malloc(MPI_MAX_ERROR_STRING);
		MPI_Error_string(self, err, NULL);
		return err;
	`}
end

# An MPI error class
extern class ErrorClass `{ int `}
	redef fun to_s do return native_to_s.to_s
	private fun native_to_s: CString `{
		char *err = malloc(MPI_MAX_ERROR_STRING);
		MPI_Error_string(self, err, NULL);
		return err;
	`}
end

# An MPI rank within a communcator
extern class Rank `{ int `}
	# Special rank accepting any processor
	new any `{ return MPI_ANY_SOURCE; `}

	# This Rank as an `Int`
	fun to_i: Int `{ return self; `}
	redef fun to_s do return to_i.to_s
end

# An MPI tag, can be defined using `Int::tag`
extern class Tag `{ int `}
	# Special tag accepting any tag
	new any `{ return MPI_ANY_TAG; `}

	# This tag as an `Int`
	fun to_i: Int `{ return self; `}
	redef fun to_s do return to_i.to_s
end

redef universal Int
	# `self`th MPI rank
	fun rank: Rank `{ return self; `}

	# Tag identified by `self`
	fun tag: Tag `{ return self; `}

	# Is this value undefined according to MPI? (may be returned by `Status::count`)
	fun is_undefined: Bool `{ return self == MPI_UNDEFINED; `}
end

# Something sendable directly and efficiently over MPI
#
# Subclasses of `Sendable` should use the native MPI send function, without
# using Nit serialization.
interface Sendable
	# Type specific send over MPI
	protected fun send(mpi: MPI, at, count: Int, dest: Rank, tag: Tag, comm: Comm) is abstract

	# Type specific send full buffer over MPI
	protected fun send_all(mpi: MPI, dest: Rank, tag: Tag, comm: Comm) is abstract
end


# Something which can receive data directly and efficiently from MPI
#
# Subclasses of `Receptacle` should use the native MPI recveive function,
# without using Nit serialization.
interface Receptacle
	# Type specific receive from MPI
	protected fun recv(mpi: MPI, at, count: Int, source: Rank, tag: Tag, comm: Comm) is abstract

	# Type specific receive and fill buffer from MPI
	protected fun recv_fill(mpi: MPI, source: Rank, tag: Tag, comm: Comm) is abstract
end

redef class CArray[E]
	super Sendable
	super Receptacle
end

redef class Text
	super Sendable

	redef fun send(mpi, at, count, dest, tag, comm)
	do
		var str
		if at != 0 or count != length then
			str = substring(at, count)
		else str = self

		mpi.native_send(str.to_cstring, count, new DataType.char,
			dest, tag, new Comm.world)
	end

	redef fun send_all(mpi, dest, tag, comm) do send(mpi, 0, length, dest, tag, comm)
end

redef class FlatBuffer
	super Receptacle

	redef fun recv(mpi, at, count, source, tag, comm)
	do
		var min_capacity = at + count
		if capacity < min_capacity then enlarge min_capacity

		var array
		if at != 0 then
			array = items + at
		else array = items

		mpi.native_recv(array, count, new DataType.char,
			source, tag, new Comm.world, new Status.ignore)

		length = capacity
	end

	redef fun recv_fill(mpi, dest, tag, comm) do recv(mpi, 0, capacity, dest, tag, comm)
end

redef class CIntArray
	redef fun send(mpi, at, count, dest, tag, comm)
	do
		var array
		if at != 0 then
			array = native_array + at
		else array = native_array

		mpi.native_send(array, count, new DataType.int,
			dest, tag, new Comm.world)
	end

	redef fun send_all(mpi, dest, tag, comm) do send(mpi, 0, length, dest, tag, comm)

	redef fun recv(mpi, at, count, source, tag, comm)
	do
		var array
		if at != 0 then
			array = native_array + at
		else array = native_array

		mpi.native_recv(array, count, new DataType.int,
			source, tag, new Comm.world, new Status.ignore)
	end

	redef fun recv_fill(mpi, dest, tag, comm) do recv(mpi, 0, length, dest, tag, comm)
end

# Shortcut to the world communicator (same as `new Comm.world`)
fun comm_world: Comm do return once new Comm.world
