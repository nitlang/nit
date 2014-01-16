#include "model_base.sep.0.h"
/* method model_base#Model#mmodules for (self: Model): Array[MModule] */
val* model_base__Model__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_model_base__Model___64dmmodules].val; /* @mmodules on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 26);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodules for (self: Object): Array[MModule] */
val* VIRTUAL_model_base__Model__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = model_base__Model__mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodules= for (self: Model, Array[MModule]) */
void model_base__Model__mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__Model___64dmmodules].val = p0; /* @mmodules on <self:Model> */
RET_LABEL:;
}
/* method model_base#Model#mmodules= for (self: Object, Array[MModule]) */
void VIRTUAL_model_base__Model__mmodules_61d(val* self, val* p0) {
model_base__Model__mmodules_61d(self, p0);
RET_LABEL:;
}
/* method model_base#Model#mmodule_nesting_hierarchy for (self: Model): POSet[MModule] */
val* model_base__Model__mmodule_nesting_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_model_base__Model___64dmmodule_nesting_hierarchy].val; /* @mmodule_nesting_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule_nesting_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 29);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodule_nesting_hierarchy for (self: Object): POSet[MModule] */
val* VIRTUAL_model_base__Model__mmodule_nesting_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = model_base__Model__mmodule_nesting_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodule_nesting_hierarchy= for (self: Model, POSet[MModule]) */
void model_base__Model__mmodule_nesting_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__Model___64dmmodule_nesting_hierarchy].val = p0; /* @mmodule_nesting_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model_base#Model#mmodule_nesting_hierarchy= for (self: Object, POSet[MModule]) */
void VIRTUAL_model_base__Model__mmodule_nesting_hierarchy_61d(val* self, val* p0) {
model_base__Model__mmodule_nesting_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method model_base#Model#mmodule_importation_hierarchy for (self: Model): POSet[MModule] */
val* model_base__Model__mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_model_base__Model___64dmmodule_importation_hierarchy].val; /* @mmodule_importation_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule_importation_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 33);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodule_importation_hierarchy for (self: Object): POSet[MModule] */
val* VIRTUAL_model_base__Model__mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = model_base__Model__mmodule_importation_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodule_importation_hierarchy= for (self: Model, POSet[MModule]) */
void model_base__Model__mmodule_importation_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__Model___64dmmodule_importation_hierarchy].val = p0; /* @mmodule_importation_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model_base#Model#mmodule_importation_hierarchy= for (self: Object, POSet[MModule]) */
void VIRTUAL_model_base__Model__mmodule_importation_hierarchy_61d(val* self, val* p0) {
model_base__Model__mmodule_importation_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method model_base#Model#mmodules_by_name for (self: Model): MultiHashMap[String, MModule] */
val* model_base__Model__mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = self->attrs[COLOR_model_base__Model___64dmmodules_by_name].val; /* @mmodules_by_name on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodules_by_name");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 36);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodules_by_name for (self: Object): MultiHashMap[String, MModule] */
val* VIRTUAL_model_base__Model__mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = model_base__Model__mmodules_by_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#mmodules_by_name= for (self: Model, MultiHashMap[String, MModule]) */
void model_base__Model__mmodules_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__Model___64dmmodules_by_name].val = p0; /* @mmodules_by_name on <self:Model> */
RET_LABEL:;
}
/* method model_base#Model#mmodules_by_name= for (self: Object, MultiHashMap[String, MModule]) */
void VIRTUAL_model_base__Model__mmodules_by_name_61d(val* self, val* p0) {
model_base__Model__mmodules_by_name_61d(self, p0);
RET_LABEL:;
}
/* method model_base#Model#get_mmodules_by_name for (self: Model, String): nullable Array[MModule] */
val* model_base__Model__get_mmodules_by_name(val* self, val* p0) {
val* var /* : nullable Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MModule] */;
short int var2 /* : Bool */;
val* var3 /* : MultiHashMap[String, MModule] */;
val* var4 /* : nullable Object */;
val* var5 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Model__mmodules_by_name]))(self) /* mmodules_by_name on <self:Model>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_name) /* has_key on <var1:MultiHashMap[String, MModule]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Model__mmodules_by_name]))(self) /* mmodules_by_name on <self:Model>*/;
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
/* method model_base#Model#get_mmodules_by_name for (self: Object, String): nullable Array[MModule] */
val* VIRTUAL_model_base__Model__get_mmodules_by_name(val* self, val* p0) {
val* var /* : nullable Array[MModule] */;
val* var1 /* : nullable Array[MModule] */;
var1 = model_base__Model__get_mmodules_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Model#init for (self: Model) */
void model_base__Model__init(val* self) {
RET_LABEL:;
}
/* method model_base#Model#init for (self: Object) */
void VIRTUAL_model_base__Model__init(val* self) {
model_base__Model__init(self);
RET_LABEL:;
}
/* method model_base#MModule#model for (self: MModule): Model */
val* model_base__MModule__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_model_base__MModule___64dmodel].val; /* @model on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 56);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#model for (self: Object): Model */
val* VIRTUAL_model_base__MModule__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model_base__MModule__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#model= for (self: MModule, Model) */
void model_base__MModule__model_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64dmodel].val = p0; /* @model on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#model= for (self: Object, Model) */
void VIRTUAL_model_base__MModule__model_61d(val* self, val* p0) {
model_base__MModule__model_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#direct_owner for (self: MModule): nullable MModule */
val* model_base__MModule__direct_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_model_base__MModule___64ddirect_owner].val; /* @direct_owner on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#direct_owner for (self: Object): nullable MModule */
val* VIRTUAL_model_base__MModule__direct_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = model_base__MModule__direct_owner(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#direct_owner= for (self: MModule, nullable MModule) */
void model_base__MModule__direct_owner_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64ddirect_owner].val = p0; /* @direct_owner on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#direct_owner= for (self: Object, nullable MModule) */
void VIRTUAL_model_base__MModule__direct_owner_61d(val* self, val* p0) {
model_base__MModule__direct_owner_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#name for (self: MModule): String */
val* model_base__MModule__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model_base__MModule___64dname].val; /* @name on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 62);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#name for (self: Object): String */
val* VIRTUAL_model_base__MModule__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model_base__MModule__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#name= for (self: MModule, String) */
void model_base__MModule__name_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64dname].val = p0; /* @name on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#name= for (self: Object, String) */
void VIRTUAL_model_base__MModule__name_61d(val* self, val* p0) {
model_base__MModule__name_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#location for (self: MModule): Location */
val* model_base__MModule__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_model_base__MModule___64dlocation].val; /* @location on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 65);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#location for (self: Object): Location */
val* VIRTUAL_model_base__MModule__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = model_base__MModule__location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#location= for (self: MModule, Location) */
void model_base__MModule__location_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64dlocation].val = p0; /* @location on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#location= for (self: Object, Location) */
void VIRTUAL_model_base__MModule__location_61d(val* self, val* p0) {
model_base__MModule__location_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#to_s for (self: MModule): String */
val* model_base__MModule__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__name]))(self) /* name on <self:MModule>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#MModule#to_s for (self: Object): String */
val* VIRTUAL_model_base__MModule__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model_base__MModule__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#in_nesting for (self: MModule): POSetElement[MModule] */
val* model_base__MModule__in_nesting(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_model_base__MModule___64din_nesting].val; /* @in_nesting on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_nesting");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 71);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#in_nesting for (self: Object): POSetElement[MModule] */
val* VIRTUAL_model_base__MModule__in_nesting(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = model_base__MModule__in_nesting(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#in_nesting= for (self: MModule, POSetElement[MModule]) */
void model_base__MModule__in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64din_nesting].val = p0; /* @in_nesting on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#in_nesting= for (self: Object, POSetElement[MModule]) */
void VIRTUAL_model_base__MModule__in_nesting_61d(val* self, val* p0) {
model_base__MModule__in_nesting_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#in_importation for (self: MModule): POSetElement[MModule] */
val* model_base__MModule__in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_model_base__MModule___64din_importation].val; /* @in_importation on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_importation");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 74);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#in_importation for (self: Object): POSetElement[MModule] */
val* VIRTUAL_model_base__MModule__in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = model_base__MModule__in_importation(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#in_importation= for (self: MModule, POSetElement[MModule]) */
void model_base__MModule__in_importation_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64din_importation].val = p0; /* @in_importation on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#in_importation= for (self: Object, POSetElement[MModule]) */
void VIRTUAL_model_base__MModule__in_importation_61d(val* self, val* p0) {
model_base__MModule__in_importation_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#full_name for (self: MModule): String */
val* model_base__MModule__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MModule */;
val* var_owner /* var owner: nullable MModule */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__public_owner]))(self) /* public_owner on <self:MModule>*/;
var_owner = var1;
var2 = NULL;
if (var_owner == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__name]))(self) /* name on <self:MModule>*/;
var = var4;
goto RET_LABEL;
} else {
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
var6 = 5;
((void (*)(val*, long))(var5->class->vft[COLOR_array__Array__with_capacity]))(var5, var6) /* with_capacity on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_ = var5;
if (varonce) {
var7 = varonce;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
var11 = ((val* (*)(val*))(var_owner->class->vft[COLOR_model_base__MModule__full_name]))(var_owner) /* full_name on <var_owner:nullable MModule(MModule)>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "::";
var15 = 2;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__name]))(self) /* name on <self:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
var23 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model_base#MModule#full_name for (self: Object): String */
val* VIRTUAL_model_base__MModule__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model_base__MModule__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#init for (self: MModule, Model, nullable MModule, String, Location) */
void model_base__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_model /* var model: Model */;
val* var_direct_owner /* var direct_owner: nullable MModule */;
val* var_name /* var name: String */;
val* var_location /* var location: Location */;
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : Array[MModule] */;
val* var2 /* : POSet[MModule] */;
val* var3 /* : POSetElement[Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : POSet[MModule] */;
val* var7 /* : POSet[MModule] */;
val* var8 /* : POSetElement[Object] */;
var_model = p0;
var_direct_owner = p1;
var_name = p2;
var_location = p3;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__model_61d]))(self, var_model) /* model= on <self:MModule>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__name_61d]))(self, var_name) /* name= on <self:MModule>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__location_61d]))(self, var_location) /* location= on <self:MModule>*/;
var = ((val* (*)(val*))(var_model->class->vft[COLOR_model_base__Model__mmodules_by_name]))(var_model) /* mmodules_by_name on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var, var_name, self) /* add_one on <var:MultiHashMap[String, MModule]>*/;
var1 = ((val* (*)(val*))(var_model->class->vft[COLOR_model_base__Model__mmodules]))(var_model) /* mmodules on <var_model:Model>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, self) /* add on <var1:Array[MModule]>*/;
var2 = ((val* (*)(val*))(var_model->class->vft[COLOR_model_base__Model__mmodule_nesting_hierarchy]))(var_model) /* mmodule_nesting_hierarchy on <var_model:Model>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_poset__POSet__add_node]))(var2, self) /* add_node on <var2:POSet[MModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__in_nesting_61d]))(self, var3) /* in_nesting= on <self:MModule>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__direct_owner_61d]))(self, var_direct_owner) /* direct_owner= on <self:MModule>*/;
var4 = NULL;
if (var_direct_owner == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = ((val* (*)(val*))(var_model->class->vft[COLOR_model_base__Model__mmodule_nesting_hierarchy]))(var_model) /* mmodule_nesting_hierarchy on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_poset__POSet__add_edge]))(var6, var_direct_owner, self) /* add_edge on <var6:POSet[MModule]>*/;
} else {
}
var7 = ((val* (*)(val*))(var_model->class->vft[COLOR_model_base__Model__mmodule_importation_hierarchy]))(var_model) /* mmodule_importation_hierarchy on <var_model:Model>*/;
var8 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_poset__POSet__add_node]))(var7, self) /* add_node on <var7:POSet[MModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__in_importation_61d]))(self, var8) /* in_importation= on <self:MModule>*/;
RET_LABEL:;
}
/* method model_base#MModule#init for (self: Object, Model, nullable MModule, String, Location) */
void VIRTUAL_model_base__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3) {
model_base__MModule__init(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method model_base#MModule#set_imported_mmodules for (self: MModule, Array[MModule]) */
void model_base__MModule__set_imported_mmodules(val* self, val* p0) {
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
var = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var) /* direct_greaters on <var:POSetElement[MModule]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:Collection[Object](Collection[MModule])>*/;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert \'unique_invocation\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 111);
exit(1);
}
var3 = ((val* (*)(val*))(var_imported_mmodules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_imported_mmodules) /* iterator on <var_imported_mmodules:Array[MModule]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_m = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__model]))(self) /* model on <self:MModule>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model_base__Model__mmodule_importation_hierarchy]))(var6) /* mmodule_importation_hierarchy on <var6:Model>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_poset__POSet__add_edge]))(var7, self, var_m) /* add_edge on <var7:POSet[MModule]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method model_base#MModule#set_imported_mmodules for (self: Object, Array[MModule]) */
void VIRTUAL_model_base__MModule__set_imported_mmodules(val* self, val* p0) {
model_base__MModule__set_imported_mmodules(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#intrude_mmodules for (self: MModule): HashSet[MModule] */
val* model_base__MModule__intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_model_base__MModule___64dintrude_mmodules].val; /* @intrude_mmodules on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intrude_mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 117);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#intrude_mmodules for (self: Object): HashSet[MModule] */
val* VIRTUAL_model_base__MModule__intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = model_base__MModule__intrude_mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#intrude_mmodules= for (self: MModule, HashSet[MModule]) */
void model_base__MModule__intrude_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64dintrude_mmodules].val = p0; /* @intrude_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#intrude_mmodules= for (self: Object, HashSet[MModule]) */
void VIRTUAL_model_base__MModule__intrude_mmodules_61d(val* self, val* p0) {
model_base__MModule__intrude_mmodules_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#public_mmodules for (self: MModule): HashSet[MModule] */
val* model_base__MModule__public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_model_base__MModule___64dpublic_mmodules].val; /* @public_mmodules on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @public_mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 118);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#public_mmodules for (self: Object): HashSet[MModule] */
val* VIRTUAL_model_base__MModule__public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = model_base__MModule__public_mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#public_mmodules= for (self: MModule, HashSet[MModule]) */
void model_base__MModule__public_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64dpublic_mmodules].val = p0; /* @public_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#public_mmodules= for (self: Object, HashSet[MModule]) */
void VIRTUAL_model_base__MModule__public_mmodules_61d(val* self, val* p0) {
model_base__MModule__public_mmodules_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#private_mmodules for (self: MModule): HashSet[MModule] */
val* model_base__MModule__private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_model_base__MModule___64dprivate_mmodules].val; /* @private_mmodules on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @private_mmodules");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 119);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#private_mmodules for (self: Object): HashSet[MModule] */
val* VIRTUAL_model_base__MModule__private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = model_base__MModule__private_mmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#private_mmodules= for (self: MModule, HashSet[MModule]) */
void model_base__MModule__private_mmodules_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MModule___64dprivate_mmodules].val = p0; /* @private_mmodules on <self:MModule> */
RET_LABEL:;
}
/* method model_base#MModule#private_mmodules= for (self: Object, HashSet[MModule]) */
void VIRTUAL_model_base__MModule__private_mmodules_61d(val* self, val* p0) {
model_base__MModule__private_mmodules_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MModule#visibility_for for (self: MModule, MModule): MVisibility */
val* model_base__MModule__visibility_for(val* self, val* p0) {
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
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__intrude_mmodules]))(self) /* intrude_mmodules on <self:MModule>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_m) /* has on <var3:HashSet[MModule]>*/;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:MModule>*/;
var = var5;
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__Collection__has]))(var6, var_m) /* has on <var6:HashSet[MModule]>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
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
/* method model_base#MModule#visibility_for for (self: Object, MModule): MVisibility */
val* VIRTUAL_model_base__MModule__visibility_for(val* self, val* p0) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__MModule__visibility_for(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#set_visibility_for for (self: MModule, MModule, MVisibility) */
void model_base__MModule__set_visibility_for(val* self, val* p0, val* p1) {
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
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__intrude_mmodules]))(self) /* intrude_mmodules on <self:MModule>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_m) /* add on <var2:HashSet[MModule]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__intrude_mmodules]))(self) /* intrude_mmodules on <self:MModule>*/;
var4 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__intrude_mmodules]))(var_m) /* intrude_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var3, var4) /* add_all on <var3:HashSet[MModule]>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var6 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__public_mmodules]))(var_m) /* public_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var5, var6) /* add_all on <var5:HashSet[MModule]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var8 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__private_mmodules]))(var_m) /* private_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var7, var8) /* add_all on <var7:HashSet[MModule]>*/;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
var10 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var9) /* == on <var_v:MVisibility>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var_m) /* add on <var11:HashSet[MModule]>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var13 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__intrude_mmodules]))(var_m) /* intrude_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var12, var13) /* add_all on <var12:HashSet[MModule]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__public_mmodules]))(self) /* public_mmodules on <self:MModule>*/;
var15 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__public_mmodules]))(var_m) /* public_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var14, var15) /* add_all on <var14:HashSet[MModule]>*/;
} else {
var16 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:MModule>*/;
var17 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var16) /* == on <var_v:MVisibility>*/;
if (var17){
var18 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
((void (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var18, var_m) /* add on <var18:HashSet[MModule]>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var20 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__intrude_mmodules]))(var_m) /* intrude_mmodules on <var_m:MModule>*/;
((void (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var19, var20) /* add_all on <var19:HashSet[MModule]>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__private_mmodules]))(self) /* private_mmodules on <self:MModule>*/;
var22 = ((val* (*)(val*))(var_m->class->vft[COLOR_model_base__MModule__public_mmodules]))(var_m) /* public_mmodules on <var_m:MModule>*/;
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
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var35) /* print on <self:MModule>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 150);
exit(1);
}
}
}
RET_LABEL:;
}
/* method model_base#MModule#set_visibility_for for (self: Object, MModule, MVisibility) */
void VIRTUAL_model_base__MModule__set_visibility_for(val* self, val* p0, val* p1) {
model_base__MModule__set_visibility_for(self, p0, p1);
RET_LABEL:;
}
/* method model_base#MModule#public_owner for (self: MModule): nullable MModule */
val* model_base__MModule__public_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
val* var_res /* var res: nullable MModule */;
val* var_last /* var last: nullable MModule */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MVisibility */;
val* var5 /* : MVisibility */;
short int var6 /* : Bool */;
val* var7 /* : nullable MModule */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__direct_owner]))(self) /* direct_owner on <self:MModule>*/;
var_res = var1;
var_last = var_res;
for(;;) {
var2 = NULL;
if (var_last == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) break;
var4 = ((val* (*)(val*, val*))(var_last->class->vft[COLOR_model_base__MModule__visibility_for]))(var_last, self) /* visibility_for on <var_last:nullable MModule(MModule)>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Comparable___62d_61d]))(var4, var5) /* >= on <var4:MVisibility>*/;
if (var6){
var_res = var_last;
} else {
}
var7 = ((val* (*)(val*))(var_last->class->vft[COLOR_model_base__MModule__direct_owner]))(var_last) /* direct_owner on <var_last:nullable MModule(MModule)>*/;
var_last = var7;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#MModule#public_owner for (self: Object): nullable MModule */
val* VIRTUAL_model_base__MModule__public_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = model_base__MModule__public_owner(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MModule#is_visible for (self: MModule, MModule, MVisibility): Bool */
short int model_base__MModule__is_visible(val* self, val* p0, val* p1) {
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
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model_base__MModule__visibility_for]))(self, var_intro_mmodule) /* visibility_for on <self:MModule>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 181);
exit(1);
}
}
}
}
RET_LABEL:;
return var;
}
/* method model_base#MModule#is_visible for (self: Object, MModule, MVisibility): Bool */
short int VIRTUAL_model_base__MModule__is_visible(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model_base__MModule__is_visible(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s for (self: MVisibility): String */
val* model_base__MVisibility__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model_base__MVisibility___64dto_s].val; /* @to_s on <self:MVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 200);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s for (self: Object): String */
val* VIRTUAL_model_base__MVisibility__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model_base__MVisibility__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s= for (self: MVisibility, String) */
void model_base__MVisibility__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MVisibility___64dto_s].val = p0; /* @to_s on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#to_s= for (self: Object, String) */
void VIRTUAL_model_base__MVisibility__to_s_61d(val* self, val* p0) {
model_base__MVisibility__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MVisibility#level for (self: MVisibility): Int */
long model_base__MVisibility__level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model_base__MVisibility___64dlevel].l; /* @level on <self:MVisibility> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level for (self: Object): Int */
long VIRTUAL_model_base__MVisibility__level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model_base__MVisibility__level(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level= for (self: MVisibility, Int) */
void model_base__MVisibility__level_61d(val* self, long p0) {
self->attrs[COLOR_model_base__MVisibility___64dlevel].l = p0; /* @level on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#level= for (self: Object, Int) */
void VIRTUAL_model_base__MVisibility__level_61d(val* self, long p0) {
model_base__MVisibility__level_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MVisibility#init for (self: MVisibility, String, Int) */
void model_base__MVisibility__init(val* self, val* p0, long p1) {
val* var_s /* var s: String */;
long var_level /* var level: Int */;
var_s = p0;
var_level = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MVisibility__to_s_61d]))(self, var_s) /* to_s= on <self:MVisibility>*/;
((void (*)(val*, long))(self->class->vft[COLOR_model_base__MVisibility__level_61d]))(self, var_level) /* level= on <self:MVisibility>*/;
RET_LABEL:;
}
/* method model_base#MVisibility#init for (self: Object, String, Int) */
void VIRTUAL_model_base__MVisibility__init(val* self, val* p0, long p1) {
model_base__MVisibility__init(self, p0, p1);
RET_LABEL:;
}
/* method model_base#MVisibility#< for (self: MVisibility, MVisibility): Bool */
short int model_base__MVisibility___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: MVisibility */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:MVisibility> isa OTHER */
/* <p0:MVisibility> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 210);
exit(1);
}
var_other = p0;
var2 = ((long (*)(val*))(self->class->vft[COLOR_model_base__MVisibility__level]))(self) /* level on <self:MVisibility>*/;
var3 = ((long (*)(val*))(var_other->class->vft[COLOR_model_base__MVisibility__level]))(var_other) /* level on <var_other:MVisibility>*/;
{ /* Inline kernel#Int#< (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
exit(1);
}
var10 = var2 < var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#< for (self: Object, Comparable): Bool */
short int VIRTUAL_model_base__MVisibility___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model_base__MVisibility___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#intrude_visibility for (self: Object): MVisibility */
val* model_base__Object__intrude_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "intrude";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 4;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
CHECK_NEW_model_base__MVisibility(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#intrude_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__intrude_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__intrude_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#public_visibility for (self: Object): MVisibility */
val* model_base__Object__public_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "public";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 4;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
CHECK_NEW_model_base__MVisibility(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#public_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__public_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__public_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#protected_visibility for (self: Object): MVisibility */
val* model_base__Object__protected_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "protected";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 3;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
CHECK_NEW_model_base__MVisibility(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#protected_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__protected_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__protected_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#private_visibility for (self: Object): MVisibility */
val* model_base__Object__private_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "private";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 2;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
CHECK_NEW_model_base__MVisibility(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#private_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__private_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__private_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#none_visibility for (self: Object): MVisibility */
val* model_base__Object__none_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "none";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 2;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
CHECK_NEW_model_base__MVisibility(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#none_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__none_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__none_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
