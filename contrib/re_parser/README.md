# RE Parser

RE parser provides a simple API to regular expression parsing.
It is also able to convert a regular expression into a NFA or a DFA and produce dot files from it.

## Building RE parser

From the `re_parser` directory:

~~~raw
make all
~~~

## RE parser in command line

RE parser can be used as a command line tool to generate NFA and DFA dot files from a regular expression:

~~~raw
./re_parser "a(b|c)+d*"
~~~

Will produce the two files `nfa.dot` and `dfa.dot`.

These can be directly viwed with `xdot`:

~~~raw
xdot nfa.dot
xdot dfa.dot
~~~

Or translated to png images with `dot`:

~~~raw
dot -Tpng -onfa.png nfa.dot
dot -Tpng -odfa.png dfa.dot
~~~

See `man dot` for available formats.

## RE parser as a web app

RE parser comes with a web app that allow users to submit regular expression and see the resulting NFA and DFA.

To run the web app server:

~~~raw
./re_app --host localhost --port 3000
~~~

The server will be available at <a href='http://localhost:3000'>http://localhost:3000</a>.

## RE parser as a library

You can also use RE parser as a library by importing `re_parser`.

	import re_parser

	var re = "a(b|c)+d*"

	# Parse re
	var re_parser = new REParser
	var node = re_parser.parse_re(re)

	if node == null then
		print re_parser.last_error.as(not null)
		exit 1
		abort
	end

	# Build NFA and DFA
	var nfa = re_parser.make_nfa(node)
	print nfa.to_dot(false)
	print nfa.to_dfa.to_dot(false)

Use `to_dot(true)` to merge transitions on characters.
