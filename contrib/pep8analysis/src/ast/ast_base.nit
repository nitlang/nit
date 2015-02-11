import backbone
import parser

redef class AnalysisManager
	fun build_ast_from_file( filename : String ) : nullable AListing
	do
		var file = new FileReader.open( filename )
		return build_ast(filename, file)
	end

	fun build_ast(filename: String, stream: Reader): nullable AListing
	do
		var source = new SourceFile(filename, stream)
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
