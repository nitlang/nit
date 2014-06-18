# This file is part of the pep8analysis project (http://xymus.net/pep8/)
#
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Web version of the pep8analysis tool
#
# Takes the entire Pep/8 source code as argument and prints out the
# analysis results. The result graph will be sent to the JavaScript function
# `show_graph` with the source of the graph in Graphviz's dot.
module pep8analysis_web

import emscripten

import backbone
import ast
import model
import cfg
import flow_analysis

redef class AnalysisManager

	fun run(src: String)
	do
		var stream = new StringIStream(src)
		var ast = build_ast("web", stream)
		assert ast != null

		if failed then exit 1

		# Build program model
		var model = build_model(ast)
		if failed then exit 1

		if model.lines.is_empty then
			fatal_error( ast, "This programs appears empty" )
			exit 1
		end

		# Create CFG
		var cfg = build_cfg(model)
		if failed then exit 1

		# Run analyses

		## Reaching defs
		do_reaching_defs_analysis(cfg)

		## Range
		do_range_analysis(ast, cfg)

		## Types
		do_types_analysis(ast, cfg)

		print_notes
		if notes.is_empty then print "Success: Nothing wrong detected"

		var of = new StringOStream
		cfg.print_dot(of, true)
		of.close
		show_graph(of.to_s)

		# Ready next
		reset
		clear
	end

	fun show_graph(content: String) do "show_graph('{content.escape_to_c}');".run_js
end

class StringIStream
	super BufferedIStream

	init(str: String) do _buffer = new FlatBuffer.from(str)

	redef fun fill_buffer do end_reached = true
	redef var end_reached: Bool = false
end

redef class Object
	redef fun manager do return once new AnalysisManager
end

manager.run args.first
