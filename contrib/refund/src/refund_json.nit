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

# JSON handling for `refund`.
module refund_json

import refund_base
import json::static

redef class RefundProcessor

	redef fun process(input_file, output_file) do
		self.output_file = output_file
		var json = load_input(input_file)
		var sheet = new ReclamationSheet.from_json(self, json)
		var res = process_refunds(sheet)
		write_output(res.to_pretty_json, output_file)
	end

	# Computes allowed refunds for a given `ReclamationSheet`.
	fun process_refunds(sheet: ReclamationSheet): JsonObject do
		# update stats
		var stats = load_stats
		stats.inc("total_treatments")
		# compute refunds
		current_refunds.clear
		var json = new JsonObject
		json["dossier"] = sheet.file.to_s
		json["mois"] = sheet.month.to_s
		var arr = new JsonArray
		var sum = 0.0.to_dollar
		for recl in sheet.recls do
			var refund = process_refund(sheet, recl)
			var obj = new JsonObject
			obj["soin"] = recl.care_id
			obj["date"] = recl.date.to_s
			obj["montant"] = refund.to_s
			arr.add obj
			sum += refund
			# update stats for care
			stats.inc("total_{recl.care_id}")
		end
		save_stats(stats)
		json["remboursements"] = arr
		json["total"] = sum.to_s
		return json
	end

	# Loads the input string and returns its content as a JsonObject.
	#
	# Dies if the file cannot be read or does not contain a valid JSONObject.
	fun load_input(file: String): JsonObject do
		if not file.file_exists then
			die("File `{file}` not found.")
			abort
		end
		var ptr = new FileReader.open(file)
		var json = ptr.read_all.parse_json
		if json isa JsonParseError then
			die("Wrong input file ({json.message})")
			abort
		else if not json isa JsonObject then
			die("Wrong input type (expected JsonObject got {json.class_name})")
			abort
		end
		ptr.close
		return json
	end

	# Writes `str` in path specified by `file`.
	#
	# Used to produce output and stats.
	fun write_output(str: String, file: String) do
		var ofs = new FileWriter.open(file)
		ofs.write(str)
		ofs.close
	end

	# UTILS

	# Does `json` contains `key`? Dies otherwise.
	private fun check_key(json: JsonObject, key: String) do
		if json.has_key(key) then return
		die("Malformed input (missing key {key})")
	end

	# Does `str` match the regex `re`.
	private fun check_format(str, re: String): Bool do
		return str.has(re.to_re)
	end

	redef fun die(msg) do
		# save error
		var obj = new JsonObject
		obj["message"] = msg
		write_output(obj.to_pretty_json, output_file)
		# update stats
		var stats = load_stats
		stats.inc("total_reject")
		save_stats(stats)
		# leave
		exit 1
	end

	redef fun show_stats do print load_stats.to_json.to_pretty_json

	redef fun load_stats do
		# If no stats found, return a new object
		if not stats_file.file_exists then return new RefundStats
		# Try to read from file
		var ifs = new FileReader.open(stats_file)
		var content = ifs.read_all.parse_json
		ifs.close
		# If file is corrupted, return a new object
		if not content isa JsonObject then return new RefundStats
		# Return file contained stats
		return new RefundStats.from_json(content)
	end

	redef fun save_stats(stats: RefundStats) do
		write_output(stats.to_json.to_pretty_json, stats_file)
	end
end

redef class RefundStats

	# Inits `self` from the content of a JsonObject
	init from_json(json: JsonObject) do
		for k, v in json do self[k] = v.as(Int)
	end

	# Outputs `self` as a JSON string.
	fun to_json: JsonObject do
		var obj = new JsonObject
		for k, v in self do obj[k] = v
		return obj
	end
end

redef class ReclamationSheet

	# Inits `self` from the content of a `JsonObject`.
	init from_json(proc: RefundProcessor, json: JsonObject) do
		file = new ReclFile.from_json(proc, json)
		month = new ReclMonth.from_json(proc, json)
		recls = parse_recls(proc, json)
		init(file, month)
	end

	# Parses and checks the given `json` then returns an array of `Reclamation` instances.
	private fun parse_recls(proc: RefundProcessor, json: JsonObject): Array[Reclamation] do
		proc.check_key(json, "reclamations")
		var res = new Array[Reclamation]
		var recls = json["reclamations"]
		if not recls isa JsonArray then
			proc.die("Wrong type for `number` (expected JsonArray got {recls.class_name})")
			abort
		end
		var i = 0
		for obj in recls do
			if not obj isa JsonObject then
				proc.die("Wrong type for `reclamations#{i}` " +
					"(expected JsonObject got {obj.class_name})")
				abort
			end
			var recl = new Reclamation.from_json(proc, obj)
			if not month.has(recl.date) then
				proc.die("Wrong `mois` for `soin` with id `{recl.care_id}`")
				abort
			end
			if file.contract.care_by_id(recl.care_id) == null then
				proc.die("Unknown `soin` with id `{recl.care_id}`")
				abort
			end
			res.add recl
			i += 1
		end
		return res
	end
