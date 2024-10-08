# This file is part of NIT ( https://nitlanguage.org ).
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

redef class Sys
	var a_finalizer_called = false
	var blob_finalizer_called = false
end

redef class Pointer
	# Allocate a block of memory of `size` bytes
	new malloc(size: Int) `{ return malloc(size); `}

	# Get a `NULL` Pointer
	new nil `{ return NULL; `}
end

class A
	super Finalizable

	redef fun finalize do sys.a_finalizer_called = true
end

class Blob
	super Finalizable

	var data = new Pointer.malloc(256000)

	redef fun finalize
	do
		if data.address_is_null then return

		data.free
		self.data = new Pointer.nil

		sys.blob_finalizer_called = true
	end
end

var x = new A
x.finalize

var y = new Blob
y.finalize
sys.force_garbage_collection

for i in [0..10000[ do
	var a = new A
	sys.force_garbage_collection
end

for i in [0..10000[ do
	var b = new Blob

	sys.force_garbage_collection
end

print sys.a_finalizer_called
print sys.blob_finalizer_called
