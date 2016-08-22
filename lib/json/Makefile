NITCCDIR=../../contrib/nitcc/

.PHONY: pre-build
pre-build: $(NITCCDIR)src/nitcc
	$(NITCCDIR)src/nitcc $(NITCCDIR)examples/json.sablecc

$(NITCCDIR)src/nitcc:
	cd $(NITCCDIR) && $(MAKE)

.PHONY: clean distclean mostlyclean
mostlyclean clean distclean:
	rm -f -- ./json.concrete_grammar.txt ./json.concrete_grammar.out
	rm -f -- ./json.dfa.dot ./json.gram.dot
	rm -f -- ./json.lr.dot ./json.lr.out json.lr.txt ./json.nfa.dot
	rm -f -- ./json_test_parser.nit

.PHONY: maintainer-clean
maintainer-clean: clean
	@echo 'This command is intended for maintainers to use; it'
	@echo 'deletes files that may need special tools to rebuild.'
	rm -f -- ./json_lexer.nit ./json_parser.nit
