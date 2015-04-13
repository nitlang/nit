module objcwrapper

import objc_visitor
import objc_model
import objc_generator

import nitcc_runtime
import objc_lexer
import objc_parser

var v = new Interpretor
var g = new CodeGenerator

for arg in args do
	var file = new FileReader.open(arg)
	var lexer = new Lexer_objc(file.read_all)
	var parser = new Parser_objc
	var tokens = lexer.lex
	parser.tokens.add_all(tokens)
	v.enter_visit(parser.parse)
	file.close
end

g.generator v.model.classes
