# This file is part of NIT ( https://nitlanguage.org ).
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

fun test_path(p: Path)
do
	print "* {p}"
	print "simplified: {p.simplified}"
	print "filename: {p.filename}"
	print "dir: {p.dir}"
	var e = p.exists
	print "exists: {e}"
	print "  error? {p.last_error or else "nope"}"
	var s = p.stat
	if s == null then
		print "stat: nope"
	else
		print "stat: is_dir={s.is_dir} is_reg={s.is_reg}"
	end
	print "  error? {p.last_error or else "nope"}"
	var stream = p.open_ro
	print "open: {stream.path or else "-"}"
	print "  error? {p.last_error or else "nope"}"
	print "first_line: {stream.read_line}"
	stream.close
	print "  error? {stream.last_error or else "nope"}"
	var txt = p.read_all
	print "content: {txt.length} chars"
	print "  error? {p.last_error or else "nope"}"
	var bin = p.read_all_bytes
	print "content: {bin.length} bytes"
	print "  error? {p.last_error or else "nope"}"
	var lines = p.read_lines
	print "content: {lines.length} lines"
	print "  error? {p.last_error or else "nope"}"

	var files = p.files
	print "content: {files.length} files"
	print "  error? {p.last_error or else "nope"}"
end

if args.length != 1 then
	print "require the name of the output directory"
	return
end

var base = args.first
base.mkdir
test_path(base.to_path)

var f = (base/"file.txt").to_path
test_path(f)

"hello world!".write_to_file(f.to_s)
test_path(f)

var dn = base / "dir"
var d = dn.to_path
dn.mkdir
"goodby world!".write_to_file(dn/"file.txt")
test_path(d)
