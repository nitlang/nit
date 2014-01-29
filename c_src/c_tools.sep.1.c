#include "c_tools.sep.0.h"
/* method c_tools#CCompilationUnit#header_c_base for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__header_c_base(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_base].val; /* @header_c_base on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header_c_base");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 24);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_c_base for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__header_c_base(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__header_c_base(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_c_base= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__header_c_base_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_base].val = p0; /* @header_c_base on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_c_base= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__header_c_base_61d(val* self, val* p0) {
c_tools__CCompilationUnit__header_c_base_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_custom for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__header_custom(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_custom].val; /* @header_custom on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header_custom");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 28);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_custom for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__header_custom(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__header_custom(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_custom= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__header_custom_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_custom].val = p0; /* @header_custom on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_custom= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__header_custom_61d(val* self, val* p0) {
c_tools__CCompilationUnit__header_custom_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_c_types for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__header_c_types(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_types].val; /* @header_c_types on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header_c_types");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 31);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_c_types for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__header_c_types(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__header_c_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_c_types= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__header_c_types_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_types].val = p0; /* @header_c_types on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_c_types= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__header_c_types_61d(val* self, val* p0) {
c_tools__CCompilationUnit__header_c_types_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_decl for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__header_decl(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_decl].val; /* @header_decl on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header_decl");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 34);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_decl for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__header_decl(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__header_decl(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_decl= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__header_decl_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_decl].val = p0; /* @header_decl on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#header_decl= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__header_decl_61d(val* self, val* p0) {
c_tools__CCompilationUnit__header_decl_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#body_decl for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__body_decl(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_decl].val; /* @body_decl on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @body_decl");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 37);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_decl for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__body_decl(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__body_decl(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_decl= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__body_decl_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_decl].val = p0; /* @body_decl on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#body_decl= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__body_decl_61d(val* self, val* p0) {
c_tools__CCompilationUnit__body_decl_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#body_custom for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__body_custom(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_custom].val; /* @body_custom on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @body_custom");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 41);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_custom for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__body_custom(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__body_custom(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_custom= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__body_custom_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_custom].val = p0; /* @body_custom on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#body_custom= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__body_custom_61d(val* self, val* p0) {
c_tools__CCompilationUnit__body_custom_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#body_impl for (self: CCompilationUnit): Writer */
val* c_tools__CCompilationUnit__body_impl(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_impl].val; /* @body_impl on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @body_impl");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 44);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_impl for (self: Object): Writer */
val* VIRTUAL_c_tools__CCompilationUnit__body_impl(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CCompilationUnit__body_impl(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_impl= for (self: CCompilationUnit, Writer) */
void c_tools__CCompilationUnit__body_impl_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_impl].val = p0; /* @body_impl on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#body_impl= for (self: Object, Writer) */
void VIRTUAL_c_tools__CCompilationUnit__body_impl_61d(val* self, val* p0) {
c_tools__CCompilationUnit__body_impl_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#files for (self: CCompilationUnit): Array[String] */
val* c_tools__CCompilationUnit__files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_c_tools__CCompilationUnit___64dfiles].val; /* @files on <self:CCompilationUnit> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @files");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 47);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#files for (self: Object): Array[String] */
val* VIRTUAL_c_tools__CCompilationUnit__files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = c_tools__CCompilationUnit__files(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#files= for (self: CCompilationUnit, Array[String]) */
void c_tools__CCompilationUnit__files_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CCompilationUnit___64dfiles].val = p0; /* @files on <self:CCompilationUnit> */
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#files= for (self: Object, Array[String]) */
void VIRTUAL_c_tools__CCompilationUnit__files_61d(val* self, val* p0) {
c_tools__CCompilationUnit__files_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#add_local_function for (self: CCompilationUnit, CFunction) */
void c_tools__CCompilationUnit__add_local_function(val* self, val* p0) {
val* var_efc /* var efc: CFunction */;
val* var /* : Writer */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
val* var10 /* : Writer */;
val* var11 /* : Writer */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Writer */;
val* var18 /* : Writer */;
val* var19 /* : Writer */;
val* var20 /* : Writer */;
var_efc = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_decl]))(self) /* body_decl on <self:CCompilationUnit>*/;
var1 = ((val* (*)(val*))(var_efc->class->vft[COLOR_c_tools__CFunction__signature]))(var_efc) /* signature on <var_efc:CFunction>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = ";\n";
var4 = 2;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var2;
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
}
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
var10 = ((val* (*)(val*, val*))(var->class->vft[COLOR_compiling_writer__Writer__add]))(var, var9) /* add on <var:Writer>*/;
var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_impl]))(self) /* body_impl on <self:CCompilationUnit>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "\n";
var15 = 1;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_compiling_writer__Writer__add]))(var11, var13) /* add on <var11:Writer>*/;
var17;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_impl]))(self) /* body_impl on <self:CCompilationUnit>*/;
var19 = ((val* (*)(val*))(var_efc->class->vft[COLOR_c_tools__CFunction__to_writer]))(var_efc) /* to_writer on <var_efc:CFunction>*/;
var20 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_compiling_writer__Writer__append]))(var18, var19) /* append on <var18:Writer>*/;
var20;
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#add_local_function for (self: Object, CFunction) */
void VIRTUAL_c_tools__CCompilationUnit__add_local_function(val* self, val* p0) {
c_tools__CCompilationUnit__add_local_function(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#add_exported_function for (self: CCompilationUnit, CFunction) */
void c_tools__CCompilationUnit__add_exported_function(val* self, val* p0) {
val* var_efc /* var efc: CFunction */;
val* var /* : Writer */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
val* var10 /* : Writer */;
val* var11 /* : Writer */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Writer */;
val* var18 /* : Writer */;
val* var19 /* : Writer */;
val* var20 /* : Writer */;
var_efc = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(self) /* header_decl on <self:CCompilationUnit>*/;
var1 = ((val* (*)(val*))(var_efc->class->vft[COLOR_c_tools__CFunction__signature]))(var_efc) /* signature on <var_efc:CFunction>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = ";\n";
var4 = 2;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var2;
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
}
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
var10 = ((val* (*)(val*, val*))(var->class->vft[COLOR_compiling_writer__Writer__add]))(var, var9) /* add on <var:Writer>*/;
var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_impl]))(self) /* body_impl on <self:CCompilationUnit>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "\n";
var15 = 1;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_compiling_writer__Writer__add]))(var11, var13) /* add on <var11:Writer>*/;
var17;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_impl]))(self) /* body_impl on <self:CCompilationUnit>*/;
var19 = ((val* (*)(val*))(var_efc->class->vft[COLOR_c_tools__CFunction__to_writer]))(var_efc) /* to_writer on <var_efc:CFunction>*/;
var20 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_compiling_writer__Writer__append]))(var18, var19) /* append on <var18:Writer>*/;
var20;
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#add_exported_function for (self: Object, CFunction) */
void VIRTUAL_c_tools__CCompilationUnit__add_exported_function(val* self, val* p0) {
c_tools__CCompilationUnit__add_exported_function(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_header_core for (self: CCompilationUnit, OStream) */
void c_tools__CCompilationUnit__compile_header_core(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
val* var /* : Writer */;
val* var1 /* : Writer */;
val* var2 /* : Writer */;
val* var3 /* : Writer */;
var_stream = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__header_c_base]))(self) /* header_c_base on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var, var_stream) /* write_to_stream on <var:Writer>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(self) /* header_custom on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var1, var_stream) /* write_to_stream on <var1:Writer>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(self) /* header_c_types on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var2, var_stream) /* write_to_stream on <var2:Writer>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(self) /* header_decl on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var3, var_stream) /* write_to_stream on <var3:Writer>*/;
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_header_core for (self: Object, OStream) */
void VIRTUAL_c_tools__CCompilationUnit__compile_header_core(val* self, val* p0) {
c_tools__CCompilationUnit__compile_header_core(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_body_core for (self: CCompilationUnit, OStream) */
void c_tools__CCompilationUnit__compile_body_core(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
val* var /* : Writer */;
val* var1 /* : Writer */;
val* var2 /* : Writer */;
var_stream = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_decl]))(self) /* body_decl on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var, var_stream) /* write_to_stream on <var:Writer>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_custom]))(self) /* body_custom on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var1, var_stream) /* write_to_stream on <var1:Writer>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__body_impl]))(self) /* body_impl on <self:CCompilationUnit>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_compiling_writer__Writer__write_to_stream]))(var2, var_stream) /* write_to_stream on <var2:Writer>*/;
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_body_core for (self: Object, OStream) */
void VIRTUAL_c_tools__CCompilationUnit__compile_body_core(val* self, val* p0) {
c_tools__CCompilationUnit__compile_body_core(self, p0);
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#init for (self: CCompilationUnit) */
void c_tools__CCompilationUnit__init(val* self) {
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#init for (self: Object) */
void VIRTUAL_c_tools__CCompilationUnit__init(val* self) {
c_tools__CCompilationUnit__init(self);
RET_LABEL:;
}
/* method c_tools#CFunction#signature for (self: CFunction): String */
val* c_tools__CFunction__signature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c_tools__CFunction___64dsignature].val; /* @signature on <self:CFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @signature");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 82);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#signature for (self: Object): String */
val* VIRTUAL_c_tools__CFunction__signature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_tools__CFunction__signature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#signature= for (self: CFunction, String) */
void c_tools__CFunction__signature_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CFunction___64dsignature].val = p0; /* @signature on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools#CFunction#signature= for (self: Object, String) */
void VIRTUAL_c_tools__CFunction__signature_61d(val* self, val* p0) {
c_tools__CFunction__signature_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CFunction#decls for (self: CFunction): Writer */
val* c_tools__CFunction__decls(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CFunction___64ddecls].val; /* @decls on <self:CFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @decls");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 84);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#decls for (self: Object): Writer */
val* VIRTUAL_c_tools__CFunction__decls(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CFunction__decls(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#decls= for (self: CFunction, Writer) */
void c_tools__CFunction__decls_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CFunction___64ddecls].val = p0; /* @decls on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools#CFunction#decls= for (self: Object, Writer) */
void VIRTUAL_c_tools__CFunction__decls_61d(val* self, val* p0) {
c_tools__CFunction__decls_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CFunction#exprs for (self: CFunction): Writer */
val* c_tools__CFunction__exprs(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_c_tools__CFunction___64dexprs].val; /* @exprs on <self:CFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @exprs");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 85);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#exprs for (self: Object): Writer */
val* VIRTUAL_c_tools__CFunction__exprs(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CFunction__exprs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#exprs= for (self: CFunction, Writer) */
void c_tools__CFunction__exprs_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__CFunction___64dexprs].val = p0; /* @exprs on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools#CFunction#exprs= for (self: Object, Writer) */
void VIRTUAL_c_tools__CFunction__exprs_61d(val* self, val* p0) {
c_tools__CFunction__exprs_61d(self, p0);
RET_LABEL:;
}
/* method c_tools#CFunction#to_writer for (self: CFunction): Writer */
val* c_tools__CFunction__to_writer(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
val* var_w /* var w: Writer */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
val* var11 /* : Writer */;
val* var12 /* : Writer */;
val* var13 /* : Writer */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Writer */;
val* var20 /* : Writer */;
val* var21 /* : Writer */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Writer */;
var1 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var1->class->vft[COLOR_compiling_writer__Writer__init]))(var1) /* init on <var1:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var1);
var_w = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CFunction__signature]))(self) /* signature on <self:CFunction>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "\n{\n";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var3;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
var11 = ((val* (*)(val*, val*))(var_w->class->vft[COLOR_compiling_writer__Writer__add]))(var_w, var10) /* add on <var_w:Writer>*/;
var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CFunction__decls]))(self) /* decls on <self:CFunction>*/;
var13 = ((val* (*)(val*, val*))(var_w->class->vft[COLOR_compiling_writer__Writer__append]))(var_w, var12) /* append on <var_w:Writer>*/;
var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "\n";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = ((val* (*)(val*, val*))(var_w->class->vft[COLOR_compiling_writer__Writer__add]))(var_w, var15) /* add on <var_w:Writer>*/;
var19;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CFunction__exprs]))(self) /* exprs on <self:CFunction>*/;
var21 = ((val* (*)(val*, val*))(var_w->class->vft[COLOR_compiling_writer__Writer__append]))(var_w, var20) /* append on <var_w:Writer>*/;
var21;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "}\n";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*, val*))(var_w->class->vft[COLOR_compiling_writer__Writer__add]))(var_w, var23) /* add on <var_w:Writer>*/;
var27;
var = var_w;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#to_writer for (self: Object): Writer */
val* VIRTUAL_c_tools__CFunction__to_writer(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = c_tools__CFunction__to_writer(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#init for (self: CFunction, String) */
void c_tools__CFunction__init(val* self, val* p0) {
self->attrs[COLOR_c_tools__CFunction___64dsignature].val = p0; /* @signature on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools#CFunction#init for (self: Object, String) */
void VIRTUAL_c_tools__CFunction__init(val* self, val* p0) {
c_tools__CFunction__init(self, p0);
RET_LABEL:;
}
