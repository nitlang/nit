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

module test_json

import json

redef class HashMap[K,V]
	redef fun to_s
	do
		var es = new Array[String]
		for k, v in self do
			if v != null then
				es.add( "\"{k}\":\"{v}\"" )
			else
				es.add( "\"{k}\": null" )
			end
		end
		return "\{{es.join(",")}\}"
	end
end

redef class String
	fun parse_and_display
	do
		var json_map = json_to_object
		if json_map != null then
			print json_map
			print json_map.to_json.replace(" ","")

			# only available for libjson0 v0.10
			# print json_map.to_pretty_json
		else
			print "Conversion to json failed."
		end
	end
end

fun print_usage do print "Usage: json input.json"

if args.length == 1 then
	var input_path = args.first
	var input_file = new IFStream.open( input_path )
	var input_text = input_file.read_all
	input_file.close

	input_text.parse_and_display
else
	var s = "\{\"int\":1234, \"float\":0.1234, \"str\":\"str\", \"null\":null\}"
	s.parse_and_display

	s = "\{\"arr\":[1,2,3], \"obj\":\{\"int\":123, \"float\":-234.45\}\}"
	s.parse_and_display

	s = "\{\"arr\":[1,2.3,null,\"str\"], \"obj\":\{\"int\":123, \"float\":-234.45\}\}"
	s.parse_and_display
end
