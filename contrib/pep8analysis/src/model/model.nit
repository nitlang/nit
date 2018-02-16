import backbone
import ast

import directives
import operands
import vars

redef class AnalysisManager
	var model: nullable Model = null
	fun build_model(ast: AListing): Model
	do
		var model = new Model(ast)
		self.model = model
		return model
	end
end

class Model
	# lines to appear on the resulting program
	var lines = new Array[ANonEmptyLine]

	# labet to declaation line
	var labels_to_line = new HashMap[String,ALine]
	var labels_to_address = new HashMap[String,Int]

	# from adress to line
	var address_to_line = new HashMap[Int,ANonEmptyLine]

	init (ast: AListing)
	do
		var offset = 0
		for line in ast.n_lines do
			# TODO if directive = equate
			var label_decl = line.n_label_decl
			if label_decl != null then
				var lbl = label_decl.n_id
				var label_name = lbl.text

				if line isa ADirectiveLine and line.n_directive isa AEquateDirective then
					# .EQUATE
					labels_to_address[label_name] = line.n_directive.as(AEquateDirective).n_value.to_i
					lbl.labels_to_address[label_name] = line.n_directive.as(AEquateDirective).n_value.to_i
				else
					labels_to_address[label_name] = offset
					lbl.labels_to_address[label_name] = offset
				end
			end

			line.address = offset

			if line isa ANonEmptyLine and line.size > 0 then
				lines.add( line )
				address_to_line[offset] = line
			end
			offset += line.size
		end

		for lbl,address in labels_to_address do
			if address_to_line.has_key(address) then
				var line = address_to_line[address]
				labels_to_line[lbl] = line
			end
		end
	end
end

redef class ALine
	var address = -1

	fun size: Int is abstract

	redef fun to_s do return "L{address}"

	redef fun text
	do
		var text = super
		var size = size
		if size > 0 then
			return "L{location.to_line_s} (m{address}..{address+size}): {text}"
		else
			return "L{location.to_line_s}: {text}"
		end
	end

	fun lbl: nullable String
	do
		var lbl_decl = n_label_decl
		if lbl_decl != null then
			var lbl = lbl_decl.n_id.text
			return lbl
		else return null
	end
end
redef class AInstructionLine
	redef fun size do return 4
end
redef class ADirectiveLine
	redef fun size do return n_directive.size
end
redef class AEmptyLine
	redef fun size do return 0
end

redef class MemVar
	redef fun to_s do
		var ltl = manager.model.address_to_line
		if ltl.has_key(index) then
			var line = ltl[index]
			var lbl = line.lbl
			if lbl != null then
				return "{lbl}@m{index}"
			end
		end
		return "m{index}"
	end
end
