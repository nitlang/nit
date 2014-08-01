# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Tool to extract PNGs of different resolution from a SVG file
module svg_to_icons

import opts

redef class Int
	fun android_path: String do return "drawable-{resolution_name}/icon.png"

	fun resolution_name: String
	do
		if self == 36 then return "ldpi"
		if self == 48 then return "mdpi"
		if self == 72 then return "hdpi"
		if self == 96 then return "xhdpi"
		if self == 144 then return "xxhdpi"
		if self == 192 then return "xxxhdpi"
		abort
	end
end

var opt_out = new OptionString("Where to output PNG files", "--out", "-o")
var opt_id = new OptionString("Extract only object with given ID", "--id", "-i")
var opt_android = new OptionBool("Generate in the file structure for Android", "--android", "-a")
var opt_large = new OptionBool("Generate large icons (512 and 1024 px)", "--large", "-l")
var opt_help = new OptionBool("Print this help message", "--help", "-h")

var opt_context = new OptionContext
opt_context.add_option(opt_out, opt_id, opt_android, opt_large, opt_help)

opt_context.parse(args)
var rest = opt_context.rest
var errors = opt_context.errors
if rest.length != 1 and not opt_help.value then errors.add "You must specify one source drawing file"
if opt_android.value == opt_large.value then errors.add "You must specify a single format (--android or --large)"
if not errors.is_empty or opt_help.value then
	print errors.join("\n")
	print "Usage: svg_to_icons [Options] drawing.svg"
	print "Options:"
	opt_context.usage
	exit 1
end

if not "inkscape".program_is_in_path then
	print "This tool needs the external program `inkscape`, make sure it is installed and in your PATH."
	exit 1
end

var drawing = rest.first
if not drawing.file_exists then
	stderr.write "Source drawing file '{drawing}' does not exist."
	exit 1
end

var out_path = opt_out.value
if out_path == null then out_path = "."
if not out_path.file_exists then
	stderr.write "Output dir '{out_path}' does not exist (use --out)\n"
	exit 1
end

var id = opt_id.value

var resolutions
if opt_android.value then
	resolutions = [36, 48, 72, 96, 144, 192]
else if opt_large.value then
	resolutions = [512, 1024]
else abort

for wh in resolutions do
	var png_path
	if opt_android.value then
		png_path = "{out_path}/{wh.android_path}"
		var dir = png_path.dirname
		if not dir.file_exists then dir.mkdir
	else
		png_path = "{out_path}/{wh}.png"
	end

	var prog = "inkscape"
	var prog_args = ["--without-gui", drawing,
		"-w={wh}", "-h={wh}", "--export-png={png_path}"]
	if id != null then prog_args.add "--export-id={id}"

	var proc = new Process.from_a(prog, prog_args)
	proc.wait
end
