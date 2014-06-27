default:
	../../bin/nitg --global sources/nit/pnacl_nit.nit -I ../../src/
	cp pnacl_nit/pnacl_nit.pexe www/pnacl/ -f
	rm -rf pnacl_nit/
	rm -rf .nit_compile

HTTPD_PY := python $(NACL_SDK_ROOT)/tools/httpd.py
serve:
	cd www/; \
	 $(HTTPD_PY) -C . --no-dir-check

.PHONY: serve
