import pipeline

import model

redef class AnalysisManager
	fun build_cfg( model: Model ) : CFG
	do
		var cfg = new CFG( model )
		return cfg
	end
end

redef class ABranchInstruction
	fun is_indirect: Bool
	do
		var op = n_operand
		return op isa AAnyOperand and (once ["x","d"]).has(op.addressing_mode)
	end
end

class CFG
	var start : BasicBlock
	var finish : BasicBlock
	var addr_to_blocks = new HashMap[Int,BasicBlock]
	var blocks = new Array[BasicBlock]

	var has_function_calls = false

	init (model: Model)
	do
		assert not model.lines.is_empty

		var starts = [0]
		var ends = [model.lines.last.address]

		# check for indirect branches
		#var indirect_jump_sites = new Array[Int]
		var has_indirect_jump_sites = false

		# detect basic block limits
		for line in model.lines do
			if line isa AInstructionLine then
				var instr = line.n_instruction
				if instr isa ABranchInstruction then
					if instr.is_indirect then
						#indirect_jump_sites.add(line.address)
						has_indirect_jump_sites = true
						manager.notes.add(new Warn(instr.location, "jumps to a dynamic address, this may be OK but the CFG may be wrong"))
					else
						var op = instr.n_operand
						var dest = op.n_value.to_i
						starts.add(dest)
					end
					ends.add(line.address)
					if not instr isa ABrInstruction then
						# next line is possible start
						starts.add(line.address+4)
					end
				else if instr isa AStopInstruction or
					 instr isa ARetInstruction then
					ends.add(line.address)
				end
			end
		end

		var addresses_in_memory = new Array[Int]
		#if not indirect_jumps.is_empty then
		if has_indirect_jump_sites then
			# find possible jump destinations

			for line in model.lines do
				if line isa ADirectiveLine then
					var dir = line.n_directive
					if dir isa AAddrssDirective then
						var dest = dir.n_value.to_i
						starts.add(dest)
						addresses_in_memory.add(dest)
					end
				end
			end

			# link indirect jumps to possible destinations
			#for src in addresses_in_memory do
			#end
		end

		# sort breakpoints in order
		starts = starts.iterator.uniq.sort.to_a
		ends = ends.iterator.uniq.sort.to_a

		# create basic blocks
		var current_block: nullable BasicBlock = null
		var next_start_i = 0
		var next_end_i = 0
		for line in model.lines do
			var addr = line.address
			while next_start_i < starts.length and
			  starts[next_start_i] < addr do next_start_i += 1
			if next_start_i < starts.length and
			  starts[next_start_i] == addr then
				# is a dest, and not already started
				current_block = new BasicBlock
				blocks.add(current_block)
			end

			if current_block == null then
				current_block = new BasicBlock
				blocks.add(current_block)
			end

			current_block.lines.add(line)

			while next_end_i < ends.length and
			  ends[next_end_i] < addr do next_end_i += 1
			if next_end_i < ends.length and
			  ends[next_end_i] == addr then
				# stops here, unless already at the end
				current_block = null
			end
		end

		# adds created blocks to instance attribute
		for b in blocks do
			# save them in the class attribute
			addr_to_blocks[b.lines.first.address] = b
		end

		# start node
		start = new BasicBlock.start
		blocks.add(start)
		if blocks.length > 0 and blocks.first != start then
			start.successors.add(blocks.first)
			blocks.first.predecessors.add(start)
		end
		addr_to_blocks[-2] = start

		# end node
		finish = new BasicBlock.finish
		blocks.add(finish)
		addr_to_blocks[-1] = finish

		# set successors and predecessors
		for b in blocks do if not b.lines.is_empty then
			var line = b.lines.last

			if line isa AInstructionLine then
				var instr = line.n_instruction
				if instr isa ABranchInstruction then
					var op = instr.n_operand
					if instr.is_indirect then
						for dest in addresses_in_memory do
							var db = addr_to_blocks[dest]
							b.successors.add(db)
							db.predecessors.add(b)
						end
					else
						var dest = op.n_value.to_i
						var db = addr_to_blocks[dest]
						b.successors.add(db)
						db.predecessors.add(b)
					end
				end

				if not instr isa ABrInstruction and
				  not instr isa AStopInstruction and
				  not instr isa ACallInstruction and
				  not instr isa ARetInstruction then
					# next line is possible start
					var dest = line.address+4
					if addr_to_blocks.has_key(dest) then
						var db = addr_to_blocks[dest]
						b.successors.add(db)
						db.predecessors.add(b)
					else
						manager.notes.add(new P8Error(line.location,
							"this instruction is not followed by valid code as it should (misplaced data or missing BR?)"))
					end
				end

				if instr isa ACallInstruction then
					has_function_calls = true
					var next_addr = line.address+4
					if not addr_to_blocks.has_key(next_addr) then
						manager.notes.add(new P8Error(line.location,
							"this CALL is not followed by valide code as it should"))
					else
						b.after_call = addr_to_blocks[next_addr]
					end
				end

				if b.successors.is_empty and
				  not instr isa ARetInstruction then
					b.successors.add(finish)
					finish.predecessors.add(b)
				end
			end
		end

		# Verify use of function calls
		# To be by the book, each path from the start to the end should have
		# the same number of calls and rets. There should never be more rets
		# than calls.

		# TODO check for instructions not in a path from start to end

		# TODO check if branching on variable

		# TODO check there is there is a consistant use of the stack between
		# calls and rets.
	end

	# duplicate function calls
	# at each call site, the tree representing the
	fun inline_functions
	do
		inline_functions_recursive(start, new List[BasicBlock]) #0)

		# retain only blocks reachble from start
		var reachables = new HashSet[BasicBlock]
		var todo = new Array[BasicBlock]
		todo.add(start)
		while not todo.is_empty do
			var n = todo.pop
			if not reachables.has(n) then
				reachables.add(n)
				for s in n.successors do if not reachables.has(s) then
					todo.add(s)
				end
			end
		end
		self.blocks = reachables.to_a
	end

	private fun inline_functions_recursive(b: BasicBlock, seq: List[BasicBlock]) #depth: Int)
	do
		# Protection against cycles
		#if depth > 1000 then return
		var sl = seq.length
		var loop_length = 3
		if sl > loop_length then
			for i in [0..sl-loop_length[ do
				var same = true
				for j in [0..loop_length[ do if seq[i+j]!=seq[sl-3+j] then
					same = false
					break
				end

				if same then
					print "recursive since {seq[i].name}"
					return
				end
			end
		end
		#if seq.has(b) then return

		if not b.lines.is_empty then
			var line = b.lines.last
			if line isa AInstructionLine then
				var instr = line.n_instruction
				if instr isa ACallInstruction then
					# replace called by a dup
					assert b.successors.length == 1
					var called = b.successors.first
					var rets = new HashSet[BasicBlock]
					var n = called.duplicate_tree(
						new HashMap[BasicBlock,BasicBlock], rets, 0, blocks)
					b.successors[0] = n
					n.predecessors.add(b)

					if b.after_call == null then
						print "Already inlined"
						return
					else
						# TODO bring back assert
						if n.predecessors.length > 1 then
							print "many pred"
							print "n {n.name}"
							print "preds {n.predecessors.join(" ")}"
						end
						assert n.predecessors.length == 1 else print n.predecessors.length
						assert b.successors.length == 1
						# TODO add information about duplicated block that are not dead

						# link!
						var next = b.after_call.as(not null)
						# Another protection against cycles
						for ret in rets do
							ret.successors.add(next)
							next.predecessors.add(ret)
						end
						#print "linking {b.name} to {next.name} ret len {rets.length}"

						b.after_call = null
					end
				end
			end
		end

		var si = 0
		while si < b.successors.length do
			var s = b.successors[si]
			seq.add(s)
			inline_functions_recursive(s, seq)
			seq.pop
			si+=1
		end
	end

	var watchdog = 0 is writable
	fun link_ret_to_calls(b: BasicBlock, to_link_ori: List[BasicBlock], seq: List[BasicBlock], depth: Int): Bool
	do
		watchdog += 1
		if watchdog == 10000 then
			print "Error: Umanagable cycle detected"
			return false
		end

		var sl = seq.length
		var loop_length = 4
		if sl > loop_length then
			for i in [0..sl-loop_length[ do
				var same = true
				for j in [0..loop_length[ do if seq[i+j]!=seq[sl-loop_length+j] then
					same = false
					break
				end

				if same then
					#print "recursive since {seq[i].name}"
					return true
				end
			end
		end

		# copy to_list
		var to_link = new List[BasicBlock]
		to_link.add_all(to_link_ori)

		if not b.lines.is_empty then
			var line = b.lines.last
			if line isa AInstructionLine then
				var instr = line.n_instruction
				if instr isa ACallInstruction then
					to_link.push(b)

				else if instr isa ARetInstruction then
						if to_link.is_empty then
							manager.notes.add( new P8Error(instr.location,"no CALL can be linked to this RET") )
							return false
						else
							var caller = to_link.pop
							# link!
							var next = caller.after_call.as(not null)

							# Another protection against cycles
							if b.successors.has(next) then return true

							b.successors.add(next)
							next.predecessors.add(b)
						end
				end
			end
		end

		var si = 0
		while si < b.successors.length do
			var s = b.successors[si]
			seq.add(s)
			if not link_ret_to_calls(s, to_link,seq,depth+1) then return false
			seq.pop
			si+=1
		end

		return true # OK
	end
end

class BasicBlock
	var name: String is noinit
	var lines = new Array[ANonEmptyLine]
	var successors = new Array[BasicBlock]
	var predecessors = new Array[BasicBlock]
	var after_call : nullable BasicBlock = null

	init
	do
		var count = (once new Counter).next
		name = "b{count}"
	end
	init named(name: String) do self.name = name
	init start do name = "start"
	init finish
	do
		name = "end"
	end

	fun duplicate_tree(dups: HashMap[BasicBlock,BasicBlock],
					   rets: Set[BasicBlock], calls: Int,
					   blocks: Array[BasicBlock]) : BasicBlock
	do
		if dups.has_key(self) then return dups[self]

		var n = new BasicBlock.from(self)
		dups[self] = n
		blocks.add(n)
		n.successors = new Array[BasicBlock]
		n.predecessors = new Array[BasicBlock]

		if after_call != null then
			var nac = after_call.duplicate_tree(dups, rets, calls, blocks)
			n.after_call = nac
			calls += 1 # for within that call
		end

		for s in successors do
			var ns = s.duplicate_tree(dups, rets, calls, blocks)
			n.successors.add(ns)
			ns.predecessors.add(n)
		end

		if calls == 0 and successors.is_empty then rets.add(n)

		return n
	end

	init from(o: BasicBlock)
	do
		var count = (once new Counter).next
		name = "c{count}_from_{o.name}"
		lines = o.lines
		successors = o.successors
		predecessors = o.predecessors
		after_call = o.after_call
	end
end

private class Counter
	var count = -1
	fun next : Int
	do
		count += 1
		return count
	end
end
