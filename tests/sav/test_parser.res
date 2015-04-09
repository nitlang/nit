usage:
  test_parser [options]... <filename.nit>...
  test_parser -e [options]... <text>...
  test_parser -i [options]...
options:
  -n	do not print anything
  -l	only lexer
  -p	lexer and parser (default)
  -x	instead of a ascii tree, output a XML document
  -e	instead on files, each argument is a content to parse
  -i	tree to parse are read interactively
  -h	print this help
