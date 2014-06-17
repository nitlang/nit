import pipeline
import opts

import framework
import range_analysis

redef class AnalysisManager
	var opt_report_unknown_types = new OptionBool("Report unknown types", "--report-types-top")
	fun report_unknown_types: Bool do return opt_report_unknown_types.value

	redef init
	do
		super
		opts.add_option(opt_report_unknown_types)
	end

	fun do_types_analysis(ast: AListing, cfg: CFG)
	do
		# find types at program init
		var tia = new TypesInitAnalysis(ast)
		tia.analyze(ast)

		# evaluate types with program flow
		cfg.start.backup_types_out = tia.set
		var ta = new TypesAnalysis
		ta.analyze(cfg)

		# check for errors
		var tc = new TypesChecker(ast)
		tc.analyze(ast)
	end
end

# Types 1st step, find state at program load
# one pass over the AST
class TypesInitAnalysis
	super StaticAnalysis[TypesMap]

	var current_line: ALine

	init(prog: AListing)
	do
		super( new TypesMap )
		current_line = prog.n_lines.first
	end
	redef fun visit(node)
	do
		if node isa ALine then current_line = node
		node.accept_types_init_analysis(self, set)
	end
end

# Types 2nd step, evaluate types evolution
# one pass over the AST
class TypesAnalysis
	super FineFlowAnalysis[TypesMap]

	redef fun empty_set do return new TypesMap
	redef fun is_forward do return true

	init do super

	redef fun visit(node) do node.accept_types_analysis(self, current_in, current_out.as(not null))

	redef fun merge(a, b)
	do
		if a == null then
			if b == null then return null
			return b.copy
		end
		if b == null then return a.copy
		return a.intersection(b)
	end

	redef fun backup_in(bb) do return bb.backup_types_in
	redef fun backup_out(bb) do return bb.backup_types_out
	redef fun backup_in=(bb, v) do bb.backup_types_in = v
	redef fun backup_out=(bb, v) do bb.backup_types_out = v

	redef fun line_in(line) do return line.types_in
	redef fun line_out(line) do return line.types_out
	redef fun line_in=(line, v) do line.types_in = v
	redef fun line_out=(line, v) do line.types_out = v
end

# Types 3rd step, verification
# one pass over the AST
class TypesChecker
	super StaticAnalysis[TypesMap]

	var current_line: ALine

	init(prog: AListing)
	do
		super( new TypesMap )
		current_line = prog.n_lines.first
	end
	redef fun visit(node)
	do
		if node isa ALine then current_line = node
		node.accept_types_checker(self)
	end
end

