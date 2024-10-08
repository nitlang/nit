# This file is part of NIT (https://nitlanguage.org).
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

module mpi_simple is example

import mpi

# Simple class transfered between processors
class ProcessorInfo
	auto_serializable

	var rank: Int
	var size: Int
	var name: String
	var string_of_random_length: String

	init(mpi: MPI)
	do
		self.rank = comm_world.rank.to_i
		self.size = comm_world.size
		self.name = mpi.processor_name
		self.string_of_random_length = "+" * 10.rand
	end

	redef fun to_s do return "<{name}: {rank}/{size} {string_of_random_length}>"
end

var mpi = new MPI

var data = new CIntArray(2)
if comm_world.size == 1 then
	print "not enough nodes, got only 1"
	mpi.finalize
	exit 1
end

print "stdout: processor '{mpi.processor_name}' {comm_world.rank}/{comm_world.size}"

if comm_world.rank == 0.rank then
	# send - ints
	data[0] = 123
	data[1] = 456
	mpi.send_from(data, 0, 2, 1.rank, 0.tag, comm_world)

	# send - simple string
	mpi.send_all("Hello", 1.rank, 0.tag, comm_world)
	mpi.send_from(" World", 0, 6, 1.rank, 0.tag, comm_world)
	mpi.send_from("+-!0?", 2, 2, 1.rank, 0.tag, comm_world)
else if comm_world.rank == 1.rank then

	# recv - ints
	mpi.recv_into(data, 0, 2, 0.rank, 0.tag, comm_world)
	print "received data: {data[0]} {data[1]}"

	# recv - simple string
	var buf = new FlatBuffer.with_capacity(5)
	mpi.recv_fill(buf, 0.rank, 0.tag, comm_world)
	print "received string: {buf}"

	mpi.recv_into(buf, 5, 6, 0.rank, 0.tag, comm_world)
	print "received string: {buf}"

	mpi.recv_into(buf, 3, 2, 0.rank, 0.tag, comm_world)
	print "received string: {buf}"
end

# Passing complex objects and inverse sender/receiver
if comm_world.rank == 0.rank then
	var errors = 0
	var processors_per_host = new HashMap[String, Int]

	# recv - serializable
	for p in [1 .. comm_world.size[ do
		var a = mpi.recv(new Rank.any, 0.tag, comm_world)
		print "received serialized: {a or else "<null>"}"

		if a != null and a isa ProcessorInfo then
			if not processors_per_host.keys.has(a.name) then
				processors_per_host[a.name] = 1
			else processors_per_host[a.name] += 1
		else errors += 1
	end

	print "errors: {errors}"
	print "processors: {processors_per_host.join(", ", ": ")}"
else
	# send - serializable
	srand_from comm_world.rank.to_i
	var a = new ProcessorInfo(mpi)
	mpi.send(a, 0.rank, 0.tag, comm_world)
end

mpi.finalize
