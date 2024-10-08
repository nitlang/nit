#!/usr/bin/env nit

# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Smart file sorting using folder names to sort files. Has built in support for
# a distributed or multi-disk setup.
module sort_downloads

# TODO sort patterns by longer first
# TODO allow for config overriding using `opts`

import opts

`{
	#include <errno.h>
	#include <string.h>
`}

# Local config
# Modify these according to your needs. It is also possible to have alternates
# using class refinment and a main calling to super.
class Config
	# Is it configured? Change to "true" when the configuration has been
	# adapted to your needs and setup
	var is_configured = false

	# Source directory where are the files to be sorted.
	var source_dir = "~/Downloads/"

	# Destination super directory where classification directories will be
	# created to hold files.
	var dest_dir = "~/Videos/"

	# Super directories with wanted folder names, which will be used to sort
	# the files (only their name are used, the files won't be copied there).
	var regex_source_dirs = ["~/Videos/"]

	# Will only sort files older than the number of `elapsed_days`.
	var elapsed_days = 7
end

redef class String
	fun check_file_existence: Bool
	do
		if not file_exists then
			print "config error: file \"{self}\" does not exists."
			return true
		else return false
	end

	# Returns null on success
	fun file_rename_to(dest: String): nullable String import String.to_cstring,
	CString.to_s, String.as nullable `{
		int res = rename(String_to_cstring(self), String_to_cstring(dest));
		if (res == 0) return null_String();
		return String_as_nullable(CString_to_s(strerror(errno)));
	`}

	# Replace `~` by the path to the home diretory
	fun replace_tilde: String
	do
		var match = search("~/")
		if match != null and match.from == 0 then
			var home_folder = "HOME".environ
			return "{home_folder}/{substring(match.after, length)}"
		else return self
	end
end

# Keeps track of the real directory name associated to this pattern
class PatternWithDir
	super BM_Pattern

	var dir: String is noinit

	init with_dir(motif, dir: String)
	do
		init(motif)
		self.dir = dir
	end
end

class XySorter
	var opts_context = new OptionContext
	var opt_help = new OptionBool("Print this help message", "-h", "--help")
	var opt_list_series = new OptionBool("Only list the folders in the regex target directories", "--list-series")
	var opt_verbose = new OptionBool("Print information about the operations", "-v", "--verbose")
	var opt_dry_run = new OptionBool("Simulate work without modifying the filesystem", "--dry-run")

	fun fill_opts_context
	do
		opts_context.add_option(opt_help, opt_list_series, opt_verbose, opt_dry_run)
	end

	fun run(source_dir, dest_dir: String, regex_source_dirs: Sequence[String], older_than: TimeT )
	do
		# manage command line options
		fill_opts_context
		opts_context.parse(args)
		if not opts_context.rest.is_empty or opt_help.value then
			print "Usage: {sys.program_name} [Options]"
			print "Options:"
			opts_context.usage

			if opt_help.value then exit 0
			exit 1
		end

		# replace `~` by home path
		source_dir = source_dir.replace_tilde
		dest_dir = dest_dir.replace_tilde
		for f in [0..regex_source_dirs.length[ do
			regex_source_dirs[f] = regex_source_dirs[f].replace_tilde
		end

		# check config validity
		var failed = false
		failed = failed or source_dir.check_file_existence
		failed = failed or dest_dir.check_file_existence
		for dir in regex_source_dirs do failed = failed or dir.check_file_existence
		if failed then exit 1

		# collect possible series dir names
		var dirs_name = new HashSet[String]
		for dir in regex_source_dirs do for file in dir.files do dirs_name.add(file)

		# if asked only to print ou the list of series, do so and quit
		if opt_list_series.value then
			print dirs_name.join(", ")
			return
		end

		# build regexxes
		var patterns = new HashSet[PatternWithDir]
		for dir in dirs_name do
			patterns.add new PatternWithDir.with_dir(dir, dir)
			patterns.add new PatternWithDir.with_dir(dir.replace(' ', "."), dir)
			patterns.add new PatternWithDir.with_dir(dir.replace(' ', "_"), dir)
		end

		# compare source files with patterns and sort
		for file in source_dir.files do
			var full_source = source_dir + "/" + file
			var stat = full_source.file_lstat

			# if not a file or dir, skip
			if not stat.is_reg and not stat.is_dir then continue

			# is it old enough?
			var time = new TimeT.from_i(stat.mtime)
			if time.to_i > older_than.to_i then continue

			# does it fit our regexxes?
			var move_to_dir: nullable String = null
			for pattern in patterns do if file.search(pattern) != null then
				move_to_dir = pattern.dir
				break
			end

			# lets' move it!
			if move_to_dir != null then
				var full_dir_dest = dest_dir + "/" + move_to_dir
				var full_dest = full_dir_dest + "/" + file

				if opt_verbose.value then print "moving {full_source} -> {full_dest}"

				if not opt_dry_run.value then
					if not full_dir_dest.file_exists then full_dir_dest.mkdir

					var res = full_source.file_rename_to(full_dest)
					if res != null then
						print "Moving error: {res}"
						abort
					end
				end
			end
		end
	end
end

var config = new Config
if not config.is_configured then
	print "Not configured, make sure you modify the script and set is_configured to true"
	exit 1
end
var sorter = new XySorter

# calculate cut off time using `elapsed_days` compared to now
var now = new TimeT
var wanted_elapsed_secs = config.elapsed_days * 24 * 60 * 60
var from_time = new TimeT.from_i(now.to_i - wanted_elapsed_secs)

sorter.run(config.source_dir, config.dest_dir, config.regex_source_dirs, from_time)
