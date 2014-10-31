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
((void (*)(val*, val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d]))(var1, self) /* modelbuilder= on <var1:RapidTypeAnalysis>*/;
}
{
((void (*)(val*, val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d]))(var1, var_mainmodule) /* mainmodule= on <var1:RapidTypeAnalysis>*/;
}
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:RapidTypeAnalysis>*/;
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder= for (self: RapidTypeAnalysis, ModelBuilder) */
void rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d(val* self, val* p0) {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder= (self,p0) on <self:Object(RapidTypeAnalysis)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:Object(RapidTypeAnalysis)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule for (self: RapidTypeAnalysis): MModule */
val* rapid_type_analysis__RapidTypeAnalysis__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule= for (self: RapidTypeAnalysis, MModule) */
void rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p0; /* _mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule= for (self: Object, MModule) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d(val* self, val* p0) {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule= (self,p0) on <self:Object(RapidTypeAnalysis)> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p0; /* _mainmodule on <self:Object(RapidTypeAnalysis)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 58);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 58);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 68);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 68);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 75);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 75);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 78);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 78);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 81);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 81);
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
val* var25 /* : MClassDef */;
val* var26 /* : MClassType */;
val* var28 /* : MClassType */;
val* var29 /* : MMethod */;
val* var31 /* : MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var32 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var34 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var35 /* : nullable Object */;
val* var_res /* var res: nullable Set[MMethodDef] */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : ArraySet[MMethodDef] */;
val* var44 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var46 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var47 /* : HashSet[MClass] */;
val* var49 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var50 /* : Iterator[Object] */;
val* var_51 /* var : Iterator[MClass] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var54 /* : MClassDef */;
val* var56 /* : MClassDef */;
val* var57 /* : MClassType */;
val* var59 /* : MClassType */;
val* var_tc /* var tc: MClassType */;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MModule */;
val* var68 /* : MModule */;
val* var69 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_callsite = p0;
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 90);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var22 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var20) on <var20:MClass> */
var25 = var20->attrs[COLOR_model__MClass___intro].val; /* _intro on <var20:MClass> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var23) on <var23:MClassDef> */
var28 = var23->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var23:MClassDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_mtype = var26;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var31 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_mproperty = var29;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var34 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 81);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = more_collections__HashMap2___91d_93d(var32, var_mtype, var_mproperty);
}
var_res = var35;
var36 = NULL;
if (var_res == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var36) on <var_res:nullable Set[MMethodDef]> */
var_other = var36;
{
var41 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable Set[MMethodDef](Set[MMethodDef])>*/;
var40 = var41;
}
var42 = !var40;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
var = var_res;
goto RET_LABEL;
} else {
}
var43 = NEW_array__ArraySet(&type_array__ArraySetmodel__MMethodDef);
{
((void (*)(val*))(var43->class->vft[COLOR_kernel__Object__init]))(var43) /* init on <var43:ArraySet[MMethodDef]>*/;
}
var_res = var43;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var46 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 81);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var44, var_mtype, var_mproperty, var_res); /* Direct call more_collections#HashMap2#[]= on <var44:HashMap2[MType, MProperty, Set[MMethodDef]]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var49 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_ = var47;
{
var50 = hash_collection__HashSet__iterator(var_);
}
var_51 = var50;
for(;;) {
{
var52 = ((short int (*)(val*))(var_51->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_51) /* is_ok on <var_51:Iterator[MClass]>*/;
}
if (var52){
{
var53 = ((val* (*)(val*))(var_51->class->vft[COLOR_abstract_collection__Iterator__item]))(var_51) /* item on <var_51:Iterator[MClass]>*/;
}
var_c = var53;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var56 = var_c->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var54) on <var54:MClassDef> */
var59 = var54->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var54:MClassDef> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_tc = var57;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NULL;
{
var64 = model__MType__is_subtype(var_tc, var60, var63, var_mtype);
}
var65 = !var64;
if (var65){
goto BREAK_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var68 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = model__MProperty__lookup_first_definition(var_mproperty, var66, var_tc);
}
var_d = var69;
{
array__ArraySet__add(var_res, var_d); /* Direct call array#ArraySet#add on <var_res:nullable Set[MMethodDef](ArraySet[MMethodDef])>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_51->class->vft[COLOR_abstract_collection__Iterator__next]))(var_51) /* next on <var_51:Iterator[MClass]>*/;
}
} else {
goto BREAK_label70;
}
}
BREAK_label70: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_51) on <var_51:Iterator[MClass]> */
RET_LABEL71:(void)0;
}
}
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 108);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 108);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 165);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 165);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 168);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 168);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 172);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 172);
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
val* var_ /* var : Array[MClass] */;
val* var14 /* : ArrayIterator[nullable Object] */;
val* var_15 /* var : ArrayIterator[MClass] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
val* var21 /* : MClassType */;
val* var23 /* : MClassType */;
var_classname = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
var_ = var_classes;
{
var14 = array__AbstractArrayRead__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = array__ArrayIterator__is_ok(var_15);
}
if (var16){
{
var17 = array__ArrayIterator__item(var_15);
}
var_c = var17;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var20 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var23 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_new(self, var18, var21); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
array__ArrayIterator__next(var_15); /* Direct call array#ArrayIterator#next on <var_15:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_15) on <var_15:ArrayIterator[MClass]> */
RET_LABEL24:(void)0;
}
}
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
val* var30 /* : nullable MMethod */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
val* var42 /* : nullable MMethod */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
val* var55 /* : null */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MModule */;
val* var64 /* : MModule */;
val* var65 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var73 /* : MModule */;
val* var75 /* : MModule */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : MClass */;
val* var83 /* : MClass */;
val* var84 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
val* var85 /* : null */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : List[MMethodDef] */;
val* var119 /* : List[MMethodDef] */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : List[MMethodDef] */;
val* var124 /* : List[MMethodDef] */;
val* var125 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var126 /* : MProperty */;
val* var128 /* : MProperty */;
val* var_mmeth /* var mmeth: MMethod */;
val* var129 /* : RapidTypeVisitor */;
val* var130 /* : MClassDef */;
val* var132 /* : MClassDef */;
val* var133 /* : MClassType */;
val* var135 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
val* var136 /* : nullable MSignature */;
val* var138 /* : nullable MSignature */;
long var139 /* : Int */;
long var141 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var142 /* : Int */;
long var143 /* : Int */;
long var145 /* : Int */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var149 /* : Bool */;
val* var150 /* : ModelBuilder */;
val* var152 /* : ModelBuilder */;
val* var153 /* : HashMap[MPropDef, APropdef] */;
val* var155 /* : HashMap[MPropDef, APropdef] */;
val* var156 /* : nullable Object */;
val* var_node /* var node: APropdef */;
val* var157 /* : nullable MSignature */;
val* var159 /* : nullable MSignature */;
val* var160 /* : Array[MParameter] */;
val* var162 /* : Array[MParameter] */;
val* var163 /* : nullable Object */;
val* var164 /* : MType */;
val* var166 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var167 /* : MModule */;
val* var169 /* : MModule */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : MClass */;
val* var176 /* : Array[MType] */;
long var177 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var178 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var179 /* : MModule */;
val* var181 /* : MModule */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
val* var187 /* : MClass */;
val* var188 /* : Array[MType] */;
long var189 /* : Int */;
val* var_190 /* var : Array[MType] */;
val* var191 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var192 /* : ModelBuilder */;
val* var194 /* : ModelBuilder */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
val* var200 /* : MClass */;
val* var202 /* : MClass */;
val* var203 /* : MModule */;
val* var205 /* : MModule */;
val* var206 /* : MMethod */;
val* var207 /* : nullable MSignature */;
val* var209 /* : nullable MSignature */;
val* var_sig /* var sig: MSignature */;
val* var210 /* : MPropDef */;
val* var212 /* : MPropDef */;
val* var213 /* : nullable MSignature */;
val* var215 /* : nullable MSignature */;
val* var_osig /* var osig: MSignature */;
long var216 /* : Int */;
long var_i /* var i: Int */;
long var217 /* : Int */;
long var_218 /* var : Int */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
int cltype222;
int idtype223;
const char* var_class_name224;
short int var225 /* : Bool */;
val* var226 /* : Array[MParameter] */;
val* var228 /* : Array[MParameter] */;
val* var229 /* : nullable Object */;
val* var230 /* : MType */;
val* var232 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
val* var235 /* : Array[MParameter] */;
val* var237 /* : Array[MParameter] */;
val* var238 /* : nullable Object */;
val* var239 /* : MType */;
val* var241 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
long var242 /* : Int */;
long var243 /* : Int */;
val* var245 /* : ModelBuilder */;
val* var247 /* : ModelBuilder */;
val* var248 /* : HashMap[MPropDef, APropdef] */;
val* var250 /* : HashMap[MPropDef, APropdef] */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
val* var256 /* : ModelBuilder */;
val* var258 /* : ModelBuilder */;
val* var259 /* : HashMap[MClassDef, AClassdef] */;
val* var261 /* : HashMap[MClassDef, AClassdef] */;
val* var262 /* : MClassDef */;
val* var264 /* : MClassDef */;
val* var265 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var266 /* : nullable MMethodDef */;
val* var268 /* : nullable MMethodDef */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
val* var276 /* : MProperty */;
val* var278 /* : MProperty */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
short int var_282 /* var : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
val* var285 /* : MClassType */;
val* var287 /* : MClassType */;
val* var288 /* : nullable Object */;
val* var290 /* : nullable Object */;
val* var291 /* : null */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
val* var294 /* : nullable MSignature */;
val* var296 /* : nullable MSignature */;
val* var297 /* : nullable MType */;
val* var299 /* : nullable MType */;
short int var300 /* : Bool */;
int cltype301;
int idtype302;
const char* var_class_name303;
val* var305 /* : ModelBuilder */;
val* var307 /* : ModelBuilder */;
val* var308 /* : HashMap[MPropDef, APropdef] */;
val* var310 /* : HashMap[MPropDef, APropdef] */;
val* var311 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var312 /* : Bool */;
int cltype313;
int idtype314;
val* var315 /* : nullable Array[CallSite] */;
val* var317 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var318 /* : null */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
short int var322 /* : Bool */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
val* var_325 /* var : Array[CallSite] */;
val* var326 /* : ArrayIterator[nullable Object] */;
val* var_327 /* var : ArrayIterator[CallSite] */;
short int var328 /* : Bool */;
val* var329 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
val* var335 /* : MClassType */;
val* var337 /* : MClassType */;
short int var338 /* : Bool */;
short int var339 /* : Bool */;
short int var341 /* : Bool */;
short int var_342 /* var : Bool */;
short int var343 /* : Bool */;
short int var345 /* : Bool */;
val* var346 /* : nullable MSignature */;
val* var348 /* : nullable MSignature */;
val* var349 /* : nullable MType */;
val* var351 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var352 /* : Bool */;
short int var353 /* : Bool */;
short int var354 /* : Bool */;
val* var355 /* : null */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
short int var361 /* : Bool */;
short int var_362 /* var : Bool */;
short int var363 /* : Bool */;
int cltype364;
int idtype365;
short int var_366 /* var : Bool */;
val* var367 /* : MClass */;
val* var369 /* : MClass */;
val* var370 /* : MClassKind */;
val* var372 /* : MClassKind */;
val* var373 /* : MClassKind */;
short int var374 /* : Bool */;
short int var375 /* : Bool */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
short int var379 /* : Bool */;
short int var_380 /* var : Bool */;
val* var381 /* : MClass */;
val* var383 /* : MClass */;
val* var384 /* : MClassKind */;
val* var386 /* : MClassKind */;
val* var387 /* : MClassKind */;
short int var388 /* : Bool */;
short int var389 /* : Bool */;
short int var391 /* : Bool */;
short int var392 /* : Bool */;
short int var393 /* : Bool */;
val* var395 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var396 /* : HashSet[MClassType] */;
val* var398 /* : HashSet[MClassType] */;
short int var399 /* : Bool */;
short int var400 /* : Bool */;
val* var401 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var402 /* : HashSet[MClassType] */;
val* var404 /* : HashSet[MClassType] */;
val* var_405 /* var : HashSet[MClassType] */;
val* var406 /* : Iterator[Object] */;
val* var_407 /* var : Iterator[MClassType] */;
short int var408 /* : Bool */;
val* var409 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var410 /* : MModule */;
val* var412 /* : MModule */;
short int var413 /* : Bool */;
short int var414 /* : Bool */;
val* var416 /* : MModule */;
val* var418 /* : MModule */;
val* var419 /* : MClassType */;
val* var_rt /* var rt: MClassType */;
val* var420 /* : HashSet[MClassType] */;
val* var422 /* : HashSet[MClassType] */;
short int var423 /* : Bool */;
val* var424 /* : HashSet[MClassType] */;
val* var426 /* : HashSet[MClassType] */;
val* var430 /* : HashSet[MType] */;
val* var432 /* : HashSet[MType] */;
val* var_433 /* var : HashSet[MType] */;
val* var434 /* : Iterator[Object] */;
val* var_435 /* var : Iterator[MType] */;
short int var436 /* : Bool */;
val* var437 /* : nullable Object */;
val* var_ot438 /* var ot: MType */;
val* var439 /* : HashSet[MClassType] */;
val* var441 /* : HashSet[MClassType] */;
val* var_442 /* var : HashSet[MClassType] */;
val* var443 /* : Iterator[Object] */;
val* var_444 /* var : Iterator[MClassType] */;
short int var445 /* : Bool */;
val* var446 /* : nullable Object */;
val* var_t447 /* var t: MClassType */;
val* var448 /* : MModule */;
val* var450 /* : MModule */;
short int var451 /* : Bool */;
short int var452 /* : Bool */;
val* var454 /* : MModule */;
val* var456 /* : MModule */;
val* var457 /* : MType */;
val* var_rt458 /* var rt: MType */;
val* var459 /* : HashSet[MType] */;
val* var461 /* : HashSet[MType] */;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
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
var33 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "run";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var41 = var_maintype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = model__MModule__try_get_primitive_method(var31, var35, var39);
}
if (var42!=NULL) {
var30 = var42;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var45 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "main";
var49 = 4;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var53 = var_maintype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = model__MModule__try_get_primitive_method(var43, var47, var51);
}
var30 = var54;
}
var_mainprop = var30;
var55 = NULL;
if (var_mainprop == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mainprop,var55) on <var_mainprop:nullable MMethod> */
var_other26 = var55;
{
var60 = ((short int (*)(val*, val*))(var_mainprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_mainprop, var_other26) /* == on <var_mainprop:nullable MMethod(MMethod)>*/;
var59 = var60;
}
var61 = !var59;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
rapid_type_analysis__RapidTypeAnalysis__add_send(self, var_maintype, var_mainprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var64 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = model__MModule__finalizable_type(var62);
}
var_finalizable_type = var65;
var66 = NULL;
if (var_finalizable_type == NULL) {
var67 = 0; /* is null */
} else {
var67 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,var66) on <var_finalizable_type:nullable MClassType> */
var_other26 = var66;
{
var71 = ((short int (*)(val*, val*))(var_finalizable_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_finalizable_type, var_other26) /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/;
var70 = var71;
}
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (var67){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var75 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = "finalize";
var79 = 8;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var83 = var_finalizable_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = model__MModule__try_get_primitive_method(var73, var77, var81);
}
var_finalize_meth = var84;
var85 = NULL;
if (var_finalize_meth == NULL) {
var86 = 0; /* is null */
} else {
var86 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalize_meth,var85) on <var_finalize_meth:nullable MMethod> */
var_other26 = var85;
{
var90 = ((short int (*)(val*, val*))(var_finalize_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_finalize_meth, var_other26) /* == on <var_finalize_meth:nullable MMethod(MMethod)>*/;
var89 = var90;
}
var91 = !var89;
var87 = var91;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
{
rapid_type_analysis__RapidTypeAnalysis__add_send(self, var_finalizable_type, var_finalize_meth); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = "Bool";
var95 = 4;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var93); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "Int";
var100 = 3;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var98); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Float";
var105 = 5;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var103); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Char";
var110 = 4;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var108); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "Pointer";
var115 = 7;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, var113); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
for(;;) {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var119 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 172);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = list__List__is_empty(var117);
}
var121 = !var120;
if (var121){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var124 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 172);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
var125 = list__List__shift(var122);
}
var_mmethoddef = var125;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var128 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_mmeth = var126;
var129 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var132 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var130) on <var130:MClassDef> */
var135 = var130->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var130:MClassDef> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__init(var129, self, var133, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeVisitor#init on <var129:RapidTypeVisitor>*/
}
var_v = var129;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var138 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (var136 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 216);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var136) on <var136:nullable MSignature> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1510);
show_backtrace(1);
}
var141 = var136->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var136:nullable MSignature> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
var_vararg_rank = var139;
var142 = 1;
{
{ /* Inline kernel#Int#unary - (var142) on <var142:Int> */
var145 = -var142;
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_vararg_rank,var143) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var143:Int> isa OTHER */
/* <var143:Int> isa OTHER */
var148 = 1; /* easy <var143:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var149 = var_vararg_rank > var143;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
if (var146){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var152 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var150) on <var150:ModelBuilder> */
var155 = var150->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var150:ModelBuilder> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = hash_collection__HashMap___91d_93d(var153, var_mmethoddef);
}
var_node = var156;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var159 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
if (var157 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 219);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var157) on <var157:nullable MSignature> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var162 = var157->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var157:nullable MSignature> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
var163 = array__Array___91d_93d(var160, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var163) on <var163:nullable Object(MParameter)> */
var166 = var163->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var163:nullable Object(MParameter)> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_elttype = var164;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var169 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "Array";
var173 = 5;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
var175 = model__MModule__get_primitive_class(var167, var171);
}
var176 = NEW_array__Array(&type_array__Arraymodel__MType);
var177 = 1;
{
array__Array__with_capacity(var176, var177); /* Direct call array#Array#with_capacity on <var176:Array[MType]>*/
}
var_ = var176;
{
array__AbstractArray__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var178 = model__MClass__get_mtype(var175, var_);
}
var_vararg = var178;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_vararg); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var181 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = "NativeArray";
var185 = 11;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
{
var187 = model__MModule__get_primitive_class(var179, var183);
}
var188 = NEW_array__Array(&type_array__Arraymodel__MType);
var189 = 1;
{
array__Array__with_capacity(var188, var189); /* Direct call array#Array#with_capacity on <var188:Array[MType]>*/
}
var_190 = var188;
{
array__AbstractArray__push(var_190, var_elttype); /* Direct call array#AbstractArray#push on <var_190:Array[MType]>*/
}
{
var191 = model__MClass__get_mtype(var187, var_190);
}
var_native = var191;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var194 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "with_native";
var198 = 11;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
{
{ /* Inline model#MClassType#mclass (var_vararg) on <var_vararg:MClassType> */
var202 = var_vararg->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_vararg:MClassType> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var205 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var203 = var205;
RET_LABEL204:(void)0;
}
}
{
var206 = modelbuilder__ModelBuilder__force_get_primitive_method(var192, var_node, var196, var200, var203);
}
{
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(var_v, var_vararg, var206); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var209 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 229);
show_backtrace(1);
}
var_sig = var207;
{
{ /* Inline model#MProperty#intro (var_mmeth) on <var_mmeth:MMethod> */
var212 = var_mmeth->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mmeth:MMethod> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var210) on <var210:MPropDef(MMethodDef)> */
var215 = var210->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var210:MPropDef(MMethodDef)> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 230);
show_backtrace(1);
}
var_osig = var213;
var216 = 0;
var_i = var216;
{
var217 = model__MSignature__arity(var_sig);
}
var_218 = var217;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_218) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_218:Int> isa OTHER */
/* <var_218:Int> isa OTHER */
var221 = 1; /* easy <var_218:Int> isa OTHER*/
if (unlikely(!var221)) {
var_class_name224 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name224);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var225 = var_i < var_218;
var219 = var225;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
if (var219){
{
{ /* Inline model#MSignature#mparameters (var_osig) on <var_osig:MSignature> */
var228 = var_osig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_osig:MSignature> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
var229 = array__Array___91d_93d(var226, var_i);
}
{
{ /* Inline model#MParameter#mtype (var229) on <var229:nullable Object(MParameter)> */
var232 = var229->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var229:nullable Object(MParameter)> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
var_origtype = var230;
{
var233 = ((short int (*)(val*))(var_origtype->class->vft[COLOR_model__MType__need_anchor]))(var_origtype) /* need_anchor on <var_origtype:MType>*/;
}
var234 = !var233;
if (var234){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:MSignature> */
var237 = var_sig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_sig:MSignature> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
var238 = array__Array___91d_93d(var235, var_i);
}
{
{ /* Inline model#MParameter#mtype (var238) on <var238:nullable Object(MParameter)> */
var241 = var238->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var238:nullable Object(MParameter)> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
var_paramtype = var239;
{
rapid_type_analysis__RapidTypeAnalysis__add_cast(self, var_paramtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <self:RapidTypeAnalysis>*/
}
BREAK_label: (void)0;
var242 = 1;
{
var243 = kernel__Int__successor(var_i, var242);
}
var_i = var243;
} else {
goto BREAK_label244;
}
}
BREAK_label244: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var247 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var245) on <var245:ModelBuilder> */
var250 = var245->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var245:ModelBuilder> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
var251 = abstract_collection__MapRead__has_key(var248, var_mmethoddef);
}
var252 = !var251;
if (var252){
{
{ /* Inline model#MMethod#is_root_init (var_mmeth) on <var_mmeth:MMethod> */
var255 = var_mmeth->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var_mmeth:MMethod> */
var253 = var255;
RET_LABEL254:(void)0;
}
}
if (var253){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var258 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var256) on <var256:ModelBuilder> */
var261 = var256->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var256:ModelBuilder> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var264 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
var265 = hash_collection__HashMap___91d_93d(var259, var262);
}
var_nclassdef = var265;
{
{ /* Inline modelize_property#AClassdef#mfree_init (var_nclassdef) on <var_nclassdef:AClassdef> */
var268 = var_nclassdef->attrs[COLOR_modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <var_nclassdef:AClassdef> */
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mmethoddef,var266) on <var_mmethoddef:MMethodDef> */
var_other = var266;
{
{ /* Inline kernel#Object#is_same_instance (var_mmethoddef,var_other) on <var_mmethoddef:MMethodDef> */
var274 = var_mmethoddef == var_other;
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
var269 = var270;
}
if (unlikely(!var269)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 242);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var278 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var278 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var276 = var278;
RET_LABEL277:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var276) on <var276:MProperty(MMethod)> */
var281 = var276->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var276:MProperty(MMethod)> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
var_282 = var279;
if (var279){
{
var283 = model__MPropDef__is_intro(var_mmethoddef);
}
var284 = !var283;
var275 = var284;
} else {
var275 = var_282;
}
if (var275){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var287 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
show_backtrace(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_super_send(self, var285, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
{
{ /* Inline model#MMethodDef#constant_value (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var290 = var_mmethoddef->attrs[COLOR_model__MMethodDef___constant_value].val; /* _constant_value on <var_mmethoddef:MMethodDef> */
var288 = var290;
RET_LABEL289:(void)0;
}
}
var291 = NULL;
if (var288 == NULL) {
var292 = 0; /* is null */
} else {
var292 = 1; /* arg is null and recv is not */
}
if (0) {
var293 = ((short int (*)(val*, val*))(var288->class->vft[COLOR_kernel__Object___33d_61d]))(var288, var291) /* != on <var288:nullable Object>*/;
var292 = var293;
}
if (var292){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var296 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var294 = var296;
RET_LABEL295:(void)0;
}
}
if (var294 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 249);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var294) on <var294:nullable MSignature> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var299 = var294->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var294:nullable MSignature> */
var297 = var299;
RET_LABEL298:(void)0;
}
}
/* <var297:nullable MType> isa MClassType */
cltype301 = type_model__MClassType.color;
idtype302 = type_model__MClassType.id;
if(var297 == NULL) {
var300 = 0;
} else {
if(cltype301 >= var297->type->table_size) {
var300 = 0;
} else {
var300 = var297->type->type_table[cltype301] == idtype302;
}
}
if (unlikely(!var300)) {
var_class_name303 = var297 == NULL ? "null" : var297->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name303);
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 249);
show_backtrace(1);
}
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var297); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 251);
show_backtrace(1);
}
}
goto BREAK_label304;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var307 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var305) on <var305:ModelBuilder> */
var310 = var305->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var305:ModelBuilder> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
var311 = hash_collection__HashMap___91d_93d(var308, var_mmethoddef);
}
var_npropdef = var311;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype313 = type_parser_nodes__AMethPropdef.color;
idtype314 = type_parser_nodes__AMethPropdef.id;
if(cltype313 >= var_npropdef->type->table_size) {
var312 = 0;
} else {
var312 = var_npropdef->type->type_table[cltype313] == idtype314;
}
if (var312){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var317 = var_npropdef->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <var_npropdef:APropdef(AMethPropdef)> */
var315 = var317;
RET_LABEL316:(void)0;
}
}
var_auto_super_inits = var315;
var318 = NULL;
if (var_auto_super_inits == NULL) {
var319 = 0; /* is null */
} else {
var319 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,var318) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other26 = var318;
{
var323 = ((short int (*)(val*, val*))(var_auto_super_inits->class->vft[COLOR_kernel__Object___61d_61d]))(var_auto_super_inits, var_other26) /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
var322 = var323;
}
var324 = !var322;
var320 = var324;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
var319 = var320;
}
if (var319){
var_325 = var_auto_super_inits;
{
var326 = array__AbstractArrayRead__iterator(var_325);
}
var_327 = var326;
for(;;) {
{
var328 = array__ArrayIterator__is_ok(var_327);
}
if (var328){
{
var329 = array__ArrayIterator__item(var_327);
}
var_auto_super_init = var329;
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var_auto_super_init); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
array__ArrayIterator__next(var_327); /* Direct call array#ArrayIterator#next on <var_327:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label330;
}
}
BREAK_label330: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_327) on <var_327:ArrayIterator[CallSite]> */
RET_LABEL331:(void)0;
}
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var334 = var_npropdef->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <var_npropdef:APropdef(AMethPropdef)> */
var332 = var334;
RET_LABEL333:(void)0;
}
}
if (var332){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var337 = var_v->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var337 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
show_backtrace(1);
}
var335 = var337;
RET_LABEL336:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_super_send(self, var335, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var341 = var_mmethoddef->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var339 = var341;
RET_LABEL340:(void)0;
}
}
var_342 = var339;
if (var339){
var338 = var_342;
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var345 = var_mmethoddef->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_mmethoddef:MMethodDef> */
var343 = var345;
RET_LABEL344:(void)0;
}
}
var338 = var343;
}
if (var338){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var348 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var346 = var348;
RET_LABEL347:(void)0;
}
}
if (var346 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 272);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var346) on <var346:nullable MSignature> */
if (unlikely(var346 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var351 = var346->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var346:nullable MSignature> */
var349 = var351;
RET_LABEL350:(void)0;
}
}
var_ret = var349;
var355 = NULL;
if (var_ret == NULL) {
var356 = 0; /* is null */
} else {
var356 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var355) on <var_ret:nullable MType> */
var_other26 = var355;
{
var360 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other26) /* == on <var_ret:nullable MType(MType)>*/;
var359 = var360;
}
var361 = !var359;
var357 = var361;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
var356 = var357;
}
var_362 = var356;
if (var356){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype364 = type_model__MClassType.color;
idtype365 = type_model__MClassType.id;
if(cltype364 >= var_ret->type->table_size) {
var363 = 0;
} else {
var363 = var_ret->type->type_table[cltype364] == idtype365;
}
var354 = var363;
} else {
var354 = var_362;
}
var_366 = var354;
if (var354){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var369 = var_ret->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var367) on <var367:MClass> */
var372 = var367->attrs[COLOR_model__MClass___kind].val; /* _kind on <var367:MClass> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
var373 = model__Object__abstract_kind(self);
}
{
{ /* Inline kernel#Object#!= (var370,var373) on <var370:MClassKind> */
var_other26 = var373;
{
var378 = ((short int (*)(val*, val*))(var370->class->vft[COLOR_kernel__Object___61d_61d]))(var370, var_other26) /* == on <var370:MClassKind>*/;
var377 = var378;
}
var379 = !var377;
var375 = var379;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
var374 = var375;
}
var353 = var374;
} else {
var353 = var_366;
}
var_380 = var353;
if (var353){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var383 = var_ret->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var381) on <var381:MClass> */
var386 = var381->attrs[COLOR_model__MClass___kind].val; /* _kind on <var381:MClass> */
if (unlikely(var386 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var384 = var386;
RET_LABEL385:(void)0;
}
}
{
var387 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#!= (var384,var387) on <var384:MClassKind> */
var_other26 = var387;
{
var392 = ((short int (*)(val*, val*))(var384->class->vft[COLOR_kernel__Object___61d_61d]))(var384, var_other26) /* == on <var384:MClassKind>*/;
var391 = var392;
}
var393 = !var391;
var389 = var393;
goto RET_LABEL390;
RET_LABEL390:(void)0;
}
var388 = var389;
}
var352 = var388;
} else {
var352 = var_380;
}
if (var352){
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_ret); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
}
} else {
}
{
parser_nodes__Visitor__enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
} else {
goto BREAK_label394;
}
BREAK_label304: (void)0;
}
BREAK_label394: (void)0;
var395 = NEW_list__List(&type_list__Listmodel__MClassType);
{
((void (*)(val*))(var395->class->vft[COLOR_kernel__Object__init]))(var395) /* init on <var395:List[MClassType]>*/;
}
var_todo_types = var395;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var398 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var398 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var396 = var398;
RET_LABEL397:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var_todo_types, var396); /* Direct call abstract_collection#SimpleCollection#add_all on <var_todo_types:List[MClassType]>*/
}
for(;;) {
{
var399 = list__List__is_empty(var_todo_types);
}
var400 = !var399;
if (var400){
{
var401 = list__List__shift(var_todo_types);
}
var_t = var401;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var404 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var404 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 58);
show_backtrace(1);
}
var402 = var404;
RET_LABEL403:(void)0;
}
}
var_405 = var402;
{
var406 = hash_collection__HashSet__iterator(var_405);
}
var_407 = var406;
for(;;) {
{
var408 = ((short int (*)(val*))(var_407->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_407) /* is_ok on <var_407:Iterator[MClassType]>*/;
}
if (var408){
{
var409 = ((val* (*)(val*))(var_407->class->vft[COLOR_abstract_collection__Iterator__item]))(var_407) /* item on <var_407:Iterator[MClassType]>*/;
}
var_ot = var409;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var412 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
{
var413 = ((short int (*)(val*, val*, val*, val*))(var_ot->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot, var_t, var_t, var410) /* can_resolve_for on <var_ot:MClassType>*/;
}
var414 = !var413;
if (var414){
goto BREAK_label415;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var418 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var418 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var416 = var418;
RET_LABEL417:(void)0;
}
}
{
var419 = model__MClassType__anchor_to(var_ot, var416, var_t);
}
var_rt = var419;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var422 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var422 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var420 = var422;
RET_LABEL421:(void)0;
}
}
{
var423 = hash_collection__HashSet__has(var420, var_rt);
}
if (var423){
goto BREAK_label415;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var426 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var426 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var424 = var426;
RET_LABEL425:(void)0;
}
}
{
hash_collection__HashSet__add(var424, var_rt); /* Direct call hash_collection#HashSet#add on <var424:HashSet[MClassType]>*/
}
{
abstract_collection__Sequence__add(var_todo_types, var_rt); /* Direct call abstract_collection#Sequence#add on <var_todo_types:List[MClassType]>*/
}
{
rapid_type_analysis__RapidTypeAnalysis__check_depth(self, var_rt); /* Direct call rapid_type_analysis#RapidTypeAnalysis#check_depth on <self:RapidTypeAnalysis>*/
}
BREAK_label415: (void)0;
{
((void (*)(val*))(var_407->class->vft[COLOR_abstract_collection__Iterator__next]))(var_407) /* next on <var_407:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label427;
}
}
BREAK_label427: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_407) on <var_407:Iterator[MClassType]> */
RET_LABEL428:(void)0;
}
}
} else {
goto BREAK_label429;
}
}
BREAK_label429: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var432 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var432 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 68);
show_backtrace(1);
}
var430 = var432;
RET_LABEL431:(void)0;
}
}
var_433 = var430;
{
var434 = hash_collection__HashSet__iterator(var_433);
}
var_435 = var434;
for(;;) {
{
var436 = ((short int (*)(val*))(var_435->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_435) /* is_ok on <var_435:Iterator[MType]>*/;
}
if (var436){
{
var437 = ((val* (*)(val*))(var_435->class->vft[COLOR_abstract_collection__Iterator__item]))(var_435) /* item on <var_435:Iterator[MType]>*/;
}
var_ot438 = var437;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var441 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var441 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var439 = var441;
RET_LABEL440:(void)0;
}
}
var_442 = var439;
{
var443 = hash_collection__HashSet__iterator(var_442);
}
var_444 = var443;
for(;;) {
{
var445 = ((short int (*)(val*))(var_444->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_444) /* is_ok on <var_444:Iterator[MClassType]>*/;
}
if (var445){
{
var446 = ((val* (*)(val*))(var_444->class->vft[COLOR_abstract_collection__Iterator__item]))(var_444) /* item on <var_444:Iterator[MClassType]>*/;
}
var_t447 = var446;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var450 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var450 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var448 = var450;
RET_LABEL449:(void)0;
}
}
{
var451 = ((short int (*)(val*, val*, val*, val*))(var_ot438->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot438, var_t447, var_t447, var448) /* can_resolve_for on <var_ot438:MType>*/;
}
var452 = !var451;
if (var452){
goto BREAK_label453;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var456 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var456 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var454 = var456;
RET_LABEL455:(void)0;
}
}
{
var457 = ((val* (*)(val*, val*, val*))(var_ot438->class->vft[COLOR_model__MType__anchor_to]))(var_ot438, var454, var_t447) /* anchor_to on <var_ot438:MType>*/;
}
var_rt458 = var457;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var461 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var461 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
show_backtrace(1);
}
var459 = var461;
RET_LABEL460:(void)0;
}
}
{
hash_collection__HashSet__add(var459, var_rt458); /* Direct call hash_collection#HashSet#add on <var459:HashSet[MType]>*/
}
BREAK_label453: (void)0;
{
((void (*)(val*))(var_444->class->vft[COLOR_abstract_collection__Iterator__next]))(var_444) /* next on <var_444:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label462;
}
}
BREAK_label462: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_444) on <var_444:Iterator[MClassType]> */
RET_LABEL463:(void)0;
}
}
{
((void (*)(val*))(var_435->class->vft[COLOR_abstract_collection__Iterator__next]))(var_435) /* next on <var_435:Iterator[MType]>*/;
}
} else {
goto BREAK_label464;
}
}
BREAK_label464: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_435) on <var_435:Iterator[MType]> */
RET_LABEL465:(void)0;
}
}
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
val* var_ /* var : HashSet[MMethod] */;
val* var30 /* : Iterator[Object] */;
val* var_31 /* var : Iterator[MMethod] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_p /* var p: MMethod */;
val* var35 /* : HashSet[MMethodDef] */;
val* var37 /* : HashSet[MMethodDef] */;
val* var_38 /* var : HashSet[MMethodDef] */;
val* var39 /* : Iterator[Object] */;
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
val* var79 /* : HashMap[MClassDef, AClassdef] */;
val* var81 /* : HashMap[MClassDef, AClassdef] */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var85 /* : ModelBuilder */;
val* var87 /* : ModelBuilder */;
val* var88 /* : HashMap[MClassDef, AClassdef] */;
val* var90 /* : HashMap[MClassDef, AClassdef] */;
val* var91 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var92 /* : ANodes[APropdef] */;
val* var94 /* : ANodes[APropdef] */;
val* var_95 /* var : ANodes[APropdef] */;
val* var96 /* : Iterator[ANode] */;
val* var_97 /* var : Iterator[APropdef] */;
short int var98 /* : Bool */;
val* var99 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var100 /* : Bool */;
int cltype;
int idtype;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var107 /* : nullable MPropDef */;
val* var109 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var110 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
val* var111 /* : nullable AExpr */;
val* var113 /* : nullable AExpr */;
val* var114 /* : nullable AExpr */;
val* var116 /* : nullable AExpr */;
var_recv = p0;
var_mtype = p1;
{
var = ((short int (*)(val*))(var_recv->class->vft[COLOR_model__MType__need_anchor]))(var_recv) /* need_anchor on <var_recv:MClassType>*/;
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 325);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 58);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 58);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 162);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = hash_collection__HashSet__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int (*)(val*))(var_31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_31) /* is_ok on <var_31:Iterator[MMethod]>*/;
}
if (var32){
{
var33 = ((val* (*)(val*))(var_31->class->vft[COLOR_abstract_collection__Iterator__item]))(var_31) /* item on <var_31:Iterator[MMethod]>*/;
}
var_p = var33;
{
rapid_type_analysis__RapidTypeAnalysis__try_send(self, var_mtype, var_p); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val*))(var_31->class->vft[COLOR_abstract_collection__Iterator__next]))(var_31) /* next on <var_31:Iterator[MMethod]>*/;
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
var37 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 108);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = hash_collection__HashSet__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int (*)(val*))(var_40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_40) /* is_ok on <var_40:Iterator[MMethodDef]>*/;
}
if (var41){
{
var42 = ((val* (*)(val*))(var_40->class->vft[COLOR_abstract_collection__Iterator__item]))(var_40) /* item on <var_40:Iterator[MMethodDef]>*/;
}
var_p43 = var42;
{
rapid_type_analysis__RapidTypeAnalysis__try_super_send(self, var_mtype, var_p43); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val*))(var_40->class->vft[COLOR_abstract_collection__Iterator__next]))(var_40) /* next on <var_40:Iterator[MMethodDef]>*/;
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
var48 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 165);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_49 = var46;
{
var50 = array__AbstractArrayRead__iterator(var_49);
}
var_51 = var50;
for(;;) {
{
var52 = array__ArrayIterator__is_ok(var_51);
}
if (var52){
{
var53 = array__ArrayIterator__item(var_51);
}
var_p54 = var53;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var57 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 162);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
hash_collection__HashSet__remove(var55, var_p54); /* Direct call hash_collection#HashSet#remove on <var55:HashSet[MMethod]>*/
}
{
array__ArrayIterator__next(var_51); /* Direct call array#ArrayIterator#next on <var_51:ArrayIterator[MMethod]>*/
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
var62 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 165);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
array__AbstractArray__clear(var60); /* Direct call array#AbstractArray#clear on <var60:Array[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var65 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = model__MClassType__anchor_to(var_mtype, var63, var_recv);
}
var_bound_mtype = var66;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var69 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = model__MClassType__collect_mclassdefs(var_bound_mtype, var67);
}
var_71 = var70;
{
var72 = ((val* (*)(val*))(var_71->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_71) /* iterator on <var_71:Set[MClassDef]>*/;
}
var_73 = var72;
for(;;) {
{
var74 = ((short int (*)(val*))(var_73->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_73) /* is_ok on <var_73:Iterator[MClassDef]>*/;
}
if (var74){
{
var75 = ((val* (*)(val*))(var_73->class->vft[COLOR_abstract_collection__Iterator__item]))(var_73) /* item on <var_73:Iterator[MClassDef]>*/;
}
var_cd = var75;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var78 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var76) on <var76:ModelBuilder> */
var81 = var76->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var76:ModelBuilder> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = abstract_collection__MapRead__has_key(var79, var_cd);
}
var83 = !var82;
if (var83){
goto BREAK_label84;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var87 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var85) on <var85:ModelBuilder> */
var90 = var85->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var85:ModelBuilder> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = hash_collection__HashMap___91d_93d(var88, var_cd);
}
var_nclassdef = var91;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var94 = var_nclassdef->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_95 = var92;
{
var96 = parser_nodes__ANodes__iterator(var_95);
}
var_97 = var96;
for(;;) {
{
var98 = ((short int (*)(val*))(var_97->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_97) /* is_ok on <var_97:Iterator[APropdef]>*/;
}
if (var98){
{
var99 = ((val* (*)(val*))(var_97->class->vft[COLOR_abstract_collection__Iterator__item]))(var_97) /* item on <var_97:Iterator[APropdef]>*/;
}
var_npropdef = var99;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var100 = 0;
} else {
var100 = var_npropdef->type->type_table[cltype] == idtype;
}
var101 = !var100;
if (var101){
goto BREAK_label102;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var105 = var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var106 = !var103;
if (var106){
goto BREAK_label102;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var109 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 354);
show_backtrace(1);
}
var_mpropdef = var107;
var110 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
{
rapid_type_analysis__RapidTypeVisitor__init(var110, self, var_bound_mtype, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeVisitor#init on <var110:RapidTypeVisitor>*/
}
var_v = var110;
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var113 = var_npropdef->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <var_npropdef:APropdef(AAttrPropdef)> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
parser_nodes__Visitor__enter_visit(var_v, var111); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var116 = var_npropdef->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <var_npropdef:APropdef(AAttrPropdef)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
parser_nodes__Visitor__enter_visit(var_v, var114); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
BREAK_label102: (void)0;
{
((void (*)(val*))(var_97->class->vft[COLOR_abstract_collection__Iterator__next]))(var_97) /* next on <var_97:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label117;
}
}
BREAK_label117: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_97) on <var_97:Iterator[APropdef]> */
RET_LABEL118:(void)0;
}
}
BREAK_label84: (void)0;
{
((void (*)(val*))(var_73->class->vft[COLOR_abstract_collection__Iterator__next]))(var_73) /* next on <var_73:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label119;
}
}
BREAK_label119: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_73) on <var_73:Iterator[MClassDef]> */
RET_LABEL120:(void)0;
}
}
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 68);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
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
var2 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = model__MType__has_mproperty(var_recv, var9, var_mproperty);
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = model__MProperty__lookup_first_definition(var_mproperty, var14, var_recv);
}
var_d = var17;
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
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 172);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var13) on <var13:Array[MPropDef](Array[MMethodDef])> */
var18 = var13->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var13:Array[MPropDef](Array[MMethodDef])> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
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
var26 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
{
var27 = array__AbstractArrayRead__iterator(var_);
}
var_28 = var27;
for(;;) {
{
var29 = array__ArrayIterator__is_ok(var_28);
}
if (var29){
{
var30 = array__ArrayIterator__item(var_28);
}
var_d = var30;
{
{ /* Inline model#MMethodDef#is_abstract (var_d) on <var_d:MMethodDef> */
var33 = var_d->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <var_d:MMethodDef> */
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
var36 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = hash_collection__HashSet__has(var34, var_d);
}
var38 = !var37;
if (var38){
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[MMethodDef]>*/
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
var43 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 165);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var46 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
array__Array__add(var41, var44); /* Direct call array#Array#add on <var41:Array[MMethod]>*/
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
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Array[MPropDef] */;
val* var23 /* : Array[MPropDef] */;
val* var24 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var25 /* : HashSet[MMethod] */;
val* var27 /* : HashSet[MMethod] */;
val* var28 /* : HashSet[MClass] */;
val* var30 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var31 /* : Iterator[Object] */;
val* var_32 /* var : Iterator[MClass] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MClassType */;
val* var40 /* : MClassType */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 168);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 75);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 168);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var10) on <var10:Array[MPropDef](Array[MMethodDef])> */
var15 = var10->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var10:Array[MPropDef](Array[MMethodDef])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = 1;
{
{ /* Inline kernel#Int#== (var13,var16) on <var13:Int> */
var20 = var13 == var16;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var23 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = abstract_collection__SequenceRead__first(var21);
}
var_d = var24;
{
rapid_type_analysis__RapidTypeAnalysis__add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var27 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 162);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
hash_collection__HashSet__add(var25, var_mproperty); /* Direct call hash_collection#HashSet#add on <var25:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var30 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_ = var28;
{
var31 = hash_collection__HashSet__iterator(var_);
}
var_32 = var31;
for(;;) {
{
var33 = ((short int (*)(val*))(var_32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_32) /* is_ok on <var_32:Iterator[MClass]>*/;
}
if (var33){
{
var34 = ((val* (*)(val*))(var_32->class->vft[COLOR_abstract_collection__Iterator__item]))(var_32) /* item on <var_32:Iterator[MClass]>*/;
}
var_c = var34;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var37 = var_c->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__try_send(self, var38, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val*))(var_32->class->vft[COLOR_abstract_collection__Iterator__next]))(var_32) /* next on <var_32:Iterator[MClass]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_32) on <var_32:Iterator[MClass]> */
RET_LABEL41:(void)0;
}
}
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
var2 = var_recv->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = model__MClassType__collect_mclassdefs(var_recv, var9);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__Collection__has]))(var12, var13) /* has on <var12:Set[MClassDef]>*/;
}
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var20 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = model__MPropDef__lookup_next_definition(var_mpropdef, var18, var_recv);
}
var_d = var21;
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
val* var13 /* : Iterator[Object] */;
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
var2 = var_mpropdef->attrs[COLOR_modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 427);
show_backtrace(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 108);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = hash_collection__HashSet__has(var3, var_mpropdef);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 108);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
hash_collection__HashSet__add(var7, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 62);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = hash_collection__HashSet__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[MClass]>*/;
}
if (var15){
{
var16 = ((val* (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[MClass]>*/;
}
var_c = var16;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var17) on <var17:MClassDef> */
var22 = var17->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var17:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__try_super_send(self, var20, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[MClass]>*/;
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
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: Object, MType, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_super_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_super_send(self, p0, p1); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:Object(RapidTypeAnalysis)>*/
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: RapidTypeAnalysis) */
void rapid_type_analysis__RapidTypeAnalysis__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__init]))(self) /* init on <self:RapidTypeAnalysis>*/;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: Object) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__init(val* self) {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#init (self) on <self:Object(RapidTypeAnalysis)> */
{
((void (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__init]))(self) /* init on <self:Object(RapidTypeAnalysis)>*/;
}
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
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
short int var4 /* : Bool */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:RapidTypeVisitor>*/;
}
var_analysis = p0;
var_receiver = p1;
var_mpropdef = p2;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis= (self,var_analysis) on <self:RapidTypeVisitor> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val = var_analysis; /* _analysis on <self:RapidTypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver= (self,var_receiver) on <self:RapidTypeVisitor> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___receiver].val = var_receiver; /* _receiver on <self:RapidTypeVisitor> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#mpropdef= (self,var_mpropdef) on <self:RapidTypeVisitor> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:RapidTypeVisitor> */
RET_LABEL3:(void)0;
}
}
{
var = ((short int (*)(val*))(var_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_receiver) /* need_anchor on <var_receiver:MClassType>*/;
}
var4 = !var;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 449);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 471);
show_backtrace(1);
}
{
var17 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType(MClassType)>*/;
}
var18 = !var17;
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
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
val* var17 /* : nullable ANode */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : RapidTypeAnalysis */;
val* var23 /* : RapidTypeAnalysis */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var27 /* : MMethod */;
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 484);
show_backtrace(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var11 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 46);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#Visitor#current_node (self) on <self:RapidTypeVisitor> */
var17 = self->attrs[COLOR_parser_nodes__Visitor___current_node].val; /* _current_node on <self:RapidTypeVisitor> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 485);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var20 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var23 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var21) on <var21:RapidTypeAnalysis> */
var26 = var21->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var21:RapidTypeAnalysis> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = modelbuilder__ModelBuilder__force_get_primitive_method(var12, var15, var_name, var18, var24);
}
var = var27;
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 75);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 493);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
val* var7 /* : MMethodDef */;
val* var9 /* : MMethodDef */;
val* var10 /* : Array[MProperty] */;
val* var12 /* : Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var13 /* : ArrayIterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[MProperty] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_m /* var m: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : RapidTypeAnalysis */;
val* var20 /* : RapidTypeAnalysis */;
val* var21 /* : MType */;
val* var23 /* : MType */;
val* var25 /* : RapidTypeAnalysis */;
val* var27 /* : RapidTypeAnalysis */;
val* var28 /* : MType */;
val* var30 /* : MType */;
val* var31 /* : MMethod */;
val* var33 /* : MMethod */;
val* var34 /* : RapidTypeAnalysis */;
val* var36 /* : RapidTypeAnalysis */;
val* var37 /* : HashSet[CallSite] */;
val* var39 /* : HashSet[CallSite] */;
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
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var9 = var_callsite->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var7) on <var7:MMethodDef> */
var12 = var7->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var7:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = array__AbstractArrayRead__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = array__ArrayIterator__is_ok(var_14);
}
if (var15){
{
var16 = array__ArrayIterator__item(var_14);
}
var_m = var16;
/* <var_m:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_m->type->table_size) {
var17 = 0;
} else {
var17 = var_m->type->type_table[cltype] == idtype;
}
if (var17){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var20 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var23 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_send(var18, var21, var_m); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var18:RapidTypeAnalysis>*/
}
} else {
}
{
array__ArrayIterator__next(var_14); /* Direct call array#ArrayIterator#next on <var_14:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:ArrayIterator[MProperty]> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var27 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var30 = var_callsite->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var33 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
rapid_type_analysis__RapidTypeAnalysis__add_send(var25, var28, var31); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var25:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var36 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_callsites (var34) on <var34:RapidTypeAnalysis> */
var39 = var34->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <var34:RapidTypeAnalysis> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 78);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
hash_collection__HashSet__add(var37, var_callsite); /* Direct call hash_collection#HashSet#add on <var37:HashSet[CallSite]>*/
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 522);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 529);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 536);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 543);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 547);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 579);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 588);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 597);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 604);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 611);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 618);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 441);
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 662);
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
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable CallSite */;
val* var19 /* : nullable CallSite */;
val* var20 /* : nullable Array[Variable] */;
val* var22 /* : nullable Array[Variable] */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable CallSite */;
val* var33 /* : nullable CallSite */;
val* var34 /* : nullable CallSite */;
val* var36 /* : nullable CallSite */;
val* var37 /* : nullable CallSite */;
val* var39 /* : nullable CallSite */;
val* var40 /* : nullable CallSite */;
val* var42 /* : nullable CallSite */;
val* var_mf /* var mf: nullable CallSite */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 671);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var6) on <var6:nullable Array[Variable]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var11 = var6->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var6:nullable Array[Variable]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 1;
{
{ /* Inline kernel#Int#== (var9,var12) on <var9:Int> */
var16 = var9 == var12;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var19 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var17); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var22 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 673);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var20) on <var20:nullable Array[Variable]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var25 = var20->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var20:nullable Array[Variable]> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var26 = 2;
{
{ /* Inline kernel#Int#== (var23,var26) on <var23:Int> */
var30 = var23 == var26;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var33 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var31); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var36 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var34); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 677);
show_backtrace(1);
}
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var39 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var37); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var42 = self->attrs[COLOR_typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_mf = var40;
var43 = NULL;
if (var_mf == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mf,var43) on <var_mf:nullable CallSite> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_mf->class->vft[COLOR_kernel__Object___61d_61d]))(var_mf, var_other) /* == on <var_mf:nullable CallSite(CallSite)>*/;
var47 = var48;
}
var49 = !var47;
var45 = var49;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var_mf); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
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
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 688);
show_backtrace(1);
}
var_mtype = var;
{
rapid_type_analysis__RapidTypeVisitor__add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var5 = self->attrs[COLOR_typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
rapid_type_analysis__RapidTypeVisitor__add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(self, p0); /* Direct call rapid_type_analysis#ANewExpr#accept_rapid_type_visitor on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
