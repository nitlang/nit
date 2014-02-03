import backbone
import parser

redef class AnalysisManager
	fun build_ast( filename : String ) : nullable AListing
	do
		var file = new IFStream.open( filename )

		var source = new SourceFile(filename, file)
		var lexer = new Lexer(source)
		var parser = new Parser(lexer)
		var node_tree = parser.parse

		var ast = node_tree.n_base
		if ast == null then
			var err = node_tree.n_eof
			assert err isa AError
			print "error at {err.location}: {err.message}"
			return null
		end

		return ast
	end
end
