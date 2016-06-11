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
private import annotation
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
		var before_module = mmodule.before_test
		if before_module != null then
			toolcontext.modelbuilder.total_tests += 1
			suite.before_module = new TestCase(suite, before_module, toolcontext)
		end
		# generate all test cases
		for mclassdef in mmodule.mclassdefs do
			if not mclassdef.is_test then continue
			if not suite_match_pattern(mclassdef) then continue
			toolcontext.modelbuilder.total_classes += 1
			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef isa MMethodDef or not mpropdef.is_test then continue
				if not case_match_pattern(mpropdef) then continue
				toolcontext.modelbuilder.total_tests += 1
				var test = new TestCase(suite, mpropdef, toolcontext)
				suite.add_test test
			end
		end
		# method to execute after all tests in the module
		var after_module = mmodule.after_test
		if after_module != null then
			toolcontext.modelbuilder.total_tests += 1
			suite.after_module = new TestCase(suite, after_module, toolcontext)
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
	var test_cases = new Array[TestCase]

	# Add a `TestCase` to the suite.
	fun add_test(case: TestCase) do test_cases.add case

	# Test to be executed before the whole test suite.
	var before_module: nullable TestCase = null

	# Test to be executed after the whole test suite.
	var after_module: nullable TestCase = null

	fun show_status
	do
		toolcontext.show_unit_status("Test-suite of module " + mmodule.full_name, test_cases)
	end

	# Execute the test suite
	fun run do
		show_status
		if not toolcontext.test_dir.file_exists then
			toolcontext.test_dir.mkdir
		end
		write_to_nit
		compile
		toolcontext.info("Execute test-suite {mmodule.name}", 1)
		var before_module = self.before_module
		if not before_module == null then before_module.run
		for case in test_cases do
			case.run
			toolcontext.clear_progress_bar
			toolcontext.show_unit(case)
			show_status
		end

		var after_module = self.after_module
		if not after_module == null then after_module.run

		show_status
		print ""
	end

	# Write the test unit for `self` in a nit compilable file.
	fun write_to_nit do
		var file = new Template
		file.addn "intrude import test_suite"
		file.addn "import {mmodule.name}\n"
		file.addn "var name = args.first"
		for case in test_cases do
			case.write_to_nit(file)
		end
		file.write_to_file("{test_file}.nit")
	end

	# Return the test suite in XML format compatible with Jenkins.
	# Contents depends on the `run` execution.
	fun to_xml: HTMLTag do
		var n = new HTMLTag("testsuite")
		n.attr("package", mmodule.name)
		var failure = self.failure
		if failure != null then
			var f = new HTMLTag("failure")
			f.attr("message", failure.to_s)
			n.add f
		else
			for test in test_cases do n.add test.to_xml
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
		# set test case result
		var loc = mmodule.location
		if res != 0 then
			failure = msg
			toolcontext.warning(loc, "failure", "FAILURE: {mmodule.name} (in file {file}.nit): {msg}")
			toolcontext.modelbuilder.failed_tests += 1
		end
		toolcontext.check_errors
	end

	# Error occured during test-suite compilation.
	var failure: nullable String = null
end

# A test case is a unit test considering only a `MMethodDef`.
class TestCase
	super UnitTest

	# Test suite wich `self` belongs to.
	var test_suite: TestSuite

	# Test method to be compiled and tested.
	var test_method: MMethodDef

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
			file.addn "\tvar subject = new {test_method.mclassdef.name}.nitunit"
			file.addn "\tsubject.before_test"
			file.addn "\tsubject.{name}"
			file.addn "\tsubject.after_test"
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
		real_time = clock.total

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

	redef fun xml_classname do
		var mclassdef = test_method.mclassdef
		return "nitunit." + mclassdef.mmodule.full_name + "." + mclassdef.mclass.full_name
	end

	redef fun xml_name do
		return test_method.mproperty.full_name
	end
end

redef class MMethodDef
	# TODO use annotations?

	# Is the method a test_method?
	# i.e. begins with "test_"
	private fun is_test: Bool do return name.has_prefix("test_")

	# Is the method a "before_module"?
	private fun is_before_module: Bool do return mproperty.is_toplevel and name == "before_module"

	# Is the method a "after_module"?
	private fun is_after_module: Bool do return mproperty.is_toplevel and name == "after_module"
end

redef class MClassDef
	# Is the class a TestClass?
	# i.e. is a subclass of `TestSuite`
	private fun is_test: Bool do
		var in_hierarchy = self.in_hierarchy
		if in_hierarchy == null then return false
		for sup in in_hierarchy.greaters do
			if sup.name == "TestSuite" then return true
		end
		return false
	end
end

redef class MModule
	# "before_module" method for this module.
	private fun before_test: nullable MMethodDef do
		for mclassdef in mclassdefs do
			if not mclassdef.name == "Object" then continue
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef and mpropdef.is_before_module then return mpropdef
			end
		end
		return null
	end

	# "after_module" method for this module.
	private fun after_test: nullable MMethodDef do
		for mclassdef in mclassdefs do
			if not mclassdef.name == "Object" then continue
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef and mpropdef.is_after_module then return mpropdef
			end
		end
		return null
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
		if get_mmodule_annotation("test_suite", mmodule) == null then return null
		toolcontext.info("nitunit: test-suite {mmodule}", 2)

		var tester = new NitUnitTester(self)
		var res = tester.test_module_unit(mmodule)
		return res.to_xml
	end
end
