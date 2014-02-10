#include "compiler_ffi.sep.0.h"
/* method compiler_ffi#AModule#foreign_callbacks for (self: AModule): ForeignCallbackSet */
val* compiler_ffi__AModule__foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : ForeignCallbackSet */;
var1 = self->attrs[COLOR_compiler_ffi__AModule___64dforeign_callbacks].val; /* @foreign_callbacks on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @foreign_callbacks");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 25);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#foreign_callbacks for (self: Object): ForeignCallbackSet */
val* VIRTUAL_compiler_ffi__AModule__foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : ForeignCallbackSet */;
var1 = compiler_ffi__AModule__foreign_callbacks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#foreign_callbacks= for (self: AModule, ForeignCallbackSet) */
void compiler_ffi__AModule__foreign_callbacks_61d(val* self, val* p0) {
self->attrs[COLOR_compiler_ffi__AModule___64dforeign_callbacks].val = p0; /* @foreign_callbacks on <self:AModule> */
RET_LABEL:;
}
/* method compiler_ffi#AModule#foreign_callbacks= for (self: Object, ForeignCallbackSet) */
void VIRTUAL_compiler_ffi__AModule__foreign_callbacks_61d(val* self, val* p0) {
compiler_ffi__AModule__foreign_callbacks_61d(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AModule#nitni_ccu for (self: AModule): nullable CCompilationUnit */
val* compiler_ffi__AModule__nitni_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_compiler_ffi__AModule___64dnitni_ccu].val; /* @nitni_ccu on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#nitni_ccu for (self: Object): nullable CCompilationUnit */
val* VIRTUAL_compiler_ffi__AModule__nitni_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = compiler_ffi__AModule__nitni_ccu(self);
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#nitni_ccu= for (self: AModule, nullable CCompilationUnit) */
void compiler_ffi__AModule__nitni_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_compiler_ffi__AModule___64dnitni_ccu].val = p0; /* @nitni_ccu on <self:AModule> */
RET_LABEL:;
}
/* method compiler_ffi#AModule#nitni_ccu= for (self: Object, nullable CCompilationUnit) */
void VIRTUAL_compiler_ffi__AModule__nitni_ccu_61d(val* self, val* p0) {
compiler_ffi__AModule__nitni_ccu_61d(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AModule#uses_legacy_ni for (self: AModule): Bool */
short int compiler_ffi__AModule__uses_legacy_ni(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_compiler_ffi__AModule___64duses_legacy_ni].s; /* @uses_legacy_ni on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#uses_legacy_ni for (self: Object): Bool */
short int VIRTUAL_compiler_ffi__AModule__uses_legacy_ni(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = compiler_ffi__AModule__uses_legacy_ni(self);
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#uses_legacy_ni= for (self: AModule, Bool) */
void compiler_ffi__AModule__uses_legacy_ni_61d(val* self, short int p0) {
self->attrs[COLOR_compiler_ffi__AModule___64duses_legacy_ni].s = p0; /* @uses_legacy_ni on <self:AModule> */
RET_LABEL:;
}
/* method compiler_ffi#AModule#uses_legacy_ni= for (self: Object, Bool) */
void VIRTUAL_compiler_ffi__AModule__uses_legacy_ni_61d(val* self, short int p0) {
compiler_ffi__AModule__uses_legacy_ni_61d(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AModule#finalize_ffi for (self: AModule, AbstractCompilerVisitor, ModelBuilder) */
void compiler_ffi__AModule__finalize_ffi(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var6 /* : Array[ExternFile] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_file /* var file: ExternFile */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : Array[ExternFile] */;
var_v = p0;
var_modelbuilder = p1;
if (varonce) {
var = varonce;
} else {
var1 = ".nit_compile";
var2 = 12;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var4) /* mainmodule on <var4:AbstractCompiler>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_common_ffi__AModule__finalize_ffi_wrapper]))(self, var, var5) /* finalize_ffi_wrapper on <self:AModule>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AModule__ffi_files]))(self) /* ffi_files on <self:AModule>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Array[ExternFile]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_file = var9;
var10 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var10) /* extern_bodies on <var10:AbstractCompiler>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var_file) /* add on <var11:Array[ExternFile]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method compiler_ffi#AModule#finalize_ffi for (self: Object, AbstractCompilerVisitor, ModelBuilder) */
void VIRTUAL_compiler_ffi__AModule__finalize_ffi(val* self, val* p0, val* p1) {
compiler_ffi__AModule__finalize_ffi(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#AModule#ensure_compile_nitni_base for (self: AModule, AbstractCompilerVisitor) */
void compiler_ffi__AModule__ensure_compile_nitni_base(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable CCompilationUnit */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : CCompilationUnit */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = NEW_c_tools__CCompilationUnit(&type_c_tools__CCompilationUnit);
((void (*)(val*))(var3->class->vft[COLOR_c_tools__CCompilationUnit__init]))(var3) /* init on <var3:CCompilationUnit>*/;
CHECK_NEW_c_tools__CCompilationUnit(var3);
((void (*)(val*, val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu_61d]))(self, var3) /* nitni_ccu= on <self:AModule>*/;
RET_LABEL:;
}
/* method compiler_ffi#AModule#ensure_compile_nitni_base for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_compiler_ffi__AModule__ensure_compile_nitni_base(val* self, val* p0) {
compiler_ffi__AModule__ensure_compile_nitni_base(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AModule#finalize_nitni for (self: AModule, AbstractCompilerVisitor) */
void compiler_ffi__AModule__finalize_nitni(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable CCompilationUnit */;
val* var1 /* : Writer */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : nullable MModule */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : Writer */;
val* var18 /* : nullable CCompilationUnit */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : nullable CCompilationUnit */;
val* var25 /* : Array[String] */;
val* var26 /* : Iterator[nullable Object] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_file /* var file: String */;
val* var29 /* : AbstractCompiler */;
val* var30 /* : Array[ExternFile] */;
val* var31 /* : ExternCFile */;
val* var32 /* : String */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_compiler_ffi__AModule__ensure_compile_nitni_base]))(self, var_v) /* ensure_compile_nitni_base on <self:AModule>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 47);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var) /* header_c_types on <var:nullable CCompilationUnit>*/;
}
if (varonce) {
var2 = varonce;
} else {
var3 = "#include \"";
var4 = 10;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__AModule__mmodule]))(self) /* mmodule on <self:AModule>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 47);
exit(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model_base__MModule__name]))(var6) /* name on <var6:nullable MModule>*/;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = "._ffi.h\"\n";
var11 = 9;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
var17 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_compiling_writer__Writer__add]))(var1, var16) /* add on <var1:Writer>*/;
var17;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = ".nit_compile";
var22 = 12;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 49);
exit(1);
} else {
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_compiler_ffi__CCompilationUnit__write_as_nitni]))(var18, self, var20) /* write_as_nitni on <var18:nullable CCompilationUnit>*/;
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 51);
exit(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_c_tools__CCompilationUnit__files]))(var24) /* files on <var24:nullable CCompilationUnit>*/;
}
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Collection__iterator]))(var25) /* iterator on <var25:Array[String]>*/;
for(;;) {
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[nullable Object]>*/;
if(!var27) break;
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[nullable Object]>*/;
var_file = var28;
var29 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var29) /* extern_bodies on <var29:AbstractCompiler>*/;
var31 = NEW_c__ExternCFile(&type_c__ExternCFile);
var32 = ((val* (*)(val*))(self->class->vft[COLOR_c__AModule__c_compiler_options]))(self) /* c_compiler_options on <self:AModule>*/;
((void (*)(val*, val*, val*))(var31->class->vft[COLOR_c__ExternCFile__init]))(var31, var_file, var32) /* init on <var31:ExternCFile>*/;
CHECK_NEW_c__ExternCFile(var31);
((void (*)(val*, val*))(var30->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var30, var31) /* add on <var30:Array[ExternFile]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method compiler_ffi#AModule#finalize_nitni for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_compiler_ffi__AModule__finalize_nitni(val* self, val* p0) {
compiler_ffi__AModule__finalize_nitni(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AModule#compiled_callbacks for (self: AModule): Array[NitniCallback] */
val* compiler_ffi__AModule__compiled_callbacks(val* self) {
val* var /* : Array[NitniCallback] */;
val* var1 /* : Array[NitniCallback] */;
var1 = self->attrs[COLOR_compiler_ffi__AModule___64dcompiled_callbacks].val; /* @compiled_callbacks on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @compiled_callbacks");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 56);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#compiled_callbacks for (self: Object): Array[NitniCallback] */
val* VIRTUAL_compiler_ffi__AModule__compiled_callbacks(val* self) {
val* var /* : Array[NitniCallback] */;
val* var1 /* : Array[NitniCallback] */;
var1 = compiler_ffi__AModule__compiled_callbacks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#compiled_callbacks= for (self: AModule, Array[NitniCallback]) */
void compiler_ffi__AModule__compiled_callbacks_61d(val* self, val* p0) {
self->attrs[COLOR_compiler_ffi__AModule___64dcompiled_callbacks].val = p0; /* @compiled_callbacks on <self:AModule> */
RET_LABEL:;
}
/* method compiler_ffi#AModule#compiled_callbacks= for (self: Object, Array[NitniCallback]) */
void VIRTUAL_compiler_ffi__AModule__compiled_callbacks_61d(val* self, val* p0) {
compiler_ffi__AModule__compiled_callbacks_61d(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AModule#check_callback_compilation for (self: AModule, NitniCallback): Bool */
short int compiler_ffi__AModule__check_callback_compilation(val* self, val* p0) {
short int var /* : Bool */;
val* var_cb /* var cb: NitniCallback */;
val* var1 /* : Array[NitniCallback] */;
short int var2 /* : Bool */;
short int var_compiled /* var compiled: Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[NitniCallback] */;
short int var5 /* : Bool */;
var_cb = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__compiled_callbacks]))(self) /* compiled_callbacks on <self:AModule>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_cb) /* has on <var1:Array[NitniCallback]>*/;
var_compiled = var2;
var3 = !var_compiled;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__compiled_callbacks]))(self) /* compiled_callbacks on <self:AModule>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_cb) /* add on <var4:Array[NitniCallback]>*/;
} else {
}
var5 = !var_compiled;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AModule#check_callback_compilation for (self: Object, NitniCallback): Bool */
short int VIRTUAL_compiler_ffi__AModule__check_callback_compilation(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = compiler_ffi__AModule__check_callback_compilation(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AExternPropdef#compile_ffi_support_to_c for (self: AExternPropdef, AbstractCompilerVisitor) */
void compiler_ffi__AExternPropdef__compile_ffi_support_to_c(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable MPropDef */;
val* var1 /* : MClassDef */;
val* var2 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var5 /* : HashMap[MModule, AModule] */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : MModule */;
val* var8 /* : nullable Object */;
val* var_amainmodule /* var amainmodule: AModule */;
val* var9 /* : AbstractCompiler */;
val* var10 /* : ModelBuilder */;
val* var11 /* : HashMap[MModule, AModule] */;
val* var12 /* : nullable Object */;
val* var_amodule /* var amodule: AModule */;
val* var13 /* : nullable MPropDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var16 /* : nullable MPropDef */;
val* var17 /* : MProperty */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : SignatureLength */;
val* var23 /* : CallContext */;
val* var24 /* : String */;
val* var_csignature /* var csignature: String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : nullable CCompilationUnit */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var35 /* : ForeignCallbackSet */;
val* var36 /* : Set[MType] */;
val* var37 /* : Iterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var40 /* : ForeignCallbackSet */;
val* var41 /* : Set[MType] */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype;
int idtype;
short int var46 /* : Bool */;
val* var47 /* : ForeignCallbackSet */;
val* var48 /* : Set[MExplicitCall] */;
val* var49 /* : Iterator[nullable Object] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_cb /* var cb: MExplicitCall */;
short int var52 /* : Bool */;
val* var54 /* : ForeignCallbackSet */;
val* var55 /* : Set[MExplicitSuper] */;
val* var56 /* : Iterator[nullable Object] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_cb59 /* var cb: MExplicitSuper */;
short int var60 /* : Bool */;
val* var62 /* : ForeignCallbackSet */;
val* var63 /* : Set[MExplicitCast] */;
val* var64 /* : Iterator[nullable Object] */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_cb67 /* var cb: MExplicitCast */;
short int var68 /* : Bool */;
val* var70 /* : ForeignCallbackSet */;
val* var71 /* : ForeignCallbackSet */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 69);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MPropDef__mclassdef]))(var) /* mclassdef on <var:nullable MPropDef(nullable MMethodDef)>*/;
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__mmodule]))(var1) /* mmodule on <var1:MClassDef>*/;
var_mmodule = var2;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var3) /* modelbuilder on <var3:AbstractCompiler>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var4) /* mmodule2nmodule on <var4:ModelBuilder>*/;
var6 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var6) /* mainmodule on <var6:AbstractCompiler>*/;
var8 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var7) /* [] on <var5:HashMap[MModule, AModule]>*/;
var_amainmodule = var8;
var9 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var9) /* modelbuilder on <var9:AbstractCompiler>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var10) /* mmodule2nmodule on <var10:ModelBuilder>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_mmodule) /* [] on <var11:HashMap[MModule, AModule]>*/;
var_amodule = var12;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 72);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MPropDef__mclassdef]))(var13) /* mclassdef on <var13:nullable MPropDef(nullable MMethodDef)>*/;
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_model__MClassDef__bound_mtype]))(var14) /* bound_mtype on <var14:MClassDef>*/;
var_mclass_type = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 75);
exit(1);
} else {
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MPropDef__mproperty]))(var16) /* mproperty on <var16:nullable MPropDef(nullable MMethodDef)>*/;
}
if (varonce) {
var18 = varonce;
} else {
var19 = "___impl";
var20 = 7;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:AExternPropdef>*/;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:AExternPropdef>*/;
var24 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var17, var_mclass_type, var_mmodule, var18, var22, var23) /* build_csignature on <var17:MProperty(MMethod)>*/;
var_csignature = var24;
if (varonce25) {
var26 = varonce25;
} else {
var27 = ";";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 2;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var_csignature;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var26;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
CHECK_NEW_array__Array(var30);
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(var_v, var33) /* declare_once on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_common_ffi__AExternPropdef__compile_ffi_method]))(self, var_amodule) /* compile_ffi_method on <self:AExternPropdef>*/;
((void (*)(val*, val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__ensure_compile_nitni_base]))(var_amodule, var_v) /* ensure_compile_nitni_base on <var_amodule:AModule>*/;
var34 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(var_amodule) /* nitni_ccu on <var_amodule:AModule>*/;
if (var34 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 83);
exit(1);
}
var_ccu = var34;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var35) /* types on <var35:ForeignCallbackSet>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Collection__iterator]))(var36) /* iterator on <var36:Set[MType]>*/;
for(;;) {
var38 = ((short int (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var37) /* is_ok on <var37:Iterator[nullable Object]>*/;
if(!var38) break;
var39 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__item]))(var37) /* item on <var37:Iterator[nullable Object]>*/;
var_mtype = var39;
var40 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__foreign_callbacks]))(var_amodule) /* foreign_callbacks on <var_amodule:AModule>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var40) /* types on <var40:ForeignCallbackSet>*/;
var42 = ((short int (*)(val*, val*))(var41->class->vft[COLOR_abstract_collection__Collection__has]))(var41, var_mtype) /* has on <var41:Set[MType]>*/;
var43 = !var42;
if (var43){
var44 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_mtype) /* is_cprimitive on <var_mtype:MType>*/;
if (var44){
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var45 = 0;
} else {
var45 = var_mtype->type->type_table[cltype] == idtype;
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 88);
exit(1);
}
} else {
((void (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_compiler_ffi__MType__compile_extern_type]))(var_mtype, var_v, var_ccu) /* compile_extern_type on <var_mtype:MType>*/;
var46 = ((short int (*)(val*, val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amodule, var_mtype) /* check_callback_compilation on <var_amodule:AModule>*/;
if (var46){
((void (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_compiler_ffi__MType__compile_extern_helper_functions]))(var_mtype, var_v, var_ccu) /* compile_extern_helper_functions on <var_mtype:MType>*/;
} else {
}
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__next]))(var37) /* next on <var37:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var47 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var47) /* callbacks on <var47:ForeignCallbackSet>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Collection__iterator]))(var48) /* iterator on <var48:Set[MExplicitCall]>*/;
for(;;) {
var50 = ((short int (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var49) /* is_ok on <var49:Iterator[nullable Object]>*/;
if(!var50) break;
var51 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__item]))(var49) /* item on <var49:Iterator[nullable Object]>*/;
var_cb = var51;
var52 = ((short int (*)(val*, val*))(var_amainmodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amainmodule, var_cb) /* check_callback_compilation on <var_amainmodule:AModule>*/;
if (var52){
((void (*)(val*, val*, val*))(var_cb->class->vft[COLOR_compiler_ffi__MExplicitCall__compile_extern_callback]))(var_cb, var_v, var_ccu) /* compile_extern_callback on <var_cb:MExplicitCall>*/;
} else {
}
CONTINUE_label53: (void)0;
((void (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__next]))(var49) /* next on <var49:Iterator[nullable Object]>*/;
}
BREAK_label53: (void)0;
var54 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(var54) /* supers on <var54:ForeignCallbackSet>*/;
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_collection__Collection__iterator]))(var55) /* iterator on <var55:Set[MExplicitSuper]>*/;
for(;;) {
var57 = ((short int (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var56) /* is_ok on <var56:Iterator[nullable Object]>*/;
if(!var57) break;
var58 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__item]))(var56) /* item on <var56:Iterator[nullable Object]>*/;
var_cb59 = var58;
var60 = ((short int (*)(val*, val*))(var_amainmodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amainmodule, var_cb59) /* check_callback_compilation on <var_amainmodule:AModule>*/;
if (var60){
((void (*)(val*, val*, val*))(var_cb59->class->vft[COLOR_compiler_ffi__MExplicitSuper__compile_extern_callback]))(var_cb59, var_v, var_ccu) /* compile_extern_callback on <var_cb59:MExplicitSuper>*/;
} else {
}
CONTINUE_label61: (void)0;
((void (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__next]))(var56) /* next on <var56:Iterator[nullable Object]>*/;
}
BREAK_label61: (void)0;
var62 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(var62) /* casts on <var62:ForeignCallbackSet>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_collection__Collection__iterator]))(var63) /* iterator on <var63:Set[MExplicitCast]>*/;
for(;;) {
var65 = ((short int (*)(val*))(var64->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var64) /* is_ok on <var64:Iterator[nullable Object]>*/;
if(!var65) break;
var66 = ((val* (*)(val*))(var64->class->vft[COLOR_abstract_collection__Iterator__item]))(var64) /* item on <var64:Iterator[nullable Object]>*/;
var_cb67 = var66;
var68 = ((short int (*)(val*, val*))(var_amainmodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amainmodule, var_cb67) /* check_callback_compilation on <var_amainmodule:AModule>*/;
if (var68){
((void (*)(val*, val*, val*))(var_cb67->class->vft[COLOR_compiler_ffi__MExplicitCast__compile_extern_callbacks]))(var_cb67, var_v, var_ccu) /* compile_extern_callbacks on <var_cb67:MExplicitCast>*/;
} else {
}
CONTINUE_label69: (void)0;
((void (*)(val*))(var64->class->vft[COLOR_abstract_collection__Iterator__next]))(var64) /* next on <var64:Iterator[nullable Object]>*/;
}
BREAK_label69: (void)0;
var70 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__foreign_callbacks]))(var_amodule) /* foreign_callbacks on <var_amodule:AModule>*/;
var71 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
((void (*)(val*, val*))(var70->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__join]))(var70, var71) /* join on <var70:ForeignCallbackSet>*/;
RET_LABEL:;
}
/* method compiler_ffi#AExternPropdef#compile_ffi_support_to_c for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_compiler_ffi__AExternPropdef__compile_ffi_support_to_c(val* self, val* p0) {
compiler_ffi__AExternPropdef__compile_ffi_support_to_c(self, p0);
RET_LABEL:;
}
/* method compiler_ffi#AExternMethPropdef#compile_to_c for (self: AExternMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void compiler_ffi__AExternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MClassDef */;
val* var1 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var4 /* : HashMap[MModule, AModule] */;
val* var5 /* : nullable Object */;
val* var_amodule /* var amodule: AModule */;
val* var6 /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AbstractCompiler */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MModule */;
short int var14 /* : Bool */;
val* var15 /* : MClassDef */;
val* var16 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var17 /* : MProperty */;
val* var18 /* : MClassDef */;
val* var19 /* : MClassType */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : SignatureLength */;
val* var25 /* : CallContext */;
val* var26 /* : String */;
val* var_externname /* var externname: String */;
val* var27 /* : null */;
val* var_recv_var /* var recv_var: nullable RuntimeVariable */;
val* var28 /* : nullable MSignature */;
val* var29 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
val* var30 /* : null */;
short int var31 /* : Bool */;
val* var32 /* : MType */;
val* var33 /* : RuntimeVariable */;
val* var34 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
val* var35 /* : Range[Int] */;
long var36 /* : Int */;
long var37 /* : Int */;
val* var38 /* : Discrete */;
val* var39 /* : Discrete */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
long var_a /* var a: Int */;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MClassDef */;
val* var50 /* : MClass */;
val* var51 /* : MClassType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var52 /* : nullable MSignature */;
val* var53 /* : Array[MParameter] */;
long var54 /* : Int */;
long var55 /* : Int */;
long var57 /* : Int */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var60 /* : MType */;
short int var61 /* : Bool */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : Object */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
val* var88 /* : Array[Object] */;
long var89 /* : Int */;
val* var90 /* : NativeArray[Object] */;
val* var91 /* : Object */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : Object */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : Object */;
val* var123 /* : String */;
val* var124 /* : null */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : String */;
val* var146 /* : null */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : String */;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : String */;
val* var200 /* : Array[Object] */;
long var201 /* : Int */;
val* var202 /* : NativeArray[Object] */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
val* var209 /* : Array[Object] */;
long var210 /* : Int */;
val* var211 /* : NativeArray[Object] */;
val* var212 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__mmodule]))(var) /* mmodule on <var:MClassDef>*/;
var_mmodule = var1;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var3) /* mmodule2nmodule on <var3:ModelBuilder>*/;
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var4, var_mmodule) /* [] on <var4:HashMap[MModule, AModule]>*/;
var_amodule = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(self) /* n_extern on <self:AExternMethPropdef>*/;
var_nextern = var6;
var7 = NULL;
if (var_nextern == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = 1;
((void (*)(val*, short int))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__uses_legacy_ni_61d]))(var_amodule, var9) /* uses_legacy_ni= on <var_amodule:AModule>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_compiler_ffi__AExternMethPropdef__compile_to_c]))(self, p0, p1, p2) /* compile_to_c on <self:AExternMethPropdef>*/;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_compiler__AbstractCompiler__supports_ffi]))(var10) /* supports_ffi on <var10:AbstractCompiler>*/;
var12 = !var11;
if (var12){
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_compiler_ffi__AExternMethPropdef__compile_to_c]))(self, p0, p1, p2) /* compile_to_c on <self:AExternMethPropdef>*/;
goto RET_LABEL;
} else {
}
var13 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
var14 = 1;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 136);
exit(1);
} else {
((void (*)(val*, short int))(var13->class->vft[COLOR_common_ffi__MModule__uses_ffi_61d]))(var13, var14) /* uses_ffi= on <var13:nullable MModule>*/;
}
var15 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__bound_mtype]))(var15) /* bound_mtype on <var15:MClassDef>*/;
var_mclass_type = var16;
var17 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var18 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MClassDef__bound_mtype]))(var18) /* bound_mtype on <var18:MClassDef>*/;
if (varonce) {
var20 = varonce;
} else {
var21 = "___impl";
var22 = 7;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:AExternMethPropdef>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:AExternMethPropdef>*/;
var26 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var17, var19, var_mmodule, var20, var24, var25) /* build_cname on <var17:MProperty(MMethod)>*/;
var_externname = var26;
var27 = NULL;
var_recv_var = var27;
var28 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 143);
exit(1);
} else {
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MSignature__return_mtype]))(var28) /* return_mtype on <var28:nullable MSignature>*/;
}
var_return_mtype = var29;
var30 = NULL;
if (var_return_mtype == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
var32 = ((val* (*)(val*, val*, val*))(var_return_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_return_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_return_mtype:nullable MType(MType)>*/;
var_return_mtype = var32;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_return_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_recv_var = var33;
} else {
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var34 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var34->class->vft[COLOR_array__Array__init]))(var34) /* init on <var34:Array[String]>*/;
CHECK_NEW_array__Array(var34);
var_arguments_for_c = var34;
var35 = NEW_range__Range(&type_range__Rangekernel__Int);
var36 = 0;
var37 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var38 = BOX_kernel__Int(var36); /* autobox from Int to Discrete */
var39 = BOX_kernel__Int(var37); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var35->class->vft[COLOR_range__Range__without_last]))(var35, var38, var39) /* without_last on <var35:Range[Int]>*/;
CHECK_NEW_range__Range(var35);
var40 = ((val* (*)(val*))(var35->class->vft[COLOR_abstract_collection__Collection__iterator]))(var35) /* iterator on <var35:Range[Int]>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var43 = ((struct instance_kernel__Int*)var42)->value; /* autounbox from nullable Object to Int */;
var_a = var43;
var44 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_a) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg = var44;
var45 = 0;
{ /* Inline kernel#Int#== (var_a,var45) */
var48 = var_a == var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
if (var46){
var49 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_model__MClassDef__mclass]))(var49) /* mclass on <var49:MClassDef>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_model__MClass__mclass_type]))(var50) /* mclass_type on <var50:MClass>*/;
var_param_mtype = var51;
} else {
var52 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var52 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 157);
exit(1);
} else {
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_model__MSignature__mparameters]))(var52) /* mparameters on <var52:nullable MSignature>*/;
}
var54 = 1;
{ /* Inline kernel#Int#- (var_a,var54) */
var57 = var_a - var54;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var58 = ((val* (*)(val*, long))(var53->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var53, var55) /* [] on <var53:Array[MParameter]>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_model__MParameter__mtype]))(var58) /* mtype on <var58:nullable Object(MParameter)>*/;
var_param_mtype = var59;
}
var60 = ((val* (*)(val*, val*, val*))(var_param_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_param_mtype:MType>*/;
var_param_mtype = var60;
var61 = ((short int (*)(val*))(var_param_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_param_mtype) /* is_cprimitive on <var_param_mtype:MType>*/;
if (var61){
var62 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var62) /* add on <var_arguments_for_c:Array[String]>*/;
} else {
if (varonce63) {
var64 = varonce63;
} else {
var65 = "struct nitni_instance* var_for_c_";
var66 = 33;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = ";";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 3;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var64;
var76 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var76;
((struct instance_array__NativeArray*)var75)->values[2] = (val*) var69;
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
CHECK_NEW_array__Array(var73);
}
var77 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var77) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "var_for_c_";
var81 = 10;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = " = malloc(sizeof(struct nitni_instance));";
var86 = 41;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var88 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var88 = array_instance Array[Object] */
var89 = 3;
var90 = NEW_array__NativeArray(var89, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var90)->values[0] = (val*) var79;
var91 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var90)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var90)->values[2] = (val*) var84;
((void (*)(val*, val*, long))(var88->class->vft[COLOR_array__Array__with_native]))(var88, var90, var89) /* with_native on <var88:Array[Object]>*/;
CHECK_NEW_array__Array(var88);
}
var92 = ((val* (*)(val*))(var88->class->vft[COLOR_string__Object__to_s]))(var88) /* to_s on <var88:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var92) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "var_for_c_";
var96 = 10;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "->value = ";
var101 = 10;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
if (varonce104) {
var105 = varonce104;
} else {
var106 = ";";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 5;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var94;
var112 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var99;
((struct instance_array__NativeArray*)var111)->values[3] = (val*) var103;
((struct instance_array__NativeArray*)var111)->values[4] = (val*) var105;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
CHECK_NEW_array__Array(var109);
}
var113 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var113) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = "var_for_c_";
var117 = 10;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 2;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var115;
var122 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var122;
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
CHECK_NEW_array__Array(var119);
}
var123 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var123) /* add on <var_arguments_for_c:Array[String]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var124 = NULL;
if (var_recv_var == NULL) {
var125 = 1; /* is null */
} else {
var125 = 0; /* arg is null but recv is not */
}
if (var125){
if (varonce126) {
var127 = varonce126;
} else {
var128 = "(";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = ", ";
var134 = 2;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var132) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce137) {
var138 = varonce137;
} else {
var139 = ");";
var140 = 2;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 4;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var_externname;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var127;
((struct instance_array__NativeArray*)var144)->values[2] = (val*) var136;
((struct instance_array__NativeArray*)var144)->values[3] = (val*) var138;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
CHECK_NEW_array__Array(var142);
}
var145 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var145) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
var146 = NULL;
if (var_return_mtype == NULL) {
var147 = 0; /* is null */
} else {
var147 = 1; /* arg is null and recv is not */
}
if (!var147) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 174);
exit(1);
}
var148 = ((short int (*)(val*))(var_return_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_return_mtype) /* is_cprimitive on <var_return_mtype:nullable MType(MType)>*/;
if (var148){
if (varonce149) {
var150 = varonce149;
} else {
var151 = " = ";
var152 = 3;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = "(";
var157 = 1;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = ", ";
var162 = 2;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var160) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce165) {
var166 = varonce165;
} else {
var167 = ");";
var168 = 2;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 6;
var172 = NEW_array__NativeArray(var171, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var172)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var172)->values[1] = (val*) var150;
((struct instance_array__NativeArray*)var172)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var172)->values[3] = (val*) var155;
((struct instance_array__NativeArray*)var172)->values[4] = (val*) var164;
((struct instance_array__NativeArray*)var172)->values[5] = (val*) var166;
((void (*)(val*, val*, long))(var170->class->vft[COLOR_array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
CHECK_NEW_array__Array(var170);
}
var173 = ((val* (*)(val*))(var170->class->vft[COLOR_string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var173) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce174) {
var175 = varonce174;
} else {
var176 = "struct nitni_instance* ret_var;";
var177 = 31;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var175) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce179) {
var180 = varonce179;
} else {
var181 = "ret_var = ";
var182 = 10;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = "(";
var187 = 1;
var188 = string__NativeString__to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
if (varonce189) {
var190 = varonce189;
} else {
var191 = ", ";
var192 = 2;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
var194 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var190) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce195) {
var196 = varonce195;
} else {
var197 = ");";
var198 = 2;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
var200 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var200 = array_instance Array[Object] */
var201 = 5;
var202 = NEW_array__NativeArray(var201, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var202)->values[0] = (val*) var180;
((struct instance_array__NativeArray*)var202)->values[1] = (val*) var_externname;
((struct instance_array__NativeArray*)var202)->values[2] = (val*) var185;
((struct instance_array__NativeArray*)var202)->values[3] = (val*) var194;
((struct instance_array__NativeArray*)var202)->values[4] = (val*) var196;
((void (*)(val*, val*, long))(var200->class->vft[COLOR_array__Array__with_native]))(var200, var202, var201) /* with_native on <var200:Array[Object]>*/;
CHECK_NEW_array__Array(var200);
}
var203 = ((val* (*)(val*))(var200->class->vft[COLOR_string__Object__to_s]))(var200) /* to_s on <var200:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var203) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce204) {
var205 = varonce204;
} else {
var206 = " = ret_var->value;";
var207 = 18;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var209 = array_instance Array[Object] */
var210 = 2;
var211 = NEW_array__NativeArray(var210, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var211)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var211)->values[1] = (val*) var205;
((void (*)(val*, val*, long))(var209->class->vft[COLOR_array__Array__with_native]))(var209, var211, var210) /* with_native on <var209:Array[Object]>*/;
CHECK_NEW_array__Array(var209);
}
var212 = ((val* (*)(val*))(var209->class->vft[COLOR_string__Object__to_s]))(var209) /* to_s on <var209:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var212) /* add on <var_v:AbstractCompilerVisitor>*/;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var_recv_var) /* ret on <var_v:AbstractCompilerVisitor>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_compiler_ffi__AExternPropdef__compile_ffi_support_to_c]))(self, var_v) /* compile_ffi_support_to_c on <self:AExternMethPropdef>*/;
RET_LABEL:;
}
/* method compiler_ffi#AExternMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_compiler_ffi__AExternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
compiler_ffi__AExternMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method compiler_ffi#AExternInitPropdef#compile_to_c for (self: AExternInitPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void compiler_ffi__AExternInitPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MClassDef */;
val* var1 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var4 /* : HashMap[MModule, AModule] */;
val* var5 /* : nullable Object */;
val* var_amodule /* var amodule: AModule */;
val* var6 /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AbstractCompiler */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable MModule */;
short int var14 /* : Bool */;
val* var15 /* : MClassDef */;
val* var16 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var17 /* : MProperty */;
val* var18 /* : MClassDef */;
val* var19 /* : MClassType */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : SignatureLength */;
val* var25 /* : CallContext */;
val* var26 /* : String */;
val* var_externname /* var externname: String */;
val* var27 /* : nullable Object */;
val* var28 /* : MType */;
val* var_return_mtype /* var return_mtype: MType */;
val* var29 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var30 /* : nullable Object */;
val* var31 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
val* var32 /* : Range[Int] */;
long var33 /* : Int */;
long var34 /* : Int */;
val* var35 /* : Discrete */;
val* var36 /* : Discrete */;
val* var37 /* : Iterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
long var_a /* var a: Int */;
long var40 /* : Int */;
val* var41 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var42 /* : nullable MSignature */;
val* var43 /* : Array[MParameter] */;
val* var44 /* : nullable Object */;
val* var45 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : Object */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : Object */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : Object */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : Object */;
val* var109 /* : String */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : Array[Object] */;
long var163 /* : Int */;
val* var164 /* : NativeArray[Object] */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__mmodule]))(var) /* mmodule on <var:MClassDef>*/;
var_mmodule = var1;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var3) /* mmodule2nmodule on <var3:ModelBuilder>*/;
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var4, var_mmodule) /* [] on <var4:HashMap[MModule, AModule]>*/;
var_amodule = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(self) /* n_extern on <self:AExternInitPropdef>*/;
var_nextern = var6;
var7 = NULL;
if (var_nextern == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = 1;
((void (*)(val*, short int))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__uses_legacy_ni_61d]))(var_amodule, var9) /* uses_legacy_ni= on <var_amodule:AModule>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_compiler_ffi__AExternInitPropdef__compile_to_c]))(self, p0, p1, p2) /* compile_to_c on <self:AExternInitPropdef>*/;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_compiler__AbstractCompiler__supports_ffi]))(var10) /* supports_ffi on <var10:AbstractCompiler>*/;
var12 = !var11;
if (var12){
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_compiler_ffi__AExternInitPropdef__compile_to_c]))(self, p0, p1, p2) /* compile_to_c on <self:AExternInitPropdef>*/;
goto RET_LABEL;
} else {
}
var13 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
var14 = 1;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 208);
exit(1);
} else {
((void (*)(val*, short int))(var13->class->vft[COLOR_common_ffi__MModule__uses_ffi_61d]))(var13, var14) /* uses_ffi= on <var13:nullable MModule>*/;
}
var15 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__bound_mtype]))(var15) /* bound_mtype on <var15:MClassDef>*/;
var_mclass_type = var16;
var17 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var18 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MClassDef__bound_mtype]))(var18) /* bound_mtype on <var18:MClassDef>*/;
if (varonce) {
var20 = varonce;
} else {
var21 = "___impl";
var22 = 7;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:AExternInitPropdef>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:AExternInitPropdef>*/;
var26 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var17, var19, var_mmodule, var20, var24, var25) /* build_cname on <var17:MProperty(MMethod)>*/;
var_externname = var26;
var27 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var27) /* mtype on <var27:nullable Object(RuntimeVariable)>*/;
var_return_mtype = var28;
var29 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_return_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_recv_var = var29;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var30 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_arguments) /* shift on <var_arguments:Array[RuntimeVariable]>*/;
var30;
var31 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var31->class->vft[COLOR_array__Array__init]))(var31) /* init on <var31:Array[String]>*/;
CHECK_NEW_array__Array(var31);
var_arguments_for_c = var31;
var32 = NEW_range__Range(&type_range__Rangekernel__Int);
var33 = 0;
var34 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var35 = BOX_kernel__Int(var33); /* autobox from Int to Discrete */
var36 = BOX_kernel__Int(var34); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var32->class->vft[COLOR_range__Range__without_last]))(var32, var35, var36) /* without_last on <var32:Range[Int]>*/;
CHECK_NEW_range__Range(var32);
var37 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Collection__iterator]))(var32) /* iterator on <var32:Range[Int]>*/;
for(;;) {
var38 = ((short int (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var37) /* is_ok on <var37:Iterator[nullable Object]>*/;
if(!var38) break;
var39 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__item]))(var37) /* item on <var37:Iterator[nullable Object]>*/;
var40 = ((struct instance_kernel__Int*)var39)->value; /* autounbox from nullable Object to Int */;
var_a = var40;
var41 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_a) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg = var41;
var42 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 224);
exit(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_model__MSignature__mparameters]))(var42) /* mparameters on <var42:nullable MSignature>*/;
}
var44 = ((val* (*)(val*, long))(var43->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var43, var_a) /* [] on <var43:Array[MParameter]>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_model__MParameter__mtype]))(var44) /* mtype on <var44:nullable Object(MParameter)>*/;
var_param_mtype = var45;
var46 = ((val* (*)(val*, val*, val*))(var_param_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_param_mtype:MType>*/;
var_param_mtype = var46;
var47 = ((short int (*)(val*))(var_param_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_param_mtype) /* is_cprimitive on <var_param_mtype:MType>*/;
if (var47){
var48 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var48) /* add on <var_arguments_for_c:Array[String]>*/;
} else {
if (varonce49) {
var50 = varonce49;
} else {
var51 = "struct nitni_instance* var_for_c_";
var52 = 33;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = ";";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 3;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var50;
var62 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var62;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var55;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
CHECK_NEW_array__Array(var59);
}
var63 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var63) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "var_for_c_";
var67 = 10;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = " = malloc(sizeof(struct nitni_instance));";
var72 = 41;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var65;
var77 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var77;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var70;
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
CHECK_NEW_array__Array(var74);
}
var78 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var78) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = "var_for_c_";
var82 = 10;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "->value = ";
var87 = 10;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = ";";
var93 = 1;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 5;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var80;
var98 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var98;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var85;
((struct instance_array__NativeArray*)var97)->values[3] = (val*) var89;
((struct instance_array__NativeArray*)var97)->values[4] = (val*) var91;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
CHECK_NEW_array__Array(var95);
}
var99 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var99) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = "var_for_c_";
var103 = 10;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 2;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var101;
var108 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var108;
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
CHECK_NEW_array__Array(var105);
}
var109 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var109) /* add on <var_arguments_for_c:Array[String]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__next]))(var37) /* next on <var37:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var110 = ((short int (*)(val*))(var_return_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_return_mtype) /* is_cprimitive on <var_return_mtype:MType>*/;
if (var110){
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = ";
var114 = 3;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "(";
var119 = 1;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ", ";
var124 = 2;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var122) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = ");";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 6;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var134)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var134)->values[3] = (val*) var117;
((struct instance_array__NativeArray*)var134)->values[4] = (val*) var126;
((struct instance_array__NativeArray*)var134)->values[5] = (val*) var128;
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
CHECK_NEW_array__Array(var132);
}
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var135) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce136) {
var137 = varonce136;
} else {
var138 = "struct nitni_instance* ret_var;";
var139 = 31;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var137) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = "ret_var = ";
var144 = 10;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = "(";
var149 = 1;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = ", ";
var154 = 2;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var152) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce157) {
var158 = varonce157;
} else {
var159 = ");";
var160 = 2;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var162 = array_instance Array[Object] */
var163 = 5;
var164 = NEW_array__NativeArray(var163, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var164)->values[0] = (val*) var142;
((struct instance_array__NativeArray*)var164)->values[1] = (val*) var_externname;
((struct instance_array__NativeArray*)var164)->values[2] = (val*) var147;
((struct instance_array__NativeArray*)var164)->values[3] = (val*) var156;
((struct instance_array__NativeArray*)var164)->values[4] = (val*) var158;
((void (*)(val*, val*, long))(var162->class->vft[COLOR_array__Array__with_native]))(var162, var164, var163) /* with_native on <var162:Array[Object]>*/;
CHECK_NEW_array__Array(var162);
}
var165 = ((val* (*)(val*))(var162->class->vft[COLOR_string__Object__to_s]))(var162) /* to_s on <var162:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var165) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = " = ret_var->value;";
var169 = 18;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 2;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var173)->values[1] = (val*) var167;
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
CHECK_NEW_array__Array(var171);
}
var174 = ((val* (*)(val*))(var171->class->vft[COLOR_string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var174) /* add on <var_v:AbstractCompilerVisitor>*/;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var_recv_var) /* ret on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_compiler_ffi__AExternPropdef__compile_ffi_support_to_c]))(self, var_v) /* compile_ffi_support_to_c on <self:AExternInitPropdef>*/;
RET_LABEL:;
}
/* method compiler_ffi#AExternInitPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_compiler_ffi__AExternInitPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
compiler_ffi__AExternInitPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method compiler_ffi#CCompilationUnit#write_as_nitni for (self: CCompilationUnit, AModule, String) */
void compiler_ffi__CCompilationUnit__write_as_nitni(val* self, val* p0, val* p1) {
val* var_amodule /* var amodule: AModule */;
val* var_compdir /* var compdir: String */;
val* var /* : Array[Object] */;
long var1 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : nullable MModule */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_base_name /* var base_name: String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var_16 /* var : Array[Object] */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var_h_file /* var h_file: String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
val* var37 /* : Array[String] */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var_52 /* var : Array[Object] */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var_c_file /* var c_file: String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var_75 /* var : Array[Object] */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var87 /* : Array[String] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[String] */;
val* var90 /* : Array[String] */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var96 /* : Array[Object] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[Object] */;
val* var99 /* : String */;
var_amodule = p0;
var_compdir = p1;
var = NEW_array__Array(&type_array__Arraykernel__Object);
var1 = 3;
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var1) /* with_capacity on <var:Array[Object]>*/;
CHECK_NEW_array__Array(var);
var_ = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var2) /* add on <var_:Array[Object]>*/;
var6 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 253);
exit(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model_base__MModule__name]))(var6) /* name on <var6:nullable MModule>*/;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "._nitni";
var11 = 7;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_base_name = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
var15 = 3;
((void (*)(val*, long))(var14->class->vft[COLOR_array__Array__with_capacity]))(var14, var15) /* with_capacity on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_16 = var14;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_16, var18) /* add on <var_16:Array[Object]>*/;
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_16, var_base_name) /* add on <var_16:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = ".h";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_16, var23) /* add on <var_16:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_16->class->vft[COLOR_string__Object__to_s]))(var_16) /* to_s on <var_16:Array[Object]>*/;
var_h_file = var27;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "/";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var_h_file;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
CHECK_NEW_array__Array(var33);
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
var37 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var37->class->vft[COLOR_array__Array__init]))(var37) /* init on <var37:Array[String]>*/;
CHECK_NEW_array__Array(var37);
var38 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_nitni_base__AModule__cname]))(var_amodule) /* cname on <var_amodule:AModule>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:String>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_string__AbstractString__to_upper]))(var39) /* to_upper on <var39:String>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "_NITG_NITNI_H";
var44 = 13;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 2;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var42;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
CHECK_NEW_array__Array(var46);
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_header_to_file]))(self, var_amodule, var36, var37, var49) /* write_header_to_file on <self:CCompilationUnit>*/;
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
var51 = 3;
((void (*)(val*, long))(var50->class->vft[COLOR_array__Array__with_capacity]))(var50, var51) /* with_capacity on <var50:Array[Object]>*/;
CHECK_NEW_array__Array(var50);
var_52 = var50;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "";
var56 = 0;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
((void (*)(val*, val*))(var_52->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_52, var54) /* add on <var_52:Array[Object]>*/;
((void (*)(val*, val*))(var_52->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_52, var_base_name) /* add on <var_52:Array[Object]>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = ".c";
var61 = 2;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
((void (*)(val*, val*))(var_52->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_52, var59) /* add on <var_52:Array[Object]>*/;
var63 = ((val* (*)(val*))(var_52->class->vft[COLOR_string__Object__to_s]))(var_52) /* to_s on <var_52:Array[Object]>*/;
var_c_file = var63;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "/";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var65;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var_c_file;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
CHECK_NEW_array__Array(var69);
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
var74 = 3;
((void (*)(val*, long))(var73->class->vft[COLOR_array__Array__with_capacity]))(var73, var74) /* with_capacity on <var73:Array[Object]>*/;
CHECK_NEW_array__Array(var73);
var_75 = var73;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "\"";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
((void (*)(val*, val*))(var_75->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_75, var77) /* add on <var_75:Array[Object]>*/;
((void (*)(val*, val*))(var_75->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_75, var_h_file) /* add on <var_75:Array[Object]>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\"";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
((void (*)(val*, val*))(var_75->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_75, var82) /* add on <var_75:Array[Object]>*/;
var86 = ((val* (*)(val*))(var_75->class->vft[COLOR_string__Object__to_s]))(var_75) /* to_s on <var_75:Array[Object]>*/;
var87 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var87 = array_instance Array[String] */
var88 = 1;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var86;
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[String]>*/;
CHECK_NEW_array__Array(var87);
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_body_to_file]))(self, var_amodule, var72, var87) /* write_body_to_file on <self:CCompilationUnit>*/;
var90 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__files]))(self) /* files on <self:CCompilationUnit>*/;
if (varonce91) {
var92 = varonce91;
} else {
var93 = "/";
var94 = 1;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var96 = array_instance Array[Object] */
var97 = 3;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var98)->values[2] = (val*) var_c_file;
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[Object]>*/;
CHECK_NEW_array__Array(var96);
}
var99 = ((val* (*)(val*))(var96->class->vft[COLOR_string__Object__to_s]))(var96) /* to_s on <var96:Array[Object]>*/;
((void (*)(val*, val*))(var90->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var90, var99) /* add on <var90:Array[String]>*/;
RET_LABEL:;
}
/* method compiler_ffi#CCompilationUnit#write_as_nitni for (self: Object, AModule, String) */
void VIRTUAL_compiler_ffi__CCompilationUnit__write_as_nitni(val* self, val* p0, val* p1) {
compiler_ffi__CCompilationUnit__write_as_nitni(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#AbstractCompilerVisitor#var_from_c for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* compiler_ffi__AbstractCompilerVisitor__var_from_c(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
val* var2 /* : RuntimeVariable */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
var_name = p0;
var_mtype = p1;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_mtype) /* is_cprimitive on <var_mtype:MType>*/;
if (var1){
var2 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var2->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var2, var_name, var_mtype, var_mtype) /* init on <var2:RuntimeVariable>*/;
CHECK_NEW_abstract_compiler__RuntimeVariable(var2);
var = var2;
goto RET_LABEL;
} else {
var3 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_name) /* add on <var_:Array[Object]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "->value";
var13 = 7;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
var15 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var3, var15, var_mtype, var_mtype) /* init on <var3:RuntimeVariable>*/;
CHECK_NEW_abstract_compiler__RuntimeVariable(var3);
var = var3;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method compiler_ffi#AbstractCompilerVisitor#var_from_c for (self: Object, String, MType): RuntimeVariable */
val* VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = compiler_ffi__AbstractCompilerVisitor__var_from_c(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AbstractCompilerVisitor#ret_to_c for (self: AbstractCompilerVisitor, RuntimeVariable, MType) */
void compiler_ffi__AbstractCompilerVisitor__ret_to_c(val* self, val* p0, val* p1) {
val* var_src /* var src: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
var_src = p0;
var_mtype = p1;
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_mtype) /* is_cprimitive on <var_mtype:MType>*/;
if (var){
if (varonce) {
var1 = varonce;
} else {
var2 = "return ";
var3 = 7;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ";";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_src;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
} else {
if (varonce14) {
var15 = varonce14;
} else {
var16 = "struct nitni_instance* ret_for_c;";
var17 = 33;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var15) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "ret_for_c = malloc(sizeof(struct nitni_instance));";
var22 = 50;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var20) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "ret_for_c->value = ";
var27 = 19;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ";";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_src;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var30;
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
CHECK_NEW_array__Array(var34);
}
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "return ret_for_c;";
var41 = 17;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var39) /* add on <self:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method compiler_ffi#AbstractCompilerVisitor#ret_to_c for (self: Object, RuntimeVariable, MType) */
void VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c(val* self, val* p0, val* p1) {
compiler_ffi__AbstractCompilerVisitor__ret_to_c(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MClassType#compile_nitni_type for (self: MClassType, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MClassType__compile_nitni_type(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : Writer */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
val* var16 /* : Writer */;
val* var17 /* : Writer */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Writer */;
val* var24 /* : Writer */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : Writer */;
val* var31 /* : Writer */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
val* var42 /* : Writer */;
val* var43 /* : Writer */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : Writer */;
var_v = p0;
var_ccu = p1;
var = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = "struct instance_";
var3 = 16;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var5) /* c_name on <var5:MClass>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = " {\n";
var10 = 3;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 3;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var14)->values[2] = (val*) var8;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
}
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
var16 = ((val* (*)(val*, val*))(var->class->vft[COLOR_compiling_writer__Writer__add]))(var, var15) /* add on <var:Writer>*/;
var16;
var17 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "const struct type *type;\n";
var21 = 25;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*, val*))(var17->class->vft[COLOR_compiling_writer__Writer__add]))(var17, var19) /* add on <var17:Writer>*/;
var23;
var24 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "const struct class *class;\n";
var28 = 27;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_compiling_writer__Writer__add]))(var24, var26) /* add on <var24:Writer>*/;
var30;
var31 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__ctype]))(self) /* ctype on <self:MClassType>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = " value;\n";
var36 = 8;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var34;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
CHECK_NEW_array__Array(var38);
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
var42 = ((val* (*)(val*, val*))(var31->class->vft[COLOR_compiling_writer__Writer__add]))(var31, var41) /* add on <var31:Writer>*/;
var42;
var43 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "};\n";
var47 = 3;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = ((val* (*)(val*, val*))(var43->class->vft[COLOR_compiling_writer__Writer__add]))(var43, var45) /* add on <var43:Writer>*/;
var49;
RET_LABEL:;
}
/* method compiler_ffi#MClassType#compile_nitni_type for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MClassType__compile_nitni_type(val* self, val* p0, val* p1) {
compiler_ffi__MClassType__compile_nitni_type(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MType#compile_extern_type for (self: MType, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MType__compile_extern_type(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : Writer */;
val* var18 /* : Writer */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : Writer */;
val* var35 /* : Writer */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var51 /* : Writer */;
val* var52 /* : Writer */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Writer */;
var_v = p0;
var_ccu = p1;
var = ((short int (*)(val*))(self->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(self) /* is_cprimitive on <self:MType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 304);
exit(1);
}
var2 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "#ifndef NIT_TYPE_";
var5 = 17;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname]))(self) /* cname on <self:MType>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\n";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
var17 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_compiling_writer__Writer__add]))(var2, var16) /* add on <var2:Writer>*/;
var17;
var18 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "#define NIT_TYPE_";
var22 = 17;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname]))(self) /* cname on <self:MType>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = " 1\n";
var28 = 3;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 3;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var24;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var26;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
CHECK_NEW_array__Array(var30);
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
var34 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_compiling_writer__Writer__add]))(var18, var33) /* add on <var18:Writer>*/;
var34;
var35 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "typedef struct nitni_instance *";
var39 = 31;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname]))(self) /* cname on <self:MType>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = ";\n";
var45 = 2;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 3;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var43;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
CHECK_NEW_array__Array(var47);
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
var51 = ((val* (*)(val*, val*))(var35->class->vft[COLOR_compiling_writer__Writer__add]))(var35, var50) /* add on <var35:Writer>*/;
var51;
var52 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "#endif\n";
var56 = 7;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = ((val* (*)(val*, val*))(var52->class->vft[COLOR_compiling_writer__Writer__add]))(var52, var54) /* add on <var52:Writer>*/;
var58;
RET_LABEL:;
}
/* method compiler_ffi#MType#compile_extern_type for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MType__compile_extern_type(val* self, val* p0, val* p1) {
compiler_ffi__MType__compile_extern_type(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MType#compile_extern_helper_functions for (self: MType, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MType__compile_extern_helper_functions(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var2 /* : Writer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : Writer */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : AbstractCompilerVisitor */;
val* var20 /* : Writer */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : Writer */;
var_v = p0;
var_ccu = p1;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var) /* new_visitor on <var:AbstractCompiler>*/;
var_nitni_visitor = var1;
var2 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "#define ";
var5 = 8;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__mangled_cname]))(self) /* mangled_cname on <self:MType>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "_incr_ref(from) while(0){}\n";
var11 = 27;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
var17 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_compiling_writer__Writer__add]))(var2, var16) /* add on <var2:Writer>*/;
var17;
var18 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var18) /* new_visitor on <var18:AbstractCompiler>*/;
var_nitni_visitor = var19;
var20 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "#define ";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__mangled_cname]))(self) /* mangled_cname on <self:MType>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "_decr_ref(from) while(0){}\n";
var30 = 27;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var26;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
var36 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_compiling_writer__Writer__add]))(var20, var35) /* add on <var20:Writer>*/;
var36;
RET_LABEL:;
}
/* method compiler_ffi#MType#compile_extern_helper_functions for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MType__compile_extern_helper_functions(val* self, val* p0, val* p1) {
compiler_ffi__MType__compile_extern_helper_functions(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MNullableType#compile_extern_helper_functions for (self: MNullableType, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MNullableType__compile_extern_helper_functions(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : Array[Object] */;
long var1 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : MModule */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var_full_friendly_csignature /* var full_friendly_csignature: String */;
val* var28 /* : Writer */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var43 /* : Writer */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var_46 /* var : Array[Object] */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : MType */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var_base_cname /* var base_cname: String */;
val* var60 /* : Writer */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : AbstractCompiler */;
val* var72 /* : MModule */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
val* var88 /* : Writer */;
val* var89 /* : AbstractCompiler */;
val* var90 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var91 /* : nullable Frame */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var_94 /* var : Array[Object] */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : AbstractCompiler */;
val* var107 /* : MModule */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : MType */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var_full_internal_csignature /* var full_internal_csignature: String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
val* var127 /* : MType */;
val* var128 /* : String */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
val* var138 /* : MType */;
val* var139 /* : String */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
var_v = p0;
var_ccu = p1;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_compiler_ffi__MNullableType__compile_extern_helper_functions]))(self, p0, p1) /* compile_extern_helper_functions on <self:MNullableType>*/;
var = NEW_array__Array(&type_array__Arraykernel__Object);
var1 = 7;
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var1) /* with_capacity on <var:Array[Object]>*/;
CHECK_NEW_array__Array(var);
var_ = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var2) /* add on <var_:Array[Object]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname]))(self) /* cname on <self:MNullableType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = " ";
var10 = 1;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var12) /* mainmodule on <var12:AbstractCompiler>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model_base__MModule__name]))(var13) /* name on <var13:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "___null_";
var18 = 8;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var20) /* mangled_cname on <var20:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "()";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_full_friendly_csignature = var27;
var28 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "extern ";
var32 = 7;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = ";\n";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var_full_friendly_csignature;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var35;
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
CHECK_NEW_array__Array(var39);
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
var43 = ((val* (*)(val*, val*))(var28->class->vft[COLOR_compiling_writer__Writer__add]))(var28, var42) /* add on <var28:Writer>*/;
var43;
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
var45 = 3;
((void (*)(val*, long))(var44->class->vft[COLOR_array__Array__with_capacity]))(var44, var45) /* with_capacity on <var44:Array[Object]>*/;
CHECK_NEW_array__Array(var44);
var_46 = var44;
if (varonce47) {
var48 = varonce47;
} else {
var49 = "null_";
var50 = 5;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
((void (*)(val*, val*))(var_46->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_46, var48) /* add on <var_46:Array[Object]>*/;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var52) /* mangled_cname on <var52:MType>*/;
((void (*)(val*, val*))(var_46->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_46, var53) /* add on <var_46:Array[Object]>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "";
var57 = 0;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
((void (*)(val*, val*))(var_46->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_46, var55) /* add on <var_46:Array[Object]>*/;
var59 = ((val* (*)(val*))(var_46->class->vft[COLOR_string__Object__to_s]))(var_46) /* to_s on <var_46:Array[Object]>*/;
var_base_cname = var59;
var60 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "#define ";
var64 = 8;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = " ";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var72 = ((val* (*)(val*))(var71->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var71) /* mainmodule on <var71:AbstractCompiler>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_model_base__MModule__name]))(var72) /* name on <var72:MModule>*/;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "___";
var77 = 3;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "\n";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 7;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var62;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var_base_cname;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var67;
((struct instance_array__NativeArray*)var86)->values[3] = (val*) var73;
((struct instance_array__NativeArray*)var86)->values[4] = (val*) var75;
((struct instance_array__NativeArray*)var86)->values[5] = (val*) var_base_cname;
((struct instance_array__NativeArray*)var86)->values[6] = (val*) var80;
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
CHECK_NEW_array__Array(var84);
}
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
var88 = ((val* (*)(val*, val*))(var60->class->vft[COLOR_compiling_writer__Writer__add]))(var60, var87) /* add on <var60:Writer>*/;
var88;
var89 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var89) /* new_visitor on <var89:AbstractCompiler>*/;
var_nitni_visitor = var90;
var91 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var91) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
var93 = 7;
((void (*)(val*, long))(var92->class->vft[COLOR_array__Array__with_capacity]))(var92, var93) /* with_capacity on <var92:Array[Object]>*/;
CHECK_NEW_array__Array(var92);
var_94 = var92;
if (varonce95) {
var96 = varonce95;
} else {
var97 = "";
var98 = 0;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var96) /* add on <var_94:Array[Object]>*/;
var100 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname_blind]))(self) /* cname_blind on <self:MNullableType>*/;
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var100) /* add on <var_94:Array[Object]>*/;
if (varonce101) {
var102 = varonce101;
} else {
var103 = " ";
var104 = 1;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var102) /* add on <var_94:Array[Object]>*/;
var106 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var107 = ((val* (*)(val*))(var106->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var106) /* mainmodule on <var106:AbstractCompiler>*/;
var108 = ((val* (*)(val*))(var107->class->vft[COLOR_model_base__MModule__name]))(var107) /* name on <var107:MModule>*/;
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var108) /* add on <var_94:Array[Object]>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "___null_";
var112 = 8;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var110) /* add on <var_94:Array[Object]>*/;
var114 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var115 = ((val* (*)(val*))(var114->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var114) /* mangled_cname on <var114:MType>*/;
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var115) /* add on <var_94:Array[Object]>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = "()";
var119 = 2;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
((void (*)(val*, val*))(var_94->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_94, var117) /* add on <var_94:Array[Object]>*/;
var121 = ((val* (*)(val*))(var_94->class->vft[COLOR_string__Object__to_s]))(var_94) /* to_s on <var_94:Array[Object]>*/;
var_full_internal_csignature = var121;
if (varonce122) {
var123 = varonce122;
} else {
var124 = "#ifndef NIT_NULL_null_";
var125 = 22;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var128 = ((val* (*)(val*))(var127->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var127) /* mangled_cname on <var127:MType>*/;
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 2;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var123;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var128;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
CHECK_NEW_array__Array(var129);
}
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var132) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce133) {
var134 = varonce133;
} else {
var135 = "#define NIT_NULL_null_";
var136 = 22;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var139 = ((val* (*)(val*))(var138->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var138) /* mangled_cname on <var138:MType>*/;
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 2;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var134;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var139;
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
CHECK_NEW_array__Array(var140);
}
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var143) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce144) {
var145 = varonce144;
} else {
var146 = " {";
var147 = 2;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 2;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var_full_internal_csignature;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var145;
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
CHECK_NEW_array__Array(var149);
}
var152 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var152) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce153) {
var154 = varonce153;
} else {
var155 = "struct nitni_instance* ret_for_c;";
var156 = 33;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var154) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce158) {
var159 = varonce158;
} else {
var160 = "ret_for_c = malloc(sizeof(struct nitni_instance));";
var161 = 50;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var159) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce163) {
var164 = varonce163;
} else {
var165 = "ret_for_c->value = NULL;";
var166 = 24;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var164) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce168) {
var169 = varonce168;
} else {
var170 = "return ret_for_c;";
var171 = 17;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var169) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce173) {
var174 = varonce173;
} else {
var175 = "}";
var176 = 1;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var174) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce178) {
var179 = varonce178;
} else {
var180 = "#endif";
var181 = 6;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var179) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method compiler_ffi#MNullableType#compile_extern_helper_functions for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MNullableType__compile_extern_helper_functions(val* self, val* p0, val* p1) {
compiler_ffi__MNullableType__compile_extern_helper_functions(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCall#compile_extern_callback for (self: MExplicitCall, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MExplicitCall__compile_extern_callback(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MClassType */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var5 /* : null */;
val* var6 /* : SignatureLength */;
val* var7 /* : CallContext */;
val* var8 /* : String */;
val* var_full_friendly_csignature /* var full_friendly_csignature: String */;
val* var9 /* : Writer */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
val* var23 /* : Writer */;
val* var24 /* : AbstractCompiler */;
val* var25 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var26 /* : nullable Frame */;
val* var27 /* : MPropDef */;
val* var28 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var29 /* : MClassType */;
val* var30 /* : AbstractCompiler */;
val* var31 /* : MModule */;
val* var32 /* : null */;
val* var33 /* : SignatureLength */;
val* var34 /* : CallContext */;
val* var35 /* : String */;
val* var_csignature_blind /* var csignature_blind: String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : Array[RuntimeVariable] */;
val* var_vars /* var vars: Array[RuntimeVariable] */;
val* var61 /* : MClassType */;
val* var_mtype /* var mtype: MType */;
val* var62 /* : null */;
val* var_recv_var /* var recv_var: nullable Object */;
short int var63 /* : Bool */;
val* var64 /* : MClassType */;
val* var65 /* : MClass */;
val* var66 /* : MClassKind */;
val* var67 /* : MClassKind */;
short int var68 /* : Bool */;
val* var69 /* : RuntimeVariable */;
val* var70 /* : MClassType */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var71 /* : RuntimeVariable */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : AbstractCompiler */;
val* var102 /* : MModule */;
val* var103 /* : MClassType */;
val* var104 /* : MType */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : RuntimeVariable */;
val* var111 /* : Array[MParameter] */;
val* var112 /* : Iterator[nullable Object] */;
short int var113 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var115 /* : MType */;
val* var116 /* : AbstractCompiler */;
val* var117 /* : MModule */;
val* var118 /* : MClassType */;
val* var119 /* : MType */;
val* var_arg_mtype /* var arg_mtype: MType */;
val* var120 /* : String */;
val* var121 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var122 /* : nullable RuntimeVariable */;
val* var_ret_var /* var ret_var: nullable RuntimeVariable */;
val* var123 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var124 /* : Bool */;
val* var125 /* : MClassType */;
val* var126 /* : MClass */;
val* var127 /* : MClassKind */;
val* var128 /* : MClassKind */;
short int var129 /* : Bool */;
val* var130 /* : MClassType */;
val* var131 /* : null */;
short int var132 /* : Bool */;
val* var133 /* : null */;
short int var134 /* : Bool */;
val* var135 /* : AbstractCompiler */;
val* var136 /* : MModule */;
val* var137 /* : MClassType */;
val* var138 /* : MType */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
var_v = p0;
var_ccu = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var_mproperty = var;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var1 = 0;
} else {
var1 = var_mproperty->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 360);
exit(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var3) /* mainmodule on <var3:AbstractCompiler>*/;
var5 = NULL;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitCall>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitCall>*/;
var8 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var2, var4, var5, var6, var7) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_full_friendly_csignature = var8;
var9 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce) {
var10 = varonce;
} else {
var11 = "extern ";
var12 = 7;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = ";\n";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_full_friendly_csignature;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
CHECK_NEW_array__Array(var19);
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
var23 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_compiling_writer__Writer__add]))(var9, var22) /* add on <var9:Writer>*/;
var23;
var24 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var24) /* new_visitor on <var24:AbstractCompiler>*/;
var_nitni_visitor = var25;
var26 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var26) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var27 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:MProperty(MMethod)>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_model__MMethodDef__msignature]))(var27) /* msignature on <var27:MPropDef(MMethodDef)>*/;
var_msignature = var28;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var30 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var30) /* mainmodule on <var30:AbstractCompiler>*/;
var32 = NULL;
var33 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitCall>*/;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitCall>*/;
var35 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var29, var31, var32, var33, var34) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_csignature_blind = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "/* nitni callback for ";
var39 = 22;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__full_name]))(var_mproperty) /* full_name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = " */";
var45 = 3;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 3;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var43;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
CHECK_NEW_array__Array(var47);
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var50) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = " {";
var54 = 2;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 2;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var_csignature_blind;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
CHECK_NEW_array__Array(var56);
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var59) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var60 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var60->class->vft[COLOR_array__Array__init]))(var60) /* init on <var60:Array[RuntimeVariable]>*/;
CHECK_NEW_array__Array(var60);
var_vars = var60;
var61 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var_mtype = var61;
var62 = NULL;
var_recv_var = var62;
var63 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var63){
var64 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_model__MClassType__mclass]))(var64) /* mclass on <var64:MClassType>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_model__MClass__kind]))(var65) /* kind on <var65:MClass>*/;
var67 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MExplicitCall>*/;
var68 = ((short int (*)(val*, val*))(var66->class->vft[COLOR_kernel__Object___61d_61d]))(var66, var67) /* == on <var66:MClassKind>*/;
if (var68){
var69 = ((val* (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_nitni_visitor, var_mtype) /* new_var on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var69;
} else {
var70 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var_recv_mtype = var70;
var71 = ((val* (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_nitni_visitor, var_recv_mtype) /* init_instance on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var71;
var72 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce73) {
var74 = varonce73;
} else {
var75 = " recv /* var self: ";
var76 = 19;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = " */;";
var81 = 4;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 4;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var74;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var_mtype;
((struct instance_array__NativeArray*)var85)->values[3] = (val*) var79;
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
CHECK_NEW_array__Array(var83);
}
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var86) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = "recv = ";
var90 = 7;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = ";";
var95 = 1;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
CHECK_NEW_array__Array(var97);
}
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var100) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
}
} else {
var101 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var102 = ((val* (*)(val*))(var101->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var101) /* mainmodule on <var101:AbstractCompiler>*/;
var103 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var104 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var102, var103) /* anchor_to on <var_mtype:MType>*/;
var_mtype = var104;
if (varonce105) {
var106 = varonce105;
} else {
var107 = "recv";
var108 = 4;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var106, var_mtype) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var110;
}
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_recv_var) /* add on <var_vars:Array[RuntimeVariable]>*/;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 399);
exit(1);
} else {
var111 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature>*/;
}
var112 = ((val* (*)(val*))(var111->class->vft[COLOR_abstract_collection__Collection__iterator]))(var111) /* iterator on <var111:Array[MParameter]>*/;
for(;;) {
var113 = ((short int (*)(val*))(var112->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var112) /* is_ok on <var112:Iterator[nullable Object]>*/;
if(!var113) break;
var114 = ((val* (*)(val*))(var112->class->vft[COLOR_abstract_collection__Iterator__item]))(var112) /* item on <var112:Iterator[nullable Object]>*/;
var_p = var114;
var115 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var116 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var117 = ((val* (*)(val*))(var116->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var116) /* mainmodule on <var116:AbstractCompiler>*/;
var118 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var119 = ((val* (*)(val*, val*, val*))(var115->class->vft[COLOR_model__MType__anchor_to]))(var115, var117, var118) /* anchor_to on <var115:MType>*/;
var_arg_mtype = var119;
var120 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var121 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var120, var_arg_mtype) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_arg = var121;
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_arg) /* add on <var_vars:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var112->class->vft[COLOR_abstract_collection__Iterator__next]))(var112) /* next on <var112:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var122 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_nitni_visitor, var_mproperty, var_vars) /* send on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_ret_var = var122;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 407);
exit(1);
} else {
var123 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature>*/;
}
var_return_mtype = var123;
var124 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var124){
var125 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var126 = ((val* (*)(val*))(var125->class->vft[COLOR_model__MClassType__mclass]))(var125) /* mclass on <var125:MClassType>*/;
var127 = ((val* (*)(val*))(var126->class->vft[COLOR_model__MClass__kind]))(var126) /* kind on <var126:MClass>*/;
var128 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MExplicitCall>*/;
var129 = ((short int (*)(val*, val*))(var127->class->vft[COLOR_kernel__Object___33d_61d]))(var127, var128) /* != on <var127:MClassKind>*/;
if (var129){
var_ret_var = var_recv_var;
} else {
}
var130 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var_return_mtype = var130;
} else {
}
var131 = NULL;
if (var_return_mtype == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (var132){
var133 = NULL;
if (var_ret_var == NULL) {
var134 = 0; /* is null */
} else {
var134 = 1; /* arg is null and recv is not */
}
if (!var134) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 413);
exit(1);
}
var135 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var136 = ((val* (*)(val*))(var135->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var135) /* mainmodule on <var135:AbstractCompiler>*/;
var137 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var138 = ((val* (*)(val*, val*, val*))(var_return_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_return_mtype, var136, var137) /* anchor_to on <var_return_mtype:nullable MType(MType)>*/;
var_return_mtype = var138;
((void (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__ret_to_c]))(var_nitni_visitor, var_ret_var, var_return_mtype) /* ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
} else {
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "}";
var142 = 1;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var140) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCall#compile_extern_callback for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MExplicitCall__compile_extern_callback(val* self, val* p0, val* p1) {
compiler_ffi__MExplicitCall__compile_extern_callback(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MExplicitSuper#compile_extern_callback for (self: MExplicitSuper, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MExplicitSuper__compile_extern_callback(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : MPropDef */;
val* var1 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MPropDef */;
val* var4 /* : MClassDef */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var7 /* : MPropDef */;
val* var8 /* : MClassDef */;
val* var9 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : MModule */;
val* var12 /* : null */;
val* var13 /* : SignatureLength */;
val* var14 /* : FromCCallContext */;
val* var15 /* : String */;
val* var_internal_csignature /* var internal_csignature: String */;
val* var16 /* : Writer */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
val* var30 /* : Writer */;
val* var31 /* : AbstractCompiler */;
val* var32 /* : MModule */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : SignatureLength */;
val* var39 /* : ToCCallContext */;
val* var40 /* : String */;
val* var_friendly_cname /* var friendly_cname: String */;
val* var41 /* : AbstractCompiler */;
val* var42 /* : MModule */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : SignatureLength */;
val* var49 /* : CallContext */;
val* var50 /* : String */;
val* var_internal_cname /* var internal_cname: String */;
val* var51 /* : Writer */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : String */;
val* var71 /* : Writer */;
val* var72 /* : AbstractCompiler */;
val* var73 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var74 /* : nullable Frame */;
val* var75 /* : MPropDef */;
val* var76 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var77 /* : AbstractCompiler */;
val* var78 /* : MModule */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : SignatureLength */;
val* var85 /* : CallContext */;
val* var86 /* : String */;
val* var_csignature_blind /* var csignature_blind: String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
val* var111 /* : Array[RuntimeVariable] */;
val* var_vars /* var vars: Array[RuntimeVariable] */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
val* var117 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var118 /* : Array[MParameter] */;
val* var119 /* : Iterator[nullable Object] */;
short int var120 /* : Bool */;
val* var121 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var122 /* : MType */;
val* var123 /* : MType */;
val* var_arg_mtype /* var arg_mtype: MType */;
val* var124 /* : String */;
val* var125 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var126 /* : MPropDef */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name;
val* var130 /* : nullable RuntimeVariable */;
val* var_ret_var /* var ret_var: nullable RuntimeVariable */;
val* var131 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
val* var132 /* : null */;
short int var133 /* : Bool */;
val* var134 /* : null */;
short int var135 /* : Bool */;
val* var136 /* : MType */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
var_v = p0;
var_ccu = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MPropDef__mproperty]))(var) /* mproperty on <var:MPropDef>*/;
var_mproperty = var1;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var2 = 0;
} else {
var2 = var_mproperty->type->type_table[cltype] == idtype;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 425);
exit(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mclassdef]))(var3) /* mclassdef on <var3:MPropDef>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MClassDef__mclass]))(var4) /* mclass on <var4:MClassDef>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__mclass_type]))(var5) /* mclass_type on <var5:MClass>*/;
var_mclass_type = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MPropDef__mclassdef]))(var7) /* mclassdef on <var7:MPropDef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClassDef__mmodule]))(var8) /* mmodule on <var8:MClassDef>*/;
var_mmodule = var9;
var10 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var10) /* mainmodule on <var10:AbstractCompiler>*/;
var12 = NULL;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitSuper>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_c__Object__from_c_call_context]))(self) /* from_c_call_context on <self:MExplicitSuper>*/;
var15 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var11, var12, var13, var14) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_internal_csignature = var15;
var16 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "extern ";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = ";\n";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_internal_csignature;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var22;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
CHECK_NEW_array__Array(var26);
}
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
var30 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_compiling_writer__Writer__add]))(var16, var29) /* add on <var16:Writer>*/;
var30;
var31 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var31) /* mainmodule on <var31:AbstractCompiler>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "___super";
var36 = 8;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__short_signature]))(self) /* short_signature on <self:MExplicitSuper>*/;
var39 = ((val* (*)(val*))(self->class->vft[COLOR_c__Object__to_c_call_context]))(self) /* to_c_call_context on <self:MExplicitSuper>*/;
var40 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var_mproperty, var_mclass_type, var32, var34, var38, var39) /* build_cname on <var_mproperty:MProperty(MMethod)>*/;
var_friendly_cname = var40;
var41 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var41) /* mainmodule on <var41:AbstractCompiler>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "___super";
var46 = 8;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitSuper>*/;
var49 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitSuper>*/;
var50 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var_mproperty, var_mclass_type, var42, var44, var48, var49) /* build_cname on <var_mproperty:MProperty(MMethod)>*/;
var_internal_cname = var50;
var51 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "#define ";
var55 = 8;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = " ";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "\n";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 5;
var69 = NEW_array__NativeArray(var68, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var69)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var69)->values[1] = (val*) var_friendly_cname;
((struct instance_array__NativeArray*)var69)->values[2] = (val*) var58;
((struct instance_array__NativeArray*)var69)->values[3] = (val*) var_internal_cname;
((struct instance_array__NativeArray*)var69)->values[4] = (val*) var63;
((void (*)(val*, val*, long))(var67->class->vft[COLOR_array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
CHECK_NEW_array__Array(var67);
}
var70 = ((val* (*)(val*))(var67->class->vft[COLOR_string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
var71 = ((val* (*)(val*, val*))(var51->class->vft[COLOR_compiling_writer__Writer__add]))(var51, var70) /* add on <var51:Writer>*/;
var71;
var72 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var72) /* new_visitor on <var72:AbstractCompiler>*/;
var_nitni_visitor = var73;
var74 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var74) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var75 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:MProperty(MMethod)>*/;
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_model__MMethodDef__msignature]))(var75) /* msignature on <var75:MPropDef(MMethodDef)>*/;
var_msignature = var76;
var77 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var78 = ((val* (*)(val*))(var77->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var77) /* mainmodule on <var77:AbstractCompiler>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = "___super";
var82 = 8;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitSuper>*/;
var85 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitSuper>*/;
var86 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var78, var80, var84, var85) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_csignature_blind = var86;
if (varonce87) {
var88 = varonce87;
} else {
var89 = "/* nitni callback to super for ";
var90 = 31;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__full_name]))(var_mproperty) /* full_name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = " */";
var96 = 3;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 3;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var94;
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
CHECK_NEW_array__Array(var98);
}
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var101) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = " {";
var105 = 2;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var_csignature_blind;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var103;
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
CHECK_NEW_array__Array(var107);
}
var110 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var110) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var111 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var111->class->vft[COLOR_array__Array__init]))(var111) /* init on <var111:Array[RuntimeVariable]>*/;
CHECK_NEW_array__Array(var111);
var_vars = var111;
if (varonce112) {
var113 = varonce112;
} else {
var114 = "recv";
var115 = 4;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var113, var_mclass_type) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var117;
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_recv_var) /* add on <var_vars:Array[RuntimeVariable]>*/;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 453);
exit(1);
} else {
var118 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature>*/;
}
var119 = ((val* (*)(val*))(var118->class->vft[COLOR_abstract_collection__Collection__iterator]))(var118) /* iterator on <var118:Array[MParameter]>*/;
for(;;) {
var120 = ((short int (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var119) /* is_ok on <var119:Iterator[nullable Object]>*/;
if(!var120) break;
var121 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__item]))(var119) /* item on <var119:Iterator[nullable Object]>*/;
var_p = var121;
var122 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var123 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(var_v, var122) /* anchor on <var_v:AbstractCompilerVisitor>*/;
var_arg_mtype = var123;
var124 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var125 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var124, var_arg_mtype) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_arg = var125;
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_arg) /* add on <var_vars:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__next]))(var119) /* next on <var119:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var126 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
/* <var126:MPropDef> isa MMethodDef */
cltype128 = type_model__MMethodDef.color;
idtype129 = type_model__MMethodDef.id;
if(cltype128 >= var126->type->table_size) {
var127 = 0;
} else {
var127 = var126->type->type_table[cltype128] == idtype129;
}
if (!var127) {
var_class_name = var126 == NULL ? "null" : var126->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 459);
exit(1);
}
var130 = ((val* (*)(val*, val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__supercall]))(var_nitni_visitor, var126, var_mclass_type, var_vars) /* supercall on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_ret_var = var130;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 461);
exit(1);
} else {
var131 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature>*/;
}
var_return_mtype = var131;
var132 = NULL;
if (var_return_mtype == NULL) {
var133 = 0; /* is null */
} else {
var133 = 1; /* arg is null and recv is not */
}
if (var133){
var134 = NULL;
if (var_ret_var == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (!var135) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 463);
exit(1);
}
var136 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(var_v, var_return_mtype) /* anchor on <var_v:AbstractCompilerVisitor>*/;
var_return_mtype = var136;
((void (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__ret_to_c]))(var_nitni_visitor, var_ret_var, var_return_mtype) /* ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
} else {
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "}";
var140 = 1;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var138) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method compiler_ffi#MExplicitSuper#compile_extern_callback for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MExplicitSuper__compile_extern_callback(val* self, val* p0, val* p1) {
compiler_ffi__MExplicitSuper__compile_extern_callback(self, p0, p1);
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCast#compile_extern_callbacks for (self: MExplicitCast, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MExplicitCast__compile_extern_callbacks(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : MType */;
val* var_from /* var from: MType */;
val* var1 /* : MType */;
val* var_to /* var to: MType */;
val* var2 /* : Array[Object] */;
long var3 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var_full_friendly_csignature /* var full_friendly_csignature: String */;
val* var35 /* : Writer */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
val* var50 /* : Writer */;
val* var51 /* : Writer */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : AbstractCompiler */;
val* var64 /* : MModule */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
val* var81 /* : Writer */;
val* var82 /* : AbstractCompiler */;
val* var83 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var84 /* : nullable Frame */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var_87 /* var : Array[Object] */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : AbstractCompiler */;
val* var94 /* : MModule */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var_full_internal_csignature /* var full_internal_csignature: String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
val* var144 /* : Array[Object] */;
long var145 /* : Int */;
val* var146 /* : NativeArray[Object] */;
val* var147 /* : String */;
val* var148 /* : RuntimeVariable */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
val* var_from_var /* var from_var: RuntimeVariable */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
val* var159 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
val* var179 /* : MType */;
short int var180 /* : Bool */;
val* var181 /* : Writer */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : String */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : String */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : String */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : String */;
val* var205 /* : Array[Object] */;
long var206 /* : Int */;
val* var207 /* : NativeArray[Object] */;
val* var208 /* : String */;
val* var209 /* : Writer */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var_212 /* var : Array[Object] */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
val* var218 /* : String */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : String */;
val* var224 /* : AbstractCompiler */;
val* var225 /* : MModule */;
val* var226 /* : String */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
long var230 /* : Int */;
val* var231 /* : String */;
val* var232 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : String */;
val* var238 /* : String */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : String */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : String */;
val* var250 /* : String */;
val* var251 /* : Writer */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : String */;
val* var262 /* : Array[Object] */;
long var263 /* : Int */;
val* var264 /* : NativeArray[Object] */;
val* var265 /* : String */;
val* var266 /* : Writer */;
val* var267 /* : Writer */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : String */;
val* var273 /* : String */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : String */;
val* var279 /* : AbstractCompiler */;
val* var280 /* : MModule */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : String */;
val* var287 /* : String */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
long var291 /* : Int */;
val* var292 /* : String */;
val* var293 /* : Array[Object] */;
long var294 /* : Int */;
val* var295 /* : NativeArray[Object] */;
val* var296 /* : String */;
val* var297 /* : Writer */;
val* var298 /* : AbstractCompiler */;
val* var299 /* : AbstractCompilerVisitor */;
val* var300 /* : nullable Frame */;
val* var301 /* : Array[Object] */;
long var302 /* : Int */;
val* var_303 /* var : Array[Object] */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : String */;
val* var309 /* : String */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : String */;
val* var315 /* : AbstractCompiler */;
val* var316 /* : MModule */;
val* var317 /* : String */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : String */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
val* var329 /* : String */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : String */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : String */;
val* var341 /* : String */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : String */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : String */;
val* var357 /* : Array[Object] */;
long var358 /* : Int */;
val* var359 /* : NativeArray[Object] */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
long var364 /* : Int */;
val* var365 /* : String */;
val* var366 /* : Array[Object] */;
long var367 /* : Int */;
val* var368 /* : NativeArray[Object] */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : String */;
val* var375 /* : RuntimeVariable */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : String */;
val* var381 /* : RuntimeVariable */;
val* var_check /* var check: RuntimeVariable */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
long var385 /* : Int */;
val* var386 /* : String */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
long var390 /* : Int */;
val* var391 /* : String */;
val* var392 /* : Array[Object] */;
long var393 /* : Int */;
val* var394 /* : NativeArray[Object] */;
val* var395 /* : String */;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : NativeString */;
long var399 /* : Int */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : String */;
val* var406 /* : RuntimeVariable */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
long var410 /* : Int */;
val* var411 /* : String */;
val* var412 /* : MType */;
short int var413 /* : Bool */;
val* var414 /* : Writer */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
long var418 /* : Int */;
val* var419 /* : String */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : String */;
val* var426 /* : String */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : String */;
val* var432 /* : String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
long var436 /* : Int */;
val* var437 /* : String */;
val* var438 /* : Array[Object] */;
long var439 /* : Int */;
val* var440 /* : NativeArray[Object] */;
val* var441 /* : String */;
val* var442 /* : Writer */;
val* var443 /* : MType */;
short int var444 /* : Bool */;
val* var445 /* : Writer */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : String */;
val* var451 /* : String */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : String */;
val* var457 /* : String */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
long var461 /* : Int */;
val* var462 /* : String */;
val* var463 /* : String */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
long var467 /* : Int */;
val* var468 /* : String */;
val* var469 /* : Array[Object] */;
long var470 /* : Int */;
val* var471 /* : NativeArray[Object] */;
val* var472 /* : String */;
val* var473 /* : Writer */;
var_v = p0;
var_ccu = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var_from = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var_to = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
var3 = 9;
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var3) /* with_capacity on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_ = var2;
if (varonce) {
var4 = varonce;
} else {
var5 = "int ";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var4) /* add on <var_:Array[Object]>*/;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var8) /* mainmodule on <var8:AbstractCompiler>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model_base__MModule__name]))(var9) /* name on <var9:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "___";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
var16 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "_is_a_";
var20 = 6;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var18) /* add on <var_:Array[Object]>*/;
var22 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "(";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var24) /* add on <var_:Array[Object]>*/;
var28 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var28) /* add on <var_:Array[Object]>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = ")";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var30) /* add on <var_:Array[Object]>*/;
var34 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_full_friendly_csignature = var34;
var35 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "extern ";
var39 = 7;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";\n";
var44 = 2;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_full_friendly_csignature;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
CHECK_NEW_array__Array(var46);
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
var50 = ((val* (*)(val*, val*))(var35->class->vft[COLOR_compiling_writer__Writer__add]))(var35, var49) /* add on <var35:Writer>*/;
var50;
var51 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "#define ";
var55 = 8;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__check_cname]))(self) /* check_cname on <self:MExplicitCast>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = " ";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var63) /* mainmodule on <var63:AbstractCompiler>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_model_base__MModule__name]))(var64) /* name on <var64:MModule>*/;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "___";
var69 = 3;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__check_cname]))(self) /* check_cname on <self:MExplicitCast>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "\n";
var75 = 1;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 7;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var65;
((struct instance_array__NativeArray*)var79)->values[4] = (val*) var67;
((struct instance_array__NativeArray*)var79)->values[5] = (val*) var71;
((struct instance_array__NativeArray*)var79)->values[6] = (val*) var73;
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
CHECK_NEW_array__Array(var77);
}
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
var81 = ((val* (*)(val*, val*))(var51->class->vft[COLOR_compiling_writer__Writer__add]))(var51, var80) /* add on <var51:Writer>*/;
var81;
var82 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var82) /* new_visitor on <var82:AbstractCompiler>*/;
var_nitni_visitor = var83;
var84 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var84) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
var86 = 9;
((void (*)(val*, long))(var85->class->vft[COLOR_array__Array__with_capacity]))(var85, var86) /* with_capacity on <var85:Array[Object]>*/;
CHECK_NEW_array__Array(var85);
var_87 = var85;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "int ";
var91 = 4;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var89) /* add on <var_87:Array[Object]>*/;
var93 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var94 = ((val* (*)(val*))(var93->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var93) /* mainmodule on <var93:AbstractCompiler>*/;
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_model_base__MModule__name]))(var94) /* name on <var94:MModule>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var95) /* add on <var_87:Array[Object]>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "___";
var99 = 3;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var97) /* add on <var_87:Array[Object]>*/;
var101 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var101) /* add on <var_87:Array[Object]>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "_is_a_";
var105 = 6;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var103) /* add on <var_87:Array[Object]>*/;
var107 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var107) /* add on <var_87:Array[Object]>*/;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "(";
var111 = 1;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var109) /* add on <var_87:Array[Object]>*/;
var113 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var113) /* add on <var_87:Array[Object]>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = " from)";
var117 = 6;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var115) /* add on <var_87:Array[Object]>*/;
var119 = ((val* (*)(val*))(var_87->class->vft[COLOR_string__Object__to_s]))(var_87) /* to_s on <var_87:Array[Object]>*/;
var_full_internal_csignature = var119;
if (varonce120) {
var121 = varonce120;
} else {
var122 = "/* nitni check for ";
var123 = 19;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = " to ";
var128 = 4;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = " */";
var133 = 3;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 5;
var137 = NEW_array__NativeArray(var136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var137)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var137)->values[1] = (val*) var_from;
((struct instance_array__NativeArray*)var137)->values[2] = (val*) var126;
((struct instance_array__NativeArray*)var137)->values[3] = (val*) var_to;
((struct instance_array__NativeArray*)var137)->values[4] = (val*) var131;
((void (*)(val*, val*, long))(var135->class->vft[COLOR_array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
CHECK_NEW_array__Array(var135);
}
var138 = ((val* (*)(val*))(var135->class->vft[COLOR_string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var138) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce139) {
var140 = varonce139;
} else {
var141 = " {";
var142 = 2;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
var144 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var144 = array_instance Array[Object] */
var145 = 2;
var146 = NEW_array__NativeArray(var145, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var146)->values[0] = (val*) var_full_internal_csignature;
((struct instance_array__NativeArray*)var146)->values[1] = (val*) var140;
((void (*)(val*, val*, long))(var144->class->vft[COLOR_array__Array__with_native]))(var144, var146, var145) /* with_native on <var144:Array[Object]>*/;
CHECK_NEW_array__Array(var144);
}
var147 = ((val* (*)(val*))(var144->class->vft[COLOR_string__Object__to_s]))(var144) /* to_s on <var144:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var147) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var148 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce149) {
var150 = varonce149;
} else {
var151 = "from->value";
var152 = 11;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
((void (*)(val*, val*, val*, val*))(var148->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var148, var150, var_from, var_from) /* init on <var148:RuntimeVariable>*/;
CHECK_NEW_abstract_compiler__RuntimeVariable(var148);
var_from_var = var148;
if (varonce154) {
var155 = varonce154;
} else {
var156 = "FFI isa";
var157 = 7;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
var159 = ((val* (*)(val*, val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_nitni_visitor, var_from_var, var_to, var155) /* type_test on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var159;
if (varonce160) {
var161 = varonce160;
} else {
var162 = "return ";
var163 = 7;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = ";";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 3;
var172 = NEW_array__NativeArray(var171, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var172)->values[0] = (val*) var161;
((struct instance_array__NativeArray*)var172)->values[1] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var172)->values[2] = (val*) var166;
((void (*)(val*, val*, long))(var170->class->vft[COLOR_array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
CHECK_NEW_array__Array(var170);
}
var173 = ((val* (*)(val*))(var170->class->vft[COLOR_string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var173) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce174) {
var175 = varonce174;
} else {
var176 = "}";
var177 = 1;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var175) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var179 = ((val* (*)(val*))(var_to->class->vft[COLOR_model__MType__as_nullable]))(var_to) /* as_nullable on <var_to:MType>*/;
var180 = ((short int (*)(val*, val*))(var_from->class->vft[COLOR_kernel__Object___61d_61d]))(var_from, var179) /* == on <var_from:MType>*/;
if (var180){
var181 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce182) {
var183 = varonce182;
} else {
var184 = "#define ";
var185 = 8;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
var187 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce188) {
var189 = varonce188;
} else {
var190 = "_is_null ";
var191 = 9;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce194) {
var195 = varonce194;
} else {
var196 = "_is_a_";
var197 = 6;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
var199 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "\n";
var203 = 1;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 7;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var183;
((struct instance_array__NativeArray*)var207)->values[1] = (val*) var187;
((struct instance_array__NativeArray*)var207)->values[2] = (val*) var189;
((struct instance_array__NativeArray*)var207)->values[3] = (val*) var193;
((struct instance_array__NativeArray*)var207)->values[4] = (val*) var195;
((struct instance_array__NativeArray*)var207)->values[5] = (val*) var199;
((struct instance_array__NativeArray*)var207)->values[6] = (val*) var201;
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
CHECK_NEW_array__Array(var205);
}
var208 = ((val* (*)(val*))(var205->class->vft[COLOR_string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
var209 = ((val* (*)(val*, val*))(var181->class->vft[COLOR_compiling_writer__Writer__add]))(var181, var208) /* add on <var181:Writer>*/;
var209;
} else {
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
var211 = 11;
((void (*)(val*, long))(var210->class->vft[COLOR_array__Array__with_capacity]))(var210, var211) /* with_capacity on <var210:Array[Object]>*/;
CHECK_NEW_array__Array(var210);
var_212 = var210;
if (varonce213) {
var214 = varonce213;
} else {
var215 = "";
var216 = 0;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var214) /* add on <var_212:Array[Object]>*/;
var218 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__cname]))(var_to) /* cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var218) /* add on <var_212:Array[Object]>*/;
if (varonce219) {
var220 = varonce219;
} else {
var221 = " ";
var222 = 1;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var220) /* add on <var_212:Array[Object]>*/;
var224 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var225 = ((val* (*)(val*))(var224->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var224) /* mainmodule on <var224:AbstractCompiler>*/;
var226 = ((val* (*)(val*))(var225->class->vft[COLOR_model_base__MModule__name]))(var225) /* name on <var225:MModule>*/;
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var226) /* add on <var_212:Array[Object]>*/;
if (varonce227) {
var228 = varonce227;
} else {
var229 = "___";
var230 = 3;
var231 = string__NativeString__to_s_with_length(var229, var230);
var228 = var231;
varonce227 = var228;
}
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var228) /* add on <var_212:Array[Object]>*/;
var232 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var232) /* add on <var_212:Array[Object]>*/;
if (varonce233) {
var234 = varonce233;
} else {
var235 = "_as_";
var236 = 4;
var237 = string__NativeString__to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var234) /* add on <var_212:Array[Object]>*/;
var238 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var238) /* add on <var_212:Array[Object]>*/;
if (varonce239) {
var240 = varonce239;
} else {
var241 = "(";
var242 = 1;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var240) /* add on <var_212:Array[Object]>*/;
var244 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var244) /* add on <var_212:Array[Object]>*/;
if (varonce245) {
var246 = varonce245;
} else {
var247 = ")";
var248 = 1;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
((void (*)(val*, val*))(var_212->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_212, var246) /* add on <var_212:Array[Object]>*/;
var250 = ((val* (*)(val*))(var_212->class->vft[COLOR_string__Object__to_s]))(var_212) /* to_s on <var_212:Array[Object]>*/;
var_full_friendly_csignature = var250;
var251 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce252) {
var253 = varonce252;
} else {
var254 = "extern ";
var255 = 7;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = ";\n";
var260 = 2;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
var262 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var262 = array_instance Array[Object] */
var263 = 3;
var264 = NEW_array__NativeArray(var263, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var264)->values[0] = (val*) var253;
((struct instance_array__NativeArray*)var264)->values[1] = (val*) var_full_friendly_csignature;
((struct instance_array__NativeArray*)var264)->values[2] = (val*) var258;
((void (*)(val*, val*, long))(var262->class->vft[COLOR_array__Array__with_native]))(var262, var264, var263) /* with_native on <var262:Array[Object]>*/;
CHECK_NEW_array__Array(var262);
}
var265 = ((val* (*)(val*))(var262->class->vft[COLOR_string__Object__to_s]))(var262) /* to_s on <var262:Array[Object]>*/;
var266 = ((val* (*)(val*, val*))(var251->class->vft[COLOR_compiling_writer__Writer__add]))(var251, var265) /* add on <var251:Writer>*/;
var266;
var267 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce268) {
var269 = varonce268;
} else {
var270 = "#define ";
var271 = 8;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__cast_cname]))(self) /* cast_cname on <self:MExplicitCast>*/;
if (varonce274) {
var275 = varonce274;
} else {
var276 = " ";
var277 = 1;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
var279 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var280 = ((val* (*)(val*))(var279->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var279) /* mainmodule on <var279:AbstractCompiler>*/;
var281 = ((val* (*)(val*))(var280->class->vft[COLOR_model_base__MModule__name]))(var280) /* name on <var280:MModule>*/;
if (varonce282) {
var283 = varonce282;
} else {
var284 = "___";
var285 = 3;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__cast_cname]))(self) /* cast_cname on <self:MExplicitCast>*/;
if (varonce288) {
var289 = varonce288;
} else {
var290 = "\n";
var291 = 1;
var292 = string__NativeString__to_s_with_length(var290, var291);
var289 = var292;
varonce288 = var289;
}
var293 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var293 = array_instance Array[Object] */
var294 = 7;
var295 = NEW_array__NativeArray(var294, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var295)->values[0] = (val*) var269;
((struct instance_array__NativeArray*)var295)->values[1] = (val*) var273;
((struct instance_array__NativeArray*)var295)->values[2] = (val*) var275;
((struct instance_array__NativeArray*)var295)->values[3] = (val*) var281;
((struct instance_array__NativeArray*)var295)->values[4] = (val*) var283;
((struct instance_array__NativeArray*)var295)->values[5] = (val*) var287;
((struct instance_array__NativeArray*)var295)->values[6] = (val*) var289;
((void (*)(val*, val*, long))(var293->class->vft[COLOR_array__Array__with_native]))(var293, var295, var294) /* with_native on <var293:Array[Object]>*/;
CHECK_NEW_array__Array(var293);
}
var296 = ((val* (*)(val*))(var293->class->vft[COLOR_string__Object__to_s]))(var293) /* to_s on <var293:Array[Object]>*/;
var297 = ((val* (*)(val*, val*))(var267->class->vft[COLOR_compiling_writer__Writer__add]))(var267, var296) /* add on <var267:Writer>*/;
var297;
var298 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var299 = ((val* (*)(val*))(var298->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var298) /* new_visitor on <var298:AbstractCompiler>*/;
var_nitni_visitor = var299;
var300 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var300) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var301 = NEW_array__Array(&type_array__Arraykernel__Object);
var302 = 11;
((void (*)(val*, long))(var301->class->vft[COLOR_array__Array__with_capacity]))(var301, var302) /* with_capacity on <var301:Array[Object]>*/;
CHECK_NEW_array__Array(var301);
var_303 = var301;
if (varonce304) {
var305 = varonce304;
} else {
var306 = "";
var307 = 0;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var305) /* add on <var_303:Array[Object]>*/;
var309 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_to) /* cname_blind on <var_to:MType>*/;
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var309) /* add on <var_303:Array[Object]>*/;
if (varonce310) {
var311 = varonce310;
} else {
var312 = " ";
var313 = 1;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var311) /* add on <var_303:Array[Object]>*/;
var315 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var316 = ((val* (*)(val*))(var315->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var315) /* mainmodule on <var315:AbstractCompiler>*/;
var317 = ((val* (*)(val*))(var316->class->vft[COLOR_model_base__MModule__name]))(var316) /* name on <var316:MModule>*/;
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var317) /* add on <var_303:Array[Object]>*/;
if (varonce318) {
var319 = varonce318;
} else {
var320 = "___";
var321 = 3;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var319) /* add on <var_303:Array[Object]>*/;
var323 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var323) /* add on <var_303:Array[Object]>*/;
if (varonce324) {
var325 = varonce324;
} else {
var326 = "_as_";
var327 = 4;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var325) /* add on <var_303:Array[Object]>*/;
var329 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var329) /* add on <var_303:Array[Object]>*/;
if (varonce330) {
var331 = varonce330;
} else {
var332 = "(";
var333 = 1;
var334 = string__NativeString__to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var331) /* add on <var_303:Array[Object]>*/;
var335 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var335) /* add on <var_303:Array[Object]>*/;
if (varonce336) {
var337 = varonce336;
} else {
var338 = " from)";
var339 = 6;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
((void (*)(val*, val*))(var_303->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_303, var337) /* add on <var_303:Array[Object]>*/;
var341 = ((val* (*)(val*))(var_303->class->vft[COLOR_string__Object__to_s]))(var_303) /* to_s on <var_303:Array[Object]>*/;
var_full_internal_csignature = var341;
if (varonce342) {
var343 = varonce342;
} else {
var344 = "/* nitni cast for ";
var345 = 18;
var346 = string__NativeString__to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
if (varonce347) {
var348 = varonce347;
} else {
var349 = " to ";
var350 = 4;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
if (varonce352) {
var353 = varonce352;
} else {
var354 = " */";
var355 = 3;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
var357 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var357 = array_instance Array[Object] */
var358 = 5;
var359 = NEW_array__NativeArray(var358, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var359)->values[0] = (val*) var343;
((struct instance_array__NativeArray*)var359)->values[1] = (val*) var_from;
((struct instance_array__NativeArray*)var359)->values[2] = (val*) var348;
((struct instance_array__NativeArray*)var359)->values[3] = (val*) var_to;
((struct instance_array__NativeArray*)var359)->values[4] = (val*) var353;
((void (*)(val*, val*, long))(var357->class->vft[COLOR_array__Array__with_native]))(var357, var359, var358) /* with_native on <var357:Array[Object]>*/;
CHECK_NEW_array__Array(var357);
}
var360 = ((val* (*)(val*))(var357->class->vft[COLOR_string__Object__to_s]))(var357) /* to_s on <var357:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var360) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce361) {
var362 = varonce361;
} else {
var363 = " {";
var364 = 2;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
var366 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var366 = array_instance Array[Object] */
var367 = 2;
var368 = NEW_array__NativeArray(var367, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var368)->values[0] = (val*) var_full_internal_csignature;
((struct instance_array__NativeArray*)var368)->values[1] = (val*) var362;
((void (*)(val*, val*, long))(var366->class->vft[COLOR_array__Array__with_native]))(var366, var368, var367) /* with_native on <var366:Array[Object]>*/;
CHECK_NEW_array__Array(var366);
}
var369 = ((val* (*)(val*))(var366->class->vft[COLOR_string__Object__to_s]))(var366) /* to_s on <var366:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var369) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce370) {
var371 = varonce370;
} else {
var372 = "from";
var373 = 4;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
var375 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var371, var_from) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_from_var = var375;
if (varonce376) {
var377 = varonce376;
} else {
var378 = "FFI cast";
var379 = 8;
var380 = string__NativeString__to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
var381 = ((val* (*)(val*, val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_nitni_visitor, var_from_var, var_to, var377) /* type_test on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_check = var381;
if (varonce382) {
var383 = varonce382;
} else {
var384 = "if (!";
var385 = 5;
var386 = string__NativeString__to_s_with_length(var384, var385);
var383 = var386;
varonce382 = var383;
}
if (varonce387) {
var388 = varonce387;
} else {
var389 = ") {";
var390 = 3;
var391 = string__NativeString__to_s_with_length(var389, var390);
var388 = var391;
varonce387 = var388;
}
var392 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var392 = array_instance Array[Object] */
var393 = 3;
var394 = NEW_array__NativeArray(var393, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var394)->values[0] = (val*) var383;
((struct instance_array__NativeArray*)var394)->values[1] = (val*) var_check;
((struct instance_array__NativeArray*)var394)->values[2] = (val*) var388;
((void (*)(val*, val*, long))(var392->class->vft[COLOR_array__Array__with_native]))(var392, var394, var393) /* with_native on <var392:Array[Object]>*/;
CHECK_NEW_array__Array(var392);
}
var395 = ((val* (*)(val*))(var392->class->vft[COLOR_string__Object__to_s]))(var392) /* to_s on <var392:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var395) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce396) {
var397 = varonce396;
} else {
var398 = "FFI cast failed";
var399 = 15;
var400 = string__NativeString__to_s_with_length(var398, var399);
var397 = var400;
varonce396 = var397;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_nitni_visitor, var397) /* add_abort on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce401) {
var402 = varonce401;
} else {
var403 = "}";
var404 = 1;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var402) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var406 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(var_nitni_visitor, var_from_var, var_to) /* autobox on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var406;
((void (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__ret_to_c]))(var_nitni_visitor, var_recv_var, var_to) /* ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce407) {
var408 = varonce407;
} else {
var409 = "}";
var410 = 1;
var411 = string__NativeString__to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var408) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var412 = ((val* (*)(val*))(var_from->class->vft[COLOR_model__MType__as_nullable]))(var_from) /* as_nullable on <var_from:MType>*/;
var413 = ((short int (*)(val*, val*))(var412->class->vft[COLOR_kernel__Object___61d_61d]))(var412, var_to) /* == on <var412:MType>*/;
if (var413){
var414 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce415) {
var416 = varonce415;
} else {
var417 = "#define ";
var418 = 8;
var419 = string__NativeString__to_s_with_length(var417, var418);
var416 = var419;
varonce415 = var416;
}
var420 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce421) {
var422 = varonce421;
} else {
var423 = "_as_nullable ";
var424 = 13;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
var426 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce427) {
var428 = varonce427;
} else {
var429 = "_as_";
var430 = 4;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
var432 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce433) {
var434 = varonce433;
} else {
var435 = "\n";
var436 = 1;
var437 = string__NativeString__to_s_with_length(var435, var436);
var434 = var437;
varonce433 = var434;
}
var438 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var438 = array_instance Array[Object] */
var439 = 7;
var440 = NEW_array__NativeArray(var439, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var440)->values[0] = (val*) var416;
((struct instance_array__NativeArray*)var440)->values[1] = (val*) var420;
((struct instance_array__NativeArray*)var440)->values[2] = (val*) var422;
((struct instance_array__NativeArray*)var440)->values[3] = (val*) var426;
((struct instance_array__NativeArray*)var440)->values[4] = (val*) var428;
((struct instance_array__NativeArray*)var440)->values[5] = (val*) var432;
((struct instance_array__NativeArray*)var440)->values[6] = (val*) var434;
((void (*)(val*, val*, long))(var438->class->vft[COLOR_array__Array__with_native]))(var438, var440, var439) /* with_native on <var438:Array[Object]>*/;
CHECK_NEW_array__Array(var438);
}
var441 = ((val* (*)(val*))(var438->class->vft[COLOR_string__Object__to_s]))(var438) /* to_s on <var438:Array[Object]>*/;
var442 = ((val* (*)(val*, val*))(var414->class->vft[COLOR_compiling_writer__Writer__add]))(var414, var441) /* add on <var414:Writer>*/;
var442;
} else {
}
var443 = ((val* (*)(val*))(var_to->class->vft[COLOR_model__MType__as_nullable]))(var_to) /* as_nullable on <var_to:MType>*/;
var444 = ((short int (*)(val*, val*))(var_from->class->vft[COLOR_kernel__Object___61d_61d]))(var_from, var443) /* == on <var_from:MType>*/;
if (var444){
var445 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce446) {
var447 = varonce446;
} else {
var448 = "#define ";
var449 = 8;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce452) {
var453 = varonce452;
} else {
var454 = "_as_not_nullable ";
var455 = 17;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
var457 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce458) {
var459 = varonce458;
} else {
var460 = "_as_";
var461 = 4;
var462 = string__NativeString__to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
var463 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce464) {
var465 = varonce464;
} else {
var466 = "\n";
var467 = 1;
var468 = string__NativeString__to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
var469 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var469 = array_instance Array[Object] */
var470 = 7;
var471 = NEW_array__NativeArray(var470, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var471)->values[0] = (val*) var447;
((struct instance_array__NativeArray*)var471)->values[1] = (val*) var451;
((struct instance_array__NativeArray*)var471)->values[2] = (val*) var453;
((struct instance_array__NativeArray*)var471)->values[3] = (val*) var457;
((struct instance_array__NativeArray*)var471)->values[4] = (val*) var459;
((struct instance_array__NativeArray*)var471)->values[5] = (val*) var463;
((struct instance_array__NativeArray*)var471)->values[6] = (val*) var465;
((void (*)(val*, val*, long))(var469->class->vft[COLOR_array__Array__with_native]))(var469, var471, var470) /* with_native on <var469:Array[Object]>*/;
CHECK_NEW_array__Array(var469);
}
var472 = ((val* (*)(val*))(var469->class->vft[COLOR_string__Object__to_s]))(var469) /* to_s on <var469:Array[Object]>*/;
var473 = ((val* (*)(val*, val*))(var445->class->vft[COLOR_compiling_writer__Writer__add]))(var445, var472) /* add on <var445:Writer>*/;
var473;
} else {
}
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCast#compile_extern_callbacks for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MExplicitCast__compile_extern_callbacks(val* self, val* p0, val* p1) {
compiler_ffi__MExplicitCast__compile_extern_callbacks(self, p0, p1);
RET_LABEL:;
}
