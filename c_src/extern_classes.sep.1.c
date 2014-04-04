#include "extern_classes.sep.0.h"
/* method extern_classes#ToolContext#extern_classes_typing_phase_ast for (self: ToolContext): Phase */
val* extern_classes__ToolContext__extern_classes_typing_phase_ast(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_ast].val; /* @extern_classes_typing_phase_ast on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @extern_classes_typing_phase_ast");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_ast for (self: Object): Phase */
val* VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_ast(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = extern_classes__ToolContext__extern_classes_typing_phase_ast(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_ast= for (self: ToolContext, Phase) */
void extern_classes__ToolContext__extern_classes_typing_phase_ast_61d(val* self, val* p0) {
self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_ast].val = p0; /* @extern_classes_typing_phase_ast on <self:ToolContext> */
RET_LABEL:;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_ast= for (self: Object, Phase) */
void VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_ast_61d(val* self, val* p0) {
extern_classes__ToolContext__extern_classes_typing_phase_ast_61d(self, p0);
RET_LABEL:;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_model for (self: ToolContext): Phase */
val* extern_classes__ToolContext__extern_classes_typing_phase_model(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_model].val; /* @extern_classes_typing_phase_model on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @extern_classes_typing_phase_model");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_model for (self: Object): Phase */
val* VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_model(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = extern_classes__ToolContext__extern_classes_typing_phase_model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_model= for (self: ToolContext, Phase) */
void extern_classes__ToolContext__extern_classes_typing_phase_model_61d(val* self, val* p0) {
self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_model].val = p0; /* @extern_classes_typing_phase_model on <self:ToolContext> */
RET_LABEL:;
}
/* method extern_classes#ToolContext#extern_classes_typing_phase_model= for (self: Object, Phase) */
void VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_model_61d(val* self, val* p0) {
extern_classes__ToolContext__extern_classes_typing_phase_model_61d(self, p0);
RET_LABEL:;
}
/* method extern_classes#ExternClassesTypingPhaseAst#process_nclassdef for (self: ExternClassesTypingPhaseAst, AClassdef) */
void extern_classes__ExternClassesTypingPhaseAst__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable AExternCodeBlock */;
val* var_code_block /* var code_block: nullable AExternCodeBlock */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable TKwredef */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : Location */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : nullable FFILanguage */;
val* var15 /* : ForeignType */;
val* var_ftype /* var ftype: ForeignType */;
short int var16 /* : Bool */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var = 0;
} else {
var = var_nclassdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
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
var5 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_kwredef]))(var_nclassdef) /* n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:ExternClassesTypingPhaseAst>*/;
var9 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_nclassdef) /* location on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (varonce) {
var10 = varonce;
} else {
var11 = "Only the introduction of a class can specify an extern type.";
var12 = 60;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_toolcontext__ToolContext__error]))(var8, var9, var10) /* error on <var8:ToolContext>*/;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*))(var_code_block->class->vft[COLOR_ffi_base__AExternCodeBlock__language]))(var_code_block) /* language on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 45);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*, val*, val*))(var14->class->vft[COLOR_ffi_base__FFILanguage__get_ftype]))(var14, var_code_block, var_nclassdef) /* get_ftype on <var14:nullable FFILanguage>*/;
}
var_ftype = var15;
((void (*)(val*, val*))(var_nclassdef->class->vft[COLOR_extern_classes__AClassdef__ftype_cache_61d]))(var_nclassdef, var_ftype) /* ftype_cache= on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var16 = 1;
((void (*)(val*, short int))(var_nclassdef->class->vft[COLOR_extern_classes__AClassdef__ftype_computed_61d]))(var_nclassdef, var16) /* ftype_computed= on <var_nclassdef:AClassdef(AStdClassdef)>*/;
RET_LABEL:;
}
/* method extern_classes#ExternClassesTypingPhaseAst#process_nclassdef for (self: Object, AClassdef) */
void VIRTUAL_extern_classes__ExternClassesTypingPhaseAst__process_nclassdef(val* self, val* p0) {
extern_classes__ExternClassesTypingPhaseAst__process_nclassdef(self, p0);
RET_LABEL:;
}
/* method extern_classes#AClassdef#ftype_cache for (self: AClassdef): nullable ForeignType */
val* extern_classes__AClassdef__ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = self->attrs[COLOR_extern_classes__AClassdef___64dftype_cache].val; /* @ftype_cache on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#AClassdef#ftype_cache for (self: Object): nullable ForeignType */
val* VIRTUAL_extern_classes__AClassdef__ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = extern_classes__AClassdef__ftype_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#AClassdef#ftype_cache= for (self: AClassdef, nullable ForeignType) */
void extern_classes__AClassdef__ftype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_extern_classes__AClassdef___64dftype_cache].val = p0; /* @ftype_cache on <self:AClassdef> */
RET_LABEL:;
}
/* method extern_classes#AClassdef#ftype_cache= for (self: Object, nullable ForeignType) */
void VIRTUAL_extern_classes__AClassdef__ftype_cache_61d(val* self, val* p0) {
extern_classes__AClassdef__ftype_cache_61d(self, p0);
RET_LABEL:;
}
/* method extern_classes#AClassdef#ftype_computed for (self: AClassdef): Bool */
short int extern_classes__AClassdef__ftype_computed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_extern_classes__AClassdef___64dftype_computed].s; /* @ftype_computed on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#AClassdef#ftype_computed for (self: Object): Bool */
short int VIRTUAL_extern_classes__AClassdef__ftype_computed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = extern_classes__AClassdef__ftype_computed(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#AClassdef#ftype_computed= for (self: AClassdef, Bool) */
void extern_classes__AClassdef__ftype_computed_61d(val* self, short int p0) {
self->attrs[COLOR_extern_classes__AClassdef___64dftype_computed].s = p0; /* @ftype_computed on <self:AClassdef> */
RET_LABEL:;
}
/* method extern_classes#AClassdef#ftype_computed= for (self: Object, Bool) */
void VIRTUAL_extern_classes__AClassdef__ftype_computed_61d(val* self, short int p0) {
extern_classes__AClassdef__ftype_computed_61d(self, p0);
RET_LABEL:;
}
/* method extern_classes#AClassdef#ftype for (self: AClassdef): nullable ForeignType */
val* extern_classes__AClassdef__ftype(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__AClassdef__ftype_cache]))(self) /* ftype_cache on <self:AClassdef>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes#AClassdef#ftype for (self: Object): nullable ForeignType */
val* VIRTUAL_extern_classes__AClassdef__ftype(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = extern_classes__AClassdef__ftype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#ExternClassesTypingPhaseModel#process_nclassdef for (self: ExternClassesTypingPhaseModel, AClassdef) */
void extern_classes__ExternClassesTypingPhaseModel__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var3 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var4 /* : MClassDef */;
short int var5 /* : Bool */;
val* var6 /* : MClassKind */;
val* var7 /* : MClassKind */;
short int var8 /* : Bool */;
val* var9 /* : nullable ForeignType */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var = 0;
} else {
var = var_nclassdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var_mclassdef = var2;
var3 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclass]))(var_nclassdef) /* mclass on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var_mclass = var3;
if (var_mclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 73);
show_backtrace(1);
} else {
var4 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:nullable MClass>*/;
}
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___33d_61d]))(var4, var_mclassdef) /* != on <var4:MClassDef>*/;
if (var5){
goto RET_LABEL;
} else {
}
if (var_mclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 75);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:nullable MClass>*/;
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:ExternClassesTypingPhaseModel>*/;
var8 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___33d_61d]))(var6, var7) /* != on <var6:MClassKind>*/;
if (var8){
goto RET_LABEL;
} else {
}
if (var_mclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 77);
show_backtrace(1);
} else {
var9 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_extern_classes__MClass__compute_ftype]))(var_mclass, self) /* compute_ftype on <var_mclass:nullable MClass>*/;
}
var9;
RET_LABEL:;
}
/* method extern_classes#ExternClassesTypingPhaseModel#process_nclassdef for (self: Object, AClassdef) */
void VIRTUAL_extern_classes__ExternClassesTypingPhaseModel__process_nclassdef(val* self, val* p0) {
extern_classes__ExternClassesTypingPhaseModel__process_nclassdef(self, p0);
RET_LABEL:;
}
/* method extern_classes#MClass#ftype_cache for (self: MClass): nullable ForeignType */
val* extern_classes__MClass__ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = self->attrs[COLOR_extern_classes__MClass___64dftype_cache].val; /* @ftype_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype_cache for (self: Object): nullable ForeignType */
val* VIRTUAL_extern_classes__MClass__ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = extern_classes__MClass__ftype_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype_cache= for (self: MClass, nullable ForeignType) */
void extern_classes__MClass__ftype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_extern_classes__MClass___64dftype_cache].val = p0; /* @ftype_cache on <self:MClass> */
RET_LABEL:;
}
/* method extern_classes#MClass#ftype_cache= for (self: Object, nullable ForeignType) */
void VIRTUAL_extern_classes__MClass__ftype_cache_61d(val* self, val* p0) {
extern_classes__MClass__ftype_cache_61d(self, p0);
RET_LABEL:;
}
/* method extern_classes#MClass#ftype_computed for (self: MClass): Bool */
short int extern_classes__MClass__ftype_computed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_extern_classes__MClass___64dftype_computed].s; /* @ftype_computed on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype_computed for (self: Object): Bool */
short int VIRTUAL_extern_classes__MClass__ftype_computed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = extern_classes__MClass__ftype_computed(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype_computed= for (self: MClass, Bool) */
void extern_classes__MClass__ftype_computed_61d(val* self, short int p0) {
self->attrs[COLOR_extern_classes__MClass___64dftype_computed].s = p0; /* @ftype_computed on <self:MClass> */
RET_LABEL:;
}
/* method extern_classes#MClass#ftype_computed= for (self: Object, Bool) */
void VIRTUAL_extern_classes__MClass__ftype_computed_61d(val* self, short int p0) {
extern_classes__MClass__ftype_computed_61d(self, p0);
RET_LABEL:;
}
/* method extern_classes#MClass#ftype for (self: MClass): nullable ForeignType */
val* extern_classes__MClass__ftype(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_cache]))(self) /* ftype_cache on <self:MClass>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype for (self: Object): nullable ForeignType */
val* VIRTUAL_extern_classes__MClass__ftype(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = extern_classes__MClass__ftype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ctype for (self: MClass): nullable String */
val* extern_classes__MClass__ctype(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable ForeignType */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_cache]))(self) /* ftype_cache on <self:MClass>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/extern_classes.nit", 88);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_ffi_base__ForeignType__ctype]))(var1) /* ctype on <var1:nullable ForeignType>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ctype for (self: Object): nullable String */
val* VIRTUAL_extern_classes__MClass__ctype(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = extern_classes__MClass__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#compute_ftype for (self: MClass, ExternClassesTypingPhaseModel): nullable ForeignType */
val* extern_classes__MClass__compute_ftype(val* self, val* p0) {
val* var /* : nullable ForeignType */;
val* var_v /* var v: ExternClassesTypingPhaseModel */;
short int var1 /* : Bool */;
val* var2 /* : nullable ForeignType */;
val* var3 /* : MClassKind */;
val* var4 /* : MClassKind */;
short int var5 /* : Bool */;
val* var6 /* : null */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
short int var12 /* : Bool */;
val* var13 /* : ForeignType */;
short int var14 /* : Bool */;
val* var15 /* : nullable ForeignType */;
val* var16 /* : ToolContext */;
val* var17 /* : ModelBuilder */;
val* var18 /* : HashMap[MClassDef, AClassdef] */;
val* var19 /* : MClassDef */;
val* var20 /* : nullable Object */;
val* var_intro_nclassdef /* var intro_nclassdef: AClassdef */;
val* var21 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : null */;
val* var_ftype_b /* var ftype_b: nullable ForeignType */;
val* var25 /* : MClassDef */;
val* var26 /* : MModule */;
val* var27 /* : POSetElement[MClass] */;
val* var28 /* : Collection[Object] */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_s /* var s: MClass */;
val* var32 /* : nullable ForeignType */;
val* var_super_ftype /* var super_ftype: nullable ForeignType */;
val* var33 /* : null */;
short int var34 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : ToolContext */;
val* var39 /* : null */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
val* var49 /* : null */;
short int var50 /* : Bool */;
var_v = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_computed]))(self) /* ftype_computed on <self:MClass>*/;
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_cache]))(self) /* ftype_cache on <self:MClass>*/;
var = var2;
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__kind]))(self) /* kind on <self:MClass>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MClass>*/;
var5 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___33d_61d]))(var3, var4) /* != on <var3:MClassKind>*/;
if (var5){
var6 = NULL;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__name]))(self) /* name on <self:MClass>*/;
if (varonce) {
var8 = varonce;
} else {
var9 = "Pointer";
var10 = 7;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var12 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var8) /* == on <var7:String>*/;
if (var12){
var13 = NEW_ffi_base__ForeignType(&type_ffi_base__ForeignType);
((void (*)(val*))(var13->class->vft[COLOR_ffi_base__ForeignType__init]))(var13) /* init on <var13:ForeignType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_cache_61d]))(self, var13) /* ftype_cache= on <self:MClass>*/;
var14 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_extern_classes__MClass__ftype_computed_61d]))(self, var14) /* ftype_computed= on <self:MClass>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_cache]))(self) /* ftype_cache on <self:MClass>*/;
var = var15;
goto RET_LABEL;
} else {
}
var16 = ((val* (*)(val*))(var_v->class->vft[COLOR_phase__Phase__toolcontext]))(var_v) /* toolcontext on <var_v:ExternClassesTypingPhaseModel>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var16) /* modelbuilder on <var16:ToolContext>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var17) /* mclassdef2nclassdef on <var17:ModelBuilder>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__intro]))(self) /* intro on <self:MClass>*/;
var20 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var18, var19) /* [] on <var18:HashMap[MClassDef, AClassdef]>*/;
var_intro_nclassdef = var20;
var21 = ((val* (*)(val*))(var_intro_nclassdef->class->vft[COLOR_extern_classes__AClassdef__ftype]))(var_intro_nclassdef) /* ftype on <var_intro_nclassdef:AClassdef>*/;
var_ftype = var21;
var22 = NULL;
if (var_ftype == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (var23){
var24 = NULL;
var_ftype_b = var24;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__intro]))(self) /* intro on <self:MClass>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_model__MClassDef__mmodule]))(var25) /* mmodule on <var25:MClassDef>*/;
var27 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model__MClass__in_hierarchy]))(self, var26) /* in_hierarchy on <self:MClass>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var27) /* direct_greaters on <var27:POSetElement[MClass]>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:Collection[Object](Collection[MClass])>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_s = var31;
var32 = ((val* (*)(val*, val*))(var_s->class->vft[COLOR_extern_classes__MClass__compute_ftype]))(var_s, var_v) /* compute_ftype on <var_s:MClass>*/;
var_super_ftype = var32;
var33 = NULL;
if (var_super_ftype == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (var34){
var35 = NULL;
if (var_ftype_b == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (var36){
var_ftype_b = var_super_ftype;
goto CONTINUE_label;
} else {
var37 = ((short int (*)(val*, val*))(var_super_ftype->class->vft[COLOR_kernel__Object___33d_61d]))(var_super_ftype, var_ftype_b) /* != on <var_super_ftype:nullable ForeignType(ForeignType)>*/;
if (var37){
var38 = ((val* (*)(val*))(var_v->class->vft[COLOR_phase__Phase__toolcontext]))(var_v) /* toolcontext on <var_v:ExternClassesTypingPhaseModel>*/;
var39 = NULL;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Extern type conflict in ";
var43 = 24;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 2;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) self;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*, val*))(var38->class->vft[COLOR_toolcontext__ToolContext__error]))(var38, var39, var48) /* error on <var38:ToolContext>*/;
var49 = NULL;
var = var49;
goto RET_LABEL;
} else {
}
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var_ftype = var_ftype_b;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_extern_classes__MClass__ftype_cache_61d]))(self, var_ftype) /* ftype_cache= on <self:MClass>*/;
var50 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_extern_classes__MClass__ftype_computed_61d]))(self, var50) /* ftype_computed= on <self:MClass>*/;
var = var_ftype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#compute_ftype for (self: Object, ExternClassesTypingPhaseModel): nullable ForeignType */
val* VIRTUAL_extern_classes__MClass__compute_ftype(val* self, val* p0) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = extern_classes__MClass__compute_ftype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
