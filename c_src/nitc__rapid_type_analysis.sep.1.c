#include "nitc__rapid_type_analysis.sep.0.h"
/* method rapid_type_analysis$ModelBuilder$do_rapid_type_analysis for (self: ModelBuilder, MModule): RapidTypeAnalysis */
val* nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0) {
val* var /* : RapidTypeAnalysis */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
val* var2 /* : ToolContext */;
val* var4 /* : ToolContext */;
val* var5 /* : OptionBool */;
val* var7 /* : OptionBool */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var_basename /* var basename: String */;
val* var22 /* : OrderedTree[Object] */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
val* var30 /* : Text */;
val* var31 /* : CsvDocument */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : Text */;
var_mainmodule = p0;
var1 = NEW_nitc__RapidTypeAnalysis(&type_nitc__RapidTypeAnalysis);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d]))(var1, self); /* modelbuilder= on <var1:RapidTypeAnalysis>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d]))(var1, var_mainmodule); /* mainmodule= on <var1:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RapidTypeAnalysis>*/
}
var_analysis = var1;
{
nitc___nitc__RapidTypeAnalysis___run_analysis(var_analysis); /* Direct call rapid_type_analysis$RapidTypeAnalysis$run_analysis on <var_analysis:RapidTypeAnalysis>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_log (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline opts$Option$value (var5) on <var5:OptionBool> */
var10 = var5->attrs[COLOR_opts__Option___value].val; /* _value on <var5:OptionBool> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = (short int)((long)(var8)>>2);
if (var11){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$log_directory (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 151);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var_mainmodule) on <var_mainmodule:MModule> */
var20 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core__file___String____47d(var15, var18);
}
var_basename = var21;
{
var22 = nitc___nitc__RapidTypeAnalysis___live_methods_to_tree(var_analysis);
}
if (likely(varonce!=NULL)) {
var23 = varonce;
} else {
var24 = ".rta_methods.txt";
var26 = (val*)(16l<<2|1);
var27 = (val*)(16l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce = var23;
}
{
var30 = ((val*(*)(val* self, val* p0))(var_basename->class->vft[COLOR_core__abstract_text__Text___43d]))(var_basename, var23); /* + on <var_basename:String>*/
}
{
core__file___Writable___write_to_file(var22, var30); /* Direct call file$Writable$write_to_file on <var22:OrderedTree[Object]>*/
}
{
var31 = nitc___nitc__RapidTypeAnalysis___live_types_to_csv(var_analysis);
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ".rta_types.csv";
var36 = (val*)(14l<<2|1);
var37 = (val*)(14l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
{
var40 = ((val*(*)(val* self, val* p0))(var_basename->class->vft[COLOR_core__abstract_text__Text___43d]))(var_basename, var33); /* + on <var_basename:String>*/
}
{
core__file___Writable___write_to_file(var31, var40); /* Direct call file$Writable$write_to_file on <var31:CsvDocument>*/
}
} else {
}
var = var_analysis;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$modelbuilder for (self: RapidTypeAnalysis): ModelBuilder */
val* nitc___nitc__RapidTypeAnalysis___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$modelbuilder= for (self: RapidTypeAnalysis, ModelBuilder) */
void nitc___nitc__RapidTypeAnalysis___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$mainmodule for (self: RapidTypeAnalysis): MModule */
val* nitc___nitc__RapidTypeAnalysis___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$mainmodule= for (self: RapidTypeAnalysis, MModule) */
void nitc___nitc__RapidTypeAnalysis___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p0; /* _mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* nitc___nitc__RapidTypeAnalysis___live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_open_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* nitc___nitc__RapidTypeAnalysis___live_open_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_classes for (self: RapidTypeAnalysis): HashSet[MClass] */
val* nitc___nitc__RapidTypeAnalysis___live_classes(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* nitc___nitc__RapidTypeAnalysis___live_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_open_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* nitc___nitc__RapidTypeAnalysis___live_open_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_methoddefs for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___live_methoddefs(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___live_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_mmodules for (self: RapidTypeAnalysis): HashSet[MModule] */
val* nitc___nitc__RapidTypeAnalysis___live_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val; /* _live_mmodules on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_callsites for (self: RapidTypeAnalysis): HashSet[CallSite] */
val* nitc___nitc__RapidTypeAnalysis___live_callsites(val* self) {
val* var /* : HashSet[CallSite] */;
val* var1 /* : HashSet[CallSite] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_targets_cache for (self: RapidTypeAnalysis): HashMap2[MType, MProperty, Set[MMethodDef]] */
val* nitc___nitc__RapidTypeAnalysis___live_targets_cache(val* self) {
val* var /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var1 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 92);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_targets for (self: RapidTypeAnalysis, CallSite): Set[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___live_targets(val* self, val* p0) {
val* var /* : Set[MMethodDef] */;
val* var_callsite /* var callsite: CallSite */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : nullable MClassType */;
val* var6 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : MType */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var24 /* : MClassType */;
val* var26 /* : MClassType */;
val* var27 /* : MMethod */;
val* var29 /* : MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var30 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var32 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var33 /* : nullable Object */;
val* var_res /* var res: nullable Set[MMethodDef] */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : ArraySet[MMethodDef] */;
val* var40 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var42 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var43 /* : HashSet[MClass] */;
val* var45 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var46 /* : Iterator[nullable Object] */;
val* var_47 /* var : Iterator[MClass] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var50 /* : MClassDef */;
val* var52 /* : MClassDef */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var_tc /* var tc: MClassType */;
val* var56 /* : MModule */;
val* var58 /* : MModule */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : MModule */;
val* var64 /* : MModule */;
val* var65 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_callsite = p0;
{
{ /* Inline typing$CallSite$recv (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
{ /* Inline typing$CallSite$anchor (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nitc__typing__CallSite___anchor].val; /* _anchor on <var_callsite:CallSite> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_anchor = var4;
if (var_anchor == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline typing$CallSite$mmodule (var_callsite) on <var_callsite:CallSite> */
var14 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mmodule].val; /* _mmodule on <var_callsite:CallSite> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 645);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var12, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var15;
} else {
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var16;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype] == idtype;
}
if (var17){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$intro (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var21) on <var21:MClassDef> */
var26 = var21->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var21:MClassDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mtype = var24;
} else {
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var29 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mproperty = var27;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_targets_cache (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 92);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = more_collections___more_collections__HashMap2____91d_93d(var30, var_mtype, var_mproperty);
}
var_res = var33;
if (var_res == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable Set[MMethodDef]> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Set[MMethodDef](Set[MMethodDef])>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var = var_res;
goto RET_LABEL;
} else {
}
var39 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MMethodDef);
{
core___core__ArraySet___core__kernel__Object__init(var39); /* Direct call array$ArraySet$init on <var39:ArraySet[MMethodDef]>*/
}
var_res = var39;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_targets_cache (self) on <self:RapidTypeAnalysis> */
var42 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 92);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var40, var_mtype, var_mproperty, var_res); /* Direct call more_collections$HashMap2$[]= on <var40:HashMap2[MType, MProperty, Set[MMethodDef]]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (self) on <self:RapidTypeAnalysis> */
var45 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ = var43;
{
var46 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_47 = var46;
for(;;) {
{
var48 = ((short int(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_47); /* is_ok on <var_47:Iterator[MClass]>*/
}
if (var48){
} else {
goto BREAK_label;
}
{
var49 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_47); /* item on <var_47:Iterator[MClass]>*/
}
var_c = var49;
{
{ /* Inline model$MClass$intro (var_c) on <var_c:MClass> */
var52 = var_c->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var50) on <var50:MClassDef> */
var55 = var50->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var50:MClassDef> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_tc = var53;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var58 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__MType___is_subtype(var_tc, var56, ((val*)NULL), var_mtype);
}
var60 = !var59;
if (var60){
goto BREAK_label61;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var64 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__MProperty___lookup_first_definition(var_mproperty, var62, var_tc);
}
var_d = var65;
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_d); /* Direct call array$ArraySet$add on <var_res:nullable Set[MMethodDef](ArraySet[MMethodDef])>*/
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_47); /* next on <var_47:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_47); /* finish on <var_47:Iterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_super_sends for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___live_super_sends(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_types_to_csv for (self: RapidTypeAnalysis): CsvDocument */
val* nitc___nitc__RapidTypeAnalysis___live_types_to_csv(val* self) {
val* var /* : CsvDocument */;
val* var1 /* : HashSet[MType] */;
val* var_typeset /* var typeset: HashSet[MType] */;
val* var2 /* : HashSet[MClassType] */;
val* var4 /* : HashSet[MClassType] */;
val* var5 /* : HashSet[MClassType] */;
val* var7 /* : HashSet[MClassType] */;
val* var8 /* : HashSet[MType] */;
val* var10 /* : HashSet[MType] */;
val* var11 /* : HashSet[MType] */;
val* var13 /* : HashSet[MType] */;
val* var14 /* : Array[nullable Object] */;
val* var_types /* var types: Array[MType] */;
val* var15 /* : CachedAlphaComparator */;
val* var17 /* : CsvDocument */;
val* var_res /* var res: CsvDocument */;
val* var19 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var_52 /* var : Array[MType] */;
val* var53 /* : IndexedIterator[nullable Object] */;
val* var_54 /* var : IndexedIterator[MType] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var_reso /* var reso: nullable Object */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
int cltype;
int idtype;
short int var_76 /* var : Bool */;
short int var77 /* : Bool */;
val* var78 /* : HashSet[MClassType] */;
val* var80 /* : HashSet[MClassType] */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
val* var83 /* : HashSet[MClassType] */;
val* var85 /* : HashSet[MClassType] */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var_live /* var live: nullable Object */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
short int var103 /* : Bool */;
val* var104 /* : HashSet[MType] */;
val* var106 /* : HashSet[MType] */;
short int var107 /* : Bool */;
short int var_108 /* var : Bool */;
val* var109 /* : HashSet[MType] */;
val* var111 /* : HashSet[MType] */;
short int var112 /* : Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
val* var_cast /* var cast: nullable Object */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
val* var129 /* : Array[Object] */;
val* var130 /* : NativeArray[Object] */;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MType]>*/
}
var_typeset = var1;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var4 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var2); /* Direct call abstract_collection$SimpleCollection$add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_types (self) on <self:RapidTypeAnalysis> */
var7 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var5); /* Direct call abstract_collection$SimpleCollection$add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_cast_types (self) on <self:RapidTypeAnalysis> */
var10 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var8); /* Direct call abstract_collection$SimpleCollection$add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var13 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var11); /* Direct call abstract_collection$SimpleCollection$add_all on <var_typeset:HashSet[MType]>*/
}
{
var14 = core__array___Collection___to_a(var_typeset);
}
var_types = var14;
var15 = NEW_core__CachedAlphaComparator(&type_core__CachedAlphaComparator);
{
{ /* Inline kernel$Object$init (var15) on <var15:CachedAlphaComparator> */
RET_LABEL16:(void)0;
}
}
{
core___core__Comparator___sort(var15, var_types); /* Direct call sorter$Comparator$sort on <var15:CachedAlphaComparator>*/
}
var17 = NEW_csv__CsvDocument(&type_csv__CsvDocument);
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_csv__CsvDocument__header_61d]))(var17, ((val*)NULL)); /* header= on <var17:CsvDocument>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_csv__CsvDocument__records_61d]))(var17, ((val*)NULL)); /* records= on <var17:CsvDocument>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_core__kernel__Object__init]))(var17); /* init on <var17:CsvDocument>*/
}
var_res = var17;
{
{ /* Inline csv$CsvStream$separator= (var_res,';') on <var_res:CsvDocument> */
var_res->attrs[COLOR_csv__CsvStream___separator].c = ';'; /* _separator on <var_res:CsvDocument> */
RET_LABEL18:(void)0;
}
}
var19 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var19, 4l); /* Direct call array$Array$with_capacity on <var19:Array[String]>*/
}
var_ = var19;
if (likely(varonce!=NULL)) {
var20 = varonce;
} else {
var21 = "Type";
var23 = (val*)(4l<<2|1);
var24 = (val*)(4l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce = var20;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var20); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Resolution";
var31 = (val*)(10l<<2|1);
var32 = (val*)(10l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var28); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Liveness";
var39 = (val*)(8l<<2|1);
var40 = (val*)(8l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var36); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Cast-liveness";
var47 = (val*)(13l<<2|1);
var48 = (val*)(13l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var44); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
{
{ /* Inline csv$CsvDocument$header= (var_res,var_) on <var_res:CsvDocument> */
var_res->attrs[COLOR_csv__CsvDocument___header].val = var_; /* _header on <var_res:CsvDocument> */
RET_LABEL51:(void)0;
}
}
var_52 = var_types;
{
var53 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_52);
}
var_54 = var53;
for(;;) {
{
var55 = ((short int(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_54); /* is_ok on <var_54:IndexedIterator[MType]>*/
}
if (var55){
} else {
goto BREAK_label;
}
{
var56 = ((val*(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_54); /* item on <var_54:IndexedIterator[MType]>*/
}
var_t = var56;
{
var57 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
if (var57){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "OPEN ";
var62 = (val*)(5l<<2|1);
var63 = (val*)(5l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
var_reso = var59;
} else {
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "CLOSED";
var70 = (val*)(6l<<2|1);
var71 = (val*)(6l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
var_reso = var67;
}
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var75 = 0;
} else {
var75 = var_t->type->type_table[cltype] == idtype;
}
var_76 = var75;
if (var75){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var80 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = core___core__HashSet___core__abstract_collection__Collection__has(var78, var_t);
}
var_82 = var81;
if (var81){
var77 = var_82;
} else {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_types (self) on <self:RapidTypeAnalysis> */
var85 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = core___core__HashSet___core__abstract_collection__Collection__has(var83, var_t);
}
var77 = var86;
}
var74 = var77;
} else {
var74 = var_76;
}
if (var74){
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "LIVE";
var91 = (val*)(4l<<2|1);
var92 = (val*)(4l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
var_live = var88;
} else {
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "DEAD";
var99 = (val*)(4l<<2|1);
var100 = (val*)(4l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
var_live = var96;
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_cast_types (self) on <self:RapidTypeAnalysis> */
var106 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = core___core__HashSet___core__abstract_collection__Collection__has(var104, var_t);
}
var_108 = var107;
if (var107){
var103 = var_108;
} else {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var111 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = core___core__HashSet___core__abstract_collection__Collection__has(var109, var_t);
}
var103 = var112;
}
if (var103){
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "CAST LIVE";
var117 = (val*)(9l<<2|1);
var118 = (val*)(9l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
var_cast = var114;
} else {
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "CAST DEAD";
var125 = (val*)(9l<<2|1);
var126 = (val*)(9l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
var_cast = var122;
}
var129 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var129 = array_instance Array[Object] */
var130 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var130)->values[0] = (val*) var_t;
((struct instance_core__NativeArray*)var130)->values[1] = (val*) var_reso;
((struct instance_core__NativeArray*)var130)->values[2] = (val*) var_live;
((struct instance_core__NativeArray*)var130)->values[3] = (val*) var_cast;
{
((void(*)(val* self, val* p0, long p1))(var129->class->vft[COLOR_core__array__Array__with_native]))(var129, var130, 4l); /* with_native on <var129:Array[Object]>*/
}
}
{
csv___csv__CsvDocument___add_record(var_res, var129); /* Direct call csv$CsvDocument$add_record on <var_res:CsvDocument>*/
}
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_54); /* next on <var_54:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_54); /* finish on <var_54:IndexedIterator[MType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$live_methods_to_tree for (self: RapidTypeAnalysis): OrderedTree[Object] */
val* nitc___nitc__RapidTypeAnalysis___live_methods_to_tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
val* var_tree /* var tree: OrderedTree[Object] */;
val* var3 /* : HashSet[MMethod] */;
val* var5 /* : HashSet[MMethod] */;
val* var_ /* var : HashSet[MMethod] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MMethod] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: MMethod */;
val* var10 /* : String */;
val* var_xn /* var xn: String */;
val* var11 /* : Array[MPropDef] */;
val* var13 /* : Array[MPropDef] */;
val* var_14 /* var : Array[MMethodDef] */;
val* var15 /* : IndexedIterator[nullable Object] */;
val* var_16 /* var : IndexedIterator[MMethodDef] */;
short int var17 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_z /* var z: MMethodDef */;
val* var20 /* : String */;
val* var22 /* : String */;
val* var_zn /* var zn: String */;
val* var23 /* : HashSet[MMethodDef] */;
val* var25 /* : HashSet[MMethodDef] */;
short int var26 /* : Bool */;
val* var27 /* : HashSet[MMethodDef] */;
val* var29 /* : HashSet[MMethodDef] */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : Text */;
val* var39 /* : HashSet[MMethodDef] */;
val* var41 /* : HashSet[MMethodDef] */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : Text */;
val* var52 /* : Sys */;
val* var53 /* : Comparator */;
var1 = NEW_ordered_tree__OrderedTree(&type_ordered_tree__OrderedTree__core__Object);
{
{ /* Inline kernel$Object$init (var1) on <var1:OrderedTree[Object]> */
RET_LABEL2:(void)0;
}
}
var_tree = var1;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methods (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MMethod]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MMethod]>*/
}
var_x = var9;
{
var10 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_x);
}
var_xn = var10;
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, ((val*)NULL), var_xn); /* Direct call ordered_tree$OrderedTree$add on <var_tree:OrderedTree[Object]>*/
}
{
{ /* Inline model$MProperty$mpropdefs (var_x) on <var_x:MMethod> */
var13 = var_x->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_x:MMethod> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_14 = var11;
{
var15 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_14);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:IndexedIterator[MMethodDef]>*/
}
if (var17){
} else {
goto BREAK_label18;
}
{
var19 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:IndexedIterator[MMethodDef]>*/
}
var_z = var19;
{
{ /* Inline model$MPropDef$to_s (var_z) on <var_z:MMethodDef> */
var22 = var_z->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <var_z:MMethodDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_zn = var20;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methoddefs (self) on <self:RapidTypeAnalysis> */
var25 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = core___core__HashSet___core__abstract_collection__Collection__has(var23, var_z);
}
if (var26){
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_xn, var_zn); /* Direct call ordered_tree$OrderedTree$add on <var_tree:OrderedTree[Object]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_super_sends (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = core___core__HashSet___core__abstract_collection__Collection__has(var27, var_z);
}
if (var30){
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "(super)";
var34 = (val*)(7l<<2|1);
var35 = (val*)(7l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce = var31;
}
{
var38 = ((val*(*)(val* self, val* p0))(var_zn->class->vft[COLOR_core__abstract_text__Text___43d]))(var_zn, var31); /* + on <var_zn:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_zn, var38); /* Direct call ordered_tree$OrderedTree$add on <var_tree:OrderedTree[Object]>*/
}
} else {
}
} else {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_super_sends (self) on <self:RapidTypeAnalysis> */
var41 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = core___core__HashSet___core__abstract_collection__Collection__has(var39, var_z);
}
if (var42){
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "(super)";
var47 = (val*)(7l<<2|1);
var48 = (val*)(7l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
var51 = ((val*(*)(val* self, val* p0))(var_zn->class->vft[COLOR_core__abstract_text__Text___43d]))(var_zn, var44); /* + on <var_zn:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_xn, var51); /* Direct call ordered_tree$OrderedTree$add on <var_tree:OrderedTree[Object]>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:IndexedIterator[MMethodDef]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MMethod]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MMethod]>*/
}
var52 = glob_sys;
{
var53 = core__abstract_text___Sys___alpha_comparator(var52);
}
{
ordered_tree___ordered_tree__OrderedTree___sort_with(var_tree, var53); /* Direct call ordered_tree$OrderedTree$sort_with on <var_tree:OrderedTree[Object]>*/
}
var = var_tree;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$totry_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$totry_methods_to_remove for (self: RapidTypeAnalysis): Array[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___totry_methods_to_remove(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$try_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___try_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 179);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$todo for (self: RapidTypeAnalysis): List[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___todo(val* self) {
val* var /* : List[MMethodDef] */;
val* var1 /* : List[MMethodDef] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$force_alive for (self: RapidTypeAnalysis, String) */
void nitc___nitc__RapidTypeAnalysis___force_alive(val* self, val* p0) {
val* var_classname /* var classname: String */;
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : Model */;
val* var5 /* : Model */;
val* var6 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_ /* var : Array[MClass] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
var_classname = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$model (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__model___Model___get_mclasses_by_name(var3, var_classname);
}
var_classes = var6;
if (var_classes == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_classes,((val*)NULL)) on <var_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_classes, var_other); /* == on <var_classes:nullable Array[MClass](Array[MClass])>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var_ = var_classes;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MClass]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MClass]>*/
}
var_c = var15;
{
{ /* Inline model$MClass$mclass_type (var_c) on <var_c:MClass> */
var18 = var_c->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var_c) on <var_c:MClass> */
var21 = var_c->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_new(self, var16, var19); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_new on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MClass]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$run_analysis for (self: RapidTypeAnalysis) */
void nitc___nitc__RapidTypeAnalysis___run_analysis(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassType */;
val* var_maintype /* var maintype: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
val* var20 /* : MClass */;
val* var22 /* : MClass */;
val* var23 /* : nullable MMethod */;
val* var_initprop /* var initprop: nullable MMethod */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable MMethod */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : MClass */;
val* var44 /* : MClass */;
val* var45 /* : nullable MMethod */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
val* var57 /* : MClass */;
val* var59 /* : MClass */;
val* var60 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MModule */;
val* var68 /* : MModule */;
val* var69 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : MModule */;
val* var77 /* : MModule */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : MClass */;
val* var88 /* : MClass */;
val* var89 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Bool */;
val* var150 /* : nullable Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Bool */;
val* var182 /* : nullable Bool */;
val* var183 /* : List[MMethodDef] */;
val* var185 /* : List[MMethodDef] */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
val* var188 /* : List[MMethodDef] */;
val* var190 /* : List[MMethodDef] */;
val* var191 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var192 /* : MProperty */;
val* var194 /* : MProperty */;
val* var_mmeth /* var mmeth: MMethod */;
val* var195 /* : nullable MSignature */;
val* var197 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
val* var204 /* : RapidTypeVisitor */;
val* var205 /* : MClassDef */;
val* var207 /* : MClassDef */;
val* var208 /* : MClassType */;
val* var210 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
long var211 /* : Int */;
long var213 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var214 /* : Int */;
long var216 /* : Int */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var220 /* : Bool */;
val* var221 /* : ModelBuilder */;
val* var223 /* : ModelBuilder */;
val* var224 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var225 /* : Array[MParameter] */;
val* var227 /* : Array[MParameter] */;
val* var228 /* : nullable Object */;
val* var229 /* : MType */;
val* var231 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var232 /* : MModule */;
val* var234 /* : MModule */;
val* var235 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var236 /* : MModule */;
val* var238 /* : MModule */;
val* var239 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var240 /* : ModelBuilder */;
val* var242 /* : ModelBuilder */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : CString */;
val* var246 /* : String */;
val* var247 /* : nullable Int */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Bool */;
val* var250 /* : nullable Bool */;
val* var251 /* : MClass */;
val* var253 /* : MClass */;
val* var254 /* : MModule */;
val* var256 /* : MModule */;
val* var257 /* : MMethod */;
val* var_sig /* var sig: MSignature */;
val* var258 /* : MPropDef */;
val* var260 /* : MPropDef */;
val* var261 /* : nullable MSignature */;
val* var263 /* : nullable MSignature */;
val* var_osig /* var osig: MSignature */;
long var_i /* var i: Int */;
long var264 /* : Int */;
long var_ /* var : Int */;
short int var265 /* : Bool */;
short int var267 /* : Bool */;
int cltype268;
int idtype269;
const char* var_class_name270;
short int var271 /* : Bool */;
val* var273 /* : Array[MParameter] */;
val* var275 /* : Array[MParameter] */;
val* var276 /* : nullable Object */;
val* var277 /* : MType */;
val* var279 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
val* var283 /* : Array[MParameter] */;
val* var285 /* : Array[MParameter] */;
val* var286 /* : nullable Object */;
val* var287 /* : MType */;
val* var289 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
long var290 /* : Int */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
val* var294 /* : ModelBuilder */;
val* var296 /* : ModelBuilder */;
val* var297 /* : nullable ANode */;
val* var_npropdef /* var npropdef: nullable ANode */;
short int var298 /* : Bool */;
int cltype299;
int idtype300;
val* var301 /* : MProperty */;
val* var303 /* : MProperty */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
val* var309 /* : MClassType */;
val* var311 /* : MClassType */;
val* var313 /* : NativeArray[String] */;
static val* varonce312;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : CString */;
val* var317 /* : String */;
val* var318 /* : nullable Int */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Bool */;
val* var321 /* : nullable Bool */;
val* var322 /* : String */;
val* var323 /* : String */;
val* var324 /* : nullable Object */;
val* var326 /* : nullable Object */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
val* var329 /* : nullable MType */;
val* var331 /* : nullable MType */;
short int var332 /* : Bool */;
int cltype333;
int idtype334;
const char* var_class_name335;
short int var336 /* : Bool */;
short int var337 /* : Bool */;
short int var339 /* : Bool */;
short int var341 /* : Bool */;
short int var342 /* : Bool */;
int cltype343;
int idtype344;
val* var345 /* : nullable Array[CallSite] */;
val* var347 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var348 /* : Bool */;
short int var349 /* : Bool */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
val* var_353 /* var : Array[CallSite] */;
val* var354 /* : IndexedIterator[nullable Object] */;
val* var_355 /* var : IndexedIterator[CallSite] */;
short int var356 /* : Bool */;
val* var358 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var359 /* : Bool */;
short int var361 /* : Bool */;
val* var362 /* : MClassType */;
val* var364 /* : MClassType */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
short int var368 /* : Bool */;
short int var_369 /* var : Bool */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
val* var373 /* : nullable MType */;
val* var375 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var376 /* : Bool */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
short int var379 /* : Bool */;
short int var380 /* : Bool */;
short int var382 /* : Bool */;
short int var383 /* : Bool */;
short int var_384 /* var : Bool */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
short int var_388 /* var : Bool */;
val* var389 /* : MClass */;
val* var391 /* : MClass */;
val* var392 /* : MClassKind */;
val* var394 /* : MClassKind */;
val* var395 /* : Sys */;
val* var396 /* : MClassKind */;
short int var397 /* : Bool */;
short int var399 /* : Bool */;
short int var400 /* : Bool */;
short int var_401 /* var : Bool */;
val* var402 /* : MClass */;
val* var404 /* : MClass */;
val* var405 /* : MClassKind */;
val* var407 /* : MClassKind */;
val* var408 /* : Sys */;
val* var409 /* : MClassKind */;
short int var410 /* : Bool */;
short int var412 /* : Bool */;
short int var413 /* : Bool */;
val* var415 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var417 /* : HashSet[MClassType] */;
val* var419 /* : HashSet[MClassType] */;
short int var420 /* : Bool */;
short int var421 /* : Bool */;
val* var422 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var423 /* : HashSet[MClassType] */;
val* var425 /* : HashSet[MClassType] */;
val* var_426 /* var : HashSet[MClassType] */;
val* var427 /* : Iterator[nullable Object] */;
val* var_428 /* var : Iterator[MClassType] */;
short int var429 /* : Bool */;
val* var431 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var432 /* : MModule */;
val* var434 /* : MModule */;
short int var435 /* : Bool */;
short int var436 /* : Bool */;
val* var438 /* : MModule */;
val* var440 /* : MModule */;
val* var441 /* : MClassType */;
val* var_rt /* var rt: MClassType */;
val* var442 /* : HashSet[MClassType] */;
val* var444 /* : HashSet[MClassType] */;
short int var445 /* : Bool */;
val* var446 /* : MModule */;
val* var448 /* : MModule */;
short int var449 /* : Bool */;
short int var450 /* : Bool */;
short int var451 /* : Bool */;
short int var452 /* : Bool */;
val* var453 /* : HashSet[MClassType] */;
val* var455 /* : HashSet[MClassType] */;
val* var457 /* : HashSet[MType] */;
val* var459 /* : HashSet[MType] */;
val* var_460 /* var : HashSet[MType] */;
val* var461 /* : Iterator[nullable Object] */;
val* var_462 /* var : Iterator[MType] */;
short int var463 /* : Bool */;
val* var465 /* : nullable Object */;
val* var_ot466 /* var ot: MType */;
val* var467 /* : HashSet[MClassType] */;
val* var469 /* : HashSet[MClassType] */;
val* var_470 /* var : HashSet[MClassType] */;
val* var471 /* : Iterator[nullable Object] */;
val* var_472 /* var : Iterator[MClassType] */;
short int var473 /* : Bool */;
val* var475 /* : nullable Object */;
val* var_t476 /* var t: MClassType */;
val* var477 /* : MModule */;
val* var479 /* : MModule */;
short int var480 /* : Bool */;
short int var481 /* : Bool */;
val* var483 /* : MModule */;
val* var485 /* : MModule */;
val* var486 /* : MType */;
val* var_rt487 /* var rt: MType */;
val* var488 /* : MModule */;
val* var490 /* : MModule */;
short int var491 /* : Bool */;
short int var492 /* : Bool */;
val* var493 /* : HashSet[MType] */;
val* var495 /* : HashSet[MType] */;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__model___MModule___sys_type(var);
}
var_maintype = var3;
if (var_maintype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_maintype,((val*)NULL)) on <var_maintype:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_maintype,var_other) on <var_maintype:nullable MClassType(MClassType)> */
var9 = var_maintype == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeAnalysis___add_new(self, var_maintype, var_maintype); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_new on <self:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "init";
var16 = (val*)(4l<<2|1);
var17 = (val*)(4l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model$MClassType$mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var22 = var_maintype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc__model___MModule___try_get_primitive_method(var10, var13, var20);
}
var_initprop = var23;
if (var_initprop == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_initprop,((val*)NULL)) on <var_initprop:nullable MMethod> */
var_other27 = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_initprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_initprop, var_other27); /* == on <var_initprop:nullable MMethod(MMethod)>*/
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
nitc___nitc__RapidTypeAnalysis___add_send(self, var_maintype, var_initprop); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var33 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "run";
var38 = (val*)(3l<<2|1);
var39 = (val*)(3l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
{
{ /* Inline model$MClassType$mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var44 = var_maintype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = nitc__model___MModule___try_get_primitive_method(var31, var35, var42);
}
if (var45!=NULL) {
var30 = var45;
} else {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var48 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "main";
var53 = (val*)(4l<<2|1);
var54 = (val*)(4l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
{
{ /* Inline model$MClassType$mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var59 = var_maintype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nitc__model___MModule___try_get_primitive_method(var46, var50, var57);
}
var30 = var60;
}
var_mainprop = var30;
if (var_mainprop == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mainprop,((val*)NULL)) on <var_mainprop:nullable MMethod> */
var_other27 = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_mainprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mainprop, var_other27); /* == on <var_mainprop:nullable MMethod(MMethod)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
{
nitc___nitc__RapidTypeAnalysis___add_send(self, var_maintype, var_mainprop); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var68 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc__model___MModule___finalizable_type(var66);
}
var_finalizable_type = var69;
if (var_finalizable_type == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other27 = ((val*)NULL);
{
var73 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalizable_type, var_other27); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var77 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "finalize";
var82 = (val*)(8l<<2|1);
var83 = (val*)(8l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
{ /* Inline model$MClassType$mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var88 = var_finalizable_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = nitc__model___MModule___try_get_primitive_method(var75, var79, var86);
}
var_finalize_meth = var89;
if (var_finalize_meth == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other27 = ((val*)NULL);
{
var93 = ((short int(*)(val* self, val* p0))(var_finalize_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalize_meth, var_other27); /* == on <var_finalize_meth:nullable MMethod(MMethod)>*/
}
var94 = !var93;
var91 = var94;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (var90){
{
nitc___nitc__RapidTypeAnalysis___add_send(self, var_finalizable_type, var_finalize_meth); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "Bool";
var99 = (val*)(4l<<2|1);
var100 = (val*)(4l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var96); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Float";
var107 = (val*)(5l<<2|1);
var108 = (val*)(5l<<2|1);
var109 = (val*)((long)(0)<<2|3);
var110 = (val*)((long)(0)<<2|3);
var106 = core__flat___CString___to_s_unsafe(var105, var107, var108, var109, var110);
var104 = var106;
varonce103 = var104;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var104); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "Char";
var115 = (val*)(4l<<2|1);
var116 = (val*)(4l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var112); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "Pointer";
var123 = (val*)(7l<<2|1);
var124 = (val*)(7l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var120); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "Byte";
var131 = (val*)(4l<<2|1);
var132 = (val*)(4l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var128); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Int";
var139 = (val*)(3l<<2|1);
var140 = (val*)(3l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var136); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "Int8";
var147 = (val*)(4l<<2|1);
var148 = (val*)(4l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var144); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "Int16";
var155 = (val*)(5l<<2|1);
var156 = (val*)(5l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var152); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "UInt16";
var163 = (val*)(6l<<2|1);
var164 = (val*)(6l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var160); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "Int32";
var171 = (val*)(5l<<2|1);
var172 = (val*)(5l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var168); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "UInt32";
var179 = (val*)(6l<<2|1);
var180 = (val*)(6l<<2|1);
var181 = (val*)((long)(0)<<2|3);
var182 = (val*)((long)(0)<<2|3);
var178 = core__flat___CString___to_s_unsafe(var177, var179, var180, var181, var182);
var176 = var178;
varonce175 = var176;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var176); /* Direct call rapid_type_analysis$RapidTypeAnalysis$force_alive on <self:RapidTypeAnalysis>*/
}
for(;;) {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$todo (self) on <self:RapidTypeAnalysis> */
var185 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var185 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
var186 = core___core__List___core__abstract_collection__Collection__is_empty(var183);
}
var187 = !var186;
if (var187){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$todo (self) on <self:RapidTypeAnalysis> */
var190 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
var191 = core___core__List___core__abstract_collection__Sequence__shift(var188);
}
var_mmethoddef = var191;
{
{ /* Inline model$MPropDef$mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var194 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var194 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
var_mmeth = var192;
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var197 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var195 = var197;
RET_LABEL196:(void)0;
}
}
var_msignature = var195;
if (var_msignature == NULL) {
var198 = 1; /* is null */
} else {
var198 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var203 = var_msignature == var_other;
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
}
var199 = var201;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
var198 = var199;
}
if (var198){
goto BREAK_label;
} else {
}
var204 = NEW_nitc__RapidTypeVisitor(&type_nitc__RapidTypeVisitor);
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var207 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var207 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var205) on <var205:MClassDef> */
var210 = var205->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var205:MClassDef> */
if (unlikely(var210 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var204->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var204, self); /* analysis= on <var204:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var204->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var204, var208); /* receiver= on <var204:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var204->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var204, var_mmethoddef); /* mpropdef= on <var204:RapidTypeVisitor>*/
}
{
((void(*)(val* self))(var204->class->vft[COLOR_core__kernel__Object__init]))(var204); /* init on <var204:RapidTypeVisitor>*/
}
var_v = var204;
{
{ /* Inline model$MSignature$vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var213 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
var_vararg_rank = var211;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var216 = -1l;
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_vararg_rank,var214) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var214:Int> isa OTHER */
/* <var214:Int> isa OTHER */
var219 = 1; /* easy <var214:Int> isa OTHER*/
if (unlikely(!var219)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var220 = var_vararg_rank > var214;
var217 = var220;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
if (var217){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (self) on <self:RapidTypeAnalysis> */
var223 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var223 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = nitc__modelize_property___ModelBuilder___mpropdef2node(var221, var_mmethoddef);
}
var_node = var224;
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var227 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
var228 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var225, var_vararg_rank);
}
{
{ /* Inline model$MParameter$mtype (var228) on <var228:nullable Object(MParameter)> */
var231 = var228->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var228:nullable Object(MParameter)> */
if (unlikely(var231 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
var_elttype = var229;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var234 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var234 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
var235 = nitc__model___MModule___array_type(var232, var_elttype);
}
var_vararg = var235;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_vararg); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var238 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var238 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
var239 = nitc__model___MModule___native_array_type(var236, var_elttype);
}
var_native = var239;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (self) on <self:RapidTypeAnalysis> */
var242 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var242 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "with_native";
var247 = (val*)(11l<<2|1);
var248 = (val*)(11l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
{
{ /* Inline model$MClassType$mclass (var_vararg) on <var_vararg:MClassType> */
var253 = var_vararg->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_vararg:MClassType> */
if (unlikely(var253 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var256 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var256 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
var257 = nitc___nitc__ModelBuilder___force_get_primitive_method(var240, var_node, var244, var251, var254);
}
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_vararg, var257); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
} else {
}
var_sig = var_msignature;
{
{ /* Inline model$MProperty$intro (var_mmeth) on <var_mmeth:MMethod> */
var260 = var_mmeth->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmeth:MMethod> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var258) on <var258:MPropDef(MMethodDef)> */
var263 = var258->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var258:MPropDef(MMethodDef)> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (unlikely(var261 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 250);
fatal_exit(1);
}
var_osig = var261;
var_i = 0l;
{
var264 = nitc___nitc__MSignature___arity(var_sig);
}
var_ = var264;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var267 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var267)) {
var_class_name270 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name270);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var271 = var_i < var_;
var265 = var271;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
}
if (var265){
} else {
goto BREAK_label272;
}
{
{ /* Inline model$MSignature$mparameters (var_osig) on <var_osig:MSignature> */
var275 = var_osig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_osig:MSignature> */
if (unlikely(var275 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
var276 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var273, var_i);
}
{
{ /* Inline model$MParameter$mtype (var276) on <var276:nullable Object(MParameter)> */
var279 = var276->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var276:nullable Object(MParameter)> */
if (unlikely(var279 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
var_origtype = var277;
{
var280 = ((short int(*)(val* self))(var_origtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_origtype); /* need_anchor on <var_origtype:MType>*/
}
var281 = !var280;
if (var281){
goto BREAK_label282;
} else {
}
{
{ /* Inline model$MSignature$mparameters (var_sig) on <var_sig:MSignature> */
var285 = var_sig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig:MSignature> */
if (unlikely(var285 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var283, var_i);
}
{
{ /* Inline model$MParameter$mtype (var286) on <var286:nullable Object(MParameter)> */
var289 = var286->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var286:nullable Object(MParameter)> */
if (unlikely(var289 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
var_paramtype = var287;
{
nitc___nitc__RapidTypeAnalysis___add_cast(self, var_paramtype); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_cast on <self:RapidTypeAnalysis>*/
}
BREAK_label282: (void)0;
{
var290 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var290;
}
BREAK_label272: (void)0;
{
{ /* Inline model$MMethodDef$is_abstract (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var293 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <var_mmethoddef:MMethodDef> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
if (var291){
goto BREAK_label;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (self) on <self:RapidTypeAnalysis> */
var296 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var296 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
var297 = nitc__modelize_property___ModelBuilder___mpropdef2node(var294, var_mmethoddef);
}
var_npropdef = var297;
/* <var_npropdef:nullable ANode> isa AClassdef */
cltype299 = type_nitc__AClassdef.color;
idtype300 = type_nitc__AClassdef.id;
if(var_npropdef == NULL) {
var298 = 0;
} else {
if(cltype299 >= var_npropdef->type->table_size) {
var298 = 0;
} else {
var298 = var_npropdef->type->type_table[cltype299] == idtype300;
}
}
if (var298){
{
{ /* Inline model$MPropDef$mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var303 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var303 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var301 = var303;
RET_LABEL302:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var301) on <var301:MProperty(MMethod)> */
var306 = var301->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var301:MProperty(MMethod)> */
var304 = var306;
RET_LABEL305:(void)0;
}
}
if (var304){
{
var307 = nitc___nitc__MPropDef___is_intro(var_mmethoddef);
}
var308 = !var307;
if (var308){
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$receiver (var_v) on <var_v:RapidTypeVisitor> */
var311 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var311 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(self, var309, var_mmethoddef); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
if (unlikely(varonce312==NULL)) {
var313 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "cannot RTA ";
var318 = (val*)(11l<<2|1);
var319 = (val*)(11l<<2|1);
var320 = (val*)((long)(0)<<2|3);
var321 = (val*)((long)(0)<<2|3);
var317 = core__flat___CString___to_s_unsafe(var316, var318, var319, var320, var321);
var315 = var317;
varonce314 = var315;
}
((struct instance_core__NativeArray*)var313)->values[0]=var315;
} else {
var313 = varonce312;
varonce312 = NULL;
}
{
var322 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var313)->values[1]=var322;
{
var323 = ((val*(*)(val* self))(var313->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var313); /* native_to_s on <var313:NativeArray[String]>*/
}
varonce312 = var313;
{
nitc___nitc__ANode___debug(var_npropdef, var323); /* Direct call parser_nodes$ANode$debug on <var_npropdef:nullable ANode(AClassdef)>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 269);
fatal_exit(1);
}
goto BREAK_label;
} else {
{
{ /* Inline model$MMethodDef$constant_value (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var326 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <var_mmethoddef:MMethodDef> */
var324 = var326;
RET_LABEL325:(void)0;
}
}
if (var324 == NULL) {
var327 = 0; /* is null */
} else {
var327 = 1; /* arg is null and recv is not */
}
if (0) {
var328 = ((short int(*)(val* self, val* p0))((((long)var324&3)?class_info[((long)var324&3)]:var324->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var324, ((val*)NULL)); /* != on <var324:nullable Object>*/
var327 = var328;
}
if (var327){
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var331 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var329 = var331;
RET_LABEL330:(void)0;
}
}
/* <var329:nullable MType> isa MClassType */
cltype333 = type_nitc__MClassType.color;
idtype334 = type_nitc__MClassType.id;
if(var329 == NULL) {
var332 = 0;
} else {
if(cltype333 >= var329->type->table_size) {
var332 = 0;
} else {
var332 = var329->type->type_table[cltype333] == idtype334;
}
}
if (unlikely(!var332)) {
var_class_name335 = var329 == NULL ? "null" : var329->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name335);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 274);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var329); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
goto BREAK_label;
} else {
if (var_npropdef == NULL) {
var336 = 1; /* is null */
} else {
var336 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_npropdef,((val*)NULL)) on <var_npropdef:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_npropdef,var_other) on <var_npropdef:nullable ANode(ANode)> */
var341 = var_npropdef == var_other;
var339 = var341;
goto RET_LABEL340;
RET_LABEL340:(void)0;
}
}
var337 = var339;
goto RET_LABEL338;
RET_LABEL338:(void)0;
}
var336 = var337;
}
if (var336){
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 277);
fatal_exit(1);
} else {
}
}
}
/* <var_npropdef:nullable ANode(ANode)> isa AMethPropdef */
cltype343 = type_nitc__AMethPropdef.color;
idtype344 = type_nitc__AMethPropdef.id;
if(cltype343 >= var_npropdef->type->table_size) {
var342 = 0;
} else {
var342 = var_npropdef->type->type_table[cltype343] == idtype344;
}
if (var342){
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_inits (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var347 = var_npropdef->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <var_npropdef:nullable ANode(AMethPropdef)> */
var345 = var347;
RET_LABEL346:(void)0;
}
}
var_auto_super_inits = var345;
if (var_auto_super_inits == NULL) {
var348 = 0; /* is null */
} else {
var348 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_auto_super_inits,((val*)NULL)) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other27 = ((val*)NULL);
{
var351 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_auto_super_inits, var_other27); /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/
}
var352 = !var351;
var349 = var352;
goto RET_LABEL350;
RET_LABEL350:(void)0;
}
var348 = var349;
}
if (var348){
var_353 = var_auto_super_inits;
{
var354 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_353);
}
var_355 = var354;
for(;;) {
{
var356 = ((short int(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_355); /* is_ok on <var_355:IndexedIterator[CallSite]>*/
}
if (var356){
} else {
goto BREAK_label357;
}
{
var358 = ((val*(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_355); /* item on <var_355:IndexedIterator[CallSite]>*/
}
var_auto_super_init = var358;
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var_auto_super_init); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_355); /* next on <var_355:IndexedIterator[CallSite]>*/
}
}
BREAK_label357: (void)0;
{
((void(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_355); /* finish on <var_355:IndexedIterator[CallSite]>*/
}
} else {
}
{
{ /* Inline auto_super_init$AMethPropdef$auto_super_call (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var361 = var_npropdef->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <var_npropdef:nullable ANode(AMethPropdef)> */
var359 = var361;
RET_LABEL360:(void)0;
}
}
if (var359){
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$receiver (var_v) on <var_v:RapidTypeVisitor> */
var364 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var364 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(self, var362, var_mmethoddef); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
{
{ /* Inline model$MMethodDef$is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var368 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var366 = var368;
RET_LABEL367:(void)0;
}
}
var_369 = var366;
if (var366){
var365 = var_369;
} else {
{
{ /* Inline model$MMethodDef$is_extern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var372 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_mmethoddef:MMethodDef> */
var370 = var372;
RET_LABEL371:(void)0;
}
}
var365 = var370;
}
if (var365){
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var375 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var373 = var375;
RET_LABEL374:(void)0;
}
}
var_ret = var373;
if (var_ret == NULL) {
var379 = 0; /* is null */
} else {
var379 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other27 = ((val*)NULL);
{
var382 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other27); /* == on <var_ret:nullable MType(MType)>*/
}
var383 = !var382;
var380 = var383;
goto RET_LABEL381;
RET_LABEL381:(void)0;
}
var379 = var380;
}
var_384 = var379;
if (var379){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype386 = type_nitc__MClassType.color;
idtype387 = type_nitc__MClassType.id;
if(cltype386 >= var_ret->type->table_size) {
var385 = 0;
} else {
var385 = var_ret->type->type_table[cltype386] == idtype387;
}
var378 = var385;
} else {
var378 = var_384;
}
var_388 = var378;
if (var378){
{
{ /* Inline model$MClassType$mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var391 = var_ret->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var391 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var389) on <var389:MClass> */
var394 = var389->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var389:MClass> */
if (unlikely(var394 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var392 = var394;
RET_LABEL393:(void)0;
}
}
var395 = glob_sys;
{
var396 = nitc__model___core__Sys___abstract_kind(var395);
}
{
{ /* Inline kernel$Object$!= (var392,var396) on <var392:MClassKind> */
var_other27 = var396;
{
var399 = ((short int(*)(val* self, val* p0))(var392->class->vft[COLOR_core__kernel__Object___61d_61d]))(var392, var_other27); /* == on <var392:MClassKind>*/
}
var400 = !var399;
var397 = var400;
goto RET_LABEL398;
RET_LABEL398:(void)0;
}
}
var377 = var397;
} else {
var377 = var_388;
}
var_401 = var377;
if (var377){
{
{ /* Inline model$MClassType$mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var404 = var_ret->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var404 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var402 = var404;
RET_LABEL403:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var402) on <var402:MClass> */
var407 = var402->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var402:MClass> */
if (unlikely(var407 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
var408 = glob_sys;
{
var409 = nitc__model___core__Sys___interface_kind(var408);
}
{
{ /* Inline kernel$Object$!= (var405,var409) on <var405:MClassKind> */
var_other27 = var409;
{
var412 = ((short int(*)(val* self, val* p0))(var405->class->vft[COLOR_core__kernel__Object___61d_61d]))(var405, var_other27); /* == on <var405:MClassKind>*/
}
var413 = !var412;
var410 = var413;
goto RET_LABEL411;
RET_LABEL411:(void)0;
}
}
var376 = var410;
} else {
var376 = var_401;
}
if (var376){
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_ret); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
} else {
}
} else {
}
{
nitc___nitc__Visitor___enter_visit(var_v, var_npropdef); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:RapidTypeVisitor>*/
}
} else {
goto BREAK_label414;
}
BREAK_label: (void)0;
}
BREAK_label414: (void)0;
var415 = NEW_core__List(&type_core__List__nitc__MClassType);
{
{ /* Inline list$List$init (var415) on <var415:List[MClassType]> */
{
((void(*)(val* self))(var415->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var415); /* init on <var415:List[MClassType]>*/
}
RET_LABEL416:(void)0;
}
}
var_todo_types = var415;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var419 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var419 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var417 = var419;
RET_LABEL418:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_todo_types, var417); /* Direct call abstract_collection$SimpleCollection$add_all on <var_todo_types:List[MClassType]>*/
}
for(;;) {
{
var420 = core___core__List___core__abstract_collection__Collection__is_empty(var_todo_types);
}
var421 = !var420;
if (var421){
{
var422 = core___core__List___core__abstract_collection__Sequence__shift(var_todo_types);
}
var_t = var422;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_types (self) on <self:RapidTypeAnalysis> */
var425 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var425 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var423 = var425;
RET_LABEL424:(void)0;
}
}
var_426 = var423;
{
var427 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_426);
}
var_428 = var427;
for(;;) {
{
var429 = ((short int(*)(val* self))((((long)var_428&3)?class_info[((long)var_428&3)]:var_428->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_428); /* is_ok on <var_428:Iterator[MClassType]>*/
}
if (var429){
} else {
goto BREAK_label430;
}
{
var431 = ((val*(*)(val* self))((((long)var_428&3)?class_info[((long)var_428&3)]:var_428->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_428); /* item on <var_428:Iterator[MClassType]>*/
}
var_ot = var431;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var434 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var434 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var432 = var434;
RET_LABEL433:(void)0;
}
}
{
var435 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_ot->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_ot, var_t, var_t, var432); /* can_resolve_for on <var_ot:MClassType>*/
}
var436 = !var435;
if (var436){
goto BREAK_label437;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var440 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var440 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var438 = var440;
RET_LABEL439:(void)0;
}
}
{
var441 = nitc___nitc__MClassType___MType__anchor_to(var_ot, var438, var_t);
}
var_rt = var441;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var444 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var444 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var442 = var444;
RET_LABEL443:(void)0;
}
}
{
var445 = core___core__HashSet___core__abstract_collection__Collection__has(var442, var_rt);
}
if (var445){
goto BREAK_label437;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var448 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var448 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
{
var449 = ((short int(*)(val* self, val* p0, val* p1))(var_rt->class->vft[COLOR_nitc__model__MType__is_legal_in]))(var_rt, var446, ((val*)NULL)); /* is_legal_in on <var_rt:MClassType>*/
}
var450 = !var449;
if (var450){
goto BREAK_label437;
} else {
}
{
var451 = nitc___nitc__RapidTypeAnalysis___check_depth(self, var_rt);
}
var452 = !var451;
if (var452){
goto BREAK_label437;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var455 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var455 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var453, var_rt); /* Direct call hash_collection$HashSet$add on <var453:HashSet[MClassType]>*/
}
{
core___core__List___core__abstract_collection__Sequence__unshift(var_todo_types, var_rt); /* Direct call list$List$unshift on <var_todo_types:List[MClassType]>*/
}
BREAK_label437: (void)0;
{
((void(*)(val* self))((((long)var_428&3)?class_info[((long)var_428&3)]:var_428->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_428); /* next on <var_428:Iterator[MClassType]>*/
}
}
BREAK_label430: (void)0;
{
((void(*)(val* self))((((long)var_428&3)?class_info[((long)var_428&3)]:var_428->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_428); /* finish on <var_428:Iterator[MClassType]>*/
}
} else {
goto BREAK_label456;
}
}
BREAK_label456: (void)0;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var459 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var459 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
var_460 = var457;
{
var461 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_460);
}
var_462 = var461;
for(;;) {
{
var463 = ((short int(*)(val* self))((((long)var_462&3)?class_info[((long)var_462&3)]:var_462->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_462); /* is_ok on <var_462:Iterator[MType]>*/
}
if (var463){
} else {
goto BREAK_label464;
}
{
var465 = ((val*(*)(val* self))((((long)var_462&3)?class_info[((long)var_462&3)]:var_462->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_462); /* item on <var_462:Iterator[MType]>*/
}
var_ot466 = var465;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var469 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var469 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var467 = var469;
RET_LABEL468:(void)0;
}
}
var_470 = var467;
{
var471 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_470);
}
var_472 = var471;
for(;;) {
{
var473 = ((short int(*)(val* self))((((long)var_472&3)?class_info[((long)var_472&3)]:var_472->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_472); /* is_ok on <var_472:Iterator[MClassType]>*/
}
if (var473){
} else {
goto BREAK_label474;
}
{
var475 = ((val*(*)(val* self))((((long)var_472&3)?class_info[((long)var_472&3)]:var_472->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_472); /* item on <var_472:Iterator[MClassType]>*/
}
var_t476 = var475;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var479 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var479 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var477 = var479;
RET_LABEL478:(void)0;
}
}
{
var480 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_ot466->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_ot466, var_t476, var_t476, var477); /* can_resolve_for on <var_ot466:MType>*/
}
var481 = !var480;
if (var481){
goto BREAK_label482;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var485 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var485 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var483 = var485;
RET_LABEL484:(void)0;
}
}
{
var486 = ((val*(*)(val* self, val* p0, val* p1))(var_ot466->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_ot466, var483, var_t476); /* anchor_to on <var_ot466:MType>*/
}
var_rt487 = var486;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var490 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var490 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var488 = var490;
RET_LABEL489:(void)0;
}
}
{
var491 = ((short int(*)(val* self, val* p0, val* p1))(var_rt487->class->vft[COLOR_nitc__model__MType__is_legal_in]))(var_rt487, var488, ((val*)NULL)); /* is_legal_in on <var_rt487:MType>*/
}
var492 = !var491;
if (var492){
goto BREAK_label482;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_cast_types (self) on <self:RapidTypeAnalysis> */
var495 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var495 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var493 = var495;
RET_LABEL494:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var493, var_rt487); /* Direct call hash_collection$HashSet$add on <var493:HashSet[MType]>*/
}
BREAK_label482: (void)0;
{
((void(*)(val* self))((((long)var_472&3)?class_info[((long)var_472&3)]:var_472->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_472); /* next on <var_472:Iterator[MClassType]>*/
}
}
BREAK_label474: (void)0;
{
((void(*)(val* self))((((long)var_472&3)?class_info[((long)var_472&3)]:var_472->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_472); /* finish on <var_472:Iterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_462&3)?class_info[((long)var_462&3)]:var_462->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_462); /* next on <var_462:Iterator[MType]>*/
}
}
BREAK_label464: (void)0;
{
((void(*)(val* self))((((long)var_462&3)?class_info[((long)var_462&3)]:var_462->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_462); /* finish on <var_462:Iterator[MType]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$check_depth for (self: RapidTypeAnalysis, MClassType): Bool */
short int nitc___nitc__RapidTypeAnalysis___check_depth(val* self, val* p0) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MClassType */;
long var1 /* : Int */;
long var_d /* var d: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : ModelBuilder */;
val* var8 /* : ModelBuilder */;
val* var9 /* : ToolContext */;
val* var11 /* : ToolContext */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_mtype = p0;
{
var1 = ((long(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__length]))(var_mtype); /* length on <var_mtype:MClassType>*/
}
var_d = var1;
{
{ /* Inline kernel$Int$> (var_d,255l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <255l:Int> isa OTHER */
/* <255l:Int> isa OTHER */
var4 = 1; /* easy <255l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var5 = var_d > 255l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (self) on <self:RapidTypeAnalysis> */
var8 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var6) on <var6:ModelBuilder> */
var11 = var6->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var6:ModelBuilder> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var12 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Fatal Error: limitation in the rapidtype analysis engine: a type depth of ";
var17 = (val*)(74l<<2|1);
var18 = (val*)(74l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " is too important, the problematic type is `";
var25 = (val*)(44l<<2|1);
var26 = (val*)(44l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var12)->values[2]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "`.";
var33 = (val*)(2l<<2|1);
var34 = (val*)(2l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var12)->values[4]=var30;
} else {
var12 = varonce;
varonce = NULL;
}
var37 = core__flat___Int___core__abstract_text__Object__to_s(var_d);
((struct instance_core__NativeArray*)var12)->values[1]=var37;
{
var38 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var12)->values[3]=var38;
{
var39 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
nitc___nitc__ToolContext___fatal_error(var9, ((val*)NULL), var39); /* Direct call toolcontext$ToolContext$fatal_error on <var9:ToolContext>*/
}
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeAnalysis$add_new for (self: RapidTypeAnalysis, MClassType, MClassType) */
void nitc___nitc__RapidTypeAnalysis___add_new(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mtype /* var mtype: MClassType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[MClassType] */;
val* var5 /* : HashSet[MClassType] */;
short int var6 /* : Bool */;
val* var7 /* : HashSet[MClassType] */;
val* var9 /* : HashSet[MClassType] */;
val* var10 /* : HashSet[MClassType] */;
val* var12 /* : HashSet[MClassType] */;
short int var13 /* : Bool */;
val* var14 /* : HashSet[MClassType] */;
val* var16 /* : HashSet[MClassType] */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var20 /* : HashSet[MClass] */;
val* var22 /* : HashSet[MClass] */;
short int var23 /* : Bool */;
val* var24 /* : HashSet[MClass] */;
val* var26 /* : HashSet[MClass] */;
val* var27 /* : HashSet[MMethod] */;
val* var29 /* : HashSet[MMethod] */;
val* var_ /* var : HashSet[MMethod] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : Iterator[MMethod] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_p /* var p: MMethod */;
val* var34 /* : HashSet[MMethodDef] */;
val* var36 /* : HashSet[MMethodDef] */;
val* var_37 /* var : HashSet[MMethodDef] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : Iterator[MMethodDef] */;
short int var40 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_p43 /* var p: MMethodDef */;
val* var44 /* : Array[MMethod] */;
val* var46 /* : Array[MMethod] */;
val* var_47 /* var : Array[MMethod] */;
val* var48 /* : IndexedIterator[nullable Object] */;
val* var_49 /* var : IndexedIterator[MMethod] */;
short int var50 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_p53 /* var p: MMethod */;
val* var54 /* : HashSet[MMethod] */;
val* var56 /* : HashSet[MMethod] */;
val* var57 /* : Array[MMethod] */;
val* var59 /* : Array[MMethod] */;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var64 /* : MModule */;
val* var66 /* : MModule */;
val* var67 /* : Set[MClassDef] */;
val* var_68 /* var : Set[MClassDef] */;
val* var69 /* : Iterator[nullable Object] */;
val* var_70 /* var : Iterator[MClassDef] */;
short int var71 /* : Bool */;
val* var73 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var74 /* : ModelBuilder */;
val* var76 /* : ModelBuilder */;
val* var77 /* : Array[AAttrPropdef] */;
val* var_78 /* var : Array[AAttrPropdef] */;
val* var79 /* : IndexedIterator[nullable Object] */;
val* var_80 /* var : IndexedIterator[AAttrPropdef] */;
short int var81 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var89 /* : nullable MMethodDef */;
val* var91 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var92 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
val* var93 /* : nullable AExpr */;
val* var95 /* : nullable AExpr */;
val* var96 /* : nullable AExpr */;
val* var98 /* : nullable AExpr */;
var_recv = p0;
var_mtype = p1;
{
var = ((short int(*)(val* self))(var_recv->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_recv); /* need_anchor on <var_recv:MClassType>*/
}
var1 = !var;
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 353);
fatal_exit(1);
}
{
var2 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MClassType>*/
}
if (var2){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_types (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashSet___core__abstract_collection__Collection__has(var3, var_mtype);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_types (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_mtype); /* Direct call hash_collection$HashSet$add on <var7:HashSet[MClassType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = core___core__HashSet___core__abstract_collection__Collection__has(var10, var_mtype);
}
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_types (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var14, var_mtype); /* Direct call hash_collection$HashSet$add on <var14:HashSet[MClassType]>*/
}
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var19 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mclass = var17;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (self) on <self:RapidTypeAnalysis> */
var22 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashSet___core__abstract_collection__Collection__has(var20, var_mclass);
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (self) on <self:RapidTypeAnalysis> */
var26 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, var_mclass); /* Direct call hash_collection$HashSet$add on <var24:HashSet[MClass]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$totry_methods (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[MMethod]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[MMethod]>*/
}
var_p = var33;
{
nitc___nitc__RapidTypeAnalysis___try_send(self, var_mtype, var_p); /* Direct call rapid_type_analysis$RapidTypeAnalysis$try_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[MMethod]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_super_sends (self) on <self:RapidTypeAnalysis> */
var36 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_37 = var34;
{
var38 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:Iterator[MMethodDef]>*/
}
if (var40){
} else {
goto BREAK_label41;
}
{
var42 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:Iterator[MMethodDef]>*/
}
var_p43 = var42;
{
nitc___nitc__RapidTypeAnalysis___try_super_send(self, var_mtype, var_p43); /* Direct call rapid_type_analysis$RapidTypeAnalysis$try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:Iterator[MMethodDef]>*/
}
}
BREAK_label41: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:Iterator[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var46 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_47 = var44;
{
var48 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = ((short int(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_49); /* is_ok on <var_49:IndexedIterator[MMethod]>*/
}
if (var50){
} else {
goto BREAK_label51;
}
{
var52 = ((val*(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_49); /* item on <var_49:IndexedIterator[MMethod]>*/
}
var_p53 = var52;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$totry_methods (self) on <self:RapidTypeAnalysis> */
var56 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__RemovableCollection__remove(var54, var_p53); /* Direct call hash_collection$HashSet$remove on <var54:HashSet[MMethod]>*/
}
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_49); /* next on <var_49:IndexedIterator[MMethod]>*/
}
}
BREAK_label51: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_49); /* finish on <var_49:IndexedIterator[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var59 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var57); /* Direct call array$AbstractArray$clear on <var57:Array[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nitc___nitc__MClassType___MType__anchor_to(var_mtype, var60, var_recv);
}
var_bound_mtype = var63;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var66 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_bound_mtype, var64);
}
var_68 = var67;
{
var69 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_68); /* iterator on <var_68:Set[MClassDef]>*/
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:Iterator[MClassDef]>*/
}
if (var71){
} else {
goto BREAK_label72;
}
{
var73 = ((val*(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:Iterator[MClassDef]>*/
}
var_cd = var73;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (self) on <self:RapidTypeAnalysis> */
var76 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nitc__modelize_property___ModelBuilder___collect_attr_propdef(var74, var_cd);
}
var_78 = var77;
{
var79 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_78);
}
var_80 = var79;
for(;;) {
{
var81 = ((short int(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_80); /* is_ok on <var_80:IndexedIterator[AAttrPropdef]>*/
}
if (var81){
} else {
goto BREAK_label82;
}
{
var83 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_80); /* item on <var_80:IndexedIterator[AAttrPropdef]>*/
}
var_npropdef = var83;
{
{ /* Inline modelize_property$AAttrPropdef$has_value (var_npropdef) on <var_npropdef:AAttrPropdef> */
var86 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:AAttrPropdef> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var87 = !var84;
if (var87){
goto BREAK_label88;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (var_npropdef) on <var_npropdef:AAttrPropdef> */
var91 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:AAttrPropdef> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 379);
fatal_exit(1);
}
var_mpropdef = var89;
var92 = NEW_nitc__RapidTypeVisitor(&type_nitc__RapidTypeVisitor);
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var92, self); /* analysis= on <var92:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var92, var_bound_mtype); /* receiver= on <var92:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var92, var_mpropdef); /* mpropdef= on <var92:RapidTypeVisitor>*/
}
{
((void(*)(val* self))(var92->class->vft[COLOR_core__kernel__Object__init]))(var92); /* init on <var92:RapidTypeVisitor>*/
}
var_v = var92;
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (var_npropdef) on <var_npropdef:AAttrPropdef> */
var95 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <var_npropdef:AAttrPropdef> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var93); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_block (var_npropdef) on <var_npropdef:AAttrPropdef> */
var98 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <var_npropdef:AAttrPropdef> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var96); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:RapidTypeVisitor>*/
}
BREAK_label88: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_80); /* next on <var_80:IndexedIterator[AAttrPropdef]>*/
}
}
BREAK_label82: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_80); /* finish on <var_80:IndexedIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:Iterator[MClassDef]>*/
}
}
BREAK_label72: (void)0;
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:Iterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$add_cast for (self: RapidTypeAnalysis, MType) */
void nitc___nitc__RapidTypeAnalysis___add_cast(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : HashSet[MType] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var6 /* : HashSet[MType] */;
var_mtype = p0;
{
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var3 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var1, var_mtype); /* Direct call hash_collection$HashSet$add on <var1:HashSet[MType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_cast_types (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var4, var_mtype); /* Direct call hash_collection$HashSet$add on <var4:HashSet[MType]>*/
}
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$try_send for (self: RapidTypeAnalysis, MClassType, MMethod) */
void nitc___nitc__RapidTypeAnalysis___try_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline model$MClassType$mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClass$intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__MType___has_mproperty(var_recv, var9, var_mproperty);
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc___nitc__MProperty___lookup_first_definition(var_mproperty, var14, var_recv);
}
var_d = var17;
{
nitc___nitc__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$add_call for (self: RapidTypeAnalysis, MMethodDef) */
void nitc___nitc__RapidTypeAnalysis___add_call(val* self, val* p0) {
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : HashSet[MMethodDef] */;
val* var2 /* : HashSet[MMethodDef] */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethodDef] */;
val* var7 /* : HashSet[MModule] */;
val* var9 /* : HashSet[MModule] */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : List[MMethodDef] */;
val* var18 /* : List[MMethodDef] */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var22 /* : Array[MPropDef] */;
val* var24 /* : Array[MPropDef] */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
val* var32 /* : Array[MPropDef] */;
val* var34 /* : Array[MPropDef] */;
val* var_ /* var : Array[MMethodDef] */;
val* var35 /* : IndexedIterator[nullable Object] */;
val* var_36 /* var : IndexedIterator[MMethodDef] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var39 /* : HashSet[MMethodDef] */;
val* var41 /* : HashSet[MMethodDef] */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : Array[MMethod] */;
val* var46 /* : Array[MMethod] */;
val* var47 /* : MProperty */;
val* var49 /* : MProperty */;
var_mpropdef = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methoddefs (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashSet___core__abstract_collection__Collection__has(var, var_mpropdef);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methoddefs (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var4, var_mpropdef); /* Direct call hash_collection$HashSet$add on <var4:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_mmodules (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val; /* _live_mmodules on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 85);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var13); /* Direct call hash_collection$HashSet$add on <var7:HashSet[MModule]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$todo (self) on <self:RapidTypeAnalysis> */
var18 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var16, var_mpropdef); /* Direct call abstract_collection$Sequence$add on <var16:List[MMethodDef]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var21 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mproperty = var19;
{
{ /* Inline model$MProperty$mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var24 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var22) on <var22:Array[MPropDef](Array[MMethodDef])> */
var27 = var22->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var22:Array[MPropDef](Array[MMethodDef])> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var25,1l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var31 = var25 <= 1l;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MProperty$mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var34 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ = var32;
{
var35 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_36 = var35;
for(;;) {
{
var37 = ((short int(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_36); /* is_ok on <var_36:IndexedIterator[MMethodDef]>*/
}
if (var37){
} else {
goto BREAK_label;
}
{
var38 = ((val*(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_36); /* item on <var_36:IndexedIterator[MMethodDef]>*/
}
var_d = var38;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methoddefs (self) on <self:RapidTypeAnalysis> */
var41 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = core___core__HashSet___core__abstract_collection__Collection__has(var39, var_d);
}
var43 = !var42;
if (var43){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_36); /* next on <var_36:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_36); /* finish on <var_36:IndexedIterator[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var46 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var44, var47); /* Direct call array$Array$add on <var44:Array[MMethod]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$add_send for (self: RapidTypeAnalysis, MType, MMethod) */
void nitc___nitc__RapidTypeAnalysis___add_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : HashSet[MMethod] */;
val* var2 /* : HashSet[MMethod] */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MMethod] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[MMethod] */;
val* var9 /* : HashSet[MMethod] */;
val* var10 /* : Array[MPropDef] */;
val* var12 /* : Array[MPropDef] */;
long var13 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[MPropDef] */;
val* var21 /* : Array[MPropDef] */;
val* var22 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var23 /* : HashSet[MMethod] */;
val* var25 /* : HashSet[MMethod] */;
val* var26 /* : HashSet[MClass] */;
val* var28 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : Iterator[MClass] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MClassType */;
val* var38 /* : MClassType */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$try_methods (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 179);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashSet___core__abstract_collection__Collection__has(var, var_mproperty);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methods (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var4, var_mproperty); /* Direct call hash_collection$HashSet$add on <var4:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$try_methods (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 179);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_mproperty); /* Direct call hash_collection$HashSet$add on <var7:HashSet[MMethod]>*/
}
{
{ /* Inline model$MProperty$mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var12 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var10) on <var10:Array[MPropDef](Array[MMethodDef])> */
var15 = var10->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var10:Array[MPropDef](Array[MMethodDef])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var13,1l) on <var13:Int> */
var18 = var13 == 1l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline model$MProperty$mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var21 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = core___core__SequenceRead___Collection__first(var19);
}
var_d = var22;
{
nitc___nitc__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_call on <self:RapidTypeAnalysis>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$totry_methods (self) on <self:RapidTypeAnalysis> */
var25 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var23, var_mproperty); /* Direct call hash_collection$HashSet$add on <var23:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (self) on <self:RapidTypeAnalysis> */
var28 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_ = var26;
{
var29 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:Iterator[MClass]>*/
}
if (var31){
} else {
goto BREAK_label;
}
{
var32 = ((val*(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:Iterator[MClass]>*/
}
var_c = var32;
{
{ /* Inline model$MClass$intro (var_c) on <var_c:MClass> */
var35 = var_c->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_c:MClass> */
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
{ /* Inline model$MClassDef$bound_mtype (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___try_send(self, var36, var_mproperty); /* Direct call rapid_type_analysis$RapidTypeAnalysis$try_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:Iterator[MClass]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$try_super_send for (self: RapidTypeAnalysis, MClassType, MMethodDef) */
void nitc___nitc__RapidTypeAnalysis___try_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : Set[MClassDef] */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mpropdef = p1;
{
{ /* Inline model$MClassType$mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClass$intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_recv, var9);
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var12, var13); /* has on <var12:Set[MClassDef]>*/
}
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (self) on <self:RapidTypeAnalysis> */
var20 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__MPropDef___lookup_next_definition(var_mpropdef, var18, var_recv);
}
var_d = var21;
{
nitc___nitc__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$add_super_send for (self: RapidTypeAnalysis, MType, MMethodDef) */
void nitc___nitc__RapidTypeAnalysis___add_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[MMethodDef] */;
val* var5 /* : HashSet[MMethodDef] */;
short int var6 /* : Bool */;
val* var7 /* : HashSet[MMethodDef] */;
val* var9 /* : HashSet[MMethodDef] */;
val* var10 /* : HashSet[MClass] */;
val* var12 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[MClass] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var17 /* : MClassDef */;
val* var19 /* : MClassDef */;
val* var20 /* : MClassType */;
val* var22 /* : MClassType */;
var_recv = p0;
var_mpropdef = p1;
{
{ /* Inline modelize_property$MPropDef$has_supercall (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 452);
fatal_exit(1);
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_super_sends (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashSet___core__abstract_collection__Collection__has(var3, var_mpropdef);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_super_sends (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_mpropdef); /* Direct call hash_collection$HashSet$add on <var7:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_classes (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MClass]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MClass]>*/
}
var_c = var16;
{
{ /* Inline model$MClass$intro (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var17) on <var17:MClassDef> */
var22 = var17->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var17:MClassDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___try_super_send(self, var20, var_mpropdef); /* Direct call rapid_type_analysis$RapidTypeAnalysis$try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MClass]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeAnalysis$init for (self: RapidTypeAnalysis) */
void nitc___nitc__RapidTypeAnalysis___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__RapidTypeAnalysis___core__kernel__Object__init]))(self); /* init on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$analysis for (self: RapidTypeVisitor): RapidTypeAnalysis */
val* nitc___nitc__RapidTypeVisitor___analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeVisitor$analysis= for (self: RapidTypeVisitor, RapidTypeAnalysis) */
void nitc___nitc__RapidTypeVisitor___analysis_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val = p0; /* _analysis on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$receiver for (self: RapidTypeVisitor): MClassType */
val* nitc___nitc__RapidTypeVisitor___receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeVisitor$receiver= for (self: RapidTypeVisitor, MClassType) */
void nitc___nitc__RapidTypeVisitor___receiver_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val = p0; /* _receiver on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$mpropdef= for (self: RapidTypeVisitor, MPropDef) */
void nitc___nitc__RapidTypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$init for (self: RapidTypeVisitor) */
void nitc___nitc__RapidTypeVisitor___core__kernel__Object__init(val* self) {
val* var /* : MClassType */;
val* var2 /* : MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__RapidTypeVisitor___core__kernel__Object__init]))(self); /* init on <self:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$receiver (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nitc__model__MType__need_anchor]))(var); /* need_anchor on <var:MClassType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 471);
fatal_exit(1);
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$visit for (self: RapidTypeVisitor, ANode) */
void nitc___nitc__RapidTypeVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
var_n = p0;
/* <var_n:ANode> isa AExpr */
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_n); /* mtype on <var_n:ANode(AExpr)>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var2,((val*)NULL)) on <var2:nullable MType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable MType(MType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
var1 = var_;
} else {
{
{ /* Inline typing$AExpr$is_typed (var_n) on <var_n:ANode(AExpr)> */
var10 = var_n->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <var_n:ANode(AExpr)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var1 = var8;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self); /* accept_rapid_type_visitor on <var_n:ANode(AExpr)>*/
}
{
{ /* Inline typing$AExpr$implicit_cast_to (var_n) on <var_n:ANode(AExpr)> */
var13 = var_n->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_n:ANode(AExpr)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_implicit_cast_to = var11;
if (var_implicit_cast_to == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_implicit_cast_to,((val*)NULL)) on <var_implicit_cast_to:nullable MType> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other); /* == on <var_implicit_cast_to:nullable MType(MType)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
nitc___nitc__RapidTypeVisitor___add_cast_type(self, var_implicit_cast_to); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_cast_type on <self:RapidTypeVisitor>*/
}
} else {
}
} else {
}
} else {
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self); /* accept_rapid_type_visitor on <var_n:ANode>*/
}
}
/* <var_n:ANode> isa AAnnotations */
cltype20 = type_nitc__AAnnotations.color;
idtype21 = type_nitc__AAnnotations.id;
if(cltype20 >= var_n->type->table_size) {
var19 = 0;
} else {
var19 = var_n->type->type_table[cltype20] == idtype21;
}
var22 = !var19;
if (var22){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$cleanup_type for (self: RapidTypeVisitor, MType): nullable MClassType */
val* nitc___nitc__RapidTypeVisitor___cleanup_type(val* self, val* p0) {
val* var /* : nullable MClassType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RapidTypeAnalysis */;
val* var3 /* : RapidTypeAnalysis */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : MType */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var3 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (var1) on <var1:RapidTypeAnalysis> */
var6 = var1->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var1:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$receiver (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var4, var7); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var10;
/* <var_mtype:MType> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype] == idtype;
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var12;
/* <var_mtype:MType> isa MClassType */
cltype14 = type_nitc__MClassType.color;
idtype15 = type_nitc__MClassType.id;
if(cltype14 >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 497);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType(MClassType)>*/
}
var17 = !var16;
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 498);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeVisitor$get_method for (self: RapidTypeVisitor, MType, String): MMethod */
val* nitc___nitc__RapidTypeVisitor___get_method(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_recv /* var recv: MType */;
val* var_name /* var name: String */;
val* var1 /* : nullable MClassType */;
val* var_mtype /* var mtype: nullable MClassType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : RapidTypeAnalysis */;
val* var9 /* : RapidTypeAnalysis */;
val* var10 /* : ModelBuilder */;
val* var12 /* : ModelBuilder */;
val* var13 /* : nullable ANode */;
val* var15 /* : nullable ANode */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : RapidTypeAnalysis */;
val* var21 /* : RapidTypeAnalysis */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MMethod */;
var_recv = p0;
var_name = p1;
{
var1 = nitc___nitc__RapidTypeVisitor___cleanup_type(self, var_recv);
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MClassType(MClassType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 505);
fatal_exit(1);
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$modelbuilder (var7) on <var7:RapidTypeAnalysis> */
var12 = var7->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <var7:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes$Visitor$current_node (self) on <self:RapidTypeVisitor> */
var15 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:RapidTypeVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 506);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var18 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var21 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (var19) on <var19:RapidTypeAnalysis> */
var24 = var19->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var19:RapidTypeAnalysis> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ModelBuilder___force_get_primitive_method(var10, var13, var_name, var16, var22);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis$RapidTypeVisitor$add_type for (self: RapidTypeVisitor, MClassType) */
void nitc___nitc__RapidTypeVisitor___add_type(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$receiver (self) on <self:RapidTypeVisitor> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_new(var, var3, var_mtype); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_new on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send for (self: RapidTypeVisitor, MType, MMethod) */
void nitc___nitc__RapidTypeVisitor___add_monomorphic_send(val* self, val* p0, val* p1) {
val* var_mtype /* var mtype: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : HashSet[MMethod] */;
val* var5 /* : HashSet[MMethod] */;
val* var6 /* : RapidTypeAnalysis */;
val* var8 /* : RapidTypeAnalysis */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_mtype = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_methods (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var3, var_mproperty); /* Direct call hash_collection$HashSet$add on <var3:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var8 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var9 = 0;
} else {
var9 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 514);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeAnalysis___try_send(var6, var_mtype, var_mproperty); /* Direct call rapid_type_analysis$RapidTypeAnalysis$try_send on <var6:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$add_cast_type for (self: RapidTypeVisitor, MType) */
void nitc___nitc__RapidTypeVisitor___add_cast_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_cast(var, var_mtype); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_cast on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$RapidTypeVisitor$add_callsite for (self: RapidTypeVisitor, nullable CallSite) */
void nitc___nitc__RapidTypeVisitor___add_callsite(val* self, val* p0) {
val* var_callsite /* var callsite: nullable CallSite */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MMethodDef */;
val* var7 /* : MMethodDef */;
val* var8 /* : Array[MProperty] */;
val* var10 /* : Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[MProperty] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_m /* var m: MProperty */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : RapidTypeAnalysis */;
val* var18 /* : RapidTypeAnalysis */;
val* var19 /* : MType */;
val* var21 /* : MType */;
val* var22 /* : RapidTypeAnalysis */;
val* var24 /* : RapidTypeAnalysis */;
val* var25 /* : MType */;
val* var27 /* : MType */;
val* var28 /* : MMethod */;
val* var30 /* : MMethod */;
val* var31 /* : RapidTypeAnalysis */;
val* var33 /* : RapidTypeAnalysis */;
val* var34 /* : HashSet[CallSite] */;
val* var36 /* : HashSet[CallSite] */;
var_callsite = p0;
if (var_callsite == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var7 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var5) on <var5:MMethodDef> */
var10 = var5->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var5:MMethodDef> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[MProperty]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[MProperty]>*/
}
var_m = var14;
/* <var_m:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_m->type->table_size) {
var15 = 0;
} else {
var15 = var_m->type->type_table[cltype] == idtype;
}
if (var15){
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var18 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing$CallSite$recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var21 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_send(var16, var19, var_m); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_send on <var16:RapidTypeAnalysis>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[MProperty]>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var24 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline typing$CallSite$recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var27 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var30 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_send(var22, var25, var28); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_send on <var22:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (self) on <self:RapidTypeVisitor> */
var33 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_callsites (var31) on <var31:RapidTypeAnalysis> */
var36 = var31->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <var31:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 89);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var34, var_callsite); /* Direct call hash_collection$HashSet$add on <var34:HashSet[CallSite]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis$ANode$accept_rapid_type_visitor for (self: ANode, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ANode___accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method rapid_type_analysis$AExpr$allocate_mtype for (self: AExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AExpr___allocate_mtype(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
var_mtype = var;
/* <var_mtype:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var_mtype == NULL) {
var1 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
/* <var3:nullable MType> isa MClassType */
cltype5 = type_nitc__MClassType.color;
idtype6 = type_nitc__MClassType.id;
if(var3 == NULL) {
var4 = 0;
} else {
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 547);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var3); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AIntegerExpr$accept_rapid_type_visitor for (self: AIntegerExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AIntegerExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis$AExpr$allocate_mtype on <self:AIntegerExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AFloatExpr$accept_rapid_type_visitor for (self: AFloatExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AFloatExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis$AExpr$allocate_mtype on <self:AFloatExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ACharExpr$accept_rapid_type_visitor for (self: ACharExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ACharExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis$AExpr$allocate_mtype on <self:ACharExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AArrayExpr$accept_rapid_type_visitor for (self: AArrayExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AArrayExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var4 /* : RapidTypeAnalysis */;
val* var6 /* : RapidTypeAnalysis */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Array[MType] */;
val* var11 /* : nullable Object */;
val* var12 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var13 /* : nullable MClassType */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
val* var22 /* : nullable CallSite */;
val* var24 /* : nullable CallSite */;
val* var25 /* : nullable CallSite */;
val* var27 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 575);
fatal_exit(1);
}
var_mtype = var;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (var_v) on <var_v:RapidTypeVisitor> */
var6 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (var4) on <var4:RapidTypeAnalysis> */
var9 = var4->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var4:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var11 = core___core__SequenceRead___Collection__first(var10);
}
{
var12 = nitc__model___MModule___native_array_type(var7, var11);
}
var_native = var12;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
var13 = nitc___nitc__RapidTypeVisitor___cleanup_type(var_v, var_mtype);
}
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 579);
fatal_exit(1);
}
var_mtype = var13;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "with_native";
var17 = (val*)(11l<<2|1);
var18 = (val*)(11l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce = var14;
}
{
var21 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_mtype, var14);
}
var_prop = var21;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_mtype, var_prop); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AArrayExpr$with_capacity_callsite (self) on <self:AArrayExpr> */
var24 = self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var22); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AArrayExpr$push_callsite (self) on <self:AArrayExpr> */
var27 = self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var25); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AStringFormExpr$accept_rapid_type_visitor for (self: AStringFormExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : MClassType */;
val* var_native /* var native: MClassType */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
val* var15 /* : nullable CallSite */;
val* var17 /* : nullable CallSite */;
val* var18 /* : nullable CallSite */;
val* var20 /* : nullable CallSite */;
val* var21 /* : nullable CallSite */;
val* var23 /* : nullable CallSite */;
val* var24 /* : nullable CallSite */;
val* var26 /* : nullable CallSite */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (var_v) on <var_v:RapidTypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__model___MModule___c_string_type(var3);
}
var_native = var6;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "to_s_unsafe";
var10 = (val*)(11l<<2|1);
var11 = (val*)(11l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
var14 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_native, var7);
}
var_prop = var14;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_native, var_prop); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AugmentedStringFormExpr$to_re (self) on <self:AStringFormExpr> */
var17 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val; /* _to_re on <self:AStringFormExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var15); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AugmentedStringFormExpr$ignore_case (self) on <self:AStringFormExpr> */
var20 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val; /* _ignore_case on <self:AStringFormExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var18); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AugmentedStringFormExpr$newline (self) on <self:AStringFormExpr> */
var23 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val; /* _newline on <self:AStringFormExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var21); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AugmentedStringFormExpr$extended (self) on <self:AStringFormExpr> */
var26 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val; /* _extended on <self:AStringFormExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var24); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AugmentedStringFormExpr$to_bytes_with_copy (self) on <self:AStringFormExpr> */
var29 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val; /* _to_bytes_with_copy on <self:AStringFormExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var27); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ASuperstringExpr$accept_rapid_type_visitor for (self: ASuperstringExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASuperstringExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : MClassType */;
val* var_object_type /* var object_type: MClassType */;
val* var7 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var8 /* : MClassType */;
val* var_nattype /* var nattype: MClassType */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
val* var16 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : MMethod */;
val* var_prop2 /* var prop2: MMethod */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
val* var34 /* : MMethod */;
var_v = p0;
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (var_v) on <var_v:RapidTypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$mainmodule (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
var6 = nitc__model___MModule___string_type(var_mmodule);
}
var_object_type = var6;
{
var7 = nitc__model___MModule___array_type(var_mmodule, var_object_type);
}
var_arraytype = var7;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_arraytype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
var8 = nitc__model___MModule___native_array_type(var_mmodule, var_object_type);
}
var_nattype = var8;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_nattype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "join";
var12 = (val*)(4l<<2|1);
var13 = (val*)(4l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
var16 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_arraytype, var9);
}
var_prop = var16;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "with_native";
var21 = (val*)(11l<<2|1);
var22 = (val*)(11l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
{
var25 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_arraytype, var18);
}
var_prop2 = var25;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop2); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "native_to_s";
var30 = (val*)(11l<<2|1);
var31 = (val*)(11l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
var34 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_nattype, var27);
}
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_nattype, var34); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ACrangeExpr$accept_rapid_type_visitor for (self: ACrangeExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ACrangeExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:ACrangeExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
/* <var_mtype:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var_mtype == NULL) {
var3 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$ARangeExpr$init_callsite (self) on <self:ACrangeExpr> */
var7 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var5); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AOrangeExpr$accept_rapid_type_visitor for (self: AOrangeExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AOrangeExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AOrangeExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
/* <var_mtype:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var_mtype == NULL) {
var3 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$ARangeExpr$init_callsite (self) on <self:AOrangeExpr> */
var7 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var5); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ATrueExpr$accept_rapid_type_visitor for (self: ATrueExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ATrueExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis$AExpr$allocate_mtype on <self:ATrueExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AFalseExpr$accept_rapid_type_visitor for (self: AFalseExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AFalseExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis$AExpr$allocate_mtype on <self:AFalseExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AIsaExpr$accept_rapid_type_visitor for (self: AIsaExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AIsaExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_cast_type /* var cast_type: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var_v = p0;
{
{ /* Inline typing$AIsaExpr$cast_type (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_cast_type = var;
if (var_cast_type == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_cast_type,((val*)NULL)) on <var_cast_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_cast_type,var_other) on <var_cast_type:nullable MType(MType)> */
var8 = var_cast_type == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_cast_type(var_v, var_cast_type); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AAsCastExpr$accept_rapid_type_visitor for (self: AAsCastExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AAsCastExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$mtype (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_cast_type(var_v, var_mtype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ASendExpr$accept_rapid_type_visitor for (self: ASendExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$ASendExpr$callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ASendReassignFormExpr$accept_rapid_type_visitor for (self: ASendReassignFormExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASendReassignFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var8 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$ASendExpr$callsite (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:ASendReassignFormExpr> */
var5 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$ASendReassignFormExpr$write_callsite (self) on <self:ASendReassignFormExpr> */
var8 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var6); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AVarReassignExpr$accept_rapid_type_visitor for (self: AVarReassignExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AVarReassignExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AAttrReassignExpr$accept_rapid_type_visitor for (self: AAttrReassignExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AAttrReassignExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$ASuperExpr$accept_rapid_type_visitor for (self: ASuperExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASuperExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : RapidTypeAnalysis */;
val* var10 /* : RapidTypeAnalysis */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var14 /* : nullable MMethodDef */;
val* var16 /* : nullable MMethodDef */;
var_v = p0;
{
{ /* Inline typing$ASuperExpr$callsite (self) on <self:ASuperExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_callsite = var;
if (var_callsite == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var_callsite); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$analysis (var_v) on <var_v:RapidTypeVisitor> */
var10 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline rapid_type_analysis$RapidTypeVisitor$receiver (var_v) on <var_v:RapidTypeVisitor> */
var13 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing$ASuperExpr$mpropdef (self) on <self:ASuperExpr> */
var16 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 711);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(var8, var11, var14); /* Direct call rapid_type_analysis$RapidTypeAnalysis$add_super_send on <var8:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis$AForGroup$accept_rapid_type_visitor for (self: AForGroup, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AForGroup___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[Variable] */;
val* var8 /* : nullable Array[Variable] */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable CallSite */;
val* var17 /* : nullable CallSite */;
val* var18 /* : nullable Array[Variable] */;
val* var20 /* : nullable Array[Variable] */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var30 /* : nullable CallSite */;
val* var32 /* : nullable CallSite */;
val* var33 /* : nullable CallSite */;
val* var35 /* : nullable CallSite */;
val* var36 /* : nullable CallSite */;
val* var38 /* : nullable CallSite */;
val* var_mf /* var mf: nullable CallSite */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
var_v = p0;
{
{ /* Inline typing$AForGroup$method_iterator (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <self:AForGroup> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AForGroup$method_is_ok (self) on <self:AForGroup> */
var5 = self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <self:AForGroup> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var8 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 720);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var6) on <var6:nullable Array[Variable]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var6:nullable Array[Variable]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var9,1l) on <var9:Int> */
var14 = var9 == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline typing$AForGroup$method_item (self) on <self:AForGroup> */
var17 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var15); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var20 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 722);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var18) on <var18:nullable Array[Variable]> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var23 = var18->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var18:nullable Array[Variable]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var21,2l) on <var21:Int> */
var26 = var21 == 2l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline typing$AForGroup$method_key (self) on <self:AForGroup> */
var29 = self->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <self:AForGroup> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var27); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AForGroup$method_item (self) on <self:AForGroup> */
var32 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var30); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 726);
fatal_exit(1);
}
}
{
{ /* Inline typing$AForGroup$method_next (self) on <self:AForGroup> */
var35 = self->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <self:AForGroup> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var33); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$AForGroup$method_finish (self) on <self:AForGroup> */
var38 = self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <self:AForGroup> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_mf = var36;
if (var_mf == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mf,((val*)NULL)) on <var_mf:nullable CallSite> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_mf->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mf, var_other); /* == on <var_mf:nullable CallSite(CallSite)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var_mf); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis$ANewExpr$accept_rapid_type_visitor for (self: ANewExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ANewExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing$ANewExpr$recvtype (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 737);
fatal_exit(1);
}
var_mtype = var;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing$ANewExpr$callsite (self) on <self:ANewExpr> */
var5 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis$RapidTypeVisitor$add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
