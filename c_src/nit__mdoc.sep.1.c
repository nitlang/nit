#include "nit__mdoc.sep.0.h"
/* method mdoc#MDoc#content for (self: MDoc): Array[String] */
val* nit___nit__MDoc___content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <self:MDoc> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MDoc#original_mentity= for (self: MDoc, nullable MEntity) */
void nit___nit__MDoc___original_mentity_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = p0; /* _original_mentity on <self:MDoc> */
RET_LABEL:;
}
/* method mdoc#MEntity#mdoc for (self: MEntity): nullable MDoc */
val* nit__mdoc___MEntity___mdoc(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_nit__mdoc__MEntity___mdoc].val; /* _mdoc on <self:MEntity> */
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MEntity#mdoc= for (self: MEntity, nullable MDoc) */
void nit__mdoc___MEntity___mdoc_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = p0; /* _mdoc on <self:MEntity> */
RET_LABEL:;
}
/* method mdoc#MEntity#deprecation for (self: MEntity): nullable MDeprecationInfo */
val* nit__mdoc___MEntity___deprecation(val* self) {
val* var /* : nullable MDeprecationInfo */;
val* var1 /* : nullable MDeprecationInfo */;
var1 = self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <self:MEntity> */
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MEntity#deprecation= for (self: MEntity, nullable MDeprecationInfo) */
void nit__mdoc___MEntity___deprecation_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = p0; /* _deprecation on <self:MEntity> */
RET_LABEL:;
}
/* method mdoc#MDeprecationInfo#mdoc for (self: MDeprecationInfo): nullable MDoc */
val* nit___nit__MDeprecationInfo___mdoc(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val; /* _mdoc on <self:MDeprecationInfo> */
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MDeprecationInfo#mdoc= for (self: MDeprecationInfo, nullable MDoc) */
void nit___nit__MDeprecationInfo___mdoc_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val = p0; /* _mdoc on <self:MDeprecationInfo> */
RET_LABEL:;
}
