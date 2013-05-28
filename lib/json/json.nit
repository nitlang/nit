# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Writing to and reading from the Json format.
# Based on the json0 C library
module json

import jsonable
import json_reader
import json_writer

redef class String
	fun json_load_from_file : nullable Map[ String, nullable Jsonable ]
	do
		var f = new IFStream.open( self )
		var data = f.read_all.json_to_object
		f.close

		return data.as(not null) # ( Map[ String, nullable Jsonable ] )
	end
end
