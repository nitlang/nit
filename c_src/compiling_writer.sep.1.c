#include "compiling_writer.sep.0.h"
/* method compiling_writer#Writer#add for (self: Writer, String): Writer */
val* compiling_writer__Writer__add(val* self, val* p0) {
val* var /* : Writer */;
val* var_s /* var s: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable WriterStrings */;
val* var_c /* var c: nullable WriterStrings */;
val* var4 /* : WriterStrings */;
val* var_c2 /* var c2: WriterStrings */;
val* var5 /* : null */;
short int var6 /* : Bool */;
var_s = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_compiling_writer__Writer__is_frozen]))(self) /* is_frozen on <self:Writer>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 26);
exit(1);
}
var3 = self->attrs[COLOR_compiling_writer__Writer___last_string].val; /* _last_string on <self:Writer> */
var_c = var3;
var4 = NEW_compiling_writer__WriterStrings(&type_compiling_writer__WriterStrings);
((void (*)(val*, val*))(var4->class->vft[COLOR_compiling_writer__WriterStrings__init]))(var4, var_s) /* init on <var4:WriterStrings>*/;
CHECK_NEW_compiling_writer__WriterStrings(var4);
var_c2 = var4;
var5 = NULL;
if (var_c == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
((void (*)(val*, val*))(self->class->vft[COLOR_compiling_writer__Writer__internal_append]))(self, var_c2) /* internal_append on <self:Writer>*/;
} else {
var_c->attrs[COLOR_compiling_writer__WriterStrings___next].val = var_c2; /* _next on <var_c:nullable WriterStrings(WriterStrings)> */
}
self->attrs[COLOR_compiling_writer__Writer___last_string].val = var_c2; /* _last_string on <self:Writer> */
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#add for (self: Object, String): Writer */
val* VIRTUAL_compiling_writer__Writer__add(val* self, val* p0) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = compiling_writer__Writer__add(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#add_all for (self: Writer, Array[String], String): Writer */
val* compiling_writer__Writer__add_all(val* self, val* p0, val* p1) {
val* var /* : Writer */;
val* var_a /* var a: Array[String] */;
val* var_separator /* var separator: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_first /* var first: Bool */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_s /* var s: String */;
short int var7 /* : Bool */;
val* var8 /* : Writer */;
val* var9 /* : Writer */;
var_a = p0;
var_separator = p1;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_compiling_writer__Writer__is_frozen]))(self) /* is_frozen on <self:Writer>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 41);
exit(1);
}
var3 = 1;
var_first = var3;
var4 = ((val* (*)(val*))(var_a->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_a) /* iterator on <var_a:Array[String]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_s = var6;
if (var_first){
var7 = 0;
var_first = var7;
} else {
var8 = ((val* (*)(val*, val*))(self->class->vft[COLOR_compiling_writer__Writer__add]))(self, var_separator) /* add on <self:Writer>*/;
var8;
}
var9 = ((val* (*)(val*, val*))(self->class->vft[COLOR_compiling_writer__Writer__add]))(self, var_s) /* add on <self:Writer>*/;
var9;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#add_all for (self: Object, Array[String], String): Writer */
val* VIRTUAL_compiling_writer__Writer__add_all(val* self, val* p0, val* p1) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = compiling_writer__Writer__add_all(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#append for (self: Writer, Writer): Writer */
val* compiling_writer__Writer__append(val* self, val* p0) {
val* var /* : Writer */;
val* var_c /* var c: Writer */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : WriterCoreNode */;
val* var4 /* : null */;
var_c = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_compiling_writer__Writer__is_frozen]))(self) /* is_frozen on <self:Writer>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 59);
exit(1);
}
var3 = NEW_compiling_writer__WriterCoreNode(&type_compiling_writer__WriterCoreNode);
((void (*)(val*, val*))(var3->class->vft[COLOR_compiling_writer__WriterCoreNode__init]))(var3, var_c) /* init on <var3:WriterCoreNode>*/;
CHECK_NEW_compiling_writer__WriterCoreNode(var3);
((void (*)(val*, val*))(self->class->vft[COLOR_compiling_writer__Writer__internal_append]))(self, var3) /* internal_append on <self:Writer>*/;
var4 = NULL;
self->attrs[COLOR_compiling_writer__Writer___last_string].val = var4; /* _last_string on <self:Writer> */
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#append for (self: Object, Writer): Writer */
val* VIRTUAL_compiling_writer__Writer__append(val* self, val* p0) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = compiling_writer__Writer__append(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#internal_append for (self: Writer, WriterNode) */
void compiling_writer__Writer__internal_append(val* self, val* p0) {
val* var_c /* var c: WriterNode */;
val* var /* : nullable WriterNode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable WriterNode */;
val* var_l /* var l: nullable WriterNode */;
val* var4 /* : null */;
short int var5 /* : Bool */;
var_c = p0;
var = self->attrs[COLOR_compiling_writer__Writer___first_sub_writer].val; /* _first_sub_writer on <self:Writer> */
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
self->attrs[COLOR_compiling_writer__Writer___first_sub_writer].val = var_c; /* _first_sub_writer on <self:Writer> */
} else {
}
var3 = self->attrs[COLOR_compiling_writer__Writer___last_sub_writer].val; /* _last_sub_writer on <self:Writer> */
var_l = var3;
var4 = NULL;
if (var_l == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var_l->attrs[COLOR_compiling_writer__WriterNode___next_writer].val = var_c; /* _next_writer on <var_l:nullable WriterNode(WriterNode)> */
} else {
}
self->attrs[COLOR_compiling_writer__Writer___last_sub_writer].val = var_c; /* _last_sub_writer on <self:Writer> */
RET_LABEL:;
}
/* method compiling_writer#Writer#internal_append for (self: Object, WriterNode) */
void VIRTUAL_compiling_writer__Writer__internal_append(val* self, val* p0) {
compiling_writer__Writer__internal_append(self, p0);
RET_LABEL:;
}
/* method compiling_writer#Writer#sub for (self: Writer): Writer */
val* compiling_writer__Writer__sub(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
val* var_c /* var c: Writer */;
val* var2 /* : Writer */;
var1 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var1->class->vft[COLOR_compiling_writer__Writer__init]))(var1) /* init on <var1:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var1);
var_c = var1;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_compiling_writer__Writer__append]))(self, var_c) /* append on <self:Writer>*/;
var2;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#sub for (self: Object): Writer */
val* VIRTUAL_compiling_writer__Writer__sub(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = compiling_writer__Writer__sub(self);
var = var1;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#write_to_stream for (self: Writer, OStream) */
void compiling_writer__Writer__write_to_stream(val* self, val* p0) {
val* var_s /* var s: OStream */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable WriterNode */;
val* var_cur /* var cur: nullable WriterNode */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable WriterNode */;
short int var7 /* : Bool */;
var_s = p0;
var = self->attrs[COLOR_compiling_writer__Writer___is_writing].s; /* _is_writing on <self:Writer> */
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 87);
exit(1);
}
var2 = 1;
self->attrs[COLOR_compiling_writer__Writer___is_writing].s = var2; /* _is_writing on <self:Writer> */
var3 = self->attrs[COLOR_compiling_writer__Writer___first_sub_writer].val; /* _first_sub_writer on <self:Writer> */
var_cur = var3;
for(;;) {
var4 = NULL;
if (var_cur == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
((void (*)(val*, val*))(var_cur->class->vft[COLOR_compiling_writer__WriterNode__internal_write_to_stream]))(var_cur, var_s) /* internal_write_to_stream on <var_cur:nullable WriterNode(WriterNode)>*/;
var6 = var_cur->attrs[COLOR_compiling_writer__WriterNode___next_writer].val; /* _next_writer on <var_cur:nullable WriterNode(WriterNode)> */
var_cur = var6;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var7 = 0;
self->attrs[COLOR_compiling_writer__Writer___is_writing].s = var7; /* _is_writing on <self:Writer> */
RET_LABEL:;
}
/* method compiling_writer#Writer#write_to_stream for (self: Object, OStream) */
void VIRTUAL_compiling_writer__Writer__write_to_stream(val* self, val* p0) {
compiling_writer__Writer__write_to_stream(self, p0);
RET_LABEL:;
}
/* method compiling_writer#Writer#is_frozen for (self: Writer): Bool */
short int compiling_writer__Writer__is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_compiling_writer__Writer___is_frozen].s; /* _is_frozen on <self:Writer> */
var = var1;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#is_frozen for (self: Object): Bool */
short int VIRTUAL_compiling_writer__Writer__is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = compiling_writer__Writer__is_frozen(self);
var = var1;
RET_LABEL:;
return var;
}
/* method compiling_writer#Writer#freeze for (self: Writer) */
void compiling_writer__Writer__freeze(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var = ((short int (*)(val*))(self->class->vft[COLOR_compiling_writer__Writer__is_frozen]))(self) /* is_frozen on <self:Writer>*/;
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
self->attrs[COLOR_compiling_writer__Writer___is_frozen].s = var1; /* _is_frozen on <self:Writer> */
RET_LABEL:;
}
/* method compiling_writer#Writer#freeze for (self: Object) */
void VIRTUAL_compiling_writer__Writer__freeze(val* self) {
compiling_writer__Writer__freeze(self);
RET_LABEL:;
}
/* method compiling_writer#Writer#init for (self: Writer) */
void compiling_writer__Writer__init(val* self) {
RET_LABEL:;
}
/* method compiling_writer#Writer#init for (self: Object) */
void VIRTUAL_compiling_writer__Writer__init(val* self) {
compiling_writer__Writer__init(self);
RET_LABEL:;
}
/* method compiling_writer#WriterNode#internal_write_to_stream for (self: WriterNode, OStream) */
void compiling_writer__WriterNode__internal_write_to_stream(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "internal_write_to_stream", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 115);
exit(1);
RET_LABEL:;
}
/* method compiling_writer#WriterNode#internal_write_to_stream for (self: Object, OStream) */
void VIRTUAL_compiling_writer__WriterNode__internal_write_to_stream(val* self, val* p0) {
compiling_writer__WriterNode__internal_write_to_stream(self, p0);
RET_LABEL:;
}
/* method compiling_writer#WriterNode#init for (self: WriterNode) */
void compiling_writer__WriterNode__init(val* self) {
RET_LABEL:;
}
/* method compiling_writer#WriterNode#init for (self: Object) */
void VIRTUAL_compiling_writer__WriterNode__init(val* self) {
compiling_writer__WriterNode__init(self);
RET_LABEL:;
}
/* method compiling_writer#WriterCoreNode#internal_write_to_stream for (self: WriterCoreNode, OStream) */
void compiling_writer__WriterCoreNode__internal_write_to_stream(val* self, val* p0) {
val* var_s /* var s: OStream */;
val* var /* : Writer */;
var_s = p0;
var = self->attrs[COLOR_compiling_writer__WriterCoreNode___writer].val; /* _writer on <self:WriterCoreNode> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _writer");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 124);
exit(1);
}
((void (*)(val*, val*))(var->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var, var_s) /* write_to_stream on <var:Writer>*/;
RET_LABEL:;
}
/* method compiling_writer#WriterCoreNode#internal_write_to_stream for (self: Object, OStream) */
void VIRTUAL_compiling_writer__WriterCoreNode__internal_write_to_stream(val* self, val* p0) {
compiling_writer__WriterCoreNode__internal_write_to_stream(self, p0);
RET_LABEL:;
}
/* method compiling_writer#WriterCoreNode#init for (self: WriterCoreNode, Writer) */
void compiling_writer__WriterCoreNode__init(val* self, val* p0) {
val* var_w /* var w: Writer */;
var_w = p0;
((void (*)(val*))(self->class->vft[COLOR_compiling_writer__WriterNode__init]))(self) /* init on <self:WriterCoreNode>*/;
self->attrs[COLOR_compiling_writer__WriterCoreNode___writer].val = var_w; /* _writer on <self:WriterCoreNode> */
RET_LABEL:;
}
/* method compiling_writer#WriterCoreNode#init for (self: Object, Writer) */
void VIRTUAL_compiling_writer__WriterCoreNode__init(val* self, val* p0) {
compiling_writer__WriterCoreNode__init(self, p0);
RET_LABEL:;
}
/* method compiling_writer#WriterStrings#init for (self: WriterStrings, String) */
void compiling_writer__WriterStrings__init(val* self, val* p0) {
val* var_s /* var s: String */;
var_s = p0;
((void (*)(val*))(self->class->vft[COLOR_compiling_writer__WriterNode__init]))(self) /* init on <self:WriterStrings>*/;
self->attrs[COLOR_compiling_writer__WriterStrings___string].val = var_s; /* _string on <self:WriterStrings> */
RET_LABEL:;
}
/* method compiling_writer#WriterStrings#init for (self: Object, String) */
void VIRTUAL_compiling_writer__WriterStrings__init(val* self, val* p0) {
compiling_writer__WriterStrings__init(self, p0);
RET_LABEL:;
}
/* method compiling_writer#WriterStrings#internal_write_to_stream for (self: WriterStrings, OStream) */
void compiling_writer__WriterStrings__internal_write_to_stream(val* self, val* p0) {
val* var_s /* var s: OStream */;
val* var_cur /* var cur: nullable WriterStrings */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : nullable WriterStrings */;
var_s = p0;
var_cur = self;
for(;;) {
var = NULL;
if (var_cur == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (!var1) break;
var2 = var_cur->attrs[COLOR_compiling_writer__WriterStrings___string].val; /* _string on <var_cur:nullable WriterStrings(WriterStrings)> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 147);
exit(1);
}
((void (*)(val*, val*))(var_s->class->vft[COLOR_stream__OStream__write]))(var_s, var2) /* write on <var_s:OStream>*/;
var3 = var_cur->attrs[COLOR_compiling_writer__WriterStrings___next].val; /* _next on <var_cur:nullable WriterStrings(WriterStrings)> */
var_cur = var3;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method compiling_writer#WriterStrings#internal_write_to_stream for (self: Object, OStream) */
void VIRTUAL_compiling_writer__WriterStrings__internal_write_to_stream(val* self, val* p0) {
compiling_writer__WriterStrings__internal_write_to_stream(self, p0);
RET_LABEL:;
}
