#include "nit__rapid_type_analysis.sep.0.h"
/* method rapid_type_analysis#ModelBuilder#do_rapid_type_analysis for (self: ModelBuilder, MModule): RapidTypeAnalysis */
val* nit__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0) {
val* var /* : RapidTypeAnalysis */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
var_mainmodule = p0;
var1 = NEW_nit__RapidTypeAnalysis(&type_nit__RapidTypeAnalysis);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d]))(var1, self) /* modelbuilder= on <var1:RapidTypeAnalysis>*/;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d]))(var1, var_mainmodule) /* mainmodule= on <var1:RapidTypeAnalysis>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:RapidTypeAnalysis>*/;
}
var_analysis = var1;
{
nit___nit__RapidTypeAnalysis___run_analysis(var_analysis); /* Direct call rapid_type_analysis#RapidTypeAnalysis#run_analysis on <var_analysis:RapidTypeAnalysis>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 58);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 68);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 78);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 81);
show_backtrace(1);
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
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : MType */;
val* var17 /* : MType */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var25 /* : MClassType */;
val* var27 /* : MClassType */;
val* var28 /* : MMethod */;
val* var30 /* : MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var31 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var33 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var34 /* : nullable Object */;
val* var_res /* var res: nullable Set[MMethodDef] */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : ArraySet[MMethodDef] */;
val* var42 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var44 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var45 /* : HashSet[MClass] */;
val* var47 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var48 /* : Iterator[nullable Object] */;
val* var_49 /* var : Iterator[MClass] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClassType */;
val* var57 /* : MClassType */;
val* var_tc /* var tc: MClassType */;
val* var58 /* : MModule */;
val* var60 /* : MModule */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : MModule */;
val* var66 /* : MModule */;
val* var67 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_callsite = p0;
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 473);
show_backtrace(1);
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
var7 = NULL;
if (var_anchor == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var7) on <var_anchor:nullable MClassType> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
{ /* Inline typing#CallSite#mmodule (var_callsite) on <var_callsite:CallSite> */
var15 = var_callsite->attrs[COLOR_nit__typing__CallSite___mmodule].val; /* _mmodule on <var_callsite:CallSite> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 476);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val* (*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var13, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var16;
} else {
}
{
var17 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var17;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var18 = 0;
} else {
var18 = var_mtype->type->type_table[cltype] == idtype;
}
if (var18){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var21 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mtype = var25;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var30 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_mproperty = var28;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var33 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 81);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = more_collections___more_collections__HashMap2____91d_93d(var31, var_mtype, var_mproperty);
}
var_res = var34;
var35 = NULL;
if (var_res == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var35) on <var_res:nullable Set[MMethodDef]> */
var_other = var35;
{
var39 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable Set[MMethodDef](Set[MMethodDef])>*/;
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
var = var_res;
goto RET_LABEL;
} else {
}
var41 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MMethodDef);
{
standard___standard__ArraySet___standard__kernel__Object__init(var41); /* Direct call array#ArraySet#init on <var41:ArraySet[MMethodDef]>*/
}
var_res = var41;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var44 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 81);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var42, var_mtype, var_mproperty, var_res); /* Direct call more_collections#HashMap2#[]= on <var42:HashMap2[MType, MProperty, Set[MMethodDef]]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var47 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_ = var45;
{
var48 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_49 = var48;
for(;;) {
{
var50 = ((short int (*)(val* self))(var_49->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_49) /* is_ok on <var_49:Iterator[MClass]>*/;
}
if (var50){
{
var51 = ((val* (*)(val* self))(var_49->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_49) /* item on <var_49:Iterator[MClass]>*/;
}
var_c = var51;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var54 = var_c->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_tc = var55;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var60 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = NULL;
{
var62 = nit___nit__MType___is_subtype(var_tc, var58, var61, var_mtype);
}
var63 = !var62;
if (var63){
goto BREAK_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var66 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nit___nit__MProperty___lookup_first_definition(var_mproperty, var64, var_tc);
}
var_d = var67;
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var_res, var_d); /* Direct call array#ArraySet#add on <var_res:nullable Set[MMethodDef](ArraySet[MMethodDef])>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_49->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_49) /* next on <var_49:Iterator[MClass]>*/;
}
} else {
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_49) on <var_49:Iterator[MClass]> */
RET_LABEL69:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 107);
show_backtrace(1);
}
var = var1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 162);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 165);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 168);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
show_backtrace(1);
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
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_ /* var : Array[MClass] */;
val* var13 /* : ArrayIterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MClass] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var17 /* : MClassType */;
val* var19 /* : MClassType */;
val* var20 /* : MClassType */;
val* var22 /* : MClassType */;
var_classname = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
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
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__model___Model___get_mclasses_by_name(var3, var_classname);
}
var_classes = var6;
var7 = NULL;
if (var_classes == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_classes,var7) on <var_classes:nullable Array[MClass]> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_classes->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_classes, var_other) /* == on <var_classes:nullable Array[MClass](Array[MClass])>*/;
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var_ = var_classes;
{
var13 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_14);
}
if (var15){
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_14);
}
var_c = var16;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var22 = var_c->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_new(self, var17, var20); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_14); /* Direct call array#ArrayIterator#next on <var_14:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:ArrayIterator[MClass]> */
RET_LABEL23:(void)0;
}
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : nullable MMethod */;
val* var_initprop /* var initprop: nullable MMethod */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MMethod */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : MClass */;
val* var40 /* : MClass */;
val* var41 /* : nullable MMethod */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : MClass */;
val* var52 /* : MClass */;
val* var53 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
val* var54 /* : null */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : MModule */;
val* var72 /* : MModule */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : MClass */;
val* var80 /* : MClass */;
val* var81 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
val* var82 /* : null */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : List[MMethodDef] */;
val* var115 /* : List[MMethodDef] */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : List[MMethodDef] */;
val* var120 /* : List[MMethodDef] */;
val* var121 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var122 /* : MProperty */;
val* var124 /* : MProperty */;
val* var_mmeth /* var mmeth: MMethod */;
val* var125 /* : RapidTypeVisitor */;
val* var126 /* : MClassDef */;
val* var128 /* : MClassDef */;
val* var129 /* : MClassType */;
val* var131 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
val* var132 /* : nullable MSignature */;
val* var134 /* : nullable MSignature */;
long var135 /* : Int */;
long var137 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var138 /* : Int */;
long var139 /* : Int */;
long var141 /* : Int */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var145 /* : Bool */;
val* var146 /* : ModelBuilder */;
val* var148 /* : ModelBuilder */;
val* var149 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var150 /* : nullable MSignature */;
val* var152 /* : nullable MSignature */;
val* var153 /* : Array[MParameter] */;
val* var155 /* : Array[MParameter] */;
val* var156 /* : nullable Object */;
val* var157 /* : MType */;
val* var159 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var160 /* : MModule */;
val* var162 /* : MModule */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : MClass */;
val* var169 /* : Array[MType] */;
long var170 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var171 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var172 /* : MModule */;
val* var174 /* : MModule */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var180 /* : MClass */;
val* var181 /* : Array[MType] */;
long var182 /* : Int */;
val* var_183 /* var : Array[MType] */;
val* var184 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var185 /* : ModelBuilder */;
val* var187 /* : ModelBuilder */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : FlatString */;
val* var193 /* : MClass */;
val* var195 /* : MClass */;
val* var196 /* : MModule */;
val* var198 /* : MModule */;
val* var199 /* : MMethod */;
val* var200 /* : nullable MSignature */;
val* var202 /* : nullable MSignature */;
val* var_sig /* var sig: MSignature */;
val* var203 /* : MPropDef */;
val* var205 /* : MPropDef */;
val* var206 /* : nullable MSignature */;
val* var208 /* : nullable MSignature */;
val* var_osig /* var osig: MSignature */;
long var209 /* : Int */;
long var_i /* var i: Int */;
long var210 /* : Int */;
long var_211 /* var : Int */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
short int var218 /* : Bool */;
val* var219 /* : Array[MParameter] */;
val* var221 /* : Array[MParameter] */;
val* var222 /* : nullable Object */;
val* var223 /* : MType */;
val* var225 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
val* var228 /* : Array[MParameter] */;
val* var230 /* : Array[MParameter] */;
val* var231 /* : nullable Object */;
val* var232 /* : MType */;
val* var234 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
long var235 /* : Int */;
long var236 /* : Int */;
val* var238 /* : ModelBuilder */;
val* var240 /* : ModelBuilder */;
val* var241 /* : nullable ANode */;
val* var_npropdef /* var npropdef: nullable ANode */;
short int var242 /* : Bool */;
int cltype243;
int idtype244;
val* var245 /* : nullable MMethodDef */;
val* var247 /* : nullable MMethodDef */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
val* var254 /* : MProperty */;
val* var256 /* : MProperty */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
short int var_260 /* var : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
val* var263 /* : MClassType */;
val* var265 /* : MClassType */;
val* var267 /* : nullable Object */;
val* var269 /* : nullable Object */;
val* var270 /* : null */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : nullable MSignature */;
val* var275 /* : nullable MSignature */;
val* var276 /* : nullable MType */;
val* var278 /* : nullable MType */;
short int var279 /* : Bool */;
int cltype280;
int idtype281;
const char* var_class_name282;
val* var283 /* : null */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
int cltype291;
int idtype292;
val* var293 /* : nullable Array[CallSite] */;
val* var295 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var296 /* : null */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
val* var_302 /* var : Array[CallSite] */;
val* var303 /* : ArrayIterator[nullable Object] */;
val* var_304 /* var : ArrayIterator[CallSite] */;
short int var305 /* : Bool */;
val* var306 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
val* var312 /* : MClassType */;
val* var314 /* : MClassType */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var318 /* : Bool */;
short int var_319 /* var : Bool */;
short int var320 /* : Bool */;
short int var322 /* : Bool */;
val* var323 /* : nullable MSignature */;
val* var325 /* : nullable MSignature */;
val* var326 /* : nullable MType */;
val* var328 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var329 /* : Bool */;
short int var330 /* : Bool */;
short int var331 /* : Bool */;
val* var332 /* : null */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
short int var336 /* : Bool */;
short int var337 /* : Bool */;
short int var_338 /* var : Bool */;
short int var339 /* : Bool */;
int cltype340;
int idtype341;
short int var_342 /* var : Bool */;
val* var343 /* : MClass */;
val* var345 /* : MClass */;
val* var346 /* : MClassKind */;
val* var348 /* : MClassKind */;
val* var349 /* : MClassKind */;
short int var350 /* : Bool */;
short int var352 /* : Bool */;
short int var353 /* : Bool */;
short int var_354 /* var : Bool */;
val* var355 /* : MClass */;
val* var357 /* : MClass */;
val* var358 /* : MClassKind */;
val* var360 /* : MClassKind */;
val* var361 /* : MClassKind */;
short int var362 /* : Bool */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
val* var367 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var369 /* : HashSet[MClassType] */;
val* var371 /* : HashSet[MClassType] */;
short int var372 /* : Bool */;
short int var373 /* : Bool */;
val* var374 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var375 /* : HashSet[MClassType] */;
val* var377 /* : HashSet[MClassType] */;
val* var_378 /* var : HashSet[MClassType] */;
val* var379 /* : Iterator[nullable Object] */;
val* var_380 /* var : Iterator[MClassType] */;
short int var381 /* : Bool */;
val* var382 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var383 /* : MModule */;
val* var385 /* : MModule */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
val* var389 /* : MModule */;
val* var391 /* : MModule */;
val* var392 /* : MClassType */;
val* var_rt /* var rt: MClassType */;
val* var393 /* : HashSet[MClassType] */;
val* var395 /* : HashSet[MClassType] */;
short int var396 /* : Bool */;
val* var397 /* : HashSet[MClassType] */;
val* var399 /* : HashSet[MClassType] */;
val* var403 /* : HashSet[MType] */;
val* var405 /* : HashSet[MType] */;
val* var_406 /* var : HashSet[MType] */;
val* var407 /* : Iterator[nullable Object] */;
val* var_408 /* var : Iterator[MType] */;
short int var409 /* : Bool */;
val* var410 /* : nullable Object */;
val* var_ot411 /* var ot: MType */;
val* var412 /* : HashSet[MClassType] */;
val* var414 /* : HashSet[MClassType] */;
val* var_415 /* var : HashSet[MClassType] */;
val* var416 /* : Iterator[nullable Object] */;
val* var_417 /* var : Iterator[MClassType] */;
short int var418 /* : Bool */;
val* var419 /* : nullable Object */;
val* var_t420 /* var t: MClassType */;
val* var421 /* : MModule */;
val* var423 /* : MModule */;
short int var424 /* : Bool */;
short int var425 /* : Bool */;
val* var427 /* : MModule */;
val* var429 /* : MModule */;
val* var430 /* : MType */;
val* var_rt431 /* var rt: MType */;
val* var432 /* : HashSet[MType] */;
val* var434 /* : HashSet[MType] */;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__model___MModule___sys_type(var);
}
var_maintype = var3;
var4 = NULL;
if (var_maintype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_maintype,var4) on <var_maintype:nullable MClassType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_maintype,var_other) on <var_maintype:nullable MClassType(MClassType)> */
var10 = var_maintype == var_other;
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
nit___nit__RapidTypeAnalysis___add_new(self, var_maintype, var_maintype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var13 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (varonce) {
var14 = varonce;
} else {
var15 = "init";
var16 = 4;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var20 = var_maintype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit__model___MModule___try_get_primitive_method(var11, var14, var18);
}
var_initprop = var21;
var22 = NULL;
if (var_initprop == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_initprop,var22) on <var_initprop:nullable MMethod> */
var_other26 = var22;
{
var27 = ((short int (*)(val* self, val* p0))(var_initprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_initprop, var_other26) /* == on <var_initprop:nullable MMethod(MMethod)>*/;
}
var28 = !var27;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
nit___nit__RapidTypeAnalysis___add_send(self, var_maintype, var_initprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "run";
var36 = 3;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var40 = var_maintype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nit__model___MModule___try_get_primitive_method(var30, var34, var38);
}
if (var41!=NULL) {
var29 = var41;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var44 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "main";
var48 = 4;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var52 = var_maintype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nit__model___MModule___try_get_primitive_method(var42, var46, var50);
}
var29 = var53;
}
var_mainprop = var29;
var54 = NULL;
if (var_mainprop == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mainprop,var54) on <var_mainprop:nullable MMethod> */
var_other26 = var54;
{
var58 = ((short int (*)(val* self, val* p0))(var_mainprop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mainprop, var_other26) /* == on <var_mainprop:nullable MMethod(MMethod)>*/;
}
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
{
nit___nit__RapidTypeAnalysis___add_send(self, var_maintype, var_mainprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nit__model___MModule___finalizable_type(var60);
}
var_finalizable_type = var63;
var64 = NULL;
if (var_finalizable_type == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,var64) on <var_finalizable_type:nullable MClassType> */
var_other26 = var64;
{
var68 = ((short int (*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_finalizable_type, var_other26) /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/;
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var72 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "finalize";
var76 = 8;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var80 = var_finalizable_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = nit__model___MModule___try_get_primitive_method(var70, var74, var78);
}
var_finalize_meth = var81;
var82 = NULL;
if (var_finalize_meth == NULL) {
var83 = 0; /* is null */
} else {
var83 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalize_meth,var82) on <var_finalize_meth:nullable MMethod> */
var_other26 = var82;
{
var86 = ((short int (*)(val* self, val* p0))(var_finalize_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_finalize_meth, var_other26) /* == on <var_finalize_meth:nullable MMethod(MMethod)>*/;
}
var87 = !var86;
var84 = var87;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var83 = var84;
}
if (var83){
{
nit___nit__RapidTypeAnalysis___add_send(self, var_finalizable_type, var_finalize_meth); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "Bool";
var91 = 4;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var89); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "Int";
var96 = 3;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var94); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "Float";
var101 = 5;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var99); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "Char";
var106 = 4;
var107 = standard___standard__NativeString___to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var104); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "Pointer";
var111 = 7;
var112 = standard___standard__NativeString___to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
{
nit___nit__RapidTypeAnalysis___force_alive(self, var109); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
for(;;) {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var115 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var113);
}
var117 = !var116;
if (var117){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var120 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
var121 = standard___standard__List___standard__abstract_collection__Sequence__shift(var118);
}
var_mmethoddef = var121;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var124 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
var_mmeth = var122;
var125 = NEW_nit__RapidTypeVisitor(&type_nit__RapidTypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var128 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var126) on <var126:MClassDef> */
var131 = var126->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var126:MClassDef> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var125->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var125, self) /* analysis= on <var125:RapidTypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var125->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var125, var129) /* receiver= on <var125:RapidTypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var125->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var125, var_mmethoddef) /* mpropdef= on <var125:RapidTypeVisitor>*/;
}
{
((void (*)(val* self))(var125->class->vft[COLOR_standard__kernel__Object__init]))(var125) /* init on <var125:RapidTypeVisitor>*/;
}
var_v = var125;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var134 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (var132 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 216);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var132) on <var132:nullable MSignature> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1635);
show_backtrace(1);
}
var137 = var132->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var132:nullable MSignature> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_vararg_rank = var135;
var138 = 1;
{
{ /* Inline kernel#Int#unary - (var138) on <var138:Int> */
var141 = -var138;
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_vararg_rank,var139) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var139:Int> isa OTHER */
/* <var139:Int> isa OTHER */
var144 = 1; /* easy <var139:Int> isa OTHER*/
if (unlikely(!var144)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var145 = var_vararg_rank > var139;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
if (var142){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var148 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = nit__modelize_property___ModelBuilder___mpropdef2node(var146, var_mmethoddef);
}
var_node = var149;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var152 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
if (var150 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 219);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var150) on <var150:nullable MSignature> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var155 = var150->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var150:nullable MSignature> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var153, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var156) on <var156:nullable Object(MParameter)> */
var159 = var156->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var156:nullable Object(MParameter)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
var_elttype = var157;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var162 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "Array";
var166 = 5;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
{
var168 = nit__model___MModule___get_primitive_class(var160, var164);
}
var169 = NEW_standard__Array(&type_standard__Array__nit__MType);
var170 = 1;
{
standard___standard__Array___with_capacity(var169, var170); /* Direct call array#Array#with_capacity on <var169:Array[MType]>*/
}
var_ = var169;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var171 = nit___nit__MClass___get_mtype(var168, var_);
}
var_vararg = var171;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_vararg); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var174 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = "NativeArray";
var178 = 11;
var179 = standard___standard__NativeString___to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
var180 = nit__model___MModule___get_primitive_class(var172, var176);
}
var181 = NEW_standard__Array(&type_standard__Array__nit__MType);
var182 = 1;
{
standard___standard__Array___with_capacity(var181, var182); /* Direct call array#Array#with_capacity on <var181:Array[MType]>*/
}
var_183 = var181;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_183, var_elttype); /* Direct call array#AbstractArray#push on <var_183:Array[MType]>*/
}
{
var184 = nit___nit__MClass___get_mtype(var180, var_183);
}
var_native = var184;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var187 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "with_native";
var191 = 11;
var192 = standard___standard__NativeString___to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
{
{ /* Inline model#MClassType#mclass (var_vararg) on <var_vararg:MClassType> */
var195 = var_vararg->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_vararg:MClassType> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var198 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
var199 = nit___nit__ModelBuilder___force_get_primitive_method(var185, var_node, var189, var193, var196);
}
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_vararg, var199); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var202 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var200 = var202;
RET_LABEL201:(void)0;
}
}
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 229);
show_backtrace(1);
}
var_sig = var200;
{
{ /* Inline model#MProperty#intro (var_mmeth) on <var_mmeth:MMethod> */
var205 = var_mmeth->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmeth:MMethod> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var203 = var205;
RET_LABEL204:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var203) on <var203:MPropDef(MMethodDef)> */
var208 = var203->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var203:MPropDef(MMethodDef)> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 230);
show_backtrace(1);
}
var_osig = var206;
var209 = 0;
var_i = var209;
{
var210 = nit___nit__MSignature___arity(var_sig);
}
var_211 = var210;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_211) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_211:Int> isa OTHER */
/* <var_211:Int> isa OTHER */
var214 = 1; /* easy <var_211:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var218 = var_i < var_211;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
if (var212){
{
{ /* Inline model#MSignature#mparameters (var_osig) on <var_osig:MSignature> */
var221 = var_osig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_osig:MSignature> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var219, var_i);
}
{
{ /* Inline model#MParameter#mtype (var222) on <var222:nullable Object(MParameter)> */
var225 = var222->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var222:nullable Object(MParameter)> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
var_origtype = var223;
{
var226 = ((short int (*)(val* self))(var_origtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_origtype) /* need_anchor on <var_origtype:MType>*/;
}
var227 = !var226;
if (var227){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:MSignature> */
var230 = var_sig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_sig:MSignature> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var228, var_i);
}
{
{ /* Inline model#MParameter#mtype (var231) on <var231:nullable Object(MParameter)> */
var234 = var231->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var231:nullable Object(MParameter)> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
var_paramtype = var232;
{
nit___nit__RapidTypeAnalysis___add_cast(self, var_paramtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <self:RapidTypeAnalysis>*/
}
BREAK_label: (void)0;
var235 = 1;
{
var236 = standard___standard__Int___Discrete__successor(var_i, var235);
}
var_i = var236;
} else {
goto BREAK_label237;
}
}
BREAK_label237: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var240 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
var241 = nit__modelize_property___ModelBuilder___mpropdef2node(var238, var_mmethoddef);
}
var_npropdef = var241;
/* <var_npropdef:nullable ANode> isa AClassdef */
cltype243 = type_nit__AClassdef.color;
idtype244 = type_nit__AClassdef.id;
if(var_npropdef == NULL) {
var242 = 0;
} else {
if(cltype243 >= var_npropdef->type->table_size) {
var242 = 0;
} else {
var242 = var_npropdef->type->type_table[cltype243] == idtype244;
}
}
if (var242){
{
{ /* Inline modelize_property#AClassdef#mfree_init (var_npropdef) on <var_npropdef:nullable ANode(AClassdef)> */
var247 = var_npropdef->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <var_npropdef:nullable ANode(AClassdef)> */
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mmethoddef,var245) on <var_mmethoddef:MMethodDef> */
var_other = var245;
{
{ /* Inline kernel#Object#is_same_instance (var_mmethoddef,var_other) on <var_mmethoddef:MMethodDef> */
var252 = var_mmethoddef == var_other;
var250 = var252;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
}
var248 = var250;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
}
if (unlikely(!var248)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 242);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var256 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var254) on <var254:MProperty(MMethod)> */
var259 = var254->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var254:MProperty(MMethod)> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
var_260 = var257;
if (var257){
{
var261 = nit___nit__MPropDef___is_intro(var_mmethoddef);
}
var262 = !var261;
var253 = var262;
} else {
var253 = var_260;
}
if (var253){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var265 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_super_send(self, var263, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
goto BREAK_label266;
} else {
{
{ /* Inline model#MMethodDef#constant_value (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var269 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___constant_value].val; /* _constant_value on <var_mmethoddef:MMethodDef> */
var267 = var269;
RET_LABEL268:(void)0;
}
}
var270 = NULL;
if (var267 == NULL) {
var271 = 0; /* is null */
} else {
var271 = 1; /* arg is null and recv is not */
}
if (0) {
var272 = ((short int (*)(val* self, val* p0))(var267->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var267, var270) /* != on <var267:nullable Object>*/;
var271 = var272;
}
if (var271){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var275 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
if (var273 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 250);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var273) on <var273:nullable MSignature> */
if (unlikely(var273 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var278 = var273->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var273:nullable MSignature> */
var276 = var278;
RET_LABEL277:(void)0;
}
}
/* <var276:nullable MType> isa MClassType */
cltype280 = type_nit__MClassType.color;
idtype281 = type_nit__MClassType.id;
if(var276 == NULL) {
var279 = 0;
} else {
if(cltype280 >= var276->type->table_size) {
var279 = 0;
} else {
var279 = var276->type->type_table[cltype280] == idtype281;
}
}
if (unlikely(!var279)) {
var_class_name282 = var276 == NULL ? "null" : var276->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name282);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 250);
show_backtrace(1);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var276); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
goto BREAK_label266;
} else {
var283 = NULL;
if (var_npropdef == NULL) {
var284 = 1; /* is null */
} else {
var284 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_npropdef,var283) on <var_npropdef:nullable ANode> */
var_other = var283;
{
{ /* Inline kernel#Object#is_same_instance (var_npropdef,var_other) on <var_npropdef:nullable ANode(ANode)> */
var289 = var_npropdef == var_other;
var287 = var289;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
}
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 253);
show_backtrace(1);
} else {
}
}
}
/* <var_npropdef:nullable ANode(ANode)> isa AMethPropdef */
cltype291 = type_nit__AMethPropdef.color;
idtype292 = type_nit__AMethPropdef.id;
if(cltype291 >= var_npropdef->type->table_size) {
var290 = 0;
} else {
var290 = var_npropdef->type->type_table[cltype291] == idtype292;
}
if (var290){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var295 = var_npropdef->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <var_npropdef:nullable ANode(AMethPropdef)> */
var293 = var295;
RET_LABEL294:(void)0;
}
}
var_auto_super_inits = var293;
var296 = NULL;
if (var_auto_super_inits == NULL) {
var297 = 0; /* is null */
} else {
var297 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,var296) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other26 = var296;
{
var300 = ((short int (*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_auto_super_inits, var_other26) /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
}
var301 = !var300;
var298 = var301;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
var297 = var298;
}
if (var297){
var_302 = var_auto_super_inits;
{
var303 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_302);
}
var_304 = var303;
for(;;) {
{
var305 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_304);
}
if (var305){
{
var306 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_304);
}
var_auto_super_init = var306;
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var_auto_super_init); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_304); /* Direct call array#ArrayIterator#next on <var_304:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label307;
}
}
BREAK_label307: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_304) on <var_304:ArrayIterator[CallSite]> */
RET_LABEL308:(void)0;
}
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var311 = var_npropdef->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <var_npropdef:nullable ANode(AMethPropdef)> */
var309 = var311;
RET_LABEL310:(void)0;
}
}
if (var309){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var314 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var314 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
}
var312 = var314;
RET_LABEL313:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_super_send(self, var312, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var318 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
var_319 = var316;
if (var316){
var315 = var_319;
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var322 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_mmethoddef:MMethodDef> */
var320 = var322;
RET_LABEL321:(void)0;
}
}
var315 = var320;
}
if (var315){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var325 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var323 = var325;
RET_LABEL324:(void)0;
}
}
if (var323 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 270);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var323) on <var323:nullable MSignature> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var328 = var323->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var323:nullable MSignature> */
var326 = var328;
RET_LABEL327:(void)0;
}
}
var_ret = var326;
var332 = NULL;
if (var_ret == NULL) {
var333 = 0; /* is null */
} else {
var333 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var332) on <var_ret:nullable MType> */
var_other26 = var332;
{
var336 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other26) /* == on <var_ret:nullable MType(MType)>*/;
}
var337 = !var336;
var334 = var337;
goto RET_LABEL335;
RET_LABEL335:(void)0;
}
var333 = var334;
}
var_338 = var333;
if (var333){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype340 = type_nit__MClassType.color;
idtype341 = type_nit__MClassType.id;
if(cltype340 >= var_ret->type->table_size) {
var339 = 0;
} else {
var339 = var_ret->type->type_table[cltype340] == idtype341;
}
var331 = var339;
} else {
var331 = var_338;
}
var_342 = var331;
if (var331){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var345 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var343) on <var343:MClass> */
var348 = var343->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var343:MClass> */
if (unlikely(var348 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
{
var349 = nit__model___standard__Object___abstract_kind(self);
}
{
{ /* Inline kernel#Object#!= (var346,var349) on <var346:MClassKind> */
var_other26 = var349;
{
var352 = ((short int (*)(val* self, val* p0))(var346->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var346, var_other26) /* == on <var346:MClassKind>*/;
}
var353 = !var352;
var350 = var353;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
}
var330 = var350;
} else {
var330 = var_342;
}
var_354 = var330;
if (var330){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var357 = var_ret->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var355) on <var355:MClass> */
var360 = var355->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var355:MClass> */
if (unlikely(var360 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
var361 = nit__model___standard__Object___interface_kind(self);
}
{
{ /* Inline kernel#Object#!= (var358,var361) on <var358:MClassKind> */
var_other26 = var361;
{
var364 = ((short int (*)(val* self, val* p0))(var358->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var358, var_other26) /* == on <var358:MClassKind>*/;
}
var365 = !var364;
var362 = var365;
goto RET_LABEL363;
RET_LABEL363:(void)0;
}
}
var329 = var362;
} else {
var329 = var_354;
}
if (var329){
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
goto BREAK_label366;
}
BREAK_label266: (void)0;
}
BREAK_label366: (void)0;
var367 = NEW_standard__List(&type_standard__List__nit__MClassType);
{
{ /* Inline list#List#init (var367) on <var367:List[MClassType]> */
RET_LABEL368:(void)0;
}
}
var_todo_types = var367;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var371 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var371 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var369 = var371;
RET_LABEL370:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var_todo_types, var369); /* Direct call abstract_collection#SimpleCollection#add_all on <var_todo_types:List[MClassType]>*/
}
for(;;) {
{
var372 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var_todo_types);
}
var373 = !var372;
if (var373){
{
var374 = standard___standard__List___standard__abstract_collection__Sequence__shift(var_todo_types);
}
var_t = var374;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var377 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var377 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 58);
show_backtrace(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
var_378 = var375;
{
var379 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_378);
}
var_380 = var379;
for(;;) {
{
var381 = ((short int (*)(val* self))(var_380->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_380) /* is_ok on <var_380:Iterator[MClassType]>*/;
}
if (var381){
{
var382 = ((val* (*)(val* self))(var_380->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_380) /* item on <var_380:Iterator[MClassType]>*/;
}
var_ot = var382;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var385 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var385 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var383 = var385;
RET_LABEL384:(void)0;
}
}
{
var386 = ((short int (*)(val* self, val* p0, val* p1, val* p2))(var_ot->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_ot, var_t, var_t, var383) /* can_resolve_for on <var_ot:MClassType>*/;
}
var387 = !var386;
if (var387){
goto BREAK_label388;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var391 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var391 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
{
var392 = nit___nit__MClassType___MType__anchor_to(var_ot, var389, var_t);
}
var_rt = var392;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var395 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var395 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var393 = var395;
RET_LABEL394:(void)0;
}
}
{
var396 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var393, var_rt);
}
if (var396){
goto BREAK_label388;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var399 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var399 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var397 = var399;
RET_LABEL398:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var397, var_rt); /* Direct call hash_collection#HashSet#add on <var397:HashSet[MClassType]>*/
}
{
standard___standard__Sequence___SimpleCollection__add(var_todo_types, var_rt); /* Direct call abstract_collection#Sequence#add on <var_todo_types:List[MClassType]>*/
}
{
nit___nit__RapidTypeAnalysis___check_depth(self, var_rt); /* Direct call rapid_type_analysis#RapidTypeAnalysis#check_depth on <self:RapidTypeAnalysis>*/
}
BREAK_label388: (void)0;
{
((void (*)(val* self))(var_380->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_380) /* next on <var_380:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label400;
}
}
BREAK_label400: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_380) on <var_380:Iterator[MClassType]> */
RET_LABEL401:(void)0;
}
}
} else {
goto BREAK_label402;
}
}
BREAK_label402: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var405 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 68);
show_backtrace(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
var_406 = var403;
{
var407 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_406);
}
var_408 = var407;
for(;;) {
{
var409 = ((short int (*)(val* self))(var_408->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_408) /* is_ok on <var_408:Iterator[MType]>*/;
}
if (var409){
{
var410 = ((val* (*)(val* self))(var_408->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_408) /* item on <var_408:Iterator[MType]>*/;
}
var_ot411 = var410;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var414 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var414 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var412 = var414;
RET_LABEL413:(void)0;
}
}
var_415 = var412;
{
var416 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_415);
}
var_417 = var416;
for(;;) {
{
var418 = ((short int (*)(val* self))(var_417->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_417) /* is_ok on <var_417:Iterator[MClassType]>*/;
}
if (var418){
{
var419 = ((val* (*)(val* self))(var_417->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_417) /* item on <var_417:Iterator[MClassType]>*/;
}
var_t420 = var419;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var423 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var423 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
{
var424 = ((short int (*)(val* self, val* p0, val* p1, val* p2))(var_ot411->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_ot411, var_t420, var_t420, var421) /* can_resolve_for on <var_ot411:MType>*/;
}
var425 = !var424;
if (var425){
goto BREAK_label426;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var429 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var429 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var427 = var429;
RET_LABEL428:(void)0;
}
}
{
var430 = ((val* (*)(val* self, val* p0, val* p1))(var_ot411->class->vft[COLOR_nit__model__MType__anchor_to]))(var_ot411, var427, var_t420) /* anchor_to on <var_ot411:MType>*/;
}
var_rt431 = var430;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var434 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var434 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
show_backtrace(1);
}
var432 = var434;
RET_LABEL433:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var432, var_rt431); /* Direct call hash_collection#HashSet#add on <var432:HashSet[MType]>*/
}
BREAK_label426: (void)0;
{
((void (*)(val* self))(var_417->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_417) /* next on <var_417:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label435;
}
}
BREAK_label435: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_417) on <var_417:Iterator[MClassType]> */
RET_LABEL436:(void)0;
}
}
{
((void (*)(val* self))(var_408->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_408) /* next on <var_408:Iterator[MType]>*/;
}
} else {
goto BREAK_label437;
}
}
BREAK_label437: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_408) on <var_408:Iterator[MType]> */
RET_LABEL438:(void)0;
}
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#check_depth for (self: RapidTypeAnalysis, MClassType) */
void nit___nit__RapidTypeAnalysis___check_depth(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
long var /* : Int */;
long var_d /* var d: Int */;
long var1 /* : Int */;
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
val* var12 /* : null */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : Object */;
val* var31 /* : String */;
var_mtype = p0;
{
var = ((long (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__length]))(var_mtype) /* length on <var_mtype:MClassType>*/;
}
var_d = var;
var1 = 255;
{
{ /* Inline kernel#Int#> (var_d,var1) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var5 = var_d > var1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
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
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NULL;
if (varonce) {
var13 = varonce;
} else {
var14 = "Fatal error: limitation in the rapidtype analysis engine: a type depth of ";
var15 = 74;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " is too important, the problematic type is ";
var20 = 43;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ".";
var25 = 1;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var13;
var30 = BOX_standard__Int(var_d); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var30;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var18;
((struct instance_standard__NativeArray*)var29)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var29)->values[4] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__ToolContext___fatal_error(var9, var12, var31); /* Direct call toolcontext#ToolContext#fatal_error on <var9:ToolContext>*/
}
} else {
}
RET_LABEL:;
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
val* var35 /* : HashSet[MMethodDef] */;
val* var37 /* : HashSet[MMethodDef] */;
val* var_38 /* var : HashSet[MMethodDef] */;
val* var39 /* : Iterator[nullable Object] */;
val* var_40 /* var : Iterator[MMethodDef] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_p43 /* var p: MMethodDef */;
val* var46 /* : Array[MMethod] */;
val* var48 /* : Array[MMethod] */;
val* var_49 /* var : Array[MMethod] */;
val* var50 /* : ArrayIterator[nullable Object] */;
val* var_51 /* var : ArrayIterator[MMethod] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_p54 /* var p: MMethod */;
val* var55 /* : HashSet[MMethod] */;
val* var57 /* : HashSet[MMethod] */;
val* var60 /* : Array[MMethod] */;
val* var62 /* : Array[MMethod] */;
val* var63 /* : MModule */;
val* var65 /* : MModule */;
val* var66 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var67 /* : MModule */;
val* var69 /* : MModule */;
val* var70 /* : Set[MClassDef] */;
val* var_71 /* var : Set[MClassDef] */;
val* var72 /* : Iterator[nullable Object] */;
val* var_73 /* var : Iterator[MClassDef] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var76 /* : ModelBuilder */;
val* var78 /* : ModelBuilder */;
val* var79 /* : Array[AAttrPropdef] */;
val* var_80 /* var : Array[AAttrPropdef] */;
val* var81 /* : ArrayIterator[nullable Object] */;
val* var_82 /* var : ArrayIterator[AAttrPropdef] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var90 /* : nullable MPropDef */;
val* var92 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var93 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
val* var94 /* : nullable AExpr */;
val* var96 /* : nullable AExpr */;
val* var97 /* : nullable AExpr */;
val* var99 /* : nullable AExpr */;
var_recv = p0;
var_mtype = p1;
{
var = ((short int (*)(val* self))(var_recv->class->vft[COLOR_nit__model__MType__need_anchor]))(var_recv) /* need_anchor on <var_recv:MClassType>*/;
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 323);
show_backtrace(1);
}
{
var2 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MClassType>*/;
}
if (var2){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 58);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 58);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 162);
show_backtrace(1);
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
var32 = ((short int (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_31) /* is_ok on <var_31:Iterator[MMethod]>*/;
}
if (var32){
{
var33 = ((val* (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_31) /* item on <var_31:Iterator[MMethod]>*/;
}
var_p = var33;
{
nit___nit__RapidTypeAnalysis___try_send(self, var_mtype, var_p); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_31) /* next on <var_31:Iterator[MMethod]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_31) on <var_31:Iterator[MMethod]> */
RET_LABEL34:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var37 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 107);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int (*)(val* self))(var_40->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_40) /* is_ok on <var_40:Iterator[MMethodDef]>*/;
}
if (var41){
{
var42 = ((val* (*)(val* self))(var_40->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_40) /* item on <var_40:Iterator[MMethodDef]>*/;
}
var_p43 = var42;
{
nit___nit__RapidTypeAnalysis___try_super_send(self, var_mtype, var_p43); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val* self))(var_40->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_40) /* next on <var_40:Iterator[MMethodDef]>*/;
}
} else {
goto BREAK_label44;
}
}
BREAK_label44: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_40) on <var_40:Iterator[MMethodDef]> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var48 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 165);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_49 = var46;
{
var50 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_49);
}
var_51 = var50;
for(;;) {
{
var52 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_51);
}
if (var52){
{
var53 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_51);
}
var_p54 = var53;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var57 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 162);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var55, var_p54); /* Direct call hash_collection#HashSet#remove on <var55:HashSet[MMethod]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_51); /* Direct call array#ArrayIterator#next on <var_51:ArrayIterator[MMethod]>*/
}
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_51) on <var_51:ArrayIterator[MMethod]> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 165);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var60); /* Direct call array#AbstractArray#clear on <var60:Array[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var65 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = nit___nit__MClassType___MType__anchor_to(var_mtype, var63, var_recv);
}
var_bound_mtype = var66;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var69 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = nit___nit__MClassType___MType__collect_mclassdefs(var_bound_mtype, var67);
}
var_71 = var70;
{
var72 = ((val* (*)(val* self))(var_71->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_71) /* iterator on <var_71:Set[MClassDef]>*/;
}
var_73 = var72;
for(;;) {
{
var74 = ((short int (*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_73) /* is_ok on <var_73:Iterator[MClassDef]>*/;
}
if (var74){
{
var75 = ((val* (*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_73) /* item on <var_73:Iterator[MClassDef]>*/;
}
var_cd = var75;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var78 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = nit__modelize_property___ModelBuilder___collect_attr_propdef(var76, var_cd);
}
var_80 = var79;
{
var81 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_80);
}
var_82 = var81;
for(;;) {
{
var83 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_82);
}
if (var83){
{
var84 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_82);
}
var_npropdef = var84;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:AAttrPropdef> */
var87 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:AAttrPropdef> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var88 = !var85;
if (var88){
goto BREAK_label89;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AAttrPropdef> */
var92 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AAttrPropdef> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 349);
show_backtrace(1);
}
var_mpropdef = var90;
var93 = NEW_nit__RapidTypeVisitor(&type_nit__RapidTypeVisitor);
{
((void (*)(val* self, val* p0))(var93->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var93, self) /* analysis= on <var93:RapidTypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var93->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var93, var_bound_mtype) /* receiver= on <var93:RapidTypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var93->class->vft[COLOR_nit__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var93, var_mpropdef) /* mpropdef= on <var93:RapidTypeVisitor>*/;
}
{
((void (*)(val* self))(var93->class->vft[COLOR_standard__kernel__Object__init]))(var93) /* init on <var93:RapidTypeVisitor>*/;
}
var_v = var93;
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (var_npropdef) on <var_npropdef:AAttrPropdef> */
var96 = var_npropdef->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <var_npropdef:AAttrPropdef> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var94); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (var_npropdef) on <var_npropdef:AAttrPropdef> */
var99 = var_npropdef->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <var_npropdef:AAttrPropdef> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var97); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
BREAK_label89: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_82); /* Direct call array#ArrayIterator#next on <var_82:ArrayIterator[AAttrPropdef]>*/
}
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_82) on <var_82:ArrayIterator[AAttrPropdef]> */
RET_LABEL101:(void)0;
}
}
{
((void (*)(val* self))(var_73->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_73) /* next on <var_73:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label102;
}
}
BREAK_label102: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_73) on <var_73:Iterator[MClassDef]> */
RET_LABEL103:(void)0;
}
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
var = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var3 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 68);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 65);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
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
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var23 /* : Bool */;
val* var24 /* : Array[MPropDef] */;
val* var26 /* : Array[MPropDef] */;
val* var_ /* var : Array[MMethodDef] */;
val* var27 /* : ArrayIterator[nullable Object] */;
val* var_28 /* var : ArrayIterator[MMethodDef] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : HashSet[MMethodDef] */;
val* var36 /* : HashSet[MMethodDef] */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var41 /* : Array[MMethod] */;
val* var43 /* : Array[MMethod] */;
val* var44 /* : MProperty */;
val* var46 /* : MProperty */;
var_mpropdef = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 172);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
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
var19 = 1;
{
{ /* Inline kernel#Int#<= (var16,var19) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var23 = var16 <= var19;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var26 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
{
var27 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_28 = var27;
for(;;) {
{
var29 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_28);
}
if (var29){
{
var30 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_28);
}
var_d = var30;
{
{ /* Inline model#MMethodDef#is_abstract (var_d) on <var_d:MMethodDef> */
var33 = var_d->attrs[COLOR_nit__model__MMethodDef___is_abstract].s; /* _is_abstract on <var_d:MMethodDef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31){
goto BREAK_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var36 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 72);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var34, var_d);
}
var38 = !var37;
if (var38){
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:ArrayIterator[MMethodDef]> */
RET_LABEL40:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var43 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 165);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var46 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var41, var44); /* Direct call array#Array#add on <var41:Array[MMethod]>*/
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
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Array[MPropDef] */;
val* var22 /* : Array[MPropDef] */;
val* var23 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var24 /* : HashSet[MMethod] */;
val* var26 /* : HashSet[MMethod] */;
val* var27 /* : HashSet[MClass] */;
val* var29 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : Iterator[MClass] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 168);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 168);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
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
var16 = 1;
{
{ /* Inline kernel#Int#== (var13,var16) on <var13:Int> */
var19 = var13 == var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var22 = var_mproperty->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__SequenceRead___Collection__first(var20);
}
var_d = var23;
{
nit___nit__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var26 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 162);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var24, var_mproperty); /* Direct call hash_collection#HashSet#add on <var24:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
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
var32 = ((short int (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_31) /* is_ok on <var_31:Iterator[MClass]>*/;
}
if (var32){
{
var33 = ((val* (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_31) /* item on <var_31:Iterator[MClass]>*/;
}
var_c = var33;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var36 = var_c->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___try_send(self, var37, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_31) /* next on <var_31:Iterator[MClass]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_31) on <var_31:Iterator[MClass]> */
RET_LABEL40:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int (*)(val* self, val* p0))(var12->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var12, var13) /* has on <var12:Set[MClassDef]>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 422);
show_backtrace(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 107);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 107);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 62);
show_backtrace(1);
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
var15 = ((short int (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[MClass]>*/;
}
if (var15){
{
var16 = ((val* (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[MClass]>*/;
}
var_c = var16;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___try_super_send(self, var20, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[MClass]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[MClass]> */
RET_LABEL23:(void)0;
}
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: RapidTypeAnalysis) */
void nit___nit__RapidTypeAnalysis___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__RapidTypeAnalysis___standard__kernel__Object__init]))(self) /* init on <self:RapidTypeAnalysis>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
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
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__RapidTypeVisitor___standard__kernel__Object__init]))(self) /* init on <self:RapidTypeVisitor>*/;
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int (*)(val* self))(var->class->vft[COLOR_nit__model__MType__need_anchor]))(var) /* need_anchor on <var:MClassType>*/;
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 441);
show_backtrace(1);
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: RapidTypeVisitor, ANode) */
void nit___nit__RapidTypeVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
var_n = p0;
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self) /* accept_rapid_type_visitor on <var_n:ANode>*/;
}
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
{ /* Inline typing#AExpr#implicit_cast_to (var_n) on <var_n:ANode(AExpr)> */
var3 = var_n->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_n:ANode(AExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_implicit_cast_to = var1;
var4 = NULL;
if (var_implicit_cast_to == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_implicit_cast_to,var4) on <var_implicit_cast_to:nullable MType> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other) /* == on <var_implicit_cast_to:nullable MType(MType)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
nit___nit__RapidTypeVisitor___add_cast_type(self, var_implicit_cast_to); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <self:RapidTypeVisitor>*/
}
} else {
}
} else {
}
/* <var_n:ANode> isa AAnnotations */
cltype11 = type_nit__AAnnotations.color;
idtype12 = type_nit__AAnnotations.id;
if(cltype11 >= var_n->type->table_size) {
var10 = 0;
} else {
var10 = var_n->type->type_table[cltype11] == idtype12;
}
var13 = !var10;
if (var13){
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
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
val* var12 /* : null */;
val* var13 /* : MType */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var3 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var4, var7) /* anchor_to on <var_mtype:MType>*/;
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
var12 = NULL;
var = var12;
goto RET_LABEL;
} else {
}
{
var13 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var13;
/* <var_mtype:MType> isa MClassType */
cltype15 = type_nit__MClassType.color;
idtype16 = type_nit__MClassType.id;
if(cltype15 >= var_mtype->type->table_size) {
var14 = 0;
} else {
var14 = var_mtype->type->type_table[cltype15] == idtype16;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 463);
show_backtrace(1);
}
{
var17 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType(MClassType)>*/;
}
var18 = !var17;
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 464);
show_backtrace(1);
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_class for (self: RapidTypeVisitor, String): MClass */
val* nit___nit__RapidTypeVisitor___get_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : RapidTypeAnalysis */;
val* var3 /* : RapidTypeAnalysis */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClass */;
var_name = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var3 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__model___MModule___get_primitive_class(var4, var_name);
}
var = var7;
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
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : RapidTypeAnalysis */;
val* var10 /* : RapidTypeAnalysis */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : nullable ANode */;
val* var16 /* : nullable ANode */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : RapidTypeAnalysis */;
val* var22 /* : RapidTypeAnalysis */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
val* var26 /* : MMethod */;
var_recv = p0;
var_name = p1;
{
var1 = nit___nit__RapidTypeVisitor___cleanup_type(self, var_recv);
}
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var2) on <var_mtype:nullable MClassType> */
var_other = var2;
{
var6 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MClassType(MClassType)>*/;
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 476);
show_backtrace(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var10 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (var8) on <var8:RapidTypeAnalysis> */
var13 = var8->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <var8:RapidTypeAnalysis> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 46);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline parser_nodes#Visitor#current_node (self) on <self:RapidTypeVisitor> */
var16 = self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val; /* _current_node on <self:RapidTypeVisitor> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 477);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var22 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var20) on <var20:RapidTypeAnalysis> */
var25 = var20->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var20:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__ModelBuilder___force_get_primitive_method(var11, var14, var_name, var17, var23);
}
var = var26;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 75);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 485);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MMethodDef */;
val* var8 /* : MMethodDef */;
val* var9 /* : Array[MProperty] */;
val* var11 /* : Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MProperty] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_m /* var m: MProperty */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var17 /* : RapidTypeAnalysis */;
val* var19 /* : RapidTypeAnalysis */;
val* var20 /* : MType */;
val* var22 /* : MType */;
val* var24 /* : RapidTypeAnalysis */;
val* var26 /* : RapidTypeAnalysis */;
val* var27 /* : MType */;
val* var29 /* : MType */;
val* var30 /* : MMethod */;
val* var32 /* : MMethod */;
val* var33 /* : RapidTypeAnalysis */;
val* var35 /* : RapidTypeAnalysis */;
val* var36 /* : HashSet[CallSite] */;
val* var38 /* : HashSet[CallSite] */;
var_callsite = p0;
var = NULL;
if (var_callsite == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,var) on <var_callsite:nullable CallSite> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var8 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var6) on <var6:MMethodDef> */
var11 = var6->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var6:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
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
var_m = var15;
/* <var_m:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_m->type->table_size) {
var16 = 0;
} else {
var16 = var_m->type->type_table[cltype] == idtype;
}
if (var16){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var19 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var22 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 473);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_send(var17, var20, var_m); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var17:RapidTypeAnalysis>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:ArrayIterator[MProperty]> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var26 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var29 = var_callsite->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 473);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var32 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nit___nit__RapidTypeAnalysis___add_send(var24, var27, var30); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var24:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var35 = self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_callsites (var33) on <var33:RapidTypeAnalysis> */
var38 = var33->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <var33:RapidTypeAnalysis> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 78);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var36, var_callsite); /* Direct call hash_collection#HashSet#add on <var36:HashSet[CallSite]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 514);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 521);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 528);
show_backtrace(1);
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
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var15 /* : Array[MType] */;
long var16 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var17 /* : Array[MType] */;
val* var18 /* : nullable Object */;
val* var19 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var20 /* : nullable MClassType */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 535);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 49);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (varonce) {
var10 = varonce;
} else {
var11 = "NativeArray";
var12 = 11;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
var14 = nit__model___MModule___get_primitive_class(var7, var10);
}
var15 = NEW_standard__Array(&type_standard__Array__nit__MType);
var16 = 1;
{
standard___standard__Array___with_capacity(var15, var16); /* Direct call array#Array#with_capacity on <var15:Array[MType]>*/
}
var_ = var15;
{
var17 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
}
{
var18 = standard___standard__SequenceRead___Collection__first(var17);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var18); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var19 = nit___nit__MClass___get_mtype(var14, var_);
}
var_native = var19;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
var20 = nit___nit__RapidTypeVisitor___cleanup_type(var_v, var_mtype);
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 539);
show_backtrace(1);
}
var_mtype = var20;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "with_native";
var24 = 11;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
var26 = nit___nit__RapidTypeVisitor___get_method(var_v, var_mtype, var22);
}
var_prop = var26;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_mtype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: AStringFormExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : MClass */;
val* var5 /* : MClassType */;
val* var7 /* : MClassType */;
val* var_native /* var native: MClassType */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "NativeString";
var2 = 12;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit___nit__RapidTypeVisitor___get_class(var_v, var);
}
{
{ /* Inline model#MClass#mclass_type (var4) on <var4:MClass> */
var7 = var4->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var4:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_native = var5;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = "to_s_with_length";
var11 = 16;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
{
var13 = nit___nit__RapidTypeVisitor___get_method(var_v, var_native, var9);
}
var_prop = var13;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_native, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: ASuperstringExpr, RapidTypeVisitor) */
void nit__rapid_type_analysis___ASuperstringExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : MClass */;
val* var5 /* : Array[MClassType] */;
long var6 /* : Int */;
val* var_ /* var : Array[MClassType] */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : MClass */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : MClass */;
val* var23 /* : Array[MClassType] */;
long var24 /* : Int */;
val* var_25 /* var : Array[MClassType] */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : MClass */;
val* var32 /* : MClassType */;
val* var34 /* : MClassType */;
val* var35 /* : MClassType */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : MMethod */;
val* var_prop2 /* var prop2: MMethod */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Array";
var2 = 5;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = nit___nit__RapidTypeVisitor___get_class(var_v, var);
}
var5 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
var6 = 1;
{
standard___standard__Array___with_capacity(var5, var6); /* Direct call array#Array#with_capacity on <var5:Array[MClassType]>*/
}
var_ = var5;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "Object";
var10 = 6;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
{
var12 = nit___nit__RapidTypeVisitor___get_class(var_v, var8);
}
{
{ /* Inline model#MClass#mclass_type (var12) on <var12:MClass> */
var15 = var12->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var12:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var13); /* Direct call array#AbstractArray#push on <var_:Array[MClassType]>*/
}
{
var16 = nit___nit__MClass___get_mtype(var4, var_);
}
var_arraytype = var16;
{
nit___nit__RapidTypeVisitor___add_type(var_v, var_arraytype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "NativeArray";
var20 = 11;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = nit___nit__RapidTypeVisitor___get_class(var_v, var18);
}
var23 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
var24 = 1;
{
standard___standard__Array___with_capacity(var23, var24); /* Direct call array#Array#with_capacity on <var23:Array[MClassType]>*/
}
var_25 = var23;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Object";
var29 = 6;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
var31 = nit___nit__RapidTypeVisitor___get_class(var_v, var27);
}
{
{ /* Inline model#MClass#mclass_type (var31) on <var31:MClass> */
var34 = var31->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var31:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_25, var32); /* Direct call array#AbstractArray#push on <var_25:Array[MClassType]>*/
}
{
var35 = nit___nit__MClass___get_mtype(var22, var_25);
}
{
nit___nit__RapidTypeVisitor___add_type(var_v, var35); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "join";
var39 = 4;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
var41 = nit___nit__RapidTypeVisitor___get_method(var_v, var_arraytype, var37);
}
var_prop = var41;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "with_native";
var45 = 11;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = nit___nit__RapidTypeVisitor___get_method(var_v, var_arraytype, var43);
}
var_prop2 = var47;
{
nit___nit__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop2); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 571);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 580);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 589);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 596);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 603);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 610);
show_backtrace(1);
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
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : RapidTypeAnalysis */;
val* var11 /* : RapidTypeAnalysis */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : nullable MMethodDef */;
val* var17 /* : nullable MMethodDef */;
var_v = p0;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var2 = self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_callsite = var;
var3 = NULL;
if (var_callsite == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,var3) on <var_callsite:nullable CallSite> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var_callsite); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var11 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 435);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var14 = var_v->attrs[COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 436);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var17 = self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 654);
show_backtrace(1);
}
{
nit___nit__RapidTypeAnalysis___add_super_send(var9, var12, var15); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <var9:RapidTypeAnalysis>*/
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
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable CallSite */;
val* var18 /* : nullable CallSite */;
val* var19 /* : nullable Array[Variable] */;
val* var21 /* : nullable Array[Variable] */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable CallSite */;
val* var31 /* : nullable CallSite */;
val* var32 /* : nullable CallSite */;
val* var34 /* : nullable CallSite */;
val* var35 /* : nullable CallSite */;
val* var37 /* : nullable CallSite */;
val* var38 /* : nullable CallSite */;
val* var40 /* : nullable CallSite */;
val* var_mf /* var mf: nullable CallSite */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 663);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var6) on <var6:nullable Array[Variable]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var11 = var6->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var6:nullable Array[Variable]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 1;
{
{ /* Inline kernel#Int#== (var9,var12) on <var9:Int> */
var15 = var9 == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var18 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var16); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var21 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 665);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var19) on <var19:nullable Array[Variable]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var19:nullable Array[Variable]> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = 2;
{
{ /* Inline kernel#Int#== (var22,var25) on <var22:Int> */
var28 = var22 == var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var31 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var29); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var34 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var32); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 669);
show_backtrace(1);
}
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var37 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
nit___nit__RapidTypeVisitor___add_callsite(var_v, var35); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var40 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_mf = var38;
var41 = NULL;
if (var_mf == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mf,var41) on <var_mf:nullable CallSite> */
var_other = var41;
{
var45 = ((short int (*)(val* self, val* p0))(var_mf->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mf, var_other) /* == on <var_mf:nullable CallSite(CallSite)>*/;
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 680);
show_backtrace(1);
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
