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

# Testing from code comments.
module testing_doc

import testing_base
intrude import docdown

# Extractor, Executor and Reporter for the tests in a module
class NitUnitExecutor
	super Doc2Mdwn

	# The prefix of the generated Nit source-file
	var prefix: String

	# The module to import
	var mmodule: MModule

	# The XML node associated to the module
	var testsuite: HTMLTag

	# All blocks of code from a same `ADoc`
	var blocks = new Array[Array[String]]

	# All failures from a same `ADoc`
	var failures = new Array[String]

	redef fun process_code(n: HTMLTag, text: String, tag: nullable String)
	do
		# Skip non-blocks
		if n.tag != "pre" then return

		# Skip strict non-nit
		if tag != null and tag != "nit" and tag != "" then
			return
		end

		# Try to parse it
		var ast = toolcontext.parse_something(text)

		# Skip pure comments
		if ast isa TComment then return

		# We want executable code
		if not (ast isa AModule or ast isa ABlockExpr or ast isa AExpr) then
			var message = ""
			if ast isa AError then message = " At {ast.location}: {ast.message}."
			toolcontext.warning(ndoc.location, "invalid-block", "Error: There is a block of code that is not valid Nit, thus not considered a nitunit. To suppress this warning, enclose the block with a fence tagged `nitish` or `raw` (see `man nitdoc`).{message}")
			failures.add("{ndoc.location}: Invalid block of code.{message}")
			return
		end

		# Create a first block
		# Or create a new block for modules that are more than a main part
		if blocks.is_empty or ast isa AModule then
			blocks.add(new Array[String])
		end

		# Add it to the file
		blocks.last.add(text)
	end

	# The associated node to localize warnings
	var ndoc: nullable ADoc = null

	# used to generate distinct names
	var cpt = 0

	# The entry point for a new `ndoc` node
	# Fill `docunits` with new discovered unit of tests.
	#
	# `tc` (testcase) is the pre-filled XML node
	fun extract(ndoc: ADoc, tc: HTMLTag)
	do
		blocks.clear
		failures.clear

		self.ndoc = ndoc

		work(ndoc.to_mdoc)

		toolcontext.check_errors

		if not failures.is_empty then
			for msg in failures do
				var ne = new HTMLTag("failure")
				ne.attr("message", msg)
				tc.add ne
				toolcontext.modelbuilder.failed_entities += 1
			end
			if blocks.is_empty then testsuite.add(tc)
		end

		if blocks.is_empty then return

		for block in blocks do
			docunits.add new DocUnit(ndoc, tc, block.join(""))
		end
	end

	# All extracted docunits
	var docunits = new Array[DocUnit]

	# Execute all the docunits
	fun run_tests
	do
		var simple_du = new Array[DocUnit]
		for du in docunits do
			var ast = toolcontext.parse_something(du.block)
			if ast isa AExpr then
				simple_du.add du
			else
				test_single_docunit(du)
			end
		end

		test_simple_docunits(simple_du)
	end

	# Executes multiples doc-units in a shared program.
	# Used for docunits simple block of code (without modules, classes, functions etc.)
	#
	# In case of compilation error, the method fallbacks to `test_single_docunit` to
	# * locate exactly the compilation problem in the problematic docunit.
	# * permit the execution of the other docunits that may be correct.
	fun test_simple_docunits(dus: Array[DocUnit])
	do
		if dus.is_empty then return

		var file = "{prefix}-0.nit"

		var dir = file.dirname
		if dir != "" then dir.mkdir
		var f
		f = create_unitfile(file)
		var i = 0
		for du in dus do

			i += 1
			f.write("fun run_{i} do\n")
			f.write("# {du.testcase.attrs["name"]}\n")
			f.write(du.block)
			f.write("end\n")
		end
		f.write("var a = args.first.to_i\n")
		for j in [1..i] do
			f.write("if a == {j} then run_{j}\n")
		end
		f.close

		if toolcontext.opt_noact.value then return

		var res = compile_unitfile(file)

		if res != 0 then
			# Compilation error.
			# Fall-back to individual modes:
			for du in dus do
				test_single_docunit(du)
			end
			return
		end

		i = 0
		for du in dus do
			var tc = du.testcase
			toolcontext.modelbuilder.unit_entities += 1
			i += 1
			toolcontext.info("Execute doc-unit {du.testcase.attrs["name"]} in {file} {i}", 1)
			var res2 = sys.system("{file.to_program_name}.bin {i} >>'{file}.out1' 2>&1 </dev/null")

			var msg
			f = new FileReader.open("{file}.out1")
			var n2
			n2 = new HTMLTag("system-err")
			tc.add n2
			msg = f.read_all
			f.close

			n2 = new HTMLTag("system-out")
			tc.add n2
			n2.append(du.block)

			if res2 != 0 then
				var ne = new HTMLTag("error")
				ne.attr("message", msg)
				tc.add ne
				toolcontext.warning(du.ndoc.location, "error", "ERROR: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
				toolcontext.modelbuilder.failed_entities += 1
			end
			toolcontext.check_errors

			testsuite.add(tc)
		end
	end

	# Executes a single doc-unit in its own program.
	# Used for docunits larger than a single block of code (with modules, classes, functions etc.)
	fun test_single_docunit(du: DocUnit)
	do
		var tc = du.testcase
		toolcontext.modelbuilder.unit_entities += 1

		cpt += 1
		var file = "{prefix}-{cpt}.nit"

		toolcontext.info("Execute doc-unit {tc.attrs["name"]} in {file}", 1)

		var f
		f = create_unitfile(file)
		f.write(du.block)
		f.close

		if toolcontext.opt_noact.value then return

		var res = compile_unitfile(file)
		var res2 = 0
		if res == 0 then
			res2 = sys.system("{file.to_program_name}.bin >>'{file}.out1' 2>&1 </dev/null")
		end

		var msg
		f = new FileReader.open("{file}.out1")
		var n2
		n2 = new HTMLTag("system-err")
		tc.add n2
		msg = f.read_all
		f.close

		n2 = new HTMLTag("system-out")
		tc.add n2
		n2.append(du.block)


		if res != 0 then
			var ne = new HTMLTag("failure")
			ne.attr("message", msg)
			tc.add ne
			toolcontext.warning(du.ndoc.location, "failure", "FAILURE: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
			toolcontext.modelbuilder.failed_entities += 1
		else if res2 != 0 then
			var ne = new HTMLTag("error")
			ne.attr("message", msg)
			tc.add ne
			toolcontext.warning(du.ndoc.location, "error", "ERROR: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
			toolcontext.modelbuilder.failed_entities += 1
		end
		toolcontext.check_errors

		testsuite.add(tc)
	end

	# Create and fill the header of a unit file `file`.
	#
	# A unit file is a Nit source file generated from one
	# or more docunits that will be compiled and executed.
	#
	# The handled on the file is returned and must be completed and closed.
	#
	# `file` should be a valid filepath for a Nit source file.
	private fun create_unitfile(file: String): Writer
	do
		var dir = file.dirname
		if dir != "" then dir.mkdir
		var f
		f = new FileWriter.open(file)
		f.write("# GENERATED FILE\n")
		f.write("# Docunits extracted from comments\n")
		f.write("import {mmodule.name}\n")
		f.write("\n")
		return f
	end

	# Compile an unit file and return the compiler return code
	#
	# Can terminate the program if the compiler is not found
	private fun compile_unitfile(file: String): Int
	do
		var nit_dir = toolcontext.nit_dir
		var nitg = nit_dir/"bin/nitg"
		if not nitg.file_exists then
			toolcontext.error(null, "Cannot find nitg. Set envvar NIT_DIR.")
			toolcontext.check_errors
		end
		var cmd = "{nitg} --ignore-visibility --no-color '{file}' -I {mmodule.location.file.filename.dirname} >'{file}.out1' 2>&1 </dev/null -o '{file}.bin'"
		var res = sys.system(cmd)
		return res
	end
end

# A unit-test to run
class DocUnit
	# The original comment node
	var ndoc: ADoc

	# The XML node that contains the information about the execution
	var testcase: HTMLTag

	# The text of the code to execute
	var block: String
end

redef class ModelBuilder
	# Total number analyzed `MEntity`
	var total_entities = 0

	# The number of `MEntity` that have some documentation
	var doc_entities = 0

	# The total number of executed docunits
	var unit_entities = 0

	# The number failed docunits
	var failed_entities = 0

	# Extracts and executes all the docunits in the `mmodule`
	# Returns a JUnit-compatible `<testsuite>` XML element that contains the results of the executions.
	fun test_markdown(mmodule: MModule): HTMLTag
	do
		var ts = new HTMLTag("testsuite")
		toolcontext.info("nitunit: doc-unit {mmodule}", 2)

		var nmodule = mmodule2node(mmodule)
		if nmodule == null then return ts

		# usualy, only the original module must be imported in the unit test.
		var o = mmodule
		var g = o.mgroup
		if g != null and g.mproject.name == "standard" then
			# except for a unit test in a module of standard
			# in this case, the whole standard must be imported
			o = get_mmodule_by_name(nmodule, g, g.mproject.name).as(not null)
		end

		ts.attr("package", mmodule.full_name)

		var prefix = toolcontext.test_dir
		prefix = prefix.join_path(mmodule.to_s)
		var d2m = new NitUnitExecutor(toolcontext, prefix, o, ts)

		var tc

		do
			total_entities += 1
			var nmoduledecl = nmodule.n_moduledecl
			if nmoduledecl == null then break label x
			var ndoc = nmoduledecl.n_doc
			if ndoc == null then break label x
			doc_entities += 1
			tc = new HTMLTag("testcase")
			# NOTE: jenkins expects a '.' in the classname attr
			tc.attr("classname", "nitunit." + mmodule.full_name + ".<module>")
			tc.attr("name", "<module>")
			d2m.extract(ndoc, tc)
		end label x
		for nclassdef in nmodule.n_classdefs do
			var mclassdef = nclassdef.mclassdef
			if mclassdef == null then continue
			if nclassdef isa AStdClassdef then
				total_entities += 1
				var ndoc = nclassdef.n_doc
				if ndoc != null then
					doc_entities += 1
					tc = new HTMLTag("testcase")
					tc.attr("classname", "nitunit." + mmodule.full_name + "." + mclassdef.mclass.full_name)
					tc.attr("name", "<class>")
					d2m.extract(ndoc, tc)
				end
			end
			for npropdef in nclassdef.n_propdefs do
				var mpropdef = npropdef.mpropdef
				if mpropdef == null then continue
				total_entities += 1
				var ndoc = npropdef.n_doc
				if ndoc != null then
					doc_entities += 1
					tc = new HTMLTag("testcase")
					tc.attr("classname", "nitunit." + mmodule.full_name + "." + mclassdef.mclass.full_name)
					tc.attr("name", mpropdef.mproperty.full_name)
					d2m.extract(ndoc, tc)
				end
			end
		end

		d2m.run_tests

		return ts
	end
end
