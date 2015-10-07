NITCCDIR=../../contrib/nitcc/

pre-build: $(NITCCDIR)src/nitcc
	$(NITCCDIR)src/nitcc $(NITCCDIR)examples/json.sablecc

$(NITCCDIR)src/nitcc:
	make -C $(NITCCDIR)
