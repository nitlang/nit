#include "nit__extern_classes.sep.0.h"
/* method extern_classes#ToolContext#extern_classes_typing_phase_ast for (self: ToolContext): Phase */
val* nit__extern_classes___ToolContext___extern_classes_typing_phase_ast(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__extern_classes__ToolContext___extern_classes_typing_phase_ast].val; /* _extern_classes_typing_phase_ast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_classes_typing_phase_ast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#ExternClassesTypingPhaseAst#process_nclassdef for (self: ExternClassesTypingPhaseAst, AClassdef) */
void nit__extern_classes___nit__extern_classes__ExternClassesTypingPhaseAst___nit__phase__Phase__process_nclassdef(val* self, val* p0) {
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
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : Message */;
val* var30 /* : nullable FFILanguage */;
val* var32 /* : nullable FFILanguage */;
val* var33 /* : ForeignType */;
val* var_ftype /* var ftype: ForeignType */;
val* var34 /* : nullable MClassDef */;
val* var36 /* : nullable MClassDef */;
val* var38 /* : nullable MClassDef */;
val* var40 /* : nullable MClassDef */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
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
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var4 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
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
{ /* Inline kernel#Object#== (var_code_block,((val*)NULL)) on <var_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_code_block,var_other) on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
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
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var13 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)> */
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
{ /* Inline kernel#Object#!= (var11,((val*)NULL)) on <var11:nullable TKwredef> */
var_other17 = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_other17); /* == on <var11:nullable TKwredef(TKwredef)>*/
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
{ /* Inline phase#Phase#toolcontext (self) on <self:ExternClassesTypingPhaseAst> */
var22 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ExternClassesTypingPhaseAst> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var25 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
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
var28 = standard___standard__NativeString___to_s_with_length(var27, 71l);
var26 = var28;
varonce = var26;
}
{
var29 = nit___nit__ToolContext___error(var20, var23, var26);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline light_ffi_base#AExternCodeBlock#language (var_code_block) on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var32 = var_code_block->attrs[COLOR_nit__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 47);
fatal_exit(1);
} else {
var33 = nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__get_ftype(var30, var_code_block, var_nclassdef);
}
var_ftype = var33;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var36 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef(AStdClassdef)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 48);
fatal_exit(1);
} else {
{ /* Inline extern_classes#MClassDef#ftype_cache= (var34,var_ftype) on <var34:nullable MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 54);
fatal_exit(1);
}
var34->attrs[COLOR_nit__extern_classes__MClassDef___ftype_cache].val = var_ftype; /* _ftype_cache on <var34:nullable MClassDef> */
RET_LABEL37:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var40 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef(AStdClassdef)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 49);
fatal_exit(1);
} else {
{ /* Inline extern_classes#MClassDef#ftype_computed= (var38,1) on <var38:nullable MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 55);
fatal_exit(1);
}
var38->attrs[COLOR_nit__extern_classes__MClassDef___ftype_computed].s = 1; /* _ftype_computed on <var38:nullable MClassDef> */
RET_LABEL41:(void)0;
}
}
RET_LABEL:;
}
/* method extern_classes#MClassDef#ftype_cache for (self: MClassDef): nullable ForeignType */
val* nit__extern_classes___MClassDef___ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = self->attrs[COLOR_nit__extern_classes__MClassDef___ftype_cache].val; /* _ftype_cache on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClassDef#ftype_cache= for (self: MClassDef, nullable ForeignType) */
void nit__extern_classes___MClassDef___ftype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__extern_classes__MClassDef___ftype_cache].val = p0; /* _ftype_cache on <self:MClassDef> */
RET_LABEL:;
}
/* method extern_classes#MClassDef#ftype_computed= for (self: MClassDef, Bool) */
void nit__extern_classes___MClassDef___ftype_computed_61d(val* self, short int p0) {
self->attrs[COLOR_nit__extern_classes__MClassDef___ftype_computed].s = p0; /* _ftype_computed on <self:MClassDef> */
RET_LABEL:;
}
/* method extern_classes#MClassDef#ftype for (self: MClassDef): nullable ForeignType */
val* nit__extern_classes___MClassDef___ftype(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
val* var3 /* : nullable ForeignType */;
{
{ /* Inline extern_classes#MClassDef#ftype_cache (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nit__extern_classes__MClassDef___ftype_cache].val; /* _ftype_cache on <self:MClassDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes#ExternClassesTypingPhaseModel#process_nclassdef for (self: ExternClassesTypingPhaseModel, AClassdef) */
void nit__extern_classes___nit__extern_classes__ExternClassesTypingPhaseModel___nit__phase__Phase__process_nclassdef(val* self, val* p0) {
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
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
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
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var4 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef(AStdClassdef)> */
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
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
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
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var13 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_mclass = var11;
{
var14 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var15 = !var14;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var18 = var_mclass->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = glob_sys;
{
var20 = nit__model___standard__Sys___extern_kind(var19);
}
{
{ /* Inline kernel#Object#!= (var16,var20) on <var16:MClassKind> */
var_other23 = var20;
{
var24 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_other23); /* == on <var16:MClassKind>*/
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
var26 = nit__extern_classes___MClass___compute_ftype(var_mclass, self);
}
RET_LABEL:;
}
/* method extern_classes#MClass#ftype_cache for (self: MClass): nullable ForeignType */
val* nit__extern_classes___MClass___ftype_cache(val* self) {
val* var /* : nullable ForeignType */;
val* var1 /* : nullable ForeignType */;
var1 = self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype_cache= for (self: MClass, nullable ForeignType) */
void nit__extern_classes___MClass___ftype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val = p0; /* _ftype_cache on <self:MClass> */
RET_LABEL:;
}
/* method extern_classes#MClass#ftype_computed for (self: MClass): Bool */
short int nit__extern_classes___MClass___ftype_computed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__extern_classes__MClass___ftype_computed].s; /* _ftype_computed on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#ftype_computed= for (self: MClass, Bool) */
void nit__extern_classes___MClass___ftype_computed_61d(val* self, short int p0) {
self->attrs[COLOR_nit__extern_classes__MClass___ftype_computed].s = p0; /* _ftype_computed on <self:MClass> */
RET_LABEL:;
}
/* method extern_classes#MClass#ctype for (self: MClass): nullable String */
val* nit__extern_classes___MClass___ctype(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable ForeignType */;
val* var3 /* : nullable ForeignType */;
val* var4 /* : String */;
{
{ /* Inline extern_classes#MClass#ftype_cache (self) on <self:MClass> */
var3 = self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 91);
fatal_exit(1);
} else {
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__light_ffi_base__ForeignType__ctype]))(var1); /* ctype on <var1:nullable ForeignType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method extern_classes#MClass#compute_ftype for (self: MClass, ExternClassesTypingPhaseModel): nullable ForeignType */
val* nit__extern_classes___MClass___compute_ftype(val* self, val* p0) {
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
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
short int var22 /* : Bool */;
val* var23 /* : ForeignType */;
val* var26 /* : nullable ForeignType */;
val* var28 /* : nullable ForeignType */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var_ftype_b /* var ftype_b: nullable ForeignType */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : POSetElement[MClass] */;
val* var47 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClass] */;
val* var48 /* : Iterator[nullable Object] */;
val* var_49 /* var : Iterator[MClass] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_s /* var s: MClass */;
val* var52 /* : nullable ForeignType */;
val* var_super_ftype /* var super_ftype: nullable ForeignType */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : ToolContext */;
val* var70 /* : ToolContext */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : Message */;
var_v = p0;
{
{ /* Inline extern_classes#MClass#ftype_computed (self) on <self:MClass> */
var3 = self->attrs[COLOR_nit__extern_classes__MClass___ftype_computed].s; /* _ftype_computed on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline extern_classes#MClass#ftype_cache (self) on <self:MClass> */
var6 = self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#kind (self) on <self:MClass> */
var9 = self->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nit__model___standard__Sys___extern_kind(var10);
}
{
{ /* Inline kernel#Object#!= (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
var14 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var_other); /* == on <var7:MClassKind>*/
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
{ /* Inline model#MClass#name (self) on <self:MClass> */
var18 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
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
var21 = standard___standard__NativeString___to_s_with_length(var20, 7l);
var19 = var21;
varonce = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var19); /* == on <var16:String>*/
}
if (var22){
var23 = NEW_nit__ForeignType(&type_nit__ForeignType);
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:ForeignType>*/
}
{
{ /* Inline extern_classes#MClass#ftype_cache= (self,var23) on <self:MClass> */
self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val = var23; /* _ftype_cache on <self:MClass> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline extern_classes#MClass#ftype_computed= (self,1) on <self:MClass> */
self->attrs[COLOR_nit__extern_classes__MClass___ftype_computed].s = 1; /* _ftype_computed on <self:MClass> */
RET_LABEL25:(void)0;
}
}
{
{ /* Inline extern_classes#MClass#ftype_cache (self) on <self:MClass> */
var28 = self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val; /* _ftype_cache on <self:MClass> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#intro (self) on <self:MClass> */
var31 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nit__extern_classes___MClassDef___ftype(var29);
}
var_ftype = var32;
if (var_ftype == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ftype,((val*)NULL)) on <var_ftype:nullable ForeignType> */
var_other36 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ftype,var_other36) on <var_ftype:nullable ForeignType(ForeignType)> */
var39 = var_ftype == var_other36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
var_ftype_b = ((val*)NULL);
{
{ /* Inline model#MClass#intro (self) on <self:MClass> */
var42 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var40) on <var40:MClassDef> */
var45 = var40->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var40:MClassDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = nit___nit__MClass___in_hierarchy(self, var43);
}
{
var47 = poset___poset__POSetElement___direct_greaters(var46);
}
var_ = var47;
{
var48 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClass]>*/
}
var_49 = var48;
for(;;) {
{
var50 = ((short int(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_49); /* is_ok on <var_49:Iterator[MClass]>*/
}
if (var50){
{
var51 = ((val*(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_49); /* item on <var_49:Iterator[MClass]>*/
}
var_s = var51;
{
var52 = nit__extern_classes___MClass___compute_ftype(var_s, var_v);
}
var_super_ftype = var52;
if (var_super_ftype == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_super_ftype,((val*)NULL)) on <var_super_ftype:nullable ForeignType> */
var_other = ((val*)NULL);
{
var56 = ((short int(*)(val* self, val* p0))(var_super_ftype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_super_ftype, var_other); /* == on <var_super_ftype:nullable ForeignType(ForeignType)>*/
}
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
if (var_ftype_b == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ftype_b,((val*)NULL)) on <var_ftype_b:nullable ForeignType> */
var_other36 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ftype_b,var_other36) on <var_ftype_b:nullable ForeignType(ForeignType)> */
var63 = var_ftype_b == var_other36;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
var_ftype_b = var_super_ftype;
goto BREAK_label;
} else {
{
{ /* Inline kernel#Object#!= (var_super_ftype,var_ftype_b) on <var_super_ftype:nullable ForeignType(ForeignType)> */
var_other = var_ftype_b;
{
var66 = ((short int(*)(val* self, val* p0))(var_super_ftype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_super_ftype, var_other); /* == on <var_super_ftype:nullable ForeignType(ForeignType)>*/
}
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline phase#Phase#toolcontext (var_v) on <var_v:ExternClassesTypingPhaseModel> */
var70 = var_v->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_v:ExternClassesTypingPhaseModel> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "FFI Error: extern type conflict in `";
var76 = standard___standard__NativeString___to_s_with_length(var75, 36l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "`.";
var80 = standard___standard__NativeString___to_s_with_length(var79, 2l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var72)->values[2]=var78;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var81 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MClass>*/
}
((struct instance_standard__NativeArray*)var72)->values[1]=var81;
{
var82 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
var83 = nit___nit__ToolContext___error(var68, ((val*)NULL), var82);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
}
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_49); /* next on <var_49:Iterator[MClass]>*/
}
} else {
goto BREAK_label84;
}
}
BREAK_label84: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_49); /* finish on <var_49:Iterator[MClass]>*/
}
var_ftype = var_ftype_b;
} else {
}
{
{ /* Inline extern_classes#MClass#ftype_cache= (self,var_ftype) on <self:MClass> */
self->attrs[COLOR_nit__extern_classes__MClass___ftype_cache].val = var_ftype; /* _ftype_cache on <self:MClass> */
RET_LABEL85:(void)0;
}
}
{
{ /* Inline extern_classes#MClass#ftype_computed= (self,1) on <self:MClass> */
self->attrs[COLOR_nit__extern_classes__MClass___ftype_computed].s = 1; /* _ftype_computed on <self:MClass> */
RET_LABEL86:(void)0;
}
}
var = var_ftype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
