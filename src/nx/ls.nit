#This This file is part of NIT ( http://www.nitlanguage.org ).
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
# limitations under the License.module config

# Display Nit source files contained in a repositories.
# Based on `nitls`.
#
# see `$ nx ls`
module ls

import repo
intrude import modelbuilder

redef class NxRepo
	# List mprojects in repo.
	fun mprojects: Array[MProject] do
		var toolcontext = new ToolContext
		toolcontext.accept_no_arguments = true
		toolcontext.process_options(new Array[String])
		var model = new Model
		var mbuilder = new ModelBuilder(model, toolcontext)

		var files = new Array[String]
		var pipe = new IProcess("{toolcontext.nit_dir.to_s}/bin/nitls", dir, "-P", "-p", "-r")
		while not pipe.eof do
			var l = pipe.read_line
			if l == "" then break # last line
			l = l.substring(0,l.length-1) # strip last oef
			files.add l
		end
		pipe.close
		pipe.wait
		if pipe.status != 0 then exit 1

		for f in files do
			var mproject = mbuilder.identify_file(f)
			if mproject == null then
				toolcontext.check_errors
			end
		end
		return model.mprojects
	end

	# List mprojects files in repo.
	fun files: Array[String] do
		var files = new Array[String]
		for mproject in mprojects do
			files.add mproject.root.filepath.to_s
		end
		return files
	end
end

# List content of a repository.
# TODO pass options to nitls
class ListCmd
	super Command

	redef var name = "ls"
	redef var desc = "show repo hierarchy tree"
	redef var usage = "nx ls <repo>"

	redef fun process(argv) do
		var args = process_options(argv)
		if args.length != 1 then die
		var name = args.first
		var repo = repo(name)
		for file in repo.files do
			print file
		end
	end
end

