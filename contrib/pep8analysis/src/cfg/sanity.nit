module sanity

import cfg_base

redef class BasicBlock
	private var cfg_sanity_verified = false

	# reports data in code
	private fun verify_cfg_sanity_code(v: Noter, data_in_code: Array[ALine])
	do
		for line in lines do if line isa ADirectiveLine then
			data_in_code.add(line)
		end

		cfg_sanity_verified = true
	end

	# reports code in data
	private fun verify_cfg_sanity_data(v: Noter, dead_lines: Array[ALine])
	do
		for line in lines do if line isa AInstructionLine then
			dead_lines.add(line)
		end

		cfg_sanity_verified = true
	end
end

redef class AnalysisManager
	fun verify_cfg_sanity(cfg: CFG)
	do
		# verify executable code
		var executed_data = new Array[ALine]
		verify_cfg_sanity_recursively_code( cfg.start, executed_data )

		# verify data or dead code
		var dead_code = new Array[ALine]
		for b in cfg.blocks do if not b.cfg_sanity_verified then
			b.verify_cfg_sanity_data(self, dead_code)
		end

		group( dead_code, "unreachable instructions (dead code?)", false )
		group( executed_data, "data in program flow (missing BR?)", true )
	end

	fun verify_cfg_sanity_recursively_code(b: BasicBlock, executed_data: Array[ALine])
	do
		if b.cfg_sanity_verified then return # is code

		b.verify_cfg_sanity_code(self,executed_data)
		for s in b.successors do verify_cfg_sanity_recursively_code( s, executed_data )
	end

	private fun group(lines: Array[ALine], msg: String, error: Bool)
	do
		lines = lines.iterator.sort.to_a
		var len = lines.length
		var first: nullable ALine = null
		for i in [0..len[ do
			var line = lines[i]
			if first == null then
				first = line
			end
			if i == len-1 or line.address + line.size != lines[i+1].address then
				if error then
					if first == line then
						manager.notes.add(new Error(first.location, msg))
					else
						manager.notes.add(new Error.range(first.location, line.location, msg))
					end
				else
					if first == line then
						manager.notes.add(new Error(first.location, msg))
					else
						manager.notes.add(new Warn.range(first.location, line.location, msg))
					end
				end
				first = null
			end
		end
	end
end

redef class ALine
	super Comparable
	redef type OTHER: ALine
	redef fun <=>(o) do return address <=> o.address
end
