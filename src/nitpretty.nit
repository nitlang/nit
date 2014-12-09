# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# `nitpretty` is a tool able to pretty print Nit files.
#
# Usage:
#
#	nitpretty source.nit
#
# Main options:
#
# * `-o res.nit` output result into `res.nit`
# * `--diff` show diff between `source` and `res`
# * `--meld` open diff with `meld`
# * `--check` check the format of multiple source files
# * `--check --meld` perform `--check` and open `meld` for each difference
#
# ## Specification
#
# The specification of the pretty printing is described here.
#
# * Default indentation level is one `'\t'` character and
# is increased by one for each indentation level.
# * Default line max-size is 80.
#
# ### Comments
#
# There is many categories of comments:
#
# `Licence comments` are attached to the top of the file
# no blank line before, one after.
#
# ~~~nitish
# # This is a licence comment
#
# # Documentation for module `foo`
# module foo
# ~~~
#
# `ADoc` are documentation comments attached to a `AModule`, `AClassdef`, `APropdef`.
#
# They are printed before the definition with a blank line before and no after
# at the same indentation level than the definition.
#
# ~~~nitish
# # Documentation for module `foo`
# module foo
#
# # Documentation for class `Bar`
# class Bar
#      # Documentation for method `baz`
#      fun baz do end
# end
# ~~~
#
# `Block comments` are comments composed of one or more line rattached to nothing.
# They are displayed with one blank line before and after at current indent level.
#
# ~~~nitish
# <blank>
# # block
# # comment
# <blank>
# ~~~
#
# `Attached comments` are comments attached to a production.
# They are printed as this.
#
# ~~~nitish
# fun foo do # attached comment
# end
# ~~~
#
# `nitpretty` automatically remove multiple blanks between comments:
#
# ~~~nitish
# # Licence
# # ...
# <blank>
# # Block comment
# ~~~
#
# ### Inlining
#
# Productions are automatically inlined when possible.
#
# Conditions:
#
# * the production must be syntactically inlinable
# * the inlined production length is less than `PrettyPrinterVisitor::max-size`
# * the production do not contains any comments
#
# ### Modules
#
# * There is a blank between the module declaration and its imports
# * There is no blank between imports and only one after
# * There is a blank between each extern block definition
# * There is a blank between each class definition
# * There is no blank line at the end of the module
#
# ~~~nitish
# # Documentation for module `foo`
# module foo
#
# import a
# # import b
# import c
#
# # Documentation for class `Bar`
# class Bar end
#
# class Baz end # not a `ADoc` comment
# ~~~
#
#
# ### Classes
#
# * There is no blank between the class definition and its super-classes declarations
# * There is no blank between two inlined property definition
# * There is a blank between each block definition
# * There no blank line at the end of the class definition
#
# ~~~nitish
# # Documentation for class `Bar`
# class Bar end
#
# class Baz
#     super Bar
#
#      fun a is abstract
#      private fun b do end
#
#      fun c do
#           # ...
#      end
# end
# ~~~
#
# Generic types have no space after or before brackets and are separated by a comma and a space:
#
# ~~~nitish
# class A[E: Type1, F: Type1] end
# ~~~
#
# ### Blocks
#
# * Inlined productions have no blank lines between them
# * Block productions have a blank before and after
#
# ~~~nitish
# var a = 10
# var b = 0
#
# if a > b then
#      # is positive
#      print "positive"
# end
#
# print "end"
# ~~~
#
# ### Calls and Binary Ops
#
# Arguments are always printed separated with a comma and a space:
#
# ~~~nitish
# foo(a, b, c)
# ~~~
#
# Binary ops are always printed wrapped with spaces:
#
# ~~~nitish
# var c = 1 + 2
# ~~~
#
# Calls and binary ops can be splitted to fit the `max-size` constraint.
# Breaking priority is given to arguments declaration after the comma.
#
# ~~~nitish
# return foo("aaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbb",
#     "cccccccccccccccccccccccccc")
# ~~~
#
# Binary ops can also be broken to fit the `max-size` limit:
#
# ~~~nitish
# return "aaaaaaaaaaaaaaaaaaaaaaaaaa" + "bbbbbbbbbbbbbbbbbbbbbbbbbbb" +
#     "cccccccccccccccccccccccccc"
# ~~~
module nitpretty

import pretty

redef class ToolContext
	var opt_dir = new OptionString("Working directory (default is '.nitpretty')", "--dir")

	var opt_output = new OptionString("Output name (default is pretty.nit)", "-o",
	   "--output")

	var opt_diff = new OptionBool("Show diff between source and output", "--diff")

	var opt_meld = new OptionBool("Show diff between source and output using meld",
	   "--meld")

	var opt_check = new OptionBool("Check format of Nit source files", "--check")
end

# Return result from diff between `file1` and `file2`.
private fun diff(file1, file2: String): String do
	var p = new IProcess("diff", "-u", file1, file2)
	var res = p.read_all
	p.wait
	p.close
	return res
end

# process options
var toolcontext = new ToolContext

toolcontext.option_context.
   add_option(toolcontext.opt_dir, toolcontext.opt_output, toolcontext.opt_diff,
   toolcontext.opt_meld, toolcontext.opt_check)

toolcontext.tooldescription = "Usage: nitpretty [OPTION]... <file.nit>\n" +
	"Pretty print Nit code from Nit source files."

toolcontext.process_options args
var arguments = toolcontext.option_context.rest
# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse(arguments)
mbuilder.run_phases

if mmodules.is_empty then
	print "Error: no module to pretty print"
	return
end

if not toolcontext.opt_check.value and mmodules.length > 1 then
	print "Error: only --check option allow multiple modules"
	return
end

var dir = toolcontext.opt_dir.value or else ".nitpretty"
if not dir.file_exists then dir.mkdir
var v = new PrettyPrinterVisitor

for mmodule in mmodules do
	if not mbuilder.mmodule2nmodule.has_key(mmodule) then
		print " Error: no source file for module {mmodule}"
		return
	end

	var nmodule = mbuilder.mmodule2nmodule[mmodule]
	var file = "{dir}/{mmodule.name}.nit"
	var tpl = v.pretty_nmodule(nmodule)
	tpl.write_to_file file

	if toolcontext.opt_check.value then
		var res = diff(nmodule.location.file.filename, file)

		if not res.is_empty then
			print "Wrong formating for module {nmodule.location.file.filename}"
			toolcontext.info(res, 1)

			if toolcontext.opt_meld.value then
				sys.system "meld {nmodule.location.file.filename} {file}"
			end
		else
			toolcontext.info("[OK] {nmodule.location.file.filename}", 1)
		end
	else
		# write to file
		var out = toolcontext.opt_output.value
		if out != null then sys.system "cp {file} {out}"

		# open in meld
		if toolcontext.opt_meld.value then
			sys.system "meld {arguments.first} {file}"
			return
		end

		# show diff
		if toolcontext.opt_diff.value then
			var res = diff(arguments.first, file)
			if not res.is_empty then print res
			return
		end

		# show pretty
		if not toolcontext.opt_quiet.value then tpl.write_to sys.stdout
	end
end
