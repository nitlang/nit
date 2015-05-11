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

# Insurance refunds calculation base classes.
module refund_base

import counter

# `RefundProcessor` manages the calculation of the refunds.
#
# See `process`.
class RefundProcessor

	# Where to generate output file.
	var output_file: String is noinit, writable

	# Where to save usage statistics.
	var stats_file = "stats.json"

	# Processes the `input_file` and write the output in `output_file`.
	#
	# Steps:
	#
	# 1. Parses the input_file and check json validity (see `load_input`).
	# 2. Instantiates and checks the reclamation sheet against client rules
	#   (see `ReclamationSheet.from_json`).
	# 3. Processes refunds (see `proces_refunds`).
	# 4. Writes the output file (see `write_output`).
	fun process(input_file, output_file: String) is abstract

	# Refunds allowed for the current reclamation sheet.
	var current_refunds = new HashMap[Care, Dollar]

	# Computes allowed refunds for a given `Reclamation` found in a `ReclamationSheet`.
	fun process_refund(sheet: ReclamationSheet, recl: Reclamation): Dollar is abstract

	# Shows stats values in console
	fun show_stats do print load_stats

	# Loads stats from file as a RefundStats instance.
	fun load_stats: RefundStats is abstract

	# Saves stats in file.
	fun save_stats(stats: RefundStats) is abstract

	# Outputs error object then exit.
	fun die(msg: String) is abstract

	# Clears stats.
	#
	# Basically delete the stats file.
	fun clear_stats do if stats_file.file_exists then stats_file.file_delete
end

# Stats representation using a `Counter`.
class RefundStats
	super Counter[String]
end

# A `Client` can ask for refunds from the insurance company.
class Client

	# Client number.
	var number: String

	redef fun to_s do return "#{number}"
end

# A `ReclamationSheet` is filled by the `Client` to obtain a `RefundSheet`.
class ReclamationSheet

	# File used for this refund.
	var file: ReclFile is writable

	# Month concerned by the refund.
	var month: ReclMonth is writable

	# Array of reclamations.
	var recls = new Array[Reclamation] is writable

	redef fun to_s do
		return "Refund (file: {file}, month: {month}, recls: {recls.length})"
	end
end

# A File found in a `ReclamationSheet`.
#
# A File points to a `Contract` and a `Client`.
#
# Allowed format is: `X12345` where `X` is the contract kind and `12345` is the
# client number.
class ReclFile

	# File string id.
	var id: String is writable

	# Contract instance linked to this file.
	var contract: Contract is noinit, writable

	# Client instance linked to this file.
	var client: Client is noinit, writable

	# Returns the contract instance corresponding to `kind`.
	fun contract_factory(proc: RefundProcessor, kind: String): Contract do
		if kind == "A" then return new ContractA
		if kind == "B" then return new ContractB
		if kind == "C" then return new ContractC
		if kind == "D" then return new ContractD
		if kind == "E" then return new ContractE
		proc.die("Unknown contract {kind}")
		abort
	end

	redef fun to_s do return "{contract.kind}{client.number}"
end

# Month date formatted for contracts.
#
# Mainly used to factorize treatments on date calculation.
class ReclMonth

	# Internal date used to store the month.
	var date: ReclDate is writable

	# Is `date` in this month?
	fun has(date: ReclDate): Bool do return self.date.month == date.month

	redef fun to_s do
		if date.month < 10 then
			return "{date.year}-0{date.month}"
		end
		return "{date.year}-0{date.month}"
	end
end

# The date on which a `Care` occured.
class ReclDate
	# Year of the month.
	var year: Int is writable

	# Month number (`1` is January).
	var month: Int is writable

	# Day number.
	var day: Int is writable

	redef fun to_s do
		var res = new FlatBuffer
		res.append "{year}-"
		if month < 10 then
			res.append "0{month}-"
		else
			res.append "{month}-"
		end
		if day < 10 then
			res.append "0{day}"
		else
			res.append day.to_s
		end
		return res.write_to_string
	end
end

# `RefundRecl` are parts of the `RefundReclamation`.
class Reclamation
	# `Care` id concerned by this reclamation.
	var care_id: Int is writable

	# Date this care was applied.
	var date: ReclDate is writable

	# Amount of money given by the `Client` in exchange of this care.
	var fees: Dollar is writable

	redef fun to_s do return "Entry (care: {care_id}, date: {date}, fees: {fees})"
