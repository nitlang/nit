#include "nit__rapid_type_analysis.sep.0.h"
/* method rapid_type_analysis#ModelBuilder#do_rapid_type_analysis for (self: ModelBuilder, MModule): RapidTypeAnalysis */
val* nit__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0) {
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
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : CsvDocument */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
var_mainmodule = p0;
var1 = NEW_nit__RapidTypeAnalysis(&type_nit__RapidTypeAnalysis);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d]))(var1, self); /* modelbuilder= on <var1:RapidTypeAnalysis>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d]))(var1, var_mainmodule); /* mainmodule= on <var1:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:RapidTypeAnalysis>*/
}
var_analysis = var1;
{
nit___nit__RapidTypeAnalysis___run_analysis(var_analysis); /* Direct call rapid_type_analysis#RapidTypeAnalysis#run_analysis on <var_analysis:RapidTypeAnalysis>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val; /* _opt_log on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 344);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline opts#Option#value (var5) on <var5:OptionBool> */
var10 = var5->attrs[COLOR_opts__Option___value].val; /* _value on <var5:OptionBool> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = (short int)((long)(var8)>>2);
if (var11){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#log_directory (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val; /* _log_directory on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 137);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var20 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = standard__file___String____47d(var15, var18);
}
var_basename = var21;
{
var22 = nit___nit__RapidTypeAnalysis___live_methods_to_tree(var_analysis);
}
if (likely(varonce!=NULL)) {
var23 = varonce;
} else {
var24 = ".rta_methods.txt";
var25 = standard___standard__NativeString___to_s_with_length(var24, 16l);
var23 = var25;
varonce = var23;
}
{
var26 = ((val*(*)(val* self, val* p0))(var_basename->class->vft[COLOR_standard__string__String___43d]))(var_basename, var23); /* + on <var_basename:String>*/
}
{
standard__file___Writable___write_to_file(var22, var26); /* Direct call file#Writable#write_to_file on <var22:OrderedTree[Object]>*/
}
{
var27 = nit___nit__RapidTypeAnalysis___live_types_to_csv(var_analysis);
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ".rta_types.csv";
var31 = standard___standard__NativeString___to_s_with_length(var30, 14l);
var29 = var31;
varonce28 = var29;
}
{
var32 = ((val*(*)(val* self, val* p0))(var_basename->class->vft[COLOR_standard__string__String___43d]))(var_basename, var29); /* + on <var_basename:String>*/
}
{
standard__file___Writable___write_to_file(var27, var32); /* Direct call file#Writable#write_to_file on <var27:CsvDocument>*/
}
} else {
}
var = var_analysis;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder for (self: RapidTypeAnalysis): ModelBuilder */
val* nit___nit__RapidTypeAnalysis___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder= for (self: RapidTypeAnalysis, ModelBuilder) */
void nit___nit__RapidTypeAnalysis___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule for (self: RapidTypeAnalysis): MModule */
val* nit___nit__RapidTypeAnalysis___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule= for (self: RapidTypeAnalysis, MModule) */
void nit___nit__RapidTypeAnalysis___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p0; /* _mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* nit___nit__RapidTypeAnalysis___live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* nit___nit__RapidTypeAnalysis___live_open_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes for (self: RapidTypeAnalysis): HashSet[MClass] */
val* nit___nit__RapidTypeAnalysis___live_classes(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* nit___nit__RapidTypeAnalysis___live_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* nit___nit__RapidTypeAnalysis___live_open_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* nit___nit__RapidTypeAnalysis___live_methoddefs(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 79);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nit___nit__RapidTypeAnalysis___live_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 82);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_callsites for (self: RapidTypeAnalysis): HashSet[CallSite] */
val* nit___nit__RapidTypeAnalysis___live_callsites(val* self) {
val* var /* : HashSet[CallSite] */;
val* var1 /* : HashSet[CallSite] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets_cache for (self: RapidTypeAnalysis): HashMap2[MType, MProperty, Set[MMethodDef]] */
val* nit___nit__RapidTypeAnalysis___live_targets_cache(val* self) {
val* var /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var1 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 88);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets for (self: RapidTypeAnalysis, CallSite): Set[MMethodDef] */
val* nit___nit__RapidTypeAnalysis___live_targets(val* self, val* p0) {
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
val* var61 /* : MModule */;
val* var63 /* : MModule */;
val* var64 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_callsite = p0;
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 610);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
{ /* Inline typing#CallSite#anchor (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nit__typing__CallSite___anchor].val; /* _anchor on <var_callsite:CallSite> */
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
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
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
{ /* Inline typing#CallSite#mmodule (var_callsite) on <var_callsite:CallSite> */
var14 = var_callsite->attrs[COLOR_nit__typing__CallSite___mmodule].val; /* _mmodule on <var_callsite:CallSite> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 613);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var12, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var15;
} else {
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var16;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype] == idtype;
}
if (var17){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var21) on <var21:MClassDef> */
var26 = var21->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var21:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
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
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var29 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mproperty = var27;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 88);
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
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Set[MMethodDef]> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Set[MMethodDef](Set[MMethodDef])>*/
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
var39 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MMethodDef);
{
standard___standard__ArraySet___standard__kernel__Object__init(var39); /* Direct call array#ArraySet#init on <var39:ArraySet[MMethodDef]>*/
}
var_res = var39;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var42 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 88);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var40, var_mtype, var_mproperty, var_res); /* Direct call more_collections#HashMap2#[]= on <var40:HashMap2[MType, MProperty, Set[MMethodDef]]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var45 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ = var43;
{
var46 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_47 = var46;
for(;;) {
{
var48 = ((short int(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_47); /* is_ok on <var_47:Iterator[MClass]>*/
}
if (var48){
{
var49 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_47); /* item on <var_47:Iterator[MClass]>*/
}
var_c = var49;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var52 = var_c->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var50) on <var50:MClassDef> */
var55 = var50->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var50:MClassDef> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_tc = var53;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var58 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit___nit__MType___is_subtype(var_tc, var56, ((val*)NULL), var_mtype);
}
var60 = !var59;
if (var60){
goto BREAK_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var63 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = nit___nit__MProperty___lookup_first_definition(var_mproperty, var61, var_tc);
}
var_d = var64;
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var_res, var_d); /* Direct call array#ArraySet#add on <var_res:nullable Set[MMethodDef](ArraySet[MMethodDef])>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_47); /* next on <var_47:Iterator[MClass]>*/
}
} else {
goto BREAK_label65;
}
}
BREAK_label65: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_47); /* finish on <var_47:Iterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* nit___nit__RapidTypeAnalysis___live_super_sends(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 114);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types_to_csv for (self: RapidTypeAnalysis): CsvDocument */
val* nit___nit__RapidTypeAnalysis___live_types_to_csv(val* self) {
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
val* var19 /* : CsvFormat */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var24 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var_42 /* var : Array[MType] */;
val* var43 /* : ArrayIterator[nullable Object] */;
val* var_44 /* var : ArrayIterator[MType] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var_reso /* var reso: nullable Object */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
int cltype;
int idtype;
short int var_58 /* var : Bool */;
short int var59 /* : Bool */;
val* var60 /* : HashSet[MClassType] */;
val* var62 /* : HashSet[MClassType] */;
short int var63 /* : Bool */;
short int var_64 /* var : Bool */;
val* var65 /* : HashSet[MClassType] */;
val* var67 /* : HashSet[MClassType] */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var_live /* var live: nullable Object */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
short int var77 /* : Bool */;
val* var78 /* : HashSet[MType] */;
val* var80 /* : HashSet[MType] */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
val* var83 /* : HashSet[MType] */;
val* var85 /* : HashSet[MType] */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
val* var_cast /* var cast: nullable Object */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : Array[Object] */;
val* var96 /* : NativeArray[Object] */;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MType]>*/
}
var_typeset = var1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var4 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var_typeset, var2); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var7 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var_typeset, var5); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var10 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var_typeset, var8); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var13 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var_typeset, var11); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
var14 = standard__array___Collection___to_a(var_typeset);
}
var_types = var14;
var15 = NEW_standard__CachedAlphaComparator(&type_standard__CachedAlphaComparator);
{
{ /* Inline kernel#Object#init (var15) on <var15:CachedAlphaComparator> */
RET_LABEL16:(void)0;
}
}
{
standard___standard__Comparator___sort(var15, var_types); /* Direct call sorter#Comparator#sort on <var15:CachedAlphaComparator>*/
}
var17 = NEW_csv__CsvDocument(&type_csv__CsvDocument);
{
{ /* Inline kernel#Object#init (var17) on <var17:CsvDocument> */
RET_LABEL18:(void)0;
}
}
var_res = var17;
var19 = NEW_csv__CsvFormat(&type_csv__CsvFormat);
if (likely(varonce!=NULL)) {
var20 = varonce;
} else {
var21 = "\n";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce = var20;
}
{
((void(*)(val* self, uint32_t p0))(var19->class->vft[COLOR_csv__CsvFormat__delimiter_61d]))(var19, '\"'); /* delimiter= on <var19:CsvFormat>*/
}
{
((void(*)(val* self, uint32_t p0))(var19->class->vft[COLOR_csv__CsvFormat__separator_61d]))(var19, ';'); /* separator= on <var19:CsvFormat>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_csv__CsvFormat__eol_61d]))(var19, var20); /* eol= on <var19:CsvFormat>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19); /* init on <var19:CsvFormat>*/
}
{
{ /* Inline csv#CsvDocument#format= (var_res,var19) on <var_res:CsvDocument> */
var_res->attrs[COLOR_csv__CsvDocument___format].val = var19; /* _format on <var_res:CsvDocument> */
RET_LABEL23:(void)0;
}
}
var24 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var24, 4l); /* Direct call array#Array#with_capacity on <var24:Array[String]>*/
}
var_ = var24;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Type";
var28 = standard___standard__NativeString___to_s_with_length(var27, 4l);
var26 = var28;
varonce25 = var26;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var26); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "Resolution";
var32 = standard___standard__NativeString___to_s_with_length(var31, 10l);
var30 = var32;
varonce29 = var30;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var30); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Liveness";
var36 = standard___standard__NativeString___to_s_with_length(var35, 8l);
var34 = var36;
varonce33 = var34;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var34); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Cast-liveness";
var40 = standard___standard__NativeString___to_s_with_length(var39, 13l);
var38 = var40;
varonce37 = var38;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var38); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
{ /* Inline csv#CsvDocument#header= (var_res,var_) on <var_res:CsvDocument> */
var_res->attrs[COLOR_csv__CsvDocument___header].val = var_; /* _header on <var_res:CsvDocument> */
RET_LABEL41:(void)0;
}
}
var_42 = var_types;
{
var43 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_42);
}
var_44 = var43;
for(;;) {
{
var45 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_44);
}
if (var45){
{
var46 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_44);
}
var_t = var46;
{
var47 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
if (var47){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "OPEN ";
var51 = standard___standard__NativeString___to_s_with_length(var50, 5l);
var49 = var51;
varonce48 = var49;
}
var_reso = var49;
} else {
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "CLOSED";
var55 = standard___standard__NativeString___to_s_with_length(var54, 6l);
var53 = var55;
varonce52 = var53;
}
var_reso = var53;
}
/* <var_t:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_t->type->table_size) {
var57 = 0;
} else {
var57 = var_t->type->type_table[cltype] == idtype;
}
var_58 = var57;
if (var57){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var60, var_t);
}
var_64 = var63;
if (var63){
var59 = var_64;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var67 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var65, var_t);
}
var59 = var68;
}
var56 = var59;
} else {
var56 = var_58;
}
if (var56){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "LIVE";
var72 = standard___standard__NativeString___to_s_with_length(var71, 4l);
var70 = var72;
varonce69 = var70;
}
var_live = var70;
} else {
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "DEAD";
var76 = standard___standard__NativeString___to_s_with_length(var75, 4l);
var74 = var76;
varonce73 = var74;
}
var_live = var74;
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var80 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var78, var_t);
}
var_82 = var81;
if (var81){
var77 = var_82;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var85 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var83, var_t);
}
var77 = var86;
}
if (var77){
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "CAST LIVE";
var90 = standard___standard__NativeString___to_s_with_length(var89, 9l);
var88 = var90;
varonce87 = var88;
}
var_cast = var88;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "CAST DEAD";
var94 = standard___standard__NativeString___to_s_with_length(var93, 9l);
var92 = var94;
varonce91 = var92;
}
var_cast = var92;
}
var95 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var95 = array_instance Array[Object] */
var96 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var96)->values[0] = (val*) var_t;
((struct instance_standard__NativeArray*)var96)->values[1] = (val*) var_reso;
((struct instance_standard__NativeArray*)var96)->values[2] = (val*) var_live;
((struct instance_standard__NativeArray*)var96)->values[3] = (val*) var_cast;
{
((void(*)(val* self, val* p0, long p1))(var95->class->vft[COLOR_standard__array__Array__with_native]))(var95, var96, 4l); /* with_native on <var95:Array[Object]>*/
}
}
{
csv___csv__CsvDocument___add_record(var_res, var95); /* Direct call csv#CsvDocument#add_record on <var_res:CsvDocument>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_44); /* Direct call array#ArrayIterator#next on <var_44:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_44); /* Direct call array#ArrayIterator#finish on <var_44:ArrayIterator[MType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods_to_tree for (self: RapidTypeAnalysis): OrderedTree[Object] */
val* nit___nit__RapidTypeAnalysis___live_methods_to_tree(val* self) {
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
val* var15 /* : ArrayIterator[nullable Object] */;
val* var_16 /* var : ArrayIterator[MMethodDef] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_z /* var z: MMethodDef */;
val* var19 /* : String */;
val* var21 /* : String */;
val* var_zn /* var zn: String */;
val* var22 /* : HashSet[MMethodDef] */;
val* var24 /* : HashSet[MMethodDef] */;
short int var25 /* : Bool */;
val* var26 /* : HashSet[MMethodDef] */;
val* var28 /* : HashSet[MMethodDef] */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : HashSet[MMethodDef] */;
val* var36 /* : HashSet[MMethodDef] */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var44 /* : Sys */;
val* var45 /* : Comparator */;
var1 = NEW_ordered_tree__OrderedTree(&type_ordered_tree__OrderedTree__standard__Object);
{
{ /* Inline kernel#Object#init (var1) on <var1:OrderedTree[Object]> */
RET_LABEL2:(void)0;
}
}
var_tree = var1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 82);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MMethod]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MMethod]>*/
}
var_x = var9;
{
var10 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_x);
}
var_xn = var10;
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, ((val*)NULL), var_xn); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_x) on <var_x:MMethod> */
var13 = var_x->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_x:MMethod> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1963);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_14 = var11;
{
var15 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_14);
}
var_16 = var15;
for(;;) {
{
var17 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_16);
}
if (var17){
{
var18 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_16);
}
var_z = var18;
{
{ /* Inline model#MPropDef#to_s (var_z) on <var_z:MMethodDef> */
var21 = var_z->attrs[COLOR_nit__model__MPropDef___to_s].val; /* _to_s on <var_z:MMethodDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2303);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_zn = var19;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var24 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 79);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var22, var_z);
}
if (var25){
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_xn, var_zn); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var28 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 114);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var26, var_z);
}
if (var29){
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "(super)";
var32 = standard___standard__NativeString___to_s_with_length(var31, 7l);
var30 = var32;
varonce = var30;
}
{
var33 = ((val*(*)(val* self, val* p0))(var_zn->class->vft[COLOR_standard__string__String___43d]))(var_zn, var30); /* + on <var_zn:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_zn, var33); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
} else {
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var36 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 114);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var34, var_z);
}
if (var37){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "(super)";
var41 = standard___standard__NativeString___to_s_with_length(var40, 7l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var_zn->class->vft[COLOR_standard__string__String___43d]))(var_zn, var39); /* + on <var_zn:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_xn, var42); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
} else {
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_16); /* Direct call array#ArrayIterator#next on <var_16:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_16); /* Direct call array#ArrayIterator#finish on <var_16:ArrayIterator[MMethodDef]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MMethod]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MMethod]>*/
}
var44 = glob_sys;
{
var45 = standard__string___Sys___alpha_comparator(var44);
}
{
ordered_tree___ordered_tree__OrderedTree___sort_with(var_tree, var45); /* Direct call ordered_tree#OrderedTree#sort_with on <var_tree:OrderedTree[Object]>*/
}
var = var_tree;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nit___nit__RapidTypeAnalysis___totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 169);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove for (self: RapidTypeAnalysis): Array[MMethod] */
val* nit___nit__RapidTypeAnalysis___totry_methods_to_remove(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nit___nit__RapidTypeAnalysis___try_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 175);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo for (self: RapidTypeAnalysis): List[MMethodDef] */
val* nit___nit__RapidTypeAnalysis___todo(val* self) {
val* var /* : List[MMethodDef] */;
val* var1 /* : List[MMethodDef] */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 179);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#force_alive for (self: RapidTypeAnalysis, String) */
void nit___nit__RapidTypeAnalysis___force_alive(val* self, val* p0) {
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
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
var_classname = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__model___Model___get_mclasses_by_name(var3, var_classname);
}
var_classes = var6;
if (var_classes == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_classes,((val*)NULL)) on <var_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_classes->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_classes, var_other); /* == on <var_classes:nullable Array[MClass](Array[MClass])>*/
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
var12 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_13);
}
if (var14){
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_13);
}
var_c = var15;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var18 = var_c->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var21 = var_c->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_new(self, var16, var19); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_13); /* Direct call array#ArrayIterator#finish on <var_13:ArrayIterator[MClass]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#run_analysis for (self: RapidTypeAnalysis) */
void nit___nit__RapidTypeAnalysis___run_analysis(val* self) {
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
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : nullable MMethod */;
val* var_initprop /* var initprop: nullable MMethod */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MMethod */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : nullable MMethod */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MModule */;
val* var56 /* : MModule */;
val* var57 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : MModule */;
val* var65 /* : MModule */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
val* var70 /* : MClass */;
val* var72 /* : MClass */;
val* var73 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : List[MMethodDef] */;
val* var105 /* : List[MMethodDef] */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : List[MMethodDef] */;
val* var110 /* : List[MMethodDef] */;
val* var111 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var112 /* : MProperty */;
val* var114 /* : MProperty */;
val* var_mmeth /* var mmeth: MMethod */;
val* var115 /* : nullable MSignature */;
val* var117 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : RapidTypeVisitor */;
val* var125 /* : MClassDef */;
val* var127 /* : MClassDef */;
val* var128 /* : MClassType */;
val* var130 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
long var131 /* : Int */;
long var133 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var134 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var140 /* : Bool */;
val* var141 /* : ModelBuilder */;
val* var143 /* : ModelBuilder */;
val* var144 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var145 /* : Array[MParameter] */;
val* var147 /* : Array[MParameter] */;
val* var148 /* : nullable Object */;
val* var149 /* : MType */;
val* var151 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var152 /* : MModule */;
val* var154 /* : MModule */;
val* var155 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var156 /* : MModule */;
val* var158 /* : MModule */;
val* var159 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var160 /* : ModelBuilder */;
val* var162 /* : ModelBuilder */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
val* var167 /* : MClass */;
val* var169 /* : MClass */;
val* var170 /* : MModule */;
val* var172 /* : MModule */;
val* var173 /* : MMethod */;
val* var_sig /* var sig: MSignature */;
val* var174 /* : MPropDef */;
val* var176 /* : MPropDef */;
val* var177 /* : nullable MSignature */;
val* var179 /* : nullable MSignature */;
val* var_osig /* var osig: MSignature */;
long var_i /* var i: Int */;
long var180 /* : Int */;
long var_ /* var : Int */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
int cltype184;
int idtype185;
const char* var_class_name186;
short int var187 /* : Bool */;
val* var188 /* : Array[MParameter] */;
val* var190 /* : Array[MParameter] */;
val* var191 /* : nullable Object */;
val* var192 /* : MType */;
val* var194 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
val* var198 /* : Array[MParameter] */;
val* var200 /* : Array[MParameter] */;
val* var201 /* : nullable Object */;
val* var202 /* : MType */;
val* var204 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
long var205 /* : Int */;
val* var207 /* : ModelBuilder */;
val* var209 /* : ModelBuilder */;
val* var210 /* : nullable ANode */;
val* var_npropdef /* var npropdef: nullable ANode */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
val* var214 /* : nullable MMethodDef */;
val* var216 /* : nullable MMethodDef */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
val* var223 /* : MProperty */;
val* var225 /* : MProperty */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var_229 /* var : Bool */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
val* var232 /* : MClassType */;
val* var234 /* : MClassType */;
val* var235 /* : nullable Object */;
val* var237 /* : nullable Object */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
val* var240 /* : nullable MType */;
val* var242 /* : nullable MType */;
short int var243 /* : Bool */;
int cltype244;
int idtype245;
const char* var_class_name246;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
int cltype254;
int idtype255;
val* var256 /* : nullable Array[CallSite] */;
val* var258 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var_264 /* var : Array[CallSite] */;
val* var265 /* : ArrayIterator[nullable Object] */;
val* var_266 /* var : ArrayIterator[CallSite] */;
short int var267 /* : Bool */;
val* var268 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : MClassType */;
val* var275 /* : MClassType */;
short int var276 /* : Bool */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
short int var_280 /* var : Bool */;
short int var281 /* : Bool */;
short int var283 /* : Bool */;
val* var284 /* : nullable MType */;
val* var286 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var_295 /* var : Bool */;
short int var296 /* : Bool */;
int cltype297;
int idtype298;
short int var_299 /* var : Bool */;
val* var300 /* : MClass */;
val* var302 /* : MClass */;
val* var303 /* : MClassKind */;
val* var305 /* : MClassKind */;
val* var306 /* : Sys */;
val* var307 /* : MClassKind */;
short int var308 /* : Bool */;
short int var310 /* : Bool */;
short int var311 /* : Bool */;
short int var_312 /* var : Bool */;
val* var313 /* : MClass */;
val* var315 /* : MClass */;
val* var316 /* : MClassKind */;
val* var318 /* : MClassKind */;
val* var319 /* : Sys */;
val* var320 /* : MClassKind */;
short int var321 /* : Bool */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
val* var326 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var328 /* : HashSet[MClassType] */;
val* var330 /* : HashSet[MClassType] */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
val* var333 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var334 /* : HashSet[MClassType] */;
val* var336 /* : HashSet[MClassType] */;
val* var_337 /* var : HashSet[MClassType] */;
val* var338 /* : Iterator[nullable Object] */;
val* var_339 /* var : Iterator[MClassType] */;
short int var340 /* : Bool */;
val* var341 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var342 /* : MModule */;
val* var344 /* : MModule */;
short int var345 /* : Bool */;
short int var346 /* : Bool */;
val* var348 /* : MModule */;
val* var350 /* : MModule */;
val* var351 /* : MClassType */;
val* var_rt /* var rt: MClassType */;
val* var352 /* : HashSet[MClassType] */;
val* var354 /* : HashSet[MClassType] */;
short int var355 /* : Bool */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
val* var358 /* : HashSet[MClassType] */;
val* var360 /* : HashSet[MClassType] */;
val* var363 /* : HashSet[MType] */;
val* var365 /* : HashSet[MType] */;
val* var_366 /* var : HashSet[MType] */;
val* var367 /* : Iterator[nullable Object] */;
val* var_368 /* var : Iterator[MType] */;
short int var369 /* : Bool */;
val* var370 /* : nullable Object */;
val* var_ot371 /* var ot: MType */;
val* var372 /* : HashSet[MClassType] */;
val* var374 /* : HashSet[MClassType] */;
val* var_375 /* var : HashSet[MClassType] */;
val* var376 /* : Iterator[nullable Object] */;
val* var_377 /* var : Iterator[MClassType] */;
short int var378 /* : Bool */;
val* var379 /* : nullable Object */;
val* var_t380 /* var t: MClassType */;
val* var381 /* : MModule */;
val* var383 /* : MModule */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
val* var387 /* : MModule */;
val* var389 /* : MModule */;
val* var390 /* : MType */;
val* var_rt391 /* var rt: MType */;
val* var392 /* : HashSet[MType] */;
val* var394 /* : HashSet[MType] */;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__model___MModule___sys_type(var);
}
var_maintype = var3;
if (var_maintype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_maintype,((val*)NULL)) on <var_maintype:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_maintype,var_other) on <var_maintype:nullable MClassType(MClassType)> */
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
nit___nit__RapidTypeAnalysis___add_new(self, var_maintype, var_maintype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
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
var15 = standard___standard__NativeString___to_s_with_length(var14, 4l);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var18 = var_maintype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit__model___MModule___try_get_primitive_method(var10, var13, var16);
}
var_initprop = var19;
if (var_initprop == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_initprop,((val*)NULL)) on <var_initprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_initprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_initprop, var_other23); /* == on <var_initprop:nullable MMethod(MMethod)>*/
}
var25 = !var24;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
nit___nit__RapidTypeAnalysis___add_send(self, var_maintype, var_initprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "run";
var33 = standard___standard__NativeString___to_s_with_length(var32, 3l);
var31 = var33;
varonce30 = var31;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var36 = var_maintype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nit__model___MModule___try_get_primitive_method(var27, var31, var34);
}
if (var37!=NULL) {
var26 = var37;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var40 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "main";
var44 = standard___standard__NativeString___to_s_with_length(var43, 4l);
var42 = var44;
varonce41 = var42;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var47 = var_maintype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nit__model___MModule___try_get_primitive_method(var38, var42, var45);
}
var26 = var48;
}
var_mainprop = var26;
if (var_mainprop == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mainprop,((val*)NULL)) on <var_mainprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var_mainprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mainprop, var_other23); /* == on <var_mainprop:nullable MMethod(MMethod)>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
{
nit___nit__RapidTypeAnalysis___add_send(self, var_maintype, var_mainprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var56 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit__model___MModule___finalizable_type(var54);
}
var_finalizable_type = var57;
if (var_finalizable_type == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other23 = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_finalizable_type, var_other23); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var65 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "finalize";
var69 = standard___standard__NativeString___to_s_with_length(var68, 8l);
var67 = var69;
varonce66 = var67;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var72 = var_finalizable_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nit__model___MModule___try_get_primitive_method(var63, var67, var70);
}
var_finalize_meth = var73;
if (var_finalize_meth == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other23 = ((val*)NULL);
{
var77 = ((short int(*)(val* self, val* p0))(var_finalize_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_finalize_meth, var_other23); /* == on <var_finalize_meth:nullable MMethod(MMethod)>*/
}
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
{
nit___nit__RapidTypeAnalysis___add_send(self, var_finalizable_type, var_finalize_meth); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Bool";
var82 = standard___standard__NativeString___to_s_with_length(var81, 4l);
var80 = var82;
varonce79 = var80;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var80); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Int";
var86 = standard___standard__NativeString___to_s_with_length(var85, 3l);
var84 = var86;
varonce83 = var84;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var84); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Float";
var90 = standard___standard__NativeString___to_s_with_length(var89, 5l);
var88 = var90;
varonce87 = var88;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var88); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "Char";
var94 = standard___standard__NativeString___to_s_with_length(var93, 4l);
var92 = var94;
varonce91 = var92;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var92); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "Pointer";
var98 = standard___standard__NativeString___to_s_with_length(var97, 7l);
var96 = var98;
varonce95 = var96;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var96); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "Byte";
var102 = standard___standard__NativeString___to_s_with_length(var101, 4l);
var100 = var102;
varonce99 = var100;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var100); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
for(;;) {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var105 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 179);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var103);
}
var107 = !var106;
if (var107){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var110 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 179);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
var111 = standard___standard__List___standard__abstract_collection__Sequence__shift(var108);
}
var_mmethoddef = var111;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var114 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_mmeth = var112;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var117 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
var_msignature = var115;
if (var_msignature == NULL) {
var118 = 1; /* is null */
} else {
var118 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var123 = var_msignature == var_other;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
goto BREAK_label;
} else {
}
var124 = NEW_nit__RapidTypeVisitor(&type_nit__RapidTypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var127 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var125) on <var125:MClassDef> */
var130 = var125->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var125:MClassDef> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var124->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var124, self); /* analysis= on <var124:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var124->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var124, var128); /* receiver= on <var124:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var124->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var124, var_mmethoddef); /* mpropdef= on <var124:RapidTypeVisitor>*/
}
{
((void(*)(val* self))(var124->class->vft[COLOR_standard__kernel__Object__init]))(var124); /* init on <var124:RapidTypeVisitor>*/
}
var_v = var124;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var133 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
var_vararg_rank = var131;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var136 = -1l;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_vararg_rank,var134) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var134:Int> isa OTHER */
/* <var134:Int> isa OTHER */
var139 = 1; /* easy <var134:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var140 = var_vararg_rank > var134;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var143 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
var144 = nit__modelize_property___ModelBuilder___mpropdef2node(var141, var_mmethoddef);
}
var_node = var144;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var147 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
var148 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var145, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var148) on <var148:nullable Object(MParameter)> */
var151 = var148->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var148:nullable Object(MParameter)> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
var_elttype = var149;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var154 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
var155 = nit__model___MModule___array_type(var152, var_elttype);
}
var_vararg = var155;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_vararg); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var158 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
var159 = nit__model___MModule___native_array_type(var156, var_elttype);
}
var_native = var159;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var162 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "with_native";
var166 = standard___standard__NativeString___to_s_with_length(var165, 11l);
var164 = var166;
varonce163 = var164;
}
{
{ /* Inline model#MClassType#mclass (var_vararg) on <var_vararg:MClassType> */
var169 = var_vararg->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_vararg:MClassType> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var172 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = nit___nit__ModelBuilder___force_get_primitive_method(var160, var_node, var164, var167, var170);
}
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_vararg, var173); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
} else {
}
var_sig = var_msignature;
{
{ /* Inline model#MProperty#intro (var_mmeth) on <var_mmeth:MMethod> */
var176 = var_mmeth->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmeth:MMethod> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var174) on <var174:MPropDef(MMethodDef)> */
var179 = var174->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var174:MPropDef(MMethodDef)> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 241);
fatal_exit(1);
}
var_osig = var177;
var_i = 0l;
{
var180 = nit___nit__MSignature___arity(var_sig);
}
var_ = var180;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var183 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var183)) {
var_class_name186 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name186);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var187 = var_i < var_;
var181 = var187;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
}
if (var181){
{
{ /* Inline model#MSignature#mparameters (var_osig) on <var_osig:MSignature> */
var190 = var_osig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_osig:MSignature> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
var191 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var188, var_i);
}
{
{ /* Inline model#MParameter#mtype (var191) on <var191:nullable Object(MParameter)> */
var194 = var191->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var191:nullable Object(MParameter)> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
var_origtype = var192;
{
var195 = ((short int(*)(val* self))(var_origtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_origtype); /* need_anchor on <var_origtype:MType>*/
}
var196 = !var195;
if (var196){
goto BREAK_label197;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:MSignature> */
var200 = var_sig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_sig:MSignature> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
var201 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var198, var_i);
}
{
{ /* Inline model#MParameter#mtype (var201) on <var201:nullable Object(MParameter)> */
var204 = var201->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var201:nullable Object(MParameter)> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_paramtype = var202;
{
nit___nit__RapidTypeAnalysis___add_cast(self, var_paramtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <self:RapidTypeAnalysis>*/
}
BREAK_label197: (void)0;
{
var205 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var205;
} else {
goto BREAK_label206;
}
}
BREAK_label206: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var209 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
var210 = nit__modelize_property___ModelBuilder___mpropdef2node(var207, var_mmethoddef);
}
var_npropdef = var210;
/* <var_npropdef:nullable ANode> isa AClassdef */
cltype212 = type_nit__AClassdef.color;
idtype213 = type_nit__AClassdef.id;
if(var_npropdef == NULL) {
var211 = 0;
} else {
if(cltype212 >= var_npropdef->type->table_size) {
var211 = 0;
} else {
var211 = var_npropdef->type->type_table[cltype212] == idtype213;
}
}
if (var211){
{
{ /* Inline modelize_property#AClassdef#mfree_init (var_npropdef) on <var_npropdef:nullable ANode(AClassdef)> */
var216 = var_npropdef->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <var_npropdef:nullable ANode(AClassdef)> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mmethoddef,var214) on <var_mmethoddef:MMethodDef> */
var_other = var214;
{
{ /* Inline kernel#Object#is_same_instance (var_mmethoddef,var_other) on <var_mmethoddef:MMethodDef> */
var221 = var_mmethoddef == var_other;
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
var217 = var219;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
if (unlikely(!var217)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 253);
fatal_exit(1);
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var225 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var223) on <var223:MProperty(MMethod)> */
var228 = var223->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var223:MProperty(MMethod)> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
var_229 = var226;
if (var226){
{
var230 = nit___nit__MPropDef___is_intro(var_mmethoddef);
}
var231 = !var230;
var222 = var231;
} else {
var222 = var_229;
}
if (var222){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var234 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_super_send(self, var232, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
goto BREAK_label;
} else {
{
{ /* Inline model#MMethodDef#constant_value (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var237 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___constant_value].val; /* _constant_value on <var_mmethoddef:MMethodDef> */
var235 = var237;
RET_LABEL236:(void)0;
}
}
if (var235 == NULL) {
var238 = 0; /* is null */
} else {
var238 = 1; /* arg is null and recv is not */
}
if (0) {
var239 = ((short int(*)(val* self, val* p0))((((long)var235&3)?class_info[((long)var235&3)]:var235->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var235, ((val*)NULL)); /* != on <var235:nullable Object>*/
var238 = var239;
}
if (var238){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var242 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var240 = var242;
RET_LABEL241:(void)0;
}
}
/* <var240:nullable MType> isa MClassType */
cltype244 = type_nit__MClassType.color;
idtype245 = type_nit__MClassType.id;
if(var240 == NULL) {
var243 = 0;
} else {
if(cltype244 >= var240->type->table_size) {
var243 = 0;
} else {
var243 = var240->type->type_table[cltype244] == idtype245;
}
}
if (unlikely(!var243)) {
var_class_name246 = var240 == NULL ? "null" : var240->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name246);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 261);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var240); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
goto BREAK_label;
} else {
if (var_npropdef == NULL) {
var247 = 1; /* is null */
} else {
var247 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_npropdef,((val*)NULL)) on <var_npropdef:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_npropdef,var_other) on <var_npropdef:nullable ANode(ANode)> */
var252 = var_npropdef == var_other;
var250 = var252;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
}
var248 = var250;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var247 = var248;
}
if (var247){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 264);
fatal_exit(1);
} else {
}
}
}
/* <var_npropdef:nullable ANode(ANode)> isa AMethPropdef */
cltype254 = type_nit__AMethPropdef.color;
idtype255 = type_nit__AMethPropdef.id;
if(cltype254 >= var_npropdef->type->table_size) {
var253 = 0;
} else {
var253 = var_npropdef->type->type_table[cltype254] == idtype255;
}
if (var253){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var258 = var_npropdef->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <var_npropdef:nullable ANode(AMethPropdef)> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
var_auto_super_inits = var256;
if (var_auto_super_inits == NULL) {
var259 = 0; /* is null */
} else {
var259 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,((val*)NULL)) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other23 = ((val*)NULL);
{
var262 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_auto_super_inits, var_other23); /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/
}
var263 = !var262;
var260 = var263;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
var259 = var260;
}
if (var259){
var_264 = var_auto_super_inits;
{
var265 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_264);
}
var_266 = var265;
for(;;) {
{
var267 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_266);
}
if (var267){
{
var268 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_266);
}
var_auto_super_init = var268;
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var_auto_super_init); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_266); /* Direct call array#ArrayIterator#next on <var_266:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label269;
}
}
BREAK_label269: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_266); /* Direct call array#ArrayIterator#finish on <var_266:ArrayIterator[CallSite]>*/
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var272 = var_npropdef->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <var_npropdef:nullable ANode(AMethPropdef)> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
if (var270){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var275 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_super_send(self, var273, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var279 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
var_280 = var277;
if (var277){
var276 = var_280;
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var283 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_mmethoddef:MMethodDef> */
var281 = var283;
RET_LABEL282:(void)0;
}
}
var276 = var281;
}
if (var276){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var286 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var284 = var286;
RET_LABEL285:(void)0;
}
}
var_ret = var284;
if (var_ret == NULL) {
var290 = 0; /* is null */
} else {
var290 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other23 = ((val*)NULL);
{
var293 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other23); /* == on <var_ret:nullable MType(MType)>*/
}
var294 = !var293;
var291 = var294;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
var290 = var291;
}
var_295 = var290;
if (var290){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype297 = type_nit__MClassType.color;
idtype298 = type_nit__MClassType.id;
if(cltype297 >= var_ret->type->table_size) {
var296 = 0;
} else {
var296 = var_ret->type->type_table[cltype297] == idtype298;
}
var289 = var296;
} else {
var289 = var_295;
}
var_299 = var289;
if (var289){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var302 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var300) on <var300:MClass> */
var305 = var300->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var300:MClass> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
var306 = glob_sys;
{
var307 = nit__model___standard__Sys___abstract_kind(var306);
}
{
{ /* Inline kernel#Object#!= (var303,var307) on <var303:MClassKind> */
var_other23 = var307;
{
var310 = ((short int(*)(val* self, val* p0))(var303->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var303, var_other23); /* == on <var303:MClassKind>*/
}
var311 = !var310;
var308 = var311;
goto RET_LABEL309;
RET_LABEL309:(void)0;
}
}
var288 = var308;
} else {
var288 = var_299;
}
var_312 = var288;
if (var288){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var315 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var313) on <var313:MClass> */
var318 = var313->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var313:MClass> */
if (unlikely(var318 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
var319 = glob_sys;
{
var320 = nit__model___standard__Sys___interface_kind(var319);
}
{
{ /* Inline kernel#Object#!= (var316,var320) on <var316:MClassKind> */
var_other23 = var320;
{
var323 = ((short int(*)(val* self, val* p0))(var316->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var316, var_other23); /* == on <var316:MClassKind>*/
}
var324 = !var323;
var321 = var324;
goto RET_LABEL322;
RET_LABEL322:(void)0;
}
}
var287 = var321;
} else {
var287 = var_312;
}
if (var287){
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_ret); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
}
} else {
}
{
nit___nit__Visitor___enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
} else {
goto BREAK_label325;
}
BREAK_label: (void)0;
}
BREAK_label325: (void)0;
var326 = NEW_standard__List(&type_standard__List__nit__MClassType);
{
{ /* Inline list#List#init (var326) on <var326:List[MClassType]> */
RET_LABEL327:(void)0;
}
}
var_todo_types = var326;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var330 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var_todo_types, var328); /* Direct call abstract_collection#SimpleCollection#add_all on <var_todo_types:List[MClassType]>*/
}
for(;;) {
{
var331 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var_todo_types);
}
var332 = !var331;
if (var332){
{
var333 = standard___standard__List___standard__abstract_collection__Sequence__shift(var_todo_types);
}
var_t = var333;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var336 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
var_337 = var334;
{
var338 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_337);
}
var_339 = var338;
for(;;) {
{
var340 = ((short int(*)(val* self))((((long)var_339&3)?class_info[((long)var_339&3)]:var_339->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_339); /* is_ok on <var_339:Iterator[MClassType]>*/
}
if (var340){
{
var341 = ((val*(*)(val* self))((((long)var_339&3)?class_info[((long)var_339&3)]:var_339->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_339); /* item on <var_339:Iterator[MClassType]>*/
}
var_ot = var341;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var344 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var344 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
{
var345 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_ot->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_ot, var_t, var_t, var342); /* can_resolve_for on <var_ot:MClassType>*/
}
var346 = !var345;
if (var346){
goto BREAK_label347;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var350 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var350 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var348 = var350;
RET_LABEL349:(void)0;
}
}
{
var351 = nit___nit__MClassType___MType__anchor_to(var_ot, var348, var_t);
}
var_rt = var351;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var354 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
var355 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var352, var_rt);
}
if (var355){
goto BREAK_label347;
} else {
}
{
var356 = nit___nit__RapidTypeAnalysis___check_depth(self, var_rt);
}
var357 = !var356;
if (var357){
goto BREAK_label347;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var360 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var360 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var358, var_rt); /* Direct call hash_collection#HashSet#add on <var358:HashSet[MClassType]>*/
}
{
standard___standard__Sequence___SimpleCollection__add(var_todo_types, var_rt); /* Direct call abstract_collection#Sequence#add on <var_todo_types:List[MClassType]>*/
}
BREAK_label347: (void)0;
{
((void(*)(val* self))((((long)var_339&3)?class_info[((long)var_339&3)]:var_339->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_339); /* next on <var_339:Iterator[MClassType]>*/
}
} else {
goto BREAK_label361;
}
}
BREAK_label361: (void)0;
{
((void(*)(val* self))((((long)var_339&3)?class_info[((long)var_339&3)]:var_339->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_339); /* finish on <var_339:Iterator[MClassType]>*/
}
} else {
goto BREAK_label362;
}
}
BREAK_label362: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var365 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var365 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
fatal_exit(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
var_366 = var363;
{
var367 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_366);
}
var_368 = var367;
for(;;) {
{
var369 = ((short int(*)(val* self))((((long)var_368&3)?class_info[((long)var_368&3)]:var_368->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_368); /* is_ok on <var_368:Iterator[MType]>*/
}
if (var369){
{
var370 = ((val*(*)(val* self))((((long)var_368&3)?class_info[((long)var_368&3)]:var_368->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_368); /* item on <var_368:Iterator[MType]>*/
}
var_ot371 = var370;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var374 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var374 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var372 = var374;
RET_LABEL373:(void)0;
}
}
var_375 = var372;
{
var376 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_375);
}
var_377 = var376;
for(;;) {
{
var378 = ((short int(*)(val* self))((((long)var_377&3)?class_info[((long)var_377&3)]:var_377->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_377); /* is_ok on <var_377:Iterator[MClassType]>*/
}
if (var378){
{
var379 = ((val*(*)(val* self))((((long)var_377&3)?class_info[((long)var_377&3)]:var_377->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_377); /* item on <var_377:Iterator[MClassType]>*/
}
var_t380 = var379;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var383 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
{
var384 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_ot371->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_ot371, var_t380, var_t380, var381); /* can_resolve_for on <var_ot371:MType>*/
}
var385 = !var384;
if (var385){
goto BREAK_label386;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var389 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var389 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var387 = var389;
RET_LABEL388:(void)0;
}
}
{
var390 = ((val*(*)(val* self, val* p0, val* p1))(var_ot371->class->vft[COLOR_nit__model__MType__anchor_to]))(var_ot371, var387, var_t380); /* anchor_to on <var_ot371:MType>*/
}
var_rt391 = var390;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var394 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var394 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
fatal_exit(1);
}
var392 = var394;
RET_LABEL393:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var392, var_rt391); /* Direct call hash_collection#HashSet#add on <var392:HashSet[MType]>*/
}
BREAK_label386: (void)0;
{
((void(*)(val* self))((((long)var_377&3)?class_info[((long)var_377&3)]:var_377->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_377); /* next on <var_377:Iterator[MClassType]>*/
}
} else {
goto BREAK_label395;
}
}
BREAK_label395: (void)0;
{
((void(*)(val* self))((((long)var_377&3)?class_info[((long)var_377&3)]:var_377->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_377); /* finish on <var_377:Iterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_368&3)?class_info[((long)var_368&3)]:var_368->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_368); /* next on <var_368:Iterator[MType]>*/
}
} else {
goto BREAK_label396;
}
}
BREAK_label396: (void)0;
{
((void(*)(val* self))((((long)var_368&3)?class_info[((long)var_368&3)]:var_368->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_368); /* finish on <var_368:Iterator[MType]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#check_depth for (self: RapidTypeAnalysis, MClassType): Bool */
short int nit___nit__RapidTypeAnalysis___check_depth(val* self, val* p0) {
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
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
var_mtype = p0;
{
var1 = ((long(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__length]))(var_mtype); /* length on <var_mtype:MClassType>*/
}
var_d = var1;
{
{ /* Inline kernel#Int#> (var_d,255l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <255l:Int> isa OTHER */
/* <255l:Int> isa OTHER */
var4 = 1; /* easy <255l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
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
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var8 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var6) on <var6:ModelBuilder> */
var11 = var6->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var6:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var12 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Fatal Error: limitation in the rapidtype analysis engine: a type depth of ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 74l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " is too important, the problematic type is `";
var20 = standard___standard__NativeString___to_s_with_length(var19, 44l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[2]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "`.";
var24 = standard___standard__NativeString___to_s_with_length(var23, 2l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var12)->values[4]=var22;
} else {
var12 = varonce;
varonce = NULL;
}
var25 = standard__string___Int___Object__to_s(var_d);
((struct instance_standard__NativeArray*)var12)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var12)->values[3]=var26;
{
var27 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
nit___nit__ToolContext___fatal_error(var9, ((val*)NULL), var27); /* Direct call toolcontext#ToolContext#fatal_error on <var9:ToolContext>*/
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
/* method rapid_type_analysis#RapidTypeAnalysis#add_new for (self: RapidTypeAnalysis, MClassType, MClassType) */
void nit___nit__RapidTypeAnalysis___add_new(val* self, val* p0, val* p1) {
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
val* var41 /* : nullable Object */;
val* var_p42 /* var p: MMethodDef */;
val* var44 /* : Array[MMethod] */;
val* var46 /* : Array[MMethod] */;
val* var_47 /* var : Array[MMethod] */;
val* var48 /* : ArrayIterator[nullable Object] */;
val* var_49 /* var : ArrayIterator[MMethod] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_p52 /* var p: MMethod */;
val* var53 /* : HashSet[MMethod] */;
val* var55 /* : HashSet[MMethod] */;
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
val* var72 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var73 /* : ModelBuilder */;
val* var75 /* : ModelBuilder */;
val* var76 /* : Array[AAttrPropdef] */;
val* var_77 /* var : Array[AAttrPropdef] */;
val* var78 /* : ArrayIterator[nullable Object] */;
val* var_79 /* var : ArrayIterator[AAttrPropdef] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var87 /* : nullable MMethodDef */;
val* var89 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var90 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
val* var91 /* : nullable AExpr */;
val* var93 /* : nullable AExpr */;
val* var94 /* : nullable AExpr */;
val* var96 /* : nullable AExpr */;
var_recv = p0;
var_mtype = p1;
{
var = ((short int(*)(val* self))(var_recv->class->vft[COLOR_nit__model__MType__need_anchor]))(var_recv); /* need_anchor on <var_recv:MClassType>*/
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 336);
fatal_exit(1);
}
{
var2 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MClassType>*/
}
if (var2){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var3, var_mtype);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var7, var_mtype); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MClassType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var10, var_mtype);
}
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var14, var_mtype); /* Direct call hash_collection#HashSet#add on <var14:HashSet[MClassType]>*/
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mclass = var17;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var22 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var20, var_mclass);
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var26 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var24, var_mclass); /* Direct call hash_collection#HashSet#add on <var24:HashSet[MClass]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 169);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[MMethod]>*/
}
if (var32){
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[MMethod]>*/
}
var_p = var33;
{
nit___nit__RapidTypeAnalysis___try_send(self, var_mtype, var_p); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[MMethod]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var36 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 114);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_37 = var34;
{
var38 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:Iterator[MMethodDef]>*/
}
if (var40){
{
var41 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:Iterator[MMethodDef]>*/
}
var_p42 = var41;
{
nit___nit__RapidTypeAnalysis___try_super_send(self, var_mtype, var_p42); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:Iterator[MMethodDef]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:Iterator[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var46 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_47 = var44;
{
var48 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_49);
}
if (var50){
{
var51 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_49);
}
var_p52 = var51;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var55 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 169);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var53, var_p52); /* Direct call hash_collection#HashSet#remove on <var53:HashSet[MMethod]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_49); /* Direct call array#ArrayIterator#next on <var_49:ArrayIterator[MMethod]>*/
}
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_49); /* Direct call array#ArrayIterator#finish on <var_49:ArrayIterator[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var59 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var57); /* Direct call array#AbstractArray#clear on <var57:Array[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nit___nit__MClassType___MType__anchor_to(var_mtype, var60, var_recv);
}
var_bound_mtype = var63;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var66 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nit___nit__MClassType___MType__collect_mclassdefs(var_bound_mtype, var64);
}
var_68 = var67;
{
var69 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_68); /* iterator on <var_68:Set[MClassDef]>*/
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:Iterator[MClassDef]>*/
}
if (var71){
{
var72 = ((val*(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:Iterator[MClassDef]>*/
}
var_cd = var72;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var75 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nit__modelize_property___ModelBuilder___collect_attr_propdef(var73, var_cd);
}
var_77 = var76;
{
var78 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_77);
}
var_79 = var78;
for(;;) {
{
var80 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_79);
}
if (var80){
{
var81 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_79);
}
var_npropdef = var81;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:AAttrPropdef> */
var84 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:AAttrPropdef> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var85 = !var82;
if (var85){
goto BREAK_label86;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:AAttrPropdef> */
var89 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:AAttrPropdef> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 362);
fatal_exit(1);
}
var_mpropdef = var87;
var90 = NEW_nit__RapidTypeVisitor(&type_nit__RapidTypeVisitor);
{
((void(*)(val* self, val* p0))(var90->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var90, self); /* analysis= on <var90:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var90->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var90, var_bound_mtype); /* receiver= on <var90:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var90->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var90, var_mpropdef); /* mpropdef= on <var90:RapidTypeVisitor>*/
}
{
((void(*)(val* self))(var90->class->vft[COLOR_standard__kernel__Object__init]))(var90); /* init on <var90:RapidTypeVisitor>*/
}
var_v = var90;
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (var_npropdef) on <var_npropdef:AAttrPropdef> */
var93 = var_npropdef->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <var_npropdef:AAttrPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var91); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (var_npropdef) on <var_npropdef:AAttrPropdef> */
var96 = var_npropdef->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <var_npropdef:AAttrPropdef> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var94); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
BREAK_label86: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_79); /* Direct call array#ArrayIterator#next on <var_79:ArrayIterator[AAttrPropdef]>*/
}
} else {
goto BREAK_label97;
}
}
BREAK_label97: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_79); /* Direct call array#ArrayIterator#finish on <var_79:ArrayIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label98;
}
}
BREAK_label98: (void)0;
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:Iterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_cast for (self: RapidTypeAnalysis, MType) */
void nit___nit__RapidTypeAnalysis___add_cast(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : HashSet[MType] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var6 /* : HashSet[MType] */;
var_mtype = p0;
{
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var3 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var1, var_mtype); /* Direct call hash_collection#HashSet#add on <var1:HashSet[MType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var4, var_mtype); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MType]>*/
}
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_send for (self: RapidTypeAnalysis, MClassType, MMethod) */
void nit___nit__RapidTypeAnalysis___try_send(val* self, val* p0, val* p1) {
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
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__MType___has_mproperty(var_recv, var9, var_mproperty);
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit___nit__MProperty___lookup_first_definition(var_mproperty, var14, var_recv);
}
var_d = var17;
{
nit___nit__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_call for (self: RapidTypeAnalysis, MMethodDef) */
void nit___nit__RapidTypeAnalysis___add_call(val* self, val* p0) {
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : HashSet[MMethodDef] */;
val* var2 /* : HashSet[MMethodDef] */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethodDef] */;
val* var7 /* : List[MMethodDef] */;
val* var9 /* : List[MMethodDef] */;
val* var10 /* : MProperty */;
val* var12 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var13 /* : Array[MPropDef] */;
val* var15 /* : Array[MPropDef] */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var22 /* : Bool */;
val* var23 /* : Array[MPropDef] */;
val* var25 /* : Array[MPropDef] */;
val* var_ /* var : Array[MMethodDef] */;
val* var26 /* : ArrayIterator[nullable Object] */;
val* var_27 /* var : ArrayIterator[MMethodDef] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var30 /* : HashSet[MMethodDef] */;
val* var32 /* : HashSet[MMethodDef] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Array[MMethod] */;
val* var37 /* : Array[MMethod] */;
val* var38 /* : MProperty */;
val* var40 /* : MProperty */;
var_mpropdef = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 79);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var, var_mpropdef);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 79);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var4, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 179);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var7, var_mpropdef); /* Direct call abstract_collection#Sequence#add on <var7:List[MMethodDef]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mproperty = var10;
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var15 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1963);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var13) on <var13:Array[MPropDef](Array[MMethodDef])> */
var18 = var13->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var13:Array[MPropDef](Array[MMethodDef])> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var22 = var16 <= 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var25 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1963);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_ = var23;
{
var26 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_27 = var26;
for(;;) {
{
var28 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_27);
}
if (var28){
{
var29 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_27);
}
var_d = var29;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 79);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var30, var_d);
}
var34 = !var33;
if (var34){
goto RET_LABEL;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_27); /* Direct call array#ArrayIterator#next on <var_27:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_27); /* Direct call array#ArrayIterator#finish on <var_27:ArrayIterator[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var37 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var40 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var35, var38); /* Direct call array#Array#add on <var35:Array[MMethod]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_send for (self: RapidTypeAnalysis, MType, MMethod) */
void nit___nit__RapidTypeAnalysis___add_send(val* self, val* p0, val* p1) {
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
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 175);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var, var_mproperty);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 82);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var4, var_mproperty); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 175);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var7, var_mproperty); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MMethod]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var12 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1963);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var10) on <var10:Array[MPropDef](Array[MMethodDef])> */
var15 = var10->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var10:Array[MPropDef](Array[MMethodDef])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var13,1l) on <var13:Int> */
var18 = var13 == 1l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var21 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1963);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = standard___standard__SequenceRead___Collection__first(var19);
}
var_d = var22;
{
nit___nit__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var25 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 169);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var23, var_mproperty); /* Direct call hash_collection#HashSet#add on <var23:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var28 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_ = var26;
{
var29 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:Iterator[MClass]>*/
}
if (var31){
{
var32 = ((val*(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:Iterator[MClass]>*/
}
var_c = var32;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var35 = var_c->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___try_send(self, var36, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:Iterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:Iterator[MClass]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_super_send for (self: RapidTypeAnalysis, MClassType, MMethodDef) */
void nit___nit__RapidTypeAnalysis___try_super_send(val* self, val* p0, val* p1) {
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
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__MClassType___MType__collect_mclassdefs(var_recv, var9);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var12, var13); /* has on <var12:Set[MClassDef]>*/
}
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var20 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__MPropDef___lookup_next_definition(var_mpropdef, var18, var_recv);
}
var_d = var21;
{
nit___nit__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: RapidTypeAnalysis, MType, MMethodDef) */
void nit___nit__RapidTypeAnalysis___add_super_send(val* self, val* p0, val* p1) {
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
{ /* Inline modelize_property#MPropDef#has_supercall (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 434);
fatal_exit(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 114);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var3, var_mpropdef);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 114);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var7, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MClass]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MClass]>*/
}
var_c = var16;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var17) on <var17:MClassDef> */
var22 = var17->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var17:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___try_super_send(self, var20, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MClass]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: RapidTypeAnalysis) */
void nit___nit__RapidTypeAnalysis___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__RapidTypeAnalysis___standard__kernel__Object__init]))(self); /* init on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis for (self: RapidTypeVisitor): RapidTypeAnalysis */
val* nit___nit__RapidTypeVisitor___analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis= for (self: RapidTypeVisitor, RapidTypeAnalysis) */
void nit___nit__RapidTypeVisitor___analysis_61d(val* self, val* p0) {
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val = p0; /* _analysis on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver for (self: RapidTypeVisitor): MClassType */
val* nit___nit__RapidTypeVisitor___receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver= for (self: RapidTypeVisitor, MClassType) */
void nit___nit__RapidTypeVisitor___receiver_61d(val* self, val* p0) {
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val = p0; /* _receiver on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef= for (self: RapidTypeVisitor, MPropDef) */
void nit___nit__RapidTypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#init for (self: RapidTypeVisitor) */
void nit___nit__RapidTypeVisitor___standard__kernel__Object__init(val* self) {
val* var /* : MClassType */;
val* var2 /* : MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__RapidTypeVisitor___standard__kernel__Object__init]))(self); /* init on <self:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nit__model__MType__need_anchor]))(var); /* need_anchor on <var:MClassType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 453);
fatal_exit(1);
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: RapidTypeVisitor, ANode) */
void nit___nit__RapidTypeVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
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
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_n); /* mtype on <var_n:ANode(AExpr)>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,((val*)NULL)) on <var2:nullable MType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable MType(MType)>*/
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
{ /* Inline typing#AExpr#is_typed (var_n) on <var_n:ANode(AExpr)> */
var10 = var_n->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <var_n:ANode(AExpr)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var1 = var8;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self); /* accept_rapid_type_visitor on <var_n:ANode(AExpr)>*/
}
{
{ /* Inline typing#AExpr#implicit_cast_to (var_n) on <var_n:ANode(AExpr)> */
var13 = var_n->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_n:ANode(AExpr)> */
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
{ /* Inline kernel#Object#!= (var_implicit_cast_to,((val*)NULL)) on <var_implicit_cast_to:nullable MType> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other); /* == on <var_implicit_cast_to:nullable MType(MType)>*/
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
nit___nit__RapidTypeVisitor___add_cast_type(self, var_implicit_cast_to); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <self:RapidTypeVisitor>*/
}
} else {
}
} else {
}
} else {
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self); /* accept_rapid_type_visitor on <var_n:ANode>*/
}
}
/* <var_n:ANode> isa AAnnotations */
cltype20 = type_nit__AAnnotations.color;
idtype21 = type_nit__AAnnotations.id;
if(cltype20 >= var_n->type->table_size) {
var19 = 0;
} else {
var19 = var_n->type->type_table[cltype20] == idtype21;
}
var22 = !var19;
if (var22){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#cleanup_type for (self: RapidTypeVisitor, MType): nullable MClassType */
val* nit___nit__RapidTypeVisitor___cleanup_type(val* self, val* p0) {
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
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var3 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var1) on <var1:RapidTypeAnalysis> */
var6 = var1->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var1:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var4, var7); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var10;
/* <var_mtype:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
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
var12 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var12;
/* <var_mtype:MType> isa MClassType */
cltype14 = type_nit__MClassType.color;
idtype15 = type_nit__MClassType.id;
if(cltype14 >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 479);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType(MClassType)>*/
}
var17 = !var16;
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 480);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_method for (self: RapidTypeVisitor, MType, String): MMethod */
val* nit___nit__RapidTypeVisitor___get_method(val* self, val* p0, val* p1) {
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
var1 = nit___nit__RapidTypeVisitor___cleanup_type(self, var_recv);
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MClassType(MClassType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 487);
fatal_exit(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (var7) on <var7:RapidTypeAnalysis> */
var12 = var7->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <var7:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#Visitor#current_node (self) on <self:RapidTypeVisitor> */
var15 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:RapidTypeVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 488);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var18 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var21 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var19) on <var19:RapidTypeAnalysis> */
var24 = var19->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var19:RapidTypeAnalysis> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit___nit__ModelBuilder___force_get_primitive_method(var10, var13, var_name, var16, var22);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_type for (self: RapidTypeVisitor, MClassType) */
void nit___nit__RapidTypeVisitor___add_type(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var5 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_new(var, var3, var_mtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send for (self: RapidTypeVisitor, MType, MMethod) */
void nit___nit__RapidTypeVisitor___add_monomorphic_send(val* self, val* p0, val* p1) {
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
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 82);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var3, var_mproperty); /* Direct call hash_collection#HashSet#add on <var3:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var8 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var9 = 0;
} else {
var9 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 496);
fatal_exit(1);
}
{
nit___nit__RapidTypeAnalysis___try_send(var6, var_mtype, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <var6:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_cast_type for (self: RapidTypeVisitor, MType) */
void nit___nit__RapidTypeVisitor___add_cast_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_cast(var, var_mtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_callsite for (self: RapidTypeVisitor, nullable CallSite) */
void nit___nit__RapidTypeVisitor___add_callsite(val* self, val* p0) {
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
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[MProperty] */;
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
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
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
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var7 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var5) on <var5:MMethodDef> */
var10 = var5->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var5:MMethodDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_12);
}
if (var13){
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_12);
}
var_m = var14;
/* <var_m:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_m->type->table_size) {
var15 = 0;
} else {
var15 = var_m->type->type_table[cltype] == idtype;
}
if (var15){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var18 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var21 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 610);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_send(var16, var19, var_m); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var16:RapidTypeAnalysis>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_12); /* Direct call array#ArrayIterator#finish on <var_12:ArrayIterator[MProperty]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var24 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var27 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 610);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var30 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_send(var22, var25, var28); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var22:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var33 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_callsites (var31) on <var31:RapidTypeAnalysis> */
var36 = var31->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <var31:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 85);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var34, var_callsite); /* Direct call hash_collection#HashSet#add on <var34:HashSet[CallSite]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#ANode#accept_rapid_type_visitor for (self: ANode, RapidTypeVisitor) */
void nit__rapid_type_analysis___ANode___accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method rapid_type_analysis#AIntExpr#accept_rapid_type_visitor for (self: AIntExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AIntExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIntExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIntExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 525);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AByteExpr#accept_rapid_type_visitor for (self: AByteExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AByteExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AByteExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AByteExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 532);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor for (self: AFloatExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AFloatExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFloatExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AFloatExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 539);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ACharExpr#accept_rapid_type_visitor for (self: ACharExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ACharExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACharExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ACharExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 546);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor for (self: AArrayExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AArrayExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
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
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
val* var18 /* : nullable CallSite */;
val* var20 /* : nullable CallSite */;
val* var21 /* : nullable CallSite */;
val* var23 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 553);
fatal_exit(1);
}
var_mtype = var;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var6 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var4) on <var4:RapidTypeAnalysis> */
var9 = var4->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var4:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var11 = standard___standard__SequenceRead___Collection__first(var10);
}
{
var12 = nit__model___MModule___native_array_type(var7, var11);
}
var_native = var12;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
var13 = nit___nit__RapidTypeVisitor___cleanup_type(var_v, var_mtype);
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 557);
fatal_exit(1);
}
var_mtype = var13;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "with_native";
var16 = standard___standard__NativeString___to_s_with_length(var15, 11l);
var14 = var16;
varonce = var14;
}
{
var17 = nit___nit__RapidTypeVisitor___get_method(var_v, var_mtype, var14);
}
var_prop = var17;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_mtype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite (self) on <self:AArrayExpr> */
var20 = self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var18); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AArrayExpr#push_callsite (self) on <self:AArrayExpr> */
var23 = self->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var21); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: AStringFormExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : MClassType */;
val* var_native /* var native: MClassType */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
var_v = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var2 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__model___MModule___native_string_type(var3);
}
var_native = var6;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "to_s_with_length";
var9 = standard___standard__NativeString___to_s_with_length(var8, 16l);
var7 = var9;
varonce = var7;
}
{
var10 = nit___nit__RapidTypeVisitor___get_method(var_v, var_native, var7);
}
var_prop = var10;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_native, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: ASuperstringExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ASuperstringExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
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
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : MMethod */;
val* var_prop2 /* var prop2: MMethod */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : MMethod */;
var_v = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var2 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 56);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
var6 = nit__model___MModule___string_type(var_mmodule);
}
var_object_type = var6;
{
var7 = nit__model___MModule___array_type(var_mmodule, var_object_type);
}
var_arraytype = var7;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_arraytype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
var8 = nit__model___MModule___native_array_type(var_mmodule, var_object_type);
}
var_nattype = var8;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_nattype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "join";
var11 = standard___standard__NativeString___to_s_with_length(var10, 4l);
var9 = var11;
varonce = var9;
}
{
var12 = nit___nit__RapidTypeVisitor___get_method(var_v, var_arraytype, var9);
}
var_prop = var12;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "with_native";
var16 = standard___standard__NativeString___to_s_with_length(var15, 11l);
var14 = var16;
varonce13 = var14;
}
{
var17 = nit___nit__RapidTypeVisitor___get_method(var_v, var_arraytype, var14);
}
var_prop2 = var17;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop2); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "native_to_s";
var21 = standard___standard__NativeString___to_s_with_length(var20, 11l);
var19 = var21;
varonce18 = var19;
}
{
var22 = nit___nit__RapidTypeVisitor___get_method(var_v, var_nattype, var19);
}
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_nattype, var22); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor for (self: ACrangeExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ACrangeExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var4 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 595);
fatal_exit(1);
}
var_mtype = var;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var6 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var4); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor for (self: AOrangeExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AOrangeExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var4 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 604);
fatal_exit(1);
}
var_mtype = var;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var6 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var4); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor for (self: ATrueExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ATrueExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ATrueExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ATrueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 613);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor for (self: AFalseExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AFalseExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFalseExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AFalseExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 620);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor for (self: AIsaExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AIsaExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 627);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_cast_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor for (self: AAsCastExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AAsCastExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 634);
fatal_exit(1);
}
{
nit___nit__RapidTypeVisitor___add_cast_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendExpr#accept_rapid_type_visitor for (self: ASendExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor for (self: ASendReassignFormExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ASendReassignFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var8 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var5 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var8 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var6); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor for (self: AVarReassignExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AVarReassignExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor for (self: AAttrReassignExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AAttrReassignExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor for (self: ASuperExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ASuperExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
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
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var2 = self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
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
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
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
nit___nit__RapidTypeVisitor___add_callsite(var_v, var_callsite); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var10 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 447);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var13 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 448);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var16 = self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 678);
fatal_exit(1);
}
{
nit___nit__RapidTypeAnalysis___add_super_send(var8, var11, var14); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <var8:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AForExpr#accept_rapid_type_visitor for (self: AForExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AForExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
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
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var5 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var8 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 687);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var6) on <var6:nullable Array[Variable]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var6:nullable Array[Variable]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var9,1l) on <var9:Int> */
var14 = var9 == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var17 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var15); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var20 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 689);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var18) on <var18:nullable Array[Variable]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var23 = var18->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var18:nullable Array[Variable]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var21,2l) on <var21:Int> */
var26 = var21 == 2l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var29 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var27); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var32 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var30); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 693);
fatal_exit(1);
}
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var35 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var33); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var38 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
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
{ /* Inline kernel#Object#!= (var_mf,((val*)NULL)) on <var_mf:nullable CallSite> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_mf->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mf, var_other); /* == on <var_mf:nullable CallSite(CallSite)>*/
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
nit___nit__RapidTypeVisitor___add_callsite(var_v, var_mf); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: ANewExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ANewExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 704);
fatal_exit(1);
}
var_mtype = var;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var5 = self->attrs[COLOR_nit__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
