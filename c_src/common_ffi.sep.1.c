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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 44);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 47);
show_backtrace(1);
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
val* var12 /* : Template */;
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
val* var28 /* : ANodes[AClassdef] */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var34 /* : nullable AExternCodeBlock */;
val* var35 /* : null */;
short int var36 /* : Bool */;
val* var37 /* : nullable MModule */;
short int var38 /* : Bool */;
val* var39 /* : nullable AExternCodeBlock */;
val* var40 /* : nullable FFILanguage */;
val* var_language41 /* var language: nullable FFILanguage */;
val* var42 /* : null */;
short int var43 /* : Bool */;
val* var44 /* : HashSet[FFILanguage] */;
val* var45 /* : nullable AExternCodeBlock */;
val* var46 /* : nullable FFILanguage */;
val* var47 /* : nullable AExternCodeBlock */;
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 63);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 68);
show_backtrace(1);
} else {
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_mmodule__MModule__name]))(var17) /* name on <var17:nullable MModule>*/;
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
}
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
((void (*)(val*, val*))(var12->class->vft[COLOR_template__Template__add]))(var12, var27) /* add on <var12:Template>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(self) /* n_classdefs on <self:AModule>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:ANodes[AClassdef]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_nclassdef = var31;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var33 = 0;
} else {
var33 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var33;
if (var33){
var34 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var35 = NULL;
if (var34 == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
var32 = var36;
} else {
var32 = var_;
}
if (var32){
var37 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__AModule__mmodule]))(self) /* mmodule on <self:AModule>*/;
var38 = 1;
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 73);
show_backtrace(1);
} else {
((void (*)(val*, short int))(var37->class->vft[COLOR_common_ffi__MModule__uses_ffi_61d]))(var37, var38) /* uses_ffi= on <var37:nullable MModule>*/;
}
var39 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var39 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 74);
show_backtrace(1);
} else {
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var39) /* language on <var39:nullable AExternCodeBlock>*/;
}
var_language41 = var40;
var42 = NULL;
if (var_language41 == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 75);
show_backtrace(1);
}
var44 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__present_languages]))(self) /* present_languages on <self:AModule>*/;
((void (*)(val*, val*))(var44->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var44, var_language41) /* add on <var44:HashSet[FFILanguage]>*/;
var45 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 77);
show_backtrace(1);
} else {
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var45) /* language on <var45:nullable AExternCodeBlock>*/;
}
var47 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var47 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 78);
show_backtrace(1);
}
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 77);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*, val*, val*))(var46->class->vft[COLOR_ffi_base__FFILanguage__compile_extern_class]))(var46, var47, var_nclassdef, var_ffi_ccu, self) /* compile_extern_class on <var46:nullable FFILanguage>*/;
}
} else {
}
CONTINUE_label48: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label48: (void)0;
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
val* var14 /* : nullable MModule */;
val* var15 /* : Array[MModule] */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_mod /* var mod: MModule */;
short int var19 /* : Bool */;
val* var20 /* : nullable CCompilationUnit */;
val* var21 /* : Template */;
static val* varonce;
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
val* var37 /* : nullable CCompilationUnit */;
val* var38 /* : nullable CCompilationUnit */;
val* var39 /* : Array[String] */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_filename /* var filename: String */;
val* var43 /* : Array[ExternFile] */;
val* var44 /* : ExternCFile */;
val* var45 /* : String */;
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 90);
show_backtrace(1);
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
var14 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__AModule__mmodule]))(self) /* mmodule on <self:AModule>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 97);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_header_dependency__MModule__header_dependencies]))(var14) /* header_dependencies on <var14:nullable MModule>*/;
}
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Collection__iterator]))(var15) /* iterator on <var15:Array[MModule]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_mod = var18;
var19 = ((short int (*)(val*))(var_mod->class->vft[COLOR_common_ffi__MModule__uses_ffi]))(var_mod) /* uses_ffi on <var_mod:MModule>*/;
if (var19){
var20 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 98);
show_backtrace(1);
} else {
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var20) /* header_custom on <var20:nullable CCompilationUnit>*/;
}
if (varonce) {
var22 = varonce;
} else {
var23 = "#include \"";
var24 = 10;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
var26 = ((val* (*)(val*))(var_mod->class->vft[COLOR_mmodule__MModule__name]))(var_mod) /* name on <var_mod:MModule>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "._ffi.h\"\n";
var30 = 9;
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
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_template__Template__add]))(var21, var35) /* add on <var21:Template>*/;
} else {
}
CONTINUE_label36: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label36: (void)0;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 101);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var37->class->vft[COLOR_ffi_base__CCompilationUnit__write_as_impl]))(var37, self, var_compdir) /* write_as_impl on <var37:nullable CCompilationUnit>*/;
}
var38 = ((val* (*)(val*))(self->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(self) /* ffi_ccu on <self:AModule>*/;
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 102);
show_backtrace(1);
} else {
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_c_tools__CCompilationUnit__files]))(var38) /* files on <var38:nullable CCompilationUnit>*/;
}
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Collection__iterator]))(var39) /* iterator on <var39:Array[String]>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var_filename = var42;
var43 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AModule__ffi_files]))(self) /* ffi_files on <self:AModule>*/;
var44 = NEW_c__ExternCFile(&type_c__ExternCFile);
var45 = ((val* (*)(val*))(self->class->vft[COLOR_c__AModule__c_compiler_options]))(self) /* c_compiler_options on <self:AModule>*/;
((void (*)(val*, val*, val*))(var44->class->vft[COLOR_c__ExternCFile__init]))(var44, var_filename, var45) /* init on <var44:ExternCFile>*/;
((void (*)(val*, val*))(var43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var43, var44) /* add on <var43:Array[ExternFile]>*/;
CONTINUE_label46: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label46: (void)0;
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 112);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 119);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 120);
show_backtrace(1);
}
var9 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_common_ffi__AModule__present_languages]))(var_amodule) /* present_languages on <var_amodule:AModule>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, var_language) /* add on <var9:HashSet[FFILanguage]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(self) /* n_extern_code_block on <self:AExternPropdef>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 122);
show_backtrace(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var10) /* language on <var10:nullable AExternCodeBlock>*/;
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(self) /* n_extern_code_block on <self:AExternPropdef>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 123);
show_backtrace(1);
}
var13 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_common_ffi__AModule__ffi_ccu]))(var_amodule) /* ffi_ccu on <var_amodule:AModule>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 123);
show_backtrace(1);
}
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 122);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 138);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 142);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/common_ffi.nit", 142);
show_backtrace(1);
}
var18 = ((val* (*)(val*))(var14->class->vft[COLOR_common_ffi__AModule__ffi_callbacks]))(var14) /* ffi_callbacks on <var14:nullable ANode(AModule)>*/;
var_map = var18;
var19 = ((val* (*)(val*))(var_map->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_map) /* keys on <var_map:HashMap[FFILanguage, Set[NitniCallback]]>*/;
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__Collection__has]))(var19, var_lang) /* has on <var19:Collection[Object](HashMapKeys[FFILanguage, Set[NitniCallback]])>*/;
var21 = !var20;
if (var21){
var22 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__NitniCallback);
((void (*)(val*))(var22->class->vft[COLOR_hash_collection__HashSet__init]))(var22) /* init on <var22:HashSet[NitniCallback]>*/;
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
