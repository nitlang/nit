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

		# Ready next
		reset
		clear
	end
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
