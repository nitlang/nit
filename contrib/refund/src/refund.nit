# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Alexandre Terrasa <alexandre@moz-code.org>
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

# Insurance refunds calculation tool.
#
# `refund` computes automatically the allowed refund for a reclamation according
# to an insurrance policy.
#
# Usage:
#
# ~~~sh
# > refund (<input_file> <output_file> | [OPTIONS])
# ~~~
#
# Input file:
#
# `refund` expects a JSON input file on the form:
#
# ~~~json
# {
#  "dossier": "A100323",
#  "mois": "2015-01",
#  "reclamations": [
#   {
#    "soin": 100,
#    "date": "2015-01-11",
#    "montant": "234.00$"
#   }, {
#    "soin": 200,
#    "date": "2015-01-13",
#    "montant": "128.00$"
#   }, {
#    "soin": 334,
#    "date": "2015-01-23",
#    "montant": "50.00$"
#   }
#  ]
# }
# ~~~
#
# Output file:
#
# You have to specify the path where `refund` should output the result file.
#
# Results are formatted as JSON:
#
# ~~~json
# {
#  "client": "100323",
#  "mois": "2015-01",
#  "remboursements": [
#   {
#    "soin": 100,
#    "date": "2015-01-11",
#    "montant": "58.50$"
#   }, {
#    "soin": 200,
#    "date": "2015-01-13",
#    "montant": "22.50$"
#   }, {
#    "soin": 334,
#    "date": "2015-01-23",
#    "montant": "0.00$"
#   }
#  ]
# }
# ~~~
#
# Options:
#
# `refund` can generate statistics about reclamations and refunds computed.
#
# * `-S`: display statistics
# * `-SR`: reset statistics
#
# Error handling:
#
# In case of error, a JSON object is generated in place of the output file:
#
# ~~~json
# { "message": "Invalid input data" }
# ~~~
module refund


import refund_json

# Display usage in console then leave.
fun usage do
	print ""
	print "Usage:"
	print "refund <input.json> <output.json>"
	print ""
	print "options"
	print " -S\tShow stats in console"
	print " -RS\tClear stats"
	exit 1
end

var proc = new RefundProcessor

if args.length == 1 then
	var flag = args.first
	if flag == "-RS" then
		proc.clear_stats
		exit 0
	else if flag == "-S" then
		proc.show_stats
		exit 0
	else
		print "Error: Unknown flag {flag}."
		usage
	end
else if args.length != 2 then
	print "Error: Incorrect number of arguments. Got {args.length}, expected 2."
	usage
end

proc.process(args[0], args[1])
