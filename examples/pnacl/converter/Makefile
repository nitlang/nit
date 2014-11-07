default: 
	../../../bin/nitg --semi-global converter.nit

HTTPD_PY := python $(NACL_SDK_ROOT)/tools/httpd.py
serve:
	$(HTTPD_PY) -C . --no-dir-check

.PHONY: serve
