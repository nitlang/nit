module reaching_defs

import framework

redef class AnalysisManager
	fun do_reaching_defs_analysis(cfg: CFG)
	do
		cfg.start.backup_reaching_defs_out = new ReachingDefsMap
		var reaching_defs_analysis = new ReachingDefsAnalysis
		reaching_defs_analysis.analyze(cfg)
	end
end

class ReachingDefsAnalysis
	super FineFlowAnalysis[ReachingDefsMap]

	redef fun is_forward do return true

	redef fun visit( node )
	do
		node.accept_reaching_defs_analysis( self, current_in, current_out.as(not null) )
	end
	redef fun merge(a,b)
	do
		if a == null then return b
		if b == null then return a
		return a.union(b)
	end

	redef fun backup_in(bb) do return bb.backup_reaching_defs_in
	redef fun backup_out(bb) do return bb.backup_reaching_defs_out
	redef fun backup_in=(bb, v) do bb.backup_reaching_defs_in = v
	redef fun backup_out=(bb, v) do bb.backup_reaching_defs_out = v

	redef fun line_in(line) do return line.reaching_defs_in
	redef fun line_out(line) do return line.reaching_defs_out
	redef fun line_in=(line, v) do line.reaching_defs_in = v
	redef fun line_out=(line, v) do line.reaching_defs_out = v

	redef fun default_in_set do return new ReachingDefsMap
	redef fun empty_set do return new ReachingDefsMap
end

redef class ANode
	fun accept_reaching_defs_analysis(v: ReachingDefsAnalysis, ins: nullable ReachingDefsMap, outs: ReachingDefsMap) do visit_all(v)
end

redef class AInstruction
	redef fun accept_reaching_defs_analysis(v, ins, outs)
	do
		if ins != null then outs.recover_with(ins)
	end
end

redef class ALoadInstruction
	redef fun accept_reaching_defs_analysis(v, ins, outs)
	do
		if ins != null then outs.recover_with(ins)

		var variable = def_var
		if variable != null then
			# kill & gen
			var set = new HashSet[ALine]
			set.add(parent.as(ALine))
			outs[variable] = set
		else
			# TODO top
		end
	end
end

redef class AStoreInstruction
	redef fun accept_reaching_defs_analysis(v, ins, outs)
	do
		if ins != null then outs.recover_with(ins)

		var variable = def_var
		if variable != null then
			# kill & gen
			var set = new HashSet[ALine]
			set.add(parent.as(ALine))
			outs[variable] = set
		else
			# TODO top
		end
	end
end

class ReachingDefsMap
	super HashMap[Var,Set[ALine]]

	fun union(o: ReachingDefsMap): ReachingDefsMap
	do
		var n = new ReachingDefsMap
		for k, v in self do
			n[k] = new HashSet[ALine]
			n[k].add_all(v)
		end
		for k, v in o do
			if not n.has_key(k) then n[k] = new HashSet[ALine]
			n[k].add_all(v)
		end
		return n
	end

	fun intersection(o: ReachingDefsMap): ReachingDefsMap
	do
		var n = new ReachingDefsMap
		for k, v in self do if n.has_key(k) then n[k].add_all(v)
		for k, v in o    do if n.has_key(k) then n[k].add_all(v)
		return n
	end

	redef fun to_s do return join(";", ":")

	redef fun ==(o)
	do
		if o != null and o isa ReachingDefsMap then
			if length != o.length then return false
			for k,v in self do
				if not o.has_key(k) then return false
				var ok = o[k]
				if v.length != ok.length then return false
				for l in v do if not ok.has(l) then return false
			end
			return true
		else
			return false
		end
	end
end

redef class ALine
	var reaching_defs_in: nullable ReachingDefsMap = null
	var reaching_defs_out: nullable ReachingDefsMap = null
end

redef class BasicBlock
	var backup_reaching_defs_in: nullable ReachingDefsMap = null
	var backup_reaching_defs_out: nullable ReachingDefsMap = null

	redef fun dot_node_header
	do
		if lines.is_empty then
			if backup_reaching_defs_in != null then
				return "{super}-- reaching defs in = \{{backup_reaching_defs_in.to_s}\}\\l"
			end
		else if lines.first.reaching_defs_in != null then return  "{super}-- reaching defs in = \{{lines.first.reaching_defs_in.to_s}\}\\l"
		return super
	end
	redef fun dot_node_footer
	do
		if lines.is_empty then
			if backup_reaching_defs_out != null then
				return "{super}-- reaching defs out = \{{backup_reaching_defs_out.to_s}\}\\l"
			end
		else if lines.first.reaching_defs_out != null then return  "{super}-- reaching defs out = \{{lines.last.reaching_defs_out.to_s}\}\\l"
		return super
	end
end

# This is bad.
redef class HashSet[E]
	redef fun to_s do return join(",")
end
