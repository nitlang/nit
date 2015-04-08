import cfg

class FlowAnalysis[S]
	super Visitor

	var current_in:  nullable S = default_in_set is writable
	var current_out: nullable S = default_in_set is writable

	fun in_set(bb: BasicBlock): nullable S is abstract
	fun out_set(bb: BasicBlock): nullable S is abstract
	fun in_set=(bb: BasicBlock, s: S) is abstract
	fun out_set=(bb: BasicBlock, s: S) is abstract

	redef fun visit( node ) do node.visit_all(self)

	# If false, it is a backwards analysis
	fun is_forward: Bool is abstract

	# ex: do return in1.union( in2 )
	# ex: do return in1.intersection( in2 )
	fun merge( in1, in2: nullable S): nullable S is abstract

	fun default_in_set: nullable S do return null
	fun empty_set: S is abstract

	fun analyze(cfg: CFG)
	do
		# set defaults
		var current_in: nullable S
		var current_out: nullable S

		# set current input as default start case
		var todo = new List[BasicBlock]
		todo.add_all(cfg.blocks)

		# iterate until fixed point reached
		while not todo.is_empty do

			var block = todo.shift

			if block == cfg.start then
				continue
			else if block.predecessors.is_empty then
				# get default in (the most safe one)
				current_in = default_in_set
			else
				current_in = out_set(block.predecessors.first)
				for l in [1..block.predecessors.length[ do
					var b = block.predecessors[l]
					current_in = merge(current_in, out_set(b))
				end
			end

			if current_in != null then
				in_set(block) = current_in
			else
				continue
			end

			if block == cfg.finish then continue

			var old_out = out_set(block)
			for line in block.lines do
				self.current_in = current_in
				self.current_out = empty_set
				pre_line_visit(line)
				enter_visit(line)
				post_line_visit(line)
				current_out = self.current_out
				current_in = self.current_out.as(not null)
				#self.current_in = current_in
			end

			current_out = self.current_out
			if old_out != current_out then
				out_set(block) = current_out.as(not null)
				if is_forward then
					for b in block.successors do todo.add(b)
				else
					for b in block.predecessors do todo.add(b)
				end
			end
		end
	end

	fun pre_line_visit(l: ALine) do end
	fun post_line_visit(l: ALine) do end
end

class FineFlowAnalysis[V]
	super FlowAnalysis[V]

	redef fun in_set(bb)
	do
		if bb.lines.is_empty then return backup_in(bb)
		return line_in( bb.lines.first )
	end

	redef fun in_set=(bb, v)
	do
		if bb.lines.is_empty then
			backup_in(bb) = v
		else line_in( bb.lines.first ) = v
	end

	redef fun out_set(bb)
	do
		if bb.lines.is_empty then return backup_out(bb)
		return line_out( bb.lines.last )
	end

	redef fun out_set=(bb, v)
	do
		if bb.lines.is_empty then
			backup_out(bb) = v
		else line_out( bb.lines.last ) = v
	end

	fun backup_in(l: BasicBlock): nullable V is abstract
	fun backup_out(l: BasicBlock): nullable V is abstract
	fun backup_in=(l: BasicBlock, v: nullable V) is abstract
	fun backup_out=(l: BasicBlock, v: nullable V) is abstract

	fun line_in(l: ALine): nullable V is abstract
	fun line_out(l: ALine): nullable V is abstract
	fun line_in=(l: ALine, v: nullable V) is abstract
	fun line_out=(l: ALine, v: nullable V) is abstract

	redef fun pre_line_visit(line) do line_in(line) = current_in
	redef fun post_line_visit(line) do line_out(line) = current_out
end

class StaticAnalysis[S]
	super Visitor

	var set: S
	init (set: S) do self.set = set

	redef fun visit( node ) do node.visit_all(self)
	fun analyze(ast: AListing): S
	do
		enter_visit(ast)
		return set
	end
end
