
ACE_BUILDS ?= ../../../ace-builds/

default:
	../../bin/nitg --semi-global sources/nit/pnacl_nit.nit -I ../../src/
	cp pnacl_nit/pnacl_nit.pexe www/pnacl/ -f
	rm -rf pnacl_nit/
	rm -rf .nit_compile

build-www:
	rm -rf www/src
	cp -r $(ACE_BUILDS)/src www/
	cp setup/mode-nit.js www/src/
	cp setup/nit.js www/src/snippets/

HTTPD_PY := python $(NACL_SDK_ROOT)/tools/httpd.py
serve:
	cd www/; \
	 $(HTTPD_PY) -C . --no-dir-check

.PHONY: serve
