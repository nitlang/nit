module pretty_instructions

import ast_base
import rich_instructions

redef class AnalysisManager
	var opt_ast = new OptionBool("Print the AST","--ast")

	redef init
	do
		super
		opts.add_option(opt_ast)
	end

	redef fun build_ast(filename, stream)
	do
		var ast = super

		return ast
	end
end

class ASTPrinter
	super Visitor

	var str = "" is writable

	redef fun visit(n) do n.accept_ast_printer(self)
end

redef class ANode
	fun accept_ast_printer(v: ASTPrinter) do visit_all(v)
end

redef class Token
	redef fun to_s do return text
	redef fun accept_ast_printer(v: ASTPrinter) do v.str += self.to_s # + " "
end

redef class TId
	redef fun accept_ast_printer(v: ASTPrinter)
	do
		var len = self.to_s.length
		if len < 6 and len > 1 then
			v.str += self.to_s + " "*(6-len)
		else
			v.str += self.to_s
		end
	end
end

redef class ANonEmptyLine
	redef fun accept_ast_printer(v: ASTPrinter)
	do
		if n_label_decl == null then v.str += once " "*10
		visit_all(v)
	end
end

redef class AInstruction
	redef fun accept_ast_printer(v: ASTPrinter)
	do
		var pre_size = v.str.length
		visit_all(v)
		var post_size = v.str.length
		var diff_size = post_size - pre_size
		if diff_size < 20 then v.str += " "*(20-diff_size)
	end
end

redef class ALabelDecl
	redef fun accept_ast_printer(v: ASTPrinter)
	do
		var text = n_id.text + ":"
		v.str += text + " "*(10-text.length)
	end
end

redef class ALine
	fun text: String
	do
		var p = new ASTPrinter
		p.enter_visit( self )
		return p.str
	end
end
