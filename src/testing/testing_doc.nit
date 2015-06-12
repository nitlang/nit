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

private import parser_util
import testing_base
import markdown
import html

# Extractor, Executor and Reporter for the tests in a module
class NitUnitExecutor
	super HTMLDecorator

	# Toolcontext used to parse Nit code blocks.
	var toolcontext: ToolContext

	# The prefix of the generated Nit source-file
	var prefix: String

	# The module to import, if any
	var mmodule: nullable MModule

	# The XML node associated to the module
	var testsuite: HTMLTag

	# All blocks of code from a same `ADoc`
	var blocks = new Array[Buffer]

	# All failures from a same `ADoc`
	var failures = new Array[String]

	# Markdown processor used to parse markdown comments and extract code.
	var mdproc = new MarkdownProcessor

	init do
		mdproc.emitter.decorator = new NitunitDecorator(self)
	end

	# The associated documentation object
	var mdoc: nullable MDoc = null

	# used to generate distinct names
	var cpt = 0

	# The entry point for a new `ndoc` node
	# Fill `docunits` with new discovered unit of tests.
	#
	# `tc` (testcase) is the pre-filled XML node
	fun extract(mdoc: MDoc, tc: HTMLTag)
	do
		blocks.clear
		failures.clear

		self.mdoc = mdoc

		# Populate `blocks` from the markdown decorator
		mdproc.process(mdoc.content.join("\n"))
		if blocks.is_empty then return

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

		for block in blocks do
			docunits.add new DocUnit(mdoc, tc, block.write_to_string)
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
				toolcontext.warning(du.mdoc.location, "error", "ERROR: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
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
			toolcontext.warning(du.mdoc.location, "failure", "FAILURE: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
			toolcontext.modelbuilder.failed_entities += 1
		else if res2 != 0 then
			var ne = new HTMLTag("error")
			ne.attr("message", msg)
			tc.add ne
			toolcontext.warning(du.mdoc.location, "error", "ERROR: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
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
		if mmodule != null then
			f.write("import {mmodule.name}\n")
		end
		f.write("\n")
		return f
	end

	# Compile an unit file and return the compiler return code
	#
	# Can terminate the program if the compiler is not found
	private fun compile_unitfile(file: String): Int
	do
		var nit_dir = toolcontext.nit_dir
		var nitc = nit_dir/"bin/nitc"
		if not nitc.file_exists then
			toolcontext.error(null, "Error: cannot find nitc. Set envvar NIT_DIR.")
			toolcontext.check_errors
		end
		var opts = new Array[String]
		if mmodule != null then
			opts.add "-I {mmodule.location.file.filename.dirname}"
		end
		var cmd = "{nitc} --ignore-visibility --no-color '{file}' {opts.join(" ")} >'{file}.out1' 2>&1 </dev/null -o '{file}.bin'"
		var res = sys.system(cmd)
		return res
	end
end

private class NitunitDecorator
	super HTMLDecorator

	var executor: NitUnitExecutor

	redef fun add_code(v, block) do
		var code = code_from_block(block)
		var meta = "nit"
		if block isa BlockFence and block.meta != null then
			meta = block.meta.to_s
		end
		# Do not try to test non-nit code.
		if meta != "nit" then return
		# Try to parse code blocks
		var ast = executor.toolcontext.parse_something(code)

		# Skip pure comments
		if ast isa TComment then return

		# We want executable code
		if not (ast isa AModule or ast isa ABlockExpr or ast isa AExpr) then
			var message = ""
			if ast isa AError then message = " At {ast.location}: {ast.message}."
			executor.toolcontext.warning(executor.mdoc.location, "invalid-block", "Error: there is a block of invalid Nit code, thus not considered a nitunit. To suppress this warning, enclose the block with a fence tagged `nitish` or `raw` (see `man nitdoc`).{message}")
			executor.failures.add("{executor.mdoc.location}: Invalid block of code.{message}")
			return
		end

		# Create a first block
		# Or create a new block for modules that are more than a main part
		if executor.blocks.is_empty or ast isa AModule then
			executor.blocks.add(new Buffer)
		end

		# Add it to the file
		executor.blocks.last.append code
	end

	# Extracts code as String from a `BlockCode`.
	fun code_from_block(block: BlockCode): String do
		var infence = block isa BlockFence
		var text = new FlatBuffer
		var line = block.block.first_line
		while line != null do
			if not line.is_empty then
				var str = line.value
				if not infence and str.has_prefix("    ") then
					text.append str.substring(4, str.length - line.trailing)
				else
					text.append str
				end
			end
			text.append "\n"
			line = line.next
		end
		return text.write_to_string
	end
end

# A unit-test to run
class DocUnit
	# The doc that contains self
	var mdoc: MDoc

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
			d2m.extract(ndoc.to_mdoc, tc)
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
					d2m.extract(ndoc.to_mdoc, tc)
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
					d2m.extract(ndoc.to_mdoc, tc)
				end
			end
		end

		d2m.run_tests

		return ts
	end

	# Extracts and executes all the docunits in the readme of the `mgroup`
	# Returns a JUnit-compatible `<testsuite>` XML element that contains the results of the executions.
	fun test_group(mgroup: MGroup): HTMLTag
	do
		var ts = new HTMLTag("testsuite")
		toolcontext.info("nitunit: doc-unit group {mgroup}", 2)

		# usually, only the default module must be imported in the unit test.
		var o = mgroup.default_mmodule

		ts.attr("package", mgroup.full_name)

		var prefix = toolcontext.test_dir
		prefix = prefix.join_path(mgroup.to_s)
		var d2m = new NitUnitExecutor(toolcontext, prefix, o, ts)

		var tc

		total_entities += 1
		var mdoc = mgroup.mdoc
		if mdoc == null then return ts

		doc_entities += 1
		tc = new HTMLTag("testcase")
		# NOTE: jenkins expects a '.' in the classname attr
		tc.attr("classname", "nitunit." + mgroup.full_name)
		tc.attr("name", "<group>")
		d2m.extract(mdoc, tc)

		d2m.run_tests

		return ts
	end

	# Test a document object unrelated to a Nit entity
	fun test_mdoc(mdoc: MDoc): HTMLTag
	do
		var ts = new HTMLTag("testsuite")
		var file = mdoc.location.to_s

		toolcontext.info("nitunit: doc-unit file {file}", 2)

		ts.attr("package", file)

		var prefix = toolcontext.test_dir / "file"
		var d2m = new NitUnitExecutor(toolcontext, prefix, null, ts)

		var tc

		total_entities += 1
		doc_entities += 1

		tc = new HTMLTag("testcase")
		# NOTE: jenkins expects a '.' in the classname attr
		tc.attr("classname", "nitunit.<file>")
		tc.attr("name", file)

		d2m.extract(mdoc, tc)
		d2m.run_tests

		return ts
	end
end