class TypesMap
	type T: Char

	# bits
	#  'u' unset
	#  's' set
	var bs = new HashMap[Char,T]

	# The type can be:
	#  'u' for uninitialized
	#  '0' zeroed
	#  'b' byte
	#  'w' word begin
	#  'W' word end
	#  'c' executable code
	#  'l' ascii
	#  'a' address begin
	#  'A' address end

	# registers
	var rs = new HashMap[Char,Array[T]]

	# stack
	var stack = new Array[T]

	# mem
	var mem = new HashMap[Int, T]

	init
	do
		rs['A'] = new Array[T].with_items('u', 'u')
		rs['X'] = new Array[T].with_items('u', 'u')
		bs['N'] = 'u'
		bs['Z'] = 'u'
		bs['V'] = 'u'
		bs['C'] = 'u'
	end

	fun memory(a: Int): T
	do
		if mem.has_key(a) then return mem[a]
		return 'u'
	end
	fun memory=(a: Int, v: T) do mem[a] = v

	fun copy_to(o: TypesMap)
	do
		for k,v in rs do for b in [0..1] do o.rs[k][b] = rs[k][b]
		for k,v in bs do o.bs[k] = v
		for f in stack do o.stack.add(f)
		for k, v in mem do o.mem[k] = v
	end
	fun copy: TypesMap
	do
		var tm = new TypesMap
		copy_to(tm)
		return tm
	end

	fun intersection(o: TypesMap): TypesMap
	do
		var tm = new TypesMap
		for k,v in rs do for b in [0..1] do
			var v1 = o.rs[k][b]
			var v2 = rs[k][b]
			if v1 == v2 then
				tm.rs[k][b] = v1
			else tm.rs[k][b] = merge(v1, v2)
		end

		for k,v in bs do o.bs[k] = v
		for f in stack do o.stack.add(f)

		for k, v in mem do if o.mem.has_key(k) then
			if v == o.mem[k] then
				tm.mem[k] = v
			else tm.mem[k] = merge(v, o.mem[k])
		else tm.mem[k] = 't'
		for k, v in o.mem do if not tm.mem.has_key(k) then
			tm.mem[k] = 't'
		end
		return tm
	end

	fun merge(a, b: Char): Char
	do
		var c = [a,b]
		if c.has('w') and c.has('0') then return 'w'
		if c.has('W') and c.has('0') then return 'W'
		return 't'
	end

	fun label_at(index: Int): nullable String
	do
		var ltl = manager.model.address_to_line
		if ltl.has_key(index) then
			var line = ltl[index]
			return line.lbl
		end
		return null
	end

	redef fun to_s
	do
		var s = "regs:\{{rs.join(",",":")}\}, "
		#s = "{s}bits:\{{bs.join(",",":")}\}, "
		#s = "{s}stack:\{{stack.join(",")}\}, "

		var blocks = new Array[String]
		var block_begin: nullable Int = null
		var block_end = 0
		var block_type = ' '
		for a in mem.keys.iterator.sort do
			var t = mem[a]
			if block_begin != null and (block_type != t or block_end != a-1) then
				var lbl = label_at(block_begin)
				if lbl != null then
					lbl = "{lbl}@"
				else lbl = ""

				if block_begin == block_end then
					blocks.add("{lbl}{block_begin}:{block_type}")
				else blocks.add("{lbl}[{block_begin}..{block_end}]:{block_type}")
				block_begin = null
			end

			if block_begin == null then block_begin = a

			block_type = t
			block_end = a
		end
		if block_begin != null then
			var lbl = label_at(block_begin)
			if lbl != null then
				lbl = "{lbl}@"
			else lbl = ""

			if block_begin == block_end then
				blocks.add("{lbl}{block_begin}:{block_type}")
			else blocks.add("{lbl}[{block_begin}..{block_end}]:{block_type}")
		end
		s = "{s}mem:\{{blocks.join(",")}\}"

		return s
	end

	redef fun ==(o)
	do
		if o == null or not o isa TypesMap then return false
		for r,v in rs do for i in [0..2[ do if o.rs[r][i] != v[i] then return false

		if stack.length != o.stack.length then return false
		for s in [0..stack.length[ do if o.stack[s] != stack[s] then return false

		if mem.length != o.mem.length then return false
		for k,v in mem do if not o.mem.has_key(k) or o.mem[k] != v then return false

		return true
	end
end

redef class ALine
	var types_in: nullable TypesMap = null
	var types_out: nullable TypesMap = null
end

redef class BasicBlock
	var backup_types_in: nullable TypesMap = null
	var backup_types_out: nullable TypesMap = null

	redef fun dot_node_header
	do
		if lines.is_empty then
			if backup_types_in != null then
				return "{super}-- types = \{{backup_types_in.to_s}\}\\l"
			end
		else if lines.first.types_in != null then return  "{super}-- types = \{{lines.first.types_in.to_s}\}\\l"
		return super
	end
	redef fun dot_node_footer
	do
		if lines.is_empty then
			if backup_types_out != null then
				return "{super}-- types = \{{backup_types_out.to_s}\}\\l"
			end
		else if lines.first.types_out != null then return  "{super}-- types = \{{lines.last.types_out.to_s}\}\\l"
		return super
	end
end

redef class ANode
	fun accept_types_analysis(v: TypesAnalysis, ins: nullable TypesMap, outs: TypesMap) do visit_all(v)
	fun accept_types_init_analysis(v: TypesInitAnalysis, set: TypesMap) do visit_all(v)
	fun accept_types_checker(v: TypesChecker) do visit_all(v)
end

redef class AAnyOperand
	redef fun to_var
	do
		var line = parent.parent.as(ALine)
		var ranges = line.ranges_in
		if ranges != null then
			if addressing_mode == "n" then
				var addr_pos = new MemVar(n_value.to_i)
				if ranges.has_key(addr_pos) and ranges[addr_pos].ponctual then
					var addr_var = ranges[addr_pos].min
					return new MemVar(addr_var)
				end
			else if addressing_mode == "x" then
				var addr_pos: Var = new RegisterVar('X')
				if ranges.has_key(addr_pos) and ranges[addr_pos].ponctual then
					var reg_val = ranges[addr_pos].min
					return new MemVar(n_value.to_i+reg_val)
				end
			end
		end
		return super
	end
end

redef class AInstruction
	# does not change the set
	redef fun accept_types_analysis(v, ins, outs)
	do
		ins.copy_to(outs)
	end

	# set the memory for the line as being code
	redef fun accept_types_init_analysis(v, set)
	do
		for i in [0..4[ do set.memory(v.current_line.address+i) = 'c'
	end

	fun verify_word(content: Array[Char], mem_str: String)
	do
		#if content.count('u') == 2 then
			# uninitialized data
			#manager.notes.add(new Error(location, "use of uninitialized values in {mem_str}, got {long_content_name(content)}"))
		if content[0] == 'W' or content[1] == 'w' then
			manager.notes.add(new Warn(location, "using a deorganized word in {mem_str}, expected a word (got {long_content_name(content)})"))
		#else if (content[0] == 'w' and content[1] != 'W') or (content[1] == 'W' and content[0] != 'w') then
		else if (content[0] == 'w') != (content[1] == 'W') then
			manager.notes.add(new Warn(location, "using a partial word in {mem_str}, expected a full word (got {long_content_name(content)})"))
		#else if content.count('u') == 1 then # partially unitialized, a bad sign
			#manager.notes.add(new Warn(location, "use of partially uninitialized values in {mem_str}, got {long_content_name(content)}"))
		else if content.count('t') == 2 then # uninitialized data
			if manager.report_unknown_types then
				manager.notes.add(new Warn(location, "using data from unknown source in {mem_str}, expected a word, this may be OK but cannot be analyzed"))
			end
		else if content[0] == '0' and content[1] == 'b' then # byte only OK!
		else if content[0] == '0' and content[1] == 'l' then # ASCII only OK?
		else if content[0] == '0' and content[1] == '0' then # all zero OK!
		else if content[0] == 'a' and content[1] == 'A' then # address OK!
		else if content[0] != 'w' and content[1] != 'W' then
			manager.notes.add(new Warn(location, "using data of unsupported type in {mem_str}, expected word (got {long_content_name(content)})"))
		end
	end

	#  'u' for uninitialized
	#  '0' zeroed
	#  'b' byte
	#  'w' word begin
	#  'W' word end
	#  'c' executable code
	#  'l' ascii
	#  'a' address begin
	#  'A' address end
	fun long_data_name(d: Char): String
	do
		if d == 'u' then return "uninitialized byte"
		if d == '0' then return "byte at zero"
		if d == 'b' then return "byte"
		if d == 'w' then return "1st byte of word"
		if d == 'W' then return "2nd byte of word"
		if d == 'c' then return "byte of code"
		if d == 'l' then return "byte of ASCII"
		if d == 'a' then return "1st byte of address"
		if d == 'A' then return "2nd byte of address"
		if d == 't' then return "byte of unknown data"
		print "Unknown data type '{d}'"
		abort
	end

	fun long_content_name(c: Array[Char]): String
	do
		if (c[0]=='w' or c[0]=='0') and c[1]=='W' then return "a word"
		if c[0]=='a' and c[1]=='A' then return "an address"
		if c[0]==c[1] then return "two {long_data_name(c[0])}"
		return "a {long_data_name(c[0])} followed by {long_data_name(c[1])}"
	end
end


## Section: directives

redef class AByteDirective
	redef fun accept_types_init_analysis(v, set)
	do
		set.memory(v.current_line.address) = 'b'
	end
end

redef class AWordDirective
	redef fun accept_types_init_analysis(v, set)
	do
		set.memory(v.current_line.address) = 'w'
		set.memory(v.current_line.address+1) = 'W'
	end
end

redef class AAsciiDirective
	redef fun accept_types_init_analysis(v, set)
	do
		# TODO AOperand::data
		for i in [0..data.length[ do
			set.memory(v.current_line.address+i) = 'l'
		end
	end
end

redef class AAddrssDirective
	redef fun accept_types_init_analysis(v, set)
	do
		set.memory(v.current_line.address  ) = 'a'
		set.memory(v.current_line.address+1) = 'A'
	end
end

## Section: other instructions

redef class ALdInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super

		var op = n_operand
		if op isa AAnyOperand and op.addressing_mode == "i" then
			if op.n_value.to_i == 0 then
				outs.rs[register][0] = '0'
				outs.rs[register][1] = '0'
			else
				outs.rs[register][0] = 'w'
				outs.rs[register][1] = 'W'
			end
			return
		end

		var mem = mem_var
		if mem isa MemVar then
			var content = [ins.memory(mem.index), ins.memory(mem.index+1)]
			outs.rs[register][0] = content[0]
			outs.rs[register][1] = content[1]
			#outs.rs[register][0] = 'w'
			#outs.rs[register][1] = 'W'
		end
	end
end

redef class ALdbyteInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
		# outs.rs[register][1] = 'b'
		var mem = mem_var
		if mem isa MemVar then
			var content = ins.memory(mem.index)
			#verify_word(content, "m{mem.index}")
			outs.rs[register][1] = content
		end
	end
end

redef class AStInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
		#outs.mem[n_operand.n_value.to_i  ] = 'w'
		#outs.mem[n_operand.n_value.to_i+1] = 'W'
		var mem = mem_var
		if mem isa MemVar then
			var content = ins.rs[register]
			outs.mem[n_operand.n_value.to_i  ] = content[0]
			outs.mem[n_operand.n_value.to_i+1] = content[1]
		end
	end

	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		var mem = mem_var
		if mem isa MemVar and ins != null then
			var content = ins.rs[register]
			if ins.memory(n_operand.n_value.to_i) == 'c' or
			  	ins.memory(n_operand.n_value.to_i) == 'c' then
				manager.notes.add(new Warn(location, "overwriting code at {mem} with {long_content_name(content)} (code rewriting?)"))
			end
		end
	end
end

redef class AStbyteInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
		#outs.mem[n_operand.n_value.to_i] = 'b'
		var mem = mem_var
		if mem isa MemVar then
			var content = ins.rs[register]
			outs.mem[n_operand.n_value.to_i] = content[1]
		end
	end

	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		var mem = mem_var
		if mem isa MemVar and ins != null then
			var content = ins.rs[register]
			if ins.memory(n_operand.n_value.to_i) == 'c' then
				manager.notes.add(new Warn(location, "overwriting code at {mem} with {long_data_name(content[1])} (code rewriting?)"))
			end
		end
	end
end

redef class AShiftInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
	end
end

redef class AArithmeticInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
		outs.rs[register][0] = 'w'
		outs.rs[register][1] = 'W'
	end

	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		if ins == null then return

		# register
		var content = ins.rs[register]
		verify_word(content, "register {register}")

		# memory source
		var mem = mem_var
		if mem isa MemVar then
			content = [ins.memory(mem.index), ins.memory(mem.index+1)]
			verify_word(content, "memory address {mem.index}")
		end
	end
end

redef class ADecoInstruction
	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		if ins == null then return

		var mem = mem_var
		if mem isa MemVar then
			var content = [ins.memory(mem.index), ins.memory(mem.index+1)]
			verify_word(content, "memory address {mem.index}")
		end
	end
end

redef class ADeciInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
		var mem = mem_var
		if mem isa MemVar then
			outs.mem[mem.index  ] = 'w'
			outs.mem[mem.index+1] = 'W'
		end
	end
end

redef class AOutputInstruction
	fun verify_ascii(content: Char)
	do
		if content == 'u' then
			manager.notes.add(new Warn(location, "printing uninitialized data, exepected ASCII"))
		else if content != 'l' then
			if content != 't' or manager.opt_report_unknown_types.value then
				manager.notes.add(new Warn(location, "printing non-ASCII data, got {content}"))
			end
		end
	end
end

redef class ACharoInstruction
	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		if ins == null then return

		var mem = mem_var
		if mem isa MemVar then
			var content = ins.memory(mem.index)
			verify_ascii(content)
		end
	end
end

redef class AStroInstruction
	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		if ins == null then return

		var mem = mem_var
		if mem isa MemVar then
			var content = ins.memory(mem.index)
			verify_ascii(content)
		end
	end
end

redef class AChariInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super
		outs.mem[n_operand.n_value.to_i] = 'l'
	end
end

redef class ABranchInstruction
	redef fun accept_types_checker(v)
	do
		var ins = v.current_line.types_in
		if ins == null then return

		var mem = mem_var
		if mem isa MemVar then
			var content = [ins.memory(mem.index), ins.memory(mem.index+1)]
			if content[0] != 'a' or content[1] != 'A' then
				manager.notes.add(new Warn(location, "branching to someting other than an address, got {long_content_name(content)}"))
			end
		end
	end
end

redef class AMovInstruction
	redef fun accept_types_analysis(v, ins, outs)
	do
		super

		outs.rs['A'][0] = 'w'
		outs.rs['A'][1] = 'W'
	end
end
