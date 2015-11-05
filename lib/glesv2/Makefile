# Generate basic Nit wrapper for glesv2, must be adapted by hands afterwards
glesv2_stub.nit:
	cat /usr/include/GLES2/gl2.h | sed \
		-e "s/GL_APICALL void GL_APIENTRY \([^ ]*\) /fun \1 \`{ \1/" \
		-e "s/GL_APICALL [^ ]* GL_APIENTRY \([^ ]*\) /fun \1: Int \`{ return \1/" \
		-e "s/;/; \`}/" \
		-e "s/#define GL_\([^ ]*\) .*/fun gl_\1: Int \`{ return GL_\1; \`}/" | grep fun > $@

.PHONY: glesv2_stub.nit
