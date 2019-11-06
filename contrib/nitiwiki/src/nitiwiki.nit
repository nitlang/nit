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

# A wiki engine based on markdown files and git.
module nitiwiki

import wiki_html
import markdown_highlight
import config

# Locate nit directory
private fun compute_nit_dir(opt_nit_dir: OptionString): String do
	# the option has precedence
	var res = opt_nit_dir.value
	if res != null then
		if not check_nit_dir(res) then
			print "Fatal Error: --nit-dir does not seem to be a valid base Nit directory: {res}"
			exit 1
		end
		return res
	end

	# then the environ variable has precedence
	res = "NIT_DIR".environ
	if not res.is_empty then
		if not check_nit_dir(res) then
			print "Fatal Error: NIT_DIR does not seem to be a valid base Nit directory: {res}"
			exit 1
		end
		return res
	end

	# find the runpath of the program from argv[0]
	res = "{sys.program_name.dirname}/.."
	if check_nit_dir(res) then return res.simplify_path

	# find the runpath of the process from /proc
	var exe = "/proc/self/exe"
	if exe.file_exists then
		res = exe.realpath
		res = res.dirname.join_path("..")
		if check_nit_dir(res) then return res.simplify_path
	end

	# search in the PATH
	var ps = "PATH".environ.split(":")
	for p in ps do
		res = p/".."
		if check_nit_dir(res) then return res.simplify_path
	end

	print "Fatal Error: Cannot locate a valid base nit directory. It is quite unexpected. Try to set the environment variable `NIT_DIR` or to use the `--nit-dir` option."
	exit 1
	abort
end

private fun check_nit_dir(res: String): Bool do
	return res.file_exists and "{res}/src/nit.nit".file_exists
end

var opt_verbose = new OptionCount("Verbose level", "-v")
var opt_config = new OptionString("Path to config.ini file", "-c", "--config")
var opt_init = new OptionBool("Initialize a new wiki in the current directory", "--init")
var opt_status = new OptionBool("Display wiki status", "--status")
var opt_render = new OptionBool("Render the out directory from markdown sources", "-r", "--render")
var opt_force = new OptionBool("Force render even if source files are unchanged", "-f", "--force")
var opt_clean = new OptionBool("Clean the output directory", "--clean")
var opt_rsync = new OptionBool("Synchronize outdir with distant wiki using rsync", "-s", "--rsync")
var opt_fetch = new OptionBool("Render local source from git repo", "--fetch")
var opt_nit_dir = new OptionString("Nit base directory", "--nit-dir")

var config = new Config
config.add_option(opt_verbose, opt_config)
config.add_option(opt_init, opt_status, opt_render, opt_force)
config.add_option(opt_clean, opt_rsync, opt_fetch, opt_nit_dir)

var usage = new Buffer
usage.append "Usage: nitiwiki [OPTION]...\n"
usage.append "A wiki engine based on markdown files and git."
config.tool_description = usage.write_to_string

config.parse_options(args)

if config.opt_help.value then
	config.usage
	exit 0
end

var config_filename = "config.ini"

# --init
if opt_init.value then
	if config_filename.file_exists then
		print "Already in a nitiwiki directory."
		exit 0
	end
	var nitiwiki_home = "{compute_nit_dir(opt_nit_dir)}/contrib/nitiwiki"
	var tpl = "{nitiwiki_home}/examples/default/"
	if not tpl.file_exists then
		print "Cannot find {tpl} files."
		print "Maybe your NIT_DIR is not set properly?"
		print "You can initialize nitiwiki manually by copying the default skeletton here."
		exit 1
	end
	sys.system "cp -R -- {tpl.escape_to_sh}/* ."
	print "Initialized new nitiwiki."
	print "Set wiki settings by editing {config_filename}."
	exit 0
end

# load config files

# --config
var config_file = opt_config.value
if config_file == null then
	config_file = config_filename
end

if not config_file.file_exists then
	print "Not in a nitiwiki directory."
	print "Use --init to initialize one here."
	exit 0
end

var wiki_config = new WikiConfig(config_file)
var wiki = new Nitiwiki(wiki_config)

# --verbose
wiki.verbose_level = opt_verbose.value

# --clean
if opt_clean.value then
	wiki.clean
end

# --fetch
if opt_fetch.value then
	wiki.fetch
end

# --render
if opt_render.value then
	wiki.parse
	# --force
	wiki.force_render = opt_force.value
	wiki.render
end

# --rsync
if opt_rsync.value then
	wiki.sync
end

# --status
if opt_status.value or
	(not opt_clean.value and
	 not opt_fetch.value and
	 not opt_render.value and
	 not opt_rsync.value) then
	wiki.parse
	wiki.status
end