end

# A `Contract` specifies the refund applicable on care.
class Contract

	# Kind of the contract (specified by a letter).
	var kind: String is noinit, writable

	# Covered cares for this kind of contract.
	var cares = new Array[Care] is writable

	# Adds a care to this contract.
	fun add_care(care: Care) do cares.add care

	# Gets a `Care` instance by its id.
	#
	# Returns `null` if no `Care` found.
	fun care_by_id(id: Int): nullable Care do
		for care in cares do
			if care.match_id(id) then return care
		end
		return null
	end

	redef fun to_s do return "{kind} ({cares.length} cares)"
end

# Contracts
# FIXME move contracts to a JSON configuration file.

private class ContractA
	super Contract

	init do
		kind = "A"
		add_care(new UniqCare.with_vals(0,   25.0, null, null))
		add_care(new UniqCare.with_vals(100, 35.0, null, 250.0.to_dollar))
		add_care(new UniqCare.with_vals(150, 0.0,  null, null))
		add_care(new UniqCare.with_vals(175, 50.0, null, 200.0.to_dollar))
		add_care(new UniqCare.with_vals(200, 25.0, null, 250.0.to_dollar))
		add_care(new RangeCare.with_vals([300..399], 0.0, null, null))
		add_care(new UniqCare.with_vals(400, 0.0,  null, null))
		add_care(new UniqCare.with_vals(500, 25.0, null, 150.0.to_dollar))
		add_care(new UniqCare.with_vals(600, 40.0, null, 300.0.to_dollar))
		add_care(new UniqCare.with_vals(700, 0.0,  null, null))
	end
end

private class ContractB
	super Contract

	init do
		kind = "B"
		add_care(new UniqCare.with_vals(0,   50.0, 40.0.to_dollar, null))
		add_care(new UniqCare.with_vals(100, 50.0, 50.0.to_dollar, 250.0.to_dollar))
		add_care(new UniqCare.with_vals(150, 0.0,  null, null))
		add_care(new UniqCare.with_vals(175, 75.0, null, 200.0.to_dollar))
		add_care(new UniqCare.with_vals(200, 100.0,null, 250.0.to_dollar))
		add_care(new RangeCare.with_vals([300..399], 50.0, null, null))
		add_care(new UniqCare.with_vals(400, 0.0,  null, null))
		add_care(new UniqCare.with_vals(500, 50.0, 50.0.to_dollar, 150.0.to_dollar))
		add_care(new UniqCare.with_vals(600, 100.0,null, 300.0.to_dollar))
		add_care(new UniqCare.with_vals(700, 70.0, null, null))
	end
end

private class ContractC
	super Contract

	init do
		kind = "C"
		add_care(new UniqCare.with_vals(0,   90.0, null, null))
		add_care(new UniqCare.with_vals(100, 95.0, null, 250.0.to_dollar))
		add_care(new UniqCare.with_vals(150, 85.0, null, null))
		add_care(new UniqCare.with_vals(175, 90.0, null, 200.0.to_dollar))
		add_care(new UniqCare.with_vals(200, 90.0, null, 250.0.to_dollar))
		add_care(new RangeCare.with_vals([300..399], 90.0, null, null))
		add_care(new UniqCare.with_vals(400, 90.0, null, null))
		add_care(new UniqCare.with_vals(500, 90.0, null, 150.0.to_dollar))
		add_care(new UniqCare.with_vals(600, 75.0, null, 300.0.to_dollar))
		add_care(new UniqCare.with_vals(700, 90.0, null, null))
	end
end

private class ContractD
	super Contract

	init do
		kind = "D"
		add_care(new UniqCare.with_vals(0,   100.0, 85.0.to_dollar,  null))
		add_care(new UniqCare.with_vals(100, 100.0, 75.0.to_dollar,  250.0.to_dollar))
		add_care(new UniqCare.with_vals(150, 100.0, 150.0.to_dollar, null))
		add_care(new UniqCare.with_vals(175, 95.0,  null,  200.0.to_dollar))
		add_care(new UniqCare.with_vals(200, 100.0, 100.0.to_dollar, 250.0.to_dollar))
		add_care(new RangeCare.with_vals([300..399],100.0, null, null))
		add_care(new UniqCare.with_vals(400, 100.0, 65.0.to_dollar,  null))
		add_care(new UniqCare.with_vals(500, 100.0, null,  150.0.to_dollar))
		add_care(new UniqCare.with_vals(600, 100.0, 100.0.to_dollar, 300.0.to_dollar))
		add_care(new UniqCare.with_vals(700, 100.0, 90.0.to_dollar, null))
	end
