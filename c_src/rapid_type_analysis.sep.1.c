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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 46);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 49);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 53);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 58);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 62);
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
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* rapid_type_analysis__RapidTypeAnalysis__live_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val; /* @live_cast_types on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_cast_types");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 65);
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
var1 = rapid_type_analysis__RapidTypeAnalysis__live_cast_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types= for (self: RapidTypeAnalysis, HashSet[MType]) */
void rapid_type_analysis__RapidTypeAnalysis__live_cast_types_61d(val* self, val* p0) {
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val = p0; /* @live_cast_types on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types= for (self: Object, HashSet[MType]) */
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 68);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 72);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 75);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 78);
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
/* method rapid_type_analysis#RapidTypeAnalysis#live_types_to_csv for (self: RapidTypeAnalysis): CSVDocument */
val* rapid_type_analysis__RapidTypeAnalysis__live_types_to_csv(val* self) {
val* var /* : CSVDocument */;
val* var1 /* : HashSet[MType] */;
val* var_typeset /* var typeset: HashSet[MType] */;
val* var2 /* : HashSet[MClassType] */;
val* var3 /* : HashSet[MClassType] */;
val* var4 /* : HashSet[MType] */;
val* var5 /* : HashSet[MType] */;
val* var6 /* : Array[nullable Object] */;
val* var_types /* var types: Array[MType] */;
val* var7 /* : CachedAlphaComparator */;
val* var8 /* : CSVDocument */;
val* var_res /* var res: CSVDocument */;
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
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[String] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[String] */;
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var_reso /* var reso: nullable Object */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
short int var47 /* : Bool */;
val* var48 /* : HashSet[MClassType] */;
short int var49 /* : Bool */;
val* var50 /* : HashSet[MClassType] */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var_live /* var live: nullable Object */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
short int var62 /* : Bool */;
val* var63 /* : HashSet[MType] */;
short int var64 /* : Bool */;
val* var65 /* : HashSet[MType] */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var_cast /* var cast: nullable Object */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MType]>*/;
var_typeset = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_typeset->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_typeset, var2) /* add_all on <var_typeset:HashSet[MType]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_types]))(self) /* live_open_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_typeset->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_typeset, var3) /* add_all on <var_typeset:HashSet[MType]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(self) /* live_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_typeset->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_typeset, var4) /* add_all on <var_typeset:HashSet[MType]>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types]))(self) /* live_open_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_typeset->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_typeset, var5) /* add_all on <var_typeset:HashSet[MType]>*/;
var6 = ((val* (*)(val*))(var_typeset->class->vft[COLOR_array__Collection__to_a]))(var_typeset) /* to_a on <var_typeset:HashSet[MType]>*/;
var_types = var6;
var7 = NEW_string__CachedAlphaComparator(&type_string__CachedAlphaComparator);
((void (*)(val*))(var7->class->vft[COLOR_string__CachedAlphaComparator__init]))(var7) /* init on <var7:CachedAlphaComparator>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_sorter__AbstractSorter__sort]))(var7, var_types) /* sort on <var7:CachedAlphaComparator>*/;
var8 = NEW_csv__CSVDocument(&type_csv__CSVDocument);
((void (*)(val*))(var8->class->vft[COLOR_csv__CSVDocument__init]))(var8) /* init on <var8:CSVDocument>*/;
var_res = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "Type";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "Resolution";
var16 = 10;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "Liveness";
var21 = 8;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Cast-liveness";
var26 = 13;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var28 = array_instance Array[String] */
var29 = 4;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var14;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var19;
((struct instance_array__NativeArray*)var30)->values[3] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[String]>*/;
}
((void (*)(val*, val*))(var_res->class->vft[COLOR_csv__CSVDocument__header_61d]))(var_res, var28) /* header= on <var_res:CSVDocument>*/;
var31 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MType]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var_t = var33;
var34 = ((short int (*)(val*))(var_t->class->vft[COLOR_model__MType__need_anchor]))(var_t) /* need_anchor on <var_t:MType>*/;
if (var34){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "OPEN ";
var38 = 5;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var_reso = var36;
} else {
if (varonce40) {
var41 = varonce40;
} else {
var42 = "CLOSED";
var43 = 6;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var_reso = var41;
}
/* <var_t:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_t->type->table_size) {
var46 = 0;
} else {
var46 = var_t->type->type_table[cltype] == idtype;
}
if (!var46) {
var45 = 0;
} else {
var48 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var49 = ((short int (*)(val*, val*))(var48->class->vft[COLOR_abstract_collection__Collection__has]))(var48, var_t) /* has on <var48:HashSet[MClassType]>*/;
if (var49) {
var47 = 1;
} else {
var50 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_types]))(self) /* live_open_types on <self:RapidTypeAnalysis>*/;
var51 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__Collection__has]))(var50, var_t) /* has on <var50:HashSet[MClassType]>*/;
var47 = var51;
}
var45 = var47;
}
if (var45){
if (varonce52) {
var53 = varonce52;
} else {
var54 = "LIVE";
var55 = 4;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var_live = var53;
} else {
if (varonce57) {
var58 = varonce57;
} else {
var59 = "DEAD";
var60 = 4;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var_live = var58;
}
var63 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(self) /* live_cast_types on <self:RapidTypeAnalysis>*/;
var64 = ((short int (*)(val*, val*))(var63->class->vft[COLOR_abstract_collection__Collection__has]))(var63, var_t) /* has on <var63:HashSet[MType]>*/;
if (var64) {
var62 = 1;
} else {
var65 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types]))(self) /* live_open_cast_types on <self:RapidTypeAnalysis>*/;
var66 = ((short int (*)(val*, val*))(var65->class->vft[COLOR_abstract_collection__Collection__has]))(var65, var_t) /* has on <var65:HashSet[MType]>*/;
var62 = var66;
}
if (var62){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "CAST LIVE";
var70 = 9;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var_cast = var68;
} else {
if (varonce72) {
var73 = varonce72;
} else {
var74 = "CAST DEAD";
var75 = 9;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var_cast = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 4;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var_t;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var_reso;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var_live;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var_cast;
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
((void (*)(val*, val*))(var_res->class->vft[COLOR_csv__CSVDocument__add_line]))(var_res, var77) /* add_line on <var_res:CSVDocument>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types_to_csv for (self: Object): CSVDocument */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types_to_csv(val* self) {
val* var /* : CSVDocument */;
val* var1 /* : CSVDocument */;
var1 = rapid_type_analysis__RapidTypeAnalysis__live_types_to_csv(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods_to_tree for (self: RapidTypeAnalysis): OrderedTree[Object] */
val* rapid_type_analysis__RapidTypeAnalysis__live_methods_to_tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
val* var_tree /* var tree: OrderedTree[Object] */;
val* var2 /* : HashSet[MMethod] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_x /* var x: MMethod */;
val* var6 /* : String */;
val* var_xn /* var xn: String */;
val* var7 /* : null */;
val* var8 /* : Array[MPropDef] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_z /* var z: MMethodDef */;
val* var12 /* : String */;
val* var_zn /* var zn: String */;
val* var13 /* : HashSet[MMethodDef] */;
short int var14 /* : Bool */;
val* var15 /* : HashSet[MMethodDef] */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : HashSet[MMethodDef] */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var31 /* : AbstractSorter[Object] */;
var1 = NEW_ordered_tree__OrderedTree(&type_ordered_tree__OrderedTreekernel__Object);
((void (*)(val*))(var1->class->vft[COLOR_ordered_tree__OrderedTree__init]))(var1) /* init on <var1:OrderedTree[Object]>*/;
var_tree = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methods]))(self) /* live_methods on <self:RapidTypeAnalysis>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:HashSet[MMethod]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_x = var5;
var6 = ((val* (*)(val*))(var_x->class->vft[COLOR_model__MProperty__full_name]))(var_x) /* full_name on <var_x:MMethod>*/;
var_xn = var6;
var7 = NULL;
((void (*)(val*, val*, val*))(var_tree->class->vft[COLOR_ordered_tree__OrderedTree__add]))(var_tree, var7, var_xn) /* add on <var_tree:OrderedTree[Object]>*/;
var8 = ((val* (*)(val*))(var_x->class->vft[COLOR_model__MProperty__mpropdefs]))(var_x) /* mpropdefs on <var_x:MMethod>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Array[MPropDef](Array[MMethodDef])>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_z = var11;
var12 = ((val* (*)(val*))(var_z->class->vft[COLOR_string__Object__to_s]))(var_z) /* to_s on <var_z:MMethodDef>*/;
var_zn = var12;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs]))(self) /* live_methoddefs on <self:RapidTypeAnalysis>*/;
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__Collection__has]))(var13, var_z) /* has on <var13:HashSet[MMethodDef]>*/;
if (var14){
((void (*)(val*, val*, val*))(var_tree->class->vft[COLOR_ordered_tree__OrderedTree__add]))(var_tree, var_xn, var_zn) /* add on <var_tree:OrderedTree[Object]>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(self) /* live_super_sends on <self:RapidTypeAnalysis>*/;
var16 = ((short int (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__Collection__has]))(var15, var_z) /* has on <var15:HashSet[MMethodDef]>*/;
if (var16){
if (varonce) {
var17 = varonce;
} else {
var18 = "(super)";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
var21 = ((val* (*)(val*, val*))(var_zn->class->vft[COLOR_string__String___43d]))(var_zn, var17) /* + on <var_zn:String>*/;
((void (*)(val*, val*, val*))(var_tree->class->vft[COLOR_ordered_tree__OrderedTree__add]))(var_tree, var_zn, var21) /* add on <var_tree:OrderedTree[Object]>*/;
} else {
}
} else {
var22 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_super_sends]))(self) /* live_super_sends on <self:RapidTypeAnalysis>*/;
var23 = ((short int (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__Collection__has]))(var22, var_z) /* has on <var22:HashSet[MMethodDef]>*/;
if (var23){
if (varonce24) {
var25 = varonce24;
} else {
var26 = "(super)";
var27 = 7;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = ((val* (*)(val*, val*))(var_zn->class->vft[COLOR_string__String___43d]))(var_zn, var25) /* + on <var_zn:String>*/;
((void (*)(val*, val*, val*))(var_tree->class->vft[COLOR_ordered_tree__OrderedTree__add]))(var_tree, var_xn, var29) /* add on <var_tree:OrderedTree[Object]>*/;
} else {
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label30: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label30: (void)0;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__alpha_comparator]))(self) /* alpha_comparator on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_tree->class->vft[COLOR_ordered_tree__OrderedTree__sort_with]))(var_tree, var31) /* sort_with on <var_tree:OrderedTree[Object]>*/;
var = var_tree;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods_to_tree for (self: Object): OrderedTree[Object] */
val* VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods_to_tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
var1 = rapid_type_analysis__RapidTypeAnalysis__live_methods_to_tree(self);
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* rapid_type_analysis__RapidTypeAnalysis__totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtotry_methods].val; /* @totry_methods on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @totry_methods");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 132);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 135);
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
/* method rapid_type_analysis#RapidTypeAnalysis#force_alive for (self: RapidTypeAnalysis, String) */
void rapid_type_analysis__RapidTypeAnalysis__force_alive(val* self, val* p0) {
val* var_classname /* var classname: String */;
val* var /* : ModelBuilder */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var8 /* : MClassType */;
val* var9 /* : MClassType */;
var_classname = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(var) /* model on <var:ModelBuilder>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__Model__get_mclasses_by_name]))(var1, var_classname) /* get_mclasses_by_name on <var1:Model>*/;
var_classes = var2;
var3 = NULL;
if (var_classes == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((val* (*)(val*))(var_classes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_classes) /* iterator on <var_classes:nullable Array[MClass](Array[MClass])>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_c = var7;
var8 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
var9 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_new]))(self, var8, var9) /* add_new on <self:RapidTypeAnalysis>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#force_alive for (self: Object, String) */
void VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__force_alive(val* self, val* p0) {
rapid_type_analysis__RapidTypeAnalysis__force_alive(self, p0);
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
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : List[MMethodDef] */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : List[MMethodDef] */;
val* var47 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var48 /* : RapidTypeVisitor */;
val* var49 /* : MClassDef */;
val* var50 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
val* var51 /* : nullable MSignature */;
long var52 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var60 /* : Bool */;
val* var61 /* : ModelBuilder */;
val* var62 /* : HashMap[MPropDef, APropdef] */;
val* var63 /* : nullable Object */;
val* var_node /* var node: APropdef */;
val* var64 /* : nullable MSignature */;
val* var65 /* : Array[MParameter] */;
val* var66 /* : nullable Object */;
val* var67 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var68 /* : MModule */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : MClass */;
val* var75 /* : Array[MType] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[MType] */;
val* var78 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var79 /* : MModule */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : MClass */;
val* var86 /* : Array[MType] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[MType] */;
val* var89 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var90 /* : ModelBuilder */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var96 /* : MClass */;
val* var97 /* : MModule */;
val* var98 /* : MMethod */;
val* var99 /* : Range[Int] */;
long var100 /* : Int */;
val* var101 /* : nullable MSignature */;
long var102 /* : Int */;
val* var103 /* : Discrete */;
val* var104 /* : Discrete */;
val* var105 /* : Iterator[nullable Object] */;
short int var106 /* : Bool */;
val* var107 /* : nullable Object */;
long var_i /* var i: Int */;
long var108 /* : Int */;
val* var109 /* : MProperty */;
val* var110 /* : MPropDef */;
val* var111 /* : nullable MSignature */;
val* var112 /* : Array[MParameter] */;
val* var113 /* : nullable Object */;
val* var114 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : nullable MSignature */;
val* var118 /* : Array[MParameter] */;
val* var119 /* : nullable Object */;
val* var120 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var121 /* : ModelBuilder */;
val* var122 /* : HashMap[MPropDef, APropdef] */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : MProperty */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
short int var132 /* : Bool */;
val* var133 /* : ModelBuilder */;
val* var134 /* : HashMap[MClassDef, AClassdef] */;
val* var135 /* : MClassDef */;
val* var136 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var137 /* : nullable Collection[MMethod] */;
val* var_super_inits /* var super_inits: nullable Collection[MMethod] */;
val* var138 /* : null */;
short int var139 /* : Bool */;
val* var140 /* : Iterator[nullable Object] */;
short int var141 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_su /* var su: MMethod */;
val* var143 /* : MClassType */;
val* var146 /* : ModelBuilder */;
val* var147 /* : HashMap[MPropDef, APropdef] */;
val* var148 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
val* var152 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var153 /* : null */;
short int var154 /* : Bool */;
val* var155 /* : Iterator[nullable Object] */;
short int var156 /* : Bool */;
val* var157 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
short int var_ /* var : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
short int var_167 /* var : Bool */;
val* var168 /* : nullable TString */;
val* var169 /* : null */;
short int var170 /* : Bool */;
val* var171 /* : nullable MSignature */;
val* var172 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var176 /* : null */;
short int var177 /* : Bool */;
short int var_178 /* var : Bool */;
short int var179 /* : Bool */;
int cltype180;
int idtype181;
short int var_182 /* var : Bool */;
val* var183 /* : MClass */;
val* var184 /* : MClassKind */;
val* var185 /* : MClassKind */;
short int var186 /* : Bool */;
short int var_187 /* var : Bool */;
val* var188 /* : MClass */;
val* var189 /* : MClassKind */;
val* var190 /* : MClassKind */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
val* var195 /* : nullable ANode */;
short int var196 /* : Bool */;
int cltype197;
int idtype198;
const char* var_class_name199;
val* var_nclassdef200 /* var nclassdef: AClassdef */;
short int var201 /* : Bool */;
int cltype202;
int idtype203;
val* var204 /* : MClassType */;
val* var205 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var206 /* : HashSet[MClassType] */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
val* var209 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var210 /* : HashSet[MClassType] */;
val* var211 /* : Iterator[nullable Object] */;
short int var212 /* : Bool */;
val* var213 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var214 /* : MModule */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
val* var218 /* : MModule */;
val* var219 /* : MType */;
val* var_rt /* var rt: MClassType */;
val* var220 /* : HashSet[MClassType] */;
short int var221 /* : Bool */;
val* var222 /* : HashSet[MClassType] */;
val* var224 /* : HashSet[MType] */;
val* var225 /* : Iterator[nullable Object] */;
short int var226 /* : Bool */;
val* var227 /* : nullable Object */;
val* var_ot228 /* var ot: MType */;
val* var229 /* : HashSet[MClassType] */;
val* var230 /* : Iterator[nullable Object] */;
short int var231 /* : Bool */;
val* var232 /* : nullable Object */;
val* var_t233 /* var t: MClassType */;
val* var234 /* : MModule */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var238 /* : MModule */;
val* var239 /* : MType */;
val* var_rt240 /* var rt: MType */;
val* var241 /* : HashSet[MType] */;
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
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Bool";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__force_alive]))(self, var24) /* force_alive on <self:RapidTypeAnalysis>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Int";
var31 = 3;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__force_alive]))(self, var29) /* force_alive on <self:RapidTypeAnalysis>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "Float";
var36 = 5;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__force_alive]))(self, var34) /* force_alive on <self:RapidTypeAnalysis>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "Char";
var41 = 4;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__force_alive]))(self, var39) /* force_alive on <self:RapidTypeAnalysis>*/;
for(;;) {
var43 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__todo]))(self) /* todo on <self:RapidTypeAnalysis>*/;
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var43) /* is_empty on <var43:List[MMethodDef]>*/;
var45 = !var44;
if (!var45) break;
var46 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__todo]))(self) /* todo on <self:RapidTypeAnalysis>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_abstract_collection__Sequence__shift]))(var46) /* shift on <var46:List[MMethodDef]>*/;
var_mmethoddef = var47;
var48 = NEW_rapid_type_analysis__RapidTypeVisitor(&type_rapid_type_analysis__RapidTypeVisitor);
var49 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_model__MClassDef__bound_mtype]))(var49) /* bound_mtype on <var49:MClassDef>*/;
((void (*)(val*, val*, val*, val*))(var48->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__init]))(var48, self, var50, var_mmethoddef) /* init on <var48:RapidTypeVisitor>*/;
var_v = var48;
var51 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var51 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 170);
show_backtrace(1);
} else {
var52 = ((long (*)(val*))(var51->class->vft[COLOR_model__MSignature__vararg_rank]))(var51) /* vararg_rank on <var51:nullable MSignature>*/;
}
var_vararg_rank = var52;
var53 = 1;
{ /* Inline kernel#Int#unary - (var53) */
var56 = -var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
{ /* Inline kernel#Int#> (var_vararg_rank,var54) */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var59 = 1; /* easy <var54:Int> isa OTHER*/
if (!var59) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var60 = var_vararg_rank > var54;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
if (var57){
var61 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var61) /* mpropdef2npropdef on <var61:ModelBuilder>*/;
var63 = ((val* (*)(val*, val*))(var62->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var62, var_mmethoddef) /* [] on <var62:HashMap[MPropDef, APropdef]>*/;
var_node = var63;
var64 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var64 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 173);
show_backtrace(1);
} else {
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_model__MSignature__mparameters]))(var64) /* mparameters on <var64:nullable MSignature>*/;
}
var66 = ((val* (*)(val*, long))(var65->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var65, var_vararg_rank) /* [] on <var65:Array[MParameter]>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_model__MParameter__mtype]))(var66) /* mtype on <var66:nullable Object(MParameter)>*/;
var_elttype = var67;
var68 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "Array";
var72 = 5;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = ((val* (*)(val*, val*))(var68->class->vft[COLOR_model__MModule__get_primitive_class]))(var68, var70) /* get_primitive_class on <var68:MModule>*/;
var75 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var75 = array_instance Array[MType] */
var76 = 1;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[MType]>*/;
}
var78 = ((val* (*)(val*, val*))(var74->class->vft[COLOR_model__MClass__get_mtype]))(var74, var75) /* get_mtype on <var74:MClass>*/;
var_vararg = var78;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_vararg) /* add_type on <var_v:RapidTypeVisitor>*/;
var79 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
if (varonce80) {
var81 = varonce80;
} else {
var82 = "NativeArray";
var83 = 11;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*, val*))(var79->class->vft[COLOR_model__MModule__get_primitive_class]))(var79, var81) /* get_primitive_class on <var79:MModule>*/;
var86 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var86 = array_instance Array[MType] */
var87 = 1;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[MType]>*/;
}
var89 = ((val* (*)(val*, val*))(var85->class->vft[COLOR_model__MClass__get_mtype]))(var85, var86) /* get_mtype on <var85:MClass>*/;
var_native = var89;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_native) /* add_type on <var_v:RapidTypeVisitor>*/;
var90 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
if (varonce91) {
var92 = varonce91;
} else {
var93 = "with_native";
var94 = 11;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = ((val* (*)(val*))(var_vararg->class->vft[COLOR_model__MClassType__mclass]))(var_vararg) /* mclass on <var_vararg:MClassType>*/;
var97 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var98 = ((val* (*)(val*, val*, val*, val*, val*))(var90->class->vft[COLOR_modelbuilder__ModelBuilder__force_get_primitive_method]))(var90, var_node, var92, var96, var97) /* force_get_primitive_method on <var90:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var_vararg, var98) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
} else {
}
var99 = NEW_range__Range(&type_range__Rangekernel__Int);
var100 = 0;
var101 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var101 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 183);
show_backtrace(1);
} else {
var102 = ((long (*)(val*))(var101->class->vft[COLOR_model__MSignature__arity]))(var101) /* arity on <var101:nullable MSignature>*/;
}
var103 = BOX_kernel__Int(var100); /* autobox from Int to Discrete */
var104 = BOX_kernel__Int(var102); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var99->class->vft[COLOR_range__Range__without_last]))(var99, var103, var104) /* without_last on <var99:Range[Int]>*/;
var105 = ((val* (*)(val*))(var99->class->vft[COLOR_abstract_collection__Collection__iterator]))(var99) /* iterator on <var99:Range[Int]>*/;
for(;;) {
var106 = ((short int (*)(val*))(var105->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var105) /* is_ok on <var105:Iterator[nullable Object]>*/;
if(!var106) break;
var107 = ((val* (*)(val*))(var105->class->vft[COLOR_abstract_collection__Iterator__item]))(var105) /* item on <var105:Iterator[nullable Object]>*/;
var108 = ((struct instance_kernel__Int*)var107)->value; /* autounbox from nullable Object to Int */;
var_i = var108;
var109 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var110 = ((val* (*)(val*))(var109->class->vft[COLOR_model__MProperty__intro]))(var109) /* intro on <var109:MProperty(MMethod)>*/;
var111 = ((val* (*)(val*))(var110->class->vft[COLOR_model__MMethodDef__msignature]))(var110) /* msignature on <var110:MPropDef(MMethodDef)>*/;
if (var111 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 184);
show_backtrace(1);
} else {
var112 = ((val* (*)(val*))(var111->class->vft[COLOR_model__MSignature__mparameters]))(var111) /* mparameters on <var111:nullable MSignature>*/;
}
var113 = ((val* (*)(val*, long))(var112->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var112, var_i) /* [] on <var112:Array[MParameter]>*/;
var114 = ((val* (*)(val*))(var113->class->vft[COLOR_model__MParameter__mtype]))(var113) /* mtype on <var113:nullable Object(MParameter)>*/;
var_origtype = var114;
var115 = ((short int (*)(val*))(var_origtype->class->vft[COLOR_model__MType__need_anchor]))(var_origtype) /* need_anchor on <var_origtype:MType>*/;
var116 = !var115;
if (var116){
goto CONTINUE_label;
} else {
}
var117 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var117 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 186);
show_backtrace(1);
} else {
var118 = ((val* (*)(val*))(var117->class->vft[COLOR_model__MSignature__mparameters]))(var117) /* mparameters on <var117:nullable MSignature>*/;
}
var119 = ((val* (*)(val*, long))(var118->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var118, var_i) /* [] on <var118:Array[MParameter]>*/;
var120 = ((val* (*)(val*))(var119->class->vft[COLOR_model__MParameter__mtype]))(var119) /* mtype on <var119:nullable Object(MParameter)>*/;
var_paramtype = var120;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_cast]))(self, var_paramtype) /* add_cast on <self:RapidTypeAnalysis>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var105->class->vft[COLOR_abstract_collection__Iterator__next]))(var105) /* next on <var105:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var121 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var122 = ((val* (*)(val*))(var121->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var121) /* mpropdef2npropdef on <var121:ModelBuilder>*/;
var123 = ((short int (*)(val*, val*))(var122->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var122, var_mmethoddef) /* has_key on <var122:HashMap[MPropDef, APropdef]>*/;
var124 = !var123;
if (var124){
var125 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var126 = ((val* (*)(val*))(var125->class->vft[COLOR_model__MProperty__name]))(var125) /* name on <var125:MProperty(MMethod)>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "init";
var130 = 4;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = ((short int (*)(val*, val*))(var126->class->vft[COLOR_kernel__Object___61d_61d]))(var126, var128) /* == on <var126:String>*/;
if (var132){
var133 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var134 = ((val* (*)(val*))(var133->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var133) /* mclassdef2nclassdef on <var133:ModelBuilder>*/;
var135 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var136 = ((val* (*)(val*, val*))(var134->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var134, var135) /* [] on <var134:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var136;
var137 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__super_inits]))(var_nclassdef) /* super_inits on <var_nclassdef:AClassdef>*/;
var_super_inits = var137;
var138 = NULL;
if (var_super_inits == NULL) {
var139 = 0; /* is null */
} else {
var139 = 1; /* arg is null and recv is not */
}
if (var139){
var140 = ((val* (*)(val*))(var_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_inits) /* iterator on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
for(;;) {
var141 = ((short int (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var140) /* is_ok on <var140:Iterator[nullable Object]>*/;
if(!var141) break;
var142 = ((val* (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__item]))(var140) /* item on <var140:Iterator[nullable Object]>*/;
var_su = var142;
var143 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send]))(var_v, var143, var_su) /* add_monomorphic_send on <var_v:RapidTypeVisitor>*/;
CONTINUE_label144: (void)0;
((void (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__next]))(var140) /* next on <var140:Iterator[nullable Object]>*/;
}
BREAK_label144: (void)0;
} else {
}
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 204);
show_backtrace(1);
}
goto CONTINUE_label145;
} else {
}
var146 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(self) /* modelbuilder on <self:RapidTypeAnalysis>*/;
var147 = ((val* (*)(val*))(var146->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var146) /* mpropdef2npropdef on <var146:ModelBuilder>*/;
var148 = ((val* (*)(val*, val*))(var147->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var147, var_mmethoddef) /* [] on <var147:HashMap[MPropDef, APropdef]>*/;
var_npropdef = var148;
/* <var_npropdef:APropdef> isa AConcreteMethPropdef */
cltype150 = type_parser_nodes__AConcreteMethPropdef.color;
idtype151 = type_parser_nodes__AConcreteMethPropdef.id;
if(cltype150 >= var_npropdef->type->table_size) {
var149 = 0;
} else {
var149 = var_npropdef->type->type_table[cltype150] == idtype151;
}
if (var149){
var152 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits]))(var_npropdef) /* auto_super_inits on <var_npropdef:APropdef(AConcreteMethPropdef)>*/;
var_auto_super_inits = var152;
var153 = NULL;
if (var_auto_super_inits == NULL) {
var154 = 0; /* is null */
} else {
var154 = 1; /* arg is null and recv is not */
}
if (var154){
var155 = ((val* (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_auto_super_inits) /* iterator on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
for(;;) {
var156 = ((short int (*)(val*))(var155->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var155) /* is_ok on <var155:Iterator[nullable Object]>*/;
if(!var156) break;
var157 = ((val* (*)(val*))(var155->class->vft[COLOR_abstract_collection__Iterator__item]))(var155) /* item on <var155:Iterator[nullable Object]>*/;
var_auto_super_init = var157;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var_auto_super_init) /* add_callsite on <var_v:RapidTypeVisitor>*/;
CONTINUE_label158: (void)0;
((void (*)(val*))(var155->class->vft[COLOR_abstract_collection__Iterator__next]))(var155) /* next on <var155:Iterator[nullable Object]>*/;
}
BREAK_label158: (void)0;
} else {
}
} else {
/* <var_npropdef:APropdef> isa AInternMethPropdef */
cltype161 = type_parser_nodes__AInternMethPropdef.color;
idtype162 = type_parser_nodes__AInternMethPropdef.id;
if(cltype161 >= var_npropdef->type->table_size) {
var160 = 0;
} else {
var160 = var_npropdef->type->type_table[cltype161] == idtype162;
}
var_ = var160;
if (var160){
var159 = var_;
} else {
/* <var_npropdef:APropdef> isa AExternMethPropdef */
cltype165 = type_parser_nodes__AExternMethPropdef.color;
idtype166 = type_parser_nodes__AExternMethPropdef.id;
if(cltype165 >= var_npropdef->type->table_size) {
var164 = 0;
} else {
var164 = var_npropdef->type->type_table[cltype165] == idtype166;
}
var_167 = var164;
if (var164){
var168 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(var_npropdef) /* n_extern on <var_npropdef:APropdef(AExternMethPropdef)>*/;
var169 = NULL;
if (var168 == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
var163 = var170;
} else {
var163 = var_167;
}
var159 = var163;
}
if (var159){
var171 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var171 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 221);
show_backtrace(1);
} else {
var172 = ((val* (*)(val*))(var171->class->vft[COLOR_model__MSignature__return_mtype]))(var171) /* return_mtype on <var171:nullable MSignature>*/;
}
var_ret = var172;
var176 = NULL;
if (var_ret == NULL) {
var177 = 0; /* is null */
} else {
var177 = 1; /* arg is null and recv is not */
}
var_178 = var177;
if (var177){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype180 = type_model__MClassType.color;
idtype181 = type_model__MClassType.id;
if(cltype180 >= var_ret->type->table_size) {
var179 = 0;
} else {
var179 = var_ret->type->type_table[cltype180] == idtype181;
}
var175 = var179;
} else {
var175 = var_178;
}
var_182 = var175;
if (var175){
var183 = ((val* (*)(val*))(var_ret->class->vft[COLOR_model__MClassType__mclass]))(var_ret) /* mclass on <var_ret:nullable MType(MClassType)>*/;
var184 = ((val* (*)(val*))(var183->class->vft[COLOR_model__MClass__kind]))(var183) /* kind on <var183:MClass>*/;
var185 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__abstract_kind]))(self) /* abstract_kind on <self:RapidTypeAnalysis>*/;
var186 = ((short int (*)(val*, val*))(var184->class->vft[COLOR_kernel__Object___33d_61d]))(var184, var185) /* != on <var184:MClassKind>*/;
var174 = var186;
} else {
var174 = var_182;
}
var_187 = var174;
if (var174){
var188 = ((val* (*)(val*))(var_ret->class->vft[COLOR_model__MClassType__mclass]))(var_ret) /* mclass on <var_ret:nullable MType(MClassType)>*/;
var189 = ((val* (*)(val*))(var188->class->vft[COLOR_model__MClass__kind]))(var188) /* kind on <var188:MClass>*/;
var190 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:RapidTypeAnalysis>*/;
var191 = ((short int (*)(val*, val*))(var189->class->vft[COLOR_kernel__Object___33d_61d]))(var189, var190) /* != on <var189:MClassKind>*/;
var173 = var191;
} else {
var173 = var_187;
}
if (var173){
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_ret) /* add_type on <var_v:RapidTypeVisitor>*/;
} else {
}
} else {
/* <var_npropdef:APropdef> isa AExternMethPropdef */
cltype193 = type_parser_nodes__AExternMethPropdef.color;
idtype194 = type_parser_nodes__AExternMethPropdef.id;
if(cltype193 >= var_npropdef->type->table_size) {
var192 = 0;
} else {
var192 = var_npropdef->type->type_table[cltype193] == idtype194;
}
if (var192){
var195 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:APropdef(AExternMethPropdef)>*/;
/* <var195:nullable ANode> isa AClassdef */
cltype197 = type_parser_nodes__AClassdef.color;
idtype198 = type_parser_nodes__AClassdef.id;
if(var195 == NULL) {
var196 = 0;
} else {
if(cltype197 >= var195->type->table_size) {
var196 = 0;
} else {
var196 = var195->type->type_table[cltype197] == idtype198;
}
}
if (!var196) {
var_class_name199 = var195 == NULL ? "null" : var195->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name199);
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 226);
show_backtrace(1);
}
var_nclassdef200 = var195;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_npropdef) /* enter_visit on <var_v:RapidTypeVisitor>*/;
} else {
/* <var_npropdef:APropdef> isa AExternInitPropdef */
cltype202 = type_parser_nodes__AExternInitPropdef.color;
idtype203 = type_parser_nodes__AExternInitPropdef.id;
if(cltype202 >= var_npropdef->type->table_size) {
var201 = 0;
} else {
var201 = var_npropdef->type->type_table[cltype202] == idtype203;
}
if (var201){
var204 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var204) /* add_type on <var_v:RapidTypeVisitor>*/;
} else {
}
}
}
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_npropdef) /* enter_visit on <var_v:RapidTypeVisitor>*/;
CONTINUE_label145: (void)0;
}
BREAK_label145: (void)0;
var205 = NEW_list__List(&type_list__Listmodel__MClassType);
((void (*)(val*))(var205->class->vft[COLOR_list__List__init]))(var205) /* init on <var205:List[MClassType]>*/;
var_todo_types = var205;
var206 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var_todo_types->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_todo_types, var206) /* add_all on <var_todo_types:List[MClassType]>*/;
for(;;) {
var207 = ((short int (*)(val*))(var_todo_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_todo_types) /* is_empty on <var_todo_types:List[MClassType]>*/;
var208 = !var207;
if (!var208) break;
var209 = ((val* (*)(val*))(var_todo_types->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_todo_types) /* shift on <var_todo_types:List[MClassType]>*/;
var_t = var209;
var210 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_types]))(self) /* live_open_types on <self:RapidTypeAnalysis>*/;
var211 = ((val* (*)(val*))(var210->class->vft[COLOR_abstract_collection__Collection__iterator]))(var210) /* iterator on <var210:HashSet[MClassType]>*/;
for(;;) {
var212 = ((short int (*)(val*))(var211->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var211) /* is_ok on <var211:Iterator[nullable Object]>*/;
if(!var212) break;
var213 = ((val* (*)(val*))(var211->class->vft[COLOR_abstract_collection__Iterator__item]))(var211) /* item on <var211:Iterator[nullable Object]>*/;
var_ot = var213;
var214 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var215 = ((short int (*)(val*, val*, val*, val*))(var_ot->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot, var_t, var_t, var214) /* can_resolve_for on <var_ot:MClassType>*/;
var216 = !var215;
if (var216){
goto CONTINUE_label217;
} else {
}
var218 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var219 = ((val* (*)(val*, val*, val*))(var_ot->class->vft[COLOR_model__MType__anchor_to]))(var_ot, var218, var_t) /* anchor_to on <var_ot:MClassType>*/;
var_rt = var219;
var220 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var221 = ((short int (*)(val*, val*))(var220->class->vft[COLOR_abstract_collection__Collection__has]))(var220, var_rt) /* has on <var220:HashSet[MClassType]>*/;
if (var221){
goto CONTINUE_label217;
} else {
}
var222 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var222->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var222, var_rt) /* add on <var222:HashSet[MClassType]>*/;
((void (*)(val*, val*))(var_todo_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_todo_types, var_rt) /* add on <var_todo_types:List[MClassType]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__check_depth]))(self, var_rt) /* check_depth on <self:RapidTypeAnalysis>*/;
CONTINUE_label217: (void)0;
((void (*)(val*))(var211->class->vft[COLOR_abstract_collection__Iterator__next]))(var211) /* next on <var211:Iterator[nullable Object]>*/;
}
BREAK_label217: (void)0;
CONTINUE_label223: (void)0;
}
BREAK_label223: (void)0;
var224 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types]))(self) /* live_open_cast_types on <self:RapidTypeAnalysis>*/;
var225 = ((val* (*)(val*))(var224->class->vft[COLOR_abstract_collection__Collection__iterator]))(var224) /* iterator on <var224:HashSet[MType]>*/;
for(;;) {
var226 = ((short int (*)(val*))(var225->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var225) /* is_ok on <var225:Iterator[nullable Object]>*/;
if(!var226) break;
var227 = ((val* (*)(val*))(var225->class->vft[COLOR_abstract_collection__Iterator__item]))(var225) /* item on <var225:Iterator[nullable Object]>*/;
var_ot228 = var227;
var229 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(self) /* live_types on <self:RapidTypeAnalysis>*/;
var230 = ((val* (*)(val*))(var229->class->vft[COLOR_abstract_collection__Collection__iterator]))(var229) /* iterator on <var229:HashSet[MClassType]>*/;
for(;;) {
var231 = ((short int (*)(val*))(var230->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var230) /* is_ok on <var230:Iterator[nullable Object]>*/;
if(!var231) break;
var232 = ((val* (*)(val*))(var230->class->vft[COLOR_abstract_collection__Iterator__item]))(var230) /* item on <var230:Iterator[nullable Object]>*/;
var_t233 = var232;
var234 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var235 = ((short int (*)(val*, val*, val*, val*))(var_ot228->class->vft[COLOR_model__MType__can_resolve_for]))(var_ot228, var_t233, var_t233, var234) /* can_resolve_for on <var_ot228:MType>*/;
var236 = !var235;
if (var236){
goto CONTINUE_label237;
} else {
}
var238 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__mainmodule]))(self) /* mainmodule on <self:RapidTypeAnalysis>*/;
var239 = ((val* (*)(val*, val*, val*))(var_ot228->class->vft[COLOR_model__MType__anchor_to]))(var_ot228, var238, var_t233) /* anchor_to on <var_ot228:MType>*/;
var_rt240 = var239;
var241 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(self) /* live_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var241->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var241, var_rt240) /* add on <var241:HashSet[MType]>*/;
CONTINUE_label237: (void)0;
((void (*)(val*))(var230->class->vft[COLOR_abstract_collection__Iterator__next]))(var230) /* next on <var230:Iterator[nullable Object]>*/;
}
BREAK_label237: (void)0;
CONTINUE_label242: (void)0;
((void (*)(val*))(var225->class->vft[COLOR_abstract_collection__Iterator__next]))(var225) /* next on <var225:Iterator[nullable Object]>*/;
}
BREAK_label242: (void)0;
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 281);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 306);
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
val* var1 /* : HashSet[MType] */;
val* var2 /* : HashSet[MType] */;
var_mtype = p0;
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var){
var1 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types]))(self) /* live_open_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_mtype) /* add on <var1:HashSet[MType]>*/;
} else {
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(self) /* live_cast_types on <self:RapidTypeAnalysis>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_mtype) /* add on <var2:HashSet[MType]>*/;
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
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 389);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 390);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 391);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 398);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 420);
show_backtrace(1);
}
var14 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType(MClassType)>*/;
var15 = !var14;
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 421);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 433);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__modelbuilder]))(var4) /* modelbuilder on <var4:RapidTypeAnalysis>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__current_node]))(self) /* current_node on <self:RapidTypeVisitor>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 434);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 439);
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
/* method rapid_type_analysis#RapidTypeVisitor#add_callsite for (self: RapidTypeVisitor, nullable CallSite) */
void rapid_type_analysis__RapidTypeVisitor__add_callsite(val* self, val* p0) {
val* var_callsite /* var callsite: nullable CallSite */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MType */;
val* var4 /* : MMethod */;
var_callsite = p0;
var = NULL;
if (var_callsite == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(self) /* analysis on <self:RapidTypeVisitor>*/;
var3 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__recv]))(var_callsite) /* recv on <var_callsite:nullable CallSite(CallSite)>*/;
var4 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/;
((void (*)(val*, val*, val*))(var2->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_send]))(var2, var3, var4) /* add_send on <var2:RapidTypeAnalysis>*/;
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_callsite for (self: Object, nullable CallSite) */
void VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_callsite(val* self, val* p0) {
rapid_type_analysis__RapidTypeVisitor__add_callsite(self, p0);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 459);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 466);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 473);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 480);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 484);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 516);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 526);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 536);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 543);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 550);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 557);
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
val* var /* : nullable CallSite */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var) /* add_callsite on <var_v:RapidTypeVisitor>*/;
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
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendReassignFormExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var) /* add_callsite on <var_v:RapidTypeVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:ASendReassignFormExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var1) /* add_callsite on <var_v:RapidTypeVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_callsite]))(self) /* write_callsite on <self:ASendReassignFormExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var2) /* add_callsite on <var_v:RapidTypeVisitor>*/;
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
val* var /* : nullable CallSite */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AVarReassignExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var) /* add_callsite on <var_v:RapidTypeVisitor>*/;
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
val* var /* : nullable CallSite */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AAttrReassignExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var) /* add_callsite on <var_v:RapidTypeVisitor>*/;
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
val* var /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : RapidTypeAnalysis */;
val* var4 /* : MClassType */;
val* var5 /* : nullable MMethodDef */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASuperExpr__callsite]))(self) /* callsite on <self:ASuperExpr>*/;
var_callsite = var;
var1 = NULL;
if (var_callsite == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var_callsite) /* add_callsite on <var_v:RapidTypeVisitor>*/;
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(var_v) /* analysis on <var_v:RapidTypeVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__receiver]))(var_v) /* receiver on <var_v:RapidTypeVisitor>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASuperExpr__mpropdef]))(self) /* mpropdef on <self:ASuperExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 601);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_super_send]))(var3, var4, var5) /* add_super_send on <var3:RapidTypeAnalysis>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 608);
show_backtrace(1);
}
var_recvtype = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__coltype]))(self) /* coltype on <self:AForExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 609);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 612);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 612);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 615);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 617);
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 621);
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
val* var2 /* : nullable CallSite */;
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
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 630);
show_backtrace(1);
}
var_mtype = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_mtype) /* add_type on <var_v:RapidTypeVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ANewExpr__callsite]))(self) /* callsite on <self:ANewExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_callsite]))(var_v, var2) /* add_callsite on <var_v:RapidTypeVisitor>*/;
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0) {
rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
