module range_analysis

import framework

# for linex, and should be used in the future
import reaching_defs

redef class AnalysisManager
	fun do_range_analysis(ast: AListing, cfg: CFG)
	do
		var range_init_analysis = new InitRangeAnalysis(ast)
		range_init_analysis.analyze(ast)

		cfg.start.backup_ranges_out = range_init_analysis.set

		var range_analysis = new RangeAnalysis
		range_analysis.analyze(cfg)
	end
end

class RangeAnalysis
	super FineFlowAnalysis[RangeMap]

	var current_range: nullable ValRange = null
	var current_var: nullable Var = null

	redef fun empty_set do return new RangeMap
	redef fun is_forward do return true

	init do super

	redef fun visit(node)
	do
		node.accept_range_analysis(self,
			current_in, current_out.as(not null))
	end

	# union
	redef fun merge(a, b)
	do
		if a == null and b == null then return null
		if a == null then return b.copy
		if b == null then return a.copy

		var n = new RangeMap
		for k, v in a do
			if b.has_key(k) then
				# merge ranges
				var u = b[k]
				n[k] = new ValRange(v.min.min(u.min), v.max.max(u.max))
			end
		end

		return n
	end

	redef fun line_in(line) do return line.ranges_in
	redef fun line_out(line) do return line.ranges_out
	redef fun line_in=(line, s) do line.ranges_in = s
	redef fun line_out=(line, s) do line.ranges_out = s

	redef fun backup_in(bb) do return bb.backup_ranges_in
	redef fun backup_out(bb) do return bb.backup_ranges_out
	redef fun backup_in=(bb, s) do bb.backup_ranges_in = s
	redef fun backup_out=(bb, s) do bb.backup_ranges_out = s
end

class InitRangeAnalysis
	super StaticAnalysis[RangeMap]

	var current_line: ALine

	init(prog: AListing)
	do
		super( new RangeMap )
		current_line = prog.n_lines.first
	end
	redef fun visit(node)
	do
		if node isa ALine then current_line = node
		node.accept_init_range_analysis(self, set)
	end
end

redef class ALine
	var ranges_in: nullable RangeMap = null
	var ranges_out: nullable RangeMap = null
end

redef class BasicBlock
	var backup_ranges_in: nullable RangeMap = null
	var backup_ranges_out: nullable RangeMap = null

	redef fun dot_node_header
	do
		if backup_ranges_in != null then
			return "{super}-- ranges in = {backup_ranges_in.as(not null)}\\l"
		else if not lines.is_empty and lines.first.ranges_in != null then
			return "{super}-- ranges in = {lines.first.ranges_in.as(not null)}\\l"
		else return super
	end
	redef fun dot_node_footer
	do
		if backup_ranges_out != null then
			return "{super}-- ranges out = {backup_ranges_out.as(not null)}\\l"
		else if not lines.is_empty and lines.last.ranges_out != null then
			return "{super}-- ranges out = {lines.last.ranges_out.as(not null)}\\l"
		else return super
	end
end

class ValRange
	var min: Int
	var max: Int
	init(min, max: Int)
	do
		self.min = min
		self.max = max
	end
	init from(o: ValRange)
	do
		self.min = o.min
		self.max = o.max
	end
	init at(v: Int)
	do
		self.min = v
		self.max = v
	end

	redef fun to_s do
		if min == max then return min.to_s
		return "[{min}..{max}]"
	end

	redef fun ==(o) do return o != null and o isa ValRange and
		min == o.min and max == o.max

	fun ponctual: Bool do return min == max
end
class RangeMap
	super HashMap[Var, ValRange]
	redef fun ==(o)
	do
		if o == null or not o isa RangeMap then return false
		if o.length != length then return false

		for k, v in self do if not o.has_key(k) or o[k] != v then return false

		return true
	end

	fun copy: RangeMap
	do
		var c = new RangeMap
		c.recover_with(self)
		return c
	end

	redef fun to_s do return "\{{join(", ", ":")}\}"
end

redef class ANode
	fun accept_range_analysis(v: RangeAnalysis,
		ins: nullable RangeMap, outs: RangeMap) do visit_all(v)
	fun accept_init_range_analysis(v: InitRangeAnalysis,
		set: RangeMap) do visit_all(v)
end

