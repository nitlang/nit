#include "mmodule.sep.0.h"
/* method mmodule#Model#mmodules for (self: Model): Array[MModule] */
val* mmodule__Model__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___64dmmodules].val; /* @mmodules on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules for (self: Object): Array[MModule] */
val* VIRTUAL_mmodule__Model__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = mmodule__Model__mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules= for (self: Model, Array[MModule]) */
void mmodule__Model__mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__Model___64dmmodules].val = p0; /* @mmodules on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#mmodules= for (self: Object, Array[MModule]) */
void VIRTUAL_mmodule__Model__mmodules_61d(val* self, val* p0) {
mmodule__Model__mmodules_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#Model#mmodule_nesting_hierarchy for (self: Model): POSet[MModule] */
val* mmodule__Model__mmodule_nesting_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___64dmmodule_nesting_hierarchy].val; /* @mmodule_nesting_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule_nesting_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 31);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_nesting_hierarchy for (self: Object): POSet[MModule] */
val* VIRTUAL_mmodule__Model__mmodule_nesting_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = mmodule__Model__mmodule_nesting_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_nesting_hierarchy= for (self: Model, POSet[MModule]) */
void mmodule__Model__mmodule_nesting_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__Model___64dmmodule_nesting_hierarchy].val = p0; /* @mmodule_nesting_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#mmodule_nesting_hierarchy= for (self: Object, POSet[MModule]) */
void VIRTUAL_mmodule__Model__mmodule_nesting_hierarchy_61d(val* self, val* p0) {
mmodule__Model__mmodule_nesting_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#Model#mmodule_importation_hierarchy for (self: Model): POSet[MModule] */
val* mmodule__Model__mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___64dmmodule_importation_hierarchy].val; /* @mmodule_importation_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule_importation_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 37);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_importation_hierarchy for (self: Object): POSet[MModule] */
val* VIRTUAL_mmodule__Model__mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = mmodule__Model__mmodule_importation_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_importation_hierarchy= for (self: Model, POSet[MModule]) */
void mmodule__Model__mmodule_importation_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__Model___64dmmodule_importation_hierarchy].val = p0; /* @mmodule_importation_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#mmodule_importation_hierarchy= for (self: Object, POSet[MModule]) */
void VIRTUAL_mmodule__Model__mmodule_importation_hierarchy_61d(val* self, val* p0) {
mmodule__Model__mmodule_importation_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#Model#mmodules_by_name for (self: Model): MultiHashMap[String, MModule] */
val* mmodule__Model__mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___64dmmodules_by_name].val; /* @mmodules_by_name on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodules_by_name");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules_by_name for (self: Object): MultiHashMap[String, MModule] */
val* VIRTUAL_mmodule__Model__mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = mmodule__Model__mmodules_by_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules_by_name= for (self: Model, MultiHashMap[String, MModule]) */
void mmodule__Model__mmodules_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__Model___64dmmodules_by_name].val = p0; /* @mmodules_by_name on <self:Model> */
RET_LABEL:;
}
/* method mmodule#Model#mmodules_by_name= for (self: Object, MultiHashMap[String, MModule]) */
void VIRTUAL_mmodule__Model__mmodules_by_name_61d(val* self, val* p0) {
mmodule__Model__mmodules_by_name_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#Model#get_mmodules_by_name for (self: Model, String): nullable Array[MModule] */
val* mmodule__Model__get_mmodules_by_name(val* self, val* p0) {
val* var /* : nullable Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MModule] */;
short int var2 /* : Bool */;
val* var3 /* : MultiHashMap[String, MModule] */;
val* var4 /* : nullable Object */;
val* var5 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__Model__mmodules_by_name]))(self) /* mmodules_by_name on <self:Model>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_name) /* has_key on <var1:MultiHashMap[String, MModule]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__Model__mmodules_by_name]))(self) /* mmodules_by_name on <self:Model>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_name) /* [] on <var3:MultiHashMap[String, MModule]>*/;
var = var4;
goto RET_LABEL;
} else {
var5 = NULL;
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#Model#get_mmodules_by_name for (self: Object, String): nullable Array[MModule] */
val* VIRTUAL_mmodule__Model__get_mmodules_by_name(val* self, val* p0) {
val* var /* : nullable Array[MModule] */;
val* var1 /* : nullable Array[MModule] */;
var1 = mmodule__Model__get_mmodules_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#mmodules for (self: MGroup): Array[MModule] */
val* mmodule__MGroup__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_mmodule__MGroup___64dmmodules].val; /* @mmodules on <self:MGroup> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 58);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#mmodules for (self: Object): Array[MModule] */
val* VIRTUAL_mmodule__MGroup__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = mmodule__MGroup__mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#mmodules= for (self: MGroup, Array[MModule]) */
void mmodule__MGroup__mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MGroup___64dmmodules].val = p0; /* @mmodules on <self:MGroup> */
RET_LABEL:;
}
/* method mmodule#MGroup#mmodules= for (self: Object, Array[MModule]) */
void VIRTUAL_mmodule__MGroup__mmodules_61d(val* self, val* p0) {
mmodule__MGroup__mmodules_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#model for (self: MModule): Model */
val* mmodule__MModule__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_mmodule__MModule___64dmodel].val; /* @model on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 64);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model for (self: Object): Model */
val* VIRTUAL_mmodule__MModule__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = mmodule__MModule__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model= for (self: MModule, Model) */
void mmodule__MModule__model_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dmodel].val = p0; /* @model on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#model= for (self: Object, Model) */
void VIRTUAL_mmodule__MModule__model_61d(val* self, val* p0) {
mmodule__MModule__model_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#direct_owner for (self: MModule): nullable MModule */
val* mmodule__MModule__direct_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_mmodule__MModule___64ddirect_owner].val; /* @direct_owner on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#direct_owner for (self: Object): nullable MModule */
val* VIRTUAL_mmodule__MModule__direct_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = mmodule__MModule__direct_owner(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#direct_owner= for (self: MModule, nullable MModule) */
void mmodule__MModule__direct_owner_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64ddirect_owner].val = p0; /* @direct_owner on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#direct_owner= for (self: Object, nullable MModule) */
void VIRTUAL_mmodule__MModule__direct_owner_61d(val* self, val* p0) {
mmodule__MModule__direct_owner_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#mgroup for (self: MModule): nullable MGroup */
val* mmodule__MModule__mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_mmodule__MModule___64dmgroup].val; /* @mgroup on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#mgroup for (self: Object): nullable MGroup */
val* VIRTUAL_mmodule__MModule__mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = mmodule__MModule__mgroup(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#mgroup= for (self: MModule, nullable MGroup) */
void mmodule__MModule__mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dmgroup].val = p0; /* @mgroup on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#mgroup= for (self: Object, nullable MGroup) */
void VIRTUAL_mmodule__MModule__mgroup_61d(val* self, val* p0) {
mmodule__MModule__mgroup_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#name for (self: MModule): String */
val* mmodule__MModule__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_mmodule__MModule___64dname].val; /* @name on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 76);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name for (self: Object): String */
val* VIRTUAL_mmodule__MModule__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mmodule__MModule__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name= for (self: MModule, String) */
void mmodule__MModule__name_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dname].val = p0; /* @name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#name= for (self: Object, String) */
void VIRTUAL_mmodule__MModule__name_61d(val* self, val* p0) {
mmodule__MModule__name_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#location for (self: MModule): Location */
val* mmodule__MModule__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_mmodule__MModule___64dlocation].val; /* @location on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 79);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#location for (self: Object): Location */
val* VIRTUAL_mmodule__MModule__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = mmodule__MModule__location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#location= for (self: MModule, Location) */
void mmodule__MModule__location_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dlocation].val = p0; /* @location on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#location= for (self: Object, Location) */
void VIRTUAL_mmodule__MModule__location_61d(val* self, val* p0) {
mmodule__MModule__location_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#to_s for (self: MModule): String */
val* mmodule__MModule__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__name]))(self) /* name on <self:MModule>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#to_s for (self: Object): String */
val* VIRTUAL_mmodule__MModule__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mmodule__MModule__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_nesting for (self: MModule): POSetElement[MModule] */
val* mmodule__MModule__in_nesting(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___64din_nesting].val; /* @in_nesting on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_nesting");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 85);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_nesting for (self: Object): POSetElement[MModule] */
val* VIRTUAL_mmodule__MModule__in_nesting(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = mmodule__MModule__in_nesting(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_nesting= for (self: MModule, POSetElement[MModule]) */
void mmodule__MModule__in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64din_nesting].val = p0; /* @in_nesting on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#in_nesting= for (self: Object, POSetElement[MModule]) */
void VIRTUAL_mmodule__MModule__in_nesting_61d(val* self, val* p0) {
mmodule__MModule__in_nesting_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#in_importation for (self: MModule): POSetElement[MModule] */
val* mmodule__MModule__in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___64din_importation].val; /* @in_importation on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_importation");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 91);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_importation for (self: Object): POSetElement[MModule] */
val* VIRTUAL_mmodule__MModule__in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = mmodule__MModule__in_importation(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_importation= for (self: MModule, POSetElement[MModule]) */
void mmodule__MModule__in_importation_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64din_importation].val = p0; /* @in_importation on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#in_importation= for (self: Object, POSetElement[MModule]) */
void VIRTUAL_mmodule__MModule__in_importation_61d(val* self, val* p0) {
mmodule__MModule__in_importation_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#full_name for (self: MModule): String */
val* mmodule__MModule__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var2 /* : Bool */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : MProject */;
val* var6 /* : String */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var_12 /* var : Array[Object] */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : MProject */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__mgroup]))(self) /* mgroup on <self:MModule>*/;
var_mgroup = var1;
var3 = NULL;
if (var_mgroup == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
var_ = var4;
if (var4){
var2 = var_;
} else {
var5 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__mproject]))(var_mgroup) /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_mproject__MProject__name]))(var5) /* name on <var5:MProject>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__name]))(self) /* name on <self:MModule>*/;
var8 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:String>*/;
var2 = var8;
}
if (var2){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__name]))(self) /* name on <self:MModule>*/;
var = var9;
goto RET_LABEL;
} else {
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
var11 = 5;
((void (*)(val*, long))(var10->class->vft[COLOR_array__Array__with_capacity]))(var10, var11) /* with_capacity on <var10:Array[Object]>*/;
var_12 = var10;
if (varonce) {
var13 = varonce;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
((void (*)(val*, val*))(var_12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_12, var13) /* add on <var_12:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__mproject]))(var_mgroup) /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_mproject__MProject__name]))(var17) /* name on <var17:MProject>*/;
((void (*)(val*, val*))(var_12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_12, var18) /* add on <var_12:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "::";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_12, var20) /* add on <var_12:Array[Object]>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__name]))(self) /* name on <self:MModule>*/;
((void (*)(val*, val*))(var_12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_12, var24) /* add on <var_12:Array[Object]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "";
var28 = 0;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_12, var26) /* add on <var_12:Array[Object]>*/;
var30 = ((val* (*)(val*))(var_12->class->vft[COLOR_string__Object__to_s]))(var_12) /* to_s on <var_12:Array[Object]>*/;
var = var30;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#full_name for (self: Object): String */
val* VIRTUAL_mmodule__MModule__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mmodule__MModule__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#init for (self: MModule, Model, nullable MGroup, String, Location) */
void mmodule__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_model /* var model: Model */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var_location /* var location: Location */;
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : Array[MModule] */;
val* var2 /* : POSet[MModule] */;
val* var3 /* : POSetElement[Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : Array[MModule] */;
val* var7 /* : Array[MModule] */;
val* var8 /* : nullable Object */;
val* var_direct_owner /* var direct_owner: MModule */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : nullable MGroup */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : nullable MGroup */;
val* var17 /* : Array[MModule] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable MGroup */;
val* var21 /* : Array[MModule] */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
val* var24 /* : POSet[MModule] */;
val* var25 /* : POSet[MModule] */;
val* var26 /* : POSetElement[Object] */;
var_model = p0;
var_mgroup = p1;
var_name = p2;
var_location = p3;
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__model_61d]))(self, var_model) /* model= on <self:MModule>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__name_61d]))(self, var_name) /* name= on <self:MModule>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__location_61d]))(self, var_location) /* location= on <self:MModule>*/;
var = ((val* (*)(val*))(var_model->class->vft[COLOR_mmodule__Model__mmodules_by_name]))(var_model) /* mmodules_by_name on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var, var_name, self) /* add_one on <var:MultiHashMap[String, MModule]>*/;
var1 = ((val* (*)(val*))(var_model->class->vft[COLOR_mmodule__Model__mmodules]))(var_model) /* mmodules on <var_model:Model>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, self) /* add on <var1:Array[MModule]>*/;
var2 = ((val* (*)(val*))(var_model->class->vft[COLOR_mmodule__Model__mmodule_nesting_hierarchy]))(var_model) /* mmodule_nesting_hierarchy on <var_model:Model>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_poset__POSet__add_node]))(var2, self) /* add_node on <var2:POSet[MModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__in_nesting_61d]))(self, var3) /* in_nesting= on <self:MModule>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__mgroup_61d]))(self, var_mgroup) /* mgroup= on <self:MModule>*/;
var4 = NULL;
if (var_mgroup == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mmodule__MGroup__mmodules]))(var_mgroup) /* mmodules on <var_mgroup:nullable MGroup(MGroup)>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, self) /* add on <var6:Array[MModule]>*/;
var7 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mmodule__MGroup__mmodules]))(var_mgroup) /* mmodules on <var_mgroup:nullable MGroup(MGroup)>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__first]))(var7) /* first on <var7:Array[MModule]>*/;
var_direct_owner = var8;
var11 = ((short int (*)(val*, val*))(var_direct_owner->class->vft[COLOR_kernel__Object___61d_61d]))(var_direct_owner, self) /* == on <var_direct_owner:MModule>*/;
var_ = var11;
if (var11){
var12 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__parent]))(var_mgroup) /* parent on <var_mgroup:nullable MGroup(MGroup)>*/;
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
var10 = var14;
} else {
var10 = var_;
}
var_15 = var10;
if (var10){
var16 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__parent]))(var_mgroup) /* parent on <var_mgroup:nullable MGroup(MGroup)>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 120);
show_backtrace(1);
} else {
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_mmodule__MGroup__mmodules]))(var16) /* mmodules on <var16:nullable MGroup>*/;
}
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var17) /* is_empty on <var17:Array[MModule]>*/;
var19 = !var18;
var9 = var19;
} else {
var9 = var_15;
}
if (var9){
var20 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__parent]))(var_mgroup) /* parent on <var_mgroup:nullable MGroup(MGroup)>*/;
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 121);
show_backtrace(1);
} else {
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_mmodule__MGroup__mmodules]))(var20) /* mmodules on <var20:nullable MGroup>*/;
}
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__first]))(var21) /* first on <var21:Array[MModule]>*/;
var_direct_owner = var22;
} else {
}
var23 = ((short int (*)(val*, val*))(var_direct_owner->class->vft[COLOR_kernel__Object___33d_61d]))(var_direct_owner, self) /* != on <var_direct_owner:MModule>*/;
if (var23){
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__direct_owner_61d]))(self, var_direct_owner) /* direct_owner= on <self:MModule>*/;
var24 = ((val* (*)(val*))(var_model->class->vft[COLOR_mmodule__Model__mmodule_nesting_hierarchy]))(var_model) /* mmodule_nesting_hierarchy on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_poset__POSet__add_edge]))(var24, var_direct_owner, self) /* add_edge on <var24:POSet[MModule]>*/;
} else {
}
} else {
}
var25 = ((val* (*)(val*))(var_model->class->vft[COLOR_mmodule__Model__mmodule_importation_hierarchy]))(var_model) /* mmodule_importation_hierarchy on <var_model:Model>*/;
var26 = ((val* (*)(val*, val*))(var25->class->vft[COLOR_poset__POSet__add_node]))(var25, self) /* add_node on <var25:POSet[MModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__in_importation_61d]))(self, var26) /* in_importation= on <self:MModule>*/;
RET_LABEL:;
}
/* method mmodule#MModule#init for (self: Object, Model, nullable MGroup, String, Location) */
void VIRTUAL_mmodule__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3) {
mmodule__MModule__init(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method mmodule#MModule#set_imported_mmodules for (self: MModule, Array[MModule]) */
void mmodule__MModule__set_imported_mmodules(val* self, val* p0) {
val* var_imported_mmodules /* var imported_mmodules: Array[MModule] */;
val* var /* : POSetElement[MModule] */;
val* var1 /* : Collection[Object] */;
short int var2 /* : Bool */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var6 /* : Model */;
val* var7 /* : POSet[MModule] */;
var_imported_mmodules = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var) /* direct_greaters on <var:POSetElement[MModule]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:Collection[Object](Collection[MModule])>*/;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert \'unique_invocation\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 136);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var_imported_mmodules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_imported_mmodules) /* iterator on <var_imported_mmodules:Array[MModule]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_m = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__model]))(self) /* model on <self:MModule>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_mmodule__Model__mmodule_importation_hierarchy]))(var6) /* mmodule_importation_hierarchy on <var6:Model>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_poset__POSet__add_edge]))(var7, self, var_m) /* add_edge on <var7:POSet[MModule]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method mmodule#MModule#set_imported_mmodules for (self: Object, Array[MModule]) */
void VIRTUAL_mmodule__MModule__set_imported_mmodules(val* self, val* p0) {
mmodule__MModule__set_imported_mmodules(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#intrude_mmodules for (self: MModule): HashSet[MModule] */
val* mmodule__MModule__intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___64dintrude_mmodules].val; /* @intrude_mmodules on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intrude_mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 142);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#intrude_mmodules for (self: Object): HashSet[MModule] */
val* VIRTUAL_mmodule__MModule__intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = mmodule__MModule__intrude_mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#intrude_mmodules= for (self: MModule, HashSet[MModule]) */
void mmodule__MModule__intrude_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dintrude_mmodules].val = p0; /* @intrude_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#intrude_mmodules= for (self: Object, HashSet[MModule]) */
void VIRTUAL_mmodule__MModule__intrude_mmodules_61d(val* self, val* p0) {
mmodule__MModule__intrude_mmodules_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#public_mmodules for (self: MModule): HashSet[MModule] */
val* mmodule__MModule__public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___64dpublic_mmodules].val; /* @public_mmodules on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @public_mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 143);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#public_mmodules for (self: Object): HashSet[MModule] */
val* VIRTUAL_mmodule__MModule__public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = mmodule__MModule__public_mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#public_mmodules= for (self: MModule, HashSet[MModule]) */
void mmodule__MModule__public_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dpublic_mmodules].val = p0; /* @public_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#public_mmodules= for (self: Object, HashSet[MModule]) */
void VIRTUAL_mmodule__MModule__public_mmodules_61d(val* self, val* p0) {
mmodule__MModule__public_mmodules_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#private_mmodules for (self: MModule): HashSet[MModule] */
val* mmodule__MModule__private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___64dprivate_mmodules].val; /* @private_mmodules on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @private_mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 144);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#private_mmodules for (self: Object): HashSet[MModule] */
val* VIRTUAL_mmodule__MModule__private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = mmodule__MModule__private_mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#private_mmodules= for (self: MModule, HashSet[MModule]) */
void mmodule__MModule__private_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___64dprivate_mmodules].val = p0; /* @private_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#private_mmodules= for (self: Object, HashSet[MModule]) */
void VIRTUAL_mmodule__MModule__private_mmodules_61d(val* self, val* p0) {
mmodule__MModule__private_mmodules_61d(self, p0);
RET_LABEL:;
}
/* method mmodule#MModule#visibility_for for (self: MModule, MModule): MVisibility */
val* mmodule__MModule__visibility_for(val* self, val* p0) {
val* var /* : MVisibility */;
val* var_m /* var m: MModule */;
short int var1 /* : Bool */;
val* var2 /* : MVisibility */;
val* var3 /* : HashSet[MModule] */;
short int var4 /* : Bool */;
val* var5 /* : MVisibility */;
val* var6 /* : HashSet[MModule] */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
val* var9 /* : HashSet[MModule] */;
short int var10 /* : Bool */;
val* var11 /* : MVisibility */;
val* var12 /* : MVisibility */;
var_m = p0;
var1 = ((short int (*)(val*, val*))(var_m->class->vft[COLOR_kernel__Object___61d_61d]))(var_m, self) /* == on <var_m:MModule>*/;
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:MModule>*/;
var = var2;
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__intrude_mmodules]))(self) /* intrude_mmodules on <self:MModule>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_m) /* has on <var3:HashSet[MModule]>*/;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:MModule>*/;
var = var5;
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__Collection__has]))(var6, var_m) /* has on <var6:HashSet[MModule]>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__Collection__has]))(var9, var_m) /* has on <var9:HashSet[MModule]>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var = var11;
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__none_visibility]))(self) /* none_visibility on <self:MModule>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#visibility_for for (self: Object, MModule): MVisibility */
val* VIRTUAL_mmodule__MModule__visibility_for(val* self, val* p0) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = mmodule__MModule__visibility_for(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#set_visibility_for for (self: MModule, MModule, MVisibility) */
void mmodule__MModule__set_visibility_for(val* self, val* p0, val* p1) {
val* var_m /* var m: MModule */;
val* var_v /* var v: MVisibility */;
val* var /* : MVisibility */;
short int var1 /* : Bool */;
val* var2 /* : HashSet[MModule] */;
val* var3 /* : HashSet[MModule] */;
val* var4 /* : HashSet[MModule] */;
val* var5 /* : HashSet[MModule] */;
val* var6 /* : HashSet[MModule] */;
val* var7 /* : HashSet[MModule] */;
val* var8 /* : HashSet[MModule] */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[MModule] */;
val* var12 /* : HashSet[MModule] */;
val* var13 /* : HashSet[MModule] */;
val* var14 /* : HashSet[MModule] */;
val* var15 /* : HashSet[MModule] */;
val* var16 /* : MVisibility */;
short int var17 /* : Bool */;
val* var18 /* : HashSet[MModule] */;
val* var19 /* : HashSet[MModule] */;
val* var20 /* : HashSet[MModule] */;
val* var21 /* : HashSet[MModule] */;
val* var22 /* : HashSet[MModule] */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
var_m = p0;
var_v = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:MModule>*/;
var1 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var) /* == on <var_v:MVisibility>*/;
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__intrude_mmodules]))(self) /* intrude_mmodules on <self:MModule>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_m) /* add on <var2:HashSet[MModule]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__intrude_mmodules]))(self) /* intrude_mmodules on <self:MModule>*/;
var4 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__intrude_mmodules]))(var_m) /* intrude_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var3, var4) /* add_all on <var3:HashSet[MModule]>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var6 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__public_mmodules]))(var_m) /* public_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var5, var6) /* add_all on <var5:HashSet[MModule]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var8 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__private_mmodules]))(var_m) /* private_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var7, var8) /* add_all on <var7:HashSet[MModule]>*/;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
var10 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var9) /* == on <var_v:MVisibility>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var_m) /* add on <var11:HashSet[MModule]>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var13 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__intrude_mmodules]))(var_m) /* intrude_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var12, var13) /* add_all on <var12:HashSet[MModule]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var15 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__public_mmodules]))(var_m) /* public_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var14, var15) /* add_all on <var14:HashSet[MModule]>*/;
} else {
var16 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var17 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var16) /* == on <var_v:MVisibility>*/;
if (var17){
var18 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
((void (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var18, var_m) /* add on <var18:HashSet[MModule]>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var20 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__intrude_mmodules]))(var_m) /* intrude_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var19, var20) /* add_all on <var19:HashSet[MModule]>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var22 = ((val* (*)(val*))(var_m->class->vft[COLOR_mmodule__MModule__public_mmodules]))(var_m) /* public_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var21, var22) /* add_all on <var21:HashSet[MModule]>*/;
} else {
if (varonce) {
var23 = varonce;
} else {
var24 = " visibility for ";
var25 = 16;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " = ";
var30 = 3;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) self;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var_m;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var28;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var_v;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var35) /* print on <self:MModule>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 175);
show_backtrace(1);
}
}
}
RET_LABEL:;
}
/* method mmodule#MModule#set_visibility_for for (self: Object, MModule, MVisibility) */
void VIRTUAL_mmodule__MModule__set_visibility_for(val* self, val* p0, val* p1) {
mmodule__MModule__set_visibility_for(self, p0, p1);
RET_LABEL:;
}
/* method mmodule#MModule#public_owner for (self: MModule): nullable MModule */
val* mmodule__MModule__public_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : MProject */;
val* var6 /* : nullable MGroup */;
val* var7 /* : Array[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : Array[MModule] */;
val* var11 /* : nullable Object */;
val* var_res /* var res: MModule */;
short int var12 /* : Bool */;
val* var13 /* : null */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__mgroup]))(self) /* mgroup on <self:MModule>*/;
var_mgroup = var1;
var2 = NULL;
if (var_mgroup == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__mproject]))(var_mgroup) /* mproject on <var_mgroup:nullable MGroup(MGroup)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_mproject__MProject__root]))(var5) /* root on <var5:MProject>*/;
var_mgroup = var6;
if (var_mgroup == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 185);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mmodule__MGroup__mmodules]))(var_mgroup) /* mmodules on <var_mgroup:nullable MGroup>*/;
}
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var7) /* is_empty on <var7:Array[MModule]>*/;
if (var8){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
if (var_mgroup == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 186);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mmodule__MGroup__mmodules]))(var_mgroup) /* mmodules on <var_mgroup:nullable MGroup>*/;
}
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__first]))(var10) /* first on <var10:Array[MModule]>*/;
var_res = var11;
var12 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, self) /* == on <var_res:MModule>*/;
if (var12){
var13 = NULL;
var = var13;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#public_owner for (self: Object): nullable MModule */
val* VIRTUAL_mmodule__MModule__public_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = mmodule__MModule__public_owner(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_visible for (self: MModule, MModule, MVisibility): Bool */
short int mmodule__MModule__is_visible(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_intro_mmodule /* var intro_mmodule: MModule */;
val* var_visibility /* var visibility: MVisibility */;
val* var1 /* : MVisibility */;
val* var_v /* var v: MVisibility */;
val* var2 /* : MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : MVisibility */;
short int var5 /* : Bool */;
val* var6 /* : MVisibility */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
short int var9 /* : Bool */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var12 /* : MVisibility */;
short int var13 /* : Bool */;
val* var14 /* : MVisibility */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_intro_mmodule = p0;
var_visibility = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_mmodule__MModule__visibility_for]))(self, var_intro_mmodule) /* visibility_for on <self:MModule>*/;
var_v = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:MModule>*/;
var3 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var2) /* == on <var_v:MVisibility>*/;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var5 = ((short int (*)(val*, val*))(var_visibility->class->vft[COLOR_kernel__Comparable___62d_61d]))(var_visibility, var4) /* >= on <var_visibility:MVisibility>*/;
var = var5;
goto RET_LABEL;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
var7 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var6) /* == on <var_v:MVisibility>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var9 = ((short int (*)(val*, val*))(var_visibility->class->vft[COLOR_kernel__Comparable___62d]))(var_visibility, var8) /* > on <var_visibility:MVisibility>*/;
var = var9;
goto RET_LABEL;
} else {
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var11 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var10) /* == on <var_v:MVisibility>*/;
if (var11){
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var13 = ((short int (*)(val*, val*))(var_visibility->class->vft[COLOR_kernel__Comparable___62d]))(var_visibility, var12) /* > on <var_visibility:MVisibility>*/;
var = var13;
goto RET_LABEL;
} else {
var14 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__none_visibility]))(self) /* none_visibility on <self:MModule>*/;
var15 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var14) /* == on <var_v:MVisibility>*/;
if (var15){
var16 = 0;
var = var16;
goto RET_LABEL;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/mmodule.nit", 204);
show_backtrace(1);
}
}
}
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_visible for (self: Object, MModule, MVisibility): Bool */
short int VIRTUAL_mmodule__MModule__is_visible(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = mmodule__MModule__is_visible(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
