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

# Testing from external files.
module testing_suite

import testing_base
import html
private import parse_annotations
private import realtime

redef class ToolContext
	# --pattern
	var opt_pattern = new OptionString("Only run test case with name that match pattern", "-p", "--pattern")
	# --autosav
	var opt_autosav = new OptionBool("Automatically create/update .res files for black box testing", "--autosav")
end

# Used to test nitunit test files.
class NitUnitTester

	# `ModelBuilder` used to parse test files.
	var mbuilder: ModelBuilder

	# Compile and execute `mmodule` as a test suite.
	fun test_module_unit(mmodule: MModule): TestSuite do
		var toolcontext = mbuilder.toolcontext
		var suite = new TestSuite(mmodule, toolcontext)
		# method to execute before all tests in the module
		for mmethod in mmodule.before_all do
			toolcontext.modelbuilder.total_tests += 1
			suite.before_all.add new TestCase(suite, mmethod, toolcontext)
		end
		# generate all test cases
		for mclassdef in mmodule.mclassdefs do
			if not mclassdef.is_test then continue
			if not suite_match_pattern(mclassdef) then continue
			toolcontext.modelbuilder.total_classes += 1

			var test_class = new TestClass

			# method to execute before all tests in the class
			for mmethod in mclassdef.before_all do
				toolcontext.modelbuilder.total_tests += 1
				test_class.before_all.add new TestCase(suite, mmethod, toolcontext)
			end

			var before = mclassdef.before
			var after = mclassdef.after

			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef isa MMethodDef or not mpropdef.is_test then continue
				if not case_match_pattern(mpropdef) then continue
				toolcontext.modelbuilder.total_tests += 1
				var test = new TestCase(suite, mpropdef, toolcontext)
				test.before = before
				test.after = after
				test_class.test_cases.add test
			end

			# method to execute after all tests in the class
			for mmethod in mclassdef.after_all do
				toolcontext.modelbuilder.total_tests += 1
				test_class.after_all.add new TestCase(suite, mmethod, toolcontext)
			end

			suite.test_classes.add test_class
		end
		# method to execute after all tests in the module
		for mmethod in mmodule.after_all do
			toolcontext.modelbuilder.total_tests += 1
			suite.after_all.add new TestCase(suite, mmethod, toolcontext)
		end
		suite.run
		return suite
	end

	# Is the test suite name match the pattern option?
	private fun suite_match_pattern(suite: MClassDef): Bool do
		var pattern = mbuilder.toolcontext.opt_pattern.value
		if pattern == null then return true
		var ps = pattern.split_with("::")
		var p = ps.first
		if ps.length == 1 and p.first.is_lower then return true
		if ps.length == 2 and p.first.is_lower then return false
		if p.has_suffix("*") then
			p = p.substring(0, p.length - 1)
			if suite.name.has_prefix(p) then return true
		else
			if suite.name == p then return true
		end
		return false
	end

	# Is the test case name match the pattern option?
	private fun case_match_pattern(case: MPropDef): Bool do
		var pattern = mbuilder.toolcontext.opt_pattern.value
		if pattern == null then return true
		var ps = pattern.split_with("::")
		var p = ps.last
		if ps.length == 1 and p.first.is_upper then return true
		if ps.length == 2 and p.first.is_upper then return false
		if p.has_suffix("*") then
			p = p.substring(0, p.length - 1)
			if case.name.has_prefix(p) then return true
		else
			if case.name == p then return true
		end
		return false
	end
end

