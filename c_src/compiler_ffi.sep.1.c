#include "compiler_ffi.sep.0.h"
/* method compiler_ffi#AModule#foreign_callbacks for (self: AModule): ForeignCallbackSet */
val* compiler_ffi__AModule__foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : ForeignCallbackSet */;
var1 = self->attrs[COLOR_compiler_ffi__AModule___64dforeign_callbacks].val; /* @foreign_callbacks on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @foreign_callbacks");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 25);
show_backtrace(1);
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
val* var /* : AbstractCompiler */;
val* var1 /* : ModelBuilder */;
val* var2 /* : String */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_file /* var file: ExternFile */;
val* var9 /* : AbstractCompiler */;
val* var10 /* : Array[ExternFile] */;
var_v = p0;
var_modelbuilder = p1;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var) /* modelbuilder on <var:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__ModelBuilder__compile_dir]))(var1) /* compile_dir on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var3) /* mainmodule on <var3:AbstractCompiler>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_common_ffi__AModule__finalize_ffi_wrapper]))(self, var2, var4) /* finalize_ffi_wrapper on <self:AModule>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AModule__ffi_files]))(self) /* ffi_files on <self:AModule>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Array[ExternFile]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_file = var8;
var9 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var9) /* extern_bodies on <var9:AbstractCompiler>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var_file) /* add on <var10:Array[ExternFile]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
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
val* var1 /* : Template */;
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
val* var17 /* : nullable CCompilationUnit */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : ModelBuilder */;
val* var20 /* : String */;
val* var21 /* : nullable CCompilationUnit */;
val* var22 /* : Array[String] */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_file /* var file: String */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : Array[ExternFile] */;
val* var28 /* : ExternCFile */;
val* var29 /* : String */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_compiler_ffi__AModule__ensure_compile_nitni_base]))(self, var_v) /* ensure_compile_nitni_base on <self:AModule>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 47);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 47);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_mmodule__MModule__name]))(var6) /* name on <var6:nullable MModule>*/;
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
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_template__Template__add]))(var1, var16) /* add on <var1:Template>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
var18 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var18) /* modelbuilder on <var18:AbstractCompiler>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_compiler__ModelBuilder__compile_dir]))(var19) /* compile_dir on <var19:ModelBuilder>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 49);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var17->class->vft[COLOR_compiler_ffi__CCompilationUnit__write_as_nitni]))(var17, self, var20) /* write_as_nitni on <var17:nullable CCompilationUnit>*/;
}
var21 = ((val* (*)(val*))(self->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(self) /* nitni_ccu on <self:AModule>*/;
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 51);
show_backtrace(1);
} else {
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_c_tools__CCompilationUnit__files]))(var21) /* files on <var21:nullable CCompilationUnit>*/;
}
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var22) /* iterator on <var22:Array[String]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var_file = var25;
var26 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var26) /* extern_bodies on <var26:AbstractCompiler>*/;
var28 = NEW_c__ExternCFile(&type_c__ExternCFile);
var29 = ((val* (*)(val*))(self->class->vft[COLOR_c__AModule__c_compiler_options]))(self) /* c_compiler_options on <self:AModule>*/;
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_c__ExternCFile__init]))(var28, var_file, var29) /* init on <var28:ExternCFile>*/;
((void (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var27, var28) /* add on <var27:Array[ExternFile]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
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
show_backtrace(1);
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
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : ForeignCallbackSet */;
val* var44 /* : Set[MExplicitCall] */;
val* var45 /* : Iterator[nullable Object] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_cb /* var cb: MExplicitCall */;
short int var48 /* : Bool */;
val* var50 /* : ForeignCallbackSet */;
val* var51 /* : Set[MExplicitSuper] */;
val* var52 /* : Iterator[nullable Object] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_cb55 /* var cb: MExplicitSuper */;
short int var56 /* : Bool */;
val* var58 /* : ForeignCallbackSet */;
val* var59 /* : Set[MExplicitCast] */;
val* var60 /* : Iterator[nullable Object] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_cb63 /* var cb: MExplicitCast */;
short int var64 /* : Bool */;
val* var66 /* : ForeignCallbackSet */;
val* var67 /* : ForeignCallbackSet */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 70);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 73);
show_backtrace(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MPropDef__mclassdef]))(var13) /* mclassdef on <var13:nullable MPropDef(nullable MMethodDef)>*/;
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_model__MClassDef__bound_mtype]))(var14) /* bound_mtype on <var14:MClassDef>*/;
var_mclass_type = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 76);
show_backtrace(1);
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
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(var_v, var33) /* declare_once on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_common_ffi__AExternPropdef__compile_ffi_method]))(self, var_amodule) /* compile_ffi_method on <self:AExternPropdef>*/;
((void (*)(val*, val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__ensure_compile_nitni_base]))(var_amodule, var_v) /* ensure_compile_nitni_base on <var_amodule:AModule>*/;
var34 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__nitni_ccu]))(var_amodule) /* nitni_ccu on <var_amodule:AModule>*/;
if (var34 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 84);
show_backtrace(1);
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
var40 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_mtype) /* is_cprimitive on <var_mtype:MType>*/;
var41 = !var40;
if (var41){
((void (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_compiler_ffi__MType__compile_extern_type]))(var_mtype, var_v, var_ccu) /* compile_extern_type on <var_mtype:MType>*/;
var42 = ((short int (*)(val*, val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amodule, var_mtype) /* check_callback_compilation on <var_amodule:AModule>*/;
if (var42){
((void (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_compiler_ffi__MType__compile_extern_helper_functions]))(var_mtype, var_v, var_ccu) /* compile_extern_helper_functions on <var_mtype:MType>*/;
} else {
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__next]))(var37) /* next on <var37:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var43 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var43) /* callbacks on <var43:ForeignCallbackSet>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Collection__iterator]))(var44) /* iterator on <var44:Set[MExplicitCall]>*/;
for(;;) {
var46 = ((short int (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var45) /* is_ok on <var45:Iterator[nullable Object]>*/;
if(!var46) break;
var47 = ((val* (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__item]))(var45) /* item on <var45:Iterator[nullable Object]>*/;
var_cb = var47;
var48 = ((short int (*)(val*, val*))(var_amainmodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amainmodule, var_cb) /* check_callback_compilation on <var_amainmodule:AModule>*/;
if (var48){
((void (*)(val*, val*, val*))(var_cb->class->vft[COLOR_compiler_ffi__MExplicitCall__compile_extern_callback]))(var_cb, var_v, var_ccu) /* compile_extern_callback on <var_cb:MExplicitCall>*/;
} else {
}
CONTINUE_label49: (void)0;
((void (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__next]))(var45) /* next on <var45:Iterator[nullable Object]>*/;
}
BREAK_label49: (void)0;
var50 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(var50) /* supers on <var50:ForeignCallbackSet>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_abstract_collection__Collection__iterator]))(var51) /* iterator on <var51:Set[MExplicitSuper]>*/;
for(;;) {
var53 = ((short int (*)(val*))(var52->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var52) /* is_ok on <var52:Iterator[nullable Object]>*/;
if(!var53) break;
var54 = ((val* (*)(val*))(var52->class->vft[COLOR_abstract_collection__Iterator__item]))(var52) /* item on <var52:Iterator[nullable Object]>*/;
var_cb55 = var54;
var56 = ((short int (*)(val*, val*))(var_amainmodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amainmodule, var_cb55) /* check_callback_compilation on <var_amainmodule:AModule>*/;
if (var56){
((void (*)(val*, val*, val*))(var_cb55->class->vft[COLOR_compiler_ffi__MExplicitSuper__compile_extern_callback]))(var_cb55, var_v, var_ccu) /* compile_extern_callback on <var_cb55:MExplicitSuper>*/;
} else {
}
CONTINUE_label57: (void)0;
((void (*)(val*))(var52->class->vft[COLOR_abstract_collection__Iterator__next]))(var52) /* next on <var52:Iterator[nullable Object]>*/;
}
BREAK_label57: (void)0;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(var58) /* casts on <var58:ForeignCallbackSet>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__Collection__iterator]))(var59) /* iterator on <var59:Set[MExplicitCast]>*/;
for(;;) {
var61 = ((short int (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var60) /* is_ok on <var60:Iterator[nullable Object]>*/;
if(!var61) break;
var62 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__item]))(var60) /* item on <var60:Iterator[nullable Object]>*/;
var_cb63 = var62;
var64 = ((short int (*)(val*, val*))(var_amainmodule->class->vft[COLOR_compiler_ffi__AModule__check_callback_compilation]))(var_amainmodule, var_cb63) /* check_callback_compilation on <var_amainmodule:AModule>*/;
if (var64){
((void (*)(val*, val*, val*))(var_cb63->class->vft[COLOR_compiler_ffi__MExplicitCast__compile_extern_callbacks]))(var_cb63, var_v, var_ccu) /* compile_extern_callbacks on <var_cb63:MExplicitCast>*/;
} else {
}
CONTINUE_label65: (void)0;
((void (*)(val*))(var60->class->vft[COLOR_abstract_collection__Iterator__next]))(var60) /* next on <var60:Iterator[nullable Object]>*/;
}
BREAK_label65: (void)0;
var66 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_compiler_ffi__AModule__foreign_callbacks]))(var_amodule) /* foreign_callbacks on <var_amodule:AModule>*/;
var67 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
((void (*)(val*, val*))(var66->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__join]))(var66, var67) /* join on <var66:ForeignCallbackSet>*/;
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
val* var10 /* : nullable MModule */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var14 /* : MProperty */;
val* var15 /* : MClassDef */;
val* var16 /* : MClassType */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : SignatureLength */;
val* var22 /* : String */;
val* var_externname /* var externname: String */;
val* var23 /* : null */;
val* var_recv_var /* var recv_var: nullable RuntimeVariable */;
val* var24 /* : nullable MSignature */;
val* var25 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
val* var26 /* : null */;
short int var27 /* : Bool */;
val* var28 /* : MType */;
val* var29 /* : RuntimeVariable */;
val* var30 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
val* var31 /* : Range[Int] */;
long var32 /* : Int */;
long var33 /* : Int */;
val* var34 /* : Discrete */;
val* var35 /* : Discrete */;
val* var36 /* : Iterator[nullable Object] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
long var_a /* var a: Int */;
long var39 /* : Int */;
val* var40 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : MClassDef */;
val* var46 /* : MClass */;
val* var47 /* : MClassType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var48 /* : nullable MSignature */;
val* var49 /* : Array[MParameter] */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
val* var54 /* : nullable Object */;
val* var55 /* : MType */;
val* var56 /* : MType */;
short int var57 /* : Bool */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : Object */;
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
val* var87 /* : Object */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
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
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : Object */;
val* var119 /* : String */;
val* var120 /* : null */;
short int var121 /* : Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
val* var138 /* : Array[Object] */;
long var139 /* : Int */;
val* var140 /* : NativeArray[Object] */;
val* var141 /* : String */;
val* var142 /* : null */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : String */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
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
var10 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
var11 = 1;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 127);
show_backtrace(1);
} else {
((void (*)(val*, short int))(var10->class->vft[COLOR_common_ffi__MModule__uses_ffi_61d]))(var10, var11) /* uses_ffi= on <var10:nullable MModule>*/;
}
var12 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__bound_mtype]))(var12) /* bound_mtype on <var12:MClassDef>*/;
var_mclass_type = var13;
var14 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var15 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__bound_mtype]))(var15) /* bound_mtype on <var15:MClassDef>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "___impl";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
var21 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:AExternMethPropdef>*/;
var22 = ((val* (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var14, var16, var_mmodule, var17, var21) /* build_cname on <var14:MProperty(MMethod)>*/;
var_externname = var22;
var23 = NULL;
var_recv_var = var23;
var24 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 134);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MSignature__return_mtype]))(var24) /* return_mtype on <var24:nullable MSignature>*/;
}
var_return_mtype = var25;
var26 = NULL;
if (var_return_mtype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (var27){
var28 = ((val* (*)(val*, val*, val*))(var_return_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_return_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_return_mtype:nullable MType(MType)>*/;
var_return_mtype = var28;
var29 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_return_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_recv_var = var29;
} else {
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var30 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[String]>*/;
var_arguments_for_c = var30;
var31 = NEW_range__Range(&type_range__Rangekernel__Int);
var32 = 0;
var33 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var34 = BOX_kernel__Int(var32); /* autobox from Int to Discrete */
var35 = BOX_kernel__Int(var33); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var31->class->vft[COLOR_range__Range__without_last]))(var31, var34, var35) /* without_last on <var31:Range[Int]>*/;
var36 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Collection__iterator]))(var31) /* iterator on <var31:Range[Int]>*/;
for(;;) {
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var36) /* is_ok on <var36:Iterator[nullable Object]>*/;
if(!var37) break;
var38 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__item]))(var36) /* item on <var36:Iterator[nullable Object]>*/;
var39 = ((struct instance_kernel__Int*)var38)->value; /* autounbox from nullable Object to Int */;
var_a = var39;
var40 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_a) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg = var40;
var41 = 0;
{ /* Inline kernel#Int#== (var_a,var41) */
var44 = var_a == var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
if (var42){
var45 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_model__MClassDef__mclass]))(var45) /* mclass on <var45:MClassDef>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_model__MClass__mclass_type]))(var46) /* mclass_type on <var46:MClass>*/;
var_param_mtype = var47;
} else {
var48 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var48 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 148);
show_backtrace(1);
} else {
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_model__MSignature__mparameters]))(var48) /* mparameters on <var48:nullable MSignature>*/;
}
var50 = 1;
{ /* Inline kernel#Int#- (var_a,var50) */
var53 = var_a - var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var54 = ((val* (*)(val*, long))(var49->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var49, var51) /* [] on <var49:Array[MParameter]>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_model__MParameter__mtype]))(var54) /* mtype on <var54:nullable Object(MParameter)>*/;
var_param_mtype = var55;
}
var56 = ((val* (*)(val*, val*, val*))(var_param_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_param_mtype:MType>*/;
var_param_mtype = var56;
var57 = ((short int (*)(val*))(var_param_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_param_mtype) /* is_cprimitive on <var_param_mtype:MType>*/;
if (var57){
var58 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var58) /* add on <var_arguments_for_c:Array[String]>*/;
} else {
if (varonce59) {
var60 = varonce59;
} else {
var61 = "struct nitni_instance* var_for_c_";
var62 = 33;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ";";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
var72 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var72;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var73) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "var_for_c_";
var77 = 10;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " = malloc(sizeof(struct nitni_instance));";
var82 = 41;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 3;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var75;
var87 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var80;
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
var88 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var88) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce89) {
var90 = varonce89;
} else {
var91 = "var_for_c_";
var92 = 10;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "->value = ";
var97 = 10;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = ";";
var103 = 1;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 5;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var90;
var108 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var95;
((struct instance_array__NativeArray*)var107)->values[3] = (val*) var99;
((struct instance_array__NativeArray*)var107)->values[4] = (val*) var101;
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
var109 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var109) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce110) {
var111 = varonce110;
} else {
var112 = "var_for_c_";
var113 = 10;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 2;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var111;
var118 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var118;
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
var119 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var119) /* add on <var_arguments_for_c:Array[String]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__next]))(var36) /* next on <var36:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var120 = NULL;
if (var_recv_var == NULL) {
var121 = 1; /* is null */
} else {
var121 = 0; /* arg is null but recv is not */
}
if (var121){
if (varonce122) {
var123 = varonce122;
} else {
var124 = "(";
var125 = 1;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = ", ";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var128) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce133) {
var134 = varonce133;
} else {
var135 = ");";
var136 = 2;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var138 = array_instance Array[Object] */
var139 = 4;
var140 = NEW_array__NativeArray(var139, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var140)->values[0] = (val*) var_externname;
((struct instance_array__NativeArray*)var140)->values[1] = (val*) var123;
((struct instance_array__NativeArray*)var140)->values[2] = (val*) var132;
((struct instance_array__NativeArray*)var140)->values[3] = (val*) var134;
((void (*)(val*, val*, long))(var138->class->vft[COLOR_array__Array__with_native]))(var138, var140, var139) /* with_native on <var138:Array[Object]>*/;
}
var141 = ((val* (*)(val*))(var138->class->vft[COLOR_string__Object__to_s]))(var138) /* to_s on <var138:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var141) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
var142 = NULL;
if (var_return_mtype == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (!var143) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 165);
show_backtrace(1);
}
var144 = ((short int (*)(val*))(var_return_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_return_mtype) /* is_cprimitive on <var_return_mtype:nullable MType(MType)>*/;
if (var144){
if (varonce145) {
var146 = varonce145;
} else {
var147 = " = ";
var148 = 3;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = "(";
var153 = 1;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = ", ";
var158 = 2;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
var160 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var156) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce161) {
var162 = varonce161;
} else {
var163 = ");";
var164 = 2;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 6;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var146;
((struct instance_array__NativeArray*)var168)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var168)->values[3] = (val*) var151;
((struct instance_array__NativeArray*)var168)->values[4] = (val*) var160;
((struct instance_array__NativeArray*)var168)->values[5] = (val*) var162;
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var169) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce170) {
var171 = varonce170;
} else {
var172 = "struct nitni_instance* ret_var;";
var173 = 31;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var171) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce175) {
var176 = varonce175;
} else {
var177 = "ret_var = ";
var178 = 10;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = "(";
var183 = 1;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = ", ";
var188 = 2;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
var190 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var186) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = ");";
var194 = 2;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 5;
var198 = NEW_array__NativeArray(var197, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var198)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var198)->values[1] = (val*) var_externname;
((struct instance_array__NativeArray*)var198)->values[2] = (val*) var181;
((struct instance_array__NativeArray*)var198)->values[3] = (val*) var190;
((struct instance_array__NativeArray*)var198)->values[4] = (val*) var192;
((void (*)(val*, val*, long))(var196->class->vft[COLOR_array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
var199 = ((val* (*)(val*))(var196->class->vft[COLOR_string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var199) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce200) {
var201 = varonce200;
} else {
var202 = " = ret_var->value;";
var203 = 18;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 2;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var207)->values[1] = (val*) var201;
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
}
var208 = ((val* (*)(val*))(var205->class->vft[COLOR_string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var208) /* add on <var_v:AbstractCompilerVisitor>*/;
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
val* var10 /* : nullable MModule */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var14 /* : MProperty */;
val* var15 /* : MClassDef */;
val* var16 /* : MClassType */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : SignatureLength */;
val* var22 /* : String */;
val* var_externname /* var externname: String */;
val* var23 /* : nullable Object */;
val* var24 /* : MType */;
val* var_return_mtype /* var return_mtype: MType */;
val* var25 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var26 /* : nullable Object */;
val* var27 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
val* var28 /* : Range[Int] */;
long var29 /* : Int */;
long var30 /* : Int */;
val* var31 /* : Discrete */;
val* var32 /* : Discrete */;
val* var33 /* : Iterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
long var_a /* var a: Int */;
long var36 /* : Int */;
val* var37 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var38 /* : nullable MSignature */;
val* var39 /* : Array[MParameter] */;
val* var40 /* : nullable Object */;
val* var41 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var42 /* : MType */;
short int var43 /* : Bool */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : Object */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : Object */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : Object */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : Array[Object] */;
long var102 /* : Int */;
val* var103 /* : NativeArray[Object] */;
val* var104 /* : Object */;
val* var105 /* : String */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
val* var158 /* : Array[Object] */;
long var159 /* : Int */;
val* var160 /* : NativeArray[Object] */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : String */;
val* var167 /* : Array[Object] */;
long var168 /* : Int */;
val* var169 /* : NativeArray[Object] */;
val* var170 /* : String */;
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
var10 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
var11 = 1;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 194);
show_backtrace(1);
} else {
((void (*)(val*, short int))(var10->class->vft[COLOR_common_ffi__MModule__uses_ffi_61d]))(var10, var11) /* uses_ffi= on <var10:nullable MModule>*/;
}
var12 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__bound_mtype]))(var12) /* bound_mtype on <var12:MClassDef>*/;
var_mclass_type = var13;
var14 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var15 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__bound_mtype]))(var15) /* bound_mtype on <var15:MClassDef>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "___impl";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
var21 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:AExternInitPropdef>*/;
var22 = ((val* (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var14, var16, var_mmodule, var17, var21) /* build_cname on <var14:MProperty(MMethod)>*/;
var_externname = var22;
var23 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var23) /* mtype on <var23:nullable Object(RuntimeVariable)>*/;
var_return_mtype = var24;
var25 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_return_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_recv_var = var25;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var26 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_arguments) /* shift on <var_arguments:Array[RuntimeVariable]>*/;
var26;
var27 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[String]>*/;
var_arguments_for_c = var27;
var28 = NEW_range__Range(&type_range__Rangekernel__Int);
var29 = 0;
var30 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var31 = BOX_kernel__Int(var29); /* autobox from Int to Discrete */
var32 = BOX_kernel__Int(var30); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_range__Range__without_last]))(var28, var31, var32) /* without_last on <var28:Range[Int]>*/;
var33 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:Range[Int]>*/;
for(;;) {
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[nullable Object]>*/;
if(!var34) break;
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[nullable Object]>*/;
var36 = ((struct instance_kernel__Int*)var35)->value; /* autounbox from nullable Object to Int */;
var_a = var36;
var37 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_a) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg = var37;
var38 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 210);
show_backtrace(1);
} else {
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_model__MSignature__mparameters]))(var38) /* mparameters on <var38:nullable MSignature>*/;
}
var40 = ((val* (*)(val*, long))(var39->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var39, var_a) /* [] on <var39:Array[MParameter]>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_model__MParameter__mtype]))(var40) /* mtype on <var40:nullable Object(MParameter)>*/;
var_param_mtype = var41;
var42 = ((val* (*)(val*, val*, val*))(var_param_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_param_mtype:MType>*/;
var_param_mtype = var42;
var43 = ((short int (*)(val*))(var_param_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_param_mtype) /* is_cprimitive on <var_param_mtype:MType>*/;
if (var43){
var44 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var44) /* add on <var_arguments_for_c:Array[String]>*/;
} else {
if (varonce45) {
var46 = varonce45;
} else {
var47 = "struct nitni_instance* var_for_c_";
var48 = 33;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = ";";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 3;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var46;
var58 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var51;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var59) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "var_for_c_";
var63 = 10;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " = malloc(sizeof(struct nitni_instance));";
var68 = 41;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 3;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var61;
var73 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var73;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var74 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var74) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "var_for_c_";
var78 = 10;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "->value = ";
var83 = 10;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_arg) /* name on <var_arg:RuntimeVariable>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = ";";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 5;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var76;
var94 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var94;
((struct instance_array__NativeArray*)var93)->values[2] = (val*) var81;
((struct instance_array__NativeArray*)var93)->values[3] = (val*) var85;
((struct instance_array__NativeArray*)var93)->values[4] = (val*) var87;
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
var95 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var95) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "var_for_c_";
var99 = 10;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
var101 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var101 = array_instance Array[Object] */
var102 = 2;
var103 = NEW_array__NativeArray(var102, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var103)->values[0] = (val*) var97;
var104 = BOX_kernel__Int(var_a); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var103)->values[1] = (val*) var104;
((void (*)(val*, val*, long))(var101->class->vft[COLOR_array__Array__with_native]))(var101, var103, var102) /* with_native on <var101:Array[Object]>*/;
}
var105 = ((val* (*)(val*))(var101->class->vft[COLOR_string__Object__to_s]))(var101) /* to_s on <var101:Array[Object]>*/;
((void (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments_for_c, var105) /* add on <var_arguments_for_c:Array[String]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var106 = ((short int (*)(val*))(var_return_mtype->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(var_return_mtype) /* is_cprimitive on <var_return_mtype:MType>*/;
if (var106){
if (varonce107) {
var108 = varonce107;
} else {
var109 = " = ";
var110 = 3;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "(";
var115 = 1;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = ", ";
var120 = 2;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var118) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = ");";
var126 = 2;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 6;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var130)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var130)->values[3] = (val*) var113;
((struct instance_array__NativeArray*)var130)->values[4] = (val*) var122;
((struct instance_array__NativeArray*)var130)->values[5] = (val*) var124;
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
var131 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var131) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce132) {
var133 = varonce132;
} else {
var134 = "struct nitni_instance* ret_var;";
var135 = 31;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var133) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce137) {
var138 = varonce137;
} else {
var139 = "ret_var = ";
var140 = 10;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = "(";
var145 = 1;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = ", ";
var150 = 2;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = ((val* (*)(val*, val*))(var_arguments_for_c->class->vft[COLOR_string__Collection__join]))(var_arguments_for_c, var148) /* join on <var_arguments_for_c:Array[String]>*/;
if (varonce153) {
var154 = varonce153;
} else {
var155 = ");";
var156 = 2;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
var158 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var158 = array_instance Array[Object] */
var159 = 5;
var160 = NEW_array__NativeArray(var159, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var160)->values[0] = (val*) var138;
((struct instance_array__NativeArray*)var160)->values[1] = (val*) var_externname;
((struct instance_array__NativeArray*)var160)->values[2] = (val*) var143;
((struct instance_array__NativeArray*)var160)->values[3] = (val*) var152;
((struct instance_array__NativeArray*)var160)->values[4] = (val*) var154;
((void (*)(val*, val*, long))(var158->class->vft[COLOR_array__Array__with_native]))(var158, var160, var159) /* with_native on <var158:Array[Object]>*/;
}
var161 = ((val* (*)(val*))(var158->class->vft[COLOR_string__Object__to_s]))(var158) /* to_s on <var158:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var161) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce162) {
var163 = varonce162;
} else {
var164 = " = ret_var->value;";
var165 = 18;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var167 = array_instance Array[Object] */
var168 = 2;
var169 = NEW_array__NativeArray(var168, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var169)->values[0] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var169)->values[1] = (val*) var163;
((void (*)(val*, val*, long))(var167->class->vft[COLOR_array__Array__with_native]))(var167, var169, var168) /* with_native on <var167:Array[Object]>*/;
}
var170 = ((val* (*)(val*))(var167->class->vft[COLOR_string__Object__to_s]))(var167) /* to_s on <var167:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var170) /* add on <var_v:AbstractCompilerVisitor>*/;
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 239);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_mmodule__MModule__name]))(var6) /* name on <var6:nullable MModule>*/;
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
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
var37 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var37->class->vft[COLOR_array__Array__init]))(var37) /* init on <var37:Array[String]>*/;
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
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_header_to_file]))(self, var_amodule, var36, var37, var49) /* write_header_to_file on <self:CCompilationUnit>*/;
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
var51 = 3;
((void (*)(val*, long))(var50->class->vft[COLOR_array__Array__with_capacity]))(var50, var51) /* with_capacity on <var50:Array[Object]>*/;
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
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
var74 = 3;
((void (*)(val*, long))(var73->class->vft[COLOR_array__Array__with_capacity]))(var73, var74) /* with_capacity on <var73:Array[Object]>*/;
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
var = var2;
goto RET_LABEL;
} else {
var3 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
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
/* method compiler_ffi#MType#compile_extern_type for (self: MType, AbstractCompilerVisitor, CCompilationUnit) */
void compiler_ffi__MType__compile_extern_type(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Template */;
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
val* var17 /* : Template */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : Template */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
val* var49 /* : Template */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
var_v = p0;
var_ccu = p1;
var = ((short int (*)(val*))(self->class->vft[COLOR_nitni_base__MType__is_cprimitive]))(self) /* is_cprimitive on <self:MType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 280);
show_backtrace(1);
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
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_template__Template__add]))(var2, var16) /* add on <var2:Template>*/;
var17 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "#define NIT_TYPE_";
var21 = 17;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname]))(self) /* cname on <self:MType>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = " 1\n";
var27 = 3;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var23;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*))(var17->class->vft[COLOR_template__Template__add]))(var17, var32) /* add on <var17:Template>*/;
var33 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "typedef struct nitni_instance *";
var37 = 31;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname]))(self) /* cname on <self:MType>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = ";\n";
var43 = 2;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var39;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*))(var33->class->vft[COLOR_template__Template__add]))(var33, var48) /* add on <var33:Template>*/;
var49 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_types]))(var_ccu) /* header_c_types on <var_ccu:CCompilationUnit>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "#endif\n";
var53 = 7;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
((void (*)(val*, val*))(var49->class->vft[COLOR_template__Template__add]))(var49, var51) /* add on <var49:Template>*/;
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
val* var2 /* : Template */;
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
val* var17 /* : AbstractCompiler */;
val* var18 /* : AbstractCompilerVisitor */;
val* var19 /* : Template */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
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
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_template__Template__add]))(var2, var16) /* add on <var2:Template>*/;
var17 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var17) /* new_visitor on <var17:AbstractCompiler>*/;
var_nitni_visitor = var18;
var19 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "#define ";
var23 = 8;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__mangled_cname]))(self) /* mangled_cname on <self:MType>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "_decr_ref(from) while(0){}\n";
var29 = 27;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 3;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var25;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
((void (*)(val*, val*))(var19->class->vft[COLOR_template__Template__add]))(var19, var34) /* add on <var19:Template>*/;
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
val* var28 /* : Template */;
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
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var_45 /* var : Array[Object] */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : MType */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var_base_cname /* var base_cname: String */;
val* var59 /* : Template */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : AbstractCompiler */;
val* var71 /* : MModule */;
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
val* var87 /* : AbstractCompiler */;
val* var88 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var89 /* : nullable Frame */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var_92 /* var : Array[Object] */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var104 /* : AbstractCompiler */;
val* var105 /* : MModule */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : MType */;
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
val* var125 /* : MType */;
val* var126 /* : String */;
val* var127 /* : Array[Object] */;
long var128 /* : Int */;
val* var129 /* : NativeArray[Object] */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : MType */;
val* var137 /* : String */;
val* var138 /* : Array[Object] */;
long var139 /* : Int */;
val* var140 /* : NativeArray[Object] */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
val* var147 /* : Array[Object] */;
long var148 /* : Int */;
val* var149 /* : NativeArray[Object] */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : String */;
var_v = p0;
var_ccu = p1;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_compiler_ffi__MNullableType__compile_extern_helper_functions]))(self, p0, p1) /* compile_extern_helper_functions on <self:MNullableType>*/;
var = NEW_array__Array(&type_array__Arraykernel__Object);
var1 = 7;
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var1) /* with_capacity on <var:Array[Object]>*/;
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
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_mmodule__MModule__name]))(var13) /* name on <var13:MModule>*/;
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
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
((void (*)(val*, val*))(var28->class->vft[COLOR_template__Template__add]))(var28, var42) /* add on <var28:Template>*/;
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
var44 = 3;
((void (*)(val*, long))(var43->class->vft[COLOR_array__Array__with_capacity]))(var43, var44) /* with_capacity on <var43:Array[Object]>*/;
var_45 = var43;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "null_";
var49 = 5;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
((void (*)(val*, val*))(var_45->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_45, var47) /* add on <var_45:Array[Object]>*/;
var51 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var51) /* mangled_cname on <var51:MType>*/;
((void (*)(val*, val*))(var_45->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_45, var52) /* add on <var_45:Array[Object]>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "";
var56 = 0;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
((void (*)(val*, val*))(var_45->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_45, var54) /* add on <var_45:Array[Object]>*/;
var58 = ((val* (*)(val*))(var_45->class->vft[COLOR_string__Object__to_s]))(var_45) /* to_s on <var_45:Array[Object]>*/;
var_base_cname = var58;
var59 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "#define ";
var63 = 8;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " ";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var71 = ((val* (*)(val*))(var70->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var70) /* mainmodule on <var70:AbstractCompiler>*/;
var72 = ((val* (*)(val*))(var71->class->vft[COLOR_mmodule__MModule__name]))(var71) /* name on <var71:MModule>*/;
if (varonce73) {
var74 = varonce73;
} else {
var75 = "___";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "\n";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 7;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var61;
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var_base_cname;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var66;
((struct instance_array__NativeArray*)var85)->values[3] = (val*) var72;
((struct instance_array__NativeArray*)var85)->values[4] = (val*) var74;
((struct instance_array__NativeArray*)var85)->values[5] = (val*) var_base_cname;
((struct instance_array__NativeArray*)var85)->values[6] = (val*) var79;
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
}
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
((void (*)(val*, val*))(var59->class->vft[COLOR_template__Template__add]))(var59, var86) /* add on <var59:Template>*/;
var87 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var87) /* new_visitor on <var87:AbstractCompiler>*/;
var_nitni_visitor = var88;
var89 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var89) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
var91 = 7;
((void (*)(val*, long))(var90->class->vft[COLOR_array__Array__with_capacity]))(var90, var91) /* with_capacity on <var90:Array[Object]>*/;
var_92 = var90;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "";
var96 = 0;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var94) /* add on <var_92:Array[Object]>*/;
var98 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MType__cname_blind]))(self) /* cname_blind on <self:MNullableType>*/;
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var98) /* add on <var_92:Array[Object]>*/;
if (varonce99) {
var100 = varonce99;
} else {
var101 = " ";
var102 = 1;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var100) /* add on <var_92:Array[Object]>*/;
var104 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var105 = ((val* (*)(val*))(var104->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var104) /* mainmodule on <var104:AbstractCompiler>*/;
var106 = ((val* (*)(val*))(var105->class->vft[COLOR_mmodule__MModule__name]))(var105) /* name on <var105:MModule>*/;
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var106) /* add on <var_92:Array[Object]>*/;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "___null_";
var110 = 8;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var108) /* add on <var_92:Array[Object]>*/;
var112 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var113 = ((val* (*)(val*))(var112->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var112) /* mangled_cname on <var112:MType>*/;
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var113) /* add on <var_92:Array[Object]>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = "()";
var117 = 2;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
((void (*)(val*, val*))(var_92->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_92, var115) /* add on <var_92:Array[Object]>*/;
var119 = ((val* (*)(val*))(var_92->class->vft[COLOR_string__Object__to_s]))(var_92) /* to_s on <var_92:Array[Object]>*/;
var_full_internal_csignature = var119;
if (varonce120) {
var121 = varonce120;
} else {
var122 = "#ifndef NIT_NULL_null_";
var123 = 22;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var126 = ((val* (*)(val*))(var125->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var125) /* mangled_cname on <var125:MType>*/;
var127 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 2;
var129 = NEW_array__NativeArray(var128, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var129)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var129)->values[1] = (val*) var126;
((void (*)(val*, val*, long))(var127->class->vft[COLOR_array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
var130 = ((val* (*)(val*))(var127->class->vft[COLOR_string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var130) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = "#define NIT_NULL_null_";
var134 = 22;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var137 = ((val* (*)(val*))(var136->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var136) /* mangled_cname on <var136:MType>*/;
var138 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var138 = array_instance Array[Object] */
var139 = 2;
var140 = NEW_array__NativeArray(var139, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var140)->values[0] = (val*) var132;
((struct instance_array__NativeArray*)var140)->values[1] = (val*) var137;
((void (*)(val*, val*, long))(var138->class->vft[COLOR_array__Array__with_native]))(var138, var140, var139) /* with_native on <var138:Array[Object]>*/;
}
var141 = ((val* (*)(val*))(var138->class->vft[COLOR_string__Object__to_s]))(var138) /* to_s on <var138:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var141) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce142) {
var143 = varonce142;
} else {
var144 = " {";
var145 = 2;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var147 = array_instance Array[Object] */
var148 = 2;
var149 = NEW_array__NativeArray(var148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var149)->values[0] = (val*) var_full_internal_csignature;
((struct instance_array__NativeArray*)var149)->values[1] = (val*) var143;
((void (*)(val*, val*, long))(var147->class->vft[COLOR_array__Array__with_native]))(var147, var149, var148) /* with_native on <var147:Array[Object]>*/;
}
var150 = ((val* (*)(val*))(var147->class->vft[COLOR_string__Object__to_s]))(var147) /* to_s on <var147:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var150) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce151) {
var152 = varonce151;
} else {
var153 = "struct nitni_instance* ret_for_c;";
var154 = 33;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var152) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce156) {
var157 = varonce156;
} else {
var158 = "ret_for_c = malloc(sizeof(struct nitni_instance));";
var159 = 50;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var157) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce161) {
var162 = varonce161;
} else {
var163 = "ret_for_c->value = NULL;";
var164 = 24;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var162) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = "return ret_for_c;";
var169 = 17;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var167) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce171) {
var172 = varonce171;
} else {
var173 = "}";
var174 = 1;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var172) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce176) {
var177 = varonce176;
} else {
var178 = "#endif";
var179 = 6;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var177) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
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
val* var9 /* : Template */;
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
val* var23 /* : AbstractCompiler */;
val* var24 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var25 /* : nullable Frame */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : MModule */;
val* var28 /* : MClassType */;
val* var29 /* : MPropDef */;
val* var30 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var31 /* : MClassType */;
val* var32 /* : AbstractCompiler */;
val* var33 /* : MModule */;
val* var34 /* : null */;
val* var35 /* : SignatureLength */;
val* var36 /* : CallContext */;
val* var37 /* : String */;
val* var_csignature_blind /* var csignature_blind: String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var62 /* : Array[RuntimeVariable] */;
val* var_vars /* var vars: Array[RuntimeVariable] */;
val* var63 /* : MClassType */;
val* var_mtype /* var mtype: MType */;
val* var64 /* : null */;
val* var_recv_var /* var recv_var: nullable Object */;
short int var65 /* : Bool */;
val* var66 /* : MClassType */;
val* var67 /* : MClass */;
val* var68 /* : MClassKind */;
val* var69 /* : MClassKind */;
short int var70 /* : Bool */;
val* var71 /* : RuntimeVariable */;
val* var72 /* : MClassType */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var73 /* : RuntimeVariable */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
val* var103 /* : AbstractCompiler */;
val* var104 /* : MModule */;
val* var105 /* : MClassType */;
val* var106 /* : MType */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : RuntimeVariable */;
val* var113 /* : Array[MParameter] */;
val* var114 /* : Iterator[nullable Object] */;
short int var115 /* : Bool */;
val* var116 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var117 /* : MType */;
val* var118 /* : AbstractCompiler */;
val* var119 /* : MModule */;
val* var120 /* : MClassType */;
val* var121 /* : MType */;
val* var_arg_mtype /* var arg_mtype: MType */;
val* var122 /* : String */;
val* var123 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var124 /* : nullable RuntimeVariable */;
val* var_ret_var /* var ret_var: nullable RuntimeVariable */;
val* var125 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var126 /* : Bool */;
val* var127 /* : MClassType */;
val* var128 /* : MClass */;
val* var129 /* : MClassKind */;
val* var130 /* : MClassKind */;
short int var131 /* : Bool */;
val* var132 /* : MClassType */;
val* var133 /* : null */;
short int var134 /* : Bool */;
val* var135 /* : null */;
short int var136 /* : Bool */;
val* var137 /* : AbstractCompiler */;
val* var138 /* : MModule */;
val* var139 /* : MClassType */;
val* var140 /* : MType */;
val* var141 /* : RuntimeVariable */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
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
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 336);
show_backtrace(1);
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
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_template__Template__add]))(var9, var22) /* add on <var9:Template>*/;
var23 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var23) /* new_visitor on <var23:AbstractCompiler>*/;
var_nitni_visitor = var24;
var25 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var25) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var26 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var26) /* mainmodule on <var26:AbstractCompiler>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var29 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var_mproperty, var27, var28) /* lookup_first_definition on <var_mproperty:MProperty(MMethod)>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_model__MMethodDef__msignature]))(var29) /* msignature on <var29:MPropDef(MMethodDef)>*/;
var_msignature = var30;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var32 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var32) /* mainmodule on <var32:AbstractCompiler>*/;
var34 = NULL;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitCall>*/;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitCall>*/;
var37 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var31, var33, var34, var35, var36) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_csignature_blind = var37;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "/* nitni callback for ";
var41 = 22;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__full_name]))(var_mproperty) /* full_name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = " */";
var47 = 3;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 3;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var43;
((struct instance_array__NativeArray*)var51)->values[2] = (val*) var45;
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var52) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = " {";
var56 = 2;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 2;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var_csignature_blind;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var61) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var62 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var62->class->vft[COLOR_array__Array__init]))(var62) /* init on <var62:Array[RuntimeVariable]>*/;
var_vars = var62;
var63 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var_mtype = var63;
var64 = NULL;
var_recv_var = var64;
var65 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var65){
var66 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_model__MClassType__mclass]))(var66) /* mclass on <var66:MClassType>*/;
var68 = ((val* (*)(val*))(var67->class->vft[COLOR_model__MClass__kind]))(var67) /* kind on <var67:MClass>*/;
var69 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MExplicitCall>*/;
var70 = ((short int (*)(val*, val*))(var68->class->vft[COLOR_kernel__Object___61d_61d]))(var68, var69) /* == on <var68:MClassKind>*/;
if (var70){
var71 = ((val* (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_nitni_visitor, var_mtype) /* new_var on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var71;
} else {
var72 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var_recv_mtype = var72;
var73 = ((val* (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_nitni_visitor, var_recv_mtype) /* init_instance on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var73;
var74 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce75) {
var76 = varonce75;
} else {
var77 = " recv /* var self: ";
var78 = 19;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = " */;";
var83 = 4;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 4;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var76;
((struct instance_array__NativeArray*)var87)->values[2] = (val*) var_mtype;
((struct instance_array__NativeArray*)var87)->values[3] = (val*) var81;
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var88) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce89) {
var90 = varonce89;
} else {
var91 = "recv = ";
var92 = 7;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = ";";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 3;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var95;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
var102 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var102) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
}
} else {
var103 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var104 = ((val* (*)(val*))(var103->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var103) /* mainmodule on <var103:AbstractCompiler>*/;
var105 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var106 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var104, var105) /* anchor_to on <var_mtype:MType>*/;
var_mtype = var106;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "recv";
var110 = 4;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var108, var_mtype) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var112;
}
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_recv_var) /* add on <var_vars:Array[RuntimeVariable]>*/;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 370);
show_backtrace(1);
} else {
var113 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature>*/;
}
var114 = ((val* (*)(val*))(var113->class->vft[COLOR_abstract_collection__Collection__iterator]))(var113) /* iterator on <var113:Array[MParameter]>*/;
for(;;) {
var115 = ((short int (*)(val*))(var114->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var114) /* is_ok on <var114:Iterator[nullable Object]>*/;
if(!var115) break;
var116 = ((val* (*)(val*))(var114->class->vft[COLOR_abstract_collection__Iterator__item]))(var114) /* item on <var114:Iterator[nullable Object]>*/;
var_p = var116;
var117 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var118 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var119 = ((val* (*)(val*))(var118->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var118) /* mainmodule on <var118:AbstractCompiler>*/;
var120 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var121 = ((val* (*)(val*, val*, val*))(var117->class->vft[COLOR_model__MType__anchor_to]))(var117, var119, var120) /* anchor_to on <var117:MType>*/;
var_arg_mtype = var121;
var122 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var123 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var122, var_arg_mtype) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_arg = var123;
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_arg) /* add on <var_vars:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var114->class->vft[COLOR_abstract_collection__Iterator__next]))(var114) /* next on <var114:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var124 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_nitni_visitor, var_mproperty, var_vars) /* send on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_ret_var = var124;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 378);
show_backtrace(1);
} else {
var125 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature>*/;
}
var_return_mtype = var125;
var126 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var126){
var127 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var128 = ((val* (*)(val*))(var127->class->vft[COLOR_model__MClassType__mclass]))(var127) /* mclass on <var127:MClassType>*/;
var129 = ((val* (*)(val*))(var128->class->vft[COLOR_model__MClass__kind]))(var128) /* kind on <var128:MClass>*/;
var130 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MExplicitCall>*/;
var131 = ((short int (*)(val*, val*))(var129->class->vft[COLOR_kernel__Object___33d_61d]))(var129, var130) /* != on <var129:MClassKind>*/;
if (var131){
var_ret_var = var_recv_var;
} else {
}
var132 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var_return_mtype = var132;
} else {
}
var133 = NULL;
if (var_return_mtype == NULL) {
var134 = 0; /* is null */
} else {
var134 = 1; /* arg is null and recv is not */
}
if (var134){
var135 = NULL;
if (var_ret_var == NULL) {
var136 = 0; /* is null */
} else {
var136 = 1; /* arg is null and recv is not */
}
if (!var136) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 384);
show_backtrace(1);
}
var137 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var138 = ((val* (*)(val*))(var137->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var137) /* mainmodule on <var137:AbstractCompiler>*/;
var139 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var140 = ((val* (*)(val*, val*, val*))(var_return_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_return_mtype, var138, var139) /* anchor_to on <var_return_mtype:nullable MType(MType)>*/;
var_return_mtype = var140;
var141 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(var_nitni_visitor, var_ret_var, var_return_mtype) /* autobox on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_ret_var = var141;
((void (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__ret_to_c]))(var_nitni_visitor, var_ret_var, var_return_mtype) /* ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
} else {
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = "}";
var145 = 1;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var143) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
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
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : SignatureLength */;
val* var17 /* : CallContext */;
val* var18 /* : String */;
val* var_internal_csignature /* var internal_csignature: String */;
val* var19 /* : Template */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
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
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : SignatureLength */;
val* var42 /* : String */;
val* var_friendly_cname /* var friendly_cname: String */;
val* var43 /* : AbstractCompiler */;
val* var44 /* : MModule */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : SignatureLength */;
val* var51 /* : String */;
val* var_internal_cname /* var internal_cname: String */;
val* var52 /* : Template */;
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
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : String */;
val* var72 /* : AbstractCompiler */;
val* var73 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var74 /* : nullable Frame */;
val* var75 /* : AbstractCompiler */;
val* var76 /* : MModule */;
val* var77 /* : MPropDef */;
val* var78 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var79 /* : AbstractCompiler */;
val* var80 /* : MModule */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : SignatureLength */;
val* var87 /* : CallContext */;
val* var88 /* : String */;
val* var_csignature_blind /* var csignature_blind: String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
val* var113 /* : Array[RuntimeVariable] */;
val* var_vars /* var vars: Array[RuntimeVariable] */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
val* var119 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var120 /* : Array[MParameter] */;
val* var121 /* : Iterator[nullable Object] */;
short int var122 /* : Bool */;
val* var123 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var124 /* : MType */;
val* var125 /* : MType */;
val* var_arg_mtype /* var arg_mtype: MType */;
val* var126 /* : String */;
val* var127 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var128 /* : MPropDef */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name;
val* var132 /* : nullable RuntimeVariable */;
val* var_ret_var /* var ret_var: nullable RuntimeVariable */;
val* var133 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
val* var134 /* : null */;
short int var135 /* : Bool */;
val* var136 /* : null */;
short int var137 /* : Bool */;
val* var138 /* : MType */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
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
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 397);
show_backtrace(1);
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
if (varonce) {
var12 = varonce;
} else {
var13 = "___super";
var14 = 8;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
var16 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitSuper>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitSuper>*/;
var18 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var11, var12, var16, var17) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_internal_csignature = var18;
var19 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "extern ";
var23 = 7;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = ";\n";
var28 = 2;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 3;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var_internal_csignature;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var26;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
((void (*)(val*, val*))(var19->class->vft[COLOR_template__Template__add]))(var19, var33) /* add on <var19:Template>*/;
var34 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var34) /* mainmodule on <var34:AbstractCompiler>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "___super";
var39 = 8;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__short_signature]))(self) /* short_signature on <self:MExplicitSuper>*/;
var42 = ((val* (*)(val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var_mproperty, var_mclass_type, var35, var37, var41) /* build_cname on <var_mproperty:MProperty(MMethod)>*/;
var_friendly_cname = var42;
var43 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var43) /* mainmodule on <var43:AbstractCompiler>*/;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "___super";
var48 = 8;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitSuper>*/;
var51 = ((val* (*)(val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(var_mproperty, var_mclass_type, var44, var46, var50) /* build_cname on <var_mproperty:MProperty(MMethod)>*/;
var_internal_cname = var51;
var52 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "#define ";
var56 = 8;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = " ";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = "\n";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 5;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var_friendly_cname;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var_internal_cname;
((struct instance_array__NativeArray*)var70)->values[4] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*))(var52->class->vft[COLOR_template__Template__add]))(var52, var71) /* add on <var52:Template>*/;
var72 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var72) /* new_visitor on <var72:AbstractCompiler>*/;
var_nitni_visitor = var73;
var74 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var74) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var75 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var75) /* mainmodule on <var75:AbstractCompiler>*/;
var77 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var_mproperty, var76, var_mclass_type) /* lookup_first_definition on <var_mproperty:MProperty(MMethod)>*/;
var78 = ((val* (*)(val*))(var77->class->vft[COLOR_model__MMethodDef__msignature]))(var77) /* msignature on <var77:MPropDef(MMethodDef)>*/;
var_msignature = var78;
var79 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var80 = ((val* (*)(val*))(var79->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var79) /* mainmodule on <var79:AbstractCompiler>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "___super";
var84 = 8;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitSuper>*/;
var87 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:MExplicitSuper>*/;
var88 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var80, var82, var86, var87) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_csignature_blind = var88;
if (varonce89) {
var90 = varonce89;
} else {
var91 = "/* nitni callback to super for ";
var92 = 31;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__full_name]))(var_mproperty) /* full_name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce95) {
var96 = varonce95;
} else {
var97 = " */";
var98 = 3;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 3;
var102 = NEW_array__NativeArray(var101, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var102)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var102)->values[1] = (val*) var94;
((struct instance_array__NativeArray*)var102)->values[2] = (val*) var96;
((void (*)(val*, val*, long))(var100->class->vft[COLOR_array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var103) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce104) {
var105 = varonce104;
} else {
var106 = " {";
var107 = 2;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 2;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var_csignature_blind;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var105;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var112) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var113 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var113->class->vft[COLOR_array__Array__init]))(var113) /* init on <var113:Array[RuntimeVariable]>*/;
var_vars = var113;
if (varonce114) {
var115 = varonce114;
} else {
var116 = "recv";
var117 = 4;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var115, var_mclass_type) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var119;
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_recv_var) /* add on <var_vars:Array[RuntimeVariable]>*/;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 425);
show_backtrace(1);
} else {
var120 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature>*/;
}
var121 = ((val* (*)(val*))(var120->class->vft[COLOR_abstract_collection__Collection__iterator]))(var120) /* iterator on <var120:Array[MParameter]>*/;
for(;;) {
var122 = ((short int (*)(val*))(var121->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var121) /* is_ok on <var121:Iterator[nullable Object]>*/;
if(!var122) break;
var123 = ((val* (*)(val*))(var121->class->vft[COLOR_abstract_collection__Iterator__item]))(var121) /* item on <var121:Iterator[nullable Object]>*/;
var_p = var123;
var124 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var125 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(var_v, var124) /* anchor on <var_v:AbstractCompilerVisitor>*/;
var_arg_mtype = var125;
var126 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var127 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var126, var_arg_mtype) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_arg = var127;
((void (*)(val*, val*))(var_vars->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vars, var_arg) /* add on <var_vars:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var121->class->vft[COLOR_abstract_collection__Iterator__next]))(var121) /* next on <var121:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var128 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
/* <var128:MPropDef> isa MMethodDef */
cltype130 = type_model__MMethodDef.color;
idtype131 = type_model__MMethodDef.id;
if(cltype130 >= var128->type->table_size) {
var129 = 0;
} else {
var129 = var128->type->type_table[cltype130] == idtype131;
}
if (!var129) {
var_class_name = var128 == NULL ? "null" : var128->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 431);
show_backtrace(1);
}
var132 = ((val* (*)(val*, val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__supercall]))(var_nitni_visitor, var128, var_mclass_type, var_vars) /* supercall on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_ret_var = var132;
if (var_msignature == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 433);
show_backtrace(1);
} else {
var133 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature>*/;
}
var_return_mtype = var133;
var134 = NULL;
if (var_return_mtype == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (var135){
var136 = NULL;
if (var_ret_var == NULL) {
var137 = 0; /* is null */
} else {
var137 = 1; /* arg is null and recv is not */
}
if (!var137) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/compiler_ffi.nit", 435);
show_backtrace(1);
}
var138 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(var_v, var_return_mtype) /* anchor on <var_v:AbstractCompilerVisitor>*/;
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
val* var35 /* : Template */;
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
val* var50 /* : Template */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var62 /* : AbstractCompiler */;
val* var63 /* : MModule */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : AbstractCompiler */;
val* var81 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var82 /* : nullable Frame */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var_85 /* var : Array[Object] */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : AbstractCompiler */;
val* var92 /* : MModule */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var_full_internal_csignature /* var full_internal_csignature: String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : String */;
val* var133 /* : Array[Object] */;
long var134 /* : Int */;
val* var135 /* : NativeArray[Object] */;
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
val* var146 /* : RuntimeVariable */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var_from_var /* var from_var: RuntimeVariable */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
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
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : String */;
val* var177 /* : MType */;
short int var178 /* : Bool */;
val* var179 /* : Template */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : String */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : String */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : String */;
val* var203 /* : Array[Object] */;
long var204 /* : Int */;
val* var205 /* : NativeArray[Object] */;
val* var206 /* : String */;
val* var207 /* : Array[Object] */;
long var208 /* : Int */;
val* var_209 /* var : Array[Object] */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : String */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
val* var221 /* : AbstractCompiler */;
val* var222 /* : MModule */;
val* var223 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : String */;
val* var229 /* : String */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : String */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : String */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
val* var247 /* : String */;
val* var248 /* : Template */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : NativeString */;
long var252 /* : Int */;
val* var253 /* : String */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : String */;
val* var259 /* : Array[Object] */;
long var260 /* : Int */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : String */;
val* var263 /* : Template */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : String */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : String */;
val* var275 /* : AbstractCompiler */;
val* var276 /* : MModule */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : String */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : String */;
val* var289 /* : Array[Object] */;
long var290 /* : Int */;
val* var291 /* : NativeArray[Object] */;
val* var292 /* : String */;
val* var293 /* : AbstractCompiler */;
val* var294 /* : AbstractCompilerVisitor */;
val* var295 /* : nullable Frame */;
val* var296 /* : Array[Object] */;
long var297 /* : Int */;
val* var_298 /* var : Array[Object] */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : String */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : String */;
val* var310 /* : AbstractCompiler */;
val* var311 /* : MModule */;
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : String */;
val* var318 /* : String */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : String */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : String */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
val* var336 /* : String */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
long var340 /* : Int */;
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
val* var352 /* : Array[Object] */;
long var353 /* : Int */;
val* var354 /* : NativeArray[Object] */;
val* var355 /* : String */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : String */;
val* var361 /* : Array[Object] */;
long var362 /* : Int */;
val* var363 /* : NativeArray[Object] */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : String */;
val* var370 /* : RuntimeVariable */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : String */;
val* var376 /* : RuntimeVariable */;
val* var_check /* var check: RuntimeVariable */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : String */;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
long var385 /* : Int */;
val* var386 /* : String */;
val* var387 /* : Array[Object] */;
long var388 /* : Int */;
val* var389 /* : NativeArray[Object] */;
val* var390 /* : String */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : String */;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : NativeString */;
long var399 /* : Int */;
val* var400 /* : String */;
val* var401 /* : RuntimeVariable */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : String */;
val* var407 /* : MType */;
short int var408 /* : Bool */;
val* var409 /* : Template */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
long var413 /* : Int */;
val* var414 /* : String */;
val* var415 /* : String */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : String */;
val* var421 /* : String */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : String */;
val* var427 /* : String */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
long var431 /* : Int */;
val* var432 /* : String */;
val* var433 /* : Array[Object] */;
long var434 /* : Int */;
val* var435 /* : NativeArray[Object] */;
val* var436 /* : String */;
val* var437 /* : MType */;
short int var438 /* : Bool */;
val* var439 /* : Template */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
long var443 /* : Int */;
val* var444 /* : String */;
val* var445 /* : String */;
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
val* var463 /* : Array[Object] */;
long var464 /* : Int */;
val* var465 /* : NativeArray[Object] */;
val* var466 /* : String */;
var_v = p0;
var_ccu = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var_from = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var_to = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
var3 = 9;
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var3) /* with_capacity on <var2:Array[Object]>*/;
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
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_mmodule__MModule__name]))(var9) /* name on <var9:MModule>*/;
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
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(var35->class->vft[COLOR_template__Template__add]))(var35, var49) /* add on <var35:Template>*/;
var50 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "#define ";
var54 = 8;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__check_cname]))(self) /* check_cname on <self:MExplicitCast>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = " ";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var62) /* mainmodule on <var62:AbstractCompiler>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_mmodule__MModule__name]))(var63) /* name on <var63:MModule>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = "___";
var68 = 3;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__check_cname]))(self) /* check_cname on <self:MExplicitCast>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "\n";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 7;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var56;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var58;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var64;
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var66;
((struct instance_array__NativeArray*)var78)->values[5] = (val*) var70;
((struct instance_array__NativeArray*)var78)->values[6] = (val*) var72;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
((void (*)(val*, val*))(var50->class->vft[COLOR_template__Template__add]))(var50, var79) /* add on <var50:Template>*/;
var80 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var80) /* new_visitor on <var80:AbstractCompiler>*/;
var_nitni_visitor = var81;
var82 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var82) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
var84 = 9;
((void (*)(val*, long))(var83->class->vft[COLOR_array__Array__with_capacity]))(var83, var84) /* with_capacity on <var83:Array[Object]>*/;
var_85 = var83;
if (varonce86) {
var87 = varonce86;
} else {
var88 = "int ";
var89 = 4;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var87) /* add on <var_85:Array[Object]>*/;
var91 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var92 = ((val* (*)(val*))(var91->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var91) /* mainmodule on <var91:AbstractCompiler>*/;
var93 = ((val* (*)(val*))(var92->class->vft[COLOR_mmodule__MModule__name]))(var92) /* name on <var92:MModule>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var93) /* add on <var_85:Array[Object]>*/;
if (varonce94) {
var95 = varonce94;
} else {
var96 = "___";
var97 = 3;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var95) /* add on <var_85:Array[Object]>*/;
var99 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var99) /* add on <var_85:Array[Object]>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = "_is_a_";
var103 = 6;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var101) /* add on <var_85:Array[Object]>*/;
var105 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var105) /* add on <var_85:Array[Object]>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "(";
var109 = 1;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var107) /* add on <var_85:Array[Object]>*/;
var111 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var111) /* add on <var_85:Array[Object]>*/;
if (varonce112) {
var113 = varonce112;
} else {
var114 = " from)";
var115 = 6;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var113) /* add on <var_85:Array[Object]>*/;
var117 = ((val* (*)(val*))(var_85->class->vft[COLOR_string__Object__to_s]))(var_85) /* to_s on <var_85:Array[Object]>*/;
var_full_internal_csignature = var117;
if (varonce118) {
var119 = varonce118;
} else {
var120 = "/* nitni check for ";
var121 = 19;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = " to ";
var126 = 4;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = " */";
var131 = 3;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 5;
var135 = NEW_array__NativeArray(var134, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var135)->values[0] = (val*) var119;
((struct instance_array__NativeArray*)var135)->values[1] = (val*) var_from;
((struct instance_array__NativeArray*)var135)->values[2] = (val*) var124;
((struct instance_array__NativeArray*)var135)->values[3] = (val*) var_to;
((struct instance_array__NativeArray*)var135)->values[4] = (val*) var129;
((void (*)(val*, val*, long))(var133->class->vft[COLOR_array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
var136 = ((val* (*)(val*))(var133->class->vft[COLOR_string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var136) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce137) {
var138 = varonce137;
} else {
var139 = " {";
var140 = 2;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 2;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var_full_internal_csignature;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var138;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
var145 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var145) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var146 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce147) {
var148 = varonce147;
} else {
var149 = "from->value";
var150 = 11;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
((void (*)(val*, val*, val*, val*))(var146->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var146, var148, var_from, var_from) /* init on <var146:RuntimeVariable>*/;
var_from_var = var146;
if (varonce152) {
var153 = varonce152;
} else {
var154 = "FFI isa";
var155 = 7;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = ((val* (*)(val*, val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_nitni_visitor, var_from_var, var_to, var153) /* type_test on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var157;
if (varonce158) {
var159 = varonce158;
} else {
var160 = "return ";
var161 = 7;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = ";";
var166 = 1;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 3;
var170 = NEW_array__NativeArray(var169, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var170)->values[0] = (val*) var159;
((struct instance_array__NativeArray*)var170)->values[1] = (val*) var_recv_var;
((struct instance_array__NativeArray*)var170)->values[2] = (val*) var164;
((void (*)(val*, val*, long))(var168->class->vft[COLOR_array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
var171 = ((val* (*)(val*))(var168->class->vft[COLOR_string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var171) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce172) {
var173 = varonce172;
} else {
var174 = "}";
var175 = 1;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var173) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var177 = ((val* (*)(val*))(var_to->class->vft[COLOR_model__MType__as_nullable]))(var_to) /* as_nullable on <var_to:MType>*/;
var178 = ((short int (*)(val*, val*))(var_from->class->vft[COLOR_kernel__Object___61d_61d]))(var_from, var177) /* == on <var_from:MType>*/;
if (var178){
var179 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce180) {
var181 = varonce180;
} else {
var182 = "#define ";
var183 = 8;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce186) {
var187 = varonce186;
} else {
var188 = "_is_null !";
var189 = 10;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
var191 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce192) {
var193 = varonce192;
} else {
var194 = "_is_a_";
var195 = 6;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce198) {
var199 = varonce198;
} else {
var200 = "\n";
var201 = 1;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
var203 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var203 = array_instance Array[Object] */
var204 = 7;
var205 = NEW_array__NativeArray(var204, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var205)->values[0] = (val*) var181;
((struct instance_array__NativeArray*)var205)->values[1] = (val*) var185;
((struct instance_array__NativeArray*)var205)->values[2] = (val*) var187;
((struct instance_array__NativeArray*)var205)->values[3] = (val*) var191;
((struct instance_array__NativeArray*)var205)->values[4] = (val*) var193;
((struct instance_array__NativeArray*)var205)->values[5] = (val*) var197;
((struct instance_array__NativeArray*)var205)->values[6] = (val*) var199;
((void (*)(val*, val*, long))(var203->class->vft[COLOR_array__Array__with_native]))(var203, var205, var204) /* with_native on <var203:Array[Object]>*/;
}
var206 = ((val* (*)(val*))(var203->class->vft[COLOR_string__Object__to_s]))(var203) /* to_s on <var203:Array[Object]>*/;
((void (*)(val*, val*))(var179->class->vft[COLOR_template__Template__add]))(var179, var206) /* add on <var179:Template>*/;
} else {
}
var207 = NEW_array__Array(&type_array__Arraykernel__Object);
var208 = 11;
((void (*)(val*, long))(var207->class->vft[COLOR_array__Array__with_capacity]))(var207, var208) /* with_capacity on <var207:Array[Object]>*/;
var_209 = var207;
if (varonce210) {
var211 = varonce210;
} else {
var212 = "";
var213 = 0;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var211) /* add on <var_209:Array[Object]>*/;
var215 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_to) /* cname_blind on <var_to:MType>*/;
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var215) /* add on <var_209:Array[Object]>*/;
if (varonce216) {
var217 = varonce216;
} else {
var218 = " ";
var219 = 1;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var217) /* add on <var_209:Array[Object]>*/;
var221 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var222 = ((val* (*)(val*))(var221->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var221) /* mainmodule on <var221:AbstractCompiler>*/;
var223 = ((val* (*)(val*))(var222->class->vft[COLOR_mmodule__MModule__name]))(var222) /* name on <var222:MModule>*/;
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var223) /* add on <var_209:Array[Object]>*/;
if (varonce224) {
var225 = varonce224;
} else {
var226 = "___";
var227 = 3;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var225) /* add on <var_209:Array[Object]>*/;
var229 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var229) /* add on <var_209:Array[Object]>*/;
if (varonce230) {
var231 = varonce230;
} else {
var232 = "_as_";
var233 = 4;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var231) /* add on <var_209:Array[Object]>*/;
var235 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var235) /* add on <var_209:Array[Object]>*/;
if (varonce236) {
var237 = varonce236;
} else {
var238 = "(";
var239 = 1;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var237) /* add on <var_209:Array[Object]>*/;
var241 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var241) /* add on <var_209:Array[Object]>*/;
if (varonce242) {
var243 = varonce242;
} else {
var244 = ")";
var245 = 1;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
((void (*)(val*, val*))(var_209->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_209, var243) /* add on <var_209:Array[Object]>*/;
var247 = ((val* (*)(val*))(var_209->class->vft[COLOR_string__Object__to_s]))(var_209) /* to_s on <var_209:Array[Object]>*/;
var_full_friendly_csignature = var247;
var248 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce249) {
var250 = varonce249;
} else {
var251 = "extern ";
var252 = 7;
var253 = string__NativeString__to_s_with_length(var251, var252);
var250 = var253;
varonce249 = var250;
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = ";\n";
var257 = 2;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
var259 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var259 = array_instance Array[Object] */
var260 = 3;
var261 = NEW_array__NativeArray(var260, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var261)->values[0] = (val*) var250;
((struct instance_array__NativeArray*)var261)->values[1] = (val*) var_full_friendly_csignature;
((struct instance_array__NativeArray*)var261)->values[2] = (val*) var255;
((void (*)(val*, val*, long))(var259->class->vft[COLOR_array__Array__with_native]))(var259, var261, var260) /* with_native on <var259:Array[Object]>*/;
}
var262 = ((val* (*)(val*))(var259->class->vft[COLOR_string__Object__to_s]))(var259) /* to_s on <var259:Array[Object]>*/;
((void (*)(val*, val*))(var248->class->vft[COLOR_template__Template__add]))(var248, var262) /* add on <var248:Template>*/;
var263 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce264) {
var265 = varonce264;
} else {
var266 = "#define ";
var267 = 8;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
var269 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__cast_cname]))(self) /* cast_cname on <self:MExplicitCast>*/;
if (varonce270) {
var271 = varonce270;
} else {
var272 = " ";
var273 = 1;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
var275 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var276 = ((val* (*)(val*))(var275->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var275) /* mainmodule on <var275:AbstractCompiler>*/;
var277 = ((val* (*)(val*))(var276->class->vft[COLOR_mmodule__MModule__name]))(var276) /* name on <var276:MModule>*/;
if (varonce278) {
var279 = varonce278;
} else {
var280 = "___";
var281 = 3;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
var283 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__cast_cname]))(self) /* cast_cname on <self:MExplicitCast>*/;
if (varonce284) {
var285 = varonce284;
} else {
var286 = "\n";
var287 = 1;
var288 = string__NativeString__to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
var289 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var289 = array_instance Array[Object] */
var290 = 7;
var291 = NEW_array__NativeArray(var290, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var291)->values[0] = (val*) var265;
((struct instance_array__NativeArray*)var291)->values[1] = (val*) var269;
((struct instance_array__NativeArray*)var291)->values[2] = (val*) var271;
((struct instance_array__NativeArray*)var291)->values[3] = (val*) var277;
((struct instance_array__NativeArray*)var291)->values[4] = (val*) var279;
((struct instance_array__NativeArray*)var291)->values[5] = (val*) var283;
((struct instance_array__NativeArray*)var291)->values[6] = (val*) var285;
((void (*)(val*, val*, long))(var289->class->vft[COLOR_array__Array__with_native]))(var289, var291, var290) /* with_native on <var289:Array[Object]>*/;
}
var292 = ((val* (*)(val*))(var289->class->vft[COLOR_string__Object__to_s]))(var289) /* to_s on <var289:Array[Object]>*/;
((void (*)(val*, val*))(var263->class->vft[COLOR_template__Template__add]))(var263, var292) /* add on <var263:Template>*/;
var293 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var294 = ((val* (*)(val*))(var293->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var293) /* new_visitor on <var293:AbstractCompiler>*/;
var_nitni_visitor = var294;
var295 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_nitni_visitor, var295) /* frame= on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var296 = NEW_array__Array(&type_array__Arraykernel__Object);
var297 = 11;
((void (*)(val*, long))(var296->class->vft[COLOR_array__Array__with_capacity]))(var296, var297) /* with_capacity on <var296:Array[Object]>*/;
var_298 = var296;
if (varonce299) {
var300 = varonce299;
} else {
var301 = "";
var302 = 0;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var300) /* add on <var_298:Array[Object]>*/;
var304 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_to) /* cname_blind on <var_to:MType>*/;
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var304) /* add on <var_298:Array[Object]>*/;
if (varonce305) {
var306 = varonce305;
} else {
var307 = " ";
var308 = 1;
var309 = string__NativeString__to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var306) /* add on <var_298:Array[Object]>*/;
var310 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var311 = ((val* (*)(val*))(var310->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var310) /* mainmodule on <var310:AbstractCompiler>*/;
var312 = ((val* (*)(val*))(var311->class->vft[COLOR_mmodule__MModule__name]))(var311) /* name on <var311:MModule>*/;
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var312) /* add on <var_298:Array[Object]>*/;
if (varonce313) {
var314 = varonce313;
} else {
var315 = "___";
var316 = 3;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var314) /* add on <var_298:Array[Object]>*/;
var318 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var318) /* add on <var_298:Array[Object]>*/;
if (varonce319) {
var320 = varonce319;
} else {
var321 = "_as_";
var322 = 4;
var323 = string__NativeString__to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var320) /* add on <var_298:Array[Object]>*/;
var324 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var324) /* add on <var_298:Array[Object]>*/;
if (varonce325) {
var326 = varonce325;
} else {
var327 = "(";
var328 = 1;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var326) /* add on <var_298:Array[Object]>*/;
var330 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_from) /* cname_blind on <var_from:MType>*/;
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var330) /* add on <var_298:Array[Object]>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = " from)";
var334 = 6;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
((void (*)(val*, val*))(var_298->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_298, var332) /* add on <var_298:Array[Object]>*/;
var336 = ((val* (*)(val*))(var_298->class->vft[COLOR_string__Object__to_s]))(var_298) /* to_s on <var_298:Array[Object]>*/;
var_full_internal_csignature = var336;
if (varonce337) {
var338 = varonce337;
} else {
var339 = "/* nitni cast for ";
var340 = 18;
var341 = string__NativeString__to_s_with_length(var339, var340);
var338 = var341;
varonce337 = var338;
}
if (varonce342) {
var343 = varonce342;
} else {
var344 = " to ";
var345 = 4;
var346 = string__NativeString__to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
if (varonce347) {
var348 = varonce347;
} else {
var349 = " */";
var350 = 3;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
var352 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var352 = array_instance Array[Object] */
var353 = 5;
var354 = NEW_array__NativeArray(var353, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var354)->values[0] = (val*) var338;
((struct instance_array__NativeArray*)var354)->values[1] = (val*) var_from;
((struct instance_array__NativeArray*)var354)->values[2] = (val*) var343;
((struct instance_array__NativeArray*)var354)->values[3] = (val*) var_to;
((struct instance_array__NativeArray*)var354)->values[4] = (val*) var348;
((void (*)(val*, val*, long))(var352->class->vft[COLOR_array__Array__with_native]))(var352, var354, var353) /* with_native on <var352:Array[Object]>*/;
}
var355 = ((val* (*)(val*))(var352->class->vft[COLOR_string__Object__to_s]))(var352) /* to_s on <var352:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var355) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce356) {
var357 = varonce356;
} else {
var358 = " {";
var359 = 2;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
var361 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var361 = array_instance Array[Object] */
var362 = 2;
var363 = NEW_array__NativeArray(var362, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var363)->values[0] = (val*) var_full_internal_csignature;
((struct instance_array__NativeArray*)var363)->values[1] = (val*) var357;
((void (*)(val*, val*, long))(var361->class->vft[COLOR_array__Array__with_native]))(var361, var363, var362) /* with_native on <var361:Array[Object]>*/;
}
var364 = ((val* (*)(val*))(var361->class->vft[COLOR_string__Object__to_s]))(var361) /* to_s on <var361:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_nitni_visitor, var364) /* add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce365) {
var366 = varonce365;
} else {
var367 = "from";
var368 = 4;
var369 = string__NativeString__to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
var370 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__var_from_c]))(var_nitni_visitor, var366, var_from) /* var_from_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_from_var = var370;
if (varonce371) {
var372 = varonce371;
} else {
var373 = "FFI cast";
var374 = 8;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = ((val* (*)(val*, val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_nitni_visitor, var_from_var, var_to, var372) /* type_test on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_check = var376;
if (varonce377) {
var378 = varonce377;
} else {
var379 = "if (!";
var380 = 5;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
if (varonce382) {
var383 = varonce382;
} else {
var384 = ") {";
var385 = 3;
var386 = string__NativeString__to_s_with_length(var384, var385);
var383 = var386;
varonce382 = var383;
}
var387 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var387 = array_instance Array[Object] */
var388 = 3;
var389 = NEW_array__NativeArray(var388, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var389)->values[0] = (val*) var378;
((struct instance_array__NativeArray*)var389)->values[1] = (val*) var_check;
((struct instance_array__NativeArray*)var389)->values[2] = (val*) var383;
((void (*)(val*, val*, long))(var387->class->vft[COLOR_array__Array__with_native]))(var387, var389, var388) /* with_native on <var387:Array[Object]>*/;
}
var390 = ((val* (*)(val*))(var387->class->vft[COLOR_string__Object__to_s]))(var387) /* to_s on <var387:Array[Object]>*/;
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var390) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce391) {
var392 = varonce391;
} else {
var393 = "FFI cast failed";
var394 = 15;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_nitni_visitor, var392) /* add_abort on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce396) {
var397 = varonce396;
} else {
var398 = "}";
var399 = 1;
var400 = string__NativeString__to_s_with_length(var398, var399);
var397 = var400;
varonce396 = var397;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var397) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var401 = ((val* (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(var_nitni_visitor, var_from_var, var_to) /* autobox on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var_recv_var = var401;
((void (*)(val*, val*, val*))(var_nitni_visitor->class->vft[COLOR_compiler_ffi__AbstractCompilerVisitor__ret_to_c]))(var_nitni_visitor, var_recv_var, var_to) /* ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/;
if (varonce402) {
var403 = varonce402;
} else {
var404 = "}";
var405 = 1;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
((void (*)(val*, val*))(var_nitni_visitor->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_nitni_visitor, var403) /* add on <var_nitni_visitor:AbstractCompilerVisitor>*/;
var407 = ((val* (*)(val*))(var_from->class->vft[COLOR_model__MType__as_nullable]))(var_from) /* as_nullable on <var_from:MType>*/;
var408 = ((short int (*)(val*, val*))(var407->class->vft[COLOR_kernel__Object___61d_61d]))(var407, var_to) /* == on <var407:MType>*/;
if (var408){
var409 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce410) {
var411 = varonce410;
} else {
var412 = "#define ";
var413 = 8;
var414 = string__NativeString__to_s_with_length(var412, var413);
var411 = var414;
varonce410 = var411;
}
var415 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce416) {
var417 = varonce416;
} else {
var418 = "_as_nullable ";
var419 = 13;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
var421 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce422) {
var423 = varonce422;
} else {
var424 = "_as_";
var425 = 4;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
var427 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce428) {
var429 = varonce428;
} else {
var430 = "\n";
var431 = 1;
var432 = string__NativeString__to_s_with_length(var430, var431);
var429 = var432;
varonce428 = var429;
}
var433 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var433 = array_instance Array[Object] */
var434 = 7;
var435 = NEW_array__NativeArray(var434, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var435)->values[0] = (val*) var411;
((struct instance_array__NativeArray*)var435)->values[1] = (val*) var415;
((struct instance_array__NativeArray*)var435)->values[2] = (val*) var417;
((struct instance_array__NativeArray*)var435)->values[3] = (val*) var421;
((struct instance_array__NativeArray*)var435)->values[4] = (val*) var423;
((struct instance_array__NativeArray*)var435)->values[5] = (val*) var427;
((struct instance_array__NativeArray*)var435)->values[6] = (val*) var429;
((void (*)(val*, val*, long))(var433->class->vft[COLOR_array__Array__with_native]))(var433, var435, var434) /* with_native on <var433:Array[Object]>*/;
}
var436 = ((val* (*)(val*))(var433->class->vft[COLOR_string__Object__to_s]))(var433) /* to_s on <var433:Array[Object]>*/;
((void (*)(val*, val*))(var409->class->vft[COLOR_template__Template__add]))(var409, var436) /* add on <var409:Template>*/;
} else {
}
var437 = ((val* (*)(val*))(var_to->class->vft[COLOR_model__MType__as_nullable]))(var_to) /* as_nullable on <var_to:MType>*/;
var438 = ((short int (*)(val*, val*))(var_from->class->vft[COLOR_kernel__Object___61d_61d]))(var_from, var437) /* == on <var_from:MType>*/;
if (var438){
var439 = ((val* (*)(val*))(var_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var_ccu) /* header_decl on <var_ccu:CCompilationUnit>*/;
if (varonce440) {
var441 = varonce440;
} else {
var442 = "#define ";
var443 = 8;
var444 = string__NativeString__to_s_with_length(var442, var443);
var441 = var444;
varonce440 = var441;
}
var445 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce446) {
var447 = varonce446;
} else {
var448 = "_as_not_nullable ";
var449 = 17;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = ((val* (*)(val*))(var_from->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_from) /* mangled_cname on <var_from:MType>*/;
if (varonce452) {
var453 = varonce452;
} else {
var454 = "_as_";
var455 = 4;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
var457 = ((val* (*)(val*))(var_to->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_to) /* mangled_cname on <var_to:MType>*/;
if (varonce458) {
var459 = varonce458;
} else {
var460 = "\n";
var461 = 1;
var462 = string__NativeString__to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
var463 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var463 = array_instance Array[Object] */
var464 = 7;
var465 = NEW_array__NativeArray(var464, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var465)->values[0] = (val*) var441;
((struct instance_array__NativeArray*)var465)->values[1] = (val*) var445;
((struct instance_array__NativeArray*)var465)->values[2] = (val*) var447;
((struct instance_array__NativeArray*)var465)->values[3] = (val*) var451;
((struct instance_array__NativeArray*)var465)->values[4] = (val*) var453;
((struct instance_array__NativeArray*)var465)->values[5] = (val*) var457;
((struct instance_array__NativeArray*)var465)->values[6] = (val*) var459;
((void (*)(val*, val*, long))(var463->class->vft[COLOR_array__Array__with_native]))(var463, var465, var464) /* with_native on <var463:Array[Object]>*/;
}
var466 = ((val* (*)(val*))(var463->class->vft[COLOR_string__Object__to_s]))(var463) /* to_s on <var463:Array[Object]>*/;
((void (*)(val*, val*))(var439->class->vft[COLOR_template__Template__add]))(var439, var466) /* add on <var439:Template>*/;
} else {
}
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCast#compile_extern_callbacks for (self: Object, AbstractCompilerVisitor, CCompilationUnit) */
void VIRTUAL_compiler_ffi__MExplicitCast__compile_extern_callbacks(val* self, val* p0, val* p1) {
compiler_ffi__MExplicitCast__compile_extern_callbacks(self, p0, p1);
RET_LABEL:;
}