redef class AInstruction
	redef fun accept_range_analysis(v, ins, outs)
	do
		visit_all(v)
		if ins != null then outs.recover_with(ins)
	end
end

redef class ALoadInstruction
	redef fun accept_range_analysis(v, ins, outs)
	do
		visit_all(v)

		if ins != null then outs.recover_with(ins)
		var variable = def_var
		#var add = new RangeMap[Var, ValRange](variable,

		# kill every set for variable
		# (is automatic by HashMap)

		if variable != null then
			# gen (&kill)
			var cr = v.current_range
			if cr != null then
				outs[variable] = cr
			else
				outs.keys.remove(variable)
			end
		end
		v.current_range = null
	end
end

redef class AStoreInstruction
	redef fun accept_range_analysis(v, ins, outs)
	do
		visit_all(v)

		if ins != null then outs.recover_with(ins)
		var src = src_var # reg
		var def = def_var # mem

		if def != null then
			if src != null and ins != null and ins.has_key(src) then # we know the source and dest
				var cr = ins[src]
				outs[def] = cr
			else
				outs.keys.remove(def)
			end
		end
	end
end

redef class AInputInstruction
	redef fun accept_range_analysis(v, ins, outs)
	do
		visit_all(v)

		if ins != null then outs.recover_with(ins)

		var def = def_var # mem

		if def != null and outs.has_key(def) then
			outs.keys.remove(def)
		end

	end
end

redef class AArithmeticInstruction
	fun do_arithmetic(rv, rm: ValRange): nullable ValRange do return null

	redef fun accept_range_analysis(v, ins, outs)
	do
		v.current_range = null
		visit_all(v)

		if ins != null then outs.recover_with(ins)

		var reg = reg_var

		var cr = v.current_range

		if cr != null and ins.has_key(reg) then
		# and ins.has_key(mem) then
			var r = do_arithmetic(ins[reg], cr)

			if r != null then
				# this prevents infinite loops
				# we assume that the max for a student program in 50
				if r.max > 50 then r.max = 50
				if r.min < -50 then r.min = -50

				outs[reg] = r
			else
				outs.keys.remove(reg)
			end
		else
			outs.keys.remove(reg)
		end
	end
end

redef class AAddInstruction
	redef fun do_arithmetic(rv, rm) do return new ValRange(rv.min+rm.min, rv.max+rm.max)
end

redef class ASubInstruction
	redef fun do_arithmetic(rv, rm) do return new ValRange(rv.min-rm.max, rv.max-rm.min)
end

redef class ANegInstruction
	redef fun accept_range_analysis(v, ins, outs)
	do
		v.current_range = null
		visit_all(v)

		if ins != null then outs.recover_with(ins)

		var reg = reg_var
		if ins.has_key(reg) then
			var rm = ins[reg]
			outs[reg] = new ValRange(-rm.max, -rm.min)
		end
	end
end

redef class AAnyOperand
	redef fun accept_range_analysis(v, ins, outs)
	do
		if addressing_mode == "i" then # immediate
			v.current_var = null
			v.current_range = new ValRange(n_value.to_i, n_value.to_i)
			return
		else if addressing_mode == "d" then # direct
			var ci = v.current_in
			var address = n_value.to_i
			var variable = new MemVar(address)
			v.current_var = variable
			if ci != null and ci.has_key(variable) then
				var value = ci[variable]
				v.current_range = new ValRange(value.min, value.max)
				return
			end
		end

		v.current_range = null
	end
end

redef class AMovInstruction
	# Almost impossible to guess so, topped
	redef fun accept_range_analysis(v, ins, outs)
	do
		v.current_range = null
		visit_all(v)

		if ins != null then outs.recover_with(ins)

		var reg = new RegisterVar('A')
		if outs.has_key(reg) then
			outs.keys.remove(reg)
		end
	end
end

redef class AWordDirective
	redef fun accept_init_range_analysis(v, set)
	do
		var variable = new MemVar(v.current_line.address)
		var value = new ValRange.at(n_value.to_i)
		set[variable] = value
	end
end

redef class AByteDirective
	redef fun accept_init_range_analysis(v, set)
	do
		var variable = new MemVar(v.current_line.address)
		var value = new ValRange.at(n_value.to_i)
		set[variable] = value
	end
end
