#include "mdoc.sep.0.h"
/* method mdoc#MDoc#content for (self: MDoc): Array[String] */
val* mdoc__MDoc__content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <self:MDoc> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "src/model/mdoc.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MDoc#content for (self: Object): Array[String] */
val* VIRTUAL_mdoc__MDoc__content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
{ /* Inline mdoc#MDoc#content (self) on <self:Object(MDoc)> */
var3 = self->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <self:Object(MDoc)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "src/model/mdoc.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MDoc#original_mentity= for (self: MDoc, nullable MEntity) */
void mdoc__MDoc__original_mentity_61d(val* self, val* p0) {
self->attrs[COLOR_mdoc__MDoc___original_mentity].val = p0; /* _original_mentity on <self:MDoc> */
RET_LABEL:;
}
/* method mdoc#MDoc#original_mentity= for (self: Object, nullable MEntity) */
void VIRTUAL_mdoc__MDoc__original_mentity_61d(val* self, val* p0) {
{ /* Inline mdoc#MDoc#original_mentity= (self,p0) on <self:Object(MDoc)> */
self->attrs[COLOR_mdoc__MDoc___original_mentity].val = p0; /* _original_mentity on <self:Object(MDoc)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mdoc#MDoc#init for (self: MDoc) */
void mdoc__MDoc__init(val* self) {
RET_LABEL:;
}
/* method mdoc#MDoc#init for (self: Object) */
void VIRTUAL_mdoc__MDoc__init(val* self) {
{ /* Inline mdoc#MDoc#init (self) on <self:Object(MDoc)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mdoc#MEntity#mdoc for (self: MEntity): nullable MDoc */
val* mdoc__MEntity__mdoc(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_mdoc__MEntity___mdoc].val; /* _mdoc on <self:MEntity> */
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MEntity#mdoc for (self: Object): nullable MDoc */
val* VIRTUAL_mdoc__MEntity__mdoc(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
val* var3 /* : nullable MDoc */;
{ /* Inline mdoc#MEntity#mdoc (self) on <self:Object(MEntity)> */
var3 = self->attrs[COLOR_mdoc__MEntity___mdoc].val; /* _mdoc on <self:Object(MEntity)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mdoc#MEntity#mdoc= for (self: MEntity, nullable MDoc) */
void mdoc__MEntity__mdoc_61d(val* self, val* p0) {
self->attrs[COLOR_mdoc__MEntity___mdoc].val = p0; /* _mdoc on <self:MEntity> */
RET_LABEL:;
}
/* method mdoc#MEntity#mdoc= for (self: Object, nullable MDoc) */
void VIRTUAL_mdoc__MEntity__mdoc_61d(val* self, val* p0) {
{ /* Inline mdoc#MEntity#mdoc= (self,p0) on <self:Object(MEntity)> */
self->attrs[COLOR_mdoc__MEntity___mdoc].val = p0; /* _mdoc on <self:Object(MEntity)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