end

private class ContractE
	super Contract

	init do
		kind = "E"
		add_care(new UniqCare.with_vals(0,   15.0, null, null))
		add_care(new UniqCare.with_vals(100, 25.0, null, 250.0.to_dollar))
		add_care(new UniqCare.with_vals(150, 15.0, null, null))
		add_care(new UniqCare.with_vals(175, 25.0, 20.0.to_dollar, 200.0.to_dollar))
		add_care(new UniqCare.with_vals(200, 12.0, null, 250.0.to_dollar))
		add_care(new RangeCare.with_vals([300..399], 60.0, null, null))
		add_care(new UniqCare.with_vals(400, 25.0, 15.0.to_dollar, null))
		add_care(new UniqCare.with_vals(500, 30.0, 20.0.to_dollar, 150.0.to_dollar))
		add_care(new UniqCare.with_vals(600, 15.0, null, 300.0.to_dollar))
		add_care(new UniqCare.with_vals(700, 22.0, null, null))
	end
end

# A `Care` is payed by the `Client` and can raises a `Refund`.
interface Care

	# Does `id` is acceptable for this care?
	fun match_id(id: Int): Bool is abstract

	# Percent covered for this kind of care.
	fun cover: Float is abstract

	# Max amount covered for this kind of care by reclamation.
	fun max: nullable Dollar is abstract

	# Max amount covered for this kind of care by month.
	fun month_max: nullable Dollar is abstract

	# Computes the refund for this care.
	fun process_refund(fees: Dollar): Dollar do
		var max = self.max
		var val = ((fees.value.to_f * (cover / 100.0)) / 100.0).to_dollar
		if max != null and val > max then val = max
		return val
	end
end

# A `UniqCare` refers to one and only one kind of `Care`.
#
# For example, the care `Ostéopathie` as the uniq id `200`.
class UniqCare
	super Care

	# Care id.
	var id: Int

	redef fun match_id(id) do return self.id == id

	redef var cover = 0.0
	redef var max = null
	redef var month_max = null

	# Inits this `Care` with values.
	#
	# * `id`: the `Care` id.
	# * `cover`: refund percentage covered for this `Care`.
	# * `max`: max amount refunded for this `Care` in a reclamation sheet.
	# * `month_max`: max amount refunded by month.
	init with_vals(id: Int, cover: Float, max, month_max: nullable Dollar) do
		self.id = id
		self.cover = cover
		self.max = max
		self.month_max = month_max
	end

	redef fun to_s do return id.to_s
end

# A `RangeCare` refers to a set of id corresponding to the same `Care`.
#
# For example, the care `Soins Dentaires` is refered by the ids 300 to 399.
class RangeCare
	super Care

	# Care id range.
	var id: Range[Int]

	redef fun match_id(id) do return self.id.has(id)
	redef var cover = 0.0
	redef var max = null
	redef var month_max = null

	# Inits this `Care` with values.
	#
	# * `id`: the `Care` id.
	# * `cover`: refund percentage covered for this `Care`.
	# * `max`: max amount refunded for this `Care` in a reclamation sheet.
	# * `month_max`: max amount refunded by month.
	init with_vals(id: Range[Int], cover: Float, max, month_max: nullable Dollar) do
		self.id = id
		self.cover = cover
		self.max = max
		self.month_max = month_max
	end

	redef fun to_s do return id.first.to_s
end

# Used to represent currencies values.
class Dollar
	super Comparable

	redef type OTHER: Dollar

	# Amount of cents.
	var value: Int

	# Inits `self` from a float `value`.
	init from_float(value: Float) do
		self.value = (value * 100.0).to_i
	end

	redef fun to_s do return "{value / 100}.{value % 100}$"
	redef fun <(o) do return value < o.value

	# Dollars addition.
	fun +(o: Dollar): Dollar do return new Dollar(value + o.value)

	# Dollars substraction.
	fun -(o: Dollar): Dollar do return new Dollar(value - o.value)
end

redef class Float
	# Returns `self` as a Dollar instance.
	fun to_dollar: Dollar do return new Dollar.from_float(self)
end
