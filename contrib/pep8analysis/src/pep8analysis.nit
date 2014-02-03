module pep8analysis

import backbone
import ast
import model
import cfg
import flow_analysis

redef class AnalysisManager
	var opt_help = new OptionBool("Display this help message", "--help","-h")
	var opt_quiet = new OptionBool("Do not show notes", "--quiet","-q")
	fun quiet: Bool do return opt_quiet.value
	fun verbose: Bool do return not opt_quiet.value

	var opt_output = new OptionString("Output directory", "--output", "-o")

	redef init
	do
		super

		opts.add_option(opt_help)
		opts.add_option(opt_quiet)
		opts.add_option(opt_output)
	end

	fun run
	do
		opts.parse(args)
		var files = opts.rest

		if files.is_empty or opt_help.value then
			print "Usage: {sys.program_name} [options] file.pep [other_file.pep [...]]"
			print "Options:"
			opts.usage
			return
		end

		var dir = opt_output.value
		if dir == null then dir = "out"
		if not dir.file_exists then dir.mkdir

		# Parsing
		for filename in files do
			reset # noter

			if verbose then print "Analyzing {filename}"
			if not filename.file_exists then
					print "Target file \"{filename}\" does not exist."
					exit 1
			end
			var ast = build_ast( filename )
			assert ast != null

			if failed then continue

			# Build program model
			var model = build_model(ast)

			if failed then continue

			if model.lines.is_empty then
				fatal_error( ast, "This programs appears empty" )
				continue
			end

			# Create CFG
			var cfg = build_cfg(model)

			if failed then continue

			# Run analyses

			## Reaching defs
			do_reaching_defs_analysis(cfg)

			## Range
			do_range_analysis(ast, cfg)

			## Types
			do_types_analysis(ast, cfg)

			# Print results
			var of = new OFStream.open("{dir}/{filename.replace("/","-").replace(".pep",".dot")}")
			cfg.print_dot(of, true)
			of.close
		end
		if not opt_quiet.value then
			print_notes
		end
	end
end

redef class Object
	redef fun manager do return once new AnalysisManager
end

manager.run
