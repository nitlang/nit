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

# Program to extract and execute unit tests from nit source files
module nitunit

import modelize_property
intrude import markdown
import parser_util

# Extractor, Executor an Reporter for the tests in a module
class NitUnitExecutor
	super Doc2Mdwn

	# The name of the module to import
	var modname: String

	# The prefix of the generated Nit source-file
	var prefix: String

	# The XML node associated to the module
	var testsuite: HTMLTag

	# Initialize a new e
	init(toolcontext: ToolContext, prefix: String, modname: String, testsuite: HTMLTag)
	do
		super(toolcontext)
		self.prefix = prefix
		self.modname = modname
		self.testsuite = testsuite
	end

	# All blocks of code from a same `ADoc`
	var block = new Array[String]

	redef fun process_code(n: HTMLTag, text: String)
	do
		# Try to parse it
		var ast = toolcontext.parse_something(text)

		# We want executable code
		if not (ast isa AModule or ast isa ABlockExpr or ast isa AExpr) then return

		# Search `assert` in the AST
		var v = new SearchAssertVisitor
		v.enter_visit(ast)
		if not v.foundit then return

		# Add it to the file
		block.add(text)
	end

	# used to generate distinct names
	var cpt = 0

	# The entry point for a new `ndoc` node
	# Fill the prepated `tc` (testcase) XTM node
	fun extract(ndoc: ADoc, tc: HTMLTag)
	do
		block.clear

		work(ndoc)

		if block.is_empty then return

		cpt += 1
		var file = "{prefix}{cpt}.nit"

		toolcontext.info("Execute {tc.attrs["classname"]}.{tc.attrs["name"]} in {file}", 2)

		var dir = file.dirname
		if dir != "" then dir.mkdir
		var f
		f = new OFStream.open(file)
		f.write("# GENERATED FILE\n")
		f.write("# Example extracted from a documentation\n")
		var modname = self.modname
		f.write("import {modname}\n")
		f.write("\n")
		for text in block do
			f.write(text)
		end
		f.close

		var cmd = "../bin/nitg --no-color '{file}' -I . >'{file}.out1' 2>&1 </dev/null -o '{file}.bin'"
		var res = sys.system(cmd)
		var res2 = 0
		if res == 0 then
			res2 = sys.system("./{file}.bin >>'{file}.out1' 2>&1 </dev/null")
		end

		var msg
		f = new IFStream.open("{file}.out1")
		var n2
		n2 = new HTMLTag("system-err")
		tc.add n2
		msg = f.read_all
		f.close

		n2 = new HTMLTag("system-out")
		tc.add n2
		for text in block do n2.append(text)


		if res != 0 then
			var ne = new HTMLTag("failure")
			ne.attr("message", msg)
			tc.add ne
			toolcontext.warning(ndoc.location, "FAILURE: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
		else if res2 != 0 then
			var ne = new HTMLTag("error")
			ne.attr("message", msg)
			tc.add ne
			toolcontext.warning(ndoc.location, "ERROR: {tc.attrs["classname"]}.{tc.attrs["name"]} (in {file}): {msg}")
		end
		toolcontext.check_errors

		testsuite.add(tc)
	end
end

class SearchAssertVisitor
	super Visitor
	var foundit = false
	redef fun visit(node)
	do
		if foundit then
			return
		else if node isa AAssertExpr then
			foundit = true
			return
		else
			node.visit_all(self)
		end
	end
end

redef class ModelBuilder
	fun test_markdown(mmodule: MModule): HTMLTag
	do
		var ts = new HTMLTag("testsuite")
		toolcontext.info("nitunit: {mmodule}", 2)
		if not mmodule2nmodule.has_key(mmodule) then return ts

		var nmodule = mmodule2nmodule[mmodule]
		assert nmodule != null

		# what module to import in the unit test.
		# try to detect the main module of the project
		# TODO do things correctly once the importation of arbitraty nested module is legal
		var o = mmodule
		var g = o.mgroup
		if g != null then
			o = get_mmodule_by_name(nmodule, mmodule, g.mproject.name).as(not null)
		end

		ts.attr("package", mmodule.full_name)

		var prefix = toolcontext.opt_dir.value
		if prefix == null then prefix = ".nitunit"
		prefix = prefix.join_path(mmodule.to_s)
		var d2m = new NitUnitExecutor(toolcontext, prefix, o.name, ts)

		var tc

		do
			var nmoduledecl = nmodule.n_moduledecl
			if nmoduledecl == null then break label x
			var ndoc = nmoduledecl.n_doc
			if ndoc == null then break label x
			tc = new HTMLTag("testcase")
			# NOTE: jenkins expects a '.' in the classname attr
			tc.attr("classname", mmodule.full_name + ".<module>")
			tc.attr("name", "<module>")
			d2m.extract(ndoc, tc)
		end label x
		for nclassdef in nmodule.n_classdefs do
			var mclassdef = nclassdef.mclassdef.as(not null)
			if nclassdef isa AStdClassdef then
				var ndoc = nclassdef.n_doc
				if ndoc != null then
					tc = new HTMLTag("testcase")
					tc.attr("classname", mmodule.full_name + "." + mclassdef.mclass.full_name)
					tc.attr("name", "<class>")
					d2m.extract(ndoc, tc)
				end
			end
			for npropdef in nclassdef.n_propdefs do
				var mpropdef = npropdef.mpropdef.as(not null)
				var ndoc = npropdef.n_doc
				if ndoc != null then
					tc = new HTMLTag("testcase")
					tc.attr("classname", mmodule.full_name + "." + mclassdef.mclass.full_name)
					tc.attr("name", mpropdef.mproperty.full_name)
					d2m.extract(ndoc, tc)
				end
			end
		end

		return ts
	end
end

redef class ToolContext
	var opt_full = new OptionBool("Process also imported modules", "--full")
	var opt_output = new OptionString("Output name (default is 'nitunit.xml')", "-o", "--output")
	var opt_dir = new OptionString("Working directory (default is '.nitunit')", "--dir")
end

var toolcontext = new ToolContext

toolcontext.option_context.add_option(toolcontext.opt_full, toolcontext.opt_output, toolcontext.opt_dir)


toolcontext.process_options
var args = toolcontext.option_context.rest
if args.is_empty or toolcontext.opt_help.value then
	print "usage: nitunit [options] file.nit..."
	toolcontext.option_context.usage
	return
end

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse(args)
modelbuilder.run_phases

var page = new HTMLTag("testsuites")

if toolcontext.opt_full.value then mmodules = model.mmodules

for m in mmodules do
	page.add modelbuilder.test_markdown(m)
end

var file = toolcontext.opt_output.value
if file == null then file = "nitunit.xml"
page.save(file)
