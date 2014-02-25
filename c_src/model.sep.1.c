#include "model.sep.0.h"
/* method model#Model#mclasses for (self: Model): Array[MClass] */
val* model__Model__mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_model__Model___64dmclasses].val; /* @mclasses on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclasses");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 38);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses for (self: Object): Array[MClass] */
val* VIRTUAL_model__Model__mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = model__Model__mclasses(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses= for (self: Model, Array[MClass]) */
void model__Model__mclasses_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dmclasses].val = p0; /* @mclasses on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mclasses= for (self: Object, Array[MClass]) */
void VIRTUAL_model__Model__mclasses_61d(val* self, val* p0) {
model__Model__mclasses_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#mproperties for (self: Model): Array[MProperty] */
val* model__Model__mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_model__Model___64dmproperties].val; /* @mproperties on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperties");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 41);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties for (self: Object): Array[MProperty] */
val* VIRTUAL_model__Model__mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = model__Model__mproperties(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties= for (self: Model, Array[MProperty]) */
void model__Model__mproperties_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dmproperties].val = p0; /* @mproperties on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mproperties= for (self: Object, Array[MProperty]) */
void VIRTUAL_model__Model__mproperties_61d(val* self, val* p0) {
model__Model__mproperties_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#mclassdef_hierarchy for (self: Model): POSet[MClassDef] */
val* model__Model__mclassdef_hierarchy(val* self) {
val* var /* : POSet[MClassDef] */;
val* var1 /* : POSet[MClassDef] */;
var1 = self->attrs[COLOR_model__Model___64dmclassdef_hierarchy].val; /* @mclassdef_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 44);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclassdef_hierarchy for (self: Object): POSet[MClassDef] */
val* VIRTUAL_model__Model__mclassdef_hierarchy(val* self) {
val* var /* : POSet[MClassDef] */;
val* var1 /* : POSet[MClassDef] */;
var1 = model__Model__mclassdef_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclassdef_hierarchy= for (self: Model, POSet[MClassDef]) */
void model__Model__mclassdef_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dmclassdef_hierarchy].val = p0; /* @mclassdef_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mclassdef_hierarchy= for (self: Object, POSet[MClassDef]) */
void VIRTUAL_model__Model__mclassdef_hierarchy_61d(val* self, val* p0) {
model__Model__mclassdef_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#intro_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* model__Model__intro_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_model__Model___64dintro_mtype_specialization_hierarchy].val; /* @intro_mtype_specialization_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mtype_specialization_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 50);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#intro_mtype_specialization_hierarchy for (self: Object): POSet[MClassType] */
val* VIRTUAL_model__Model__intro_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = model__Model__intro_mtype_specialization_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#intro_mtype_specialization_hierarchy= for (self: Model, POSet[MClassType]) */
void model__Model__intro_mtype_specialization_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dintro_mtype_specialization_hierarchy].val = p0; /* @intro_mtype_specialization_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model#Model#intro_mtype_specialization_hierarchy= for (self: Object, POSet[MClassType]) */
void VIRTUAL_model__Model__intro_mtype_specialization_hierarchy_61d(val* self, val* p0) {
model__Model__intro_mtype_specialization_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#full_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* model__Model__full_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_model__Model___64dfull_mtype_specialization_hierarchy].val; /* @full_mtype_specialization_hierarchy on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @full_mtype_specialization_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 61);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#full_mtype_specialization_hierarchy for (self: Object): POSet[MClassType] */
val* VIRTUAL_model__Model__full_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = model__Model__full_mtype_specialization_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#full_mtype_specialization_hierarchy= for (self: Model, POSet[MClassType]) */
void model__Model__full_mtype_specialization_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dfull_mtype_specialization_hierarchy].val = p0; /* @full_mtype_specialization_hierarchy on <self:Model> */
RET_LABEL:;
}
/* method model#Model#full_mtype_specialization_hierarchy= for (self: Object, POSet[MClassType]) */
void VIRTUAL_model__Model__full_mtype_specialization_hierarchy_61d(val* self, val* p0) {
model__Model__full_mtype_specialization_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#mclasses_by_name for (self: Model): MultiHashMap[String, MClass] */
val* model__Model__mclasses_by_name(val* self) {
val* var /* : MultiHashMap[String, MClass] */;
val* var1 /* : MultiHashMap[String, MClass] */;
var1 = self->attrs[COLOR_model__Model___64dmclasses_by_name].val; /* @mclasses_by_name on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclasses_by_name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 70);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses_by_name for (self: Object): MultiHashMap[String, MClass] */
val* VIRTUAL_model__Model__mclasses_by_name(val* self) {
val* var /* : MultiHashMap[String, MClass] */;
val* var1 /* : MultiHashMap[String, MClass] */;
var1 = model__Model__mclasses_by_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses_by_name= for (self: Model, MultiHashMap[String, MClass]) */
void model__Model__mclasses_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dmclasses_by_name].val = p0; /* @mclasses_by_name on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mclasses_by_name= for (self: Object, MultiHashMap[String, MClass]) */
void VIRTUAL_model__Model__mclasses_by_name_61d(val* self, val* p0) {
model__Model__mclasses_by_name_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#get_mclasses_by_name for (self: Model, String): nullable Array[MClass] */
val* model__Model__get_mclasses_by_name(val* self, val* p0) {
val* var /* : nullable Array[MClass] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MClass] */;
short int var2 /* : Bool */;
val* var3 /* : MultiHashMap[String, MClass] */;
val* var4 /* : nullable Object */;
val* var5 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Model__mclasses_by_name]))(self) /* mclasses_by_name on <self:Model>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_name) /* has_key on <var1:MultiHashMap[String, MClass]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__Model__mclasses_by_name]))(self) /* mclasses_by_name on <self:Model>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_name) /* [] on <var3:MultiHashMap[String, MClass]>*/;
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
/* method model#Model#get_mclasses_by_name for (self: Object, String): nullable Array[MClass] */
val* VIRTUAL_model__Model__get_mclasses_by_name(val* self, val* p0) {
val* var /* : nullable Array[MClass] */;
val* var1 /* : nullable Array[MClass] */;
var1 = model__Model__get_mclasses_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties_by_name for (self: Model): MultiHashMap[String, MProperty] */
val* model__Model__mproperties_by_name(val* self) {
val* var /* : MultiHashMap[String, MProperty] */;
val* var1 /* : MultiHashMap[String, MProperty] */;
var1 = self->attrs[COLOR_model__Model___64dmproperties_by_name].val; /* @mproperties_by_name on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperties_by_name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 88);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties_by_name for (self: Object): MultiHashMap[String, MProperty] */
val* VIRTUAL_model__Model__mproperties_by_name(val* self) {
val* var /* : MultiHashMap[String, MProperty] */;
val* var1 /* : MultiHashMap[String, MProperty] */;
var1 = model__Model__mproperties_by_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties_by_name= for (self: Model, MultiHashMap[String, MProperty]) */
void model__Model__mproperties_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dmproperties_by_name].val = p0; /* @mproperties_by_name on <self:Model> */
RET_LABEL:;
}
/* method model#Model#mproperties_by_name= for (self: Object, MultiHashMap[String, MProperty]) */
void VIRTUAL_model__Model__mproperties_by_name_61d(val* self, val* p0) {
model__Model__mproperties_by_name_61d(self, p0);
RET_LABEL:;
}
/* method model#Model#get_mproperties_by_name for (self: Model, String): nullable Array[MProperty] */
val* model__Model__get_mproperties_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProperty] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProperty] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : MultiHashMap[String, MProperty] */;
val* var6 /* : nullable Object */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Model__mproperties_by_name]))(self) /* mproperties_by_name on <self:Model>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_name) /* has_key on <var1:MultiHashMap[String, MProperty]>*/;
var3 = !var2;
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__Model__mproperties_by_name]))(self) /* mproperties_by_name on <self:Model>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_name) /* [] on <var5:MultiHashMap[String, MProperty]>*/;
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model#Model#get_mproperties_by_name for (self: Object, String): nullable Array[MProperty] */
val* VIRTUAL_model__Model__get_mproperties_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProperty] */;
val* var1 /* : nullable Array[MProperty] */;
var1 = model__Model__get_mproperties_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#null_type for (self: Model): MNullType */
val* model__Model__null_type(val* self) {
val* var /* : MNullType */;
val* var1 /* : MNullType */;
var1 = self->attrs[COLOR_model__Model___64dnull_type].val; /* @null_type on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @null_type");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 106);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#null_type for (self: Object): MNullType */
val* VIRTUAL_model__Model__null_type(val* self) {
val* var /* : MNullType */;
val* var1 /* : MNullType */;
var1 = model__Model__null_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#null_type= for (self: Model, MNullType) */
void model__Model__null_type_61d(val* self, val* p0) {
self->attrs[COLOR_model__Model___64dnull_type].val = p0; /* @null_type on <self:Model> */
RET_LABEL:;
}
/* method model#Model#null_type= for (self: Object, MNullType) */
void VIRTUAL_model__Model__null_type_61d(val* self, val* p0) {
model__Model__null_type_61d(self, p0);
RET_LABEL:;
}
/* method model#MModule#intro_mclasses for (self: MModule): Array[MClass] */
val* model__MModule__intro_mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_model__MModule___64dintro_mclasses].val; /* @intro_mclasses on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mclasses");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 111);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#intro_mclasses for (self: Object): Array[MClass] */
val* VIRTUAL_model__MModule__intro_mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = model__MModule__intro_mclasses(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#intro_mclasses= for (self: MModule, Array[MClass]) */
void model__MModule__intro_mclasses_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___64dintro_mclasses].val = p0; /* @intro_mclasses on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#intro_mclasses= for (self: Object, Array[MClass]) */
void VIRTUAL_model__MModule__intro_mclasses_61d(val* self, val* p0) {
model__MModule__intro_mclasses_61d(self, p0);
RET_LABEL:;
}
/* method model#MModule#mclassdefs for (self: MModule): Array[MClassDef] */
val* model__MModule__mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_model__MModule___64dmclassdefs].val; /* @mclassdefs on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdefs");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 114);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#mclassdefs for (self: Object): Array[MClassDef] */
val* VIRTUAL_model__MModule__mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = model__MModule__mclassdefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#mclassdefs= for (self: MModule, Array[MClassDef]) */
void model__MModule__mclassdefs_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___64dmclassdefs].val = p0; /* @mclassdefs on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#mclassdefs= for (self: Object, Array[MClassDef]) */
void VIRTUAL_model__MModule__mclassdefs_61d(val* self, val* p0) {
model__MModule__mclassdefs_61d(self, p0);
RET_LABEL:;
}
/* method model#MModule#has_mclass for (self: MModule, MClass): Bool */
short int model__MModule__has_mclass(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : POSetElement[MModule] */;
val* var2 /* : MModule */;
short int var3 /* : Bool */;
var_mclass = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var2 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
var3 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_poset__POSetElement___60d_61d]))(var1, var2) /* <= on <var1:POSetElement[MModule]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#has_mclass for (self: Object, MClass): Bool */
short int VIRTUAL_model__MModule__has_mclass(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MModule__has_mclass(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy for (self: MModule): POSet[MClass] */
val* model__MModule__flatten_mclass_hierarchy(val* self) {
val* var /* : POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
val* var_res /* var res: nullable POSet[MClass] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : POSet[MClass] */;
val* var5 /* : POSetElement[MModule] */;
val* var6 /* : Collection[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var10 /* : Array[MClassDef] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var14 /* : MClass */;
val* var_c /* var c: MClass */;
val* var15 /* : POSetElement[Object] */;
val* var16 /* : Array[MClassType] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var20 /* : MClass */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy_cache]))(self) /* flatten_mclass_hierarchy_cache on <self:MModule>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = NEW_poset__POSet(&type_poset__POSetmodel__MClass);
((void (*)(val*))(var4->class->vft[COLOR_poset__POSet__init]))(var4) /* init on <var4:POSet[MClass]>*/;
var_res = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_poset__POSetElement__greaters]))(var5) /* greaters on <var5:POSetElement[MModule]>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Collection[Object](Collection[MModule])>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_m = var9;
var10 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MModule__mclassdefs]))(var_m) /* mclassdefs on <var_m:MModule>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Array[MClassDef]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_cd = var13;
var14 = ((val* (*)(val*))(var_cd->class->vft[COLOR_model__MClassDef__mclass]))(var_cd) /* mclass on <var_cd:MClassDef>*/;
var_c = var14;
var15 = ((val* (*)(val*, val*))(var_res->class->vft[COLOR_poset__POSet__add_node]))(var_res, var_c) /* add_node on <var_res:nullable POSet[MClass](POSet[MClass])>*/;
var15;
var16 = ((val* (*)(val*))(var_cd->class->vft[COLOR_model__MClassDef__supertypes]))(var_cd) /* supertypes on <var_cd:MClassDef>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:Array[MClassType]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_s = var19;
var20 = ((val* (*)(val*))(var_s->class->vft[COLOR_model__MClassType__mclass]))(var_s) /* mclass on <var_s:MClassType>*/;
((void (*)(val*, val*, val*))(var_res->class->vft[COLOR_poset__POSet__add_edge]))(var_res, var_c, var20) /* add_edge on <var_res:nullable POSet[MClass](POSet[MClass])>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label21: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label21: (void)0;
CONTINUE_label22: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label22: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy_cache_61d]))(self, var_res) /* flatten_mclass_hierarchy_cache= on <self:MModule>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy for (self: Object): POSet[MClass] */
val* VIRTUAL_model__MModule__flatten_mclass_hierarchy(val* self) {
val* var /* : POSet[MClass] */;
val* var1 /* : POSet[MClass] */;
var1 = model__MModule__flatten_mclass_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#linearize_mclasses for (self: MModule, Array[MClass]) */
void model__MModule__linearize_mclasses(val* self, val* p0) {
val* var_mclasses /* var mclasses: Array[MClass] */;
val* var /* : POSet[MClass] */;
var_mclasses = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(self) /* flatten_mclass_hierarchy on <self:MModule>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_sorter__AbstractSorter__sort]))(var, var_mclasses) /* sort on <var:POSet[MClass]>*/;
RET_LABEL:;
}
/* method model#MModule#linearize_mclasses for (self: Object, Array[MClass]) */
void VIRTUAL_model__MModule__linearize_mclasses(val* self, val* p0) {
model__MModule__linearize_mclasses(self, p0);
RET_LABEL:;
}
/* method model#MModule#linearize_mclassdefs for (self: MModule, Array[MClassDef]) */
void model__MModule__linearize_mclassdefs(val* self, val* p0) {
val* var_mclassdefs /* var mclassdefs: Array[MClassDef] */;
val* var /* : MClassDefSorter */;
val* var_sorter /* var sorter: MClassDefSorter */;
var_mclassdefs = p0;
var = NEW_model__MClassDefSorter(&type_model__MClassDefSorter);
((void (*)(val*, val*))(var->class->vft[COLOR_model__MClassDefSorter__init]))(var, self) /* init on <var:MClassDefSorter>*/;
var_sorter = var;
((void (*)(val*, val*))(var_sorter->class->vft[COLOR_sorter__AbstractSorter__sort]))(var_sorter, var_mclassdefs) /* sort on <var_sorter:MClassDefSorter>*/;
RET_LABEL:;
}
/* method model#MModule#linearize_mclassdefs for (self: Object, Array[MClassDef]) */
void VIRTUAL_model__MModule__linearize_mclassdefs(val* self, val* p0) {
model__MModule__linearize_mclassdefs(self, p0);
RET_LABEL:;
}
/* method model#MModule#linearize_mpropdefs for (self: MModule, Array[MPropDef]) */
void model__MModule__linearize_mpropdefs(val* self, val* p0) {
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var /* : MPropDefSorter */;
val* var_sorter /* var sorter: MPropDefSorter */;
var_mpropdefs = p0;
var = NEW_model__MPropDefSorter(&type_model__MPropDefSorter);
((void (*)(val*, val*))(var->class->vft[COLOR_model__MPropDefSorter__init]))(var, self) /* init on <var:MPropDefSorter>*/;
var_sorter = var;
((void (*)(val*, val*))(var_sorter->class->vft[COLOR_sorter__AbstractSorter__sort]))(var_sorter, var_mpropdefs) /* sort on <var_sorter:MPropDefSorter>*/;
RET_LABEL:;
}
/* method model#MModule#linearize_mpropdefs for (self: Object, Array[MPropDef]) */
void VIRTUAL_model__MModule__linearize_mpropdefs(val* self, val* p0) {
model__MModule__linearize_mpropdefs(self, p0);
RET_LABEL:;
}
/* method model#MModule#flatten_mclass_hierarchy_cache for (self: MModule): nullable POSet[MClass] */
val* model__MModule__flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
var1 = self->attrs[COLOR_model__MModule___64dflatten_mclass_hierarchy_cache].val; /* @flatten_mclass_hierarchy_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy_cache for (self: Object): nullable POSet[MClass] */
val* VIRTUAL_model__MModule__flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
var1 = model__MModule__flatten_mclass_hierarchy_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy_cache= for (self: MModule, nullable POSet[MClass]) */
void model__MModule__flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___64dflatten_mclass_hierarchy_cache].val = p0; /* @flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#flatten_mclass_hierarchy_cache= for (self: Object, nullable POSet[MClass]) */
void VIRTUAL_model__MModule__flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
model__MModule__flatten_mclass_hierarchy_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MModule#object_type for (self: MModule): MClassType */
val* model__MModule__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : nullable MClassType */;
val* var_res /* var res: nullable MClassType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : MClass */;
val* var9 /* : MClassType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MModule__object_type_cache]))(self) /* object_type_cache on <self:MModule>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce) {
var4 = varonce;
} else {
var5 = "Object";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model__MModule__get_primitive_class]))(self, var4) /* get_primitive_class on <self:MModule>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClass__mclass_type]))(var8) /* mclass_type on <var8:MClass>*/;
var_res = var9;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MModule__object_type_cache_61d]))(self, var_res) /* object_type_cache= on <self:MModule>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type for (self: Object): MClassType */
val* VIRTUAL_model__MModule__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = model__MModule__object_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache for (self: MModule): nullable MClassType */
val* model__MModule__object_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_model__MModule___64dobject_type_cache].val; /* @object_type_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache for (self: Object): nullable MClassType */
val* VIRTUAL_model__MModule__object_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = model__MModule__object_type_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache= for (self: MModule, nullable MClassType) */
void model__MModule__object_type_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___64dobject_type_cache].val = p0; /* @object_type_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#object_type_cache= for (self: Object, nullable MClassType) */
void VIRTUAL_model__MModule__object_type_cache_61d(val* self, val* p0) {
model__MModule__object_type_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MModule#bool_type for (self: MModule): MClassType */
val* model__MModule__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : nullable MClassType */;
val* var_res /* var res: nullable MClassType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : MClass */;
val* var9 /* : MClassType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MModule__bool_type_cache]))(self) /* bool_type_cache on <self:MModule>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce) {
var4 = varonce;
} else {
var5 = "Bool";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model__MModule__get_primitive_class]))(self, var4) /* get_primitive_class on <self:MModule>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClass__mclass_type]))(var8) /* mclass_type on <var8:MClass>*/;
var_res = var9;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MModule__bool_type_cache_61d]))(self, var_res) /* bool_type_cache= on <self:MModule>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type for (self: Object): MClassType */
val* VIRTUAL_model__MModule__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = model__MModule__bool_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache for (self: MModule): nullable MClassType */
val* model__MModule__bool_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_model__MModule___64dbool_type_cache].val; /* @bool_type_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache for (self: Object): nullable MClassType */
val* VIRTUAL_model__MModule__bool_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = model__MModule__bool_type_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache= for (self: MModule, nullable MClassType) */
void model__MModule__bool_type_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___64dbool_type_cache].val = p0; /* @bool_type_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#bool_type_cache= for (self: Object, nullable MClassType) */
void VIRTUAL_model__MModule__bool_type_cache_61d(val* self, val* p0) {
model__MModule__bool_type_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MModule#sys_type for (self: MModule): nullable MClassType */
val* model__MModule__sys_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : MClass */;
val* var16 /* : MClassType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__model]))(self) /* model on <self:MModule>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "Sys";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__Model__get_mclasses_by_name]))(var1, var2) /* get_mclasses_by_name on <var1:Model>*/;
var_clas = var6;
var7 = NULL;
if (var_clas == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "Sys";
var13 = 3;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model__MModule__get_primitive_class]))(self, var11) /* get_primitive_class on <self:MModule>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClass__mclass_type]))(var15) /* mclass_type on <var15:MClass>*/;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#sys_type for (self: Object): nullable MClassType */
val* VIRTUAL_model__MModule__sys_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = model__MModule__sys_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#get_primitive_class for (self: MModule, String): MClass */
val* model__MModule__get_primitive_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MClass] */;
val* var_cla /* var cla: nullable Array[MClass] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
short int var9 /* : Bool */;
val* var10 /* : MClass */;
long var11 /* : Int */;
val* var12 /* : MClassKind */;
val* var13 /* : MVisibility */;
val* var_c /* var c: MClass */;
val* var14 /* : MClassDef */;
val* var15 /* : MClassType */;
val* var16 /* : Location */;
val* var17 /* : null */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
val* var22 /* : Array[String] */;
val* var_cladef /* var cladef: MClassDef */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : nullable Object */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__model]))(self) /* model on <self:MModule>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__Model__get_mclasses_by_name]))(var1, var_name) /* get_mclasses_by_name on <var1:Model>*/;
var_cla = var2;
var3 = NULL;
if (var_cla == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "Bool";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((short int (*)(val*, val*))(var_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_name, var5) /* == on <var_name:String>*/;
if (var9){
var10 = NEW_model__MClass(&type_model__MClass);
var11 = 0;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__enum_kind]))(self) /* enum_kind on <self:MModule>*/;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:MModule>*/;
((void (*)(val*, val*, val*, long, val*, val*))(var10->class->vft[COLOR_model__MClass__init]))(var10, self, var_name, var11, var12, var13) /* init on <var10:MClass>*/;
var_c = var10;
var14 = NEW_model__MClassDef(&type_model__MClassDef);
var15 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__mclass_type]))(var_c) /* mclass_type on <var_c:MClass>*/;
var16 = NEW_location__Location(&type_location__Location);
var17 = NULL;
var18 = 0;
var19 = 0;
var20 = 0;
var21 = 0;
((void (*)(val*, val*, long, long, long, long))(var16->class->vft[COLOR_location__Location__init]))(var16, var17, var18, var19, var20, var21) /* init on <var16:Location>*/;
var22 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var22->class->vft[COLOR_array__Array__init]))(var22) /* init on <var22:Array[String]>*/;
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_model__MClassDef__init]))(var14, self, var15, var16, var22) /* init on <var14:MClassDef>*/;
var_cladef = var14;
var = var_c;
goto RET_LABEL;
} else {
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Fatal Error: no primitive class ";
var26 = 32;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_name;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var31) /* print on <self:MModule>*/;
var32 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var32) /* exit on <self:MModule>*/;
} else {
}
if (var_cla == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 225);
show_backtrace(1);
} else {
var33 = ((long (*)(val*))(var_cla->class->vft[COLOR_abstract_collection__Collection__length]))(var_cla) /* length on <var_cla:nullable Array[MClass]>*/;
}
var34 = 1;
{ /* Inline kernel#Int#== (var33,var34) */
var37 = var33 == var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (!var35) {
if (varonce38) {
var39 = varonce38;
} else {
var40 = ", ";
var41 = 2;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
if (var_cla == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 225);
show_backtrace(1);
} else {
var43 = ((val* (*)(val*, val*))(var_cla->class->vft[COLOR_string__Collection__join]))(var_cla, var39) /* join on <var_cla:nullable Array[MClass]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var43) /* print on <self:MModule>*/;
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 225);
show_backtrace(1);
}
if (var_cla == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 226);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*))(var_cla->class->vft[COLOR_abstract_collection__Collection__first]))(var_cla) /* first on <var_cla:nullable Array[MClass]>*/;
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#get_primitive_class for (self: Object, String): MClass */
val* VIRTUAL_model__MModule__get_primitive_class(val* self, val* p0) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = model__MModule__get_primitive_class(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#try_get_primitive_method for (self: MModule, String, MClass): nullable MMethod */
val* model__MModule__try_get_primitive_method(val* self, val* p0, val* p1) {
val* var /* : nullable MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var_res /* var res: nullable MMethod */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : MClassDef */;
val* var_intro /* var intro: MClassDef */;
val* var12 /* : Array[MClassDef] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var16 /* : POSetElement[MModule] */;
val* var17 /* : Collection[Object] */;
val* var18 /* : MModule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable POSetElement[MClassDef] */;
val* var22 /* : Collection[Object] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
var_name = p0;
var_recv = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__model]))(self) /* model on <self:MModule>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__Model__get_mproperties_by_name]))(var1, var_name) /* get_mproperties_by_name on <var1:Model>*/;
var_props = var2;
var3 = NULL;
if (var_props == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
var5 = NULL;
var = var5;
goto RET_LABEL;
} else {
}
var6 = NULL;
var_res = var6;
var7 = ((val* (*)(val*))(var_props->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_props) /* iterator on <var_props:nullable Array[MProperty](Array[MProperty])>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_mprop = var9;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var10 = 0;
} else {
var10 = var_mprop->type->type_table[cltype] == idtype;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 236);
show_backtrace(1);
}
var11 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mprop) /* intro_mclassdef on <var_mprop:MProperty(MMethod)>*/;
var_intro = var11;
var12 = ((val* (*)(val*))(var_recv->class->vft[COLOR_model__MClass__mclassdefs]))(var_recv) /* mclassdefs on <var_recv:MClass>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Array[MClassDef]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_mclassdef = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_poset__POSetElement__greaters]))(var16) /* greaters on <var16:POSetElement[MModule]>*/;
var18 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_mclassdef) /* mmodule on <var_mclassdef:MClassDef>*/;
var19 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__Collection__has]))(var17, var18) /* has on <var17:Collection[Object](Collection[MModule])>*/;
var20 = !var19;
if (var20){
goto CONTINUE_label;
} else {
}
var21 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef) /* in_hierarchy on <var_mclassdef:MClassDef>*/;
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 240);
show_backtrace(1);
} else {
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_poset__POSetElement__greaters]))(var21) /* greaters on <var21:nullable POSetElement[MClassDef]>*/;
}
var23 = ((short int (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__Collection__has]))(var22, var_intro) /* has on <var22:Collection[Object](Collection[MClassDef])>*/;
var24 = !var23;
if (var24){
goto CONTINUE_label;
} else {
}
var25 = NULL;
if (var_res == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (var26){
var_res = var_mprop;
} else {
var27 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___33d_61d]))(var_res, var_mprop) /* != on <var_res:nullable MMethod(MMethod)>*/;
if (var27){
if (varonce) {
var28 = varonce;
} else {
var29 = "Fatal Error: ambigous property name \'";
var30 = 37;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "\'; conflict between ";
var35 = 20;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__full_name]))(var_mprop) /* full_name on <var_mprop:MProperty(MMethod)>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = " and ";
var41 = 5;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MProperty__full_name]))(var_res) /* full_name on <var_res:nullable MMethod(MMethod)>*/;
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 6;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var46)->values[4] = (val*) var39;
((struct instance_array__NativeArray*)var46)->values[5] = (val*) var43;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var47) /* print on <self:MModule>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 245);
show_backtrace(1);
} else {
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label48: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label48: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#try_get_primitive_method for (self: Object, String, MClass): nullable MMethod */
val* VIRTUAL_model__MModule__try_get_primitive_method(val* self, val* p0, val* p1) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = model__MModule__try_get_primitive_method(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule for (self: MClassDefSorter): MModule */
val* model__MClassDefSorter__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MClassDefSorter___64dmmodule].val; /* @mmodule on <self:MClassDefSorter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 255);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule for (self: Object): MModule */
val* VIRTUAL_model__MClassDefSorter__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = model__MClassDefSorter__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule= for (self: MClassDefSorter, MModule) */
void model__MClassDefSorter__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDefSorter___64dmmodule].val = p0; /* @mmodule on <self:MClassDefSorter> */
RET_LABEL:;
}
/* method model#MClassDefSorter#mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MClassDefSorter__mmodule_61d(val* self, val* p0) {
model__MClassDefSorter__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDefSorter#compare for (self: MClassDefSorter, MClassDef, MClassDef): Int */
long model__MClassDefSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
val* var_a /* var a: MClassDef */;
val* var_b /* var b: MClassDef */;
val* var6 /* : MClass */;
val* var_ca /* var ca: MClass */;
val* var7 /* : MClass */;
val* var_cb /* var cb: MClass */;
short int var8 /* : Bool */;
val* var9 /* : MModule */;
val* var10 /* : POSet[MClass] */;
long var11 /* : Int */;
val* var12 /* : MModule */;
val* var13 /* : Model */;
val* var14 /* : POSet[MClassDef] */;
long var15 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:MClassDef> isa AbstractSorter#0 */
/* <p0:MClassDef> isa AbstractSorter#0 */
var1 = 1; /* easy <p0:MClassDef> isa AbstractSorter#0*/
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 256);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:MClassDef> isa AbstractSorter#0 */
/* <p1:MClassDef> isa AbstractSorter#0 */
var2 = 1; /* easy <p1:MClassDef> isa AbstractSorter#0*/
if (!var2) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 256);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
var6 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MClassDef__mclass]))(var_a) /* mclass on <var_a:MClassDef>*/;
var_ca = var6;
var7 = ((val* (*)(val*))(var_b->class->vft[COLOR_model__MClassDef__mclass]))(var_b) /* mclass on <var_b:MClassDef>*/;
var_cb = var7;
var8 = ((short int (*)(val*, val*))(var_ca->class->vft[COLOR_kernel__Object___33d_61d]))(var_ca, var_cb) /* != on <var_ca:MClass>*/;
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDefSorter__mmodule]))(self) /* mmodule on <self:MClassDefSorter>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var9) /* flatten_mclass_hierarchy on <var9:MModule>*/;
var11 = ((long (*)(val*, val*, val*))(var10->class->vft[COLOR_sorter__AbstractSorter__compare]))(var10, var_ca, var_cb) /* compare on <var10:POSet[MClass]>*/;
var = var11;
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDefSorter__mmodule]))(self) /* mmodule on <self:MClassDefSorter>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_mmodule__MModule__model]))(var12) /* model on <var12:MModule>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__Model__mclassdef_hierarchy]))(var13) /* mclassdef_hierarchy on <var13:Model>*/;
var15 = ((long (*)(val*, val*, val*))(var14->class->vft[COLOR_sorter__AbstractSorter__compare]))(var14, var_a, var_b) /* compare on <var14:POSet[MClassDef]>*/;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_model__MClassDefSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MClassDefSorter__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#init for (self: MClassDefSorter, MModule) */
void model__MClassDefSorter__init(val* self, val* p0) {
self->attrs[COLOR_model__MClassDefSorter___64dmmodule].val = p0; /* @mmodule on <self:MClassDefSorter> */
RET_LABEL:;
}
/* method model#MClassDefSorter#init for (self: Object, MModule) */
void VIRTUAL_model__MClassDefSorter__init(val* self, val* p0) {
model__MClassDefSorter__init(self, p0);
RET_LABEL:;
}
/* method model#MPropDefSorter#mmodule for (self: MPropDefSorter): MModule */
val* model__MPropDefSorter__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MPropDefSorter___64dmmodule].val; /* @mmodule on <self:MPropDefSorter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 267);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#mmodule for (self: Object): MModule */
val* VIRTUAL_model__MPropDefSorter__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = model__MPropDefSorter__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#mmodule= for (self: MPropDefSorter, MModule) */
void model__MPropDefSorter__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDefSorter___64dmmodule].val = p0; /* @mmodule on <self:MPropDefSorter> */
RET_LABEL:;
}
/* method model#MPropDefSorter#mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MPropDefSorter__mmodule_61d(val* self, val* p0) {
model__MPropDefSorter__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method model#MPropDefSorter#compare for (self: MPropDefSorter, MPropDef, MPropDef): Int */
long model__MPropDefSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
val* var_pa /* var pa: MPropDef */;
val* var_pb /* var pb: MPropDef */;
val* var6 /* : MClassDef */;
val* var_a /* var a: MClassDef */;
val* var7 /* : MClassDef */;
val* var_b /* var b: MClassDef */;
val* var8 /* : MClass */;
val* var_ca /* var ca: MClass */;
val* var9 /* : MClass */;
val* var_cb /* var cb: MClass */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var12 /* : POSet[MClass] */;
long var13 /* : Int */;
val* var14 /* : MModule */;
val* var15 /* : Model */;
val* var16 /* : POSet[MClassDef] */;
long var17 /* : Int */;
/* Covariant cast for argument 0 (pa) <p0:MPropDef> isa AbstractSorter#0 */
/* <p0:MPropDef> isa AbstractSorter#0 */
var1 = 1; /* easy <p0:MPropDef> isa AbstractSorter#0*/
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 268);
show_backtrace(1);
}
/* Covariant cast for argument 1 (pb) <p1:MPropDef> isa AbstractSorter#0 */
/* <p1:MPropDef> isa AbstractSorter#0 */
var2 = 1; /* easy <p1:MPropDef> isa AbstractSorter#0*/
if (!var2) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 268);
show_backtrace(1);
}
var_pa = p0;
var_pb = p1;
var6 = ((val* (*)(val*))(var_pa->class->vft[COLOR_model__MPropDef__mclassdef]))(var_pa) /* mclassdef on <var_pa:MPropDef>*/;
var_a = var6;
var7 = ((val* (*)(val*))(var_pb->class->vft[COLOR_model__MPropDef__mclassdef]))(var_pb) /* mclassdef on <var_pb:MPropDef>*/;
var_b = var7;
var8 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MClassDef__mclass]))(var_a) /* mclass on <var_a:MClassDef>*/;
var_ca = var8;
var9 = ((val* (*)(val*))(var_b->class->vft[COLOR_model__MClassDef__mclass]))(var_b) /* mclass on <var_b:MClassDef>*/;
var_cb = var9;
var10 = ((short int (*)(val*, val*))(var_ca->class->vft[COLOR_kernel__Object___33d_61d]))(var_ca, var_cb) /* != on <var_ca:MClass>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDefSorter__mmodule]))(self) /* mmodule on <self:MPropDefSorter>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var11) /* flatten_mclass_hierarchy on <var11:MModule>*/;
var13 = ((long (*)(val*, val*, val*))(var12->class->vft[COLOR_sorter__AbstractSorter__compare]))(var12, var_ca, var_cb) /* compare on <var12:POSet[MClass]>*/;
var = var13;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDefSorter__mmodule]))(self) /* mmodule on <self:MPropDefSorter>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_mmodule__MModule__model]))(var14) /* model on <var14:MModule>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__Model__mclassdef_hierarchy]))(var15) /* mclassdef_hierarchy on <var15:Model>*/;
var17 = ((long (*)(val*, val*, val*))(var16->class->vft[COLOR_sorter__AbstractSorter__compare]))(var16, var_a, var_b) /* compare on <var16:POSet[MClassDef]>*/;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_model__MPropDefSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MPropDefSorter__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#init for (self: MPropDefSorter, MModule) */
void model__MPropDefSorter__init(val* self, val* p0) {
self->attrs[COLOR_model__MPropDefSorter___64dmmodule].val = p0; /* @mmodule on <self:MPropDefSorter> */
RET_LABEL:;
}
/* method model#MPropDefSorter#init for (self: Object, MModule) */
void VIRTUAL_model__MPropDefSorter__init(val* self, val* p0) {
model__MPropDefSorter__init(self, p0);
RET_LABEL:;
}
/* method model#MClass#intro_mmodule for (self: MClass): MModule */
val* model__MClass__intro_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MClass___64dintro_mmodule].val; /* @intro_mmodule on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 290);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro_mmodule for (self: Object): MModule */
val* VIRTUAL_model__MClass__intro_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = model__MClass__intro_mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro_mmodule= for (self: MClass, MModule) */
void model__MClass__intro_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dintro_mmodule].val = p0; /* @intro_mmodule on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#intro_mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MClass__intro_mmodule_61d(val* self, val* p0) {
model__MClass__intro_mmodule_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#name for (self: MClass): String */
val* model__MClass__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClass___64dname].val; /* @name on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 295);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#name for (self: Object): String */
val* VIRTUAL_model__MClass__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClass__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#name= for (self: MClass, String) */
void model__MClass__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dname].val = p0; /* @name on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#name= for (self: Object, String) */
void VIRTUAL_model__MClass__name_61d(val* self, val* p0) {
model__MClass__name_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#full_name for (self: MClass): String */
val* model__MClass__full_name(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MModule */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__intro_mmodule]))(self) /* intro_mmodule on <self:MClass>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_mmodule__MModule__full_name]))(var7) /* full_name on <var7:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "::";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__name]))(self) /* name on <self:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "";
var18 = 0;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#full_name for (self: Object): String */
val* VIRTUAL_model__MClass__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClass__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity for (self: MClass): Int */
long model__MClass__arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model__MClass___64darity].l; /* @arity on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity for (self: Object): Int */
long VIRTUAL_model__MClass__arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MClass__arity(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity= for (self: MClass, Int) */
void model__MClass__arity_61d(val* self, long p0) {
self->attrs[COLOR_model__MClass___64darity].l = p0; /* @arity on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#arity= for (self: Object, Int) */
void VIRTUAL_model__MClass__arity_61d(val* self, long p0) {
model__MClass__arity_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#kind for (self: MClass): MClassKind */
val* model__MClass__kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = self->attrs[COLOR_model__MClass___64dkind].val; /* @kind on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @kind");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 310);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#kind for (self: Object): MClassKind */
val* VIRTUAL_model__MClass__kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__MClass__kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#kind= for (self: MClass, MClassKind) */
void model__MClass__kind_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dkind].val = p0; /* @kind on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#kind= for (self: Object, MClassKind) */
void VIRTUAL_model__MClass__kind_61d(val* self, val* p0) {
model__MClass__kind_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#visibility for (self: MClass): MVisibility */
val* model__MClass__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_model__MClass___64dvisibility].val; /* @visibility on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visibility");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 314);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#visibility for (self: Object): MVisibility */
val* VIRTUAL_model__MClass__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model__MClass__visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#visibility= for (self: MClass, MVisibility) */
void model__MClass__visibility_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dvisibility].val = p0; /* @visibility on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#visibility= for (self: Object, MVisibility) */
void VIRTUAL_model__MClass__visibility_61d(val* self, val* p0) {
model__MClass__visibility_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#init for (self: MClass, MModule, String, Int, MClassKind, MVisibility) */
void model__MClass__init(val* self, val* p0, val* p1, long p2, val* p3, val* p4) {
val* var_intro_mmodule /* var intro_mmodule: MModule */;
val* var_name /* var name: String */;
long var_arity /* var arity: Int */;
val* var_kind /* var kind: MClassKind */;
val* var_visibility /* var visibility: MVisibility */;
val* var /* : Array[MClass] */;
val* var1 /* : Model */;
val* var_model /* var model: Model */;
val* var2 /* : MultiHashMap[String, MClass] */;
val* var3 /* : Array[MClass] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : Array[MParameterType] */;
val* var_mparametertypes /* var mparametertypes: Array[MParameterType] */;
val* var10 /* : Range[Int] */;
long var11 /* : Int */;
val* var12 /* : Discrete */;
val* var13 /* : Discrete */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
long var_i /* var i: Int */;
long var17 /* : Int */;
val* var18 /* : MParameterType */;
val* var_mparametertype /* var mparametertype: MParameterType */;
val* var19 /* : MGenericType */;
val* var_mclass_type /* var mclass_type: MGenericType */;
val* var20 /* : Array[MGenericType] */;
val* var21 /* : MClassType */;
var_intro_mmodule = p0;
var_name = p1;
var_arity = p2;
var_kind = p3;
var_visibility = p4;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClass__intro_mmodule_61d]))(self, var_intro_mmodule) /* intro_mmodule= on <self:MClass>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClass__name_61d]))(self, var_name) /* name= on <self:MClass>*/;
((void (*)(val*, long))(self->class->vft[COLOR_model__MClass__arity_61d]))(self, var_arity) /* arity= on <self:MClass>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClass__kind_61d]))(self, var_kind) /* kind= on <self:MClass>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClass__visibility_61d]))(self, var_visibility) /* visibility= on <self:MClass>*/;
var = ((val* (*)(val*))(var_intro_mmodule->class->vft[COLOR_model__MModule__intro_mclasses]))(var_intro_mmodule) /* intro_mclasses on <var_intro_mmodule:MModule>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, self) /* add on <var:Array[MClass]>*/;
var1 = ((val* (*)(val*))(var_intro_mmodule->class->vft[COLOR_mmodule__MModule__model]))(var_intro_mmodule) /* model on <var_intro_mmodule:MModule>*/;
var_model = var1;
var2 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__mclasses_by_name]))(var_model) /* mclasses_by_name on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var2->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var2, var_name, self) /* add_one on <var2:MultiHashMap[String, MClass]>*/;
var3 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__mclasses]))(var_model) /* mclasses on <var_model:Model>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, self) /* add on <var3:Array[MClass]>*/;
var4 = 0;
{ /* Inline kernel#Int#> (var_arity,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (!var7) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var8 = var_arity > var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = NEW_array__Array(&type_array__Arraymodel__MParameterType);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[MParameterType]>*/;
var_mparametertypes = var9;
var10 = NEW_range__Range(&type_range__Rangekernel__Int);
var11 = 0;
var12 = BOX_kernel__Int(var11); /* autobox from Int to Discrete */
var13 = BOX_kernel__Int(var_arity); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_range__Range__without_last]))(var10, var12, var13) /* without_last on <var10:Range[Int]>*/;
var14 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Range[Int]>*/;
for(;;) {
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
if(!var15) break;
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
var17 = ((struct instance_kernel__Int*)var16)->value; /* autounbox from nullable Object to Int */;
var_i = var17;
var18 = NEW_model__MParameterType(&type_model__MParameterType);
((void (*)(val*, val*, long))(var18->class->vft[COLOR_model__MParameterType__init]))(var18, self, var_i) /* init on <var18:MParameterType>*/;
var_mparametertype = var18;
((void (*)(val*, val*))(var_mparametertypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mparametertypes, var_mparametertype) /* add on <var_mparametertypes:Array[MParameterType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var19 = NEW_model__MGenericType(&type_model__MGenericType);
((void (*)(val*, val*, val*))(var19->class->vft[COLOR_model__MGenericType__init]))(var19, self, var_mparametertypes) /* init on <var19:MGenericType>*/;
var_mclass_type = var19;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClass__mclass_type_61d]))(self, var_mclass_type) /* mclass_type= on <self:MClass>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__get_mtype_cache]))(self) /* get_mtype_cache on <self:MClass>*/;
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var20, var_mclass_type) /* add on <var20:Array[MGenericType]>*/;
} else {
var21 = NEW_model__MClassType(&type_model__MClassType);
((void (*)(val*, val*))(var21->class->vft[COLOR_model__MClassType__init]))(var21, self) /* init on <var21:MClassType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClass__mclass_type_61d]))(self, var21) /* mclass_type= on <self:MClass>*/;
}
RET_LABEL:;
}
/* method model#MClass#init for (self: Object, MModule, String, Int, MClassKind, MVisibility) */
void VIRTUAL_model__MClass__init(val* self, val* p0, val* p1, long p2, val* p3, val* p4) {
model__MClass__init(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method model#MClass#mclassdefs for (self: MClass): Array[MClassDef] */
val* model__MClass__mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_model__MClass___64dmclassdefs].val; /* @mclassdefs on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdefs");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 345);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclassdefs for (self: Object): Array[MClassDef] */
val* VIRTUAL_model__MClass__mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = model__MClass__mclassdefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclassdefs= for (self: MClass, Array[MClassDef]) */
void model__MClass__mclassdefs_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dmclassdefs].val = p0; /* @mclassdefs on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#mclassdefs= for (self: Object, Array[MClassDef]) */
void VIRTUAL_model__MClass__mclassdefs_61d(val* self, val* p0) {
model__MClass__mclassdefs_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#to_s for (self: MClass): String */
val* model__MClass__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__name]))(self) /* name on <self:MClass>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#to_s for (self: Object): String */
val* VIRTUAL_model__MClass__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClass__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro for (self: MClass): MClassDef */
val* model__MClass__intro(val* self) {
val* var /* : MClassDef */;
val* var1 /* : Array[MClassDef] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[MClassDef] */;
val* var5 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__mclassdefs]))(self) /* mclassdefs on <self:MClass>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:Array[MClassDef]>*/;
var3 = !var2;
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert \'has_a_first_definition\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 357);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__mclassdefs]))(self) /* mclassdefs on <self:MClass>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__first]))(var4) /* first on <var4:Array[MClassDef]>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#intro for (self: Object): MClassDef */
val* VIRTUAL_model__MClass__intro(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = model__MClass__intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#in_hierarchy for (self: MClass, MModule): POSetElement[MClass] */
val* model__MClass__in_hierarchy(val* self, val* p0) {
val* var /* : POSetElement[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : POSet[MClass] */;
val* var2 /* : POSetElement[Object] */;
var_mmodule = p0;
var1 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var_mmodule) /* flatten_mclass_hierarchy on <var_mmodule:MModule>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_poset__POSet___91d_93d]))(var1, self) /* [] on <var1:POSet[MClass]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#in_hierarchy for (self: Object, MModule): POSetElement[MClass] */
val* VIRTUAL_model__MClass__in_hierarchy(val* self, val* p0) {
val* var /* : POSetElement[MClass] */;
val* var1 /* : POSetElement[MClass] */;
var1 = model__MClass__in_hierarchy(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type for (self: MClass): MClassType */
val* model__MClass__mclass_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_model__MClass___64dmclass_type].val; /* @mclass_type on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass_type");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 370);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type for (self: Object): MClassType */
val* VIRTUAL_model__MClass__mclass_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = model__MClass__mclass_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type= for (self: MClass, MClassType) */
void model__MClass__mclass_type_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dmclass_type].val = p0; /* @mclass_type on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#mclass_type= for (self: Object, MClassType) */
void VIRTUAL_model__MClass__mclass_type_61d(val* self, val* p0) {
model__MClass__mclass_type_61d(self, p0);
RET_LABEL:;
}
/* method model#MClass#get_mtype for (self: MClass, Array[MType]): MClassType */
val* model__MClass__get_mtype(val* self, val* p0) {
val* var /* : MClassType */;
val* var_mtype_arguments /* var mtype_arguments: Array[MType] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClassType */;
val* var12 /* : Array[MGenericType] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MGenericType */;
val* var16 /* : Array[MType] */;
short int var17 /* : Bool */;
val* var18 /* : MGenericType */;
val* var_res /* var res: MGenericType */;
val* var19 /* : Array[MGenericType] */;
var_mtype_arguments = p0;
var1 = ((long (*)(val*))(var_mtype_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_mtype_arguments) /* length on <var_mtype_arguments:Array[MType]>*/;
var2 = ((long (*)(val*))(self->class->vft[COLOR_model__MClass__arity]))(self) /* arity on <self:MClass>*/;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 393);
show_backtrace(1);
}
var6 = ((long (*)(val*))(self->class->vft[COLOR_model__MClass__arity]))(self) /* arity on <self:MClass>*/;
var7 = 0;
{ /* Inline kernel#Int#== (var6,var7) */
var10 = var6 == var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__mclass_type]))(self) /* mclass_type on <self:MClass>*/;
var = var11;
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__get_mtype_cache]))(self) /* get_mtype_cache on <self:MClass>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Array[MGenericType]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_t = var15;
var16 = ((val* (*)(val*))(var_t->class->vft[COLOR_model__MClassType__arguments]))(var_t) /* arguments on <var_t:MGenericType>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_mtype_arguments) /* == on <var16:Array[MType]>*/;
if (var17){
var = var_t;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var18 = NEW_model__MGenericType(&type_model__MGenericType);
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_model__MGenericType__init]))(var18, self, var_mtype_arguments) /* init on <var18:MGenericType>*/;
var_res = var18;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__get_mtype_cache]))(self) /* get_mtype_cache on <self:MClass>*/;
((void (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var19, var_res) /* add on <var19:Array[MGenericType]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype for (self: Object, Array[MType]): MClassType */
val* VIRTUAL_model__MClass__get_mtype(val* self, val* p0) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = model__MClass__get_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype_cache for (self: MClass): Array[MGenericType] */
val* model__MClass__get_mtype_cache(val* self) {
val* var /* : Array[MGenericType] */;
val* var1 /* : Array[MGenericType] */;
var1 = self->attrs[COLOR_model__MClass___64dget_mtype_cache].val; /* @get_mtype_cache on <self:MClass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @get_mtype_cache");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 405);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype_cache for (self: Object): Array[MGenericType] */
val* VIRTUAL_model__MClass__get_mtype_cache(val* self) {
val* var /* : Array[MGenericType] */;
val* var1 /* : Array[MGenericType] */;
var1 = model__MClass__get_mtype_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype_cache= for (self: MClass, Array[MGenericType]) */
void model__MClass__get_mtype_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___64dget_mtype_cache].val = p0; /* @get_mtype_cache on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#get_mtype_cache= for (self: Object, Array[MGenericType]) */
void VIRTUAL_model__MClass__get_mtype_cache_61d(val* self, val* p0) {
model__MClass__get_mtype_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#mmodule for (self: MClassDef): MModule */
val* model__MClassDef__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MClassDef___64dmmodule].val; /* @mmodule on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 415);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule for (self: Object): MModule */
val* VIRTUAL_model__MClassDef__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = model__MClassDef__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule= for (self: MClassDef, MModule) */
void model__MClassDef__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dmmodule].val = p0; /* @mmodule on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MClassDef__mmodule_61d(val* self, val* p0) {
model__MClassDef__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#mclass for (self: MClassDef): MClass */
val* model__MClassDef__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_model__MClassDef___64dmclass].val; /* @mclass on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 418);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mclass for (self: Object): MClass */
val* VIRTUAL_model__MClassDef__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = model__MClassDef__mclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mclass= for (self: MClassDef, MClass) */
void model__MClassDef__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dmclass].val = p0; /* @mclass on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mclass= for (self: Object, MClass) */
void VIRTUAL_model__MClassDef__mclass_61d(val* self, val* p0) {
model__MClassDef__mclass_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#bound_mtype for (self: MClassDef): MClassType */
val* model__MClassDef__bound_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_model__MClassDef___64dbound_mtype].val; /* @bound_mtype on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @bound_mtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 421);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#bound_mtype for (self: Object): MClassType */
val* VIRTUAL_model__MClassDef__bound_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = model__MClassDef__bound_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#bound_mtype= for (self: MClassDef, MClassType) */
void model__MClassDef__bound_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dbound_mtype].val = p0; /* @bound_mtype on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#bound_mtype= for (self: Object, MClassType) */
void VIRTUAL_model__MClassDef__bound_mtype_61d(val* self, val* p0) {
model__MClassDef__bound_mtype_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#parameter_names for (self: MClassDef): Array[String] */
val* model__MClassDef__parameter_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_model__MClassDef___64dparameter_names].val; /* @parameter_names on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @parameter_names");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 433);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#parameter_names for (self: Object): Array[String] */
val* VIRTUAL_model__MClassDef__parameter_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = model__MClassDef__parameter_names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#parameter_names= for (self: MClassDef, Array[String]) */
void model__MClassDef__parameter_names_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dparameter_names].val = p0; /* @parameter_names on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#parameter_names= for (self: Object, Array[String]) */
void VIRTUAL_model__MClassDef__parameter_names_61d(val* self, val* p0) {
model__MClassDef__parameter_names_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#location for (self: MClassDef): Location */
val* model__MClassDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_model__MClassDef___64dlocation].val; /* @location on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 436);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#location for (self: Object): Location */
val* VIRTUAL_model__MClassDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = model__MClassDef__location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#location= for (self: MClassDef, Location) */
void model__MClassDef__location_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dlocation].val = p0; /* @location on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#location= for (self: Object, Location) */
void VIRTUAL_model__MClassDef__location_61d(val* self, val* p0) {
model__MClassDef__location_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#to_s for (self: MClassDef): String */
val* model__MClassDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClassDef___64dto_s].val; /* @to_s on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 439);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#to_s for (self: Object): String */
val* VIRTUAL_model__MClassDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClassDef__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#to_s= for (self: MClassDef, String) */
void model__MClassDef__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dto_s].val = p0; /* @to_s on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#to_s= for (self: Object, String) */
void VIRTUAL_model__MClassDef__to_s_61d(val* self, val* p0) {
model__MClassDef__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#init for (self: MClassDef, MModule, MClassType, Location, Array[String]) */
void model__MClassDef__init(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_mmodule /* var mmodule: MModule */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var_location /* var location: Location */;
val* var_parameter_names /* var parameter_names: Array[String] */;
val* var /* : MClass */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClass */;
val* var7 /* : Array[MClassDef] */;
val* var8 /* : MClass */;
val* var9 /* : Array[MClassDef] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MClass */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
var_mmodule = p0;
var_bound_mtype = p1;
var_location = p2;
var_parameter_names = p3;
var = ((val* (*)(val*))(var_bound_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_bound_mtype) /* mclass on <var_bound_mtype:MClassType>*/;
var1 = ((long (*)(val*))(var->class->vft[COLOR_model__MClass__arity]))(var) /* arity on <var:MClass>*/;
var2 = ((long (*)(val*))(var_parameter_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_parameter_names) /* length on <var_parameter_names:Array[String]>*/;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 445);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__bound_mtype_61d]))(self, var_bound_mtype) /* bound_mtype= on <self:MClassDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:MClassDef>*/;
var6 = ((val* (*)(val*))(var_bound_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_bound_mtype) /* mclass on <var_bound_mtype:MClassType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__mclass_61d]))(self, var6) /* mclass= on <self:MClassDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__location_61d]))(self, var_location) /* location= on <self:MClassDef>*/;
var7 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model__MModule__mclassdefs]))(var_mmodule) /* mclassdefs on <var_mmodule:MModule>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, self) /* add on <var7:Array[MClassDef]>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mclass]))(self) /* mclass on <self:MClassDef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClass__mclassdefs]))(var8) /* mclassdefs on <var8:MClass>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, self) /* add on <var9:Array[MClassDef]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__parameter_names_61d]))(self, var_parameter_names) /* parameter_names= on <self:MClassDef>*/;
if (varonce) {
var10 = varonce;
} else {
var11 = "#";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mclass]))(self) /* mclass on <self:MClassDef>*/;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 3;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var17)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__to_s_61d]))(self, var18) /* to_s= on <self:MClassDef>*/;
RET_LABEL:;
}
/* method model#MClassDef#init for (self: Object, MModule, MClassType, Location, Array[String]) */
void VIRTUAL_model__MClassDef__init(val* self, val* p0, val* p1, val* p2, val* p3) {
model__MClassDef__init(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method model#MClassDef#supertypes for (self: MClassDef): Array[MClassType] */
val* model__MClassDef__supertypes(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_model__MClassDef___64dsupertypes].val; /* @supertypes on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @supertypes");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 456);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#supertypes for (self: Object): Array[MClassType] */
val* VIRTUAL_model__MClassDef__supertypes(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = model__MClassDef__supertypes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#supertypes= for (self: MClassDef, Array[MClassType]) */
void model__MClassDef__supertypes_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dsupertypes].val = p0; /* @supertypes on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#supertypes= for (self: Object, Array[MClassType]) */
void VIRTUAL_model__MClassDef__supertypes_61d(val* self, val* p0) {
model__MClassDef__supertypes_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#set_supertypes for (self: MClassDef, Array[MClassType]) */
void model__MClassDef__set_supertypes(val* self, val* p0) {
val* var_supertypes /* var supertypes: Array[MClassType] */;
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : Model */;
val* var_model /* var model: Model */;
val* var5 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var9 /* : Array[MClassType] */;
val* var10 /* : POSet[MClassType] */;
short int var11 /* : Bool */;
val* var12 /* : MClass */;
val* var13 /* : MModule */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : MClass */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
val* var18 /* : POSet[MClassType] */;
var_supertypes = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__in_hierarchy]))(self) /* in_hierarchy on <self:MClassDef>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert \'unique_invocation\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 466);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mmodule]))(self) /* mmodule on <self:MClassDef>*/;
var_mmodule = var3;
var4 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__model]))(var_mmodule) /* model on <var_mmodule:MModule>*/;
var_model = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__bound_mtype]))(self) /* bound_mtype on <self:MClassDef>*/;
var_mtype = var5;
var6 = ((val* (*)(val*))(var_supertypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_supertypes) /* iterator on <var_supertypes:Array[MClassType]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_supertype = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__supertypes]))(self) /* supertypes on <self:MClassDef>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, var_supertype) /* add on <var9:Array[MClassType]>*/;
var10 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__full_mtype_specialization_hierarchy]))(var_model) /* full_mtype_specialization_hierarchy on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_poset__POSet__add_edge]))(var10, var_mtype, var_supertype) /* add_edge on <var10:POSet[MClassType]>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mclass]))(self) /* mclass on <self:MClassDef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClass__intro_mmodule]))(var12) /* intro_mmodule on <var12:MClass>*/;
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_mmodule) /* == on <var13:MModule>*/;
var_ = var14;
if (var14){
var15 = ((val* (*)(val*))(var_supertype->class->vft[COLOR_model__MClassType__mclass]))(var_supertype) /* mclass on <var_supertype:MClassType>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClass__intro_mmodule]))(var15) /* intro_mmodule on <var15:MClass>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_mmodule) /* == on <var16:MModule>*/;
var11 = var17;
} else {
var11 = var_;
}
if (var11){
var18 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__intro_mtype_specialization_hierarchy]))(var_model) /* intro_mtype_specialization_hierarchy on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_poset__POSet__add_edge]))(var18, var_mtype, var_supertype) /* add_edge on <var18:POSet[MClassType]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method model#MClassDef#set_supertypes for (self: Object, Array[MClassType]) */
void VIRTUAL_model__MClassDef__set_supertypes(val* self, val* p0) {
model__MClassDef__set_supertypes(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: MClassDef) */
void model__MClassDef__add_in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var_model /* var model: Model */;
val* var5 /* : POSet[MClassDef] */;
val* var6 /* : POSetElement[Object] */;
val* var_res /* var res: POSetElement[MClassDef] */;
val* var7 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var8 /* : MModule */;
val* var9 /* : Set[MClassDef] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : POSet[Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__in_hierarchy]))(self) /* in_hierarchy on <self:MClassDef>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert \'unique_invocation\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 491);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mmodule]))(self) /* mmodule on <self:MClassDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_mmodule__MModule__model]))(var3) /* model on <var3:MModule>*/;
var_model = var4;
var5 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__mclassdef_hierarchy]))(var_model) /* mclassdef_hierarchy on <var_model:Model>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_poset__POSet__add_node]))(var5, self) /* add_node on <var5:POSet[MClassDef]>*/;
var_res = var6;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassDef__in_hierarchy_61d]))(self, var_res) /* in_hierarchy= on <self:MClassDef>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__bound_mtype]))(self) /* bound_mtype on <self:MClassDef>*/;
var_mtype = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mmodule]))(self) /* mmodule on <self:MClassDef>*/;
var9 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var8) /* collect_mclassdefs on <var_mtype:MClassType>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Set[MClassDef]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_mclassdef = var12;
var13 = ((val* (*)(val*))(var_res->class->vft[COLOR_poset__POSetElement__poset]))(var_res) /* poset on <var_res:POSetElement[MClassDef]>*/;
((void (*)(val*, val*, val*))(var13->class->vft[COLOR_poset__POSet__add_edge]))(var13, self, var_mclassdef) /* add_edge on <var13:POSet[Object](POSet[MClassDef])>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: Object) */
void VIRTUAL_model__MClassDef__add_in_hierarchy(val* self) {
model__MClassDef__add_in_hierarchy(self);
RET_LABEL:;
}
/* method model#MClassDef#in_hierarchy for (self: MClassDef): nullable POSetElement[MClassDef] */
val* model__MClassDef__in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
var1 = self->attrs[COLOR_model__MClassDef___64din_hierarchy].val; /* @in_hierarchy on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#in_hierarchy for (self: Object): nullable POSetElement[MClassDef] */
val* VIRTUAL_model__MClassDef__in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
var1 = model__MClassDef__in_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#in_hierarchy= for (self: MClassDef, nullable POSetElement[MClassDef]) */
void model__MClassDef__in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64din_hierarchy].val = p0; /* @in_hierarchy on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#in_hierarchy= for (self: Object, nullable POSetElement[MClassDef]) */
void VIRTUAL_model__MClassDef__in_hierarchy_61d(val* self, val* p0) {
model__MClassDef__in_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#is_intro for (self: MClassDef): Bool */
short int model__MClassDef__is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MClass */;
val* var2 /* : MClassDef */;
short int var3 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassDef__mclass]))(self) /* mclass on <self:MClassDef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__intro]))(var1) /* intro on <var1:MClass>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, self) /* == on <var2:MClassDef>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#is_intro for (self: Object): Bool */
short int VIRTUAL_model__MClassDef__is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MClassDef__is_intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#intro_mproperties for (self: MClassDef): Array[MProperty] */
val* model__MClassDef__intro_mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_model__MClassDef___64dintro_mproperties].val; /* @intro_mproperties on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mproperties");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 510);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#intro_mproperties for (self: Object): Array[MProperty] */
val* VIRTUAL_model__MClassDef__intro_mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = model__MClassDef__intro_mproperties(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#intro_mproperties= for (self: MClassDef, Array[MProperty]) */
void model__MClassDef__intro_mproperties_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dintro_mproperties].val = p0; /* @intro_mproperties on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#intro_mproperties= for (self: Object, Array[MProperty]) */
void VIRTUAL_model__MClassDef__intro_mproperties_61d(val* self, val* p0) {
model__MClassDef__intro_mproperties_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassDef#mpropdefs for (self: MClassDef): Array[MPropDef] */
val* model__MClassDef__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_model__MClassDef___64dmpropdefs].val; /* @mpropdefs on <self:MClassDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdefs");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 513);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mpropdefs for (self: Object): Array[MPropDef] */
val* VIRTUAL_model__MClassDef__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MClassDef__mpropdefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mpropdefs= for (self: MClassDef, Array[MPropDef]) */
void model__MClassDef__mpropdefs_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___64dmpropdefs].val = p0; /* @mpropdefs on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mpropdefs= for (self: Object, Array[MPropDef]) */
void VIRTUAL_model__MClassDef__mpropdefs_61d(val* self, val* p0) {
model__MClassDef__mpropdefs_61d(self, p0);
RET_LABEL:;
}
/* method model#MType#model for (self: MType): Model */
val* model__MType__model(val* self) {
val* var /* : Model */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "model", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 546);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#model for (self: Object): Model */
val* VIRTUAL_model__MType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#is_subtype for (self: MType, MModule, nullable MClassType, MType): Bool */
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sup /* var sup: MType */;
val* var_sub /* var sub: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : MClass */;
val* var21 /* : MClassType */;
short int var22 /* : Bool */;
val* var23 /* : MType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : null */;
short int var33 /* : Bool */;
val* var34 /* : MClass */;
val* var35 /* : MClassType */;
short int var36 /* : Bool */;
val* var37 /* : MType */;
short int var38 /* : Bool */;
short int var_sup_accept_null /* var sup_accept_null: Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
short int var42 /* : Bool */;
val* var43 /* : MType */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : MType */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
short int var_61 /* var : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
short int var_70 /* var : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
val* var74 /* : null */;
short int var75 /* : Bool */;
val* var76 /* : MType */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : MType */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : null */;
short int var99 /* : Bool */;
val* var100 /* : MType */;
val* var_resolved_sub /* var resolved_sub: MClassType */;
val* var101 /* : Set[MClass] */;
val* var102 /* : MClass */;
short int var103 /* : Bool */;
short int var_res /* var res: Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : MClass */;
val* var115 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
val* var116 /* : MClass */;
val* var117 /* : MClass */;
short int var118 /* : Bool */;
val* var119 /* : Range[Int] */;
long var120 /* : Int */;
val* var121 /* : MClass */;
long var122 /* : Int */;
val* var123 /* : Discrete */;
val* var124 /* : Discrete */;
val* var125 /* : Iterator[nullable Object] */;
short int var126 /* : Bool */;
val* var127 /* : nullable Object */;
long var_i /* var i: Int */;
long var128 /* : Int */;
val* var129 /* : Array[MType] */;
val* var130 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var131 /* : Array[MType] */;
val* var132 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
var_sup = p2;
var_sub = self;
var1 = ((short int (*)(val*, val*))(var_sub->class->vft[COLOR_kernel__Object___61d_61d]))(var_sub, var_sup) /* == on <var_sub:MType>*/;
if (var1){
var2 = 1;
var = var2;
goto RET_LABEL;
} else {
}
var3 = NULL;
if (var_anchor == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
var5 = ((short int (*)(val*))(var_sub->class->vft[COLOR_model__MType__need_anchor]))(var_sub) /* need_anchor on <var_sub:MType>*/;
var6 = !var5;
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 559);
show_backtrace(1);
}
var7 = ((short int (*)(val*))(var_sup->class->vft[COLOR_model__MType__need_anchor]))(var_sup) /* need_anchor on <var_sup:MType>*/;
var8 = !var7;
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 560);
show_backtrace(1);
}
} else {
var9 = NULL;
var10 = ((short int (*)(val*, val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__can_resolve_for]))(var_sub, var_anchor, var9, var_mmodule) /* can_resolve_for on <var_sub:MType>*/;
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 562);
show_backtrace(1);
}
var11 = NULL;
var12 = ((short int (*)(val*, val*, val*, val*))(var_sup->class->vft[COLOR_model__MType__can_resolve_for]))(var_sup, var_anchor, var11, var_mmodule) /* can_resolve_for on <var_sup:MType>*/;
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 563);
show_backtrace(1);
}
}
/* <var_sub:MType> isa MParameterType */
cltype = type_model__MParameterType.color;
idtype = type_model__MParameterType.id;
if(cltype >= var_sub->type->table_size) {
var14 = 0;
} else {
var14 = var_sub->type->type_table[cltype] == idtype;
}
var_ = var14;
if (var14){
var13 = var_;
} else {
/* <var_sub:MType> isa MVirtualType */
cltype16 = type_model__MVirtualType.color;
idtype17 = type_model__MVirtualType.id;
if(cltype16 >= var_sub->type->table_size) {
var15 = 0;
} else {
var15 = var_sub->type->type_table[cltype16] == idtype17;
}
var13 = var15;
}
if (var13){
var18 = NULL;
if (var_anchor == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 570);
show_backtrace(1);
}
var20 = ((val* (*)(val*))(var_anchor->class->vft[COLOR_model__MClassType__mclass]))(var_anchor) /* mclass on <var_anchor:nullable MClassType(MClassType)>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MClass__mclass_type]))(var20) /* mclass_type on <var20:MClass>*/;
var22 = 0;
var23 = ((val* (*)(val*, val*, val*, val*, short int))(var_sub->class->vft[COLOR_model__MType__resolve_for]))(var_sub, var21, var_anchor, var_mmodule, var22) /* resolve_for on <var_sub:MType>*/;
var_sub = var23;
} else {
}
/* <var_sup:MType> isa MParameterType */
cltype26 = type_model__MParameterType.color;
idtype27 = type_model__MParameterType.id;
if(cltype26 >= var_sup->type->table_size) {
var25 = 0;
} else {
var25 = var_sup->type->type_table[cltype26] == idtype27;
}
var_28 = var25;
if (var25){
var24 = var_28;
} else {
/* <var_sup:MType> isa MVirtualType */
cltype30 = type_model__MVirtualType.color;
idtype31 = type_model__MVirtualType.id;
if(cltype30 >= var_sup->type->table_size) {
var29 = 0;
} else {
var29 = var_sup->type->type_table[cltype30] == idtype31;
}
var24 = var29;
}
if (var24){
var32 = NULL;
if (var_anchor == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 574);
show_backtrace(1);
}
var34 = ((val* (*)(val*))(var_anchor->class->vft[COLOR_model__MClassType__mclass]))(var_anchor) /* mclass on <var_anchor:nullable MClassType(MClassType)>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_model__MClass__mclass_type]))(var34) /* mclass_type on <var34:MClass>*/;
var36 = 0;
var37 = ((val* (*)(val*, val*, val*, val*, short int))(var_sup->class->vft[COLOR_model__MType__resolve_for]))(var_sup, var35, var_anchor, var_mmodule, var36) /* resolve_for on <var_sup:MType>*/;
var_sup = var37;
} else {
}
var38 = 0;
var_sup_accept_null = var38;
/* <var_sup:MType> isa MNullableType */
cltype40 = type_model__MNullableType.color;
idtype41 = type_model__MNullableType.id;
if(cltype40 >= var_sup->type->table_size) {
var39 = 0;
} else {
var39 = var_sup->type->type_table[cltype40] == idtype41;
}
if (var39){
var42 = 1;
var_sup_accept_null = var42;
var43 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MNullableType__mtype]))(var_sup) /* mtype on <var_sup:MType(MNullableType)>*/;
var_sup = var43;
} else {
/* <var_sup:MType> isa MNullType */
cltype45 = type_model__MNullType.color;
idtype46 = type_model__MNullType.id;
if(cltype45 >= var_sup->type->table_size) {
var44 = 0;
} else {
var44 = var_sup->type->type_table[cltype45] == idtype46;
}
if (var44){
var47 = 1;
var_sup_accept_null = var47;
} else {
}
}
/* <var_sub:MType> isa MNullableType */
cltype49 = type_model__MNullableType.color;
idtype50 = type_model__MNullableType.id;
if(cltype49 >= var_sub->type->table_size) {
var48 = 0;
} else {
var48 = var_sub->type->type_table[cltype49] == idtype50;
}
if (var48){
var51 = !var_sup_accept_null;
if (var51){
var52 = 0;
var = var52;
goto RET_LABEL;
} else {
}
var53 = ((val* (*)(val*))(var_sub->class->vft[COLOR_model__MNullableType__mtype]))(var_sub) /* mtype on <var_sub:MType(MNullableType)>*/;
var_sub = var53;
} else {
/* <var_sub:MType> isa MNullType */
cltype55 = type_model__MNullType.color;
idtype56 = type_model__MNullType.id;
if(cltype55 >= var_sub->type->table_size) {
var54 = 0;
} else {
var54 = var_sub->type->type_table[cltype55] == idtype56;
}
if (var54){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
/* <var_sup:MType> isa MParameterType */
cltype59 = type_model__MParameterType.color;
idtype60 = type_model__MParameterType.id;
if(cltype59 >= var_sup->type->table_size) {
var58 = 0;
} else {
var58 = var_sup->type->type_table[cltype59] == idtype60;
}
var_61 = var58;
if (var58){
var57 = var_61;
} else {
/* <var_sup:MType> isa MVirtualType */
cltype63 = type_model__MVirtualType.color;
idtype64 = type_model__MVirtualType.id;
if(cltype63 >= var_sup->type->table_size) {
var62 = 0;
} else {
var62 = var_sup->type->type_table[cltype63] == idtype64;
}
var57 = var62;
}
if (var57){
var65 = ((short int (*)(val*, val*))(var_sub->class->vft[COLOR_kernel__Object___61d_61d]))(var_sub, var_sup) /* == on <var_sub:MType>*/;
var = var65;
goto RET_LABEL;
} else {
}
/* <var_sub:MType> isa MParameterType */
cltype68 = type_model__MParameterType.color;
idtype69 = type_model__MParameterType.id;
if(cltype68 >= var_sub->type->table_size) {
var67 = 0;
} else {
var67 = var_sub->type->type_table[cltype68] == idtype69;
}
var_70 = var67;
if (var67){
var66 = var_70;
} else {
/* <var_sub:MType> isa MVirtualType */
cltype72 = type_model__MVirtualType.color;
idtype73 = type_model__MVirtualType.id;
if(cltype72 >= var_sub->type->table_size) {
var71 = 0;
} else {
var71 = var_sub->type->type_table[cltype72] == idtype73;
}
var66 = var71;
}
if (var66){
var74 = NULL;
if (var_anchor == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (!var75) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 606);
show_backtrace(1);
}
var76 = ((val* (*)(val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__anchor_to]))(var_sub, var_mmodule, var_anchor) /* anchor_to on <var_sub:MType>*/;
var_sub = var76;
/* <var_sub:MType> isa MNullableType */
cltype78 = type_model__MNullableType.color;
idtype79 = type_model__MNullableType.id;
if(cltype78 >= var_sub->type->table_size) {
var77 = 0;
} else {
var77 = var_sub->type->type_table[cltype78] == idtype79;
}
if (var77){
var80 = !var_sup_accept_null;
if (var80){
var81 = 0;
var = var81;
goto RET_LABEL;
} else {
}
var82 = ((val* (*)(val*))(var_sub->class->vft[COLOR_model__MNullableType__mtype]))(var_sub) /* mtype on <var_sub:MType(MNullableType)>*/;
var_sub = var82;
} else {
/* <var_sub:MType> isa MNullType */
cltype84 = type_model__MNullType.color;
idtype85 = type_model__MNullType.id;
if(cltype84 >= var_sub->type->table_size) {
var83 = 0;
} else {
var83 = var_sub->type->type_table[cltype84] == idtype85;
}
if (var83){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_sub:MType> isa MClassType */
cltype87 = type_model__MClassType.color;
idtype88 = type_model__MClassType.id;
if(cltype87 >= var_sub->type->table_size) {
var86 = 0;
} else {
var86 = var_sub->type->type_table[cltype87] == idtype88;
}
if (!var86) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 618);
show_backtrace(1);
}
/* <var_sup:MType> isa MNullType */
cltype90 = type_model__MNullType.color;
idtype91 = type_model__MNullType.id;
if(cltype90 >= var_sup->type->table_size) {
var89 = 0;
} else {
var89 = var_sup->type->type_table[cltype90] == idtype91;
}
if (var89){
var92 = 0;
var = var92;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MClassType */
cltype94 = type_model__MClassType.color;
idtype95 = type_model__MClassType.id;
if(cltype94 >= var_sup->type->table_size) {
var93 = 0;
} else {
var93 = var_sup->type->type_table[cltype94] == idtype95;
}
if (!var93) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 625);
show_backtrace(1);
}
var96 = ((short int (*)(val*, val*))(var_sub->class->vft[COLOR_kernel__Object___61d_61d]))(var_sub, var_sup) /* == on <var_sub:MType(MClassType)>*/;
if (var96){
var97 = 1;
var = var97;
goto RET_LABEL;
} else {
}
var98 = NULL;
if (var_anchor == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (var99){
var_anchor = var_sub;
} else {
}
var100 = ((val* (*)(val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__anchor_to]))(var_sub, var_mmodule, var_anchor) /* anchor_to on <var_sub:MType(MClassType)>*/;
var_resolved_sub = var100;
var101 = ((val* (*)(val*, val*))(var_resolved_sub->class->vft[COLOR_model__MType__collect_mclasses]))(var_resolved_sub, var_mmodule) /* collect_mclasses on <var_resolved_sub:MClassType>*/;
var102 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MClassType__mclass]))(var_sup) /* mclass on <var_sup:MType(MClassType)>*/;
var103 = ((short int (*)(val*, val*))(var101->class->vft[COLOR_abstract_collection__Collection__has]))(var101, var102) /* has on <var101:Set[MClass]>*/;
var_res = var103;
var104 = 0;
{ /* Inline kernel#Bool#== (var_res,var104) */
var107 = var_res == var104;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
if (var105){
var108 = 0;
var = var108;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype110 = type_model__MGenericType.color;
idtype111 = type_model__MGenericType.id;
if(cltype110 >= var_sup->type->table_size) {
var109 = 0;
} else {
var109 = var_sup->type->type_table[cltype110] == idtype111;
}
var112 = !var109;
if (var112){
var113 = 1;
var = var113;
goto RET_LABEL;
} else {
}
var114 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MClassType__mclass]))(var_sup) /* mclass on <var_sup:MType(MGenericType)>*/;
var115 = ((val* (*)(val*, val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__supertype_to]))(var_sub, var_mmodule, var_anchor, var114) /* supertype_to on <var_sub:MType(MClassType)>*/;
var_sub2 = var115;
var116 = ((val* (*)(val*))(var_sub2->class->vft[COLOR_model__MClassType__mclass]))(var_sub2) /* mclass on <var_sub2:MClassType>*/;
var117 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MClassType__mclass]))(var_sup) /* mclass on <var_sup:MType(MGenericType)>*/;
var118 = ((short int (*)(val*, val*))(var116->class->vft[COLOR_kernel__Object___61d_61d]))(var116, var117) /* == on <var116:MClass>*/;
if (!var118) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 637);
show_backtrace(1);
}
var119 = NEW_range__Range(&type_range__Rangekernel__Int);
var120 = 0;
var121 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MClassType__mclass]))(var_sup) /* mclass on <var_sup:MType(MGenericType)>*/;
var122 = ((long (*)(val*))(var121->class->vft[COLOR_model__MClass__arity]))(var121) /* arity on <var121:MClass>*/;
var123 = BOX_kernel__Int(var120); /* autobox from Int to Discrete */
var124 = BOX_kernel__Int(var122); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var119->class->vft[COLOR_range__Range__without_last]))(var119, var123, var124) /* without_last on <var119:Range[Int]>*/;
var125 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Collection__iterator]))(var119) /* iterator on <var119:Range[Int]>*/;
for(;;) {
var126 = ((short int (*)(val*))(var125->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var125) /* is_ok on <var125:Iterator[nullable Object]>*/;
if(!var126) break;
var127 = ((val* (*)(val*))(var125->class->vft[COLOR_abstract_collection__Iterator__item]))(var125) /* item on <var125:Iterator[nullable Object]>*/;
var128 = ((struct instance_kernel__Int*)var127)->value; /* autounbox from nullable Object to Int */;
var_i = var128;
var129 = ((val* (*)(val*))(var_sub2->class->vft[COLOR_model__MClassType__arguments]))(var_sub2) /* arguments on <var_sub2:MClassType>*/;
var130 = ((val* (*)(val*, long))(var129->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var129, var_i) /* [] on <var129:Array[MType]>*/;
var_sub_arg = var130;
var131 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MClassType__arguments]))(var_sup) /* arguments on <var_sup:MType(MGenericType)>*/;
var132 = ((val* (*)(val*, long))(var131->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var131, var_i) /* [] on <var131:Array[MType]>*/;
var_sup_arg = var132;
var133 = ((short int (*)(val*, val*, val*, val*))(var_sub_arg->class->vft[COLOR_model__MType__is_subtype]))(var_sub_arg, var_mmodule, var_anchor, var_sup_arg) /* is_subtype on <var_sub_arg:MType>*/;
var_res = var133;
var134 = 0;
{ /* Inline kernel#Bool#== (var_res,var134) */
var137 = var_res == var134;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
if (var135){
var138 = 0;
var = var138;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var125->class->vft[COLOR_abstract_collection__Iterator__next]))(var125) /* next on <var125:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var139 = 1;
var = var139;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#is_subtype for (self: Object, MModule, nullable MClassType, MType): Bool */
short int VIRTUAL_model__MType__is_subtype(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MType__is_subtype(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#anchor_to for (self: MType, MModule, MClassType): MType */
val* model__MType__anchor_to(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: MClassType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var_res /* var res: MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
var3 = ((short int (*)(val*))(var_anchor->class->vft[COLOR_model__MType__need_anchor]))(var_anchor) /* need_anchor on <var_anchor:MClassType>*/;
var4 = !var3;
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 682);
show_backtrace(1);
}
var5 = NULL;
var6 = 1;
var7 = ((val* (*)(val*, val*, val*, val*, short int))(self->class->vft[COLOR_model__MType__resolve_for]))(self, var_anchor, var5, var_mmodule, var6) /* resolve_for on <self:MType>*/;
var_res = var7;
var8 = ((short int (*)(val*))(var_res->class->vft[COLOR_model__MType__need_anchor]))(var_res) /* need_anchor on <var_res:MType>*/;
var9 = !var8;
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 685);
show_backtrace(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#anchor_to for (self: Object, MModule, MClassType): MType */
val* VIRTUAL_model__MType__anchor_to(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MType__anchor_to(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#need_anchor for (self: MType): Bool */
short int model__MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#supertype_to for (self: MType, MModule, nullable MClassType, MClass): MClassType */
val* model__MType__supertype_to(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_super_mclass /* var super_mclass: MClass */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClassType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var9 /* : MClass */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : null */;
short int var13 /* : Bool */;
val* var14 /* : MType */;
val* var_resolved_self /* var resolved_self: nullable Object */;
val* var15 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var19 /* : MClass */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MType */;
var_mmodule = p0;
var_anchor = p1;
var_super_mclass = p2;
var1 = ((long (*)(val*))(var_super_mclass->class->vft[COLOR_model__MClass__arity]))(var_super_mclass) /* arity on <var_super_mclass:MClass>*/;
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var6 = ((val* (*)(val*))(var_super_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_super_mclass) /* mclass_type on <var_super_mclass:MClass>*/;
var = var6;
goto RET_LABEL;
} else {
}
/* <self:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= self->type->table_size) {
var8 = 0;
} else {
var8 = self->type->type_table[cltype] == idtype;
}
var_ = var8;
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MType(MClassType)>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___61d_61d]))(var9, var_super_mclass) /* == on <var9:MClass>*/;
var7 = var10;
} else {
var7 = var_;
}
if (var7){
var = self;
goto RET_LABEL;
} else {
}
var11 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
if (var11){
var12 = NULL;
if (var_anchor == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 711);
show_backtrace(1);
}
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MType__anchor_to]))(self, var_mmodule, var_anchor) /* anchor_to on <self:MType>*/;
var_resolved_self = var14;
} else {
var_resolved_self = self;
}
var15 = ((val* (*)(val*, val*))(var_resolved_self->class->vft[COLOR_model__MType__collect_mtypes]))(var_resolved_self, var_mmodule) /* collect_mtypes on <var_resolved_self:nullable Object(MType)>*/;
var_supertypes = var15;
var16 = ((val* (*)(val*))(var_supertypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_supertypes) /* iterator on <var_supertypes:Set[MClassType]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_supertype = var18;
var19 = ((val* (*)(val*))(var_supertype->class->vft[COLOR_model__MClassType__mclass]))(var_supertype) /* mclass on <var_supertype:MClassType>*/;
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_super_mclass) /* == on <var19:MClass>*/;
if (var20){
var21 = 0;
var22 = ((val* (*)(val*, val*, val*, val*, short int))(var_supertype->class->vft[COLOR_model__MType__resolve_for]))(var_supertype, self, var_anchor, var_mmodule, var21) /* resolve_for on <var_supertype:MClassType>*/;
var = var22;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 723);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#supertype_to for (self: Object, MModule, nullable MClassType, MClass): MClassType */
val* VIRTUAL_model__MType__supertype_to(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = model__MType__supertype_to(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#resolve_for for (self: MType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "resolve_for", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 726);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#can_resolve_for for (self: MType, MType, nullable MClassType, MModule): Bool */
short int model__MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "can_resolve_for", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 798);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable for (self: MType): MType */
val* model__MType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MNullableType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MType__as_nullable_cache]))(self) /* as_nullable_cache on <self:MType>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = NEW_model__MNullableType(&type_model__MNullableType);
((void (*)(val*, val*))(var4->class->vft[COLOR_model__MNullableType__init]))(var4, self) /* init on <var4:MNullableType>*/;
var_res = var4;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MType__as_nullable_cache_61d]))(self, var_res) /* as_nullable_cache= on <self:MType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable for (self: Object): MType */
val* VIRTUAL_model__MType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MType__as_nullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache for (self: MType): nullable MType */
val* model__MType__as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MType___64das_nullable_cache].val; /* @as_nullable_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache for (self: Object): nullable MType */
val* VIRTUAL_model__MType__as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = model__MType__as_nullable_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache= for (self: MType, nullable MType) */
void model__MType__as_nullable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MType___64das_nullable_cache].val = p0; /* @as_nullable_cache on <self:MType> */
RET_LABEL:;
}
/* method model#MType#as_nullable_cache= for (self: Object, nullable MType) */
void VIRTUAL_model__MType__as_nullable_cache_61d(val* self, val* p0) {
model__MType__as_nullable_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MType#depth for (self: MType): Int */
long model__MType__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#depth for (self: Object): Int */
long VIRTUAL_model__MType__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MType__depth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#length for (self: MType): Int */
long model__MType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#length for (self: Object): Int */
long VIRTUAL_model__MType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MType__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclassdefs for (self: MType, MModule): Set[MClassDef] */
val* model__MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "collect_mclassdefs", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 860);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: MType, MModule): Set[MClass] */
val* model__MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 870);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: MType, MModule): Set[MClassType] */
val* model__MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 876);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#has_mproperty for (self: MType, MModule, MProperty): Bool */
short int model__MType__has_mproperty(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mproperty /* var mproperty: MProperty */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Set[MClassDef] */;
val* var4 /* : MClassDef */;
short int var5 /* : Bool */;
var_mmodule = p0;
var_mproperty = p1;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 889);
show_backtrace(1);
}
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model__MType__collect_mclassdefs]))(self, var_mmodule) /* collect_mclassdefs on <self:MType>*/;
var4 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mproperty) /* intro_mclassdef on <var_mproperty:MProperty>*/;
var5 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var4) /* has on <var3:Set[MClassDef]>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#has_mproperty for (self: Object, MModule, MProperty): Bool */
short int VIRTUAL_model__MType__has_mproperty(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MType__has_mproperty(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#init for (self: MType) */
void model__MType__init(val* self) {
RET_LABEL:;
}
/* method model#MType#init for (self: Object) */
void VIRTUAL_model__MType__init(val* self) {
model__MType__init(self);
RET_LABEL:;
}
/* method model#MClassType#mclass for (self: MClassType): MClass */
val* model__MClassType__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_model__MClassType___64dmclass].val; /* @mclass on <self:MClassType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 900);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass for (self: Object): MClass */
val* VIRTUAL_model__MClassType__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = model__MClassType__mclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass= for (self: MClassType, MClass) */
void model__MClassType__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___64dmclass].val = p0; /* @mclass on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#mclass= for (self: Object, MClass) */
void VIRTUAL_model__MClassType__mclass_61d(val* self, val* p0) {
model__MClassType__mclass_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassType#model for (self: MClassType): Model */
val* model__MClassType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__intro_mmodule]))(var1) /* intro_mmodule on <var1:MClass>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_mmodule__MModule__model]))(var2) /* model on <var2:MModule>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#model for (self: Object): Model */
val* VIRTUAL_model__MClassType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MClassType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#init for (self: MClassType, MClass) */
void model__MClassType__init(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
var_mclass = p0;
((void (*)(val*))(self->class->vft[COLOR_model__MType__init]))(self) /* init on <self:MClassType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassType__mclass_61d]))(self, var_mclass) /* mclass= on <self:MClassType>*/;
RET_LABEL:;
}
/* method model#MClassType#init for (self: Object, MClass) */
void VIRTUAL_model__MClassType__init(val* self, val* p0) {
model__MClassType__init(self, p0);
RET_LABEL:;
}
/* method model#MClassType#arguments for (self: MClassType): Array[MType] */
val* model__MClassType__arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_model__MClassType___64darguments].val; /* @arguments on <self:MClassType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @arguments");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 910);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#arguments for (self: Object): Array[MType] */
val* VIRTUAL_model__MClassType__arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = model__MClassType__arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#arguments= for (self: MClassType, Array[MType]) */
void model__MClassType__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___64darguments].val = p0; /* @arguments on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#arguments= for (self: Object, Array[MType]) */
void VIRTUAL_model__MClassType__arguments_61d(val* self, val* p0) {
model__MClassType__arguments_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassType#to_s for (self: MClassType): String */
val* model__MClassType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:MClass>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#to_s for (self: Object): String */
val* VIRTUAL_model__MClassType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClassType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#need_anchor for (self: MClassType): Bool */
short int model__MClassType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MClassType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MClassType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#anchor_to for (self: MClassType, MModule, MClassType): MClassType */
val* model__MClassType__anchor_to(val* self, val* p0, val* p1) {
val* var /* : MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: MClassType */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_mmodule = p0;
var_anchor = p1;
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MClassType__anchor_to]))(self, p0, p1) /* anchor_to on <self:MClassType>*/;
/* <var1:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 920);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#anchor_to for (self: Object, MModule, MClassType): MType */
val* VIRTUAL_model__MClassType__anchor_to(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MClassType */;
var1 = model__MClassType__anchor_to(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#resolve_for for (self: MClassType, MType, nullable MClassType, MModule, Bool): MClassType */
val* model__MClassType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MClassType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MClassType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MClassType */;
var1 = model__MClassType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#can_resolve_for for (self: MClassType, MType, nullable MClassType, MModule): Bool */
short int model__MClassType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MClassType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MClassType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclassdefs for (self: MClassType, MModule): Set[MClassDef] */
val* model__MClassType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Set[MClassDef]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClassDef]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
var_mmodule = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 929);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__collect_mclassdefs_cache]))(self) /* collect_mclassdefs_cache on <self:MClassType>*/;
var_cache = var3;
var4 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_cache, var_mmodule) /* has_key on <var_cache:HashMap[MModule, Set[MClassDef]]>*/;
var5 = !var4;
if (var5){
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassType__collect_things]))(self, var_mmodule) /* collect_things on <self:MClassType>*/;
} else {
}
var6 = ((val* (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_cache, var_mmodule) /* [] on <var_cache:HashMap[MModule, Set[MClassDef]]>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MClassType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MClassType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses for (self: MClassType, MModule): Set[MClass] */
val* model__MClassType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Set[MClass]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClass]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
var_mmodule = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 939);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__collect_mclasses_cache]))(self) /* collect_mclasses_cache on <self:MClassType>*/;
var_cache = var3;
var4 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_cache, var_mmodule) /* has_key on <var_cache:HashMap[MModule, Set[MClass]]>*/;
var5 = !var4;
if (var5){
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassType__collect_things]))(self, var_mmodule) /* collect_things on <self:MClassType>*/;
} else {
}
var6 = ((val* (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_cache, var_mmodule) /* [] on <var_cache:HashMap[MModule, Set[MClass]]>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MClassType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MClassType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes for (self: MClassType, MModule): Set[MClassType] */
val* model__MClassType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClassType]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
var_mmodule = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 949);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__collect_mtypes_cache]))(self) /* collect_mtypes_cache on <self:MClassType>*/;
var_cache = var3;
var4 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_cache, var_mmodule) /* has_key on <var_cache:HashMap[MModule, Set[MClassType]]>*/;
var5 = !var4;
if (var5){
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassType__collect_things]))(self, var_mmodule) /* collect_things on <self:MClassType>*/;
} else {
}
var6 = ((val* (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_cache, var_mmodule) /* [] on <var_cache:HashMap[MModule, Set[MClassType]]>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MClassType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MClassType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_things for (self: MClassType, MModule) */
void model__MClassType__collect_things(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : HashSet[MClassDef] */;
val* var_res /* var res: HashSet[MClassDef] */;
val* var1 /* : HashSet[MClass] */;
val* var_seen /* var seen: HashSet[MClass] */;
val* var2 /* : HashSet[MClassType] */;
val* var_types /* var types: HashSet[MClassType] */;
val* var3 /* : MClass */;
val* var4 /* : Array[MClass] */;
long var5 /* : Int */;
val* var_ /* var : Array[MClass] */;
val* var6 /* : MClass */;
val* var_todo /* var todo: Array[MClass] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var10 /* : Array[MClassDef] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : MModule */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[MClassType] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var22 /* : MClass */;
val* var_superclass /* var superclass: MClass */;
short int var23 /* : Bool */;
val* var26 /* : HashMap[MModule, Set[MClassDef]] */;
val* var27 /* : HashMap[MModule, Set[MClass]] */;
val* var28 /* : HashMap[MModule, Set[MClassType]] */;
var_mmodule = p0;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassDef);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MClassDef]>*/;
var_res = var;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClass]>*/;
var_seen = var1;
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MClassType]>*/;
var_types = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
((void (*)(val*, val*))(var_seen->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_seen, var3) /* add on <var_seen:HashSet[MClass]>*/;
var4 = NEW_array__Array(&type_array__Arraymodel__MClass);
var5 = 1;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[MClass]>*/;
var_ = var4;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[MClass]>*/;
var_todo = var_;
for(;;) {
var7 = ((short int (*)(val*))(var_todo->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_todo) /* is_empty on <var_todo:Array[MClass]>*/;
var8 = !var7;
if (!var8) break;
var9 = ((val* (*)(val*))(var_todo->class->vft[COLOR_abstract_collection__Sequence__pop]))(var_todo) /* pop on <var_todo:Array[MClass]>*/;
var_mclass = var9;
var10 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclassdefs]))(var_mclass) /* mclassdefs on <var_mclass:MClass>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Array[MClassDef]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_mclassdef = var13;
var14 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var15 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_mclassdef) /* mmodule on <var_mclassdef:MClassDef>*/;
var16 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_poset__POSetElement___60d_61d]))(var14, var15) /* <= on <var14:POSetElement[MModule]>*/;
var17 = !var16;
if (var17){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var_mclassdef) /* add on <var_res:HashSet[MClassDef]>*/;
var18 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__supertypes]))(var_mclassdef) /* supertypes on <var_mclassdef:MClassDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:Array[MClassType]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var_supertype = var21;
((void (*)(val*, val*))(var_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_types, var_supertype) /* add on <var_types:HashSet[MClassType]>*/;
var22 = ((val* (*)(val*))(var_supertype->class->vft[COLOR_model__MClassType__mclass]))(var_supertype) /* mclass on <var_supertype:MClassType>*/;
var_superclass = var22;
var23 = ((short int (*)(val*, val*))(var_seen->class->vft[COLOR_abstract_collection__Collection__has]))(var_seen, var_superclass) /* has on <var_seen:HashSet[MClass]>*/;
if (var23){
goto CONTINUE_label24;
} else {
}
((void (*)(val*, val*))(var_seen->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_seen, var_superclass) /* add on <var_seen:HashSet[MClass]>*/;
((void (*)(val*, val*))(var_todo->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_todo, var_superclass) /* add on <var_todo:Array[MClass]>*/;
CONTINUE_label24: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label24: (void)0;
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label25: (void)0;
}
BREAK_label25: (void)0;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__collect_mclassdefs_cache]))(self) /* collect_mclassdefs_cache on <self:MClassType>*/;
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var26, var_mmodule, var_res) /* []= on <var26:HashMap[MModule, Set[MClassDef]]>*/;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__collect_mclasses_cache]))(self) /* collect_mclasses_cache on <self:MClassType>*/;
((void (*)(val*, val*, val*))(var27->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var27, var_mmodule, var_seen) /* []= on <var27:HashMap[MModule, Set[MClass]]>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__collect_mtypes_cache]))(self) /* collect_mtypes_cache on <self:MClassType>*/;
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var28, var_mmodule, var_types) /* []= on <var28:HashMap[MModule, Set[MClassType]]>*/;
RET_LABEL:;
}
/* method model#MClassType#collect_things for (self: Object, MModule) */
void VIRTUAL_model__MClassType__collect_things(val* self, val* p0) {
model__MClassType__collect_things(self, p0);
RET_LABEL:;
}
/* method model#MClassType#collect_mclassdefs_cache for (self: MClassType): HashMap[MModule, Set[MClassDef]] */
val* model__MClassType__collect_mclassdefs_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassDef]] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
var1 = self->attrs[COLOR_model__MClassType___64dcollect_mclassdefs_cache].val; /* @collect_mclassdefs_cache on <self:MClassType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @collect_mclassdefs_cache");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 987);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclassdefs_cache for (self: Object): HashMap[MModule, Set[MClassDef]] */
val* VIRTUAL_model__MClassType__collect_mclassdefs_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassDef]] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
var1 = model__MClassType__collect_mclassdefs_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclassdefs_cache= for (self: MClassType, HashMap[MModule, Set[MClassDef]]) */
void model__MClassType__collect_mclassdefs_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___64dcollect_mclassdefs_cache].val = p0; /* @collect_mclassdefs_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mclassdefs_cache= for (self: Object, HashMap[MModule, Set[MClassDef]]) */
void VIRTUAL_model__MClassType__collect_mclassdefs_cache_61d(val* self, val* p0) {
model__MClassType__collect_mclassdefs_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassType#collect_mclasses_cache for (self: MClassType): HashMap[MModule, Set[MClass]] */
val* model__MClassType__collect_mclasses_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClass]] */;
val* var1 /* : HashMap[MModule, Set[MClass]] */;
var1 = self->attrs[COLOR_model__MClassType___64dcollect_mclasses_cache].val; /* @collect_mclasses_cache on <self:MClassType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @collect_mclasses_cache");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 988);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_cache for (self: Object): HashMap[MModule, Set[MClass]] */
val* VIRTUAL_model__MClassType__collect_mclasses_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClass]] */;
val* var1 /* : HashMap[MModule, Set[MClass]] */;
var1 = model__MClassType__collect_mclasses_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_cache= for (self: MClassType, HashMap[MModule, Set[MClass]]) */
void model__MClassType__collect_mclasses_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___64dcollect_mclasses_cache].val = p0; /* @collect_mclasses_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mclasses_cache= for (self: Object, HashMap[MModule, Set[MClass]]) */
void VIRTUAL_model__MClassType__collect_mclasses_cache_61d(val* self, val* p0) {
model__MClassType__collect_mclasses_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassType#collect_mtypes_cache for (self: MClassType): HashMap[MModule, Set[MClassType]] */
val* model__MClassType__collect_mtypes_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassType]] */;
val* var1 /* : HashMap[MModule, Set[MClassType]] */;
var1 = self->attrs[COLOR_model__MClassType___64dcollect_mtypes_cache].val; /* @collect_mtypes_cache on <self:MClassType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @collect_mtypes_cache");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 989);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes_cache for (self: Object): HashMap[MModule, Set[MClassType]] */
val* VIRTUAL_model__MClassType__collect_mtypes_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassType]] */;
val* var1 /* : HashMap[MModule, Set[MClassType]] */;
var1 = model__MClassType__collect_mtypes_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes_cache= for (self: MClassType, HashMap[MModule, Set[MClassType]]) */
void model__MClassType__collect_mtypes_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___64dcollect_mtypes_cache].val = p0; /* @collect_mtypes_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mtypes_cache= for (self: Object, HashMap[MModule, Set[MClassType]]) */
void VIRTUAL_model__MClassType__collect_mtypes_cache_61d(val* self, val* p0) {
model__MClassType__collect_mtypes_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MGenericType#init for (self: MGenericType, MClass, Array[MType]) */
void model__MGenericType__init(val* self, val* p0, val* p1) {
val* var_mclass /* var mclass: MClass */;
val* var_arguments /* var arguments: Array[MType] */;
val* var /* : MClass */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
var_mclass = p0;
var_arguments = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassType__init]))(self, var_mclass) /* init on <self:MGenericType>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MGenericType>*/;
var1 = ((long (*)(val*))(var->class->vft[COLOR_model__MClass__arity]))(var) /* arity on <var:MClass>*/;
var2 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[MType]>*/;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1001);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassType__arguments_61d]))(self, var_arguments) /* arguments= on <self:MGenericType>*/;
var6 = 0;
((void (*)(val*, short int))(self->class->vft[COLOR_model__MGenericType__need_anchor_61d]))(self, var6) /* need_anchor= on <self:MGenericType>*/;
var7 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_arguments) /* iterator on <var_arguments:Array[MType]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_t = var9;
var10 = ((short int (*)(val*))(var_t->class->vft[COLOR_model__MType__need_anchor]))(var_t) /* need_anchor on <var_t:MType>*/;
if (var10){
var11 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_model__MGenericType__need_anchor_61d]))(self, var11) /* need_anchor= on <self:MGenericType>*/;
goto BREAK_label;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce) {
var12 = varonce;
} else {
var13 = "[";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ", ";
var19 = 2;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var17) /* join on <var_arguments:Array[MType]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "]";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 4;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var12;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var23;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MGenericType__to_s_61d]))(self, var30) /* to_s= on <self:MGenericType>*/;
RET_LABEL:;
}
/* method model#MGenericType#init for (self: Object, MClass, Array[MType]) */
void VIRTUAL_model__MGenericType__init(val* self, val* p0, val* p1) {
model__MGenericType__init(self, p0, p1);
RET_LABEL:;
}
/* method model#MGenericType#to_s for (self: MGenericType): String */
val* model__MGenericType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MGenericType___64dto_s].val; /* @to_s on <self:MGenericType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1015);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#to_s for (self: Object): String */
val* VIRTUAL_model__MGenericType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MGenericType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#to_s= for (self: MGenericType, String) */
void model__MGenericType__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MGenericType___64dto_s].val = p0; /* @to_s on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#to_s= for (self: Object, String) */
void VIRTUAL_model__MGenericType__to_s_61d(val* self, val* p0) {
model__MGenericType__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model#MGenericType#need_anchor for (self: MGenericType): Bool */
short int model__MGenericType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MGenericType___64dneed_anchor].s; /* @need_anchor on <self:MGenericType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MGenericType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MGenericType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor= for (self: MGenericType, Bool) */
void model__MGenericType__need_anchor_61d(val* self, short int p0) {
self->attrs[COLOR_model__MGenericType___64dneed_anchor].s = p0; /* @need_anchor on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#need_anchor= for (self: Object, Bool) */
void VIRTUAL_model__MGenericType__need_anchor_61d(val* self, short int p0) {
model__MGenericType__need_anchor_61d(self, p0);
RET_LABEL:;
}
/* method model#MGenericType#resolve_for for (self: MGenericType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MGenericType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[MType] */;
val* var_types /* var types: Array[MType] */;
val* var5 /* : Array[MType] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var9 /* : MType */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MGenericType>*/;
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
var3 = ((short int (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MType__can_resolve_for]))(self, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <self:MGenericType>*/;
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1024);
show_backtrace(1);
}
var4 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[MType]>*/;
var_types = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__arguments]))(self) /* arguments on <self:MGenericType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Array[MType]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_t = var8;
var9 = ((val* (*)(val*, val*, val*, val*, short int))(var_t->class->vft[COLOR_model__MType__resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_t:MType>*/;
((void (*)(val*, val*))(var_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_types, var9) /* add on <var_types:Array[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MGenericType>*/;
var11 = ((val* (*)(val*, val*))(var10->class->vft[COLOR_model__MClass__get_mtype]))(var10, var_types) /* get_mtype on <var10:MClass>*/;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MGenericType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MGenericType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#can_resolve_for for (self: MGenericType, MType, nullable MClassType, MModule): Bool */
short int model__MGenericType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[MType] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MGenericType>*/;
var2 = !var1;
if (var2){
var3 = 1;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__arguments]))(self) /* arguments on <self:MGenericType>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:Array[MType]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_t = var7;
var8 = ((short int (*)(val*, val*, val*, val*))(var_t->class->vft[COLOR_model__MType__can_resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var_t:MType>*/;
var9 = !var8;
if (var9){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = 1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MGenericType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MGenericType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#depth for (self: MGenericType): Int */
long model__MGenericType__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_dmax /* var dmax: Int */;
val* var2 /* : Array[MType] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_a /* var a: MType */;
long var6 /* : Int */;
long var_d /* var d: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
var1 = 0;
var_dmax = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__arguments]))(self) /* arguments on <self:MGenericType>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[MType]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_a = var5;
var6 = ((long (*)(val*))(var_a->class->vft[COLOR_model__MType__depth]))(var_a) /* depth on <var_a:MType>*/;
var_d = var6;
{ /* Inline kernel#Int#> (var_d,var_dmax) */
/* Covariant cast for argument 0 (i) <var_dmax:Int> isa OTHER */
/* <var_dmax:Int> isa OTHER */
var9 = 1; /* easy <var_dmax:Int> isa OTHER*/
if (!var9) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var10 = var_d > var_dmax;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var_dmax = var_d;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = 1;
{ /* Inline kernel#Int#+ (var_dmax,var11) */
var14 = var_dmax + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#depth for (self: Object): Int */
long VIRTUAL_model__MGenericType__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MGenericType__depth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#length for (self: MGenericType): Int */
long model__MGenericType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : Array[MType] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_a /* var a: MType */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
var1 = 1;
var_res = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__arguments]))(self) /* arguments on <self:MGenericType>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[MType]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_a = var5;
var6 = ((long (*)(val*))(var_a->class->vft[COLOR_model__MType__length]))(var_a) /* length on <var_a:MType>*/;
{ /* Inline kernel#Int#+ (var_res,var6) */
var9 = var_res + var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_res = var7;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#length for (self: Object): Int */
long VIRTUAL_model__MGenericType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MGenericType__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#mproperty for (self: MVirtualType): MProperty */
val* model__MVirtualType__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_model__MVirtualType___64dmproperty].val; /* @mproperty on <self:MVirtualType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1066);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#mproperty for (self: Object): MProperty */
val* VIRTUAL_model__MVirtualType__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = model__MVirtualType__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#mproperty= for (self: MVirtualType, MProperty) */
void model__MVirtualType__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_model__MVirtualType___64dmproperty].val = p0; /* @mproperty on <self:MVirtualType> */
RET_LABEL:;
}
/* method model#MVirtualType#mproperty= for (self: Object, MProperty) */
void VIRTUAL_model__MVirtualType__mproperty_61d(val* self, val* p0) {
model__MVirtualType__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method model#MVirtualType#model for (self: MVirtualType): Model */
val* model__MVirtualType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MProperty */;
val* var2 /* : MClassDef */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var1) /* intro_mclassdef on <var1:MProperty>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:MClassDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_mmodule__MModule__model]))(var3) /* model on <var3:MModule>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#model for (self: Object): Model */
val* VIRTUAL_model__MVirtualType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MVirtualType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_bound for (self: MVirtualType, MModule, MType): MType */
val* model__MVirtualType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var4 /* : Array[MPropDef] */;
val* var_props /* var props: Array[MPropDef] */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var13 /* : nullable MType */;
val* var14 /* : ArraySet[MType] */;
val* var_types /* var types: ArraySet[MType] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_p /* var p: MPropDef */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
val* var22 /* : nullable MType */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
var_mmodule = p0;
var_resolved_receiver = p1;
var1 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1080);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var4 = ((val* (*)(val*, val*, val*))(var3->class->vft[COLOR_model__MProperty__lookup_definitions]))(var3, var_mmodule, var_resolved_receiver) /* lookup_definitions on <var3:MProperty>*/;
var_props = var4;
var5 = ((short int (*)(val*))(var_props->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_props) /* is_empty on <var_props:Array[MPropDef]>*/;
if (var5){
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1083);
show_backtrace(1);
} else {
var6 = ((long (*)(val*))(var_props->class->vft[COLOR_abstract_collection__Collection__length]))(var_props) /* length on <var_props:Array[MPropDef]>*/;
var7 = 1;
{ /* Inline kernel#Int#== (var6,var7) */
var10 = var6 == var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var11 = ((val* (*)(val*))(var_props->class->vft[COLOR_abstract_collection__Collection__first]))(var_props) /* first on <var_props:Array[MPropDef]>*/;
/* <var11:nullable Object(MPropDef)> isa MVirtualTypeDef */
cltype = type_model__MVirtualTypeDef.color;
idtype = type_model__MVirtualTypeDef.id;
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
if (!var12) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1085);
show_backtrace(1);
}
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MVirtualTypeDef__bound]))(var11) /* bound on <var11:MPropDef(MVirtualTypeDef)>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1085);
show_backtrace(1);
}
var = var13;
goto RET_LABEL;
} else {
}
}
var14 = NEW_array__ArraySet(&type_array__ArraySetmodel__MType);
((void (*)(val*))(var14->class->vft[COLOR_array__ArraySet__init]))(var14) /* init on <var14:ArraySet[MType]>*/;
var_types = var14;
var15 = ((val* (*)(val*))(var_props->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_props) /* iterator on <var_props:Array[MPropDef]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_p = var17;
/* <var_p:MPropDef> isa MVirtualTypeDef */
cltype19 = type_model__MVirtualTypeDef.color;
idtype20 = type_model__MVirtualTypeDef.id;
if(cltype19 >= var_p->type->table_size) {
var18 = 0;
} else {
var18 = var_p->type->type_table[cltype19] == idtype20;
}
if (!var18) {
var_class_name21 = var_p == NULL ? "null" : var_p->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1089);
show_backtrace(1);
}
var22 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MVirtualTypeDef__bound]))(var_p) /* bound on <var_p:MPropDef(MVirtualTypeDef)>*/;
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1089);
show_backtrace(1);
}
((void (*)(val*, val*))(var_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_types, var22) /* add on <var_types:ArraySet[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var23 = ((long (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_types) /* length on <var_types:ArraySet[MType]>*/;
var24 = 1;
{ /* Inline kernel#Int#== (var23,var24) */
var27 = var23 == var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
var28 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__first]))(var_types) /* first on <var_types:ArraySet[MType]>*/;
var = var28;
goto RET_LABEL;
} else {
}
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1094);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_bound for (self: Object, MModule, MType): MType */
val* VIRTUAL_model__MVirtualType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MVirtualType__lookup_bound(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MVirtualType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var_resolved_reciever /* var resolved_reciever: nullable Object */;
val* var8 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var9 /* : MType */;
val* var_res /* var res: MType */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : MType */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name;
val* var15 /* : MClass */;
val* var16 /* : MClassKind */;
val* var17 /* : MClassKind */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
short int var_ /* var : Bool */;
val* var26 /* : MClass */;
val* var27 /* : MClassKind */;
val* var28 /* : MClassKind */;
short int var29 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = ((short int (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MType__can_resolve_for]))(self, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <self:MVirtualType>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1099);
show_backtrace(1);
}
var2 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var2){
var3 = NULL;
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1106);
show_backtrace(1);
}
var5 = NULL;
var6 = 1;
var7 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var_anchor, var5, var_mmodule, var6) /* resolve_for on <var_mtype:MType>*/;
var_resolved_reciever = var7;
} else {
var_resolved_reciever = var_mtype;
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MVirtualType__lookup_bound]))(self, var_mmodule, var_resolved_reciever) /* lookup_bound on <self:MVirtualType>*/;
var_verbatim_bound = var8;
var9 = ((val* (*)(val*, val*, val*, val*, short int))(var_verbatim_bound->class->vft[COLOR_model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_verbatim_bound:MType>*/;
var_res = var9;
if (var_cleanup_virtual){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_resolved_reciever:nullable Object(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_resolved_reciever->type->table_size) {
var10 = 0;
} else {
var10 = var_resolved_reciever->type->type_table[cltype] == idtype;
}
if (var10){
var11 = ((val* (*)(val*))(var_resolved_reciever->class->vft[COLOR_model__MNullableType__mtype]))(var_resolved_reciever) /* mtype on <var_resolved_reciever:nullable Object(MNullableType)>*/;
var_resolved_reciever = var11;
} else {
}
/* <var_resolved_reciever:nullable Object(MType)> isa MClassType */
cltype13 = type_model__MClassType.color;
idtype14 = type_model__MClassType.id;
if(cltype13 >= var_resolved_reciever->type->table_size) {
var12 = 0;
} else {
var12 = var_resolved_reciever->type->type_table[cltype13] == idtype14;
}
if (!var12) {
var_class_name = var_resolved_reciever == NULL ? "null" : var_resolved_reciever->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1122);
show_backtrace(1);
}
var15 = ((val* (*)(val*))(var_resolved_reciever->class->vft[COLOR_model__MClassType__mclass]))(var_resolved_reciever) /* mclass on <var_resolved_reciever:MType(MClassType)>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClass__kind]))(var15) /* kind on <var15:MClass>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__enum_kind]))(self) /* enum_kind on <self:MVirtualType>*/;
var18 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var17) /* == on <var16:MClassKind>*/;
if (var18){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:MType> isa MVirtualType */
cltype20 = type_model__MVirtualType.color;
idtype21 = type_model__MVirtualType.id;
if(cltype20 >= var_res->type->table_size) {
var19 = 0;
} else {
var19 = var_res->type->type_table[cltype20] == idtype21;
}
if (var19){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:MType> isa MClassType */
cltype24 = type_model__MClassType.color;
idtype25 = type_model__MClassType.id;
if(cltype24 >= var_res->type->table_size) {
var23 = 0;
} else {
var23 = var_res->type->type_table[cltype24] == idtype25;
}
var_ = var23;
if (var23){
var26 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MClassType__mclass]))(var_res) /* mclass on <var_res:MType(MClassType)>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClass__kind]))(var26) /* kind on <var26:MClass>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__enum_kind]))(self) /* enum_kind on <self:MVirtualType>*/;
var29 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var28) /* == on <var27:MClassKind>*/;
var22 = var29;
} else {
var22 = var_;
}
if (var22){
var = var_res;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MVirtualType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MVirtualType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#can_resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule): Bool */
short int model__MVirtualType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : MProperty */;
short int var6 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var1){
var2 = NULL;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1138);
show_backtrace(1);
}
var4 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
var_mtype = var4;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var6 = ((short int (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__has_mproperty]))(var_mtype, var_mmodule, var5) /* has_mproperty on <var_mtype:MType>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MVirtualType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MVirtualType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#to_s for (self: MVirtualType): String */
val* model__MVirtualType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:MProperty>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#to_s for (self: Object): String */
val* VIRTUAL_model__MVirtualType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MVirtualType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#init for (self: MVirtualType, MProperty) */
void model__MVirtualType__init(val* self, val* p0) {
val* var_mproperty /* var mproperty: MProperty */;
var_mproperty = p0;
((void (*)(val*))(self->class->vft[COLOR_model__MType__init]))(self) /* init on <self:MVirtualType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MVirtualType__mproperty_61d]))(self, var_mproperty) /* mproperty= on <self:MVirtualType>*/;
RET_LABEL:;
}
/* method model#MVirtualType#init for (self: Object, MProperty) */
void VIRTUAL_model__MVirtualType__init(val* self, val* p0) {
model__MVirtualType__init(self, p0);
RET_LABEL:;
}
/* method model#MParameterType#mclass for (self: MParameterType): MClass */
val* model__MParameterType__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_model__MParameterType___64dmclass].val; /* @mclass on <self:MParameterType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1180);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#mclass for (self: Object): MClass */
val* VIRTUAL_model__MParameterType__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = model__MParameterType__mclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#mclass= for (self: MParameterType, MClass) */
void model__MParameterType__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameterType___64dmclass].val = p0; /* @mclass on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#mclass= for (self: Object, MClass) */
void VIRTUAL_model__MParameterType__mclass_61d(val* self, val* p0) {
model__MParameterType__mclass_61d(self, p0);
RET_LABEL:;
}
/* method model#MParameterType#model for (self: MParameterType): Model */
val* model__MParameterType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__intro_mmodule]))(var1) /* intro_mmodule on <var1:MClass>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_mmodule__MModule__model]))(var2) /* model on <var2:MModule>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#model for (self: Object): Model */
val* VIRTUAL_model__MParameterType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MParameterType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank for (self: MParameterType): Int */
long model__MParameterType__rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model__MParameterType___64drank].l; /* @rank on <self:MParameterType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank for (self: Object): Int */
long VIRTUAL_model__MParameterType__rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MParameterType__rank(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank= for (self: MParameterType, Int) */
void model__MParameterType__rank_61d(val* self, long p0) {
self->attrs[COLOR_model__MParameterType___64drank].l = p0; /* @rank on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#rank= for (self: Object, Int) */
void VIRTUAL_model__MParameterType__rank_61d(val* self, long p0) {
model__MParameterType__rank_61d(self, p0);
RET_LABEL:;
}
/* method model#MParameterType#to_s for (self: MParameterType): String */
val* model__MParameterType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MClass */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "#";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((long (*)(val*))(self->class->vft[COLOR_model__MParameterType__rank]))(self) /* rank on <self:MParameterType>*/;
var14 = BOX_kernel__Int(var13); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "";
var18 = 0;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#to_s for (self: Object): String */
val* VIRTUAL_model__MParameterType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MParameterType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#lookup_bound for (self: MParameterType, MModule, MType): MType */
val* model__MParameterType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClass */;
val* var_goalclass /* var goalclass: MClass */;
val* var4 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var8 /* : MClass */;
short int var9 /* : Bool */;
val* var10 /* : Array[MType] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
var1 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1200);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var_goalclass = var3;
var4 = ((val* (*)(val*, val*))(var_resolved_receiver->class->vft[COLOR_model__MType__collect_mtypes]))(var_resolved_receiver, var_mmodule) /* collect_mtypes on <var_resolved_receiver:MType>*/;
var_supertypes = var4;
var5 = ((val* (*)(val*))(var_supertypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_supertypes) /* iterator on <var_supertypes:Set[MClassType]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_t = var7;
var8 = ((val* (*)(val*))(var_t->class->vft[COLOR_model__MClassType__mclass]))(var_t) /* mclass on <var_t:MClassType>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var_goalclass) /* == on <var8:MClass>*/;
if (var9){
var10 = ((val* (*)(val*))(var_t->class->vft[COLOR_model__MClassType__arguments]))(var_t) /* arguments on <var_t:MClassType>*/;
var11 = ((long (*)(val*))(self->class->vft[COLOR_model__MParameterType__rank]))(self) /* rank on <self:MParameterType>*/;
var12 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var11) /* [] on <var10:Array[MType]>*/;
var_res = var12;
var = var_res;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1211);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MParameterType#lookup_bound for (self: Object, MModule, MType): MType */
val* VIRTUAL_model__MParameterType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MParameterType__lookup_bound(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#resolve_for for (self: MParameterType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MParameterType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var5 /* : MClass */;
short int var6 /* : Bool */;
val* var7 /* : Array[MType] */;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : MClass */;
val* var14 /* : MClassType */;
short int var15 /* : Bool */;
val* var16 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : MType */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : MClass */;
val* var25 /* : MClass */;
short int var26 /* : Bool */;
val* var27 /* : Array[MType] */;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : MType */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : MClass */;
val* var38 /* : MClass */;
short int var39 /* : Bool */;
val* var40 /* : Array[MType] */;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
val* var_res /* var res: MType */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
val* var46 /* : null */;
short int var47 /* : Bool */;
val* var48 /* : MType */;
val* var49 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var50 /* : MType */;
val* var_res51 /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = ((short int (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MType__can_resolve_for]))(self, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <self:MParameterType>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1216);
show_backtrace(1);
}
/* <var_mtype:MType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MGenericType)>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:MClass>*/;
var2 = var6;
} else {
var2 = var_;
}
if (var2){
var7 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MType(MGenericType)>*/;
var8 = ((long (*)(val*))(self->class->vft[COLOR_model__MParameterType__rank]))(self) /* rank on <self:MParameterType>*/;
var9 = ((val* (*)(val*, long))(var7->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var7, var8) /* [] on <var7:Array[MType]>*/;
var = var9;
goto RET_LABEL;
} else {
}
var10 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var10){
var11 = NULL;
if (var_anchor == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1229);
show_backtrace(1);
}
var13 = ((val* (*)(val*))(var_anchor->class->vft[COLOR_model__MClassType__mclass]))(var_anchor) /* mclass on <var_anchor:nullable MClassType(MClassType)>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__mclass_type]))(var13) /* mclass_type on <var13:MClass>*/;
var15 = 1;
var16 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var14, var_anchor, var_mmodule, var15) /* resolve_for on <var_mtype:MType>*/;
var_resolved_receiver = var16;
} else {
var_resolved_receiver = var_mtype;
}
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype18 = type_model__MNullableType.color;
idtype19 = type_model__MNullableType.id;
if(cltype18 >= var_resolved_receiver->type->table_size) {
var17 = 0;
} else {
var17 = var_resolved_receiver->type->type_table[cltype18] == idtype19;
}
if (var17){
var20 = ((val* (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MNullableType__mtype]))(var_resolved_receiver) /* mtype on <var_resolved_receiver:nullable Object(MNullableType)>*/;
var_resolved_receiver = var20;
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MParameterType */
cltype22 = type_model__MParameterType.color;
idtype23 = type_model__MParameterType.id;
if(cltype22 >= var_resolved_receiver->type->table_size) {
var21 = 0;
} else {
var21 = var_resolved_receiver->type->type_table[cltype22] == idtype23;
}
if (var21){
var24 = ((val* (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MParameterType__mclass]))(var_resolved_receiver) /* mclass on <var_resolved_receiver:nullable Object(MParameterType)>*/;
if (var_anchor == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1236);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var_anchor->class->vft[COLOR_model__MClassType__mclass]))(var_anchor) /* mclass on <var_anchor:nullable MClassType>*/;
}
var26 = ((short int (*)(val*, val*))(var24->class->vft[COLOR_kernel__Object___61d_61d]))(var24, var25) /* == on <var24:MClass>*/;
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1236);
show_backtrace(1);
}
if (var_anchor == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1237);
show_backtrace(1);
} else {
var27 = ((val* (*)(val*))(var_anchor->class->vft[COLOR_model__MClassType__arguments]))(var_anchor) /* arguments on <var_anchor:nullable MClassType>*/;
}
var28 = ((long (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MParameterType__rank]))(var_resolved_receiver) /* rank on <var_resolved_receiver:nullable Object(MParameterType)>*/;
var29 = ((val* (*)(val*, long))(var27->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var27, var28) /* [] on <var27:Array[MType]>*/;
var_resolved_receiver = var29;
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype31 = type_model__MNullableType.color;
idtype32 = type_model__MNullableType.id;
if(cltype31 >= var_resolved_receiver->type->table_size) {
var30 = 0;
} else {
var30 = var_resolved_receiver->type->type_table[cltype31] == idtype32;
}
if (var30){
var33 = ((val* (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MNullableType__mtype]))(var_resolved_receiver) /* mtype on <var_resolved_receiver:nullable Object(MNullableType)>*/;
var_resolved_receiver = var33;
} else {
}
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MClassType */
cltype35 = type_model__MClassType.color;
idtype36 = type_model__MClassType.id;
if(cltype35 >= var_resolved_receiver->type->table_size) {
var34 = 0;
} else {
var34 = var_resolved_receiver->type->type_table[cltype35] == idtype36;
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1240);
show_backtrace(1);
}
var37 = ((val* (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MClassType__mclass]))(var_resolved_receiver) /* mclass on <var_resolved_receiver:nullable Object(MClassType)>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var39 = ((short int (*)(val*, val*))(var37->class->vft[COLOR_kernel__Object___61d_61d]))(var37, var38) /* == on <var37:MClass>*/;
if (var39){
var40 = ((val* (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MClassType__arguments]))(var_resolved_receiver) /* arguments on <var_resolved_receiver:nullable Object(MClassType)>*/;
var41 = ((long (*)(val*))(self->class->vft[COLOR_model__MParameterType__rank]))(self) /* rank on <self:MParameterType>*/;
var42 = ((val* (*)(val*, long))(var40->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var40, var41) /* [] on <var40:Array[MType]>*/;
var_res = var42;
var = var_res;
goto RET_LABEL;
} else {
}
var43 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:nullable Object(MClassType)>*/;
if (var43){
var44 = NULL;
if (var_anchor == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1251);
show_backtrace(1);
}
var46 = NULL;
var47 = 0;
var48 = ((val* (*)(val*, val*, val*, val*, short int))(var_resolved_receiver->class->vft[COLOR_model__MType__resolve_for]))(var_resolved_receiver, var_anchor, var46, var_mmodule, var47) /* resolve_for on <var_resolved_receiver:nullable Object(MClassType)>*/;
var_resolved_receiver = var48;
} else {
}
var49 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MParameterType__lookup_bound]))(self, var_mmodule, var_resolved_receiver) /* lookup_bound on <self:MParameterType>*/;
var_verbatim_bound = var49;
var50 = ((val* (*)(val*, val*, val*, val*, short int))(var_verbatim_bound->class->vft[COLOR_model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_verbatim_bound:MType>*/;
var_res51 = var50;
var = var_res51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MParameterType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MParameterType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#can_resolve_for for (self: MParameterType, MType, nullable MClassType, MModule): Bool */
short int model__MParameterType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : Set[MClassDef] */;
val* var6 /* : MClass */;
val* var7 /* : MClassDef */;
short int var8 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var1){
var2 = NULL;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1267);
show_backtrace(1);
}
var4 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
var_mtype = var4;
} else {
}
var5 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var_mmodule) /* collect_mclassdefs on <var_mtype:MType>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MClass__intro]))(var6) /* intro on <var6:MClass>*/;
var8 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var7) /* has on <var5:Set[MClassDef]>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MParameterType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MParameterType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#init for (self: MParameterType, MClass, Int) */
void model__MParameterType__init(val* self, val* p0, long p1) {
val* var_mclass /* var mclass: MClass */;
long var_rank /* var rank: Int */;
var_mclass = p0;
var_rank = p1;
((void (*)(val*))(self->class->vft[COLOR_model__MType__init]))(self) /* init on <self:MParameterType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MParameterType__mclass_61d]))(self, var_mclass) /* mclass= on <self:MParameterType>*/;
((void (*)(val*, long))(self->class->vft[COLOR_model__MParameterType__rank_61d]))(self, var_rank) /* rank= on <self:MParameterType>*/;
RET_LABEL:;
}
/* method model#MParameterType#init for (self: Object, MClass, Int) */
void VIRTUAL_model__MParameterType__init(val* self, val* p0, long p1) {
model__MParameterType__init(self, p0, p1);
RET_LABEL:;
}
/* method model#MNullableType#mtype for (self: MNullableType): MType */
val* model__MNullableType__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_model__MNullableType___64dmtype].val; /* @mtype on <self:MNullableType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1284);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#mtype for (self: Object): MType */
val* VIRTUAL_model__MNullableType__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullableType__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#mtype= for (self: MNullableType, MType) */
void model__MNullableType__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullableType___64dmtype].val = p0; /* @mtype on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#mtype= for (self: Object, MType) */
void VIRTUAL_model__MNullableType__mtype_61d(val* self, val* p0) {
model__MNullableType__mtype_61d(self, p0);
RET_LABEL:;
}
/* method model#MNullableType#model for (self: MNullableType): Model */
val* model__MNullableType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var2 /* : Model */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MType__model]))(var1) /* model on <var1:MType>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#model for (self: Object): Model */
val* VIRTUAL_model__MNullableType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MNullableType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#init for (self: MNullableType, MType) */
void model__MNullableType__init(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var6 /* : NativeArray[Object] */;
val* var7 /* : String */;
var_mtype = p0;
((void (*)(val*))(self->class->vft[COLOR_model__MType__init]))(self) /* init on <self:MNullableType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MNullableType__mtype_61d]))(self, var_mtype) /* mtype= on <self:MNullableType>*/;
if (varonce) {
var = varonce;
} else {
var1 = "nullable ";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var4 = array_instance Array[Object] */
var5 = 2;
var6 = NEW_array__NativeArray(var5, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var6)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var6)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var4->class->vft[COLOR_array__Array__with_native]))(var4, var6, var5) /* with_native on <var4:Array[Object]>*/;
}
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_string__Object__to_s]))(var4) /* to_s on <var4:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MNullableType__to_s_61d]))(self, var7) /* to_s= on <self:MNullableType>*/;
RET_LABEL:;
}
/* method model#MNullableType#init for (self: Object, MType) */
void VIRTUAL_model__MNullableType__init(val* self, val* p0) {
model__MNullableType__init(self, p0);
RET_LABEL:;
}
/* method model#MNullableType#to_s for (self: MNullableType): String */
val* model__MNullableType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MNullableType___64dto_s].val; /* @to_s on <self:MNullableType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1295);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#to_s for (self: Object): String */
val* VIRTUAL_model__MNullableType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MNullableType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#to_s= for (self: MNullableType, String) */
void model__MNullableType__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullableType___64dto_s].val = p0; /* @to_s on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#to_s= for (self: Object, String) */
void VIRTUAL_model__MNullableType__to_s_61d(val* self, val* p0) {
model__MNullableType__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model#MNullableType#need_anchor for (self: MNullableType): Bool */
short int model__MNullableType__need_anchor(val* self) {
short int var /* : Bool */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MNullableType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullableType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_nullable for (self: MNullableType): MType */
val* model__MNullableType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_nullable for (self: Object): MType */
val* VIRTUAL_model__MNullableType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullableType__as_nullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#resolve_for for (self: MNullableType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MNullableType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var_res /* var res: MType */;
val* var3 /* : MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var2 = ((val* (*)(val*, val*, val*, val*, short int))(var1->class->vft[COLOR_model__MType__resolve_for]))(var1, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var1:MType>*/;
var_res = var2;
var3 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MNullableType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullableType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#can_resolve_for for (self: MNullableType, MType, nullable MClassType, MModule): Bool */
short int model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var2 = ((short int (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_model__MType__can_resolve_for]))(var1, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var1:MType>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullableType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#depth for (self: MNullableType): Int */
long model__MNullableType__depth(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_model__MType__depth]))(var1) /* depth on <var1:MType>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#depth for (self: Object): Int */
long VIRTUAL_model__MNullableType__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MNullableType__depth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: MNullableType): Int */
long model__MNullableType__length(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_model__MType__length]))(var1) /* length on <var1:MType>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: Object): Int */
long VIRTUAL_model__MNullableType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MNullableType__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: MNullableType, MModule): Set[MClassDef] */
val* model__MNullableType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Set[MClassDef] */;
var_mmodule = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MNullableType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1316);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mclassdefs]))(var3, var_mmodule) /* collect_mclassdefs on <var3:MType>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MNullableType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MNullableType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: MNullableType, MModule): Set[MClass] */
val* model__MNullableType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Set[MClass] */;
var_mmodule = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MNullableType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1322);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mclasses]))(var3, var_mmodule) /* collect_mclasses on <var3:MType>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MNullableType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MNullableType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: MNullableType, MModule): Set[MClassType] */
val* model__MNullableType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Set[MClassType] */;
var_mmodule = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MNullableType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1328);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mtypes]))(var3, var_mmodule) /* collect_mtypes on <var3:MType>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MNullableType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MNullableType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: MNullType): Model */
val* model__MNullType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_model__MNullType___64dmodel].val; /* @model on <self:MNullType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1338);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: Object): Model */
val* VIRTUAL_model__MNullType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MNullType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model= for (self: MNullType, Model) */
void model__MNullType__model_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullType___64dmodel].val = p0; /* @model on <self:MNullType> */
RET_LABEL:;
}
/* method model#MNullType#model= for (self: Object, Model) */
void VIRTUAL_model__MNullType__model_61d(val* self, val* p0) {
model__MNullType__model_61d(self, p0);
RET_LABEL:;
}
/* method model#MNullType#init for (self: MNullType, Model) */
void model__MNullType__init(val* self, val* p0) {
val* var_model /* var model: Model */;
var_model = p0;
((void (*)(val*))(self->class->vft[COLOR_model__MType__init]))(self) /* init on <self:MNullType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MNullType__model_61d]))(self, var_model) /* model= on <self:MNullType>*/;
RET_LABEL:;
}
/* method model#MNullType#init for (self: Object, Model) */
void VIRTUAL_model__MNullType__init(val* self, val* p0) {
model__MNullType__init(self, p0);
RET_LABEL:;
}
/* method model#MNullType#to_s for (self: MNullType): String */
val* model__MNullType__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "null";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#to_s for (self: Object): String */
val* VIRTUAL_model__MNullType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MNullType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: MNullType): MType */
val* model__MNullType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: Object): MType */
val* VIRTUAL_model__MNullType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullType__as_nullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: MNullType): Bool */
short int model__MNullType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MNullType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: MNullType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: MNullType, MType, nullable MClassType, MModule): Bool */
short int model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: MNullType, MModule): Set[MClassDef] */
val* model__MNullType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassDef);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClassDef]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MNullType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MNullType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: MNullType, MModule): Set[MClass] */
val* model__MNullType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClass]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MNullType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MNullType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: MNullType, MModule): Set[MClassType] */
val* model__MNullType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClassType]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MNullType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MNullType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters for (self: MSignature): Array[MParameter] */
val* model__MSignature__mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = self->attrs[COLOR_model__MSignature___64dmparameters].val; /* @mparameters on <self:MSignature> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mparameters");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1360);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters for (self: Object): Array[MParameter] */
val* VIRTUAL_model__MSignature__mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = model__MSignature__mparameters(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters= for (self: MSignature, Array[MParameter]) */
void model__MSignature__mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_model__MSignature___64dmparameters].val = p0; /* @mparameters on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#mparameters= for (self: Object, Array[MParameter]) */
void VIRTUAL_model__MSignature__mparameters_61d(val* self, val* p0) {
model__MSignature__mparameters_61d(self, p0);
RET_LABEL:;
}
/* method model#MSignature#return_mtype for (self: MSignature): nullable MType */
val* model__MSignature__return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MSignature___64dreturn_mtype].val; /* @return_mtype on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype for (self: Object): nullable MType */
val* VIRTUAL_model__MSignature__return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = model__MSignature__return_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype= for (self: MSignature, nullable MType) */
void model__MSignature__return_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MSignature___64dreturn_mtype].val = p0; /* @return_mtype on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#return_mtype= for (self: Object, nullable MType) */
void VIRTUAL_model__MSignature__return_mtype_61d(val* self, val* p0) {
model__MSignature__return_mtype_61d(self, p0);
RET_LABEL:;
}
/* method model#MSignature#depth for (self: MSignature): Int */
long model__MSignature__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_dmax /* var dmax: Int */;
val* var2 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
val* var6 /* : Array[MParameter] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var10 /* : MType */;
long var11 /* : Int */;
long var_d /* var d: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var1 = 0;
var_dmax = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__return_mtype]))(self) /* return_mtype on <self:MSignature>*/;
var_t = var2;
var3 = NULL;
if (var_t == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((long (*)(val*))(var_t->class->vft[COLOR_model__MType__depth]))(var_t) /* depth on <var_t:nullable MType(MType)>*/;
var_dmax = var5;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Array[MParameter]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_p = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var11 = ((long (*)(val*))(var10->class->vft[COLOR_model__MType__depth]))(var10) /* depth on <var10:MType>*/;
var_d = var11;
{ /* Inline kernel#Int#> (var_d,var_dmax) */
/* Covariant cast for argument 0 (i) <var_dmax:Int> isa OTHER */
/* <var_dmax:Int> isa OTHER */
var14 = 1; /* easy <var_dmax:Int> isa OTHER*/
if (!var14) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var15 = var_d > var_dmax;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var_dmax = var_d;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var16 = 1;
{ /* Inline kernel#Int#+ (var_dmax,var16) */
var19 = var_dmax + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#depth for (self: Object): Int */
long VIRTUAL_model__MSignature__depth(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__depth(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#length for (self: MSignature): Int */
long model__MSignature__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
val* var9 /* : Array[MParameter] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var13 /* : MType */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
var1 = 1;
var_res = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__return_mtype]))(self) /* return_mtype on <self:MSignature>*/;
var_t = var2;
var3 = NULL;
if (var_t == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((long (*)(val*))(var_t->class->vft[COLOR_model__MType__length]))(var_t) /* length on <var_t:nullable MType(MType)>*/;
{ /* Inline kernel#Int#+ (var_res,var5) */
var8 = var_res + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_res = var6;
} else {
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Array[MParameter]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_p = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var14 = ((long (*)(val*))(var13->class->vft[COLOR_model__MType__length]))(var13) /* length on <var13:MType>*/;
{ /* Inline kernel#Int#+ (var_res,var14) */
var17 = var_res + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_res = var15;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#length for (self: Object): Int */
long VIRTUAL_model__MSignature__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#init for (self: MSignature, Array[MParameter], nullable MType) */
void model__MSignature__init(val* self, val* p0, val* p1) {
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var_return_mtype /* var return_mtype: nullable MType */;
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var4 /* : Range[Int] */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Discrete */;
val* var8 /* : Discrete */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
long var_i /* var i: Int */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
val* var_parameter /* var parameter: MParameter */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
var_mparameters = p0;
var_return_mtype = p1;
((void (*)(val*))(self->class->vft[COLOR_model__MType__init]))(self) /* init on <self:MSignature>*/;
var = 1;
{ /* Inline kernel#Int#unary - (var) */
var3 = -var;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var_vararg_rank = var1;
var4 = NEW_range__Range(&type_range__Rangekernel__Int);
var5 = 0;
var6 = ((long (*)(val*))(var_mparameters->class->vft[COLOR_abstract_collection__Collection__length]))(var_mparameters) /* length on <var_mparameters:Array[MParameter]>*/;
var7 = BOX_kernel__Int(var5); /* autobox from Int to Discrete */
var8 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_range__Range__without_last]))(var4, var7, var8) /* without_last on <var4:Range[Int]>*/;
var9 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:Range[Int]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var12 = ((struct instance_kernel__Int*)var11)->value; /* autounbox from nullable Object to Int */;
var_i = var12;
var13 = ((val* (*)(val*, long))(var_mparameters->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_mparameters, var_i) /* [] on <var_mparameters:Array[MParameter]>*/;
var_parameter = var13;
var14 = ((short int (*)(val*))(var_parameter->class->vft[COLOR_model__MParameter__is_vararg]))(var_parameter) /* is_vararg on <var_parameter:MParameter>*/;
if (var14){
var15 = 1;
{ /* Inline kernel#Int#unary - (var15) */
var18 = -var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
{ /* Inline kernel#Int#== (var_vararg_rank,var16) */
var21 = var_vararg_rank == var16;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1396);
show_backtrace(1);
}
var_vararg_rank = var_i;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MSignature__mparameters_61d]))(self, var_mparameters) /* mparameters= on <self:MSignature>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MSignature__return_mtype_61d]))(self, var_return_mtype) /* return_mtype= on <self:MSignature>*/;
((void (*)(val*, long))(self->class->vft[COLOR_model__MSignature__vararg_rank_61d]))(self, var_vararg_rank) /* vararg_rank= on <self:MSignature>*/;
RET_LABEL:;
}
/* method model#MSignature#init for (self: Object, Array[MParameter], nullable MType) */
void VIRTUAL_model__MSignature__init(val* self, val* p0, val* p1) {
model__MSignature__init(self, p0, p1);
RET_LABEL:;
}
/* method model#MSignature#vararg_rank for (self: MSignature): Int */
long model__MSignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model__MSignature___64dvararg_rank].l; /* @vararg_rank on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank for (self: Object): Int */
long VIRTUAL_model__MSignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__vararg_rank(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank= for (self: MSignature, Int) */
void model__MSignature__vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_model__MSignature___64dvararg_rank].l = p0; /* @vararg_rank on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#vararg_rank= for (self: Object, Int) */
void VIRTUAL_model__MSignature__vararg_rank_61d(val* self, long p0) {
model__MSignature__vararg_rank_61d(self, p0);
RET_LABEL:;
}
/* method model#MSignature#arity for (self: MSignature): Int */
long model__MSignature__arity(val* self) {
long var /* : Int */;
val* var1 /* : Array[MParameter] */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[MParameter]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#arity for (self: Object): Int */
long VIRTUAL_model__MSignature__arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__arity(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: MSignature): String */
val* model__MSignature__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var2 /* : Array[MParameter] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : Range[Int] */;
long var10 /* : Int */;
val* var11 /* : Array[MParameter] */;
long var12 /* : Int */;
val* var13 /* : Discrete */;
val* var14 /* : Discrete */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
long var_i /* var i: Int */;
long var18 /* : Int */;
val* var19 /* : Array[MParameter] */;
val* var20 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : MType */;
val* var38 /* : String */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var51 /* : null */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
var_b = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var2) /* is_empty on <var2:Array[MParameter]>*/;
var4 = !var3;
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "(";
var7 = 1;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var5) /* append on <var_b:Buffer>*/;
var9 = NEW_range__Range(&type_range__Rangekernel__Int);
var10 = 0;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var12 = ((long (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__length]))(var11) /* length on <var11:Array[MParameter]>*/;
var13 = BOX_kernel__Int(var10); /* autobox from Int to Discrete */
var14 = BOX_kernel__Int(var12); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_range__Range__without_last]))(var9, var13, var14) /* without_last on <var9:Range[Int]>*/;
var15 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Range[Int]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var18 = ((struct instance_kernel__Int*)var17)->value; /* autounbox from nullable Object to Int */;
var_i = var18;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var20 = ((val* (*)(val*, long))(var19->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var19, var_i) /* [] on <var19:Array[MParameter]>*/;
var_mparameter = var20;
var21 = 0;
{ /* Inline kernel#Int#> (var_i,var21) */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (!var24) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var25 = var_i > var21;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (var22){
if (varonce26) {
var27 = varonce26;
} else {
var28 = ", ";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var27) /* append on <var_b:Buffer>*/;
} else {
}
var31 = ((val* (*)(val*))(var_mparameter->class->vft[COLOR_model__MParameter__name]))(var_mparameter) /* name on <var_mparameter:MParameter>*/;
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var31) /* append on <var_b:Buffer>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = ": ";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var33) /* append on <var_b:Buffer>*/;
var37 = ((val* (*)(val*))(var_mparameter->class->vft[COLOR_model__MParameter__mtype]))(var_mparameter) /* mtype on <var_mparameter:MParameter>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:MType>*/;
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var38) /* append on <var_b:Buffer>*/;
var39 = ((short int (*)(val*))(var_mparameter->class->vft[COLOR_model__MParameter__is_vararg]))(var_mparameter) /* is_vararg on <var_mparameter:MParameter>*/;
if (var39){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "...";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var41) /* append on <var_b:Buffer>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce45) {
var46 = varonce45;
} else {
var47 = ")";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var46) /* append on <var_b:Buffer>*/;
} else {
}
var50 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__return_mtype]))(self) /* return_mtype on <self:MSignature>*/;
var_ret = var50;
var51 = NULL;
if (var_ret == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (var52){
if (varonce53) {
var54 = varonce53;
} else {
var55 = ": ";
var56 = 2;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var54) /* append on <var_b:Buffer>*/;
var58 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var58) /* append on <var_b:Buffer>*/;
} else {
}
var59 = ((val* (*)(val*))(var_b->class->vft[COLOR_string__Object__to_s]))(var_b) /* to_s on <var_b:Buffer>*/;
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: Object): String */
val* VIRTUAL_model__MSignature__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MSignature__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: MSignature, MType, nullable MClassType, MModule, Bool): MSignature */
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MSignature */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : Array[MParameter] */;
val* var_params /* var params: Array[MParameter] */;
val* var2 /* : Array[MParameter] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var6 /* : MParameter */;
val* var7 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var11 /* : MSignature */;
val* var_res /* var res: MSignature */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = NEW_array__Array(&type_array__Arraymodel__MParameter);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[MParameter]>*/;
var_params = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__mparameters]))(self) /* mparameters on <self:MSignature>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[MParameter]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_p = var5;
var6 = ((val* (*)(val*, val*, val*, val*, short int))(var_p->class->vft[COLOR_model__MParameter__resolve_for]))(var_p, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_p:MParameter>*/;
((void (*)(val*, val*))(var_params->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_params, var6) /* add on <var_params:Array[MParameter]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MSignature__return_mtype]))(self) /* return_mtype on <self:MSignature>*/;
var_ret = var7;
var8 = NULL;
if (var_ret == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
var10 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_ret:nullable MType(MType)>*/;
var_ret = var10;
} else {
}
var11 = NEW_model__MSignature(&type_model__MSignature);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_model__MSignature__init]))(var11, var_params, var_ret) /* init on <var11:MSignature>*/;
var_res = var11;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MSignature */;
var1 = model__MSignature__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: MParameter): String */
val* model__MParameter__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MParameter___64dname].val; /* @name on <self:MParameter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: Object): String */
val* VIRTUAL_model__MParameter__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MParameter__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name= for (self: MParameter, String) */
void model__MParameter__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameter___64dname].val = p0; /* @name on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#name= for (self: Object, String) */
void VIRTUAL_model__MParameter__name_61d(val* self, val* p0) {
model__MParameter__name_61d(self, p0);
RET_LABEL:;
}
/* method model#MParameter#mtype for (self: MParameter): MType */
val* model__MParameter__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_model__MParameter___64dmtype].val; /* @mtype on <self:MParameter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1458);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype for (self: Object): MType */
val* VIRTUAL_model__MParameter__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MParameter__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype= for (self: MParameter, MType) */
void model__MParameter__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameter___64dmtype].val = p0; /* @mtype on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#mtype= for (self: Object, MType) */
void VIRTUAL_model__MParameter__mtype_61d(val* self, val* p0) {
model__MParameter__mtype_61d(self, p0);
RET_LABEL:;
}
/* method model#MParameter#is_vararg for (self: MParameter): Bool */
short int model__MParameter__is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MParameter___64dis_vararg].s; /* @is_vararg on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg for (self: Object): Bool */
short int VIRTUAL_model__MParameter__is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MParameter__is_vararg(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg= for (self: MParameter, Bool) */
void model__MParameter__is_vararg_61d(val* self, short int p0) {
self->attrs[COLOR_model__MParameter___64dis_vararg].s = p0; /* @is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#is_vararg= for (self: Object, Bool) */
void VIRTUAL_model__MParameter__is_vararg_61d(val* self, short int p0) {
model__MParameter__is_vararg_61d(self, p0);
RET_LABEL:;
}
/* method model#MParameter#resolve_for for (self: MParameter, MType, nullable MClassType, MModule, Bool): MParameter */
val* model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : MType */;
val* var_newtype /* var newtype: MType */;
val* var6 /* : MParameter */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var_res /* var res: MParameter */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameter__mtype]))(self) /* mtype on <self:MParameter>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
var3 = !var2;
if (var3){
var = self;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameter__mtype]))(self) /* mtype on <self:MParameter>*/;
var5 = ((val* (*)(val*, val*, val*, val*, short int))(var4->class->vft[COLOR_model__MType__resolve_for]))(var4, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var4:MType>*/;
var_newtype = var5;
var6 = NEW_model__MParameter(&type_model__MParameter);
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameter__name]))(self) /* name on <self:MParameter>*/;
var8 = ((short int (*)(val*))(self->class->vft[COLOR_model__MParameter__is_vararg]))(self) /* is_vararg on <self:MParameter>*/;
((void (*)(val*, val*, val*, short int))(var6->class->vft[COLOR_model__MParameter__init]))(var6, var7, var_newtype, var8) /* init on <var6:MParameter>*/;
var_res = var6;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MParameter */
val* VIRTUAL_model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var1 /* : MParameter */;
var1 = model__MParameter__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#init for (self: MParameter, String, MType, Bool) */
void model__MParameter__init(val* self, val* p0, val* p1, short int p2) {
self->attrs[COLOR_model__MParameter___64dname].val = p0; /* @name on <self:MParameter> */
self->attrs[COLOR_model__MParameter___64dmtype].val = p1; /* @mtype on <self:MParameter> */
self->attrs[COLOR_model__MParameter___64dis_vararg].s = p2; /* @is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#init for (self: Object, String, MType, Bool) */
void VIRTUAL_model__MParameter__init(val* self, val* p0, val* p1, short int p2) {
model__MParameter__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MProperty#intro_mclassdef for (self: MProperty): MClassDef */
val* model__MProperty__intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MProperty___64dintro_mclassdef].val; /* @intro_mclassdef on <self:MProperty> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @intro_mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1489);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef for (self: Object): MClassDef */
val* VIRTUAL_model__MProperty__intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = model__MProperty__intro_mclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef= for (self: MProperty, MClassDef) */
void model__MProperty__intro_mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___64dintro_mclassdef].val = p0; /* @intro_mclassdef on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#intro_mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_model__MProperty__intro_mclassdef_61d(val* self, val* p0) {
model__MProperty__intro_mclassdef_61d(self, p0);
RET_LABEL:;
}
/* method model#MProperty#name for (self: MProperty): String */
val* model__MProperty__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MProperty___64dname].val; /* @name on <self:MProperty> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1494);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name for (self: Object): String */
val* VIRTUAL_model__MProperty__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name= for (self: MProperty, String) */
void model__MProperty__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___64dname].val = p0; /* @name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#name= for (self: Object, String) */
void VIRTUAL_model__MProperty__name_61d(val* self, val* p0) {
model__MProperty__name_61d(self, p0);
RET_LABEL:;
}
/* method model#MProperty#full_name for (self: MProperty): String */
val* model__MProperty__full_name(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MClassDef */;
val* var8 /* : MModule */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : MClassDef */;
val* var16 /* : MClass */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 7;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__intro_mclassdef]))(self) /* intro_mclassdef on <self:MProperty>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClassDef__mmodule]))(var7) /* mmodule on <var7:MClassDef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_mmodule__MModule__full_name]))(var8) /* full_name on <var8:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "::";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__intro_mclassdef]))(self) /* intro_mclassdef on <self:MProperty>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__mclass]))(var15) /* mclass on <var15:MClassDef>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MClass__name]))(var16) /* name on <var16:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "::";
var21 = 2;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__name]))(self) /* name on <self:MProperty>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "";
var27 = 0;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var25) /* add on <var_:Array[Object]>*/;
var29 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#full_name for (self: Object): String */
val* VIRTUAL_model__MProperty__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: MProperty): MVisibility */
val* model__MProperty__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_model__MProperty___64dvisibility].val; /* @visibility on <self:MProperty> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visibility");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1504);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: Object): MVisibility */
val* VIRTUAL_model__MProperty__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model__MProperty__visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility= for (self: MProperty, MVisibility) */
void model__MProperty__visibility_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___64dvisibility].val = p0; /* @visibility on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#visibility= for (self: Object, MVisibility) */
void VIRTUAL_model__MProperty__visibility_61d(val* self, val* p0) {
model__MProperty__visibility_61d(self, p0);
RET_LABEL:;
}
/* method model#MProperty#init for (self: MProperty, MClassDef, String, MVisibility) */
void model__MProperty__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
val* var /* : Array[MProperty] */;
val* var1 /* : MModule */;
val* var2 /* : Model */;
val* var_model /* var model: Model */;
val* var3 /* : MultiHashMap[String, MProperty] */;
val* var4 /* : Array[MProperty] */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MProperty__intro_mclassdef_61d]))(self, var_intro_mclassdef) /* intro_mclassdef= on <self:MProperty>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MProperty__name_61d]))(self, var_name) /* name= on <self:MProperty>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MProperty__visibility_61d]))(self, var_visibility) /* visibility= on <self:MProperty>*/;
var = ((val* (*)(val*))(var_intro_mclassdef->class->vft[COLOR_model__MClassDef__intro_mproperties]))(var_intro_mclassdef) /* intro_mproperties on <var_intro_mclassdef:MClassDef>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, self) /* add on <var:Array[MProperty]>*/;
var1 = ((val* (*)(val*))(var_intro_mclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_intro_mclassdef) /* mmodule on <var_intro_mclassdef:MClassDef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_mmodule__MModule__model]))(var1) /* model on <var1:MModule>*/;
var_model = var2;
var3 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__mproperties_by_name]))(var_model) /* mproperties_by_name on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var3, var_name, self) /* add_one on <var3:MultiHashMap[String, MProperty]>*/;
var4 = ((val* (*)(val*))(var_model->class->vft[COLOR_model__Model__mproperties]))(var_model) /* mproperties on <var_model:Model>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, self) /* add on <var4:Array[MProperty]>*/;
RET_LABEL:;
}
/* method model#MProperty#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MProperty__init(val* self, val* p0, val* p1, val* p2) {
model__MProperty__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MProperty#mpropdefs for (self: MProperty): Array[MPropDef] */
val* model__MProperty__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_model__MProperty___64dmpropdefs].val; /* @mpropdefs on <self:MProperty> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdefs");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1518);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#mpropdefs for (self: Object): Array[MPropDef] */
val* VIRTUAL_model__MProperty__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__mpropdefs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#mpropdefs= for (self: MProperty, Array[MPropDef]) */
void model__MProperty__mpropdefs_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdefs) <p0:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p0:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[MPROPDEF]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1518);
show_backtrace(1);
}
self->attrs[COLOR_model__MProperty___64dmpropdefs].val = p0; /* @mpropdefs on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#mpropdefs= for (self: Object, Array[MPropDef]) */
void VIRTUAL_model__MProperty__mpropdefs_61d(val* self, val* p0) {
model__MProperty__mpropdefs_61d(self, p0);
RET_LABEL:;
}
/* method model#MProperty#intro for (self: MProperty): MPropDef */
val* model__MProperty__intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : Array[MPropDef] */;
val* var2 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__mpropdefs]))(self) /* mpropdefs on <self:MProperty>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__first]))(var1) /* first on <var1:Array[MPropDef]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro for (self: Object): MPropDef */
val* VIRTUAL_model__MProperty__intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MProperty__intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#to_s for (self: MProperty): String */
val* model__MProperty__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__name]))(self) /* name on <self:MProperty>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#to_s for (self: Object): String */
val* VIRTUAL_model__MProperty__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MType */;
val* var5 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var6 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var10 /* : Array[MPropDef] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
val* var20 /* : MClassDef */;
val* var21 /* : MClassType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name;
short int var31 /* : Bool */;
val* var32 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var33 /* : Array[MPropDef] */;
val* var_res /* var res: Array[MPropDef] */;
val* var34 /* : Iterator[nullable Object] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_pd1 /* var pd1: MPropDef */;
val* var37 /* : MClassDef */;
val* var_cd1 /* var cd1: MClassDef */;
val* var38 /* : MClass */;
val* var_c1 /* var c1: MClass */;
short int var39 /* : Bool */;
short int var_keep /* var keep: Bool */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_pd2 /* var pd2: MPropDef */;
short int var43 /* : Bool */;
val* var45 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var46 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var47 /* : MClassType */;
val* var48 /* : MClassType */;
short int var49 /* : Bool */;
val* var50 /* : MModule */;
val* var51 /* : POSetElement[MModule] */;
val* var52 /* : MModule */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : MClassType */;
val* var56 /* : null */;
val* var57 /* : MClassType */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
val* var76 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var_mmodule = p0;
var_mtype = p1;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1540);
show_backtrace(1);
}
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
if (var3){
var4 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var4;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__lookup_definitions_cache]))(self) /* lookup_definitions_cache on <self:MProperty>*/;
var6 = ((val* (*)(val*, val*, val*))(var5->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var5, var_mmodule, var_mtype) /* [] on <var5:HashMap2[MModule, MType, Array[MPropDef]]>*/;
var_cache = var6;
var7 = NULL;
if (var_cache == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var = var_cache;
goto RET_LABEL;
} else {
}
var9 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[MPropDef]>*/;
var_candidates = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__mpropdefs]))(self) /* mpropdefs on <self:MProperty>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Array[MPropDef]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_mpropdef = var13;
var14 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var15 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__mmodule]))(var15) /* mmodule on <var15:MClassDef>*/;
var17 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_poset__POSetElement___60d_61d]))(var14, var16) /* <= on <var14:POSetElement[MModule]>*/;
var18 = !var17;
if (var18){
goto CONTINUE_label;
} else {
}
var19 = NULL;
var20 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MClassDef__bound_mtype]))(var20) /* bound_mtype on <var20:MClassDef>*/;
var22 = ((short int (*)(val*, val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__is_subtype]))(var_mtype, var_mmodule, var19, var21) /* is_subtype on <var_mtype:MType>*/;
var23 = !var22;
if (var23){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_candidates->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_candidates, var_mpropdef) /* add on <var_candidates:Array[MPropDef]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var24 = ((long (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__length]))(var_candidates) /* length on <var_candidates:Array[MPropDef]>*/;
var25 = 1;
{ /* Inline kernel#Int#<= (var24,var25) */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (!var28) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var31 = var24 <= var25;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
if (var26){
var32 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__lookup_definitions_cache]))(self) /* lookup_definitions_cache on <self:MProperty>*/;
((void (*)(val*, val*, val*, val*))(var32->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var32, var_mmodule, var_mtype, var_candidates) /* []= on <var32:HashMap2[MModule, MType, Array[MPropDef]]>*/;
var = var_candidates;
goto RET_LABEL;
} else {
}
var33 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var33->class->vft[COLOR_array__Array__init]))(var33) /* init on <var33:Array[MPropDef]>*/;
var_res = var33;
var34 = ((val* (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_candidates) /* iterator on <var_candidates:Array[MPropDef]>*/;
for(;;) {
var35 = ((short int (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var34) /* is_ok on <var34:Iterator[nullable Object]>*/;
if(!var35) break;
var36 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__item]))(var34) /* item on <var34:Iterator[nullable Object]>*/;
var_pd1 = var36;
var37 = ((val* (*)(val*))(var_pd1->class->vft[COLOR_model__MPropDef__mclassdef]))(var_pd1) /* mclassdef on <var_pd1:MPropDef>*/;
var_cd1 = var37;
var38 = ((val* (*)(val*))(var_cd1->class->vft[COLOR_model__MClassDef__mclass]))(var_cd1) /* mclass on <var_cd1:MClassDef>*/;
var_c1 = var38;
var39 = 1;
var_keep = var39;
var40 = ((val* (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_candidates) /* iterator on <var_candidates:Array[MPropDef]>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var_pd2 = var42;
var43 = ((short int (*)(val*, val*))(var_pd2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pd2, var_pd1) /* == on <var_pd2:MPropDef>*/;
if (var43){
goto CONTINUE_label44;
} else {
}
var45 = ((val* (*)(val*))(var_pd2->class->vft[COLOR_model__MPropDef__mclassdef]))(var_pd2) /* mclassdef on <var_pd2:MPropDef>*/;
var_cd2 = var45;
var46 = ((val* (*)(val*))(var_cd2->class->vft[COLOR_model__MClassDef__mclass]))(var_cd2) /* mclass on <var_cd2:MClassDef>*/;
var_c2 = var46;
var47 = ((val* (*)(val*))(var_c2->class->vft[COLOR_model__MClass__mclass_type]))(var_c2) /* mclass_type on <var_c2:MClass>*/;
var48 = ((val* (*)(val*))(var_c1->class->vft[COLOR_model__MClass__mclass_type]))(var_c1) /* mclass_type on <var_c1:MClass>*/;
var49 = ((short int (*)(val*, val*))(var47->class->vft[COLOR_kernel__Object___61d_61d]))(var47, var48) /* == on <var47:MClassType>*/;
if (var49){
var50 = ((val* (*)(val*))(var_cd2->class->vft[COLOR_model__MClassDef__mmodule]))(var_cd2) /* mmodule on <var_cd2:MClassDef>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_mmodule__MModule__in_importation]))(var50) /* in_importation on <var50:MModule>*/;
var52 = ((val* (*)(val*))(var_cd1->class->vft[COLOR_model__MClassDef__mmodule]))(var_cd1) /* mmodule on <var_cd1:MClassDef>*/;
var53 = ((short int (*)(val*, val*))(var51->class->vft[COLOR_poset__POSetElement___60d_61d]))(var51, var52) /* <= on <var51:POSetElement[MModule]>*/;
if (var53){
var54 = 0;
var_keep = var54;
goto BREAK_label44;
} else {
}
} else {
var55 = ((val* (*)(val*))(var_cd2->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_cd2) /* bound_mtype on <var_cd2:MClassDef>*/;
var56 = NULL;
var57 = ((val* (*)(val*))(var_cd1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_cd1) /* bound_mtype on <var_cd1:MClassDef>*/;
var58 = ((short int (*)(val*, val*, val*, val*))(var55->class->vft[COLOR_model__MType__is_subtype]))(var55, var_mmodule, var56, var57) /* is_subtype on <var55:MClassType>*/;
if (var58){
var59 = 0;
var_keep = var59;
goto BREAK_label44;
} else {
}
}
CONTINUE_label44: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label44: (void)0;
if (var_keep){
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var_pd1) /* add on <var_res:Array[MPropDef]>*/;
} else {
}
CONTINUE_label60: (void)0;
((void (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__next]))(var34) /* next on <var34:Iterator[nullable Object]>*/;
}
BREAK_label60: (void)0;
var61 = ((short int (*)(val*))(var_res->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_res) /* is_empty on <var_res:Array[MPropDef]>*/;
if (var61){
if (varonce) {
var62 = varonce;
} else {
var63 = "All lost! ";
var64 = 10;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = ", ";
var69 = 2;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = ((val* (*)(val*, val*))(var_candidates->class->vft[COLOR_string__Collection__join]))(var_candidates, var67) /* join on <var_candidates:Array[MPropDef]>*/;
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 2;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var62;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var71;
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var75) /* print on <self:MProperty>*/;
} else {
}
var76 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__lookup_definitions_cache]))(self) /* lookup_definitions_cache on <self:MProperty>*/;
((void (*)(val*, val*, val*, val*))(var76->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var76, var_mmodule, var_mtype, var_res) /* []= on <var76:HashMap2[MModule, MType, Array[MPropDef]]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* model__MProperty__lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_model__MProperty___64dlookup_definitions_cache].val; /* @lookup_definitions_cache on <self:MProperty> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @lookup_definitions_cache");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1597);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: Object): HashMap2[MModule, MType, Array[MPropDef]] */
val* VIRTUAL_model__MProperty__lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = model__MProperty__lookup_definitions_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache= for (self: MProperty, HashMap2[MModule, MType, Array[MPropDef]]) */
void model__MProperty__lookup_definitions_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (lookup_definitions_cache) <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
/* <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2[MModule, MType, Array[MPROPDEF]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1597);
show_backtrace(1);
}
self->attrs[COLOR_model__MProperty___64dlookup_definitions_cache].val = p0; /* @lookup_definitions_cache on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#lookup_definitions_cache= for (self: Object, HashMap2[MModule, MType, Array[MPropDef]]) */
void VIRTUAL_model__MProperty__lookup_definitions_cache_61d(val* self, val* p0) {
model__MProperty__lookup_definitions_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MProperty#lookup_super_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MType */;
val* var5 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var6 /* : Array[MPropDef] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var10 /* : POSetElement[MModule] */;
val* var11 /* : MClassDef */;
val* var12 /* : MModule */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : null */;
val* var16 /* : MClassDef */;
val* var17 /* : MClassType */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MClassDef */;
val* var22 /* : MClassType */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
val* var24 /* : MClassDef */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name;
short int var34 /* : Bool */;
val* var35 /* : Array[MPropDef] */;
val* var_res /* var res: Array[MPropDef] */;
val* var36 /* : Iterator[nullable Object] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_pd1 /* var pd1: MPropDef */;
val* var39 /* : MClassDef */;
val* var_cd1 /* var cd1: MClassDef */;
val* var40 /* : MClass */;
val* var_c1 /* var c1: MClass */;
short int var41 /* : Bool */;
short int var_keep /* var keep: Bool */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_pd2 /* var pd2: MPropDef */;
short int var45 /* : Bool */;
val* var47 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var48 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var49 /* : MClassType */;
val* var50 /* : MClassType */;
short int var51 /* : Bool */;
val* var52 /* : MModule */;
val* var53 /* : POSetElement[MModule] */;
val* var54 /* : MModule */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MClassType */;
val* var58 /* : null */;
val* var59 /* : MClassType */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
var_mmodule = p0;
var_mtype = p1;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1609);
show_backtrace(1);
}
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
if (var3){
var4 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var4;
} else {
}
var5 = NEW_array__Array(&type_array__Arraymodel__MPropDef);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[MPropDef]>*/;
var_candidates = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__mpropdefs]))(self) /* mpropdefs on <self:MProperty>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Array[MPropDef]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_mpropdef = var9;
var10 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var11 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MClassDef__mmodule]))(var11) /* mmodule on <var11:MClassDef>*/;
var13 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_poset__POSetElement___60d_61d]))(var10, var12) /* <= on <var10:POSetElement[MModule]>*/;
var14 = !var13;
if (var14){
goto CONTINUE_label;
} else {
}
var15 = NULL;
var16 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MClassDef__bound_mtype]))(var16) /* bound_mtype on <var16:MClassDef>*/;
var18 = ((short int (*)(val*, val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__is_subtype]))(var_mtype, var_mmodule, var15, var17) /* is_subtype on <var_mtype:MType>*/;
var19 = !var18;
if (var19){
goto CONTINUE_label;
} else {
}
var21 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MClassDef__bound_mtype]))(var21) /* bound_mtype on <var21:MClassDef>*/;
var23 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var22) /* == on <var_mtype:MType>*/;
var_ = var23;
if (var23){
var24 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MClassDef__mmodule]))(var24) /* mmodule on <var24:MClassDef>*/;
var26 = ((short int (*)(val*, val*))(var_mmodule->class->vft[COLOR_kernel__Object___61d_61d]))(var_mmodule, var25) /* == on <var_mmodule:MModule>*/;
var20 = var26;
} else {
var20 = var_;
}
if (var20){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_candidates->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_candidates, var_mpropdef) /* add on <var_candidates:Array[MPropDef]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var27 = ((long (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__length]))(var_candidates) /* length on <var_candidates:Array[MPropDef]>*/;
var28 = 1;
{ /* Inline kernel#Int#<= (var27,var28) */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (!var31) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var34 = var27 <= var28;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
var = var_candidates;
goto RET_LABEL;
} else {
}
var35 = NEW_array__Array(&type_array__Arraymodel__MPropDef);
((void (*)(val*))(var35->class->vft[COLOR_array__Array__init]))(var35) /* init on <var35:Array[MPropDef]>*/;
var_res = var35;
var36 = ((val* (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_candidates) /* iterator on <var_candidates:Array[MPropDef]>*/;
for(;;) {
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var36) /* is_ok on <var36:Iterator[nullable Object]>*/;
if(!var37) break;
var38 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__item]))(var36) /* item on <var36:Iterator[nullable Object]>*/;
var_pd1 = var38;
var39 = ((val* (*)(val*))(var_pd1->class->vft[COLOR_model__MPropDef__mclassdef]))(var_pd1) /* mclassdef on <var_pd1:MPropDef>*/;
var_cd1 = var39;
var40 = ((val* (*)(val*))(var_cd1->class->vft[COLOR_model__MClassDef__mclass]))(var_cd1) /* mclass on <var_cd1:MClassDef>*/;
var_c1 = var40;
var41 = 1;
var_keep = var41;
var42 = ((val* (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_candidates) /* iterator on <var_candidates:Array[MPropDef]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var_pd2 = var44;
var45 = ((short int (*)(val*, val*))(var_pd2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pd2, var_pd1) /* == on <var_pd2:MPropDef>*/;
if (var45){
goto CONTINUE_label46;
} else {
}
var47 = ((val* (*)(val*))(var_pd2->class->vft[COLOR_model__MPropDef__mclassdef]))(var_pd2) /* mclassdef on <var_pd2:MPropDef>*/;
var_cd2 = var47;
var48 = ((val* (*)(val*))(var_cd2->class->vft[COLOR_model__MClassDef__mclass]))(var_cd2) /* mclass on <var_cd2:MClassDef>*/;
var_c2 = var48;
var49 = ((val* (*)(val*))(var_c2->class->vft[COLOR_model__MClass__mclass_type]))(var_c2) /* mclass_type on <var_c2:MClass>*/;
var50 = ((val* (*)(val*))(var_c1->class->vft[COLOR_model__MClass__mclass_type]))(var_c1) /* mclass_type on <var_c1:MClass>*/;
var51 = ((short int (*)(val*, val*))(var49->class->vft[COLOR_kernel__Object___61d_61d]))(var49, var50) /* == on <var49:MClassType>*/;
if (var51){
var52 = ((val* (*)(val*))(var_cd2->class->vft[COLOR_model__MClassDef__mmodule]))(var_cd2) /* mmodule on <var_cd2:MClassDef>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_mmodule__MModule__in_importation]))(var52) /* in_importation on <var52:MModule>*/;
var54 = ((val* (*)(val*))(var_cd1->class->vft[COLOR_model__MClassDef__mmodule]))(var_cd1) /* mmodule on <var_cd1:MClassDef>*/;
var55 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_poset__POSetElement___60d_61d]))(var53, var54) /* <= on <var53:POSetElement[MModule]>*/;
if (var55){
var56 = 0;
var_keep = var56;
goto BREAK_label46;
} else {
}
} else {
var57 = ((val* (*)(val*))(var_cd2->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_cd2) /* bound_mtype on <var_cd2:MClassDef>*/;
var58 = NULL;
var59 = ((val* (*)(val*))(var_cd1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_cd1) /* bound_mtype on <var_cd1:MClassDef>*/;
var60 = ((short int (*)(val*, val*, val*, val*))(var57->class->vft[COLOR_model__MType__is_subtype]))(var57, var_mmodule, var58, var59) /* is_subtype on <var57:MClassType>*/;
if (var60){
var61 = 0;
var_keep = var61;
goto BREAK_label46;
} else {
}
}
CONTINUE_label46: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label46: (void)0;
if (var_keep){
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var_pd1) /* add on <var_res:Array[MPropDef]>*/;
} else {
}
CONTINUE_label62: (void)0;
((void (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__next]))(var36) /* next on <var36:Iterator[nullable Object]>*/;
}
BREAK_label62: (void)0;
var63 = ((short int (*)(val*))(var_res->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_res) /* is_empty on <var_res:Array[MPropDef]>*/;
if (var63){
if (varonce) {
var64 = varonce;
} else {
var65 = "All lost! ";
var66 = 10;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = ", ";
var71 = 2;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = ((val* (*)(val*, val*))(var_candidates->class->vft[COLOR_string__Collection__join]))(var_candidates, var69) /* join on <var_candidates:Array[MPropDef]>*/;
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 2;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var73;
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var77) /* print on <self:MProperty>*/;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_super_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_super_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: MProperty, MModule, MType): MPropDef */
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
val* var2 /* : Array[MPropDef] */;
val* var3 /* : nullable Object */;
var_mmodule = p0;
var_mtype = p1;
var1 = ((short int (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__has_mproperty]))(var_mtype, var_mmodule, self) /* has_mproperty on <var_mtype:MType>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1671);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MProperty__lookup_all_definitions]))(self, var_mmodule, var_mtype) /* lookup_all_definitions on <self:MProperty>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:Array[MPropDef]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: Object, MModule, MType): MPropDef */
val* VIRTUAL_model__MProperty__lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MProperty__lookup_first_definition(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MType */;
val* var5 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var6 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var10 /* : Array[MPropDef] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
val* var20 /* : MClassDef */;
val* var21 /* : MClassType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name;
short int var31 /* : Bool */;
val* var32 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var33 /* : Array[nullable Object] */;
val* var34 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var_mmodule = p0;
var_mtype = p1;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1679);
show_backtrace(1);
}
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
if (var3){
var4 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var4;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__lookup_all_definitions_cache]))(self) /* lookup_all_definitions_cache on <self:MProperty>*/;
var6 = ((val* (*)(val*, val*, val*))(var5->class->vft[COLOR_more_collections__HashMap2___91d_93d]))(var5, var_mmodule, var_mtype) /* [] on <var5:HashMap2[MModule, MType, Array[MPropDef]]>*/;
var_cache = var6;
var7 = NULL;
if (var_cache == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var = var_cache;
goto RET_LABEL;
} else {
}
var9 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[MPropDef]>*/;
var_candidates = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__mpropdefs]))(self) /* mpropdefs on <self:MProperty>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Array[MPropDef]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_mpropdef = var13;
var14 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var15 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model__MClassDef__mmodule]))(var15) /* mmodule on <var15:MClassDef>*/;
var17 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_poset__POSetElement___60d_61d]))(var14, var16) /* <= on <var14:POSetElement[MModule]>*/;
var18 = !var17;
if (var18){
goto CONTINUE_label;
} else {
}
var19 = NULL;
var20 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MClassDef__bound_mtype]))(var20) /* bound_mtype on <var20:MClassDef>*/;
var22 = ((short int (*)(val*, val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__is_subtype]))(var_mtype, var_mmodule, var19, var21) /* is_subtype on <var_mtype:MType>*/;
var23 = !var22;
if (var23){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_candidates->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_candidates, var_mpropdef) /* add on <var_candidates:Array[MPropDef]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var24 = ((long (*)(val*))(var_candidates->class->vft[COLOR_abstract_collection__Collection__length]))(var_candidates) /* length on <var_candidates:Array[MPropDef]>*/;
var25 = 1;
{ /* Inline kernel#Int#<= (var24,var25) */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (!var28) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var31 = var24 <= var25;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
if (var26){
var32 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__lookup_all_definitions_cache]))(self) /* lookup_all_definitions_cache on <self:MProperty>*/;
((void (*)(val*, val*, val*, val*))(var32->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var32, var_mmodule, var_mtype, var_candidates) /* []= on <var32:HashMap2[MModule, MType, Array[MPropDef]]>*/;
var = var_candidates;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_mmodule->class->vft[COLOR_model__MModule__linearize_mpropdefs]))(var_mmodule, var_candidates) /* linearize_mpropdefs on <var_mmodule:MModule>*/;
var33 = ((val* (*)(val*))(var_candidates->class->vft[COLOR_array__AbstractArrayRead__reversed]))(var_candidates) /* reversed on <var_candidates:Array[MPropDef]>*/;
var_candidates = var33;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__lookup_all_definitions_cache]))(self) /* lookup_all_definitions_cache on <self:MProperty>*/;
((void (*)(val*, val*, val*, val*))(var34->class->vft[COLOR_more_collections__HashMap2___91d_93d_61d]))(var34, var_mmodule, var_mtype, var_candidates) /* []= on <var34:HashMap2[MModule, MType, Array[MPropDef]]>*/;
var = var_candidates;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_all_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* model__MProperty__lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_model__MProperty___64dlookup_all_definitions_cache].val; /* @lookup_all_definitions_cache on <self:MProperty> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @lookup_all_definitions_cache");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1708);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: Object): HashMap2[MModule, MType, Array[MPropDef]] */
val* VIRTUAL_model__MProperty__lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = model__MProperty__lookup_all_definitions_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache= for (self: MProperty, HashMap2[MModule, MType, Array[MPropDef]]) */
void model__MProperty__lookup_all_definitions_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (lookup_all_definitions_cache) <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
/* <p0:HashMap2[MModule, MType, Array[MPropDef]]> isa HashMap2[MModule, MType, Array[MPROPDEF]] */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MProperty_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2[MModule, MType, Array[MPROPDEF]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1708);
show_backtrace(1);
}
self->attrs[COLOR_model__MProperty___64dlookup_all_definitions_cache].val = p0; /* @lookup_all_definitions_cache on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#lookup_all_definitions_cache= for (self: Object, HashMap2[MModule, MType, Array[MPropDef]]) */
void VIRTUAL_model__MProperty__lookup_all_definitions_cache_61d(val* self, val* p0) {
model__MProperty__lookup_all_definitions_cache_61d(self, p0);
RET_LABEL:;
}
/* method model#MMethod#init for (self: MMethod, MClassDef, String, MVisibility) */
void model__MMethod__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MProperty__init]))(self, p0, p1, p2) /* init on <self:MMethod>*/;
RET_LABEL:;
}
/* method model#MMethod#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MMethod__init(val* self, val* p0, val* p1, val* p2) {
model__MMethod__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MMethod#is_init for (self: MMethod): Bool */
short int model__MMethod__is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___64dis_init].s; /* @is_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MMethod__is_init(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init= for (self: MMethod, Bool) */
void model__MMethod__is_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___64dis_init].s = p0; /* @is_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_init_61d(val* self, short int p0) {
model__MMethod__is_init_61d(self, p0);
RET_LABEL:;
}
/* method model#MMethod#is_new for (self: MMethod): Bool */
short int model__MMethod__is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___64dis_new].s; /* @is_new on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MMethod__is_new(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new= for (self: MMethod, Bool) */
void model__MMethod__is_new_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___64dis_new].s = p0; /* @is_new on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_new= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_new_61d(val* self, short int p0) {
model__MMethod__is_new_61d(self, p0);
RET_LABEL:;
}
/* method model#MMethod#is_init_for for (self: MMethod, MClass): Bool */
short int model__MMethod__is_init_for(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
short int var1 /* : Bool */;
var_mclass = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init_for for (self: Object, MClass): Bool */
short int VIRTUAL_model__MMethod__is_init_for(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MMethod__is_init_for(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttribute#init for (self: MAttribute, MClassDef, String, MVisibility) */
void model__MAttribute__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MProperty__init]))(self, p0, p1, p2) /* init on <self:MAttribute>*/;
RET_LABEL:;
}
/* method model#MAttribute#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MAttribute__init(val* self, val* p0, val* p1, val* p2) {
model__MAttribute__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MVirtualTypeProp#init for (self: MVirtualTypeProp, MClassDef, String, MVisibility) */
void model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MProperty__init]))(self, p0, p1, p2) /* init on <self:MVirtualTypeProp>*/;
RET_LABEL:;
}
/* method model#MVirtualTypeProp#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2) {
model__MVirtualTypeProp__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: MVirtualTypeProp): MVirtualType */
val* model__MVirtualTypeProp__mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = self->attrs[COLOR_model__MVirtualTypeProp___64dmvirtualtype].val; /* @mvirtualtype on <self:MVirtualTypeProp> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mvirtualtype");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1762);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: Object): MVirtualType */
val* VIRTUAL_model__MVirtualTypeProp__mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = model__MVirtualTypeProp__mvirtualtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype= for (self: MVirtualTypeProp, MVirtualType) */
void model__MVirtualTypeProp__mvirtualtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MVirtualTypeProp___64dmvirtualtype].val = p0; /* @mvirtualtype on <self:MVirtualTypeProp> */
RET_LABEL:;
}
/* method model#MVirtualTypeProp#mvirtualtype= for (self: Object, MVirtualType) */
void VIRTUAL_model__MVirtualTypeProp__mvirtualtype_61d(val* self, val* p0) {
model__MVirtualTypeProp__mvirtualtype_61d(self, p0);
RET_LABEL:;
}
/* method model#MPropDef#location for (self: MPropDef): Location */
val* model__MPropDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_model__MPropDef___64dlocation].val; /* @location on <self:MPropDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @location");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1779);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location for (self: Object): Location */
val* VIRTUAL_model__MPropDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = model__MPropDef__location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location= for (self: MPropDef, Location) */
void model__MPropDef__location_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___64dlocation].val = p0; /* @location on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#location= for (self: Object, Location) */
void VIRTUAL_model__MPropDef__location_61d(val* self, val* p0) {
model__MPropDef__location_61d(self, p0);
RET_LABEL:;
}
/* method model#MPropDef#mclassdef for (self: MPropDef): MClassDef */
val* model__MPropDef__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MPropDef___64dmclassdef].val; /* @mclassdef on <self:MPropDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1782);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef for (self: Object): MClassDef */
val* VIRTUAL_model__MPropDef__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = model__MPropDef__mclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef= for (self: MPropDef, MClassDef) */
void model__MPropDef__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___64dmclassdef].val = p0; /* @mclassdef on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_model__MPropDef__mclassdef_61d(val* self, val* p0) {
model__MPropDef__mclassdef_61d(self, p0);
RET_LABEL:;
}
/* method model#MPropDef#mproperty for (self: MPropDef): MProperty */
val* model__MPropDef__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_model__MPropDef___64dmproperty].val; /* @mproperty on <self:MPropDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1785);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty for (self: Object): MProperty */
val* VIRTUAL_model__MPropDef__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = model__MPropDef__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty= for (self: MPropDef, MProperty) */
void model__MPropDef__mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1785);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___64dmproperty].val = p0; /* @mproperty on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mproperty= for (self: Object, MProperty) */
void VIRTUAL_model__MPropDef__mproperty_61d(val* self, val* p0) {
model__MPropDef__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method model#MPropDef#init for (self: MPropDef, MClassDef, MProperty, Location) */
void model__MPropDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_location /* var location: Location */;
val* var1 /* : Array[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
/* Covariant cast for argument 1 (mproperty) <p1:MProperty> isa MPROPERTY */
/* <p1:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1788);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MPropDef__mclassdef_61d]))(self, var_mclassdef) /* mclassdef= on <self:MPropDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MPropDef__mproperty_61d]))(self, var_mproperty) /* mproperty= on <self:MPropDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MPropDef__location_61d]))(self, var_location) /* location= on <self:MPropDef>*/;
var1 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_mclassdef) /* mpropdefs on <var_mclassdef:MClassDef>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, self) /* add on <var1:Array[MPropDef]>*/;
var2 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MProperty>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, self) /* add on <var2:Array[MPropDef]>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "#";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 3;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[2] = (val*) var_mproperty;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MPropDef__to_s_61d]))(self, var10) /* to_s= on <self:MPropDef>*/;
RET_LABEL:;
}
/* method model#MPropDef#init for (self: Object, MClassDef, MProperty, Location) */
void VIRTUAL_model__MPropDef__init(val* self, val* p0, val* p1, val* p2) {
model__MPropDef__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MPropDef#to_s for (self: MPropDef): String */
val* model__MPropDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MPropDef___64dto_s].val; /* @to_s on <self:MPropDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1798);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: Object): String */
val* VIRTUAL_model__MPropDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MPropDef__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s= for (self: MPropDef, String) */
void model__MPropDef__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___64dto_s].val = p0; /* @to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#to_s= for (self: Object, String) */
void VIRTUAL_model__MPropDef__to_s_61d(val* self, val* p0) {
model__MPropDef__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model#MPropDef#is_intro for (self: MPropDef): Bool */
short int model__MPropDef__is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MProperty */;
val* var2 /* : MPropDef */;
short int var3 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MPropDef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MProperty__intro]))(var1) /* intro on <var1:MProperty>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, self) /* == on <var2:MPropDef>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#is_intro for (self: Object): Bool */
short int VIRTUAL_model__MPropDef__is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MPropDef__is_intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var4 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_i /* var i: ArrayIterator[MPropDef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1812);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MPropDef>*/;
var4 = ((val* (*)(val*, val*, val*))(var3->class->vft[COLOR_model__MProperty__lookup_all_definitions]))(var3, var_mmodule, var_mtype) /* lookup_all_definitions on <var3:MProperty>*/;
var_mpropdefs = var4;
var5 = ((val* (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mpropdefs) /* iterator on <var_mpropdefs:Array[MPropDef]>*/;
var_i = var5;
for(;;) {
var7 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:ArrayIterator[MPropDef]>*/;
var_ = var7;
if (var7){
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:ArrayIterator[MPropDef]>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___33d_61d]))(var8, self) /* != on <var8:nullable Object(MPropDef)>*/;
var6 = var9;
} else {
var6 = var_;
}
if (!var6) break;
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:ArrayIterator[MPropDef]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var10 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:ArrayIterator[MPropDef]>*/;
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert \'has_property\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1817);
show_backtrace(1);
}
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:ArrayIterator[MPropDef]>*/;
var11 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:ArrayIterator[MPropDef]>*/;
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert \'has_next_property\' failed");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1819);
show_backtrace(1);
}
var12 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:ArrayIterator[MPropDef]>*/;
/* <var12:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var12->type->table_size) {
var13 = 0;
} else {
var13 = var12->type->type_table[cltype] == idtype;
}
if (!var13) {
var_class_name = var12 == NULL ? "null" : var12->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1820);
show_backtrace(1);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: Object, MModule, MType): MPropDef */
val* VIRTUAL_model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MPropDef__lookup_next_definition(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#init for (self: MMethodDef, MClassDef, MMethod, Location) */
void model__MMethodDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MMethod> isa MPROPERTY */
/* <p1:MMethod> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1831);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MPropDef__init]))(self, p0, p1, p2) /* init on <self:MMethodDef>*/;
RET_LABEL:;
}
/* method model#MMethodDef#init for (self: Object, MClassDef, MMethod, Location) */
void VIRTUAL_model__MMethodDef__init(val* self, val* p0, val* p1, val* p2) {
model__MMethodDef__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MMethodDef#msignature for (self: MMethodDef): nullable MSignature */
val* model__MMethodDef__msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_model__MMethodDef___64dmsignature].val; /* @msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature for (self: Object): nullable MSignature */
val* VIRTUAL_model__MMethodDef__msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = model__MMethodDef__msignature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature= for (self: MMethodDef, nullable MSignature) */
void model__MMethodDef__msignature_61d(val* self, val* p0) {
self->attrs[COLOR_model__MMethodDef___64dmsignature].val = p0; /* @msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#msignature= for (self: Object, nullable MSignature) */
void VIRTUAL_model__MMethodDef__msignature_61d(val* self, val* p0) {
model__MMethodDef__msignature_61d(self, p0);
RET_LABEL:;
}
/* method model#MMethodDef#is_abstract for (self: MMethodDef): Bool */
short int model__MMethodDef__is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___64dis_abstract].s; /* @is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MMethodDef__is_abstract(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___64dis_abstract].s = p0; /* @is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_abstract= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_abstract_61d(val* self, short int p0) {
model__MMethodDef__is_abstract_61d(self, p0);
RET_LABEL:;
}
/* method model#MAttributeDef#init for (self: MAttributeDef, MClassDef, MAttribute, Location) */
void model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MAttribute> isa MPROPERTY */
/* <p1:MAttribute> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1850);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MPropDef__init]))(self, p0, p1, p2) /* init on <self:MAttributeDef>*/;
RET_LABEL:;
}
/* method model#MAttributeDef#init for (self: Object, MClassDef, MAttribute, Location) */
void VIRTUAL_model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2) {
model__MAttributeDef__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype for (self: MAttributeDef): nullable MType */
val* model__MAttributeDef__static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MAttributeDef___64dstatic_mtype].val; /* @static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype for (self: Object): nullable MType */
val* VIRTUAL_model__MAttributeDef__static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = model__MAttributeDef__static_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype= for (self: MAttributeDef, nullable MType) */
void model__MAttributeDef__static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MAttributeDef___64dstatic_mtype].val = p0; /* @static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype= for (self: Object, nullable MType) */
void VIRTUAL_model__MAttributeDef__static_mtype_61d(val* self, val* p0) {
model__MAttributeDef__static_mtype_61d(self, p0);
RET_LABEL:;
}
/* method model#MVirtualTypeDef#init for (self: MVirtualTypeDef, MClassDef, MVirtualTypeProp, Location) */
void model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MVirtualTypeProp */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MVirtualTypeProp> isa MPROPERTY */
/* <p1:MVirtualTypeProp> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1866);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_model__MPropDef__init]))(self, p0, p1, p2) /* init on <self:MVirtualTypeDef>*/;
RET_LABEL:;
}
/* method model#MVirtualTypeDef#init for (self: Object, MClassDef, MVirtualTypeProp, Location) */
void VIRTUAL_model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2) {
model__MVirtualTypeDef__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound for (self: MVirtualTypeDef): nullable MType */
val* model__MVirtualTypeDef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MVirtualTypeDef___64dbound].val; /* @bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound for (self: Object): nullable MType */
val* VIRTUAL_model__MVirtualTypeDef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = model__MVirtualTypeDef__bound(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound= for (self: MVirtualTypeDef, nullable MType) */
void model__MVirtualTypeDef__bound_61d(val* self, val* p0) {
self->attrs[COLOR_model__MVirtualTypeDef___64dbound].val = p0; /* @bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound= for (self: Object, nullable MType) */
void VIRTUAL_model__MVirtualTypeDef__bound_61d(val* self, val* p0) {
model__MVirtualTypeDef__bound_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassKind#to_s for (self: MClassKind): String */
val* model__MClassKind__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClassKind___64dto_s].val; /* @to_s on <self:MClassKind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model.nit", 1886);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s for (self: Object): String */
val* VIRTUAL_model__MClassKind__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClassKind__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s= for (self: MClassKind, String) */
void model__MClassKind__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassKind___64dto_s].val = p0; /* @to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#to_s= for (self: Object, String) */
void VIRTUAL_model__MClassKind__to_s_61d(val* self, val* p0) {
model__MClassKind__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassKind#need_init for (self: MClassKind): Bool */
short int model__MClassKind__need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MClassKind___64dneed_init].s; /* @need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init for (self: Object): Bool */
short int VIRTUAL_model__MClassKind__need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MClassKind__need_init(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init= for (self: MClassKind, Bool) */
void model__MClassKind__need_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MClassKind___64dneed_init].s = p0; /* @need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#need_init= for (self: Object, Bool) */
void VIRTUAL_model__MClassKind__need_init_61d(val* self, short int p0) {
model__MClassKind__need_init_61d(self, p0);
RET_LABEL:;
}
/* method model#MClassKind#init for (self: MClassKind, String, Bool) */
void model__MClassKind__init(val* self, val* p0, short int p1) {
val* var_s /* var s: String */;
short int var_need_init /* var need_init: Bool */;
var_s = p0;
var_need_init = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_model__MClassKind__to_s_61d]))(self, var_s) /* to_s= on <self:MClassKind>*/;
((void (*)(val*, short int))(self->class->vft[COLOR_model__MClassKind__need_init_61d]))(self, var_need_init) /* need_init= on <self:MClassKind>*/;
RET_LABEL:;
}
/* method model#MClassKind#init for (self: Object, String, Bool) */
void VIRTUAL_model__MClassKind__init(val* self, val* p0, short int p1) {
model__MClassKind__init(self, p0, p1);
RET_LABEL:;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* model__Object__abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = 14;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
((void (*)(val*, val*, short int))(var2->class->vft[COLOR_model__MClassKind__init]))(var2, var4, var8) /* init on <var2:MClassKind>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__abstract_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__abstract_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#concrete_kind for (self: Object): MClassKind */
val* model__Object__concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "class";
var6 = 5;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
((void (*)(val*, val*, short int))(var2->class->vft[COLOR_model__MClassKind__init]))(var2, var4, var8) /* init on <var2:MClassKind>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#concrete_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__concrete_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__concrete_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#interface_kind for (self: Object): MClassKind */
val* model__Object__interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
((void (*)(val*, val*, short int))(var2->class->vft[COLOR_model__MClassKind__init]))(var2, var4, var8) /* init on <var2:MClassKind>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#interface_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__interface_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__interface_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#enum_kind for (self: Object): MClassKind */
val* model__Object__enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
((void (*)(val*, val*, short int))(var2->class->vft[COLOR_model__MClassKind__init]))(var2, var4, var8) /* init on <var2:MClassKind>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#enum_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__enum_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__enum_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#extern_kind for (self: Object): MClassKind */
val* model__Object__extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "extern";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
((void (*)(val*, val*, short int))(var2->class->vft[COLOR_model__MClassKind__init]))(var2, var4, var8) /* init on <var2:MClassKind>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#extern_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__extern_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__extern_kind(self);
var = var1;
RET_LABEL:;
return var;
}
