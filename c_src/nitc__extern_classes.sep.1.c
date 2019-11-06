#include "nitc__extern_classes.sep.0.h"
/* method extern_classes$ToolContext$extern_classes_typing_phase_ast for (self: ToolContext): Phase */
val* nitc__extern_classes___ToolContext___extern_classes_typing_phase_ast(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__extern_classes__ToolContext___extern_classes_typing_phase_ast].val; /* _extern_classes_typing_phase_ast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_classes_typing_phase_ast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes$ExternClassesTypingPhaseAst$process_nclassdef for (self: ExternClassesTypingPhaseAst, AClassdef) */
void nitc__extern_classes___nitc__extern_classes__ExternClassesTypingPhaseAst___nitc__phase__Phase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable AExternCodeBlock */;
val* var4 /* : nullable AExternCodeBlock */;
val* var_code_block /* var code_block: nullable AExternCodeBlock */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable TKwredef */;
val* var13 /* : nullable TKwredef */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : Location */;
val* var25 /* : Location */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var33 /* : Message */;
val* var34 /* : nullable FFILanguage */;
val* var36 /* : nullable FFILanguage */;
val* var37 /* : ForeignType */;
val* var_ftype /* var ftype: ForeignType */;
val* var38 /* : nullable MClassDef */;
val* var40 /* : nullable MClassDef */;
val* var42 /* : nullable MClassDef */;
val* var44 /* : nullable MClassDef */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
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
{
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var4 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_code_block = var2;
if (var_code_block == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_code_block,((val*)NULL)) on <var_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_code_block,var_other) on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var10 = var_code_block == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var13 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var11,((val*)NULL)) on <var11:nullable TKwredef> */
var_other17 = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_core__kernel__Object___61d_61d]))(var11, var_other17); /* == on <var11:nullable TKwredef(TKwredef)>*/
}
var19 = !var18;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline phase$Phase$toolcontext (self) on <self:ExternClassesTypingPhaseAst> */
var22 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ExternClassesTypingPhaseAst> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var25 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "FFI Error: only the introduction of a class can declare an extern type.";
var29 = (val*)(71l<<2|1);
var30 = (val*)(71l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce = var26;
}
{
var33 = nitc___nitc__ToolContext___error(var20, var23, var26);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline light_ffi_base$AExternCodeBlock$language (var_code_block) on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var36 = var_code_block->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 47);
fatal_exit(1);
} else {
var37 = nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__get_ftype(var34, var_code_block, var_nclassdef);
}
var_ftype = var37;
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var40 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef(AStdClassdef)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 48);
fatal_exit(1);
} else {
{ /* Inline extern_classes$MClassDef$ftype_cache= (var38,var_ftype) on <var38:nullable MClassDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 54);
fatal_exit(1);
}
var38->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_cache].val = var_ftype; /* _ftype_cache on <var38:nullable MClassDef> */
RET_LABEL41:(void)0;
}
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var44 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef(AStdClassdef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 49);
fatal_exit(1);
} else {
{ /* Inline extern_classes$MClassDef$ftype_computed= (var42,1) on <var42:nullable MClassDef> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 55);
fatal_exit(1);
}
var42->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_computed].s = 1; /* _ftype_computed on <var42:nullable MClassDef> */
RET_LABEL45:(void)0;
}
}
RET_LABEL:;
}
/* method extern_classes$MClassDef$ftype_cache for (self: MClassDef): nullable ForeignType */
val* nitc__extern_classes___MClassDef___ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = self->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_cache].val; /* _ftype_cache on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes$MClassDef$ftype_cache= for (self: MClassDef, nullable ForeignType) */
void nitc__extern_classes___MClassDef___ftype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_cache].val = p0; /* _ftype_cache on <self:MClassDef> */
RET_LABEL:;
}
/* method extern_classes$MClassDef$ftype_computed= for (self: MClassDef, Bool) */
void nitc__extern_classes___MClassDef___ftype_computed_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_computed].s = p0; /* _ftype_computed on <self:MClassDef> */
RET_LABEL:;
}
/* method extern_classes$MClassDef$ftype for (self: MClassDef): nullable ForeignType */
val* nitc__extern_classes___MClassDef___ftype(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
val* var3 /* : nullable ForeignType */;
{
{ /* Inline extern_classes$MClassDef$ftype_cache (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_cache].val; /* _ftype_cache on <self:MClassDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes$ExternClassesTypingPhaseModel$process_nclassdef for (self: ExternClassesTypingPhaseModel, AClassdef) */
void nitc__extern_classes___nitc__extern_classes__ExternClassesTypingPhaseModel___nitc__phase__Phase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable MClassDef */;
val* var4 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MClassKind */;
val* var18 /* : MClassKind */;
val* var19 /* : Sys */;
val* var20 /* : MClassKind */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable ForeignType */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
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
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var4 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef(AStdClassdef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_mclassdef = var2;
if (var_mclassdef == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var10 = var_mclassdef == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var13 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_mclass = var11;
{
var14 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var15 = !var14;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$kind (var_mclass) on <var_mclass:MClass> */
var18 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = glob_sys;
{
var20 = nitc__model___core__Sys___extern_kind(var19);
}
{
{ /* Inline kernel$Object$!= (var16,var20) on <var16:MClassKind> */
var_other23 = var20;
{
var24 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___61d_61d]))(var16, var_other23); /* == on <var16:MClassKind>*/
}
var25 = !var24;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
goto RET_LABEL;
} else {
}
{
var26 = nitc__extern_classes___MClass___compute_ftype(var_mclass, self);
}
RET_LABEL:;
}
/* method extern_classes$MClass$ftype_cache for (self: MClass): nullable ForeignType */
val* nitc__extern_classes___MClass___ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes$MClass$ftype_cache= for (self: MClass, nullable ForeignType) */
void nitc__extern_classes___MClass___ftype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val = p0; /* _ftype_cache on <self:MClass> */
RET_LABEL:;
}
/* method extern_classes$MClass$ftype_computed for (self: MClass): Bool */
short int nitc__extern_classes___MClass___ftype_computed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__extern_classes__MClass___ftype_computed].s; /* _ftype_computed on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes$MClass$ftype_computed= for (self: MClass, Bool) */
void nitc__extern_classes___MClass___ftype_computed_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_computed].s = p0; /* _ftype_computed on <self:MClass> */
RET_LABEL:;
}
/* method extern_classes$MClass$ctype for (self: MClass): nullable String */
val* nitc__extern_classes___MClass___ctype(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable ForeignType */;
val* var3 /* : nullable ForeignType */;
val* var4 /* : String */;
{
{ /* Inline extern_classes$MClass$ftype_cache (self) on <self:MClass> */
var3 = self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extern_classes, 91);
fatal_exit(1);
} else {
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__light_ffi_base__ForeignType__ctype]))(var1); /* ctype on <var1:nullable ForeignType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes$MClass$compute_ftype for (self: MClass, ExternClassesTypingPhaseModel): nullable ForeignType */
val* nitc__extern_classes___MClass___compute_ftype(val* self, val* p0) {
val* var /* : nullable ForeignType */;
val* var_v /* var v: ExternClassesTypingPhaseModel */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable ForeignType */;
val* var6 /* : nullable ForeignType */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
short int var26 /* : Bool */;
val* var27 /* : ForeignType */;
val* var30 /* : nullable ForeignType */;
val* var32 /* : nullable ForeignType */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other40 /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
val* var_ftype_b /* var ftype_b: nullable ForeignType */;
val* var44 /* : MModule */;
val* var46 /* : MModule */;
val* var47 /* : POSetElement[MClass] */;
val* var48 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClass] */;
val* var49 /* : Iterator[nullable Object] */;
val* var_50 /* var : Iterator[MClass] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_s /* var s: MClass */;
val* var53 /* : nullable ForeignType */;
val* var_super_ftype /* var super_ftype: nullable ForeignType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : ToolContext */;
val* var72 /* : ToolContext */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : Message */;
var_v = p0;
{
{ /* Inline extern_classes$MClass$ftype_computed (self) on <self:MClass> */
var3 = self->attrs[COLOR_nitc__extern_classes__MClass___ftype_computed].s; /* _ftype_computed on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline extern_classes$MClass$ftype_cache (self) on <self:MClass> */
var6 = self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$kind (self) on <self:MClass> */
var9 = self->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$!= (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
var14 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var_other); /* == on <var7:MClassKind>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var18 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "Pointer";
var22 = (val*)(7l<<2|1);
var23 = (val*)(7l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
var26 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___61d_61d]))(var16, var19); /* == on <var16:String>*/
}
if (var26){
var27 = NEW_nitc__ForeignType(&type_nitc__ForeignType);
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:ForeignType>*/
}
{
{ /* Inline extern_classes$MClass$ftype_cache= (self,var27) on <self:MClass> */
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val = var27; /* _ftype_cache on <self:MClass> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline extern_classes$MClass$ftype_computed= (self,1) on <self:MClass> */
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_computed].s = 1; /* _ftype_computed on <self:MClass> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline extern_classes$MClass$ftype_cache (self) on <self:MClass> */
var32 = self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var = var30;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$intro (self) on <self:MClass> */
var35 = self->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nitc__extern_classes___MClassDef___ftype(var33);
}
var_ftype = var36;
if (var_ftype == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ftype,((val*)NULL)) on <var_ftype:nullable ForeignType> */
var_other40 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ftype,var_other40) on <var_ftype:nullable ForeignType(ForeignType)> */
var43 = var_ftype == var_other40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
var_ftype_b = ((val*)NULL);
{
{ /* Inline model$MClass$intro_mmodule (self) on <self:MClass> */
var46 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nitc___nitc__MClass___in_hierarchy(self, var44);
}
{
var48 = poset___poset__POSetElement___direct_greaters(var47);
}
var_ = var48;
{
var49 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClass]>*/
}
var_50 = var49;
for(;;) {
{
var51 = ((short int(*)(val* self))((((long)var_50&3)?class_info[((long)var_50&3)]:var_50->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_50); /* is_ok on <var_50:Iterator[MClass]>*/
}
if (var51){
} else {
goto BREAK_label;
}
{
var52 = ((val*(*)(val* self))((((long)var_50&3)?class_info[((long)var_50&3)]:var_50->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_50); /* item on <var_50:Iterator[MClass]>*/
}
var_s = var52;
{
var53 = nitc__extern_classes___MClass___compute_ftype(var_s, var_v);
}
var_super_ftype = var53;
if (var_super_ftype == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_super_ftype,((val*)NULL)) on <var_super_ftype:nullable ForeignType> */
var_other = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_super_ftype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_super_ftype, var_other); /* == on <var_super_ftype:nullable ForeignType(ForeignType)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
if (var_ftype_b == NULL) {
var59 = 1; /* is null */
} else {
var59 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ftype_b,((val*)NULL)) on <var_ftype_b:nullable ForeignType> */
var_other40 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ftype_b,var_other40) on <var_ftype_b:nullable ForeignType(ForeignType)> */
var64 = var_ftype_b == var_other40;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
var_ftype_b = var_super_ftype;
goto BREAK_label65;
} else {
{
{ /* Inline kernel$Object$!= (var_super_ftype,var_ftype_b) on <var_super_ftype:nullable ForeignType(ForeignType)> */
var_other = var_ftype_b;
{
var68 = ((short int(*)(val* self, val* p0))(var_super_ftype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_super_ftype, var_other); /* == on <var_super_ftype:nullable ForeignType(ForeignType)>*/
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline phase$Phase$toolcontext (var_v) on <var_v:ExternClassesTypingPhaseModel> */
var72 = var_v->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_v:ExternClassesTypingPhaseModel> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "FFI Error: extern type conflict in `";
var79 = (val*)(36l<<2|1);
var80 = (val*)(36l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "`.";
var87 = (val*)(2l<<2|1);
var88 = (val*)(2l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var74)->values[2]=var84;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var91 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:MClass>*/
}
((struct instance_core__NativeArray*)var74)->values[1]=var91;
{
var92 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
var93 = nitc___nitc__ToolContext___error(var70, ((val*)NULL), var92);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
} else {
}
BREAK_label65: (void)0;
{
((void(*)(val* self))((((long)var_50&3)?class_info[((long)var_50&3)]:var_50->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_50); /* next on <var_50:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_50&3)?class_info[((long)var_50&3)]:var_50->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_50); /* finish on <var_50:Iterator[MClass]>*/
}
var_ftype = var_ftype_b;
} else {
}
{
{ /* Inline extern_classes$MClass$ftype_cache= (self,var_ftype) on <self:MClass> */
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_cache].val = var_ftype; /* _ftype_cache on <self:MClass> */
RET_LABEL94:(void)0;
}
}
{
{ /* Inline extern_classes$MClass$ftype_computed= (self,1) on <self:MClass> */
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_computed].s = 1; /* _ftype_computed on <self:MClass> */
RET_LABEL95:(void)0;
}
}
var = var_ftype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