# A test suite contains all the test cases for a `MModule`.
class TestSuite

	# `MModule` under test
	var mmodule: MModule

	# `ToolContext` to use to display messages.
	var toolcontext: ToolContext

	# List of `TestCase` to be executed in this suite.
	var test_classes = new Array[TestClass]

	# Tests to be executed before the whole test suite.
	var before_all = new Array[TestCase]

	# Tests to be executed after the whole test suite.
	var after_all = new Array[TestCase]

	# Display test suite status in std-out.
	fun show_status do
		var test_cases = new Array[TestCase]
		for test_class in test_classes do
			test_cases.add_all test_class.before_all
			test_cases.add_all test_class.test_cases
			test_cases.add_all test_class.after_all
		end
		test_cases.add_all before_all
		test_cases.add_all after_all
		toolcontext.show_unit_status("Test-suite of module " + mmodule.full_name, test_cases)
	end

	# Execute the test suite
	fun run do
		set_env
		show_status
		if not toolcontext.test_dir.file_exists then
			toolcontext.test_dir.mkdir
		end
		write_to_nit
		compile
		if failure != null then
			for test_class in test_classes do
				for case in test_class.test_cases do
					case.fail "Compilation Error"
					case.raw_output = failure
					toolcontext.clear_progress_bar
					toolcontext.show_unit(case)
				end
			end
			show_status
			print ""
			return
		end
		toolcontext.info("Execute test-suite {mmodule.name}", 1)

		for before_module in before_all do
			before_module.run
			toolcontext.clear_progress_bar
			toolcontext.show_unit(before_module)
			if before_module.error != null then
				for test_class in test_classes do
					for case in test_class.before_all do
						case.fail "Nitunit Error: before module test failed"
						toolcontext.clear_progress_bar
						toolcontext.show_unit(case)
					end
					for case in test_class.test_cases do
						case.fail "Nitunit Error: before module test failed"
						toolcontext.clear_progress_bar
						toolcontext.show_unit(case)
					end
					for case in test_class.after_all do
						case.fail "Nitunit Error: before module test failed"
						toolcontext.clear_progress_bar
						toolcontext.show_unit(case)
					end
				end
				for after_module in after_all do
					after_module.fail "Nitunit Error: before module test failed"
					toolcontext.clear_progress_bar
					toolcontext.show_unit(after_module)
				end
				show_status
				print ""
				return
			end
		end

		for test_class in test_classes do
			for case in test_class.before_all do
				case.run
				toolcontext.clear_progress_bar
				toolcontext.show_unit(case)
				if case.error != null then
					for scase in test_class.test_cases do
						scase.fail "Nitunit Error: before class test failed"
						toolcontext.clear_progress_bar
						toolcontext.show_unit(scase)
					end
					for scase in test_class.after_all do
						scase.fail "Nitunit Error: before class test failed"
						toolcontext.clear_progress_bar
						toolcontext.show_unit(scase)
					end
					show_status
					print ""
					return
				end
			end
			for case in test_class.test_cases do
				case.run
				toolcontext.clear_progress_bar
				toolcontext.show_unit(case)
				show_status
			end
			for after_class in test_class.after_all do
				after_class.run
				toolcontext.clear_progress_bar
				toolcontext.show_unit(after_class)
				show_status
			end
		end

		for after_module in after_all do
			after_module.run
			toolcontext.clear_progress_bar
			toolcontext.show_unit(after_module)
			show_status
		end

		show_status
		print ""
	end

	# Write the test unit for `self` in a nit compilable file.
	fun write_to_nit do
		var file = new Template
		file.addn "intrude import core"
		file.addn "import {mmodule.name}\n"
		file.addn "var name = args.first"
		for before_module in before_all do
			before_module.write_to_nit(file)
		end
		for test_class in test_classes do
			for case in test_class.before_all do
				case.write_to_nit(file)
			end
			for case in test_class.test_cases do
				case.write_to_nit(file)
			end
			for case in test_class.after_all do
				case.write_to_nit(file)
			end
		end
		for after_module in after_all do
			after_module.write_to_nit(file)
		end
		file.write_to_file("{test_file}.nit")
	end

	# Return the test suite in XML format compatible with Jenkins.
	# Contents depends on the `run` execution.
	fun to_xml: HTMLTag do
		var n = new HTMLTag("testsuite")
		n.attr("package", mmodule.name)
		for test_class in test_classes do
			for test in test_class.test_cases do n.add test.to_xml
		end
		return n
	end

	# Generated test file name.
	fun test_file: String do
		return toolcontext.test_dir / "gen_{mmodule.name.escape_to_c}"
	end

	# Compile all `test_cases` cases in one file.
	fun compile do
		# find nitc
		var nitc = toolcontext.find_nitc
		# compile test suite
		var file = test_file
		var module_file = mmodule.location.file
		if module_file == null then
			toolcontext.error(null, "Error: cannot find module file for {mmodule.name}.")
			toolcontext.check_errors
			return
		end
		var include_dir = module_file.filename.dirname
		var cmd = "{nitc} --no-color -q '{file}.nit' -I {include_dir} -o '{file}.bin' > '{file}.out' 2>&1 </dev/null"
		var res = toolcontext.safe_exec(cmd)
		var f = new FileReader.open("{file}.out")
		var msg = f.read_all
		f.close
		if res != 0 then
			failure = msg
		end
	end

	# Set environment variables for test suite execution
	fun set_env do
		var loc = mmodule.location.file
		if loc == null then return
		toolcontext.set_testing_path(loc.filename)
	end

	# Error occured during test-suite compilation.
	var failure: nullable String = null
