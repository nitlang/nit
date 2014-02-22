#include "rapid_type_analysis.sep.0.h"
/* method rapid_type_analysis#ModelBuilder#do_rapid_type_analysis for (self: ModelBuilder, MModule): RapidTypeAnalysis */
val* rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(val* self, val* p0) {
val* var /* : RapidTypeAnalysis */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
var_mainmodule = p0;
var1 = NEW_rapid_type_analysis__RapidTypeAnalysis(&type_rapid_type_analysis__RapidTypeAnalysis);
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__init]))(var1, self, var_mainmodule) /* init on <var1:RapidTypeAnalysis>*/;
var_analysis = var1;
((void (*)(val*))(var_analysis->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__run_analysis]))(var_analysis) /* run_analysis on <var_analysis:RapidTypeAnalysis>*/;
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
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmodelbuilder].val; /* @modelbuilder on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 43);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__modelbuilder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder= for (self: RapidTypeAnalysis, ModelBuilder) */
void rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmodelbuilder].val = p0; /* @modelbuilder on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule for (self: RapidTypeAnalysis): MModule */
val* rapid_type_analysis__RapidTypeAnalysis__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmainmodule].val; /* @mainmodule on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 46);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__mainmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule= for (self: RapidTypeAnalysis, MModule) */
void rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmainmodule].val = p0; /* @mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule= for (self: Object, MModule) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_types].val; /* @live_types on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_types");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 50);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types= for (self: RapidTypeAnalysis, HashSet[MClassType]) */
void rapid_type_analysis__RapidTypeAnalysis__live_types_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_types].val = p0; /* @live_types on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types= for (self: Object, HashSet[MClassType]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_types_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_open_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_types].val; /* @live_open_types on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_open_types");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_open_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types= for (self: RapidTypeAnalysis, HashSet[MClassType]) */
void rapid_type_analysis__RapidTypeAnalysis__live_open_types_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_types].val = p0; /* @live_open_types on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types= for (self: Object, HashSet[MClassType]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_open_types_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes for (self: RapidTypeAnalysis): HashSet[MClass] */
val* rapid_type_analysis__RapidTypeAnalysis__live_classes(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_classes].val; /* @live_classes on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_classes");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 59);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_classes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes= for (self: RapidTypeAnalysis, HashSet[MClass]) */
void rapid_type_analysis__RapidTypeAnalysis__live_classes_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_classes].val = p0; /* @live_classes on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes= for (self: Object, HashSet[MClass]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_classes_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_cast_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val; /* @live_cast_types on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_cast_types");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 62);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: Object): HashSet[MClassType] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = rapid_type_analysis__RapidTypeAnalysis__live_cast_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types= for (self: RapidTypeAnalysis, HashSet[MClassType]) */
void rapid_type_analysis__RapidTypeAnalysis__live_cast_types_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val = p0; /* @live_cast_types on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types= for (self: Object, HashSet[MClassType]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_cast_types_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_cast_types].val; /* @live_open_cast_types on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_open_cast_types");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 65);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types= for (self: RapidTypeAnalysis, HashSet[MType]) */
void rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_cast_types].val = p0; /* @live_open_cast_types on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types= for (self: Object, HashSet[MType]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__live_methoddefs(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methoddefs].val; /* @live_methoddefs on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_methoddefs");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 69);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_methoddefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs= for (self: RapidTypeAnalysis, HashSet[MMethodDef]) */
void rapid_type_analysis__RapidTypeAnalysis__live_methoddefs_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methoddefs].val = p0; /* @live_methoddefs on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs= for (self: Object, HashSet[MMethodDef]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_methoddefs_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__live_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methods].val; /* @live_methods on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_methods");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 72);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_methods(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods= for (self: RapidTypeAnalysis, HashSet[MMethod]) */
void rapid_type_analysis__RapidTypeAnalysis__live_methods_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methods].val = p0; /* @live_methods on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods= for (self: Object, HashSet[MMethod]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_methods_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__live_super_sends(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_super_sends].val; /* @live_super_sends on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_super_sends");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 75);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_super_sends(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends= for (self: RapidTypeAnalysis, HashSet[MMethodDef]) */
void rapid_type_analysis__RapidTypeAnalysis__live_super_sends_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_super_sends].val = p0; /* @live_super_sends on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends= for (self: Object, HashSet[MMethodDef]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__live_super_sends_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtotry_methods].val; /* @totry_methods on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @totry_methods");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 78);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__totry_methods(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods= for (self: RapidTypeAnalysis, HashSet[MMethod]) */
void rapid_type_analysis__RapidTypeAnalysis__totry_methods_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtotry_methods].val = p0; /* @totry_methods on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods= for (self: Object, HashSet[MMethod]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__totry_methods_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo for (self: RapidTypeAnalysis): List[MMethodDef] */
val* rapid_type_analysis__RapidTypeAnalysis__todo(val* self) {
val* var /* : List[MMethodDef] */;
val* var1 /* : List[MMethodDef] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtodo].val; /* @todo on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @todo");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 81);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__todo(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo= for (self: RapidTypeAnalysis, List[MMethodDef]) */
void rapid_type_analysis__RapidTypeAnalysis__todo_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtodo].val = p0; /* @todo on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo= for (self: Object, List[MMethodDef]) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__todo_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#run_analysis for (self: RapidTypeAnalysis) */
void rapid_type_analysis__RapidTypeAnalysis__run_analysis(val* self) {
val* var /* : MModule */;
val* var1 /* : nullable MClassType */;
val* var_maintype /* var maintype: nullable MClassType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MModule */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : MClass */;
val* var10 /* : nullable MMethod */;
val* var_initprop /* var initprop: nullable MMethod */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : MModule */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : MClass */;
val* var20 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : ModelBuilder */;
val* var24 /* : Model */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var31 /* : null */;
short int var32 /* : Bool */;
val* var33 /* : Iterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var36 /* : MClassType */;
val* var37 /* : MClassType */;
val* var38 /* : List[MMethodDef] */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : List[MMethodDef] */;
val* var42 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var43 /* : RapidTypeVisitor */;
val* var44 /* : MClassDef */;
val* var45 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
val* var46 /* : nullable MSignature */;
long var47 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var55 /* : Bool */;
val* var56 /* : ModelBuilder */;
val* var57 /* : HashMap[MPropDef, APropdef] */;
val* var58 /* : nullable Object */;
val* var_node /* var node: APropdef */;
val* var59 /* : nullable MSignature */;
val* var60 /* : Array[MParameter] */;
val* var61 /* : nullable Object */;
val* var62 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var63 /* : MModule */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : MClass */;
val* var70 /* : Array[MType] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[MType] */;
val* var73 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var74 /* : MModule */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
val* var80 /* : MClass */;
val* var81 /* : Array[MType] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[MType] */;
val* var84 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var85 /* : ModelBuilder */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : MClass */;
val* var92 /* : MModule */;
val* var93 /* : MMethod */;
val* var94 /* : Range[Int] */;
long var95 /* : Int */;
val* var96 /* : nullable MSignature */;
long var97 /* : Int */;
val* var98 /* : Discrete */;
val* var99 /* : Discrete */;
val* var100 /* : Iterator[nullable Object] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
long var_i /* var i: Int */;
long var103 /* : Int */;
val* var104 /* : MProperty */;
val* var105 /* : MPropDef */;
val* var106 /* : nullable MSignature */;
val* var107 /* : Array[MParameter] */;
val* var108 /* : nullable Object */;
val* var109 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var113 /* : nullable MSignature */;
val* var114 /* : Array[MParameter] */;
val* var115 /* : nullable Object */;
val* var116 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var117 /* : ModelBuilder */;
val* var118 /* : HashMap[MPropDef, APropdef] */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : MProperty */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
short int var128 /* : Bool */;
val* var129 /* : ModelBuilder */;
val* var130 /* : HashMap[MClassDef, AClassdef] */;
val* var131 /* : MClassDef */;
val* var132 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var133 /* : nullable Collection[MMethod] */;
val* var_super_inits /* var super_inits: nullable Collection[MMethod] */;
val* var134 /* : null */;
short int var135 /* : Bool */;
val* var136 /* : Iterator[nullable Object] */;
short int var137 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_su /* var su: MMethod */;
val* var139 /* : MClassType */;
val* var142 /* : ModelBuilder */;
val* var143 /* : HashMap[MPropDef, APropdef] */;
val* var144 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
val* var148 /* : nullable Array[MMethod] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[MMethod] */;
val* var149 /* : null */;
short int var150 /* : Bool */;
val* var151 /* : Iterator[nullable Object] */;
short int var152 /* : Bool */;
val* var153 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: MMethod */;
val* var154 /* : MClassType */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
short int var_ /* var : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
short int var_164 /* var : Bool */;
val* var165 /* : nullable TString */;
val* var166 /* : null */;
short int var167 /* : Bool */;
val* var168 /* : nullable MSignature */;
val* var169 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var173 /* : null */;
short int var174 /* : Bool */;
short int var_175 /* var : Bool */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
short int var_179 /* var : Bool */;
val* var180 /* : MClass */;
val* var181 /* : MClassKind */;
val* var182 /* : MClassKind */;
short int var183 /* : Bool */;
short int var_184 /* var : Bool */;
val* var185 /* : MClass */;
val* var186 /* : MClassKind */;
val* var187 /* : MClassKind */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
int cltype190;
int idtype191;
val* var192 /* : nullable ANode */;
short int var193 /* : Bool */;
int cltype194;
int idtype195;
const char* var_class_name196;
val* var_nclassdef197 /* var nclassdef: AClassdef */;
short int var198 /* : Bool */;
int cltype199;
int idtype200;
val* var201 /* : MClassType */;
val* var202 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var203 /* : HashSet[MClassType] */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
val* var206 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var207 /* : HashSet[MClassType] */;
val* var208 /* : Iterator[nullable Object] */;
short int var209 /* : Bool */;
val* var210 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var211 /* : MModule */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
val* var215 /* : MModule */;
val* var216 /* : MType */;
val* var_rt /* var rt: MClassType */;
val* var217 /* : HashSet[MClassType] */;
short int var218 /* : Bool */;
val* var219 /* : HashSet[MClassType] */;
val* var221 /* : HashSet[MType] */;
val* var222 /* : Iterator[nullable Object] */;
short int var223 /* : Bool */;
val* var224 /* : nullable Object */;
val* var_ot225 /* var ot: MType */;
val* var226 /* : HashSet[MClassType] */;
val* var227 /* : Iterator[nullable Object] */;
short int var228 /* : Bool */;
val* var229 /* : nullable Object */;
val* var_t230 /* var t: MClassType */;
val* var231 /* : MModule */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
val* var235 /* : MModule */;
val* var236 /* : MType */;
val* var_rt237 /* var rt: MType */;
short int var238 /* : Bool */;
int cltype239;
int idtype240;
val* var241 /* : MType */;
short int var242 /* : Bool */;
int cltype243;
int idtype244;
val* var245 /* : HashSet[MClassType] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MModule__sys_type]))(var) /* sys_type on <var:MModule>*/;
var_maintype = var1;
var2 = NULL;
if (var_maintype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_new]))(self, var_maintype, var_maintype) /* add_new on <self:RapidTypeAnalysis>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
if (varonce) {
var5 = varonce;
} else {
var6 = "init";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*))(var_maintype->class->vft[COLOR_model__MClassType__mclass]))(var_maintype) /* mclass on <var_maintype:nullable MClassType(MClassType)>*/;
var10 = ((val* (*)(val*, val*, val*))(var4->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var4, var5, var9) /* try_get_primitive_method on <var4:MModule>*/;
var_initprop = var10;
var11 = NULL;
if (var_initprop == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_send]))(self, var_maintype, var_initprop) /* add_send on <self:RapidTypeAnalysis>*/;
} else {
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "main";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = ((val* (*)(val*))(var_maintype->class->vft[COLOR_model__MClassType__mclass]))(var_maintype) /* mclass on <var_maintype:nullable MClassType(MClassType)>*/;
var20 = ((val* (*)(val*, val*, val*))(var13->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var13, var15, var19) /* try_get_primitive_method on <var13:MModule>*/;
var_mainprop = var20;
var21 = NULL;
if (var_mainprop == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_send]))(self, var_maintype, var_mainprop) /* add_send on <self:RapidTypeAnalysis>*/;
} else {
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(var23) /* model on <var23:ModelBuilder>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Bool";
var28 = 4;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_model__Model__get_mclasses_by_name]))(var24, var26) /* get_mclasses_by_name on <var24:Model>*/;
var_classes = var30;
var31 = NULL;
if (var_classes == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (var32){
var33 = ((val* (*)(val*))(var_classes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_classes) /* iterator on <var_classes:nullable Array[MClass](Array[MClass])>*/;
for(;;) {
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[nullable Object]>*/;
if(!var34) break;
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[nullable Object]>*/;
var_c = var35;
var36 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
var37 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_new]))(self, var36, var37) /* add_new on <self:RapidTypeAnalysis>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
for(;;) {
var38 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__todo]))(self) /* todo on <self:RapidTypeAnalysis>*/;
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var38) /* is_empty on <var38:List[MMethodDef]>*/;
var40 = !var39;
if (!var40) break;
var41 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__todo]))(self) /* todo on <self:RapidTypeAnalysis>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Sequence__shift]))(var41) /* shift on <var41:List[MMethodDef]>*/;
var_mmethoddef = var42;
var43 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
var44 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_model__MClassDef__bound_mtype]))(var44) /* bound_mtype on <var44:MClassDef>*/;
((void (*)(val*, val*, val*, val*))(var43->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__init]))(var43, self, var45, var_mmethoddef) /* init on <var43:RapidTypeVisitor>*/;
var_v = var43;
var46 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 108);
show_backtrace(1);
} else {
var47 = ((long (*)(val*))(var46->class->vft[COLOR_model__MSignature__vararg_rank]))(var46) /* vararg_rank on <var46:nullable MSignature>*/;
}
var_vararg_rank = var47;
var48 = 1;
{ /* Inline kernel#Int#unary - (var48) */
var51 = -var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
{ /* Inline kernel#Int#> (var_vararg_rank,var49) */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var54 = 1; /* easy <var49:Int> isa OTHER*/
if (!var54) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var55 = var_vararg_rank > var49;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
if (var52){
var56 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var56) /* mpropdef2npropdef on <var56:ModelBuilder>*/;
var58 = ((val* (*)(val*, val*))(var57->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var57, var_mmethoddef) /* [] on <var57:HashMap[MPropDef, APropdef]>*/;
var_node = var58;
var59 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var59 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 111);
show_backtrace(1);
} else {
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_model__MSignature__mparameters]))(var59) /* mparameters on <var59:nullable MSignature>*/;
}
var61 = ((val* (*)(val*, long))(var60->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var60, var_vararg_rank) /* [] on <var60:Array[MParameter]>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_model__MParameter__mtype]))(var61) /* mtype on <var61:nullable Object(MParameter)>*/;
var_elttype = var62;
var63 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Array";
var67 = 5;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = ((val* (*)(val*, val*))(var63->class->vft[COLOR_model__MModule__get_primitive_class]))(var63, var65) /* get_primitive_class on <var63:MModule>*/;
var70 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var70 = array_instance Array[MType] */
var71 = 1;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[MType]>*/;
}
var73 = ((val* (*)(val*, val*))(var69->class->vft[COLOR_model__MClass__get_mtype]))(var69, var70) /* get_mtype on <var69:MClass>*/;
var_vararg = var73;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_vararg) /* add_type on <var_v:RapidTypeVisitor>*/;
var74 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "NativeArray";
var78 = 11;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = ((val* (*)(val*, val*))(var74->class->vft[COLOR_model__MModule__get_primitive_class]))(var74, var76) /* get_primitive_class on <var74:MModule>*/;
var81 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var81 = array_instance Array[MType] */
var82 = 1;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[MType]>*/;
}
var84 = ((val* (*)(val*, val*))(var80->class->vft[COLOR_model__MClass__get_mtype]))(var80, var81) /* get_mtype on <var80:MClass>*/;
var_native = var84;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_native) /* add_type on <var_v:RapidTypeVisitor>*/;
var85 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = "with_native";
var89 = 11;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = ((val* (*)(val*))(var_vararg->class->vft[COLOR_model__MClassType__mclass]))(var_vararg) /* mclass on <var_vararg:MClassType>*/;
var92 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var93 = ((val* (*)(val*, val*, val*, val*, val*))(var85->class->vft[COLOR_modelbuilder__ModelBuilder__force_get_primitive_method]))(var85, var_node, var87, var91, var92) /* force_get_primitive_method on <var85:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_vararg, var93) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
} else {
}
var94 = NEW_range__Range(&type_range__Rangekernel__Int);
var95 = 0;
var96 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var96 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 121);
show_backtrace(1);
} else {
var97 = ((long (*)(val*))(var96->class->vft[COLOR_model__MSignature__arity]))(var96) /* arity on <var96:nullable MSignature>*/;
}
var98 = BOX_kernel__Int(var95); /* autobox from Int to Discrete */
var99 = BOX_kernel__Int(var97); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var94->class->vft[COLOR_range__Range__without_last]))(var94, var98, var99) /* without_last on <var94:Range[Int]>*/;
var100 = ((val* (*)(val*))(var94->class->vft[COLOR_abstract_collection__Collection__iterator]))(var94) /* iterator on <var94:Range[Int]>*/;
for(;;) {
var101 = ((short int (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var100) /* is_ok on <var100:Iterator[nullable Object]>*/;
if(!var101) break;
var102 = ((val* (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__item]))(var100) /* item on <var100:Iterator[nullable Object]>*/;
var103 = ((struct instance_kernel__Int*)var102)->value; /* autounbox from nullable Object to Int */;
var_i = var103;
var104 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var105 = ((val* (*)(val*))(var104->class->vft[COLOR_model__MProperty__intro]))(var104) /* intro on <var104:MProperty(MMethod)>*/;
var106 = ((val* (*)(val*))(var105->class->vft[COLOR_model__MMethodDef__msignature]))(var105) /* msignature on <var105:MPropDef(MMethodDef)>*/;
if (var106 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 122);
show_backtrace(1);
} else {
var107 = ((val* (*)(val*))(var106->class->vft[COLOR_model__MSignature__mparameters]))(var106) /* mparameters on <var106:nullable MSignature>*/;
}
var108 = ((val* (*)(val*, long))(var107->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var107, var_i) /* [] on <var107:Array[MParameter]>*/;
var109 = ((val* (*)(val*))(var108->class->vft[COLOR_model__MParameter__mtype]))(var108) /* mtype on <var108:nullable Object(MParameter)>*/;
var_origtype = var109;
var110 = ((short int (*)(val*))(var_origtype->class->vft[COLOR_model__MType__need_anchor]))(var_origtype) /* need_anchor on <var_origtype:MType>*/;
var111 = !var110;
if (var111){
goto CONTINUE_label112;
} else {
}
var113 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var113 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 124);
show_backtrace(1);
} else {
var114 = ((val* (*)(val*))(var113->class->vft[COLOR_model__MSignature__mparameters]))(var113) /* mparameters on <var113:nullable MSignature>*/;
}
var115 = ((val* (*)(val*, long))(var114->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var114, var_i) /* [] on <var114:Array[MParameter]>*/;
var116 = ((val* (*)(val*))(var115->class->vft[COLOR_model__MParameter__mtype]))(var115) /* mtype on <var115:nullable Object(MParameter)>*/;
var_paramtype = var116;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_cast]))(self, var_paramtype) /* add_cast on <self:RapidTypeAnalysis>*/;
CONTINUE_label112: (void)0;
((void (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__next]))(var100) /* next on <var100:Iterator[nullable Object]>*/;
}
BREAK_label112: (void)0;
var117 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var118 = ((val* (*)(val*))(var117->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var117) /* mpropdef2npropdef on <var117:ModelBuilder>*/;
var119 = ((short int (*)(val*, val*))(var118->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var118, var_mmethoddef) /* has_key on <var118:HashMap[MPropDef, APropdef]>*/;
var120 = !var119;
if (var120){
var121 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var122 = ((val* (*)(val*))(var121->class->vft[COLOR_model__MProperty__name]))(var121) /* name on <var121:MProperty(MMethod)>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "init";
var126 = 4;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = ((short int (*)(val*, val*))(var122->class->vft[COLOR_kernel__Object___61d_61d]))(var122, var124) /* == on <var122:String>*/;
if (var128){
var129 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var130 = ((val* (*)(val*))(var129->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var129) /* mclassdef2nclassdef on <var129:ModelBuilder>*/;
var131 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var132 = ((val* (*)(val*, val*))(var130->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var130, var131) /* [] on <var130:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var132;
var133 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__super_inits]))(var_nclassdef) /* super_inits on <var_nclassdef:AClassdef>*/;
var_super_inits = var133;
var134 = NULL;
if (var_super_inits == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (var135){
var136 = ((val* (*)(val*))(var_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_inits) /* iterator on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
for(;;) {
var137 = ((short int (*)(val*))(var136->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var136) /* is_ok on <var136:Iterator[nullable Object]>*/;
if(!var137) break;
var138 = ((val* (*)(val*))(var136->class->vft[COLOR_abstract_collection__Iterator__item]))(var136) /* item on <var136:Iterator[nullable Object]>*/;
var_su = var138;
var139 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var139, var_su) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
CONTINUE_label140: (void)0;
((void (*)(val*))(var136->class->vft[COLOR_abstract_collection__Iterator__next]))(var136) /* next on <var136:Iterator[nullable Object]>*/;
}
BREAK_label140: (void)0;
} else {
}
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 142);
show_backtrace(1);
}
goto CONTINUE_label141;
} else {
}
var142 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var143 = ((val* (*)(val*))(var142->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var142) /* mpropdef2npropdef on <var142:ModelBuilder>*/;
var144 = ((val* (*)(val*, val*))(var143->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var143, var_mmethoddef) /* [] on <var143:HashMap[MPropDef, APropdef]>*/;
var_npropdef = var144;
/* <var_npropdef:APropdef> isa AConcreteMethPropdef */
cltype146 = type_parser_nodes__AConcreteMethPropdef.color;
idtype147 = type_parser_nodes__AConcreteMethPropdef.id;
if(cltype146 >= var_npropdef->type->table_size) {
var145 = 0;
} else {
var145 = var_npropdef->type->type_table[cltype146] == idtype147;
}
if (var145){
var148 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits]))(var_npropdef) /* auto_super_inits on <var_npropdef:APropdef(AConcreteMethPropdef)>*/;
var_auto_super_inits = var148;
var149 = NULL;
if (var_auto_super_inits == NULL) {
var150 = 0; /* is null */
} else {
var150 = 1; /* arg is null and recv is not */
}
if (var150){
var151 = ((val* (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_auto_super_inits) /* iterator on <var_auto_super_inits:nullable Array[MMethod](Array[MMethod])>*/;
for(;;) {
var152 = ((short int (*)(val*))(var151->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var151) /* is_ok on <var151:Iterator[nullable Object]>*/;
if(!var152) break;
var153 = ((val* (*)(val*))(var151->class->vft[COLOR_abstract_collection__Iterator__item]))(var151) /* item on <var151:Iterator[nullable Object]>*/;
var_auto_super_init = var153;
var154 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var154, var_auto_super_init) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
CONTINUE_label155: (void)0;
((void (*)(val*))(var151->class->vft[COLOR_abstract_collection__Iterator__next]))(var151) /* next on <var151:Iterator[nullable Object]>*/;
}
BREAK_label155: (void)0;
} else {
}
} else {
/* <var_npropdef:APropdef> isa AInternMethPropdef */
cltype158 = type_parser_nodes__AInternMethPropdef.color;
idtype159 = type_parser_nodes__AInternMethPropdef.id;
if(cltype158 >= var_npropdef->type->table_size) {
var157 = 0;
} else {
var157 = var_npropdef->type->type_table[cltype158] == idtype159;
}
var_ = var157;
if (var157){
var156 = var_;
} else {
/* <var_npropdef:APropdef> isa AExternMethPropdef */
cltype162 = type_parser_nodes__AExternMethPropdef.color;
idtype163 = type_parser_nodes__AExternMethPropdef.id;
if(cltype162 >= var_npropdef->type->table_size) {
var161 = 0;
} else {
var161 = var_npropdef->type->type_table[cltype162] == idtype163;
}
var_164 = var161;
if (var161){
var165 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(var_npropdef) /* n_extern on <var_npropdef:APropdef(AExternMethPropdef)>*/;
var166 = NULL;
if (var165 == NULL) {
var167 = 0; /* is null */
} else {
var167 = 1; /* arg is null and recv is not */
}
var160 = var167;
} else {
var160 = var_164;
}
var156 = var160;
}
if (var156){
var168 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var168 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 159);
show_backtrace(1);
} else {
var169 = ((val* (*)(val*))(var168->class->vft[COLOR_model__MSignature__return_mtype]))(var168) /* return_mtype on <var168:nullable MSignature>*/;
}
var_ret = var169;
var173 = NULL;
if (var_ret == NULL) {
var174 = 0; /* is null */
} else {
var174 = 1; /* arg is null and recv is not */
}
var_175 = var174;
if (var174){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype177 = type_model__MClassType.color;
idtype178 = type_model__MClassType.id;
if(cltype177 >= var_ret->type->table_size) {
var176 = 0;
} else {
var176 = var_ret->type->type_table[cltype177] == idtype178;
}
var172 = var176;
} else {
var172 = var_175;
}
var_179 = var172;
if (var172){
var180 = ((val* (*)(val*))(var_ret->class->vft[COLOR_model__MClassType__mclass]))(var_ret) /* mclass on <var_ret:nullable MType(MClassType)>*/;
var181 = ((val* (*)(val*))(var180->class->vft[COLOR_model__MClass__kind]))(var180) /* kind on <var180:MClass>*/;
var182 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__abstract_kind]))(self) /* abstract_kind on <self:RapidTypeAnalysis>*/;
var183 = ((short int (*)(val*, val*))(var181->class->vft[COLOR_kernel__Object___33d_61d]))(var181, var182) /* != on <var181:MClassKind>*/;
var171 = var183;
} else {
var171 = var_179;
}
var_184 = var171;
if (var171){
var185 = ((val* (*)(val*))(var_ret->class->vft[COLOR_model__MClassType__mclass]))(var_ret) /* mclass on <var_ret:nullable MType(MClassType)>*/;
var186 = ((val* (*)(val*))(var185->class->vft[COLOR_model__MClass__kind]))(var185) /* kind on <var185:MClass>*/;
var187 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:RapidTypeAnalysis>*/;
var188 = ((short int (*)(val*, val*))(var186->class->vft[COLOR_kernel__Object___33d_61d]))(var186, var187) /* != on <var186:MClassKind>*/;
var170 = var188;
} else {
var170 = var_184;
}
if (var170){
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_ret) /* add_type on <var_v:RapidTypeVisitor>*/;
} else {
}
} else {
/* <var_npropdef:APropdef> isa AExternMethPropdef */
cltype190 = type_parser_nodes__AExternMethPropdef.color;
idtype191 = type_parser_nodes__AExternMethPropdef.id;
if(cltype190 >= var_npropdef->type->table_size) {
var189 = 0;
} else {
var189 = var_npropdef->type->type_table[cltype190] == idtype191;
}
if (var189){
var192 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:APropdef(AExternMethPropdef)>*/;
/* <var192:nullable ANode> isa AClassdef */
cltype194 = type_parser_nodes__AClassdef.color;
idtype195 = type_parser_nodes__AClassdef.id;
if(var192 == NULL) {
var193 = 0;
} else {
if(cltype194 >= var192->type->table_size) {
var193 = 0;
} else {
var193 = var192->type->type_table[cltype194] == idtype195;
}
}
if (!var193) {
var_class_name196 = var192 == NULL ? "null" : var192->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name196);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 164);
show_backtrace(1);
}
var_nclassdef197 = var192;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_npropdef) /* enter_visit on <var_v:RapidTypeVisitor>*/;
} else {
/* <var_npropdef:APropdef> isa AExternInitPropdef */
cltype199 = type_parser_nodes__AExternInitPropdef.color;
idtype200 = type_parser_nodes__AExternInitPropdef.id;
if(cltype199 >= var_npropdef->type->table_size) {
var198 = 0;
} else {
var198 = var_npropdef->type->type_table[cltype199] == idtype200;
}
if (var198){
var201 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var201) /* add_type on <var_v:RapidTypeVisitor>*/;
} else {
}
}
}
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_npropdef) /* enter_visit on <var_v:RapidTypeVisitor>*/;
CONTINUE_label141: (void)0;
}
BREAK_label141: (void)0;
var202 = NEW_list__List(&type_list__Listmodel__MClassType);
((void (*)(val*))(var202->class->vft[COLOR_list__List__init]))(var202) /* init on <var202:List[MClassType]>*/;
var_todo_types = var202;
var203 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_todo_types->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_todo_types, var203) /* add_all on <var_todo_types:List[MClassType]>*/;
for(;;) {
var204 = ((short int (*)(val*))(var_todo_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_todo_types) /* is_empty on <var_todo_types:List[MClassType]>*/;
var205 = !var204;
if (!var205) break;
var206 = ((val* (*)(val*))(var_todo_types->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_todo_types) /* shift on <var_todo_types:List[MClassType]>*/;
var_t = var206;
var207 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_types]))(self) /* live_open_types on <self:RapidTypeAnalysis>*/;
var208 = ((val* (*)(val*))(var207->class->vft[COLOR_abstract_collection__Collection__iterator]))(var207) /* iterator on <var207:HashSet[MClassType]>*/;
for(;;) {
var209 = ((short int (*)(val*))(var208->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var208) /* is_ok on <var208:Iterator[nullable Object]>*/;
if(!var209) break;
var210 = ((val* (*)(val*))(var208->class->vft[COLOR_abstract_collection__Iterator__item]))(var208) /* item on <var208:Iterator[nullable Object]>*/;
var_ot = var210;
var211 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var212 = ((short int (*)(val*, val*, val*, val*))(var_ot->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot, var_t, var_t, var211) /* can_resolve_for on <var_ot:MClassType>*/;
var213 = !var212;
if (var213){
goto CONTINUE_label214;
} else {
}
var215 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var216 = ((val* (*)(val*, val*, val*))(var_ot->class->vft[COLOR_model__MType__anchor_to]))(var_ot, var215, var_t) /* anchor_to on <var_ot:MClassType>*/;
var_rt = var216;
var217 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var218 = ((short int (*)(val*, val*))(var217->class->vft[COLOR_abstract_collection__Collection__has]))(var217, var_rt) /* has on <var217:HashSet[MClassType]>*/;
if (var218){
goto CONTINUE_label214;
} else {
}
var219 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var219->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var219, var_rt) /* add on <var219:HashSet[MClassType]>*/;
((void (*)(val*, val*))(var_todo_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_todo_types, var_rt) /* add on <var_todo_types:List[MClassType]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__check_depth]))(self, var_rt) /* check_depth on <self:RapidTypeAnalysis>*/;
CONTINUE_label214: (void)0;
((void (*)(val*))(var208->class->vft[COLOR_abstract_collection__Iterator__next]))(var208) /* next on <var208:Iterator[nullable Object]>*/;
}
BREAK_label214: (void)0;
CONTINUE_label220: (void)0;
}
BREAK_label220: (void)0;
var221 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types]))(self) /* live_open_cast_types on <self:RapidTypeAnalysis>*/;
var222 = ((val* (*)(val*))(var221->class->vft[COLOR_abstract_collection__Collection__iterator]))(var221) /* iterator on <var221:HashSet[MType]>*/;
for(;;) {
var223 = ((short int (*)(val*))(var222->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var222) /* is_ok on <var222:Iterator[nullable Object]>*/;
if(!var223) break;
var224 = ((val* (*)(val*))(var222->class->vft[COLOR_abstract_collection__Iterator__item]))(var222) /* item on <var222:Iterator[nullable Object]>*/;
var_ot225 = var224;
var226 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var227 = ((val* (*)(val*))(var226->class->vft[COLOR_abstract_collection__Collection__iterator]))(var226) /* iterator on <var226:HashSet[MClassType]>*/;
for(;;) {
var228 = ((short int (*)(val*))(var227->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var227) /* is_ok on <var227:Iterator[nullable Object]>*/;
if(!var228) break;
var229 = ((val* (*)(val*))(var227->class->vft[COLOR_abstract_collection__Iterator__item]))(var227) /* item on <var227:Iterator[nullable Object]>*/;
var_t230 = var229;
var231 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var232 = ((short int (*)(val*, val*, val*, val*))(var_ot225->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot225, var_t230, var_t230, var231) /* can_resolve_for on <var_ot225:MType>*/;
var233 = !var232;
if (var233){
goto CONTINUE_label234;
} else {
}
var235 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var236 = ((val* (*)(val*, val*, val*))(var_ot225->class->vft[COLOR_model__MType__anchor_to]))(var_ot225, var235, var_t230) /* anchor_to on <var_ot225:MType>*/;
var_rt237 = var236;
/* <var_rt237:MType> isa MNullableType */
cltype239 = type_model__MNullableType.color;
idtype240 = type_model__MNullableType.id;
if(cltype239 >= var_rt237->type->table_size) {
var238 = 0;
} else {
var238 = var_rt237->type->type_table[cltype239] == idtype240;
}
if (var238){
var241 = ((val* (*)(val*))(var_rt237->class->vft[COLOR_model__MNullableType__mtype]))(var_rt237) /* mtype on <var_rt237:MType(MNullableType)>*/;
var_rt237 = var241;
} else {
}
/* <var_rt237:MType> isa MClassType */
cltype243 = type_model__MClassType.color;
idtype244 = type_model__MClassType.id;
if(cltype243 >= var_rt237->type->table_size) {
var242 = 0;
} else {
var242 = var_rt237->type->type_table[cltype243] == idtype244;
}
if (!var242) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 203);
show_backtrace(1);
}
var245 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(self) /* live_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var245->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var245, var_rt237) /* add on <var245:HashSet[MClassType]>*/;
CONTINUE_label234: (void)0;
((void (*)(val*))(var227->class->vft[COLOR_abstract_collection__Iterator__next]))(var227) /* next on <var227:Iterator[nullable Object]>*/;
}
BREAK_label234: (void)0;
CONTINUE_label246: (void)0;
((void (*)(val*))(var222->class->vft[COLOR_abstract_collection__Iterator__next]))(var222) /* next on <var222:Iterator[nullable Object]>*/;
}
BREAK_label246: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#run_analysis for (self: Object) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__run_analysis(val* self) {
rapid_type_analysis__RapidTypeAnalysis__run_analysis(self);
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
val* var7 /* : ToolContext */;
val* var8 /* : null */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : Object */;
val* var27 /* : String */;
var_mtype = p0;
var = ((long (*)(val*))(var_mtype->class->vft[COLOR_model__MType__length]))(var_mtype) /* length on <var_mtype:MClassType>*/;
var_d = var;
var1 = 255;
{ /* Inline kernel#Int#> (var_d,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var5 = var_d > var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var6) /* toolcontext on <var6:ModelBuilder>*/;
var8 = NULL;
if (varonce) {
var9 = varonce;
} else {
var10 = "Fatal error: limitation in the rapidtype analysis engine: a type depth of ";
var11 = 74;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " is too important, the problematic type is ";
var16 = 43;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = ".";
var21 = 1;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 5;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var9;
var26 = BOX_kernel__Int(var_d); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var26;
((struct instance_array__NativeArray*)var25)->values[2] = (val*) var14;
((struct instance_array__NativeArray*)var25)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var25)->values[4] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var27 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(var7, var8, var27) /* fatal_error on <var7:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#check_depth for (self: Object, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__check_depth(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__check_depth(self, p0);
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
short int var4 /* : Bool */;
val* var5 /* : HashSet[MClassType] */;
val* var6 /* : HashSet[MClassType] */;
short int var7 /* : Bool */;
val* var8 /* : HashSet[MClassType] */;
val* var9 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var10 /* : HashSet[MClass] */;
short int var11 /* : Bool */;
val* var12 /* : HashSet[MClass] */;
val* var13 /* : HashSet[MMethod] */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_p /* var p: MMethod */;
val* var17 /* : HashSet[MMethodDef] */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p21 /* var p: MMethodDef */;
val* var23 /* : MModule */;
val* var24 /* : MType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var25 /* : MModule */;
val* var26 /* : Set[MClassDef] */;
val* var27 /* : Iterator[nullable Object] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var30 /* : ModelBuilder */;
val* var31 /* : HashMap[MClassDef, AClassdef] */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : ModelBuilder */;
val* var36 /* : HashMap[MClassDef, AClassdef] */;
val* var37 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var38 /* : ANodes[APropdef] */;
val* var39 /* : Iterator[nullable Object] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var42 /* : Bool */;
int cltype;
int idtype;
short int var43 /* : Bool */;
val* var45 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var46 /* : null */;
short int var47 /* : Bool */;
val* var48 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var49 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
var_recv = p0;
var_mtype = p1;
var = ((short int (*)(val*))(var_recv->class->vft[COLOR_model__MType__need_anchor]))(var_recv) /* need_anchor on <var_recv:MClassType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 221);
show_backtrace(1);
}
var2 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MClassType>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_types]))(self) /* live_open_types on <self:RapidTypeAnalysis>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_mtype) /* has on <var3:HashSet[MClassType]>*/;
if (var4){
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_types]))(self) /* live_open_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var5, var_mtype) /* add on <var5:HashSet[MClassType]>*/;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__Collection__has]))(var6, var_mtype) /* has on <var6:HashSet[MClassType]>*/;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var8, var_mtype) /* add on <var8:HashSet[MClassType]>*/;
}
var9 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var_mclass = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_classes]))(self) /* live_classes on <self:RapidTypeAnalysis>*/;
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__Collection__has]))(var10, var_mclass) /* has on <var10:HashSet[MClass]>*/;
if (var11){
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_classes]))(self) /* live_classes on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var12, var_mclass) /* add on <var12:HashSet[MClass]>*/;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__totry_methods]))(self) /* totry_methods on <self:RapidTypeAnalysis>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__iterator]))(var13) /* iterator on <var13:HashSet[MMethod]>*/;
for(;;) {
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
if(!var15) break;
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
var_p = var16;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__try_send]))(self, var_mtype, var_p) /* try_send on <self:RapidTypeAnalysis>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(self) /* live_super_sends on <self:RapidTypeAnalysis>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var17) /* iterator on <var17:HashSet[MMethodDef]>*/;
for(;;) {
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
if(!var19) break;
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
var_p21 = var20;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__try_super_send]))(self, var_mtype, var_p21) /* try_super_send on <self:RapidTypeAnalysis>*/;
CONTINUE_label22: (void)0;
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
BREAK_label22: (void)0;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var24 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var23, var_recv) /* anchor_to on <var_mtype:MClassType>*/;
var_bound_mtype = var24;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var26 = ((val* (*)(val*, val*))(var_bound_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_bound_mtype, var25) /* collect_mclassdefs on <var_bound_mtype:MClassType>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Collection__iterator]))(var26) /* iterator on <var26:Set[MClassDef]>*/;
for(;;) {
var28 = ((short int (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var27) /* is_ok on <var27:Iterator[nullable Object]>*/;
if(!var28) break;
var29 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__item]))(var27) /* item on <var27:Iterator[nullable Object]>*/;
var_cd = var29;
var30 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var30) /* mclassdef2nclassdef on <var30:ModelBuilder>*/;
var32 = ((short int (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var31, var_cd) /* has_key on <var31:HashMap[MClassDef, AClassdef]>*/;
var33 = !var32;
if (var33){
goto CONTINUE_label34;
} else {
}
var35 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var35) /* mclassdef2nclassdef on <var35:ModelBuilder>*/;
var37 = ((val* (*)(val*, val*))(var36->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var36, var_cd) /* [] on <var36:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var37;
var38 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Collection__iterator]))(var38) /* iterator on <var38:ANodes[APropdef]>*/;
for(;;) {
var40 = ((short int (*)(val*))(var39->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var39) /* is_ok on <var39:Iterator[nullable Object]>*/;
if(!var40) break;
var41 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Iterator__item]))(var39) /* item on <var39:Iterator[nullable Object]>*/;
var_npropdef = var41;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var42 = 0;
} else {
var42 = var_npropdef->type->type_table[cltype] == idtype;
}
var43 = !var42;
if (var43){
goto CONTINUE_label44;
} else {
}
var45 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(var_npropdef) /* n_expr on <var_npropdef:APropdef(AAttrPropdef)>*/;
var_nexpr = var45;
var46 = NULL;
if (var_nexpr == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (var47){
goto CONTINUE_label44;
} else {
}
var48 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/;
if (var48 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 246);
show_backtrace(1);
}
var_mpropdef = var48;
var49 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
((void (*)(val*, val*, val*, val*))(var49->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__init]))(var49, self, var_bound_mtype, var_mpropdef) /* init on <var49:RapidTypeVisitor>*/;
var_v = var49;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_nexpr) /* enter_visit on <var_v:RapidTypeVisitor>*/;
CONTINUE_label44: (void)0;
((void (*)(val*))(var39->class->vft[COLOR_abstract_collection__Iterator__next]))(var39) /* next on <var39:Iterator[nullable Object]>*/;
}
BREAK_label44: (void)0;
CONTINUE_label34: (void)0;
((void (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__next]))(var27) /* next on <var27:Iterator[nullable Object]>*/;
}
BREAK_label34: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_new for (self: Object, MClassType, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_new(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_new(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_cast for (self: RapidTypeAnalysis, MType) */
void rapid_type_analysis__RapidTypeAnalysis__add_cast(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : MType */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[MType] */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : HashSet[MClassType] */;
var_mtype = p0;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var1;
} else {
}
var2 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types]))(self) /* live_open_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var_mtype) /* add on <var3:HashSet[MType]>*/;
} else {
/* <var_mtype:MType> isa MClassType */
cltype5 = type_model__MClassType.color;
idtype6 = type_model__MClassType.id;
if(cltype5 >= var_mtype->type->table_size) {
var4 = 0;
} else {
var4 = var_mtype->type->type_table[cltype5] == idtype6;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 260);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(self) /* live_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var_mtype) /* add on <var7:HashSet[MClassType]>*/;
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_cast for (self: Object, MType) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_cast(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__add_cast(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_send for (self: RapidTypeAnalysis, MClassType, MMethod) */
void rapid_type_analysis__RapidTypeAnalysis__try_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : MClass */;
val* var1 /* : MClassDef */;
val* var2 /* : MClassType */;
val* var3 /* : MModule */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MModule */;
val* var7 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mproperty = p1;
var = ((val* (*)(val*))(var_recv->class->vft[COLOR_model__MClassType__mclass]))(var_recv) /* mclass on <var_recv:MClassType>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClass__intro]))(var) /* intro on <var:MClass>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:MClassDef>*/;
var_recv = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var4 = ((short int (*)(val*, val*, val*))(var_recv->class->vft[COLOR_model__MType__has_mproperty]))(var_recv, var3, var_mproperty) /* has_mproperty on <var_recv:MClassType>*/;
var5 = !var4;
if (var5){
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var7 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var_mproperty, var6, var_recv) /* lookup_first_definition on <var_mproperty:MMethod>*/;
var_d = var7;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_call]))(self, var_d) /* add_call on <self:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_send for (self: Object, MClassType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__try_send(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_call for (self: RapidTypeAnalysis, MMethodDef) */
void rapid_type_analysis__RapidTypeAnalysis__add_call(val* self, val* p0) {
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : HashSet[MMethodDef] */;
short int var1 /* : Bool */;
val* var2 /* : HashSet[MMethodDef] */;
val* var3 /* : List[MMethodDef] */;
val* var4 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var5 /* : Array[MPropDef] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : Array[MPropDef] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
short int var16 /* : Bool */;
val* var17 /* : HashSet[MMethodDef] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashSet[MMethod] */;
val* var21 /* : MProperty */;
var_mpropdef = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs]))(self) /* live_methoddefs on <self:RapidTypeAnalysis>*/;
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__Collection__has]))(var, var_mpropdef) /* has on <var:HashSet[MMethodDef]>*/;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs]))(self) /* live_methoddefs on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_mpropdef) /* add on <var2:HashSet[MMethodDef]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__todo]))(self) /* todo on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var_mpropdef) /* add on <var3:List[MMethodDef]>*/;
var4 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var_mproperty = var4;
var5 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MMethod>*/;
var6 = ((long (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__length]))(var5) /* length on <var5:Array[MPropDef](Array[MMethodDef])>*/;
var7 = 1;
{ /* Inline kernel#Int#<= (var6,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var11 = var6 <= var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MMethod>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Array[MPropDef](Array[MMethodDef])>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_d = var15;
var16 = ((short int (*)(val*))(var_d->class->vft[COLOR_model__MMethodDef__is_abstract]))(var_d) /* is_abstract on <var_d:MMethodDef>*/;
if (var16){
goto CONTINUE_label;
} else {
}
var17 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs]))(self) /* live_methoddefs on <self:RapidTypeAnalysis>*/;
var18 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__Collection__has]))(var17, var_d) /* has on <var17:HashSet[MMethodDef]>*/;
var19 = !var18;
if (var19){
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__totry_methods]))(self) /* totry_methods on <self:RapidTypeAnalysis>*/;
var21 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var20, var21) /* remove on <var20:HashSet[MMethod]>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_call for (self: Object, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_call(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__add_call(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_send for (self: RapidTypeAnalysis, MType, MMethod) */
void rapid_type_analysis__RapidTypeAnalysis__add_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : HashSet[MMethod] */;
short int var1 /* : Bool */;
val* var2 /* : HashSet[MMethod] */;
val* var3 /* : Array[MPropDef] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[MPropDef] */;
val* var10 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var11 /* : HashSet[MMethod] */;
val* var12 /* : HashSet[MClass] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var16 /* : MClassDef */;
val* var17 /* : MClassType */;
var_recv = p0;
var_mproperty = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methods]))(self) /* live_methods on <self:RapidTypeAnalysis>*/;
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__Collection__has]))(var, var_mproperty) /* has on <var:HashSet[MMethod]>*/;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methods]))(self) /* live_methods on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_mproperty) /* add on <var2:HashSet[MMethod]>*/;
var3 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MMethod>*/;
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:Array[MPropDef](Array[MMethodDef])>*/;
var5 = 1;
{ /* Inline kernel#Int#== (var4,var5) */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var9 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MMethod>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__first]))(var9) /* first on <var9:Array[MPropDef](Array[MMethodDef])>*/;
var_d = var10;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_call]))(self, var_d) /* add_call on <self:RapidTypeAnalysis>*/;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__totry_methods]))(self) /* totry_methods on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var_mproperty) /* add on <var11:HashSet[MMethod]>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_classes]))(self) /* live_classes on <self:RapidTypeAnalysis>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:HashSet[MClass]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_c = var15;
var16 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__intro]))(var_c) /* intro on <var_c:MClass>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MClassDef__bound_mtype]))(var16) /* bound_mtype on <var16:MClassDef>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__try_send]))(self, var17, var_mproperty) /* try_send on <self:RapidTypeAnalysis>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_send for (self: Object, MType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_send(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_super_send for (self: RapidTypeAnalysis, MClassType, MMethodDef) */
void rapid_type_analysis__RapidTypeAnalysis__try_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClass */;
val* var1 /* : MClassDef */;
val* var2 /* : MClassType */;
val* var3 /* : MModule */;
val* var4 /* : Set[MClassDef] */;
val* var5 /* : MClassDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MModule */;
val* var9 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mpropdef = p1;
var = ((val* (*)(val*))(var_recv->class->vft[COLOR_model__MClassType__mclass]))(var_recv) /* mclass on <var_recv:MClassType>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClass__intro]))(var) /* intro on <var:MClass>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:MClassDef>*/;
var_recv = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var4 = ((val* (*)(val*, val*))(var_recv->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_recv, var3) /* collect_mclassdefs on <var_recv:MClassType>*/;
var5 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__Collection__has]))(var4, var5) /* has on <var4:Set[MClassDef]>*/;
var7 = !var6;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var9 = ((val* (*)(val*, val*, val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__lookup_next_definition]))(var_mpropdef, var8, var_recv) /* lookup_next_definition on <var_mpropdef:MMethodDef>*/;
var_d = var9;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_call]))(self, var_d) /* add_call on <self:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_super_send for (self: Object, MClassType, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_super_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__try_super_send(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: RapidTypeAnalysis, MType, MMethodDef) */
void rapid_type_analysis__RapidTypeAnalysis__add_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : HashSet[MMethodDef] */;
short int var1 /* : Bool */;
val* var2 /* : HashSet[MMethodDef] */;
val* var3 /* : HashSet[MClassType] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_t /* var t: MClassType */;
var_recv = p0;
var_mpropdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(self) /* live_super_sends on <self:RapidTypeAnalysis>*/;
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__Collection__has]))(var, var_mpropdef) /* has on <var:HashSet[MMethodDef]>*/;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(self) /* live_super_sends on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_mpropdef) /* add on <var2:HashSet[MMethodDef]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:HashSet[MClassType]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_t = var6;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__try_super_send]))(self, var_t, var_mpropdef) /* try_super_send on <self:RapidTypeAnalysis>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: Object, MType, MMethodDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_super_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__add_super_send(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: RapidTypeAnalysis, ModelBuilder, MModule) */
void rapid_type_analysis__RapidTypeAnalysis__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmodelbuilder].val = p0; /* @modelbuilder on <self:RapidTypeAnalysis> */
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmainmodule].val = p1; /* @mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: Object, ModelBuilder, MModule) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__init(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeAnalysis__init(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis for (self: RapidTypeVisitor): RapidTypeAnalysis */
val* rapid_type_analysis__RapidTypeVisitor__analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64danalysis].val; /* @analysis on <self:RapidTypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @analysis");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 331);
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
var1 = rapid_type_analysis__RapidTypeVisitor__analysis(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis= for (self: RapidTypeVisitor, RapidTypeAnalysis) */
void rapid_type_analysis__RapidTypeVisitor__analysis_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64danalysis].val = p0; /* @analysis on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis= for (self: Object, RapidTypeAnalysis) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__analysis_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver for (self: RapidTypeVisitor): MClassType */
val* rapid_type_analysis__RapidTypeVisitor__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dreceiver].val; /* @receiver on <self:RapidTypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @receiver");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 332);
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
var1 = rapid_type_analysis__RapidTypeVisitor__receiver(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver= for (self: RapidTypeVisitor, MClassType) */
void rapid_type_analysis__RapidTypeVisitor__receiver_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dreceiver].val = p0; /* @receiver on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver= for (self: Object, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__receiver_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef for (self: RapidTypeVisitor): MPropDef */
val* rapid_type_analysis__RapidTypeVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dmpropdef].val; /* @mpropdef on <self:RapidTypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 333);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = rapid_type_analysis__RapidTypeVisitor__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef= for (self: RapidTypeVisitor, MPropDef) */
void rapid_type_analysis__RapidTypeVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dmpropdef].val = p0; /* @mpropdef on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef_61d(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#init for (self: RapidTypeVisitor, RapidTypeAnalysis, MClassType, MPropDef) */
void rapid_type_analysis__RapidTypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
val* var_analysis /* var analysis: RapidTypeAnalysis */;
val* var_receiver /* var receiver: MClassType */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
var_analysis = p0;
var_receiver = p1;
var_mpropdef = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:RapidTypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(self, var_analysis) /* analysis= on <self:RapidTypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(self, var_receiver) /* receiver= on <self:RapidTypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(self, var_mpropdef) /* mpropdef= on <self:RapidTypeVisitor>*/;
var = ((short int (*)(val*))(var_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_receiver) /* need_anchor on <var_receiver:MClassType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 340);
show_backtrace(1);
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#init for (self: Object, RapidTypeAnalysis, MClassType, MPropDef) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
rapid_type_analysis__RapidTypeVisitor__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: RapidTypeVisitor, ANode) */
void rapid_type_analysis__RapidTypeVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
var_n = p0;
((void (*)(val*, val*))(var_n->class->vft[COLOR_rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self) /* accept_rapid_type_visitor on <var_n:ANode>*/;
/* <var_n:ANode> isa AExpr */
cltype = type_parser_nodes__AExpr.color;
idtype = type_parser_nodes__AExpr.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(var_n->class->vft[COLOR_typing__AExpr__implicit_cast_to]))(var_n) /* implicit_cast_to on <var_n:ANode(AExpr)>*/;
var_implicit_cast_to = var1;
var2 = NULL;
if (var_implicit_cast_to == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_cast_type]))(self, var_implicit_cast_to) /* add_cast_type on <self:RapidTypeVisitor>*/;
} else {
}
} else {
}
/* <var_n:ANode> isa AAnnotations */
cltype5 = type_parser_nodes__AAnnotations.color;
idtype6 = type_parser_nodes__AAnnotations.id;
if(cltype5 >= var_n->type->table_size) {
var4 = 0;
} else {
var4 = var_n->type->type_table[cltype5] == idtype6;
}
var7 = !var4;
if (var7){
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: Object, ANode) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__visit(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__visit(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#cleanup_type for (self: RapidTypeVisitor, MType): nullable MClassType */
val* rapid_type_analysis__RapidTypeVisitor__cleanup_type(val* self, val* p0) {
val* var /* : nullable MClassType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RapidTypeAnalysis */;
val* var2 /* : MModule */;
val* var3 /* : MClassType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : MType */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_mtype = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(var1) /* mainmodule on <var1:RapidTypeAnalysis>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(self) /* receiver on <self:RapidTypeVisitor>*/;
var4 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var2, var3) /* anchor_to on <var_mtype:MType>*/;
var_mtype = var4;
/* <var_mtype:MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var5 = 0;
} else {
var5 = var_mtype->type->type_table[cltype] == idtype;
}
if (var5){
var6 = NULL;
var = var6;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MNullableType */
cltype8 = type_model__MNullableType.color;
idtype9 = type_model__MNullableType.id;
if(cltype8 >= var_mtype->type->table_size) {
var7 = 0;
} else {
var7 = var_mtype->type->type_table[cltype8] == idtype9;
}
if (var7){
var10 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var10;
} else {
}
/* <var_mtype:MType> isa MClassType */
cltype12 = type_model__MClassType.color;
idtype13 = type_model__MClassType.id;
if(cltype12 >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype12] == idtype13;
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 362);
show_backtrace(1);
}
var14 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType(MClassType)>*/;
var15 = !var14;
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 363);
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
val* var2 /* : MModule */;
val* var3 /* : MClass */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(var1) /* mainmodule on <var1:RapidTypeAnalysis>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_model__MModule__get_primitive_class]))(var2, var_name) /* get_primitive_class on <var2:MModule>*/;
var = var3;
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
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : ModelBuilder */;
val* var6 /* : nullable ANode */;
val* var7 /* : MClass */;
val* var8 /* : RapidTypeAnalysis */;
val* var9 /* : MModule */;
val* var10 /* : MMethod */;
var_recv = p0;
var_name = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__cleanup_type]))(self, var_recv) /* cleanup_type on <self:RapidTypeVisitor>*/;
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 375);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(var4) /* modelbuilder on <var4:RapidTypeAnalysis>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:RapidTypeVisitor>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 376);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:nullable MClassType(MClassType)>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(var8) /* mainmodule on <var8:RapidTypeAnalysis>*/;
var10 = ((val* (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_modelbuilder__ModelBuilder__force_get_primitive_method]))(var5, var6, var_name, var7, var9) /* force_get_primitive_method on <var5:ModelBuilder>*/;
var = var10;
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
val* var1 /* : MClassType */;
var_mtype = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(self) /* receiver on <self:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_new]))(var, var1, var_mtype) /* add_new on <var:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_type for (self: Object, MClassType) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_type(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__add_type(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send for (self: RapidTypeVisitor, MType, MMethod) */
void rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(val* self, val* p0, val* p1) {
val* var_mtype /* var mtype: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : RapidTypeAnalysis */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_mtype = p0;
var_mproperty = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 381);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__try_send]))(var, var_mtype, var_mproperty) /* try_send on <var:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send for (self: Object, MType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_send for (self: RapidTypeVisitor, MType, MMethod) */
void rapid_type_analysis__RapidTypeVisitor__add_send(val* self, val* p0, val* p1) {
val* var_mtype /* var mtype: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : RapidTypeAnalysis */;
var_mtype = p0;
var_mproperty = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_send]))(var, var_mtype, var_mproperty) /* add_send on <var:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_send for (self: Object, MType, MMethod) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_send(val* self, val* p0, val* p1) {
rapid_type_analysis__RapidTypeVisitor__add_send(self, p0, p1);
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_cast_type for (self: RapidTypeVisitor, MType) */
void rapid_type_analysis__RapidTypeVisitor__add_cast_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : RapidTypeAnalysis */;
var_mtype = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_cast]))(var, var_mtype) /* add_cast on <var:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_cast_type for (self: Object, MType) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_cast_type(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__add_cast_type(self, p0);
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
rapid_type_analysis__ANode__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AIntExpr#accept_rapid_type_visitor for (self: AIntExpr, RapidTypeVisitor) */
void rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIntExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 399);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var) /* add_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AIntExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor for (self: AFloatExpr, RapidTypeVisitor) */
void rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AFloatExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 406);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var) /* add_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ACharExpr#accept_rapid_type_visitor for (self: ACharExpr, RapidTypeVisitor) */
void rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACharExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 413);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var) /* add_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ACharExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor for (self: AArrayExpr, RapidTypeVisitor) */
void rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MModule */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : MClass */;
val* var9 /* : Array[MType] */;
val* var10 /* : nullable Object */;
val* var11 /* : Array[MType] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[MType] */;
val* var14 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var15 /* : nullable MClassType */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AArrayExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 420);
show_backtrace(1);
}
var_mtype = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_mtype) /* add_type on <var_v:RapidTypeVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(var_v) /* analysis on <var_v:RapidTypeVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(var2) /* mainmodule on <var2:RapidTypeAnalysis>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "NativeArray";
var6 = 11;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MModule__get_primitive_class]))(var3, var4) /* get_primitive_class on <var3:MModule>*/;
var9 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__first]))(var9) /* first on <var9:Array[MType]>*/;
var11 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var11 = array_instance Array[MType] */
var12 = 1;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var10;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[MType]>*/;
}
var14 = ((val* (*)(val*, val*))(var8->class->vft[COLOR_model__MClass__get_mtype]))(var8, var11) /* get_mtype on <var8:MClass>*/;
var_native = var14;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_native) /* add_type on <var_v:RapidTypeVisitor>*/;
var15 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__cleanup_type]))(var_v, var_mtype) /* cleanup_type on <var_v:RapidTypeVisitor>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 424);
show_backtrace(1);
}
var_mtype = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "with_native";
var19 = 11;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_mtype, var17) /* get_method on <var_v:RapidTypeVisitor>*/;
var_prop = var21;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_mtype, var_prop) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: AStringFormExpr, RapidTypeVisitor) */
void rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : MClass */;
val* var5 /* : MClassType */;
val* var_native /* var native: MClassType */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MMethod */;
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
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_class]))(var_v, var) /* get_class on <var_v:RapidTypeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MClass__mclass_type]))(var4) /* mclass_type on <var4:MClass>*/;
var_native = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_native) /* add_type on <var_v:RapidTypeVisitor>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "to_s_with_length";
var9 = 16;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_native, var7) /* get_method on <var_v:RapidTypeVisitor>*/;
var_prop = var11;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_native, var_prop) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: ASuperstringExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : MClass */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var12 /* : Array[MClassType] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[MClassType] */;
val* var15 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : MClass */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : MClass */;
val* var28 /* : MClassType */;
val* var29 /* : Array[MClassType] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[MClassType] */;
val* var32 /* : MClassType */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : MMethod */;
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
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_class]))(var_v, var) /* get_class on <var_v:RapidTypeVisitor>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "Object";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_class]))(var_v, var6) /* get_class on <var_v:RapidTypeVisitor>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClass__mclass_type]))(var10) /* mclass_type on <var10:MClass>*/;
var12 = NEW_array__Array(&type_array__Arraymodel__MClassType);
{ /* var12 = array_instance Array[MClassType] */
var13 = 1;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraymodel__MClassType);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var11;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[MClassType]>*/;
}
var15 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_model__MClass__get_mtype]))(var4, var12) /* get_mtype on <var4:MClass>*/;
var_arraytype = var15;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_arraytype) /* add_type on <var_v:RapidTypeVisitor>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "NativeArray";
var19 = 11;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_class]))(var_v, var17) /* get_class on <var_v:RapidTypeVisitor>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Object";
var25 = 6;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_class]))(var_v, var23) /* get_class on <var_v:RapidTypeVisitor>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_model__MClass__mclass_type]))(var27) /* mclass_type on <var27:MClass>*/;
var29 = NEW_array__Array(&type_array__Arraymodel__MClassType);
{ /* var29 = array_instance Array[MClassType] */
var30 = 1;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraymodel__MClassType);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var28;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[MClassType]>*/;
}
var32 = ((val* (*)(val*, val*))(var21->class->vft[COLOR_model__MClass__get_mtype]))(var21, var29) /* get_mtype on <var21:MClass>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var32) /* add_type on <var_v:RapidTypeVisitor>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "join";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_arraytype, var34) /* get_method on <var_v:RapidTypeVisitor>*/;
var_prop = var38;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_arraytype, var_prop) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "with_native";
var42 = 11;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_arraytype, var40) /* get_method on <var_v:RapidTypeVisitor>*/;
var_prop2 = var44;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_arraytype, var_prop2) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor for (self: ACrangeExpr, RapidTypeVisitor) */
void rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACrangeExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 456);
show_backtrace(1);
}
var_mtype = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_mtype) /* add_type on <var_v:RapidTypeVisitor>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "init";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_mtype, var2) /* get_method on <var_v:RapidTypeVisitor>*/;
var_prop = var6;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_mtype, var_prop) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor for (self: AOrangeExpr, RapidTypeVisitor) */
void rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrangeExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 466);
show_backtrace(1);
}
var_mtype = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_mtype) /* add_type on <var_v:RapidTypeVisitor>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "without_last";
var4 = 12;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_mtype, var2) /* get_method on <var_v:RapidTypeVisitor>*/;
var_prop = var6;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_mtype, var_prop) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor for (self: ATrueExpr, RapidTypeVisitor) */
void rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ATrueExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 476);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var) /* add_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor for (self: AFalseExpr, RapidTypeVisitor) */
void rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AFalseExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 483);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var) /* add_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor for (self: AIsaExpr, RapidTypeVisitor) */
void rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AIsaExpr__cast_type]))(self) /* cast_type on <self:AIsaExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 490);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_cast_type]))(var_v, var) /* add_cast_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor for (self: AAsCastExpr, RapidTypeVisitor) */
void rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AAsCastExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 497);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_cast_type]))(var_v, var) /* add_cast_type on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ASendExpr#accept_rapid_type_visitor for (self: ASendExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__mproperty]))(self) /* mproperty on <self:ASendExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 504);
show_backtrace(1);
}
var_mproperty = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExpr__mtype]))(var1) /* mtype on <var1:AExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 505);
show_backtrace(1);
}
var_recvtype = var2;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_recvtype, var_mproperty) /* add_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ASendExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor for (self: ASendReassignFormExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var1 /* : nullable MMethodDef */;
val* var2 /* : MProperty */;
val* var3 /* : nullable MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var4 /* : nullable MMethod */;
val* var_write_mproperty /* var write_mproperty: MMethod */;
val* var5 /* : AExpr */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : AExpr */;
val* var10 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__read_type]))(self) /* read_type on <self:ASendReassignFormExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 514);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_property]))(self) /* reassign_property on <self:ASendReassignFormExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 514);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MPropDef__mproperty]))(var1) /* mproperty on <var1:nullable MMethodDef>*/;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var, var2) /* add_send on <var_v:RapidTypeVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__mproperty]))(self) /* mproperty on <self:ASendReassignFormExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 515);
show_backtrace(1);
}
var_mproperty = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_mproperty]))(self) /* write_mproperty on <self:ASendReassignFormExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 516);
show_backtrace(1);
}
var_write_mproperty = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
/* <var5:AExpr> isa ASelfExpr */
cltype = type_parser_nodes__ASelfExpr.color;
idtype = type_parser_nodes__ASelfExpr.id;
if(cltype >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype] == idtype;
}
if (var6){
var7 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var7, var_mproperty) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var8, var_write_mproperty) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_typing__AExpr__mtype]))(var9) /* mtype on <var9:AExpr>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 521);
show_backtrace(1);
}
var_recvtype = var10;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_recvtype, var_mproperty) /* add_send on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_recvtype, var_write_mproperty) /* add_send on <var_v:RapidTypeVisitor>*/;
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor for (self: AVarReassignExpr, RapidTypeVisitor) */
void rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var1 /* : nullable MMethodDef */;
val* var2 /* : MProperty */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__read_type]))(self) /* read_type on <self:AVarReassignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 531);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_property]))(self) /* reassign_property on <self:AVarReassignExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 531);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MPropDef__mproperty]))(var1) /* mproperty on <var1:nullable MMethodDef>*/;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var, var2) /* add_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor for (self: AAttrReassignExpr, RapidTypeVisitor) */
void rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var1 /* : nullable MMethodDef */;
val* var2 /* : MProperty */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__read_type]))(self) /* read_type on <self:AAttrReassignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 538);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_property]))(self) /* reassign_property on <self:AAttrReassignExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 538);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MPropDef__mproperty]))(var1) /* mproperty on <var1:nullable MMethodDef>*/;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var, var2) /* add_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor for (self: ASuperExpr, RapidTypeVisitor) */
void rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MMethod */;
val* var_mproperty /* var mproperty: nullable MMethod */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MClassType */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : MClassType */;
val* var6 /* : MPropDef */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASuperExpr__mproperty]))(self) /* mproperty on <self:ASuperExpr>*/;
var_mproperty = var;
var1 = NULL;
if (var_mproperty == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var3, var_mproperty) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(var_v) /* analysis on <var_v:RapidTypeVisitor>*/;
var5 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
var6 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:RapidTypeVisitor>*/;
/* <var6:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype] == idtype;
}
if (!var7) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 551);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_super_send]))(var4, var5, var6) /* add_super_send on <var4:RapidTypeAnalysis>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#AForExpr#accept_rapid_type_visitor for (self: AForExpr, RapidTypeVisitor) */
void rapid_type_analysis__AForExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
val* var2 /* : nullable MClassType */;
val* var_colltype /* var colltype: MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MMethod */;
val* var_itmeth /* var itmeth: MMethod */;
val* var8 /* : MPropDef */;
val* var9 /* : nullable MSignature */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var12 /* : MClass */;
val* var13 /* : MClassDef */;
val* var14 /* : MClassType */;
val* var_iteratortype /* var iteratortype: MClassType */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MClass */;
val* var21 /* : MClassType */;
val* var_objtype /* var objtype: MClassType */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : MMethod */;
val* var28 /* : nullable Array[Variable] */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : MMethod */;
val* var40 /* : nullable Array[Variable] */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : MMethod */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : MMethod */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : MMethod */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_typing__AExpr__mtype]))(var) /* mtype on <var:AExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 558);
show_backtrace(1);
}
var_recvtype = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__coltype]))(self) /* coltype on <self:AForExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 559);
show_backtrace(1);
}
var_colltype = var2;
if (varonce) {
var3 = varonce;
} else {
var4 = "iterator";
var5 = 8;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_colltype, var3) /* get_method on <var_v:RapidTypeVisitor>*/;
var_itmeth = var7;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_recvtype, var_itmeth) /* add_send on <var_v:RapidTypeVisitor>*/;
var8 = ((val* (*)(val*))(var_itmeth->class->vft[COLOR_model__MProperty__intro]))(var_itmeth) /* intro on <var_itmeth:MMethod>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MMethodDef__msignature]))(var8) /* msignature on <var8:MPropDef(MMethodDef)>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 562);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MSignature__return_mtype]))(var9) /* return_mtype on <var9:nullable MSignature>*/;
}
/* <var10:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var10 == NULL) {
var11 = 0;
} else {
if(cltype >= var10->type->table_size) {
var11 = 0;
} else {
var11 = var10->type->type_table[cltype] == idtype;
}
}
if (!var11) {
var_class_name = var10 == NULL ? "null" : var10->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 562);
show_backtrace(1);
}
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClassType__mclass]))(var10) /* mclass on <var10:nullable MType(MClassType)>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClass__intro]))(var12) /* intro on <var12:MClass>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClassDef__bound_mtype]))(var13) /* bound_mtype on <var13:MClassDef>*/;
var_iteratortype = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Object";
var18 = 6;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_class]))(var_v, var16) /* get_class on <var_v:RapidTypeVisitor>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MClass__mclass_type]))(var20) /* mclass_type on <var20:MClass>*/;
var_objtype = var21;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "is_ok";
var25 = 5;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_iteratortype, var23) /* get_method on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_objtype, var27) /* add_send on <var_v:RapidTypeVisitor>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 565);
show_backtrace(1);
} else {
var29 = ((long (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__length]))(var28) /* length on <var28:nullable Array[Variable]>*/;
}
var30 = 1;
{ /* Inline kernel#Int#== (var29,var30) */
var33 = var29 == var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
if (varonce34) {
var35 = varonce34;
} else {
var36 = "item";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_iteratortype, var35) /* get_method on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_objtype, var39) /* add_send on <var_v:RapidTypeVisitor>*/;
} else {
var40 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var40 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 567);
show_backtrace(1);
} else {
var41 = ((long (*)(val*))(var40->class->vft[COLOR_abstract_collection__Collection__length]))(var40) /* length on <var40:nullable Array[Variable]>*/;
}
var42 = 2;
{ /* Inline kernel#Int#== (var41,var42) */
var45 = var41 == var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (var43){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "key";
var49 = 3;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_iteratortype, var47) /* get_method on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_objtype, var51) /* add_send on <var_v:RapidTypeVisitor>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "item";
var55 = 4;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_iteratortype, var53) /* get_method on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_objtype, var57) /* add_send on <var_v:RapidTypeVisitor>*/;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 571);
show_backtrace(1);
}
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "next";
var61 = 4;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__get_method]))(var_v, var_iteratortype, var59) /* get_method on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var_objtype, var63) /* add_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#AForExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__AForExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__AForExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: ANewExpr, RapidTypeVisitor) */
void rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var2 /* : nullable MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ANewExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 580);
show_backtrace(1);
}
var_mtype = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_mtype) /* add_type on <var_v:RapidTypeVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ANewExpr__mproperty]))(self) /* mproperty on <self:ANewExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 582);
show_backtrace(1);
}
var_mproperty = var2;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_mtype, var_mproperty) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
