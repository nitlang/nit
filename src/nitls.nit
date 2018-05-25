# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Simple tool to list Nit source files
module nitls

import modelbuilder
import ordered_tree
import console

class ProjTree
	super OrderedTree[MConcern]

	var opt_paths = false
	var tc: ToolContext

	redef fun display(o)
	do
		if o isa MGroup then
			if opt_paths then
				return o.filepath.as(not null)
			else
				var d = ""
				if o.mdoc != null then
					if tc.opt_no_color.value then
						d = ": {o.mdoc.content.first}"
					else
						d = ": {o.mdoc.content.first.green}"
					end
				end
				if tc.opt_no_color.value then
					return "{o.name}{d} ({o.filepath.to_s})"
				else
					return "{o.name}{d} ({o.filepath.yellow})"
				end
			end
		else if o isa MModule then
			if opt_paths then
				return o.filepath.as(not null)
			else
				var d = ""
				var dd = ""
				if o.mdoc != null then
					if tc.opt_no_color.value then
						d = ": {o.mdoc.content.first}"
					else
						d = ": {o.mdoc.content.first.green}"
					end
				end
				if not o.in_importation.direct_greaters.is_empty then
					var ms = new Array[String]
					for m in o.in_importation.direct_greaters do
						if m.mgroup.mpackage == o.mgroup.mpackage then
							ms.add m.name
						else
							ms.add m.full_name
						end
					end
					if tc.opt_no_color.value then
						dd = " ({ms.join(" ")})"
					else
						dd = " ({ms.join(" ")})".light_gray
					end
				end
				if tc.opt_no_color.value then
					return "{o.name.bold}{d} ({o.filepath.to_s}){dd}"
				else
					return "{o.name.bold}{d} ({o.filepath.yellow}){dd}"
				end
			end
		else
			abort
		end
	end
end

var tc = new ToolContext

var opt_keep = new OptionBool("Ignore errors and files that are not a Nit source file", "-k", "--keep")
var opt_recursive = new OptionBool("Process directories recursively", "-r", "--recursive")
var opt_tree = new OptionBool("List source files in their groups and packages", "-t", "--tree")
var opt_source = new OptionBool("List source files in a flat list", "-s", "--source")
var opt_package = new OptionBool("List packages in a flat list (default)", "-P", "--package")
var opt_depends = new OptionBool("List dependencies of given modules", "-d", "--depends")
var opt_make = new OptionBool("List dependencies suitable for a rule in a Makefile (alias for -d, -p and -s)", "-M")
var opt_paths = new OptionBool("List only path (instead of name + path)", "-p", "--path-only")

tc.option_context.add_option(opt_keep, opt_recursive, opt_tree, opt_source, opt_package, opt_depends, opt_paths, opt_make)
tc.tooldescription = "Usage: nitls [OPTION]... <file.nit|directory>...\nLists the packages and/or paths of Nit sources files."
tc.accept_no_arguments = true
tc.process_options(args)

if opt_make.value then
	opt_depends.value = true
	opt_paths.value = true
	opt_source.value = true
end

var sum = opt_tree.value.to_i + opt_source.value.to_i + opt_package.value.to_i
if sum > 1 then
	print "Error: options --tree, --source, and --package are exclusive."
	print tc.tooldescription
	exit 1
end
if sum == 0 then opt_package.value = true
tc.keep_going = opt_keep.value

var model = new Model
var mb = new ModelBuilder(model, tc)

if tc.option_context.rest.is_empty then tc.option_context.rest.add "."
var files
if opt_recursive.value then
	files = new Array[String]
	for d in tc.option_context.rest do
		var pipe = new ProcessReader("find", d, "-name", "*.nit")
		while not pipe.eof do
			var l = pipe.read_line
			if l == "" then break # last line
			files.add l
		end
		pipe.close
		pipe.wait
		if pipe.status != 0 and not opt_keep.value then exit 1
	end
else
	files = tc.option_context.rest
end

if sum == 0 then
	# If one of the file is a group, default is `opt_tree` instead of `opt_package`
	for a in files do
		var g = mb.identify_group(a)
		if g != null then
			opt_tree.value = true
			opt_package.value = false
			break
		end
	end
end

var mmodules = mb.scan_full(files)

# Load modules to get more informations
for mmodule in mmodules do
	if not opt_paths.value or opt_depends.value then
		var ast = mmodule.parse(mb)
		if ast != null and opt_depends.value then
			mb.build_module_importation(ast)
		end
	end
end
#tc.check_errors

if opt_depends.value then
	# Extends the list of module with the loaded ones
	mmodules = mb.parsed_modules.to_a
end

var ot = new ProjTree(tc)
if opt_tree.value then
	ot.opt_paths = opt_paths.value
	var mgroups = new HashSet[MGroup]
	for mp in mmodules do
		var pa = mp.mgroup
		while pa != null and not pa.is_interesting do pa = pa.parent
		ot.add(pa, mp)
		while pa != null do
			mgroups.add pa
			pa = pa.parent
		end
	end
	for g in mgroups do
		var pa = g.parent
		if g.is_interesting then
			ot.add(pa, g)
		end
	end
	ot.sort_with(alpha_comparator)
	ot.write_to(stdout)
end

if opt_source.value then
	alpha_comparator.sort(mmodules)
	for mp in mmodules do
		if opt_make.value then
			print mp.filepath.escape_to_mk
		else if opt_paths.value then
			print mp.filepath.as(not null)
		else
			print "{mp.mgroup.full_name}{ot.display(mp)}"
		end
	end
end

if opt_package.value then
	var mpackages = new Array[MPackage]
	for m in mmodules do
		var p = m.mgroup.mpackage
		if mpackages.has(p) then continue
		mpackages.add p
	end

	alpha_comparator.sort(mpackages)
	for p in mpackages do
		var g = p.root.as(not null)
		var path = g.filepath.as(not null)
		if opt_paths.value then
			print path
		else
			var d = ""
			var md = g.mdoc_or_fallback
			if md != null then
				if tc.opt_no_color.value then
					d = ": {md.content.first}"
				else
					d = ": {md.content.first.green}"
				end
			end
			if tc.opt_no_color.value then
				print "{g.name}{d} ({path})"
			else
				print "{g.name}{d} ({path.yellow})"
			end
		end
	end
end