end

# A test class contains multiple test cases
#
# For each test class, methods can be executed before and after all cases.
class TestClass
	# List of `TestCase` to be executed in this suite.
	var test_cases = new Array[TestCase]

	# Tests to be executed before the whole test suite.
	var before_all = new Array[TestCase]

	# Tests to be executed after the whole test suite.
	var after_all = new Array[TestCase]
end

# A test case is a unit test considering only a `MMethodDef`.
class TestCase
	super UnitTest

	# Test suite wich `self` belongs to.
	var test_suite: TestSuite

	# Test method to be compiled and tested.
	var test_method: MMethodDef

	# Cases to execute before this one
	var before = new Array[MMethodDef]

	# Cases to execute after this one
	var after = new Array[MMethodDef]

	redef fun full_name do return test_method.full_name

	redef fun location do return test_method.location

	# `ToolContext` to use to display messages and find `nitc` bin.
	var toolcontext: ToolContext

	# Generate the test unit for `self` in `file`.
	fun write_to_nit(file: Template) do
		var name = test_method.name
		file.addn "if name == \"{name}\" then"
		if test_method.mproperty.is_toplevel then
			file.addn "\t{name}"
		else
			file.addn "\tvar subject = new {test_method.mclassdef.name}.intern"
			for mmethod in before do
				file.addn "\tsubject.{mmethod.name}"
			end
			file.addn "\tsubject.{name}"
			for mmethod in after do
				file.addn "\tsubject.{mmethod.name}"
			end
		end
		file.addn "end"
	end

	# Execute the test case.
	fun run do
		toolcontext.info("Execute test-case {test_method.name}", 1)
		was_exec = true
		if toolcontext.opt_noact.value then return
		# execute
		var method_name = test_method.name
		var test_file = test_suite.test_file
		var res_name = "{test_file}_{method_name.escape_to_c}"
		var clock = new Clock
		var res = toolcontext.safe_exec("{test_file}.bin {method_name} > '{res_name}.out1' 2>&1 </dev/null")
		if not toolcontext.opt_no_time.value then real_time = clock.total

		var raw_output = "{res_name}.out1".to_path.read_all
		self.raw_output = raw_output
		# set test case result
		if res != 0 then
			error = "Runtime Error in file {test_file}.nit"
			toolcontext.modelbuilder.failed_tests += 1
		else
			# no error, check with res file, if any.
			var mmodule = test_method.mclassdef.mmodule
			var file = mmodule.filepath
			if file != null then
				var tries = [ file.dirname / mmodule.name + ".sav" / test_method.name + ".res",
					file.dirname / "sav" / test_method.name + ".res" ,
					file.dirname / test_method.name + ".res" ]
				var savs = [ for t in tries do if t.file_exists then t ]
				if savs.length == 1 then
					var sav = savs.first
					toolcontext.info("Diff output with {sav}", 1)
					res = toolcontext.safe_exec("diff -u --label 'expected:{sav}' --label 'got:{res_name}.out1' '{sav}' '{res_name}.out1' > '{res_name}.diff' 2>&1 </dev/null")
					if res == 0 then
						# OK
					else if toolcontext.opt_autosav.value then
						raw_output.write_to_file(sav)
						info = "Expected output updated: {sav} (--autoupdate)"
					else
						self.raw_output = "Diff\n" + "{res_name}.diff".to_path.read_all
						error = "Difference with expected output: diff -u {sav} {res_name}.out1"
						toolcontext.modelbuilder.failed_tests += 1
					end
				else if savs.length > 1 then
					toolcontext.info("Conflicting diffs: {savs.join(", ")}", 1)
					error = "Conflicting expected output: {savs.join(", ", " and ")} all exist"
					toolcontext.modelbuilder.failed_tests += 1
				else if not raw_output.is_empty then
					toolcontext.info("No diff: {tries.join(", ", " or ")} not found", 1)
					if toolcontext.opt_autosav.value then
						var sav = tries.first
						sav.dirname.mkdir
						raw_output.write_to_file(sav)
						info = "Expected output saved: {sav} (--autoupdate)"
					end
				end
			end
		end
		is_done = true
	end

	# Make the test case fail without testing it
	#
	# Useful when the compilation or the before_test failed.
	fun fail(message: String) do
		is_done = true
		error = message
		toolcontext.modelbuilder.failed_tests += 1
	end

	redef fun xml_classname do
		var a = test_method.full_name.split("$")
		return "nitunit.{a[0]}.{a[1]}"
	end

	redef fun xml_name do
		var a = test_method.full_name.split("$")
		return a[2]
	end
