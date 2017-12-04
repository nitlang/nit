# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Crawler on the nitweb web API
module nitwebcrawl is example

import json::static

# Download a HTTP resource
fun curl(url: String): String do
	# TODO: use curl.nit
	var p = new ProcessReader("curl", "-s", url)
	var res = p.read_all
	p.close
	p.wait
	# TODO: process HTTP error codes
	if p.status != 0 then
		print "Error with {url}"
	end
	return res
end

# Recursively collect all string values in a json value associated to a given key.
fun search_json(json: nullable Serializable, key: String, result: nullable Array[String]): Array[String]
do
	if result == null then result = new Array[String]
	if json isa JsonObject then
		for k, v in json do
			search_json(v, key, result)
		end
		var v = json.get_or_null(key)
		if v != null then
			assert v isa String
			result.add v
		end
	else if json isa JsonArray then
		for e in json do search_json(e, key, result)
	else if json == null or json isa String or json isa Int or json isa Bool or json isa Float then
		# nop
	else
		print json.class_name
		abort
	end
	return result
end

var server = "http://localhost:3000"
var todo = ["/api/entity/core"]

if args.not_empty then
	server = args.pop
	if args.not_empty then
		todo.clear
		todo.add_all args
	end
end

var seen = new Set[String]
seen.add_all todo

var cpt = 0
while todo.not_empty do
	cpt += 1
	var url = todo.pop
	url = server + url
	print "process {url}. {cpt}+{todo.length}/{seen.length}"

	var js = curl(url)
	var txt = js.parse_json
	if txt isa Error then
		print "{url}: {txt.message}"
		continue
	end
	for x in search_json(txt, "api_url") do
		if seen.has(x) then continue
		todo.add x
		seen.add x
	end
end