end

redef class ReclFile
	# Inits `self` from the content of a JsonObject.
	init from_json(proc: RefundProcessor, json: JsonObject) do
		proc.check_key(json, "dossier")
		var id = json["dossier"]
		if not id isa String then
			proc.die("Wrong type for `dossier` (expected String got {id.class_name})")
			abort
		end
		# Check format
		parse_contract(proc, id)
		parse_client(proc, id)
		init(id)
	end

	# Tries to parse the contract from `file_id` string.
	private fun parse_contract(proc: RefundProcessor, file_id: String) do
		var kind = file_id.first.to_s
		if not proc.check_format(kind, "^[A-E]\{1\}$") then
			proc.die("Wrong contract (expected A, B, C, D or E got {kind})")
		end
		contract = contract_factory(proc, kind)
	end

	# Tries to parse the client number from the `file_id` string.
	private fun parse_client(proc: RefundProcessor, file_id: String) do
		var num = file_id.substring_from(1)
		if not proc.check_format(num, "^[0-9]\{6\}$") then
			proc.die("Wrong format for `number` (expected XXXXXX got {num})")
			abort
		end
		client = new Client(num)
	end
end

redef class ReclMonth
	# Inits `self` from a `JsonObject`.
	init from_json(proc: RefundProcessor, json: JsonObject) do
		proc.check_key(json, "mois")
		var month = json["mois"]
		if not month isa String then
			proc.die("Wrong type for `mois` (expected String got {month.class_name})")
			return
		end
		if not proc.check_format(month, "^[0-9]\{4\}-[0-9]\{2\}$") then
			proc.die("Wrong format for `mois` (expected AAAA-MM got {month})")
			return
		end
		from_string(proc, month)
	end

	# Inits `self` from a string representation formatted as `AAAA-MM`.
	init from_string(proc: RefundProcessor, str: String) do
		var parts = str.split("-")
		var year = parts[0].to_i
		var month = parts[1].to_i
		if month < 1 or month > 12 then
			proc.die("Wrong format for `mois` (expected AAAA-MM got {str})")
			return
		end
		date = new ReclDate(year, month, 1)
		init(date)
	end
end

redef class ReclDate
	# Inits `self` from a `JsonObject`.
	#
	# Dies if the `json` input is invalid.
	init from_json(proc: RefundProcessor, json: JsonObject) do
		proc.check_key(json, "date")
		var date = json["date"]
		if not date isa String then
			proc.die("Wrong type for `date` (expected String got {date.class_name})")
			abort
		end
		if not proc.check_format(date, "^[0-9]\{4\}-[0-9]\{2\}-[0-9]\{2\}$") then
			proc.die("Wrong format for `date` (expected AAAA-MM-DD got {date})")
			abort
		end
		from_string(proc, date)
	end

	# Inits `self` from its string representation formatted as `AAAA-MM`.
	init from_string(proc: RefundProcessor, str: String) do
		var parts = str.split("-")
		year = parts[0].to_i
		month = parts[1].to_i
		day = parts[2].to_i
		if month < 1 or month > 12 or day < 1 or day > 31 then
			proc.die("Wrong format for `mois` (expected AAAA-MM got {str})")
			abort
		end
		init(year, month, day)
	end
end

redef class Reclamation
	# Inits `self` from a `JsonObject`.
	init from_json(proc: RefundProcessor, json: JsonObject) do
		care_id = parse_care_id(proc, json)
		date = new ReclDate.from_json(proc, json)
		fees = parse_fees(proc, json)
		init(care_id, date, fees)
	end

	# Inits `self` from its string representation formatted as `Int`.
	private fun parse_care_id(proc: RefundProcessor, json: JsonObject): Int do
		proc.check_key(json, "soin")
		var id = json["soin"]
		if not id isa Int then
			proc.die("Wrong type for `soin` (expected Int got {id.class_name})")
			abort
		end
		return id
	end

	# Inits `self` from its string representation formatted as `0.00$`.
	private fun parse_fees(proc: RefundProcessor, json: JsonObject): Dollar do
		proc.check_key(json, "montant")
		var fees = json["montant"]
		if not fees isa String then
			proc.die("Wrong type for `fees` (expected String got {fees.class_name})")
			abort
		end
		if not proc.check_format(fees, "^[0-9]+((\\.|\\,)[0-9]+)?\\$$") then
			proc.die("Wrong format for `montant` (expected XX.XX$ got {fees})")
			abort
		end
		return new Dollar.from_float(fees.basename("$").to_f)
	end
end
