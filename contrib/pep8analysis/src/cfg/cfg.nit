import cfg_base
import dot_printer
import sanity

redef class AnalysisManager
	var opt_cfg = new OptionBool("Print the CFG to \"cfg.dot\" (for debugging purposes)", "--cfg")
	var opt_cfg_long = new OptionBool("Print the long format CFG", "--cfg-long")

	var opt_cfg_inline = new OptionBool("Inline function calls in the CFG", "--inline")
	#var opt_cfg_not_inline = new OptionBool("Do not inline function calls in the CFG", "--no-inline")

	var cfg: nullable CFG = null

	redef init
	do
		super

		opts.add_option(opt_cfg)
		opts.add_option(opt_cfg_long)
		#opts.add_option(opt_cfg_not_inline)
		opts.add_option(opt_cfg_inline)
	end

	redef fun build_cfg(model)
	do
		var cfg = super
		self.cfg = cfg

		if cfg.has_function_calls then
			#if not opt_cfg_not_inline.value then
			if opt_cfg_inline.value then
				cfg.inline_functions
			else
				cfg.watchdog = 0
				var to_link = new List[BasicBlock]
				if not cfg.link_ret_to_calls(cfg.start, to_link, new List[BasicBlock], 0) then
					manager.fatal_error(model.lines.first, "failed to organize function calls")
				end
			end
		end

		if opt_cfg.value or opt_cfg_long.value then
			var of = new OFStream.open("cfg.dot")
			cfg.print_dot(of, opt_cfg_long.value)
			of.close
		end

		verify_cfg_sanity(cfg)

		return cfg
	end
end
