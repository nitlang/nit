#include "common_ffi.sep.0.h"
/* method common_ffi#MModule#uses_ffi for (self: MModule): Bool */
short int common_ffi__MModule__uses_ffi(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_common_ffi__MModule___64duses_ffi].s; /* @uses_ffi on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#MModule#uses_ffi for (self: Object): Bool */
short int VIRTUAL_common_ffi__MModule__uses_ffi(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = common_ffi__MModule__uses_ffi(self);
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#MModule#uses_ffi= for (self: MModule, Bool) */
void common_ffi__MModule__uses_ffi_61d(val* self, short int p0) {
self->attrs[COLOR_common_ffi__MModule___64duses_ffi].s = p0; /* @uses_ffi on <self:MModule> */
RET_LABEL:;
}
/* method common_ffi#MModule#uses_ffi= for (self: Object, Bool) */
void VIRTUAL_common_ffi__MModule__uses_ffi_61d(val* self, short int p0) {
common_ffi__MModule__uses_ffi_61d(self, p0);
RET_LABEL:;
}
/* method common_ffi#AModule#ffi_ccu for (self: AModule): nullable CCompilationUnit */
val* common_ffi__AModule__ffi_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_common_ffi__AModule___64dffi_ccu].val; /* @ffi_ccu on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AModule#ffi_ccu for (self: Object): nullable CCompilationUnit */
val* VIRTUAL_common_ffi__AModule__ffi_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = common_ffi__AModule__ffi_ccu(self);
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AModule#ffi_ccu= for (self: AModule, nullable CCompilationUnit) */
void common_ffi__AModule__ffi_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_common_ffi__AModule___64dffi_ccu].val = p0; /* @ffi_ccu on <self:AModule> */
RET_LABEL:;
}
/* method common_ffi#AModule#ffi_ccu= for (self: Object, nullable CCompilationUnit) */
void VIRTUAL_common_ffi__AModule__ffi_ccu_61d(val* self, val* p0) {
common_ffi__AModule__ffi_ccu_61d(self, p0);
RET_LABEL:;
}
/* method common_ffi#AModule#present_languages for (self: AModule): HashSet[FFILanguage] */
val* common_ffi__AModule__present_languages(val* self) {
val* var /* : HashSet[FFILanguage] */;
val* var1 /* : HashSet[FFILanguage] */;
var1 = self->attrs[COLOR_common_ffi__AModule___64dpresent_languages].val; /* @present_languages on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @present_languages");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 45);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AModule#present_languages for (self: Object): HashSet[FFILanguage] */
val* VIRTUAL_common_ffi__AModule__present_languages(val* self) {
val* var /* : HashSet[FFILanguage] */;
val* var1 /* : HashSet[FFILanguage] */;
var1 = common_ffi__AModule__present_languages(self);
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AModule#present_languages= for (self: AModule, HashSet[FFILanguage]) */
void common_ffi__AModule__present_languages_61d(val* self, val* p0) {
self->attrs[COLOR_common_ffi__AModule___64dpresent_languages].val = p0; /* @present_languages on <self:AModule> */
RET_LABEL:;
}
/* method common_ffi#AModule#present_languages= for (self: Object, HashSet[FFILanguage]) */
void VIRTUAL_common_ffi__AModule__present_languages_61d(val* self, val* p0) {
common_ffi__AModule__present_languages_61d(self, p0);
RET_LABEL:;
}
/* method common_ffi#AModule#ffi_callbacks for (self: AModule): HashMap[FFILanguage, Set[NitniCallback]] */
val* common_ffi__AModule__ffi_callbacks(val* self) {
val* var /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var1 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
var1 = self->attrs[COLOR_common_ffi__AModule___64dffi_callbacks].val; /* @ffi_callbacks on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @ffi_callbacks");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 48);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AModule#ffi_callbacks for (self: Object): HashMap[FFILanguage, Set[NitniCallback]] */
val* VIRTUAL_common_ffi__AModule__ffi_callbacks(val* self) {
val* var /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var1 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
var1 = common_ffi__AModule__ffi_callbacks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AModule#ffi_callbacks= for (self: AModule, HashMap[FFILanguage, Set[NitniCallback]]) */
void common_ffi__AModule__ffi_callbacks_61d(val* self, val* p0) {
self->attrs[COLOR_common_ffi__AModule___64dffi_callbacks].val = p0; /* @ffi_callbacks on <self:AModule> */
RET_LABEL:;
}
/* method common_ffi#AModule#ffi_callbacks= for (self: Object, HashMap[FFILanguage, Set[NitniCallback]]) */
void VIRTUAL_common_ffi__AModule__ffi_callbacks_61d(val* self, val* p0) {
common_ffi__AModule__ffi_callbacks_61d(self, p0);
RET_LABEL:;
}
/* method common_ffi#AModule#ensure_compile_ffi_wrapper for (self: AModule) */
void common_ffi__AModule__ensure_compile_ffi_wrapper(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : CCompilationUnit */;
val* var_ffi_ccu /* var ffi_ccu: CCompilationUnit */;
val* var4 /* : ANodes[AExternCodeBlock] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_block /* var block: AExternCodeBlock */;
val* var8 /* : nullable FFILanguage */;
val* var_language /* var language: nullable FFILanguage */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[FFILanguage] */;
val* var12 /* : Writer */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : nullable MModule */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
val* var28 /* : Writer */;
val* var29 /* : nullable MModule */;
val* var30 /* : Array[MModule] */;
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_mod /* var mod: MModule */;
short int var34 /* : Bool */;
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
val* var53 /* : ANodes[AClassdef] */;
val* var54 /* : Iterator[nullable Object] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var59 /* : nullable AExternCodeBlock */;
val* var60 /* : null */;
short int var61 /* : Bool */;
val* var62 /* : nullable MModule */;
short int var63 /* : Bool */;
val* var64 /* : nullable AExternCodeBlock */;
val* var65 /* : nullable FFILanguage */;
val* var_language66 /* var language: nullable FFILanguage */;
val* var67 /* : null */;
short int var68 /* : Bool */;
val* var69 /* : HashSet[FFILanguage] */;
val* var70 /* : nullable AExternCodeBlock */;
val* var71 /* : nullable FFILanguage */;
val* var72 /* : nullable AExternCodeBlock */;
var = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
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
var_ffi_ccu = var3;
((void (*)(val*, val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu_61d]))(self, var_ffi_ccu) /* ffi_ccu= on <self:AModule>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AModule__n_extern_code_blocks]))(self) /* n_extern_code_blocks on <self:AModule>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:ANodes[AExternCodeBlock]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_block = var7;
var8 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var_block) /* language on <var_block:AExternCodeBlock>*/;
var_language = var8;
var9 = NULL;
if (var_language == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 62);
exit(1);
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__present_languages]))(self) /* present_languages on <self:AModule>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var_language) /* add on <var11:HashSet[FFILanguage]>*/;
((void (*)(val*, val*, val*, val*))(var_language->class->vft[COLOR_ffi_base__FFILanguage__compile_module_block]))(var_language, var_block, var_ffi_ccu, self) /* compile_module_block on <var_language:nullable FFILanguage(FFILanguage)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*))(var_ffi_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_c_base]))(var_ffi_ccu) /* header_c_base on <var_ffi_ccu:CCompilationUnit>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "#include \"";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var17 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__AModule__mmodule]))(self) /* mmodule on <self:AModule>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 67);
exit(1);
} else {
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model_base__MModule__name]))(var17) /* name on <var17:nullable MModule>*/;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "._nitni.h\"\n";
var22 = 11;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 3;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var18;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var20;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
CHECK_NEW_array__Array(var24);
}
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
var28 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_compiling_writer__Writer__add]))(var12, var27) /* add on <var12:Writer>*/;
var28;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__AModule__mmodule]))(self) /* mmodule on <self:AModule>*/;
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 70);
exit(1);
} else {
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_header_dependency__MModule__header_dependencies]))(var29) /* header_dependencies on <var29:nullable MModule>*/;
}
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_collection__Collection__iterator]))(var30) /* iterator on <var30:Array[MModule]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var_mod = var33;
var34 = ((short int (*)(val*))(var_mod->class->vft[COLOR_common_ffi__MModule__uses_ffi]))(var_mod) /* uses_ffi on <var_mod:MModule>*/;
if (var34){
var35 = ((val* (*)(val*))(var_ffi_ccu->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_ffi_ccu) /* header_custom on <var_ffi_ccu:CCompilationUnit>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "#include \"";
var39 = 10;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*))(var_mod->class->vft[COLOR_model_base__MModule__name]))(var_mod) /* name on <var_mod:MModule>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "._ffi.h\"\n";
var45 = 9;
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
} else {
}
CONTINUE_label52: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label52: (void)0;
var53 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(self) /* n_classdefs on <self:AModule>*/;
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_abstract_collection__Collection__iterator]))(var53) /* iterator on <var53:ANodes[AClassdef]>*/;
for(;;) {
var55 = ((short int (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var54) /* is_ok on <var54:Iterator[nullable Object]>*/;
if(!var55) break;
var56 = ((val* (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__item]))(var54) /* item on <var54:Iterator[nullable Object]>*/;
var_nclassdef = var56;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var58 = 0;
} else {
var58 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var58;
if (var58){
var59 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var60 = NULL;
if (var59 == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
var57 = var61;
} else {
var57 = var_;
}
if (var57){
var62 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__AModule__mmodule]))(self) /* mmodule on <self:AModule>*/;
var63 = 1;
if (var62 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 76);
exit(1);
} else {
((void (*)(val*, short int))(var62->class->vft[COLOR_common_ffi__MModule__uses_ffi_61d]))(var62, var63) /* uses_ffi= on <var62:nullable MModule>*/;
}
var64 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var64 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 77);
exit(1);
} else {
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var64) /* language on <var64:nullable AExternCodeBlock>*/;
}
var_language66 = var65;
var67 = NULL;
if (var_language66 == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (!var68) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 78);
exit(1);
}
var69 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__present_languages]))(self) /* present_languages on <self:AModule>*/;
((void (*)(val*, val*))(var69->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var69, var_language66) /* add on <var69:HashSet[FFILanguage]>*/;
var70 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var70 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 80);
exit(1);
} else {
var71 = ((val* (*)(val*))(var70->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var70) /* language on <var70:nullable AExternCodeBlock>*/;
}
var72 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var72 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 80);
exit(1);
}
if (var71 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 80);
exit(1);
} else {
((void (*)(val*, val*, val*, val*, val*))(var71->class->vft[COLOR_ffi_base__FFILanguage__compile_extern_class]))(var71, var72, var_nclassdef, var_ffi_ccu, self) /* compile_extern_class on <var71:nullable FFILanguage>*/;
}
} else {
}
CONTINUE_label73: (void)0;
((void (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__next]))(var54) /* next on <var54:Iterator[nullable Object]>*/;
}
BREAK_label73: (void)0;
RET_LABEL:;
}
/* method common_ffi#AModule#ensure_compile_ffi_wrapper for (self: Object) */
void VIRTUAL_common_ffi__AModule__ensure_compile_ffi_wrapper(val* self) {
common_ffi__AModule__ensure_compile_ffi_wrapper(self);
RET_LABEL:;
}
/* method common_ffi#AModule#finalize_ffi_wrapper for (self: AModule, String, MModule) */
void common_ffi__AModule__finalize_ffi_wrapper(val* self, val* p0, val* p1) {
val* var_compdir /* var compdir: String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : HashSet[FFILanguage] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_language /* var language: FFILanguage */;
val* var4 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var5 /* : Collection[Object] */;
short int var6 /* : Bool */;
val* var7 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var8 /* : nullable Object */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_callback /* var callback: NitniCallback */;
val* var12 /* : nullable CCompilationUnit */;
val* var14 /* : nullable CCompilationUnit */;
val* var15 /* : nullable CCompilationUnit */;
val* var16 /* : Array[String] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_filename /* var filename: String */;
val* var20 /* : Array[ExternFile] */;
val* var21 /* : ExternCFile */;
val* var22 /* : String */;
var_compdir = p0;
var_mainmodule = p1;
((void (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ensure_compile_ffi_wrapper]))(self) /* ensure_compile_ffi_wrapper on <self:AModule>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__present_languages]))(self) /* present_languages on <self:AModule>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:HashSet[FFILanguage]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_language = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_callbacks]))(self) /* ffi_callbacks on <self:AModule>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapRead__keys]))(var4) /* keys on <var4:HashMap[FFILanguage, Set[NitniCallback]]>*/;
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var_language) /* has on <var5:Collection[Object](HashMapKeys[FFILanguage, Set[NitniCallback]])>*/;
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_callbacks]))(self) /* ffi_callbacks on <self:AModule>*/;
var8 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var7, var_language) /* [] on <var7:HashMap[FFILanguage, Set[NitniCallback]]>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:nullable Object(Set[NitniCallback])>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_callback = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 93);
exit(1);
}
((void (*)(val*, val*, val*, val*, val*))(var_language->class->vft[COLOR_ffi_base__FFILanguage__compile_callback]))(var_language, var_callback, self, var_mainmodule, var12) /* compile_callback on <var_language:FFILanguage>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*, val*))(var_language->class->vft[COLOR_ffi_base__FFILanguage__compile_to_files]))(var_language, self, var_compdir) /* compile_to_files on <var_language:FFILanguage>*/;
} else {
}
CONTINUE_label13: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label13: (void)0;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 99);
exit(1);
} else {
((void (*)(val*, val*, val*))(var14->class->vft[COLOR_ffi_base__CCompilationUnit__write_as_impl]))(var14, self, var_compdir) /* write_as_impl on <var14:nullable CCompilationUnit>*/;
}
var15 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 100);
exit(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_c_tools__CCompilationUnit__files]))(var15) /* files on <var15:nullable CCompilationUnit>*/;
}
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:Array[String]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_filename = var19;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AModule__ffi_files]))(self) /* ffi_files on <self:AModule>*/;
var21 = NEW_c__ExternCFile(&type_c__ExternCFile);
var22 = ((val* (*)(val*))(self->class->vft[COLOR_c__AModule__c_compiler_options]))(self) /* c_compiler_options on <self:AModule>*/;
((void (*)(val*, val*, val*))(var21->class->vft[COLOR_c__ExternCFile__init]))(var21, var_filename, var22) /* init on <var21:ExternCFile>*/;
CHECK_NEW_c__ExternCFile(var21);
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var20, var21) /* add on <var20:Array[ExternFile]>*/;
CONTINUE_label23: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label23: (void)0;
RET_LABEL:;
}
/* method common_ffi#AModule#finalize_ffi_wrapper for (self: Object, String, MModule) */
void VIRTUAL_common_ffi__AModule__finalize_ffi_wrapper(val* self, val* p0, val* p1) {
common_ffi__AModule__finalize_ffi_wrapper(self, p0, p1);
RET_LABEL:;
}
/* method common_ffi#AExternPropdef#ffi_has_been_compiled for (self: AExternPropdef): Bool */
short int common_ffi__AExternPropdef__ffi_has_been_compiled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_common_ffi__AExternPropdef___64dffi_has_been_compiled].s; /* @ffi_has_been_compiled on <self:AExternPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AExternPropdef#ffi_has_been_compiled for (self: Object): Bool */
short int VIRTUAL_common_ffi__AExternPropdef__ffi_has_been_compiled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = common_ffi__AExternPropdef__ffi_has_been_compiled(self);
var = var1;
RET_LABEL:;
return var;
}
/* method common_ffi#AExternPropdef#ffi_has_been_compiled= for (self: AExternPropdef, Bool) */
void common_ffi__AExternPropdef__ffi_has_been_compiled_61d(val* self, short int p0) {
self->attrs[COLOR_common_ffi__AExternPropdef___64dffi_has_been_compiled].s = p0; /* @ffi_has_been_compiled on <self:AExternPropdef> */
RET_LABEL:;
}
/* method common_ffi#AExternPropdef#ffi_has_been_compiled= for (self: Object, Bool) */
void VIRTUAL_common_ffi__AExternPropdef__ffi_has_been_compiled_61d(val* self, short int p0) {
common_ffi__AExternPropdef__ffi_has_been_compiled_61d(self, p0);
RET_LABEL:;
}
/* method common_ffi#AExternPropdef#compile_ffi_method for (self: AExternPropdef, AModule) */
void common_ffi__AExternPropdef__compile_ffi_method(val* self, val* p0) {
val* var_amodule /* var amodule: AModule */;
val* var /* : nullable AExternCodeBlock */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExternCodeBlock */;
val* var6 /* : nullable FFILanguage */;
val* var_language /* var language: nullable FFILanguage */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : HashSet[FFILanguage] */;
val* var10 /* : nullable AExternCodeBlock */;
val* var11 /* : nullable FFILanguage */;
val* var12 /* : nullable AExternCodeBlock */;
val* var13 /* : nullable CCompilationUnit */;
var_amodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(self) /* n_extern_code_block on <self:AExternPropdef>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 108);
exit(1);
}
var3 = ((short int (*)(val*))(self->class->vft[COLOR_common_ffi__AExternPropdef__ffi_has_been_compiled]))(self) /* ffi_has_been_compiled on <self:AExternPropdef>*/;
if (var3){
goto RET_LABEL;
} else {
}
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_common_ffi__AExternPropdef__ffi_has_been_compiled_61d]))(self, var4) /* ffi_has_been_compiled= on <self:AExternPropdef>*/;
((void (*)(val*))(var_amodule->class->vft[COLOR_common_ffi__AModule__ensure_compile_ffi_wrapper]))(var_amodule) /* ensure_compile_ffi_wrapper on <var_amodule:AModule>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(self) /* n_extern_code_block on <self:AExternPropdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 115);
exit(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var5) /* language on <var5:nullable AExternCodeBlock>*/;
}
var_language = var6;
var7 = NULL;
if (var_language == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 116);
exit(1);
}
var9 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_common_ffi__AModule__present_languages]))(var_amodule) /* present_languages on <var_amodule:AModule>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, var_language) /* add on <var9:HashSet[FFILanguage]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(self) /* n_extern_code_block on <self:AExternPropdef>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 118);
exit(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var10) /* language on <var10:nullable AExternCodeBlock>*/;
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(self) /* n_extern_code_block on <self:AExternPropdef>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 118);
exit(1);
}
var13 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(var_amodule) /* ffi_ccu on <var_amodule:AModule>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 118);
exit(1);
}
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 118);
exit(1);
} else {
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_ffi_base__FFILanguage__compile_extern_method]))(var11, var12, self, var13, var_amodule) /* compile_extern_method on <var11:nullable FFILanguage>*/;
}
RET_LABEL:;
}
/* method common_ffi#AExternPropdef#compile_ffi_method for (self: Object, AModule) */
void VIRTUAL_common_ffi__AExternPropdef__compile_ffi_method(val* self, val* p0) {
common_ffi__AExternPropdef__compile_ffi_method(self, p0);
RET_LABEL:;
}
/* method common_ffi#VerifyNitniCallbacksPhase#process_npropdef for (self: VerifyNitniCallbacksPhase, APropdef) */
void common_ffi__VerifyNitniCallbacksPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable AExternCodeBlock */;
val* var_code_block /* var code_block: nullable AExternCodeBlock */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable FFILanguage */;
val* var_lang /* var lang: nullable FFILanguage */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : ForeignCallbackSet */;
val* var9 /* : Set[NitniCallback] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_callback /* var callback: NitniCallback */;
val* var13 /* : nullable ANode */;
val* var14 /* : nullable ANode */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name;
val* var18 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var_map /* var map: HashMap[FFILanguage, Set[NitniCallback]] */;
val* var19 /* : Collection[Object] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : HashSet[NitniCallback] */;
val* var23 /* : nullable Object */;
var_npropdef = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_common_ffi__VerifyNitniCallbacksPhase__process_npropdef]))(self, p0) /* process_npropdef on <self:VerifyNitniCallbacksPhase>*/;
/* <var_npropdef:APropdef> isa AExternPropdef */
cltype = type_parser_nodes__AExternPropdef.color;
idtype = type_parser_nodes__AExternPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(var_npropdef) /* n_extern_code_block on <var_npropdef:APropdef(AExternPropdef)>*/;
var_code_block = var2;
var3 = NULL;
if (var_code_block == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_code_block->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var_code_block) /* language on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
var_lang = var5;
var6 = NULL;
if (var_lang == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 133);
exit(1);
}
var8 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(var_npropdef) /* foreign_callbacks on <var_npropdef:APropdef(AExternPropdef)>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__all]))(var8) /* all on <var8:ForeignCallbackSet>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Set[NitniCallback]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_callback = var12;
var13 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:APropdef(AExternPropdef)>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 136);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_parser_nodes__ANode__parent]))(var13) /* parent on <var13:nullable ANode>*/;
}
/* <var14:nullable ANode> isa AModule */
cltype16 = type_parser_nodes__AModule.color;
idtype17 = type_parser_nodes__AModule.id;
if(var14 == NULL) {
var15 = 0;
} else {
if(cltype16 >= var14->type->table_size) {
var15 = 0;
} else {
var15 = var14->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
var_class_name = var14 == NULL ? "null" : var14->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 136);
exit(1);
}
var18 = ((val* (*)(val*))(var14->class->vft[COLOR_common_ffi__AModule__ffi_callbacks]))(var14) /* ffi_callbacks on <var14:nullable ANode(AModule)>*/;
var_map = var18;
var19 = ((val* (*)(val*))(var_map->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_map) /* keys on <var_map:HashMap[FFILanguage, Set[NitniCallback]]>*/;
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__Collection__has]))(var19, var_lang) /* has on <var19:Collection[Object](HashMapKeys[FFILanguage, Set[NitniCallback]])>*/;
var21 = !var20;
if (var21){
var22 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__NitniCallback);
((void (*)(val*))(var22->class->vft[COLOR_hash_collection__HashSet__init]))(var22) /* init on <var22:HashSet[NitniCallback]>*/;
CHECK_NEW_hash_collection__HashSet(var22);
((void (*)(val*, val*, val*))(var_map->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_map, var_lang, var22) /* []= on <var_map:HashMap[FFILanguage, Set[NitniCallback]]>*/;
} else {
}
var23 = ((val* (*)(val*, val*))(var_map->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_map, var_lang) /* [] on <var_map:HashMap[FFILanguage, Set[NitniCallback]]>*/;
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var_callback) /* add on <var23:nullable Object(Set[NitniCallback])>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method common_ffi#VerifyNitniCallbacksPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_common_ffi__VerifyNitniCallbacksPhase__process_npropdef(val* self, val* p0) {
common_ffi__VerifyNitniCallbacksPhase__process_npropdef(self, p0);
RET_LABEL:;
}
