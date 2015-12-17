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

# A tool used to measure different aspects of the expert TOCs.

import opts

# Count the total number of line in the file.
fun count_lines(file: String): Int do
	var fr = new FileReader.open(file)
	var nb = fr.read_lines.length
	fr.close
	return nb
end

# Count the number of title line.
#
# Starting with `#`.
fun count_titles(file: String): Int do
	var fr = new FileReader.open(file)
	var nb = 0
	for line in fr.read_lines do
		if line.trim.has_prefix("#") then nb += 1
	end
	fr.close
	return nb
end

# Count the number of removed line.
#
# Starting with `~~`.
fun count_removed(file: String): Int do
	var fr = new FileReader.open(file)
	var nb = 0
	for line in fr.read_lines do
		if line.trim.has_prefix("~~") then nb += 1
	end
	fr.close
	return nb
end

# Count the number of removed line that concern private properties.
#
# Starting with `~~-`.
fun count_removed_private(file: String): Int do
	var fr = new FileReader.open(file)
	var nb = 0
	for line in fr.read_lines do
		if line.trim.has_prefix("~~-") then nb += 1
	end
	fr.close
	return nb
end

# Used to compare added/missing lines.
fun compare_lines(file1, file2: String) do
	var lines1 = new HashSet[String]
	var fr = new FileReader.open(file1)
	for line in fr.read_lines do lines1.add line.trim
	fr.close

	var lines2 = new HashSet[String]
	fr = new FileReader.open(file2)
	for line in fr.read_lines do lines2.add line.trim
	fr.close

	for line in lines1 do
		if line.has_prefix("~~") then line = line.substring(2, line.length - 4)
		if not lines2.has(line) then print "+ {line}"
	end
	for line in lines2 do
		if not lines1.has(line) and not lines1.has("~~{line}~~") then print "- {line}"
	end
end

var opt_diff = new OptionString("File to fidd with", "--diff")

var opts = new OptionContext
opts.add_option opt_diff
opts.parse(args)
var arguments = opts.rest


if arguments.is_empty then
	print "Usage:"
	print " utils files.md..."
	sys.exit 1
else if opt_diff.value != null and arguments.length != 1 then
	print "Usage:"
	print " utils file.md --diff orig_file.md"
	sys.exit 1
end

var ofile = opt_diff.value
if ofile != null then
	var file = arguments.first
	if not file.file_exists then
		print "Error: can't access file `{file}`"
		abort
	end
	if not ofile.file_exists then
		print "Error: can't access file `{ofile}`"
		abort
	end
	print "\n# File: {file}"
	print "* lines: {count_lines(file)}"
	print "* titles: {count_titles(file)}"
	print "* removed: {count_removed(file)}"
	print "* removed private: {count_removed_private(file)}"

	compare_lines(file, ofile)
	return
end


for file in arguments do
	if not file.file_exists then
		print "Warning: can't access file `{file}`"
		continue
	end

	print "\n# File: {file}"
	print "* lines: {count_lines(file)}"
	print "* titles: {count_titles(file)}"
	print "* removed: {count_removed(file)}"
	print "* removed private: {count_removed_private(file)}"
end
