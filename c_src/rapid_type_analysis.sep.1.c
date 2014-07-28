#include "rapid_type_analysis.sep.0.h"
/* method rapid_type_analysis#ModelBuilder#do_rapid_type_analysis for (self: ModelBuilder, MModule): RapidTypeAnalysis */
val* rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(val* self, val* p0) {
val* var /* : RapidTypeAnalysis */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
var_mainmodule = p0;
var1 = NEW_rapid_type_analysis__RapidTypeAnalysis(&type_rapid_type_analysis__RapidTypeAnalysis);
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#init (var1,self,var_mainmodule) on <var1:RapidTypeAnalysis> */
var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = self; /* _modelbuilder on <var1:RapidTypeAnalysis> */
var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = var_mainmodule; /* _mainmodule on <var1:RapidTypeAnalysis> */
RET_LABEL2:(void)0;
}
}
var_analysis = var1;
{
rapid_type_analysis__RapidTypeAnalysis__run_analysis(var_analysis); /* Direct call rapid_type_analysis#RapidTypeAnalysis#run_analysis on <var_analysis:RapidTypeAnalysis>*/
}
var = var_analysis;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#ModelBuilder#do_rapid_type_analysis for (self: Object, MModule): RapidTypeAnalysis */
val* VIRTUAL_rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(val* self, val* p0) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder for (self: RapidTypeAnalysis): ModelBuilder */
val* rapid_type_analysis__RapidTypeAnalysis__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder for (self: Object): ModelBuilder */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule for (self: RapidTypeAnalysis): MModule */
val* rapid_type_analysis__RapidTypeAnalysis__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule for (self: Object): MModule */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types for (self: Object): HashSet[MClassType] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var3 /* : HashSet[MClassType] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_open_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 60);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types for (self: Object): HashSet[MClassType] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var3 /* : HashSet[MClassType] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 60);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes for (self: RapidTypeAnalysis): HashSet[MClass] */
val* rapid_type_analysis__RapidTypeAnalysis__live_classes(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes for (self: Object): HashSet[MClass] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var3 /* : HashSet[MClass] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: Object): HashSet[MType] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
val* var3 /* : HashSet[MType] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 70);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types for (self: Object): HashSet[MType] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
val* var3 /* : HashSet[MType] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 70);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__live_methoddefs(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs for (self: Object): HashSet[MMethodDef] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
val* var3 /* : HashSet[MMethodDef] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__live_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 77);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods for (self: Object): HashSet[MMethod] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var3 /* : HashSet[MMethod] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 77);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_callsites for (self: RapidTypeAnalysis): HashSet[CallSite] */
val* rapid_type_analysis__RapidTypeAnalysis__live_callsites(val* self) {
val* var /* : HashSet[CallSite] */;
val* var1 /* : HashSet[CallSite] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 80);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_callsites for (self: Object): HashSet[CallSite] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_callsites(val* self) {
val* var /* : HashSet[CallSite] */;
val* var1 /* : HashSet[CallSite] */;
val* var3 /* : HashSet[CallSite] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_callsites (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 80);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets_cache for (self: RapidTypeAnalysis): HashMap2[MType, MProperty, Set[MMethodDef]] */
val* rapid_type_analysis__RapidTypeAnalysis__live_targets_cache(val* self) {
val* var /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var1 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 83);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets_cache for (self: Object): HashMap2[MType, MProperty, Set[MMethodDef]] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_targets_cache(val* self) {
val* var /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var1 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var3 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 83);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets for (self: RapidTypeAnalysis, CallSite): Set[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__live_targets(val* self, val* p0) {
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
short int var13 /* : Bool */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : MClass */;
val* var22 /* : MClass */;
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
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : ArraySet[MMethodDef] */;
val* var42 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var44 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var45 /* : HashSet[MClass] */;
val* var47 /* : HashSet[MClass] */;
val* var48 /* : Iterator[Object] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var51 /* : MClassDef */;
val* var52 /* : MClassType */;
val* var54 /* : MClassType */;
val* var_tc /* var tc: MClassType */;
val* var55 /* : MModule */;
val* var57 /* : MModule */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MModule */;
val* var63 /* : MModule */;
val* var64 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_callsite = p0;
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 408);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
{ /* Inline typing#CallSite#anchor (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_typing__CallSite___anchor].val; /* _anchor on <var_callsite:CallSite> */
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
var12 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var11 = var12;
}
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
{ /* Inline typing#CallSite#mmodule (var_callsite) on <var_callsite:CallSite> */
var16 = var_callsite->attrs[COLOR_typing__CallSite___mmodule].val; /* _mmodule on <var_callsite:CallSite> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 411);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var14, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var17;
} else {
}
{
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var18;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var19 = 0;
} else {
var19 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 92);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var22 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = model__MClass__intro(var20);
}
{
{ /* Inline model#MClassDef#bound_mtype (var23) on <var23:MClassDef> */
var26 = var23->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var23:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mtype = var24;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var29 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mproperty = var27;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 83);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = more_collections__HashMap2___91d_93d(var30, var_mtype, var_mproperty);
}
var_res = var33;
var34 = NULL;
if (var_res == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var34) on <var_res:nullable Set[MMethodDef]> */
var_other = var34;
{
var39 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable Set[MMethodDef](Set[MMethodDef])>*/;
var38 = var39;
}
var40 = !var38;
var36 = var40;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
var = var_res;
goto RET_LABEL;
} else {
}
var41 = NEW_array__ArraySet(&type_array__ArraySetmodel__MMethodDef);
{
array__ArraySet__init(var41); /* Direct call array#ArraySet#init on <var41:ArraySet[MMethodDef]>*/
}
var_res = var41;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var44 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 83);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var42, var_mtype, var_mproperty, var_res); /* Direct call more_collections#HashMap2#[]= on <var42:HashMap2[MType, MProperty, Set[MMethodDef]]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var47 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = hash_collection__HashSet__iterator(var45);
}
for(;;) {
{
var49 = ((short int (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var48) /* is_ok on <var48:Iterator[Object]>*/;
}
if(!var49) break;
{
var50 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__item]))(var48) /* item on <var48:Iterator[Object]>*/;
}
var_c = var50;
{
var51 = model__MClass__intro(var_c);
}
{
{ /* Inline model#MClassDef#bound_mtype (var51) on <var51:MClassDef> */
var54 = var51->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var51:MClassDef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_tc = var52;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var57 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
var58 = NULL;
{
var59 = model__MType__is_subtype(var_tc, var55, var58, var_mtype);
}
var60 = !var59;
if (var60){
goto CONTINUE_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var63 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = model__MProperty__lookup_first_definition(var_mproperty, var61, var_tc);
}
var_d = var64;
{
array__ArraySet__add(var_res, var_d); /* Direct call array#ArraySet#add on <var_res:nullable Set[MMethodDef](ArraySet[MMethodDef])>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__next]))(var48) /* next on <var48:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets for (self: Object, CallSite): Set[MMethodDef] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_targets(val* self, val* p0) {
val* var /* : Set[MMethodDef] */;
val* var1 /* : Set[MMethodDef] */;
var1 = rapid_type_analysis__RapidTypeAnalysis__live_targets(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__live_super_sends(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 110);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends for (self: Object): HashSet[MMethodDef] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
val* var3 /* : HashSet[MMethodDef] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 110);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 164);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods for (self: Object): HashSet[MMethod] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var3 /* : HashSet[MMethod] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 164);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove for (self: RapidTypeAnalysis): Array[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__totry_methods_to_remove(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 167);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove for (self: Object): Array[MMethod] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods_to_remove(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
val* var3 /* : Array[MMethod] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 167);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__try_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 170);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_methods for (self: Object): HashSet[MMethod] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
val* var3 /* : HashSet[MMethod] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 170);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo for (self: RapidTypeAnalysis): List[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__todo(val* self) {
val* var /* : List[MMethodDef] */;
val* var1 /* : List[MMethodDef] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 174);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo for (self: Object): List[MMethodDef] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo(val* self) {
val* var /* : List[MMethodDef] */;
val* var1 /* : List[MMethodDef] */;
val* var3 /* : List[MMethodDef] */;
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:Object(RapidTypeAnalysis)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:Object(RapidTypeAnalysis)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 174);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#force_alive for (self: RapidTypeAnalysis, String) */
void rapid_type_analysis__RapidTypeAnalysis__force_alive(val* self, val* p0) {
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
short int var13 /* : Bool */;
val* var14 /* : ArrayIterator[nullable Object] */;
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
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#model (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = model__Model__get_mclasses_by_name(var3, var_classname);
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
var12 = ((short int (*)(val*, val*))(var_classes->class->vft[COLOR_kernel__Object___61d_61d]))(var_classes, var_other) /* == on <var_classes:nullable Array[MClass](Array[MClass])>*/;
var11 = var12;
}
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var14 = array__AbstractArrayRead__iterator(var_classes);
}
for(;;) {
{
var15 = array__ArrayIterator__is_ok(var14);
}
if(!var15) break;
{
var16 = array__ArrayIterator__item(var14);
}
var_c = var16;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var22 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_new(self, var17, var20); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var14); /* Direct call array#ArrayIterator#next on <var14:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#force_alive for (self: Object, String) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__force_alive(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, p0); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#run_analysis for (self: RapidTypeAnalysis) */
void rapid_type_analysis__RapidTypeAnalysis__run_analysis(val* self) {
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
short int var29 /* : Bool */;
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
val* var_mainprop /* var mainprop: nullable MMethod */;
val* var42 /* : null */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : List[MMethodDef] */;
val* var71 /* : List[MMethodDef] */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : List[MMethodDef] */;
val* var76 /* : List[MMethodDef] */;
val* var77 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var78 /* : MProperty */;
val* var80 /* : MProperty */;
val* var_mmeth /* var mmeth: MMethod */;
val* var81 /* : RapidTypeVisitor */;
val* var82 /* : MClassDef */;
val* var84 /* : MClassDef */;
val* var85 /* : MClassType */;
val* var87 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
val* var88 /* : nullable MSignature */;
val* var90 /* : nullable MSignature */;
long var91 /* : Int */;
long var93 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var94 /* : Int */;
long var95 /* : Int */;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var101 /* : Bool */;
val* var102 /* : ModelBuilder */;
val* var104 /* : ModelBuilder */;
val* var105 /* : HashMap[MPropDef, APropdef] */;
val* var107 /* : HashMap[MPropDef, APropdef] */;
val* var108 /* : nullable Object */;
val* var_node /* var node: APropdef */;
val* var109 /* : nullable MSignature */;
val* var111 /* : nullable MSignature */;
val* var112 /* : Array[MParameter] */;
val* var114 /* : Array[MParameter] */;
val* var115 /* : nullable Object */;
val* var116 /* : MType */;
val* var118 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var119 /* : MModule */;
val* var121 /* : MModule */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : MClass */;
val* var128 /* : Array[MType] */;
long var129 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var130 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var131 /* : MModule */;
val* var133 /* : MModule */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
val* var139 /* : MClass */;
val* var140 /* : Array[MType] */;
long var141 /* : Int */;
val* var_142 /* var : Array[MType] */;
val* var143 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var144 /* : ModelBuilder */;
val* var146 /* : ModelBuilder */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
val* var152 /* : MClass */;
val* var154 /* : MClass */;
val* var155 /* : MModule */;
val* var157 /* : MModule */;
val* var158 /* : MMethod */;
val* var159 /* : nullable MSignature */;
val* var161 /* : nullable MSignature */;
val* var_sig /* var sig: MSignature */;
val* var162 /* : MPropDef */;
val* var163 /* : nullable MSignature */;
val* var165 /* : nullable MSignature */;
val* var_osig /* var osig: MSignature */;
val* var166 /* : Range[Int] */;
long var167 /* : Int */;
long var168 /* : Int */;
val* var169 /* : Discrete */;
val* var170 /* : Discrete */;
val* var171 /* : Iterator[Discrete] */;
short int var172 /* : Bool */;
val* var173 /* : nullable Object */;
long var_i /* var i: Int */;
long var174 /* : Int */;
val* var175 /* : Array[MParameter] */;
val* var177 /* : Array[MParameter] */;
val* var178 /* : nullable Object */;
val* var179 /* : MType */;
val* var181 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var184 /* : Array[MParameter] */;
val* var186 /* : Array[MParameter] */;
val* var187 /* : nullable Object */;
val* var188 /* : MType */;
val* var190 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var191 /* : ModelBuilder */;
val* var193 /* : ModelBuilder */;
val* var194 /* : HashMap[MPropDef, APropdef] */;
val* var196 /* : HashMap[MPropDef, APropdef] */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
val* var199 /* : String */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : FlatString */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
val* var209 /* : ModelBuilder */;
val* var211 /* : ModelBuilder */;
val* var212 /* : HashMap[MClassDef, AClassdef] */;
val* var214 /* : HashMap[MClassDef, AClassdef] */;
val* var215 /* : MClassDef */;
val* var217 /* : MClassDef */;
val* var218 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var219 /* : nullable Collection[MMethod] */;
val* var221 /* : nullable Collection[MMethod] */;
val* var_super_inits /* var super_inits: nullable Collection[MMethod] */;
val* var222 /* : null */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
val* var229 /* : Iterator[nullable Object] */;
short int var230 /* : Bool */;
val* var231 /* : nullable Object */;
val* var_su /* var su: MMethod */;
val* var232 /* : MClassType */;
val* var234 /* : MClassType */;
val* var237 /* : ModelBuilder */;
val* var239 /* : ModelBuilder */;
val* var240 /* : HashMap[MPropDef, APropdef] */;
val* var242 /* : HashMap[MPropDef, APropdef] */;
val* var243 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var244 /* : Bool */;
int cltype245;
int idtype246;
val* var247 /* : nullable Array[CallSite] */;
val* var249 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var250 /* : null */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
val* var257 /* : ArrayIterator[nullable Object] */;
short int var258 /* : Bool */;
val* var259 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : MClassType */;
val* var266 /* : MClassType */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
short int var_271 /* var : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
val* var275 /* : nullable MSignature */;
val* var277 /* : nullable MSignature */;
val* var278 /* : nullable MType */;
val* var280 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
val* var284 /* : null */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var_291 /* var : Bool */;
short int var292 /* : Bool */;
int cltype293;
int idtype294;
short int var_295 /* var : Bool */;
val* var296 /* : MClass */;
val* var298 /* : MClass */;
val* var299 /* : MClassKind */;
val* var301 /* : MClassKind */;
val* var302 /* : MClassKind */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
short int var_309 /* var : Bool */;
val* var310 /* : MClass */;
val* var312 /* : MClass */;
val* var313 /* : MClassKind */;
val* var315 /* : MClassKind */;
val* var316 /* : MClassKind */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
short int var322 /* : Bool */;
val* var323 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var325 /* : HashSet[MClassType] */;
val* var327 /* : HashSet[MClassType] */;
short int var328 /* : Bool */;
short int var329 /* : Bool */;
val* var330 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var331 /* : HashSet[MClassType] */;
val* var333 /* : HashSet[MClassType] */;
val* var334 /* : Iterator[Object] */;
short int var335 /* : Bool */;
val* var336 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var337 /* : MModule */;
val* var339 /* : MModule */;
short int var340 /* : Bool */;
short int var341 /* : Bool */;
val* var343 /* : MModule */;
val* var345 /* : MModule */;
val* var346 /* : MClassType */;
val* var_rt /* var rt: MClassType */;
val* var347 /* : HashSet[MClassType] */;
val* var349 /* : HashSet[MClassType] */;
short int var350 /* : Bool */;
val* var351 /* : HashSet[MClassType] */;
val* var353 /* : HashSet[MClassType] */;
val* var355 /* : HashSet[MType] */;
val* var357 /* : HashSet[MType] */;
val* var358 /* : Iterator[Object] */;
short int var359 /* : Bool */;
val* var360 /* : nullable Object */;
val* var_ot361 /* var ot: MType */;
val* var362 /* : HashSet[MClassType] */;
val* var364 /* : HashSet[MClassType] */;
val* var365 /* : Iterator[Object] */;
short int var366 /* : Bool */;
val* var367 /* : nullable Object */;
val* var_t368 /* var t: MClassType */;
val* var369 /* : MModule */;
val* var371 /* : MModule */;
short int var372 /* : Bool */;
short int var373 /* : Bool */;
val* var375 /* : MModule */;
val* var377 /* : MModule */;
val* var378 /* : MType */;
val* var_rt379 /* var rt: MType */;
val* var380 /* : HashSet[MType] */;
val* var382 /* : HashSet[MType] */;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = model__MModule__sys_type(var);
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
rapid_type_analysis__RapidTypeAnalysis__add_new(self, var_maintype, var_maintype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var13 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
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
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var20 = var_maintype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = model__MModule__try_get_primitive_method(var11, var14, var18);
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
var28 = ((short int (*)(val*, val*))(var_initprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_initprop, var_other26) /* == on <var_initprop:nullable MMethod(MMethod)>*/;
var27 = var28;
}
var29 = !var27;
var24 = var29;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
rapid_type_analysis__RapidTypeAnalysis__add_send(self, var_maintype, var_initprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "main";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var40 = var_maintype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = model__MModule__try_get_primitive_method(var30, var34, var38);
}
var_mainprop = var41;
var42 = NULL;
if (var_mainprop == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mainprop,var42) on <var_mainprop:nullable MMethod> */
var_other26 = var42;
{
var47 = ((short int (*)(val*, val*))(var_mainprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_mainprop, var_other26) /* == on <var_mainprop:nullable MMethod(MMethod)>*/;
var46 = var47;
}
var48 = !var46;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
{
rapid_type_analysis__RapidTypeAnalysis__add_send(self, var_maintype, var_mainprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "Bool";
var52 = 4;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var50); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "Int";
var57 = 3;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var55); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "Float";
var62 = 5;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var60); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Char";
var67 = 4;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var65); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
for(;;) {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var71 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 174);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = list__List__is_empty(var69);
}
var73 = !var72;
if (!var73) break;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var76 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 174);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = list__List__shift(var74);
}
var_mmethoddef = var77;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var80 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var_mmeth = var78;
var81 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var84 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var82) on <var82:MClassDef> */
var87 = var82->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var82:MClassDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__init(var81, self, var85, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeVisitor#init on <var81:RapidTypeVisitor>*/
}
var_v = var81;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var90 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (var88 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 210);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var88) on <var88:nullable MSignature> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1497);
show_backtrace(1);
}
var93 = var88->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var88:nullable MSignature> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_vararg_rank = var91;
var94 = 1;
{
{ /* Inline kernel#Int#unary - (var94) on <var94:Int> */
var97 = -var94;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_vararg_rank,var95) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var95:Int> isa OTHER */
/* <var95:Int> isa OTHER */
var100 = 1; /* easy <var95:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var101 = var_vararg_rank > var95;
var98 = var101;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var104 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var102) on <var102:ModelBuilder> */
var107 = var102->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var102:ModelBuilder> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = hash_collection__HashMap___91d_93d(var105, var_mmethoddef);
}
var_node = var108;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var111 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (var109 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 213);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var109) on <var109:nullable MSignature> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var114 = var109->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var109:nullable MSignature> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = array__Array___91d_93d(var112, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var115) on <var115:nullable Object(MParameter)> */
var118 = var115->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var115:nullable Object(MParameter)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
var_elttype = var116;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var121 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = "Array";
var125 = 5;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
var127 = model__MModule__get_primitive_class(var119, var123);
}
var128 = NEW_array__Array(&type_array__Arraymodel__MType);
var129 = 1;
{
array__Array__with_capacity(var128, var129); /* Direct call array#Array#with_capacity on <var128:Array[MType]>*/
}
var_ = var128;
{
array__AbstractArray__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var130 = model__MClass__get_mtype(var127, var_);
}
var_vararg = var130;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_vararg); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var133 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = "NativeArray";
var137 = 11;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
{
var139 = model__MModule__get_primitive_class(var131, var135);
}
var140 = NEW_array__Array(&type_array__Arraymodel__MType);
var141 = 1;
{
array__Array__with_capacity(var140, var141); /* Direct call array#Array#with_capacity on <var140:Array[MType]>*/
}
var_142 = var140;
{
array__AbstractArray__push(var_142, var_elttype); /* Direct call array#AbstractArray#push on <var_142:Array[MType]>*/
}
{
var143 = model__MClass__get_mtype(var139, var_142);
}
var_native = var143;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var146 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "with_native";
var150 = 11;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
{
{ /* Inline model#MClassType#mclass (var_vararg) on <var_vararg:MClassType> */
var154 = var_vararg->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_vararg:MClassType> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var157 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
var158 = modelbuilder__ModelBuilder__force_get_primitive_method(var144, var_node, var148, var152, var155);
}
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var_vararg, var158); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var161 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 222);
show_backtrace(1);
}
var_sig = var159;
{
var162 = model__MProperty__intro(var_mmeth);
}
{
{ /* Inline model#MMethodDef#msignature (var162) on <var162:MPropDef(MMethodDef)> */
var165 = var162->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var162:MPropDef(MMethodDef)> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 223);
show_backtrace(1);
}
var_osig = var163;
var166 = NEW_range__Range(&type_range__Rangekernel__Int);
var167 = 0;
{
var168 = model__MSignature__arity(var_sig);
}
{
var169 = BOX_kernel__Int(var167); /* autobox from Int to Discrete */
var170 = BOX_kernel__Int(var168); /* autobox from Int to Discrete */
range__Range__without_last(var166, var169, var170); /* Direct call range#Range#without_last on <var166:Range[Int]>*/
}
{
var171 = range__Range__iterator(var166);
}
for(;;) {
{
var172 = ((short int (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var171) /* is_ok on <var171:Iterator[Discrete]>*/;
}
if(!var172) break;
{
var173 = ((val* (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__item]))(var171) /* item on <var171:Iterator[Discrete]>*/;
}
var174 = ((struct instance_kernel__Int*)var173)->value; /* autounbox from nullable Object to Int */;
var_i = var174;
{
{ /* Inline model#MSignature#mparameters (var_osig) on <var_osig:MSignature> */
var177 = var_osig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_osig:MSignature> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = array__Array___91d_93d(var175, var_i);
}
{
{ /* Inline model#MParameter#mtype (var178) on <var178:nullable Object(MParameter)> */
var181 = var178->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var178:nullable Object(MParameter)> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
var_origtype = var179;
{
var182 = ((short int (*)(val*))(var_origtype->class->vft[COLOR_model__MType__need_anchor]))(var_origtype) /* need_anchor on <var_origtype:MType>*/;
}
var183 = !var182;
if (var183){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:MSignature> */
var186 = var_sig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_sig:MSignature> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = array__Array___91d_93d(var184, var_i);
}
{
{ /* Inline model#MParameter#mtype (var187) on <var187:nullable Object(MParameter)> */
var190 = var187->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var187:nullable Object(MParameter)> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
var_paramtype = var188;
{
rapid_type_analysis__RapidTypeAnalysis__add_cast(self, var_paramtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <self:RapidTypeAnalysis>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__next]))(var171) /* next on <var171:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var193 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var191) on <var191:ModelBuilder> */
var196 = var191->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var191:ModelBuilder> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = abstract_collection__MapRead__has_key(var194, var_mmethoddef);
}
var198 = !var197;
if (var198){
{
{ /* Inline model#MProperty#name (var_mmeth) on <var_mmeth:MMethod> */
var201 = var_mmeth->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmeth:MMethod> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "init";
var205 = 4;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
{
var208 = string__FlatString___61d_61d(var199, var203);
var207 = var208;
}
if (var207){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var211 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var209) on <var209:ModelBuilder> */
var214 = var209->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var209:ModelBuilder> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var217 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = hash_collection__HashMap___91d_93d(var212, var215);
}
var_nclassdef = var218;
{
{ /* Inline modelize_property#AClassdef#super_inits (var_nclassdef) on <var_nclassdef:AClassdef> */
var221 = var_nclassdef->attrs[COLOR_modelize_property__AClassdef___super_inits].val; /* _super_inits on <var_nclassdef:AClassdef> */
var219 = var221;
RET_LABEL220:(void)0;
}
}
var_super_inits = var219;
var222 = NULL;
if (var_super_inits == NULL) {
var223 = 0; /* is null */
} else {
var223 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_super_inits,var222) on <var_super_inits:nullable Collection[MMethod]> */
var_other26 = var222;
{
var227 = ((short int (*)(val*, val*))(var_super_inits->class->vft[COLOR_kernel__Object___61d_61d]))(var_super_inits, var_other26) /* == on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
var226 = var227;
}
var228 = !var226;
var224 = var228;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var223 = var224;
}
if (var223){
{
var229 = ((val* (*)(val*))(var_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_inits) /* iterator on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
}
for(;;) {
{
var230 = ((short int (*)(val*))(var229->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var229) /* is_ok on <var229:Iterator[nullable Object]>*/;
}
if(!var230) break;
{
var231 = ((val* (*)(val*))(var229->class->vft[COLOR_abstract_collection__Iterator__item]))(var229) /* item on <var229:Iterator[nullable Object]>*/;
}
var_su = var231;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var234 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var232, var_su); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
CONTINUE_label235: (void)0;
{
((void (*)(val*))(var229->class->vft[COLOR_abstract_collection__Iterator__next]))(var229) /* next on <var229:Iterator[nullable Object]>*/;
}
}
BREAK_label235: (void)0;
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 244);
show_backtrace(1);
}
goto CONTINUE_label236;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var239 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var237) on <var237:ModelBuilder> */
var242 = var237->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var237:ModelBuilder> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
var243 = hash_collection__HashMap___91d_93d(var240, var_mmethoddef);
}
var_npropdef = var243;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype245 = type_parser_nodes__AMethPropdef.color;
idtype246 = type_parser_nodes__AMethPropdef.id;
if(cltype245 >= var_npropdef->type->table_size) {
var244 = 0;
} else {
var244 = var_npropdef->type->type_table[cltype245] == idtype246;
}
if (var244){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var249 = var_npropdef->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <var_npropdef:APropdef(AMethPropdef)> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
var_auto_super_inits = var247;
var250 = NULL;
if (var_auto_super_inits == NULL) {
var251 = 0; /* is null */
} else {
var251 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,var250) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other26 = var250;
{
var255 = ((short int (*)(val*, val*))(var_auto_super_inits->class->vft[COLOR_kernel__Object___61d_61d]))(var_auto_super_inits, var_other26) /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
var254 = var255;
}
var256 = !var254;
var252 = var256;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
var251 = var252;
}
if (var251){
{
var257 = array__AbstractArrayRead__iterator(var_auto_super_inits);
}
for(;;) {
{
var258 = array__ArrayIterator__is_ok(var257);
}
if(!var258) break;
{
var259 = array__ArrayIterator__item(var257);
}
var_auto_super_init = var259;
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var_auto_super_init); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
CONTINUE_label260: (void)0;
{
array__ArrayIterator__next(var257); /* Direct call array#ArrayIterator#next on <var257:ArrayIterator[nullable Object]>*/
}
}
BREAK_label260: (void)0;
} else {
}
} else {
}
{
{ /* Inline model#MMethod#is_new (var_mmeth) on <var_mmeth:MMethod> */
var263 = var_mmeth->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var_mmeth:MMethod> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (var261){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var266 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var264); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var270 = var_mmethoddef->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var268 = var270;
RET_LABEL269:(void)0;
}
}
var_271 = var268;
if (var268){
var267 = var_271;
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var274 = var_mmethoddef->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_mmethoddef:MMethodDef> */
var272 = var274;
RET_LABEL273:(void)0;
}
}
var267 = var272;
}
if (var267){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var277 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var275 = var277;
RET_LABEL276:(void)0;
}
}
if (var275 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 264);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var275) on <var275:nullable MSignature> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var280 = var275->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var275:nullable MSignature> */
var278 = var280;
RET_LABEL279:(void)0;
}
}
var_ret = var278;
var284 = NULL;
if (var_ret == NULL) {
var285 = 0; /* is null */
} else {
var285 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var284) on <var_ret:nullable MType> */
var_other26 = var284;
{
var289 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other26) /* == on <var_ret:nullable MType(MType)>*/;
var288 = var289;
}
var290 = !var288;
var286 = var290;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
var285 = var286;
}
var_291 = var285;
if (var285){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype293 = type_model__MClassType.color;
idtype294 = type_model__MClassType.id;
if(cltype293 >= var_ret->type->table_size) {
var292 = 0;
} else {
var292 = var_ret->type->type_table[cltype293] == idtype294;
}
var283 = var292;
} else {
var283 = var_291;
}
var_295 = var283;
if (var283){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var298 = var_ret->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var296) on <var296:MClass> */
var301 = var296->attrs[COLOR_model__MClass___kind].val; /* _kind on <var296:MClass> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
var302 = model__Object__abstract_kind(self);
}
{
{ /* Inline kernel#Object#!= (var299,var302) on <var299:MClassKind> */
var_other26 = var302;
{
var307 = ((short int (*)(val*, val*))(var299->class->vft[COLOR_kernel__Object___61d_61d]))(var299, var_other26) /* == on <var299:MClassKind>*/;
var306 = var307;
}
var308 = !var306;
var304 = var308;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
var303 = var304;
}
var282 = var303;
} else {
var282 = var_295;
}
var_309 = var282;
if (var282){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var312 = var_ret->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var310) on <var310:MClass> */
var315 = var310->attrs[COLOR_model__MClass___kind].val; /* _kind on <var310:MClass> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
var316 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#!= (var313,var316) on <var313:MClassKind> */
var_other26 = var316;
{
var321 = ((short int (*)(val*, val*))(var313->class->vft[COLOR_kernel__Object___61d_61d]))(var313, var_other26) /* == on <var313:MClassKind>*/;
var320 = var321;
}
var322 = !var320;
var318 = var322;
goto RET_LABEL319;
RET_LABEL319:(void)0;
}
var317 = var318;
}
var281 = var317;
} else {
var281 = var_309;
}
if (var281){
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_ret); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
}
} else {
}
}
{
parser_nodes__Visitor__enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
CONTINUE_label236: (void)0;
}
BREAK_label236: (void)0;
var323 = NEW_list__List(&type_list__Listmodel__MClassType);
{
{ /* Inline list#List#init (var323) on <var323:List[MClassType]> */
RET_LABEL324:(void)0;
}
}
var_todo_types = var323;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var327 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var_todo_types, var325); /* Direct call abstract_collection#SimpleCollection#add_all on <var_todo_types:List[MClassType]>*/
}
for(;;) {
{
var328 = list__List__is_empty(var_todo_types);
}
var329 = !var328;
if (!var329) break;
{
var330 = list__List__shift(var_todo_types);
}
var_t = var330;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var333 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 60);
show_backtrace(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
var334 = hash_collection__HashSet__iterator(var331);
}
for(;;) {
{
var335 = ((short int (*)(val*))(var334->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var334) /* is_ok on <var334:Iterator[Object]>*/;
}
if(!var335) break;
{
var336 = ((val* (*)(val*))(var334->class->vft[COLOR_abstract_collection__Iterator__item]))(var334) /* item on <var334:Iterator[Object]>*/;
}
var_ot = var336;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var339 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
var340 = ((short int (*)(val*, val*, val*, val*))(var_ot->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot, var_t, var_t, var337) /* can_resolve_for on <var_ot:MClassType>*/;
}
var341 = !var340;
if (var341){
goto CONTINUE_label342;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var345 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
{
var346 = model__MClassType__anchor_to(var_ot, var343, var_t);
}
var_rt = var346;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var349 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
{
var350 = hash_collection__HashSet__has(var347, var_rt);
}
if (var350){
goto CONTINUE_label342;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var353 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var353 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var351 = var353;
RET_LABEL352:(void)0;
}
}
{
hash_collection__HashSet__add(var351, var_rt); /* Direct call hash_collection#HashSet#add on <var351:HashSet[MClassType]>*/
}
{
abstract_collection__Sequence__add(var_todo_types, var_rt); /* Direct call abstract_collection#Sequence#add on <var_todo_types:List[MClassType]>*/
}
{
rapid_type_analysis__RapidTypeAnalysis__check_depth(self, var_rt); /* Direct call rapid_type_analysis#RapidTypeAnalysis#check_depth on <self:RapidTypeAnalysis>*/
}
CONTINUE_label342: (void)0;
{
((void (*)(val*))(var334->class->vft[COLOR_abstract_collection__Iterator__next]))(var334) /* next on <var334:Iterator[Object]>*/;
}
}
BREAK_label342: (void)0;
CONTINUE_label354: (void)0;
}
BREAK_label354: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var357 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 70);
show_backtrace(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
var358 = hash_collection__HashSet__iterator(var355);
}
for(;;) {
{
var359 = ((short int (*)(val*))(var358->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var358) /* is_ok on <var358:Iterator[Object]>*/;
}
if(!var359) break;
{
var360 = ((val* (*)(val*))(var358->class->vft[COLOR_abstract_collection__Iterator__item]))(var358) /* item on <var358:Iterator[Object]>*/;
}
var_ot361 = var360;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var364 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var364 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
{
var365 = hash_collection__HashSet__iterator(var362);
}
for(;;) {
{
var366 = ((short int (*)(val*))(var365->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var365) /* is_ok on <var365:Iterator[Object]>*/;
}
if(!var366) break;
{
var367 = ((val* (*)(val*))(var365->class->vft[COLOR_abstract_collection__Iterator__item]))(var365) /* item on <var365:Iterator[Object]>*/;
}
var_t368 = var367;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var371 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var371 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var369 = var371;
RET_LABEL370:(void)0;
}
}
{
var372 = ((short int (*)(val*, val*, val*, val*))(var_ot361->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot361, var_t368, var_t368, var369) /* can_resolve_for on <var_ot361:MType>*/;
}
var373 = !var372;
if (var373){
goto CONTINUE_label374;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var377 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var377 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
{
var378 = ((val* (*)(val*, val*, val*))(var_ot361->class->vft[COLOR_model__MType__anchor_to]))(var_ot361, var375, var_t368) /* anchor_to on <var_ot361:MType>*/;
}
var_rt379 = var378;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var382 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
{
hash_collection__HashSet__add(var380, var_rt379); /* Direct call hash_collection#HashSet#add on <var380:HashSet[MType]>*/
}
CONTINUE_label374: (void)0;
{
((void (*)(val*))(var365->class->vft[COLOR_abstract_collection__Iterator__next]))(var365) /* next on <var365:Iterator[Object]>*/;
}
}
BREAK_label374: (void)0;
CONTINUE_label383: (void)0;
{
((void (*)(val*))(var358->class->vft[COLOR_abstract_collection__Iterator__next]))(var358) /* next on <var358:Iterator[Object]>*/;
}
}
BREAK_label383: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#run_analysis for (self: Object) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__run_analysis(val* self) {
rapid_type_analysis__RapidTypeAnalysis__run_analysis(self); /* Direct call rapid_type_analysis#RapidTypeAnalysis#run_analysis on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#check_depth for (self: RapidTypeAnalysis, MClassType) */
void rapid_type_analysis__RapidTypeAnalysis__check_depth(val* self, val* p0) {
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
var = ((long (*)(val*))(var_mtype->class->vft[COLOR_model__MType__length]))(var_mtype) /* length on <var_mtype:MClassType>*/;
}
var_d = var;
var1 = 255;
{
{ /* Inline kernel#Int#> (var_d,var1) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
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
var8 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var6) on <var6:ModelBuilder> */
var11 = var6->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var6:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " is too important, the problematic type is ";
var20 = 43;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ".";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var13;
var30 = BOX_kernel__Int(var_d); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var30;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
toolcontext__ToolContext__fatal_error(var9, var12, var31); /* Direct call toolcontext#ToolContext#fatal_error on <var9:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#check_depth for (self: Object, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__check_depth(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__check_depth(self, p0); /* Direct call rapid_type_analysis#RapidTypeAnalysis#check_depth on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_new for (self: RapidTypeAnalysis, MClassType, MClassType) */
void rapid_type_analysis__RapidTypeAnalysis__add_new(val* self, val* p0, val* p1) {
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
val* var30 /* : Iterator[Object] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_p /* var p: MMethod */;
val* var33 /* : HashSet[MMethodDef] */;
val* var35 /* : HashSet[MMethodDef] */;
val* var36 /* : Iterator[Object] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_p39 /* var p: MMethodDef */;
val* var41 /* : Array[MMethod] */;
val* var43 /* : Array[MMethod] */;
val* var44 /* : ArrayIterator[nullable Object] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_p47 /* var p: MMethod */;
val* var48 /* : HashSet[MMethod] */;
val* var50 /* : HashSet[MMethod] */;
val* var52 /* : Array[MMethod] */;
val* var54 /* : Array[MMethod] */;
val* var55 /* : MModule */;
val* var57 /* : MModule */;
val* var58 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var59 /* : MModule */;
val* var61 /* : MModule */;
val* var62 /* : Set[MClassDef] */;
val* var63 /* : Iterator[nullable Object] */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var66 /* : ModelBuilder */;
val* var68 /* : ModelBuilder */;
val* var69 /* : HashMap[MClassDef, AClassdef] */;
val* var71 /* : HashMap[MClassDef, AClassdef] */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var75 /* : ModelBuilder */;
val* var77 /* : ModelBuilder */;
val* var78 /* : HashMap[MClassDef, AClassdef] */;
val* var80 /* : HashMap[MClassDef, AClassdef] */;
val* var81 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var82 /* : ANodes[APropdef] */;
val* var84 /* : ANodes[APropdef] */;
val* var85 /* : Iterator[ANode] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var88 /* : Bool */;
int cltype;
int idtype;
short int var89 /* : Bool */;
val* var91 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var92 /* : null */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : nullable MPropDef */;
val* var101 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var102 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
var_recv = p0;
var_mtype = p1;
{
var = ((short int (*)(val*))(var_recv->class->vft[COLOR_model__MType__need_anchor]))(var_recv) /* need_anchor on <var_recv:MClassType>*/;
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 317);
show_backtrace(1);
}
{
var2 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MClassType>*/;
}
if (var2){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 60);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = hash_collection__HashSet__has(var3, var_mtype);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 60);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
hash_collection__HashSet__add(var7, var_mtype); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MClassType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = hash_collection__HashSet__has(var10, var_mtype);
}
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
hash_collection__HashSet__add(var14, var_mtype); /* Direct call hash_collection#HashSet#add on <var14:HashSet[MClassType]>*/
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var19 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mclass = var17;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var22 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = hash_collection__HashSet__has(var20, var_mclass);
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var26 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
hash_collection__HashSet__add(var24, var_mclass); /* Direct call hash_collection#HashSet#add on <var24:HashSet[MClass]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 164);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = hash_collection__HashSet__iterator(var27);
}
for(;;) {
{
var31 = ((short int (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var30) /* is_ok on <var30:Iterator[Object]>*/;
}
if(!var31) break;
{
var32 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__item]))(var30) /* item on <var30:Iterator[Object]>*/;
}
var_p = var32;
{
rapid_type_analysis__RapidTypeAnalysis__try_send(self, var_mtype, var_p); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__next]))(var30) /* next on <var30:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var35 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 110);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = hash_collection__HashSet__iterator(var33);
}
for(;;) {
{
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var36) /* is_ok on <var36:Iterator[Object]>*/;
}
if(!var37) break;
{
var38 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__item]))(var36) /* item on <var36:Iterator[Object]>*/;
}
var_p39 = var38;
{
rapid_type_analysis__RapidTypeAnalysis__try_super_send(self, var_mtype, var_p39); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
CONTINUE_label40: (void)0;
{
((void (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__next]))(var36) /* next on <var36:Iterator[Object]>*/;
}
}
BREAK_label40: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var43 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 167);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = array__AbstractArrayRead__iterator(var41);
}
for(;;) {
{
var45 = array__ArrayIterator__is_ok(var44);
}
if(!var45) break;
{
var46 = array__ArrayIterator__item(var44);
}
var_p47 = var46;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var50 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 164);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
hash_collection__HashSet__remove(var48, var_p47); /* Direct call hash_collection#HashSet#remove on <var48:HashSet[MMethod]>*/
}
CONTINUE_label51: (void)0;
{
array__ArrayIterator__next(var44); /* Direct call array#ArrayIterator#next on <var44:ArrayIterator[nullable Object]>*/
}
}
BREAK_label51: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var54 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 167);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
array__AbstractArray__clear(var52); /* Direct call array#AbstractArray#clear on <var52:Array[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var57 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = model__MClassType__anchor_to(var_mtype, var55, var_recv);
}
var_bound_mtype = var58;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var61 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = model__MClassType__collect_mclassdefs(var_bound_mtype, var59);
}
{
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_collection__Collection__iterator]))(var62) /* iterator on <var62:Set[MClassDef]>*/;
}
for(;;) {
{
var64 = ((short int (*)(val*))(var63->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var63) /* is_ok on <var63:Iterator[nullable Object]>*/;
}
if(!var64) break;
{
var65 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_collection__Iterator__item]))(var63) /* item on <var63:Iterator[nullable Object]>*/;
}
var_cd = var65;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var68 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var66) on <var66:ModelBuilder> */
var71 = var66->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var66:ModelBuilder> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = abstract_collection__MapRead__has_key(var69, var_cd);
}
var73 = !var72;
if (var73){
goto CONTINUE_label74;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var77 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var75) on <var75:ModelBuilder> */
var80 = var75->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var75:ModelBuilder> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = hash_collection__HashMap___91d_93d(var78, var_cd);
}
var_nclassdef = var81;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var84 = var_nclassdef->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = parser_nodes__ANodes__iterator(var82);
}
for(;;) {
{
var86 = ((short int (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var85) /* is_ok on <var85:Iterator[ANode]>*/;
}
if(!var86) break;
{
var87 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__item]))(var85) /* item on <var85:Iterator[ANode]>*/;
}
var_npropdef = var87;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var88 = 0;
} else {
var88 = var_npropdef->type->type_table[cltype] == idtype;
}
var89 = !var88;
if (var89){
goto CONTINUE_label90;
} else {
}
{
var91 = parser_nodes__AAttrPropdef__n_expr(var_npropdef);
}
var_nexpr = var91;
var92 = NULL;
if (var_nexpr == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,var92) on <var_nexpr:nullable AExpr> */
var_other = var92;
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var98 = var_nexpr == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
goto CONTINUE_label90;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var101 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 346);
show_backtrace(1);
}
var_mpropdef = var99;
var102 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
{
rapid_type_analysis__RapidTypeVisitor__init(var102, self, var_bound_mtype, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeVisitor#init on <var102:RapidTypeVisitor>*/
}
var_v = var102;
{
parser_nodes__Visitor__enter_visit(var_v, var_nexpr); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
CONTINUE_label90: (void)0;
{
((void (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__next]))(var85) /* next on <var85:Iterator[ANode]>*/;
}
}
BREAK_label90: (void)0;
CONTINUE_label74: (void)0;
{
((void (*)(val*))(var63->class->vft[COLOR_abstract_collection__Iterator__next]))(var63) /* next on <var63:Iterator[nullable Object]>*/;
}
}
BREAK_label74: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_new for (self: Object, MClassType, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_new(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_new(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_cast for (self: RapidTypeAnalysis, MType) */
void rapid_type_analysis__RapidTypeAnalysis__add_cast(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : HashSet[MType] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var6 /* : HashSet[MType] */;
var_mtype = p0;
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 70);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
hash_collection__HashSet__add(var1, var_mtype); /* Direct call hash_collection#HashSet#add on <var1:HashSet[MType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
hash_collection__HashSet__add(var4, var_mtype); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MType]>*/
}
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_cast for (self: Object, MType) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_cast(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__add_cast(self, p0); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_send for (self: RapidTypeAnalysis, MClassType, MMethod) */
void rapid_type_analysis__RapidTypeAnalysis__try_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var3 /* : MClassDef */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = model__MClass__intro(var);
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var6 = var3->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_recv = var4;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = model__MType__has_mproperty(var_recv, var7, var_mproperty);
}
var11 = !var10;
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var14 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = model__MProperty__lookup_first_definition(var_mproperty, var12, var_recv);
}
var_d = var15;
{
rapid_type_analysis__RapidTypeAnalysis__add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_send for (self: Object, MClassType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__try_send(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_call for (self: RapidTypeAnalysis, MMethodDef) */
void rapid_type_analysis__RapidTypeAnalysis__add_call(val* self, val* p0) {
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
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var21 /* : Bool */;
val* var22 /* : Array[MPropDef] */;
val* var24 /* : Array[MPropDef] */;
val* var25 /* : ArrayIterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : HashSet[MMethodDef] */;
val* var33 /* : HashSet[MMethodDef] */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : Array[MMethod] */;
val* var38 /* : Array[MMethod] */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
var_mpropdef = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = hash_collection__HashSet__has(var, var_mpropdef);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
hash_collection__HashSet__add(var4, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 174);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
abstract_collection__Sequence__add(var7, var_mpropdef); /* Direct call abstract_collection#Sequence#add on <var7:List[MMethodDef]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mproperty = var10;
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var15 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = array__AbstractArrayRead__length(var13);
}
var17 = 1;
{
{ /* Inline kernel#Int#<= (var16,var17) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var21 = var16 <= var17;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var24 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = array__AbstractArrayRead__iterator(var22);
}
for(;;) {
{
var26 = array__ArrayIterator__is_ok(var25);
}
if(!var26) break;
{
var27 = array__ArrayIterator__item(var25);
}
var_d = var27;
{
{ /* Inline model#MMethodDef#is_abstract (var_d) on <var_d:MMethodDef> */
var30 = var_d->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <var_d:MMethodDef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28){
goto CONTINUE_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var33 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = hash_collection__HashSet__has(var31, var_d);
}
var35 = !var34;
if (var35){
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var25); /* Direct call array#ArrayIterator#next on <var25:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var38 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 167);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var41 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
array__Array__add(var36, var39); /* Direct call array#Array#add on <var36:Array[MMethod]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_call for (self: Object, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_call(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__add_call(self, p0); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_send for (self: RapidTypeAnalysis, MType, MMethod) */
void rapid_type_analysis__RapidTypeAnalysis__add_send(val* self, val* p0, val* p1) {
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
long var14 /* : Int */;
short int var15 /* : Bool */;
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
val* var29 /* : Iterator[Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var32 /* : MClassDef */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 170);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = hash_collection__HashSet__has(var, var_mproperty);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 77);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
hash_collection__HashSet__add(var4, var_mproperty); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 170);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
hash_collection__HashSet__add(var7, var_mproperty); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MMethod]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var12 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = array__AbstractArrayRead__length(var10);
}
var14 = 1;
{
{ /* Inline kernel#Int#== (var13,var14) on <var13:Int> */
var18 = var13 == var14;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var21 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = abstract_collection__SequenceRead__first(var19);
}
var_d = var22;
{
rapid_type_analysis__RapidTypeAnalysis__add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var25 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 164);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
hash_collection__HashSet__add(var23, var_mproperty); /* Direct call hash_collection#HashSet#add on <var23:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var28 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 64);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = hash_collection__HashSet__iterator(var26);
}
for(;;) {
{
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[Object]>*/;
}
if(!var30) break;
{
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[Object]>*/;
}
var_c = var31;
{
var32 = model__MClass__intro(var_c);
}
{
{ /* Inline model#MClassDef#bound_mtype (var32) on <var32:MClassDef> */
var35 = var32->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var32:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__try_send(self, var33, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_send for (self: Object, MType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_send(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_super_send for (self: RapidTypeAnalysis, MClassType, MMethodDef) */
void rapid_type_analysis__RapidTypeAnalysis__try_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var3 /* : MClassDef */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Set[MClassDef] */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var19 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mpropdef = p1;
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = model__MClass__intro(var);
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var6 = var3->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_recv = var4;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = model__MClassType__collect_mclassdefs(var_recv, var7);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var13 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__Collection__has]))(var10, var11) /* has on <var10:Set[MClassDef]>*/;
}
var15 = !var14;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var18 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = model__MPropDef__lookup_next_definition(var_mpropdef, var16, var_recv);
}
var_d = var19;
{
rapid_type_analysis__RapidTypeAnalysis__add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_super_send for (self: Object, MClassType, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_super_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__try_super_send(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: RapidTypeAnalysis, MType, MMethodDef) */
void rapid_type_analysis__RapidTypeAnalysis__add_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : HashSet[MMethodDef] */;
val* var2 /* : HashSet[MMethodDef] */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethodDef] */;
val* var7 /* : HashSet[MClassType] */;
val* var9 /* : HashSet[MClassType] */;
val* var10 /* : Iterator[Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_t /* var t: MClassType */;
var_recv = p0;
var_mpropdef = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 110);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = hash_collection__HashSet__has(var, var_mpropdef);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 110);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
hash_collection__HashSet__add(var4, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = hash_collection__HashSet__iterator(var7);
}
for(;;) {
{
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[Object]>*/;
}
if(!var11) break;
{
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[Object]>*/;
}
var_t = var12;
{
rapid_type_analysis__RapidTypeAnalysis__try_super_send(self, var_t, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: Object, MType, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_super_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_super_send(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: RapidTypeAnalysis, ModelBuilder, MModule) */
void rapid_type_analysis__RapidTypeAnalysis__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:RapidTypeAnalysis> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p1; /* _mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: Object, ModelBuilder, MModule) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__init(val* self, val* p0, val* p1) {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#init (self,p0,p1) on <self:Object(RapidTypeAnalysis)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:Object(RapidTypeAnalysis)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p1; /* _mainmodule on <self:Object(RapidTypeAnalysis)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis for (self: RapidTypeVisitor): RapidTypeAnalysis */
val* rapid_type_analysis__RapidTypeVisitor__analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis for (self: Object): RapidTypeAnalysis */
val* VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
val* var3 /* : RapidTypeAnalysis */;
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:Object(RapidTypeVisitor)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:Object(RapidTypeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis= for (self: RapidTypeVisitor, RapidTypeAnalysis) */
void rapid_type_analysis__RapidTypeVisitor__analysis_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val = p0; /* _analysis on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis= for (self: Object, RapidTypeAnalysis) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis_61d(val* self, val* p0) {
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis= (self,p0) on <self:Object(RapidTypeVisitor)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val = p0; /* _analysis on <self:Object(RapidTypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver for (self: RapidTypeVisitor): MClassType */
val* rapid_type_analysis__RapidTypeVisitor__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver for (self: Object): MClassType */
val* VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:Object(RapidTypeVisitor)> */
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:Object(RapidTypeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver= for (self: RapidTypeVisitor, MClassType) */
void rapid_type_analysis__RapidTypeVisitor__receiver_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val = p0; /* _receiver on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver= for (self: Object, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver_61d(val* self, val* p0) {
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver= (self,p0) on <self:Object(RapidTypeVisitor)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val = p0; /* _receiver on <self:Object(RapidTypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef= for (self: RapidTypeVisitor, MPropDef) */
void rapid_type_analysis__RapidTypeVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef_61d(val* self, val* p0) {
{ /* Inline rapid_type_analysis#RapidTypeVisitor#mpropdef= (self,p0) on <self:Object(RapidTypeVisitor)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:Object(RapidTypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#init for (self: RapidTypeVisitor, RapidTypeAnalysis, MClassType, MPropDef) */
void rapid_type_analysis__RapidTypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
val* var_analysis /* var analysis: RapidTypeAnalysis */;
val* var_receiver /* var receiver: MClassType */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline parser_nodes#Visitor#init (self) on <self:RapidTypeVisitor> */
RET_LABEL1:(void)0;
}
}
var_analysis = p0;
var_receiver = p1;
var_mpropdef = p2;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis= (self,var_analysis) on <self:RapidTypeVisitor> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val = var_analysis; /* _analysis on <self:RapidTypeVisitor> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver= (self,var_receiver) on <self:RapidTypeVisitor> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val = var_receiver; /* _receiver on <self:RapidTypeVisitor> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#mpropdef= (self,var_mpropdef) on <self:RapidTypeVisitor> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:RapidTypeVisitor> */
RET_LABEL4:(void)0;
}
}
{
var = ((short int (*)(val*))(var_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_receiver) /* need_anchor on <var_receiver:MClassType>*/;
}
var5 = !var;
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 439);
show_backtrace(1);
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#init for (self: Object, RapidTypeAnalysis, MClassType, MPropDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
rapid_type_analysis__RapidTypeVisitor__init(self, p0, p1, p2); /* Direct call rapid_type_analysis#RapidTypeVisitor#init on <self:Object(RapidTypeVisitor)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: RapidTypeVisitor, ANode) */
void rapid_type_analysis__RapidTypeVisitor__visit(val* self, val* p0) {
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
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
var_n = p0;
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self) /* accept_rapid_type_visitor on <var_n:ANode>*/;
}
/* <var_n:ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline typing#AExpr#implicit_cast_to (var_n) on <var_n:ANode(AExpr)> */
var3 = var_n->attrs[COLOR_typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_n:ANode(AExpr)> */
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
var9 = ((short int (*)(val*, val*))(var_implicit_cast_to->class->vft[COLOR_kernel__Object___61d_61d]))(var_implicit_cast_to, var_other) /* == on <var_implicit_cast_to:nullable MType(MType)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
rapid_type_analysis__RapidTypeVisitor__add_cast_type(self, var_implicit_cast_to); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <self:RapidTypeVisitor>*/
}
} else {
}
} else {
}
/* <var_n:ANode> isa AAnnotations */
cltype12 = type_parser_nodes__AAnnotations.color;
idtype13 = type_parser_nodes__AAnnotations.id;
if(cltype12 >= var_n->type->table_size) {
var11 = 0;
} else {
var11 = var_n->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: Object, ANode) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__visit(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__visit(self, p0); /* Direct call rapid_type_analysis#RapidTypeVisitor#visit on <self:Object(RapidTypeVisitor)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#cleanup_type for (self: RapidTypeVisitor, MType): nullable MClassType */
val* rapid_type_analysis__RapidTypeVisitor__cleanup_type(val* self, val* p0) {
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
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var1) on <var1:RapidTypeAnalysis> */
var6 = var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var1:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var4, var7) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var10;
/* <var_mtype:MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
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
var13 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var13;
/* <var_mtype:MType> isa MClassType */
cltype15 = type_model__MClassType.color;
idtype16 = type_model__MClassType.id;
if(cltype15 >= var_mtype->type->table_size) {
var14 = 0;
} else {
var14 = var_mtype->type->type_table[cltype15] == idtype16;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 461);
show_backtrace(1);
}
{
var17 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType(MClassType)>*/;
}
var18 = !var17;
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 462);
show_backtrace(1);
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#cleanup_type for (self: Object, MType): nullable MClassType */
val* VIRTUAL_rapid_type_analysis__RapidTypeVisitor__cleanup_type(val* self, val* p0) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = rapid_type_analysis__RapidTypeVisitor__cleanup_type(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_class for (self: RapidTypeVisitor, String): MClass */
val* rapid_type_analysis__RapidTypeVisitor__get_class(val* self, val* p0) {
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
var3 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var1) on <var1:RapidTypeAnalysis> */
var6 = var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var1:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = model__MModule__get_primitive_class(var4, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_class for (self: Object, String): MClass */
val* VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_class(val* self, val* p0) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = rapid_type_analysis__RapidTypeVisitor__get_class(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_method for (self: RapidTypeVisitor, MType, String): MMethod */
val* rapid_type_analysis__RapidTypeVisitor__get_method(val* self, val* p0, val* p1) {
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
short int var8 /* : Bool */;
val* var9 /* : RapidTypeAnalysis */;
val* var11 /* : RapidTypeAnalysis */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
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
var1 = rapid_type_analysis__RapidTypeVisitor__cleanup_type(self, var_recv);
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
var7 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MClassType(MClassType)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 474);
show_backtrace(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var11 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (var9) on <var9:RapidTypeAnalysis> */
var14 = var9->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <var9:RapidTypeAnalysis> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 48);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = parser_nodes__Visitor__current_node(self);
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 475);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var18 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var21 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var19) on <var19:RapidTypeAnalysis> */
var24 = var19->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var19:RapidTypeAnalysis> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = modelbuilder__ModelBuilder__force_get_primitive_method(var12, var15, var_name, var16, var22);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_method for (self: Object, MType, String): MMethod */
val* VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_method(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = rapid_type_analysis__RapidTypeVisitor__get_method(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_type for (self: RapidTypeVisitor, MClassType) */
void rapid_type_analysis__RapidTypeVisitor__add_type(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var5 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_new(var, var3, var_mtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_type for (self: Object, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_type(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__add_type(self, p0); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <self:Object(RapidTypeVisitor)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send for (self: RapidTypeVisitor, MType, MMethod) */
void rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(val* self, val* p0, val* p1) {
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
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 77);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
hash_collection__HashSet__add(var3, var_mproperty); /* Direct call hash_collection#HashSet#add on <var3:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var8 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var9 = 0;
} else {
var9 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 483);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeAnalysis__try_send(var6, var_mtype, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <var6:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send for (self: Object, MType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <self:Object(RapidTypeVisitor)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_cast_type for (self: RapidTypeVisitor, MType) */
void rapid_type_analysis__RapidTypeVisitor__add_cast_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_cast(var, var_mtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_cast_type for (self: Object, MType) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_cast_type(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__add_cast_type(self, p0); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <self:Object(RapidTypeVisitor)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_callsite for (self: RapidTypeVisitor, nullable CallSite) */
void rapid_type_analysis__RapidTypeVisitor__add_callsite(val* self, val* p0) {
val* var_callsite /* var callsite: nullable CallSite */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : RapidTypeAnalysis */;
val* var9 /* : RapidTypeAnalysis */;
val* var10 /* : MType */;
val* var12 /* : MType */;
val* var13 /* : MMethod */;
val* var15 /* : MMethod */;
val* var16 /* : RapidTypeAnalysis */;
val* var18 /* : RapidTypeAnalysis */;
val* var19 /* : HashSet[CallSite] */;
val* var21 /* : HashSet[CallSite] */;
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
var5 = ((short int (*)(val*, val*))(var_callsite->class->vft[COLOR_kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var12 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 408);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var15 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_send(var7, var10, var13); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var7:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var18 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_callsites (var16) on <var16:RapidTypeAnalysis> */
var21 = var16->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <var16:RapidTypeAnalysis> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 80);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
hash_collection__HashSet__add(var19, var_callsite); /* Direct call hash_collection#HashSet#add on <var19:HashSet[CallSite]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_callsite for (self: Object, nullable CallSite) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_callsite(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__add_callsite(self, p0); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <self:Object(RapidTypeVisitor)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ANode#accept_rapid_type_visitor for (self: ANode, RapidTypeVisitor) */
void rapid_type_analysis__ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method rapid_type_analysis#ANode#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
{ /* Inline rapid_type_analysis#ANode#accept_rapid_type_visitor (self,p0) on <self:Object(ANode)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#AIntExpr#accept_rapid_type_visitor for (self: AIntExpr, RapidTypeVisitor) */
void rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIntExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 507);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AIntExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AIntExpr#accept_rapid_type_visitor on <self:Object(AIntExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor for (self: AFloatExpr, RapidTypeVisitor) */
void rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AFloatExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 514);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ACharExpr#accept_rapid_type_visitor for (self: ACharExpr, RapidTypeVisitor) */
void rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ACharExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 521);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ACharExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ACharExpr#accept_rapid_type_visitor on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor for (self: AArrayExpr, RapidTypeVisitor) */
void rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
val* var19 /* : Array[MType] */;
val* var20 /* : nullable Object */;
val* var21 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var22 /* : nullable MClassType */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 528);
show_backtrace(1);
}
var_mtype = var;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var6 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var4) on <var4:RapidTypeAnalysis> */
var9 = var4->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var4:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 51);
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
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
var14 = model__MModule__get_primitive_class(var7, var10);
}
var15 = NEW_array__Array(&type_array__Arraymodel__MType);
var16 = 1;
{
array__Array__with_capacity(var15, var16); /* Direct call array#Array#with_capacity on <var15:Array[MType]>*/
}
var_ = var15;
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MClassType> */
var19 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MClassType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = abstract_collection__SequenceRead__first(var17);
}
{
array__AbstractArray__push(var_, var20); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var21 = model__MClass__get_mtype(var14, var_);
}
var_native = var21;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
var22 = rapid_type_analysis__RapidTypeVisitor__cleanup_type(var_v, var_mtype);
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 532);
show_backtrace(1);
}
var_mtype = var22;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "with_native";
var26 = 11;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = rapid_type_analysis__RapidTypeVisitor__get_method(var_v, var_mtype, var24);
}
var_prop = var28;
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var_mtype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: AStringFormExpr, RapidTypeVisitor) */
void rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = rapid_type_analysis__RapidTypeVisitor__get_class(var_v, var);
}
{
{ /* Inline model#MClass#mclass_type (var4) on <var4:MClass> */
var7 = var4->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var4:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_native = var5;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = "to_s_with_length";
var11 = 16;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
{
var13 = rapid_type_analysis__RapidTypeVisitor__get_method(var_v, var_native, var9);
}
var_prop = var13;
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var_native, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor on <self:Object(AStringFormExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: ASuperstringExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = rapid_type_analysis__RapidTypeVisitor__get_class(var_v, var);
}
var5 = NEW_array__Array(&type_array__Arraymodel__MClassType);
var6 = 1;
{
array__Array__with_capacity(var5, var6); /* Direct call array#Array#with_capacity on <var5:Array[MClassType]>*/
}
var_ = var5;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "Object";
var10 = 6;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
{
var12 = rapid_type_analysis__RapidTypeVisitor__get_class(var_v, var8);
}
{
{ /* Inline model#MClass#mclass_type (var12) on <var12:MClass> */
var15 = var12->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var12:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
array__AbstractArray__push(var_, var13); /* Direct call array#AbstractArray#push on <var_:Array[MClassType]>*/
}
{
var16 = model__MClass__get_mtype(var4, var_);
}
var_arraytype = var16;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_arraytype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "NativeArray";
var20 = 11;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = rapid_type_analysis__RapidTypeVisitor__get_class(var_v, var18);
}
var23 = NEW_array__Array(&type_array__Arraymodel__MClassType);
var24 = 1;
{
array__Array__with_capacity(var23, var24); /* Direct call array#Array#with_capacity on <var23:Array[MClassType]>*/
}
var_25 = var23;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Object";
var29 = 6;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
var31 = rapid_type_analysis__RapidTypeVisitor__get_class(var_v, var27);
}
{
{ /* Inline model#MClass#mclass_type (var31) on <var31:MClass> */
var34 = var31->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var31:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
array__AbstractArray__push(var_25, var32); /* Direct call array#AbstractArray#push on <var_25:Array[MClassType]>*/
}
{
var35 = model__MClass__get_mtype(var22, var_25);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var35); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "join";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
var41 = rapid_type_analysis__RapidTypeVisitor__get_method(var_v, var_arraytype, var37);
}
var_prop = var41;
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var_arraytype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "with_native";
var45 = 11;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = rapid_type_analysis__RapidTypeVisitor__get_method(var_v, var_arraytype, var43);
}
var_prop2 = var47;
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var_arraytype, var_prop2); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor on <self:Object(ASuperstringExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor for (self: ACrangeExpr, RapidTypeVisitor) */
void rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 564);
show_backtrace(1);
}
var_mtype = var;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var6 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var4); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor for (self: AOrangeExpr, RapidTypeVisitor) */
void rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 573);
show_backtrace(1);
}
var_mtype = var;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var6 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var4); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor for (self: ATrueExpr, RapidTypeVisitor) */
void rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ATrueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 582);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor for (self: AFalseExpr, RapidTypeVisitor) */
void rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AFalseExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 589);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor for (self: AIsaExpr, RapidTypeVisitor) */
void rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 596);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_cast_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor for (self: AAsCastExpr, RapidTypeVisitor) */
void rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 603);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_cast_type(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ASendExpr#accept_rapid_type_visitor for (self: ASendExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ASendExpr#accept_rapid_type_visitor on <self:Object(ASendExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor for (self: ASendReassignFormExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var5 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var8 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var6); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor on <self:Object(ASendReassignFormExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor for (self: AVarReassignExpr, RapidTypeVisitor) */
void rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor for (self: AAttrReassignExpr, RapidTypeVisitor) */
void rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor for (self: ASuperExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
short int var9 /* : Bool */;
val* var10 /* : RapidTypeAnalysis */;
val* var12 /* : RapidTypeAnalysis */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : nullable MMethodDef */;
val* var18 /* : nullable MMethodDef */;
var_v = p0;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var2 = self->attrs[COLOR_typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
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
var8 = ((short int (*)(val*, val*))(var_callsite->class->vft[COLOR_kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var_callsite); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var12 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 430);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var15 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 431);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var18 = self->attrs[COLOR_typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 647);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeAnalysis__add_super_send(var10, var13, var16); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <var10:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#AForExpr#accept_rapid_type_visitor for (self: AForExpr, RapidTypeVisitor) */
void rapid_type_analysis__AForExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[Variable] */;
val* var8 /* : nullable Array[Variable] */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable CallSite */;
val* var17 /* : nullable CallSite */;
val* var18 /* : nullable Array[Variable] */;
val* var20 /* : nullable Array[Variable] */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var30 /* : nullable CallSite */;
val* var32 /* : nullable CallSite */;
val* var33 /* : nullable CallSite */;
val* var35 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var5 = self->attrs[COLOR_typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var8 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 656);
show_backtrace(1);
} else {
var9 = array__AbstractArrayRead__length(var6);
}
var10 = 1;
{
{ /* Inline kernel#Int#== (var9,var10) on <var9:Int> */
var14 = var9 == var10;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var17 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var15); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var20 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 658);
show_backtrace(1);
} else {
var21 = array__AbstractArrayRead__length(var18);
}
var22 = 2;
{
{ /* Inline kernel#Int#== (var21,var22) on <var21:Int> */
var26 = var21 == var22;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var29 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var27); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var32 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var30); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 662);
show_backtrace(1);
}
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var35 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var33); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AForExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AForExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AForExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#AForExpr#accept_rapid_type_visitor on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: ANewExpr, RapidTypeVisitor) */
void rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0) {
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
{ /* Inline typing#AExpr#mtype (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 671);
show_backtrace(1);
}
var_mtype = var;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var6 = self->attrs[COLOR_typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var4); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ANewExpr#accept_rapid_type_visitor on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