end

redef class MClassDef
	# Methods tagged with `before` in this class definition
	private fun before: Array[MMethodDef] do
		var res = new ArraySet[MMethodDef]
		for mpropdef in mpropdefs do
			if mpropdef isa MMethodDef and mpropdef.is_before then
				res.add mpropdef
			end
		end
		var in_hierarchy = self.in_hierarchy
		if in_hierarchy == null then return res.to_a
		for mclassdef in in_hierarchy.direct_greaters do
			res.add_all mclassdef.before
		end
		var lin = res.to_a
		mmodule.linearize_mpropdefs(lin)
		return lin
	end

	# Methods tagged with `before_all` in this class definition
	private fun before_all: Array[MMethodDef] do
		var res = new ArraySet[MMethodDef]
		for mpropdef in mpropdefs do
			if mpropdef isa MMethodDef and mpropdef.is_before_all then
				res.add mpropdef
			end
		end
		var in_hierarchy = self.in_hierarchy
		if in_hierarchy == null then return res.to_a
		for mclassdef in in_hierarchy.direct_greaters do
			res.add_all mclassdef.before_all
		end
		var lin = res.to_a
		mmodule.linearize_mpropdefs(lin)
		return lin
	end

	# Methods tagged with `after` in this class definition
	private fun after: Array[MMethodDef] do
		var res = new ArraySet[MMethodDef]
		for mpropdef in mpropdefs do
			if mpropdef isa MMethodDef and mpropdef.is_after then
				res.add mpropdef
			end
		end
		var in_hierarchy = self.in_hierarchy
		if in_hierarchy == null then return res.to_a
		for mclassdef in in_hierarchy.direct_greaters do
			res.add_all mclassdef.after
		end
		var lin = res.to_a
		mmodule.linearize_mpropdefs(lin)
		return lin.reversed
	end

	# Methods tagged with `after_all` in this class definition
	private fun after_all: Array[MMethodDef] do
		var res = new ArraySet[MMethodDef]
		for mpropdef in mpropdefs do
			if mpropdef isa MMethodDef and mpropdef.is_after_all then
				res.add mpropdef
			end
		end
		var in_hierarchy = self.in_hierarchy
		if in_hierarchy == null then return res.to_a
		for mclassdef in in_hierarchy.direct_greaters do
			res.add_all mclassdef.after_all
		end
		var lin = res.to_a
		mmodule.linearize_mpropdefs(lin)
		return lin.reversed
	end
end

redef class MModule
	# Methods tagged with `before_all` at the module level (in `Sys`)
	private fun before_all: Array[MMethodDef] do
		var res = new Array[MMethodDef]
		for mmodule in in_importation.greaters do
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.name != "Sys" then continue
				for mpropdef in mclassdef.mpropdefs do
					if not mpropdef isa MMethodDef or not mpropdef.is_before_all then continue
					res.add mpropdef
				end
			end
		end
		var lin = res.to_a
		linearize_mpropdefs(lin)
		return lin
	end

	# Methods tagged with `after_all` at the module level (in `Sys`)
	private fun after_all: Array[MMethodDef] do
		var res = new Array[MMethodDef]
		for mmodule in in_importation.greaters do
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.name != "Sys" then continue
				for mpropdef in mclassdef.mpropdefs do
					if not mpropdef isa MMethodDef or not mpropdef.is_after_all then continue
					res.add mpropdef
				end
			end
		end
		var lin = res.to_a
		linearize_mpropdefs(lin)
		return lin.reversed
	end
end

redef class ModelBuilder
	# Number of test classes generated.
	var total_classes = 0

	# Number of tests generated.
	var total_tests = 0

	# Number of failed tests.
	var failed_tests = 0

	# Run NitUnit test suite for `mmodule` (if it is one).
	fun test_unit(mmodule: MModule): nullable HTMLTag do
		# is the module a test_suite?
		if not mmodule.is_test then return null
		toolcontext.info("nitunit: test-suite {mmodule}", 2)

		var tester = new NitUnitTester(self)
		var res = tester.test_module_unit(mmodule)
		return res.to_xml
	end
end
