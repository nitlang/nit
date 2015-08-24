NITCCDIR=../../contrib/nitcc/

compile-parser: $(NITCCDIR)src/nitcc
	$(NITCCDIR)src/nitcc $(NITCCDIR)examples/json.sablecc

$(NITCCDIR)src/nitcc:
	make -C $(NITCCDIR)
