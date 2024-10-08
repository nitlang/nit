#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: JSON
# SEE: <http://rosettacode.org/wiki/JSON>
module json_output

import json::static
import json

var str = """{
	"blue": [1, 2],
	"ocean": "water"
}"""

var json = str.parse_json

# Print json object
print json.to_json
print json.class_name
if not json isa JsonObject then return

# Print json array
var arr = json["blue"]
print arr.to_json
print arr.class_name

# edit the object
json["ocean"] = new JsonArray.from(["fishy", "salty"])
print json.to_json
print json.to_pretty_json
