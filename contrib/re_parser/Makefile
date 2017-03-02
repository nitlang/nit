NITC=../../bin/nitc
NITCC=../../nitcc/src/nitcc
NITUNIT=../../bin/nitunit

all: re_parser re_app

pre-build: grammar

nitcc:
	cd ../nitcc && make nitcc

grammar: nitcc
	cd src/ && ${NITCC} re_parser.sablecc

re_parser: grammar
	${NITC} src/re_parser.nit

re_app: grammar
	${NITC} src/re_app.nit

check:
	${NITUNIT} .

clean:
	rm re_parser re_app 2>/dev/null || true
	cd src/ && rm -r \
		*.dot *.out \
		re_parser_lexer.nit re_parser_parser.nit re_parser_test_parser.nit re_parser_parser_gen \
		2>/dev/null || true
