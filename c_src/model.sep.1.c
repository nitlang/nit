#include "model.sep.0.h"
/* method model#Model#mclasses for (self: Model): Array[MClass] */
val* model__Model__mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_model__Model___mclasses].val; /* _mclasses on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 34);
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
val* var3 /* : Array[MClass] */;
{ /* Inline model#Model#mclasses (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___mclasses].val; /* _mclasses on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties for (self: Model): Array[MProperty] */
val* model__Model__mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_model__Model___mproperties].val; /* _mproperties on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 37);
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
val* var3 /* : Array[MProperty] */;
{ /* Inline model#Model#mproperties (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___mproperties].val; /* _mproperties on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 37);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclassdef_hierarchy for (self: Model): POSet[MClassDef] */
val* model__Model__mclassdef_hierarchy(val* self) {
val* var /* : POSet[MClassDef] */;
val* var1 /* : POSet[MClassDef] */;
var1 = self->attrs[COLOR_model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 40);
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
val* var3 /* : POSet[MClassDef] */;
{ /* Inline model#Model#mclassdef_hierarchy (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#intro_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* model__Model__intro_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 46);
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
val* var3 /* : POSet[MClassType] */;
{ /* Inline model#Model#intro_mtype_specialization_hierarchy (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 46);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#full_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* model__Model__full_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 57);
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
val* var3 /* : POSet[MClassType] */;
{ /* Inline model#Model#full_mtype_specialization_hierarchy (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 57);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses_by_name for (self: Model): MultiHashMap[String, MClass] */
val* model__Model__mclasses_by_name(val* self) {
val* var /* : MultiHashMap[String, MClass] */;
val* var1 /* : MultiHashMap[String, MClass] */;
var1 = self->attrs[COLOR_model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 66);
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
val* var3 /* : MultiHashMap[String, MClass] */;
{ /* Inline model#Model#mclasses_by_name (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 66);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#get_mclasses_by_name for (self: Model, String): nullable Array[MClass] */
val* model__Model__get_mclasses_by_name(val* self, val* p0) {
val* var /* : nullable Array[MClass] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MClass] */;
val* var3 /* : MultiHashMap[String, MClass] */;
short int var4 /* : Bool */;
val* var5 /* : MultiHashMap[String, MClass] */;
val* var7 /* : MultiHashMap[String, MClass] */;
val* var8 /* : nullable Object */;
val* var9 /* : null */;
var_name = p0;
{
{ /* Inline model#Model#mclasses_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 66);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline model#Model#mclasses_by_name (self) on <self:Model> */
var7 = self->attrs[COLOR_model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 66);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = hash_collection__HashMap___91d_93d(var5, var_name);
}
var = var8;
goto RET_LABEL;
} else {
var9 = NULL;
var = var9;
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
var1 = self->attrs[COLOR_model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 84);
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
val* var3 /* : MultiHashMap[String, MProperty] */;
{ /* Inline model#Model#mproperties_by_name (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 84);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#get_mproperties_by_name for (self: Model, String): nullable Array[MProperty] */
val* model__Model__get_mproperties_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProperty] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProperty] */;
val* var3 /* : MultiHashMap[String, MProperty] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : null */;
val* var7 /* : MultiHashMap[String, MProperty] */;
val* var9 /* : MultiHashMap[String, MProperty] */;
val* var10 /* : nullable Object */;
var_name = p0;
{
{ /* Inline model#Model#mproperties_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 84);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_name);
}
var5 = !var4;
if (var5){
var6 = NULL;
var = var6;
goto RET_LABEL;
} else {
{
{ /* Inline model#Model#mproperties_by_name (self) on <self:Model> */
var9 = self->attrs[COLOR_model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 84);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = hash_collection__HashMap___91d_93d(var7, var_name);
}
var = var10;
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
var1 = self->attrs[COLOR_model__Model___null_type].val; /* _null_type on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 102);
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
val* var3 /* : MNullType */;
{ /* Inline model#Model#null_type (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_model__Model___null_type].val; /* _null_type on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 102);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#intro_mclasses for (self: MModule): Array[MClass] */
val* model__MModule__intro_mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 136);
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
val* var3 /* : Array[MClass] */;
{ /* Inline model#MModule#intro_mclasses (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 136);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#mclassdefs for (self: MModule): Array[MClassDef] */
val* model__MModule__mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
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
val* var3 /* : Array[MClassDef] */;
{ /* Inline model#MModule#mclassdefs (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy for (self: MModule): POSet[MClass] */
val* model__MModule__flatten_mclass_hierarchy(val* self) {
val* var /* : POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
val* var3 /* : nullable POSet[MClass] */;
val* var_res /* var res: nullable POSet[MClass] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : POSet[MClass] */;
val* var12 /* : POSetElement[MModule] */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : Collection[Object] */;
val* var_ /* var : Collection[MModule] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[MModule] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var20 /* : Array[MClassDef] */;
val* var22 /* : Array[MClassDef] */;
val* var_23 /* var : Array[MClassDef] */;
val* var24 /* : ArrayIterator[nullable Object] */;
val* var_25 /* var : ArrayIterator[MClassDef] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var_c /* var c: MClass */;
val* var31 /* : POSetElement[Object] */;
val* var32 /* : Array[MClassType] */;
val* var34 /* : Array[MClassType] */;
val* var_35 /* var : Array[MClassType] */;
val* var36 /* : ArrayIterator[nullable Object] */;
val* var_37 /* var : ArrayIterator[MClassType] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var40 /* : MClass */;
val* var42 /* : MClass */;
{
{ /* Inline model#MModule#flatten_mclass_hierarchy_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable POSet[MClass]> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable POSet[MClass](POSet[MClass])>*/;
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
var = var_res;
goto RET_LABEL;
} else {
}
var11 = NEW_poset__POSet(&type_poset__POSetmodel__MClass);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:POSet[MClass]>*/;
}
var_res = var11;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var14 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = poset__POSetElement__greaters(var12);
}
var_ = var15;
{
var16 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_17 = var16;
for(;;) {
{
var18 = ((short int (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_17) /* is_ok on <var_17:Iterator[MModule]>*/;
}
if (var18){
{
var19 = ((val* (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Iterator__item]))(var_17) /* item on <var_17:Iterator[MModule]>*/;
}
var_m = var19;
{
{ /* Inline model#MModule#mclassdefs (var_m) on <var_m:MModule> */
var22 = var_m->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_m:MModule> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_23 = var20;
{
var24 = array__AbstractArrayRead__iterator(var_23);
}
var_25 = var24;
for(;;) {
{
var26 = array__ArrayIterator__is_ok(var_25);
}
if (var26){
{
var27 = array__ArrayIterator__item(var_25);
}
var_cd = var27;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var30 = var_cd->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_c = var28;
{
var31 = poset__POSet__add_node(var_res, var_c);
}
{
{ /* Inline model#MClassDef#supertypes (var_cd) on <var_cd:MClassDef> */
var34 = var_cd->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_cd:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_35 = var32;
{
var36 = array__AbstractArrayRead__iterator(var_35);
}
var_37 = var36;
for(;;) {
{
var38 = array__ArrayIterator__is_ok(var_37);
}
if (var38){
{
var39 = array__ArrayIterator__item(var_37);
}
var_s = var39;
{
{ /* Inline model#MClassType#mclass (var_s) on <var_s:MClassType> */
var42 = var_s->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_s:MClassType> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
poset__POSet__add_edge(var_res, var_c, var40); /* Direct call poset#POSet#add_edge on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
{
array__ArrayIterator__next(var_37); /* Direct call array#ArrayIterator#next on <var_37:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_37) on <var_37:ArrayIterator[MClassType]> */
RET_LABEL43:(void)0;
}
}
{
array__ArrayIterator__next(var_25); /* Direct call array#ArrayIterator#next on <var_25:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label44;
}
}
BREAK_label44: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_25) on <var_25:ArrayIterator[MClassDef]> */
RET_LABEL45:(void)0;
}
}
{
((void (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Iterator__next]))(var_17) /* next on <var_17:Iterator[MModule]>*/;
}
} else {
goto BREAK_label46;
}
}
BREAK_label46: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_17) on <var_17:Iterator[MModule]> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MModule#flatten_mclass_hierarchy_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_model__MModule___flatten_mclass_hierarchy_cache].val = var_res; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL48:(void)0;
}
}
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
{
var = model__MModule__flatten_mclass_hierarchy(self);
}
{
sorter__Comparator__sort(var, var_mclasses); /* Direct call sorter#Comparator#sort on <var:POSet[MClass]>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mclasses for (self: Object, Array[MClass]) */
void VIRTUAL_model__MModule__linearize_mclasses(val* self, val* p0) {
model__MModule__linearize_mclasses(self, p0); /* Direct call model#MModule#linearize_mclasses on <self:Object(MModule)>*/
RET_LABEL:;
}
/* method model#MModule#linearize_mclassdefs for (self: MModule, Array[MClassDef]) */
void model__MModule__linearize_mclassdefs(val* self, val* p0) {
val* var_mclassdefs /* var mclassdefs: Array[MClassDef] */;
val* var /* : MClassDefSorter */;
val* var_sorter /* var sorter: MClassDefSorter */;
var_mclassdefs = p0;
var = NEW_model__MClassDefSorter(&type_model__MClassDefSorter);
{
((void (*)(val*, val*))(var->class->vft[COLOR_model__MClassDefSorter__mmodule_61d]))(var, self) /* mmodule= on <var:MClassDefSorter>*/;
}
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:MClassDefSorter>*/;
}
var_sorter = var;
{
sorter__Comparator__sort(var_sorter, var_mclassdefs); /* Direct call sorter#Comparator#sort on <var_sorter:MClassDefSorter>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mclassdefs for (self: Object, Array[MClassDef]) */
void VIRTUAL_model__MModule__linearize_mclassdefs(val* self, val* p0) {
model__MModule__linearize_mclassdefs(self, p0); /* Direct call model#MModule#linearize_mclassdefs on <self:Object(MModule)>*/
RET_LABEL:;
}
/* method model#MModule#linearize_mpropdefs for (self: MModule, Array[MPropDef]) */
void model__MModule__linearize_mpropdefs(val* self, val* p0) {
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var /* : MPropDefSorter */;
val* var_sorter /* var sorter: MPropDefSorter */;
var_mpropdefs = p0;
var = NEW_model__MPropDefSorter(&type_model__MPropDefSorter);
{
((void (*)(val*, val*))(var->class->vft[COLOR_model__MPropDefSorter__mmodule_61d]))(var, self) /* mmodule= on <var:MPropDefSorter>*/;
}
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:MPropDefSorter>*/;
}
var_sorter = var;
{
sorter__Comparator__sort(var_sorter, var_mpropdefs); /* Direct call sorter#Comparator#sort on <var_sorter:MPropDefSorter>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mpropdefs for (self: Object, Array[MPropDef]) */
void VIRTUAL_model__MModule__linearize_mpropdefs(val* self, val* p0) {
model__MModule__linearize_mpropdefs(self, p0); /* Direct call model#MModule#linearize_mpropdefs on <self:Object(MModule)>*/
RET_LABEL:;
}
/* method model#MModule#flatten_mclass_hierarchy_cache for (self: MModule): nullable POSet[MClass] */
val* model__MModule__flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
var1 = self->attrs[COLOR_model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy_cache for (self: Object): nullable POSet[MClass] */
val* VIRTUAL_model__MModule__flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
val* var3 /* : nullable POSet[MClass] */;
{ /* Inline model#MModule#flatten_mclass_hierarchy_cache (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:Object(MModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy_cache= for (self: MModule, nullable POSet[MClass]) */
void model__MModule__flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___flatten_mclass_hierarchy_cache].val = p0; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#flatten_mclass_hierarchy_cache= for (self: Object, nullable POSet[MClass]) */
void VIRTUAL_model__MModule__flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
{ /* Inline model#MModule#flatten_mclass_hierarchy_cache= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_model__MModule___flatten_mclass_hierarchy_cache].val = p0; /* _flatten_mclass_hierarchy_cache on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MModule#object_type for (self: MModule): MClassType */
val* model__MModule__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_res /* var res: nullable MClassType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
{
{ /* Inline model#MModule#object_type_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_model__MModule___object_type_cache].val; /* _object_type_cache on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable MClassType> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MClassType(MClassType)>*/;
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
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce) {
var11 = varonce;
} else {
var12 = "Object";
var13 = 6;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
var15 = model__MModule__get_primitive_class(self, var11);
}
{
{ /* Inline model#MClass#mclass_type (var15) on <var15:MClass> */
var18 = var15->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var15:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_res = var16;
{
{ /* Inline model#MModule#object_type_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_model__MModule___object_type_cache].val = var_res; /* _object_type_cache on <self:MModule> */
RET_LABEL19:(void)0;
}
}
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
var1 = self->attrs[COLOR_model__MModule___object_type_cache].val; /* _object_type_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache for (self: Object): nullable MClassType */
val* VIRTUAL_model__MModule__object_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
{ /* Inline model#MModule#object_type_cache (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_model__MModule___object_type_cache].val; /* _object_type_cache on <self:Object(MModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache= for (self: MModule, nullable MClassType) */
void model__MModule__object_type_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___object_type_cache].val = p0; /* _object_type_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#object_type_cache= for (self: Object, nullable MClassType) */
void VIRTUAL_model__MModule__object_type_cache_61d(val* self, val* p0) {
{ /* Inline model#MModule#object_type_cache= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_model__MModule___object_type_cache].val = p0; /* _object_type_cache on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MModule#pointer_type for (self: MModule): MClassType */
val* model__MModule__pointer_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : MClass */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
var1 = self->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce) {
var3 = varonce;
} else {
var4 = "Pointer";
var5 = 7;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = model__MModule__get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var7) on <var7:MClass> */
var10 = var7->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var7:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_model__MModule___pointer_type].val = var8; /* _pointer_type on <self:MModule> */
var2 = var8;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#pointer_type for (self: Object): MClassType */
val* VIRTUAL_model__MModule__pointer_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
short int var3 /* : Bool */;
val* var4 /* : MClassType */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : MClass */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
{ /* Inline model#MModule#pointer_type (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <self:Object(MModule)> */
if(likely(var3)) {
var4 = self->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <self:Object(MModule)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce) {
var5 = varonce;
} else {
var6 = "Pointer";
var7 = 7;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = model__MModule__get_primitive_class(self, var5);
}
{
{ /* Inline model#MClass#mclass_type (var9) on <var9:MClass> */
var12 = var9->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var9:MClass> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_model__MModule___pointer_type].val = var10; /* _pointer_type on <self:Object(MModule)> */
var4 = var10;
}
var1 = var4;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type for (self: MModule): MClassType */
val* model__MModule__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_res /* var res: nullable MClassType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
{
{ /* Inline model#MModule#bool_type_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_model__MModule___bool_type_cache].val; /* _bool_type_cache on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable MClassType> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MClassType(MClassType)>*/;
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
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce) {
var11 = varonce;
} else {
var12 = "Bool";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
var15 = model__MModule__get_primitive_class(self, var11);
}
{
{ /* Inline model#MClass#mclass_type (var15) on <var15:MClass> */
var18 = var15->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var15:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_res = var16;
{
{ /* Inline model#MModule#bool_type_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_model__MModule___bool_type_cache].val = var_res; /* _bool_type_cache on <self:MModule> */
RET_LABEL19:(void)0;
}
}
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
var1 = self->attrs[COLOR_model__MModule___bool_type_cache].val; /* _bool_type_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache for (self: Object): nullable MClassType */
val* VIRTUAL_model__MModule__bool_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
{ /* Inline model#MModule#bool_type_cache (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_model__MModule___bool_type_cache].val; /* _bool_type_cache on <self:Object(MModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache= for (self: MModule, nullable MClassType) */
void model__MModule__bool_type_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MModule___bool_type_cache].val = p0; /* _bool_type_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#bool_type_cache= for (self: Object, nullable MClassType) */
void VIRTUAL_model__MModule__bool_type_cache_61d(val* self, val* p0) {
{ /* Inline model#MModule#bool_type_cache= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_model__MModule___bool_type_cache].val = p0; /* _bool_type_cache on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MModule#sys_type for (self: MModule): nullable MClassType */
val* model__MModule__sys_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
val* var3 /* : Model */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : null */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (varonce) {
var4 = varonce;
} else {
var5 = "Sys";
var6 = 3;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = model__Model__get_mclasses_by_name(var1, var4);
}
var_clas = var8;
var9 = NULL;
if (var_clas == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = array__Array___61d_61d(var_clas, var9);
var10 = var11;
}
if (var10){
var12 = NULL;
var = var12;
goto RET_LABEL;
} else {
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "Sys";
var16 = 3;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
var18 = model__MModule__get_primitive_class(self, var14);
}
{
{ /* Inline model#MClass#mclass_type (var18) on <var18:MClass> */
var21 = var18->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var18:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var = var19;
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
/* method model#MModule#finalizable_type for (self: MModule): nullable MClassType */
val* model__MModule__finalizable_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
val* var3 /* : Model */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : null */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (varonce) {
var4 = varonce;
} else {
var5 = "Finalizable";
var6 = 11;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = model__Model__get_mclasses_by_name(var1, var4);
}
var_clas = var8;
var9 = NULL;
if (var_clas == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = array__Array___61d_61d(var_clas, var9);
var10 = var11;
}
if (var10){
var12 = NULL;
var = var12;
goto RET_LABEL;
} else {
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "Finalizable";
var16 = 11;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
var18 = model__MModule__get_primitive_class(self, var14);
}
{
{ /* Inline model#MClass#mclass_type (var18) on <var18:MClass> */
var21 = var18->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var18:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#finalizable_type for (self: Object): nullable MClassType */
val* VIRTUAL_model__MModule__finalizable_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = model__MModule__finalizable_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#get_primitive_class for (self: MModule, String): MClass */
val* model__MModule__get_primitive_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : nullable Array[MClass] */;
val* var_cla /* var cla: nullable Array[MClass] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MClass */;
val* var15 /* : null */;
val* var16 /* : MClassKind */;
val* var17 /* : MVisibility */;
val* var_c /* var c: MClass */;
val* var18 /* : MClassDef */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
val* var22 /* : Location */;
val* var23 /* : null */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
val* var_cladef /* var cladef: MClassDef */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
long var37 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var_msg /* var msg: String */;
val* var_ /* var : nullable Array[MClass] */;
val* var62 /* : ArrayIterator[nullable Object] */;
val* var_63 /* var : ArrayIterator[MClass] */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var_c66 /* var c: MClass */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : String */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
val* var77 /* : String */;
long var79 /* : Int */;
val* var81 /* : nullable Object */;
var_name = p0;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__Model__get_mclasses_by_name(var1, var_name);
}
var_cla = var4;
var5 = NULL;
if (var_cla == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = array__Array___61d_61d(var_cla, var5);
var6 = var7;
}
if (var6){
if (varonce) {
var8 = varonce;
} else {
var9 = "Bool";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
var13 = string__FlatString___61d_61d(var_name, var8);
var12 = var13;
}
if (var12){
var14 = NEW_model__MClass(&type_model__MClass);
var15 = NULL;
{
var16 = model__Object__enum_kind(self);
}
{
var17 = model_base__Object__public_visibility(self);
}
{
model__MClass__init(var14, self, var_name, var15, var16, var17); /* Direct call model#MClass#init on <var14:MClass>*/
}
var_c = var14;
var18 = NEW_model__MClassDef(&type_model__MClassDef);
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var21 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_location__Location(&type_location__Location);
var23 = NULL;
var24 = 0;
var25 = 0;
var26 = 0;
var27 = 0;
{
location__Location__init(var22, var23, var24, var25, var26, var27); /* Direct call location#Location#init on <var22:Location>*/
}
{
model__MClassDef__init(var18, self, var19, var22); /* Direct call model#MClassDef#init on <var18:MClassDef>*/
}
var_cladef = var18;
var = var_c;
goto RET_LABEL;
} else {
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Fatal Error: no primitive class ";
var31 = 32;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 2;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var_name;
{
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
}
{
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
}
{
file__Object__print(self, var36); /* Direct call file#Object#print on <self:MModule>*/
}
var37 = 1;
{
{ /* Inline kernel#Object#exit (self,var37) on <self:MModule> */
exit(var37);
RET_LABEL38:(void)0;
}
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 262);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_cla) on <var_cla:nullable Array[MClass]> */
if (unlikely(var_cla == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var41 = var_cla->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_cla:nullable Array[MClass]> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = 1;
{
{ /* Inline kernel#Int#!= (var39,var42) on <var39:Int> */
var46 = var39 == var42;
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Fatal Error: more than one primitive class ";
var51 = 43;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ":";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
var_msg = var61;
var_ = var_cla;
if (var_ == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 264);
show_backtrace(1);
} else {
var62 = array__AbstractArrayRead__iterator(var_);
}
var_63 = var62;
for(;;) {
{
var64 = array__ArrayIterator__is_ok(var_63);
}
if (var64){
{
var65 = array__ArrayIterator__item(var_63);
}
var_c66 = var65;
if (varonce67) {
var68 = varonce67;
} else {
var69 = " ";
var70 = 1;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
var72 = model__MClass__full_name(var_c66);
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 2;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var72;
{
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
}
{
var76 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
}
{
var77 = string__FlatString___43d(var_msg, var76);
}
var_msg = var77;
{
array__ArrayIterator__next(var_63); /* Direct call array#ArrayIterator#next on <var_63:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_63) on <var_63:ArrayIterator[MClass]> */
RET_LABEL78:(void)0;
}
}
{
file__Object__print(self, var_msg); /* Direct call file#Object#print on <self:MModule>*/
}
var79 = 1;
{
{ /* Inline kernel#Object#exit (self,var79) on <self:MModule> */
exit(var79);
RET_LABEL80:(void)0;
}
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 268);
show_backtrace(1);
} else {
var81 = abstract_collection__SequenceRead__first(var_cla);
}
var = var81;
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
val* var3 /* : Model */;
val* var4 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_res /* var res: nullable MMethod */;
val* var_ /* var : Array[MProperty] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MProperty] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var_intro /* var intro: MClassDef */;
val* var18 /* : Array[MClassDef] */;
val* var20 /* : Array[MClassDef] */;
val* var_21 /* var : Array[MClassDef] */;
val* var22 /* : ArrayIterator[nullable Object] */;
val* var_23 /* var : ArrayIterator[MClassDef] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var26 /* : POSetElement[MModule] */;
val* var28 /* : POSetElement[MModule] */;
val* var29 /* : Collection[Object] */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable POSetElement[MClassDef] */;
val* var37 /* : nullable POSetElement[MClassDef] */;
val* var38 /* : Collection[Object] */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_other51 /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
static val* varonce;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : String */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
var_name = p0;
var_recv = p1;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__Model__get_mproperties_by_name(var1, var_name);
}
var_props = var4;
var5 = NULL;
if (var_props == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = array__Array___61d_61d(var_props, var5);
var6 = var7;
}
if (var6){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = NULL;
var_res = var9;
var_ = var_props;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_mprop = var13;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var14 = 0;
} else {
var14 = var_mprop->type->type_table[cltype] == idtype;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 278);
show_backtrace(1);
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var17 = var_mprop->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_intro = var15;
{
{ /* Inline model#MClass#mclassdefs (var_recv) on <var_recv:MClass> */
var20 = var_recv->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var_recv:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_21 = var18;
{
var22 = array__AbstractArrayRead__iterator(var_21);
}
var_23 = var22;
for(;;) {
{
var24 = array__ArrayIterator__is_ok(var_23);
}
if (var24){
{
var25 = array__ArrayIterator__item(var_23);
}
var_mclassdef = var25;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = poset__POSetElement__greaters(var26);
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((short int (*)(val*, val*))(var29->class->vft[COLOR_abstract_collection__Collection__has]))(var29, var30) /* has on <var29:Collection[Object](Collection[MModule])>*/;
}
var34 = !var33;
if (var34){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 282);
show_backtrace(1);
} else {
var38 = poset__POSetElement__greaters(var35);
}
{
var39 = ((short int (*)(val*, val*))(var38->class->vft[COLOR_abstract_collection__Collection__has]))(var38, var_intro) /* has on <var38:Collection[Object](Collection[MClassDef])>*/;
}
var40 = !var39;
if (var40){
goto BREAK_label;
} else {
}
var41 = NULL;
if (var_res == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var41) on <var_res:nullable MMethod> */
var_other = var41;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var47 = var_res == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
var_res = var_mprop;
} else {
{
{ /* Inline kernel#Object#!= (var_res,var_mprop) on <var_res:nullable MMethod(MMethod)> */
var_other51 = var_mprop;
{
var53 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other51) /* == on <var_res:nullable MMethod(MMethod)>*/;
var52 = var53;
}
var54 = !var52;
var49 = var54;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
if (varonce) {
var55 = varonce;
} else {
var56 = "Fatal Error: ambigous property name \'";
var57 = 37;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "\'; conflict between ";
var62 = 20;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
var64 = model__MProperty__full_name(var_mprop);
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " and ";
var68 = 5;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
var70 = model__MProperty__full_name(var_res);
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 6;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var55;
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var73)->values[2] = (val*) var60;
((struct instance_array__NativeArray*)var73)->values[3] = (val*) var64;
((struct instance_array__NativeArray*)var73)->values[4] = (val*) var66;
((struct instance_array__NativeArray*)var73)->values[5] = (val*) var70;
{
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var74 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
{
file__Object__print(self, var74); /* Direct call file#Object#print on <self:MModule>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 287);
show_backtrace(1);
} else {
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:ArrayIterator[MClassDef]> */
RET_LABEL76:(void)0;
}
}
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label77;
}
}
BREAK_label77: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[MProperty]> */
RET_LABEL78:(void)0;
}
}
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
var1 = self->attrs[COLOR_model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 298);
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
val* var3 /* : MModule */;
{ /* Inline model#MClassDefSorter#mmodule (self) on <self:Object(MClassDefSorter)> */
var3 = self->attrs[COLOR_model__MClassDefSorter___mmodule].val; /* _mmodule on <self:Object(MClassDefSorter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 298);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule= for (self: MClassDefSorter, MModule) */
void model__MClassDefSorter__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDefSorter___mmodule].val = p0; /* _mmodule on <self:MClassDefSorter> */
RET_LABEL:;
}
/* method model#MClassDefSorter#mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MClassDefSorter__mmodule_61d(val* self, val* p0) {
{ /* Inline model#MClassDefSorter#mmodule= (self,p0) on <self:Object(MClassDefSorter)> */
self->attrs[COLOR_model__MClassDefSorter___mmodule].val = p0; /* _mmodule on <self:Object(MClassDefSorter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDefSorter#compare for (self: MClassDefSorter, MClassDef, MClassDef): Int */
long model__MClassDefSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: MClassDef */;
val* var_b /* var b: MClassDef */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
val* var_ca /* var ca: MClass */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var_cb /* var cb: MClass */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : POSet[MClass] */;
long var23 /* : Int */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var27 /* : Model */;
val* var29 /* : Model */;
val* var30 /* : POSet[MClassDef] */;
val* var32 /* : POSet[MClassDef] */;
long var33 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:MClassDef> isa COMPARED */
/* <p0:MClassDef> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_sorter__Comparator_VTCOMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 299);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:MClassDef> isa COMPARED */
/* <p1:MClassDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_sorter__Comparator_VTCOMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 299);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline model#MClassDef#mclass (var_a) on <var_a:MClassDef> */
var9 = var_a->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ca = var7;
{
{ /* Inline model#MClassDef#mclass (var_b) on <var_b:MClassDef> */
var12 = var_b->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_b:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_cb = var10;
{
{ /* Inline kernel#Object#!= (var_ca,var_cb) on <var_ca:MClass> */
var_other = var_cb;
{
var17 = ((short int (*)(val*, val*))(var_ca->class->vft[COLOR_kernel__Object___61d_61d]))(var_ca, var_other) /* == on <var_ca:MClass>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline model#MClassDefSorter#mmodule (self) on <self:MClassDefSorter> */
var21 = self->attrs[COLOR_model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 298);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = model__MModule__flatten_mclass_hierarchy(var19);
}
{
var23 = poset__POSet__compare(var22, var_ca, var_cb);
}
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDefSorter#mmodule (self) on <self:MClassDefSorter> */
var26 = self->attrs[COLOR_model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 298);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var24) on <var24:MModule> */
var29 = var24->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var24:MModule> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#Model#mclassdef_hierarchy (var27) on <var27:Model> */
var32 = var27->attrs[COLOR_model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var27:Model> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 40);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = poset__POSet__compare(var30, var_a, var_b);
}
var = var33;
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
/* method model#MClassDefSorter#init for (self: MClassDefSorter) */
void model__MClassDefSorter__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_model__MClassDefSorter__init]))(self) /* init on <self:MClassDefSorter>*/;
}
RET_LABEL:;
}
/* method model#MClassDefSorter#init for (self: Object) */
void VIRTUAL_model__MClassDefSorter__init(val* self) {
{ /* Inline model#MClassDefSorter#init (self) on <self:Object(MClassDefSorter)> */
{
((void (*)(val*))(self->class->vft[COLOR_model__MClassDefSorter__init]))(self) /* init on <self:Object(MClassDefSorter)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDefSorter#mmodule for (self: MPropDefSorter): MModule */
val* model__MPropDefSorter__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 311);
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
val* var3 /* : MModule */;
{ /* Inline model#MPropDefSorter#mmodule (self) on <self:Object(MPropDefSorter)> */
var3 = self->attrs[COLOR_model__MPropDefSorter___mmodule].val; /* _mmodule on <self:Object(MPropDefSorter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 311);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#mmodule= for (self: MPropDefSorter, MModule) */
void model__MPropDefSorter__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDefSorter___mmodule].val = p0; /* _mmodule on <self:MPropDefSorter> */
RET_LABEL:;
}
/* method model#MPropDefSorter#mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MPropDefSorter__mmodule_61d(val* self, val* p0) {
{ /* Inline model#MPropDefSorter#mmodule= (self,p0) on <self:Object(MPropDefSorter)> */
self->attrs[COLOR_model__MPropDefSorter___mmodule].val = p0; /* _mmodule on <self:Object(MPropDefSorter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDefSorter#compare for (self: MPropDefSorter, MPropDef, MPropDef): Int */
long model__MPropDefSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_pa /* var pa: MPropDef */;
val* var_pb /* var pb: MPropDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var_a /* var a: MClassDef */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_b /* var b: MClassDef */;
val* var13 /* : MClass */;
val* var15 /* : MClass */;
val* var_ca /* var ca: MClass */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var_cb /* var cb: MClass */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
val* var28 /* : POSet[MClass] */;
long var29 /* : Int */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var33 /* : Model */;
val* var35 /* : Model */;
val* var36 /* : POSet[MClassDef] */;
val* var38 /* : POSet[MClassDef] */;
long var39 /* : Int */;
/* Covariant cast for argument 0 (pa) <p0:MPropDef> isa COMPARED */
/* <p0:MPropDef> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_sorter__Comparator_VTCOMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 312);
show_backtrace(1);
}
/* Covariant cast for argument 1 (pb) <p1:MPropDef> isa COMPARED */
/* <p1:MPropDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_sorter__Comparator_VTCOMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 312);
show_backtrace(1);
}
var_pa = p0;
var_pb = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_pa) on <var_pa:MPropDef> */
var9 = var_pa->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_pa:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_a = var7;
{
{ /* Inline model#MPropDef#mclassdef (var_pb) on <var_pb:MPropDef> */
var12 = var_pb->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_pb:MPropDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_b = var10;
{
{ /* Inline model#MClassDef#mclass (var_a) on <var_a:MClassDef> */
var15 = var_a->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ca = var13;
{
{ /* Inline model#MClassDef#mclass (var_b) on <var_b:MClassDef> */
var18 = var_b->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_b:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_cb = var16;
{
{ /* Inline kernel#Object#!= (var_ca,var_cb) on <var_ca:MClass> */
var_other = var_cb;
{
var23 = ((short int (*)(val*, val*))(var_ca->class->vft[COLOR_kernel__Object___61d_61d]))(var_ca, var_other) /* == on <var_ca:MClass>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline model#MPropDefSorter#mmodule (self) on <self:MPropDefSorter> */
var27 = self->attrs[COLOR_model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 311);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = model__MModule__flatten_mclass_hierarchy(var25);
}
{
var29 = poset__POSet__compare(var28, var_ca, var_cb);
}
var = var29;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDefSorter#mmodule (self) on <self:MPropDefSorter> */
var32 = self->attrs[COLOR_model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 311);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var30) on <var30:MModule> */
var35 = var30->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var30:MModule> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#Model#mclassdef_hierarchy (var33) on <var33:Model> */
var38 = var33->attrs[COLOR_model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var33:Model> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 40);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = poset__POSet__compare(var36, var_a, var_b);
}
var = var39;
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
/* method model#MPropDefSorter#init for (self: MPropDefSorter) */
void model__MPropDefSorter__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_model__MPropDefSorter__init]))(self) /* init on <self:MPropDefSorter>*/;
}
RET_LABEL:;
}
/* method model#MPropDefSorter#init for (self: Object) */
void VIRTUAL_model__MPropDefSorter__init(val* self) {
{ /* Inline model#MPropDefSorter#init (self) on <self:Object(MPropDefSorter)> */
{
((void (*)(val*))(self->class->vft[COLOR_model__MPropDefSorter__init]))(self) /* init on <self:Object(MPropDefSorter)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#intro_mmodule for (self: MClass): MModule */
val* model__MClass__intro_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
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
val* var3 /* : MModule */;
{ /* Inline model#MClass#intro_mmodule (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro_mmodule= for (self: MClass, MModule) */
void model__MClass__intro_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___intro_mmodule].val = p0; /* _intro_mmodule on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#intro_mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MClass__intro_mmodule_61d(val* self, val* p0) {
{ /* Inline model#MClass#intro_mmodule= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___intro_mmodule].val = p0; /* _intro_mmodule on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#name for (self: MClass): String */
val* model__MClass__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
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
val* var3 /* : String */;
{ /* Inline model#MClass#name (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___name].val; /* _name on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#name= for (self: MClass, String) */
void model__MClass__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___name].val = p0; /* _name on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#name= for (self: Object, String) */
void VIRTUAL_model__MClass__name_61d(val* self, val* p0) {
{ /* Inline model#MClass#name= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___name].val = p0; /* _name on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#full_name for (self: MClass): String */
val* model__MClass__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var11 /* : String */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var3 = self->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = mmodule__MModule__full_name(var1);
}
if (varonce) {
var5 = varonce;
} else {
var6 = "::";
var7 = 2;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var11 = self->attrs[COLOR_model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 3;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var14)->values[2] = (val*) var9;
{
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
var = var15;
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
var1 = self->attrs[COLOR_model__MClass___arity].l; /* _arity on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity for (self: Object): Int */
long VIRTUAL_model__MClass__arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline model#MClass#arity (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___arity].l; /* _arity on <self:Object(MClass)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity= for (self: MClass, Int) */
void model__MClass__arity_61d(val* self, long p0) {
self->attrs[COLOR_model__MClass___arity].l = p0; /* _arity on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#arity= for (self: Object, Int) */
void VIRTUAL_model__MClass__arity_61d(val* self, long p0) {
{ /* Inline model#MClass#arity= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___arity].l = p0; /* _arity on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#mparameters for (self: MClass): Array[MParameterType] */
val* model__MClass__mparameters(val* self) {
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MParameterType] */;
var1 = self->attrs[COLOR_model__MClass___mparameters].val; /* _mparameters on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 367);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mparameters for (self: Object): Array[MParameterType] */
val* VIRTUAL_model__MClass__mparameters(val* self) {
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MParameterType] */;
val* var3 /* : Array[MParameterType] */;
{ /* Inline model#MClass#mparameters (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___mparameters].val; /* _mparameters on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 367);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mparameters= for (self: MClass, Array[MParameterType]) */
void model__MClass__mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___mparameters].val = p0; /* _mparameters on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#mparameters= for (self: Object, Array[MParameterType]) */
void VIRTUAL_model__MClass__mparameters_61d(val* self, val* p0) {
{ /* Inline model#MClass#mparameters= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___mparameters].val = p0; /* _mparameters on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#kind for (self: MClass): MClassKind */
val* model__MClass__kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = self->attrs[COLOR_model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
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
val* var3 /* : MClassKind */;
{ /* Inline model#MClass#kind (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___kind].val; /* _kind on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#kind= for (self: MClass, MClassKind) */
void model__MClass__kind_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___kind].val = p0; /* _kind on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#kind= for (self: Object, MClassKind) */
void VIRTUAL_model__MClass__kind_61d(val* self, val* p0) {
{ /* Inline model#MClass#kind= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___kind].val = p0; /* _kind on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#visibility for (self: MClass): MVisibility */
val* model__MClass__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
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
val* var3 /* : MVisibility */;
{ /* Inline model#MClass#visibility (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#visibility= for (self: MClass, MVisibility) */
void model__MClass__visibility_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___visibility].val = p0; /* _visibility on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#visibility= for (self: Object, MVisibility) */
void VIRTUAL_model__MClass__visibility_61d(val* self, val* p0) {
{ /* Inline model#MClass#visibility= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___visibility].val = p0; /* _visibility on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#init for (self: MClass, MModule, String, nullable Array[String], MClassKind, MVisibility) */
void model__MClass__init(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_intro_mmodule /* var intro_mmodule: MModule */;
val* var_name /* var name: String */;
val* var_parameter_names /* var parameter_names: nullable Array[String] */;
val* var_kind /* var kind: MClassKind */;
val* var_visibility /* var visibility: MVisibility */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var13 /* : Array[MClass] */;
val* var15 /* : Array[MClass] */;
val* var16 /* : Model */;
val* var18 /* : Model */;
val* var_model /* var model: Model */;
val* var19 /* : MultiHashMap[String, MClass] */;
val* var21 /* : MultiHashMap[String, MClass] */;
val* var22 /* : Array[MClass] */;
val* var24 /* : Array[MClass] */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Array[MParameterType] */;
val* var_mparametertypes /* var mparametertypes: Array[MParameterType] */;
long var41 /* : Int */;
long var_i /* var i: Int */;
long var42 /* : Int */;
long var44 /* : Int */;
long var_ /* var : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
val* var52 /* : MParameterType */;
val* var53 /* : nullable Object */;
val* var_mparametertype /* var mparametertype: MParameterType */;
long var54 /* : Int */;
long var55 /* : Int */;
val* var57 /* : MGenericType */;
val* var_mclass_type /* var mclass_type: MGenericType */;
val* var59 /* : Array[MGenericType] */;
val* var61 /* : Array[MGenericType] */;
val* var62 /* : MClassType */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MClass>*/;
}
var_intro_mmodule = p0;
var_name = p1;
var_parameter_names = p2;
var_kind = p3;
var_visibility = p4;
{
{ /* Inline model#MClass#intro_mmodule= (self,var_intro_mmodule) on <self:MClass> */
self->attrs[COLOR_model__MClass___intro_mmodule].val = var_intro_mmodule; /* _intro_mmodule on <self:MClass> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#name= (self,var_name) on <self:MClass> */
self->attrs[COLOR_model__MClass___name].val = var_name; /* _name on <self:MClass> */
RET_LABEL2:(void)0;
}
}
var = NULL;
if (var_parameter_names == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = array__Array___61d_61d(var_parameter_names, var);
var3 = var4;
}
if (var3){
var5 = 0;
{
{ /* Inline model#MClass#arity= (self,var5) on <self:MClass> */
self->attrs[COLOR_model__MClass___arity].l = var5; /* _arity on <self:MClass> */
RET_LABEL6:(void)0;
}
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_parameter_names) on <var_parameter_names:nullable Array[String](Array[String])> */
var9 = var_parameter_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_parameter_names:nullable Array[String](Array[String])> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClass#arity= (self,var7) on <self:MClass> */
self->attrs[COLOR_model__MClass___arity].l = var7; /* _arity on <self:MClass> */
RET_LABEL10:(void)0;
}
}
}
{
{ /* Inline model#MClass#kind= (self,var_kind) on <self:MClass> */
self->attrs[COLOR_model__MClass___kind].val = var_kind; /* _kind on <self:MClass> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#visibility= (self,var_visibility) on <self:MClass> */
self->attrs[COLOR_model__MClass___visibility].val = var_visibility; /* _visibility on <self:MClass> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MModule#intro_mclasses (var_intro_mmodule) on <var_intro_mmodule:MModule> */
var15 = var_intro_mmodule->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <var_intro_mmodule:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 136);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
array__Array__add(var13, self); /* Direct call array#Array#add on <var13:Array[MClass]>*/
}
{
{ /* Inline mmodule#MModule#model (var_intro_mmodule) on <var_intro_mmodule:MModule> */
var18 = var_intro_mmodule->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var_intro_mmodule:MModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_model = var16;
{
{ /* Inline model#Model#mclasses_by_name (var_model) on <var_model:Model> */
var21 = var_model->attrs[COLOR_model__Model___mclasses_by_name].val; /* _mclasses_by_name on <var_model:Model> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 66);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
more_collections__MultiHashMap__add_one(var19, var_name, self); /* Direct call more_collections#MultiHashMap#add_one on <var19:MultiHashMap[String, MClass]>*/
}
{
{ /* Inline model#Model#mclasses (var_model) on <var_model:Model> */
var24 = var_model->attrs[COLOR_model__Model___mclasses].val; /* _mclasses on <var_model:Model> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 34);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
array__Array__add(var22, self); /* Direct call array#Array#add on <var22:Array[MClass]>*/
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var27 = self->attrs[COLOR_model__MClass___arity].l; /* _arity on <self:MClass> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = 0;
{
{ /* Inline kernel#Int#> (var25,var28) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var32 = var25 > var28;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var33 = NULL;
if (var_parameter_names == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parameter_names,var33) on <var_parameter_names:nullable Array[String]> */
var_other = var33;
{
var38 = ((short int (*)(val*, val*))(var_parameter_names->class->vft[COLOR_kernel__Object___61d_61d]))(var_parameter_names, var_other) /* == on <var_parameter_names:nullable Array[String](Array[String])>*/;
var37 = var38;
}
var39 = !var37;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 397);
show_backtrace(1);
}
var40 = NEW_array__Array(&type_array__Arraymodel__MParameterType);
{
((void (*)(val*))(var40->class->vft[COLOR_kernel__Object__init]))(var40) /* init on <var40:Array[MParameterType]>*/;
}
var_mparametertypes = var40;
var41 = 0;
var_i = var41;
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var44 = self->attrs[COLOR_model__MClass___arity].l; /* _arity on <self:MClass> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_ = var42;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var47 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var51 = var_i < var_;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
var52 = NEW_model__MParameterType(&type_model__MParameterType);
{
var53 = array__Array___91d_93d(var_parameter_names, var_i);
}
{
model__MParameterType__init(var52, self, var_i, var53); /* Direct call model#MParameterType#init on <var52:MParameterType>*/
}
var_mparametertype = var52;
{
array__Array__add(var_mparametertypes, var_mparametertype); /* Direct call array#Array#add on <var_mparametertypes:Array[MParameterType]>*/
}
var54 = 1;
{
var55 = kernel__Int__successor(var_i, var54);
}
var_i = var55;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MClass#mparameters= (self,var_mparametertypes) on <self:MClass> */
self->attrs[COLOR_model__MClass___mparameters].val = var_mparametertypes; /* _mparameters on <self:MClass> */
RET_LABEL56:(void)0;
}
}
var57 = NEW_model__MGenericType(&type_model__MGenericType);
{
model__MGenericType__init(var57, self, var_mparametertypes); /* Direct call model#MGenericType#init on <var57:MGenericType>*/
}
var_mclass_type = var57;
{
{ /* Inline model#MClass#mclass_type= (self,var_mclass_type) on <self:MClass> */
self->attrs[COLOR_model__MClass___mclass_type].val = var_mclass_type; /* _mclass_type on <self:MClass> */
RET_LABEL58:(void)0;
}
}
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var61 = self->attrs[COLOR_model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 470);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
array__Array__add(var59, var_mclass_type); /* Direct call array#Array#add on <var59:Array[MGenericType]>*/
}
} else {
var62 = NEW_model__MClassType(&type_model__MClassType);
{
model__MClassType__init(var62, self); /* Direct call model#MClassType#init on <var62:MClassType>*/
}
{
{ /* Inline model#MClass#mclass_type= (self,var62) on <self:MClass> */
self->attrs[COLOR_model__MClass___mclass_type].val = var62; /* _mclass_type on <self:MClass> */
RET_LABEL63:(void)0;
}
}
}
RET_LABEL:;
}
/* method model#MClass#init for (self: Object, MModule, String, nullable Array[String], MClassKind, MVisibility) */
void VIRTUAL_model__MClass__init(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
model__MClass__init(self, p0, p1, p2, p3, p4); /* Direct call model#MClass#init on <self:Object(MClass)>*/
RET_LABEL:;
}
/* method model#MClass#model for (self: MClass): Model */
val* model__MClass__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var3 = self->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var1) on <var1:MModule> */
var6 = var1->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var1:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#model for (self: Object): Model */
val* VIRTUAL_model__MClass__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MClass__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclassdefs for (self: MClass): Array[MClassDef] */
val* model__MClass__mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
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
val* var3 /* : Array[MClassDef] */;
{ /* Inline model#MClass#mclassdefs (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#to_s for (self: MClass): String */
val* model__MClass__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var3 = self->attrs[COLOR_model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro for (self: Object): MClassDef */
val* VIRTUAL_model__MClass__intro(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline model#MClass#intro (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___intro].val; /* _intro on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro= for (self: MClass, MClassDef) */
void model__MClass__intro_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___intro].val = p0; /* _intro on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#intro= for (self: Object, MClassDef) */
void VIRTUAL_model__MClass__intro_61d(val* self, val* p0) {
{ /* Inline model#MClass#intro= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___intro].val = p0; /* _intro on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#in_hierarchy for (self: MClass, MModule): POSetElement[MClass] */
val* model__MClass__in_hierarchy(val* self, val* p0) {
val* var /* : POSetElement[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : POSet[MClass] */;
val* var2 /* : POSetElement[Object] */;
var_mmodule = p0;
{
var1 = model__MModule__flatten_mclass_hierarchy(var_mmodule);
}
{
var2 = poset__POSet___91d_93d(var1, self);
}
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
var1 = self->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
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
val* var3 /* : MClassType */;
{ /* Inline model#MClass#mclass_type (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type= for (self: MClass, MClassType) */
void model__MClass__mclass_type_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClass___mclass_type].val = p0; /* _mclass_type on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#mclass_type= for (self: Object, MClassType) */
void VIRTUAL_model__MClass__mclass_type_61d(val* self, val* p0) {
{ /* Inline model#MClass#mclass_type= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_model__MClass___mclass_type].val = p0; /* _mclass_type on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClass#get_mtype for (self: MClass, Array[MType]): MClassType */
val* model__MClass__get_mtype(val* self, val* p0) {
val* var /* : MClassType */;
val* var_mtype_arguments /* var mtype_arguments: Array[MType] */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
val* var22 /* : Array[MGenericType] */;
val* var24 /* : Array[MGenericType] */;
val* var_ /* var : Array[MGenericType] */;
val* var25 /* : ArrayIterator[nullable Object] */;
val* var_26 /* var : ArrayIterator[MGenericType] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_t /* var t: MGenericType */;
val* var29 /* : Array[MType] */;
val* var31 /* : Array[MType] */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : MGenericType */;
val* var_res /* var res: MGenericType */;
val* var36 /* : Array[MGenericType] */;
val* var38 /* : Array[MGenericType] */;
var_mtype_arguments = p0;
{
{ /* Inline array#AbstractArrayRead#length (var_mtype_arguments) on <var_mtype_arguments:Array[MType]> */
var3 = var_mtype_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_mtype_arguments:Array[MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var6 = self->attrs[COLOR_model__MClass___arity].l; /* _arity on <self:MClass> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var10 = var1 == var4;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 458);
show_backtrace(1);
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var13 = self->attrs[COLOR_model__MClass___arity].l; /* _arity on <self:MClass> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = 0;
{
{ /* Inline kernel#Int#== (var11,var14) on <var11:Int> */
var18 = var11 == var14;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline model#MClass#mclass_type (self) on <self:MClass> */
var21 = self->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var24 = self->attrs[COLOR_model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 470);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
{
var25 = array__AbstractArrayRead__iterator(var_);
}
var_26 = var25;
for(;;) {
{
var27 = array__ArrayIterator__is_ok(var_26);
}
if (var27){
{
var28 = array__ArrayIterator__item(var_26);
}
var_t = var28;
{
{ /* Inline model#MClassType#arguments (var_t) on <var_t:MGenericType> */
var31 = var_t->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_t:MGenericType> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var33 = array__Array___61d_61d(var29, var_mtype_arguments);
var32 = var33;
}
if (var32){
var = var_t;
goto RET_LABEL;
} else {
}
{
array__ArrayIterator__next(var_26); /* Direct call array#ArrayIterator#next on <var_26:ArrayIterator[MGenericType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_26) on <var_26:ArrayIterator[MGenericType]> */
RET_LABEL34:(void)0;
}
}
var35 = NEW_model__MGenericType(&type_model__MGenericType);
{
model__MGenericType__init(var35, self, var_mtype_arguments); /* Direct call model#MGenericType#init on <var35:MGenericType>*/
}
var_res = var35;
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var38 = self->attrs[COLOR_model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 470);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
array__Array__add(var36, var_res); /* Direct call array#Array#add on <var36:Array[MGenericType]>*/
}
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
var1 = self->attrs[COLOR_model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 470);
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
val* var3 /* : Array[MGenericType] */;
{ /* Inline model#MClass#get_mtype_cache (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:Object(MClass)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 470);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule for (self: MClassDef): MModule */
val* model__MClassDef__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
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
val* var3 /* : MModule */;
{ /* Inline model#MClassDef#mmodule (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule= for (self: MClassDef, MModule) */
void model__MClassDef__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___mmodule].val = p0; /* _mmodule on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mmodule= for (self: Object, MModule) */
void VIRTUAL_model__MClassDef__mmodule_61d(val* self, val* p0) {
{ /* Inline model#MClassDef#mmodule= (self,p0) on <self:Object(MClassDef)> */
self->attrs[COLOR_model__MClassDef___mmodule].val = p0; /* _mmodule on <self:Object(MClassDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDef#mclass for (self: MClassDef): MClass */
val* model__MClassDef__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
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
val* var3 /* : MClass */;
{ /* Inline model#MClassDef#mclass (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mclass= for (self: MClassDef, MClass) */
void model__MClassDef__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___mclass].val = p0; /* _mclass on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mclass= for (self: Object, MClass) */
void VIRTUAL_model__MClassDef__mclass_61d(val* self, val* p0) {
{ /* Inline model#MClassDef#mclass= (self,p0) on <self:Object(MClassDef)> */
self->attrs[COLOR_model__MClassDef___mclass].val = p0; /* _mclass on <self:Object(MClassDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDef#bound_mtype for (self: MClassDef): MClassType */
val* model__MClassDef__bound_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
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
val* var3 /* : MClassType */;
{ /* Inline model#MClassDef#bound_mtype (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#bound_mtype= for (self: MClassDef, MClassType) */
void model__MClassDef__bound_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___bound_mtype].val = p0; /* _bound_mtype on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#bound_mtype= for (self: Object, MClassType) */
void VIRTUAL_model__MClassDef__bound_mtype_61d(val* self, val* p0) {
{ /* Inline model#MClassDef#bound_mtype= (self,p0) on <self:Object(MClassDef)> */
self->attrs[COLOR_model__MClassDef___bound_mtype].val = p0; /* _bound_mtype on <self:Object(MClassDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDef#location= for (self: MClassDef, Location) */
void model__MClassDef__location_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___location].val = p0; /* _location on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#location= for (self: Object, Location) */
void VIRTUAL_model__MClassDef__location_61d(val* self, val* p0) {
{ /* Inline model#MClassDef#location= (self,p0) on <self:Object(MClassDef)> */
self->attrs[COLOR_model__MClassDef___location].val = p0; /* _location on <self:Object(MClassDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDef#to_s for (self: MClassDef): String */
val* model__MClassDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClassDef___to_s].val; /* _to_s on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 510);
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
val* var3 /* : String */;
{ /* Inline model#MClassDef#to_s (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___to_s].val; /* _to_s on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 510);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#to_s= for (self: MClassDef, String) */
void model__MClassDef__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___to_s].val = p0; /* _to_s on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#to_s= for (self: Object, String) */
void VIRTUAL_model__MClassDef__to_s_61d(val* self, val* p0) {
{ /* Inline model#MClassDef#to_s= (self,p0) on <self:Object(MClassDef)> */
self->attrs[COLOR_model__MClassDef___to_s].val = p0; /* _to_s on <self:Object(MClassDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDef#init for (self: MClassDef, MModule, MClassType, Location) */
void model__MClassDef__init(val* self, val* p0, val* p1, val* p2) {
val* var_mmodule /* var mmodule: MModule */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var_location /* var location: Location */;
val* var /* : MClass */;
val* var4 /* : MClass */;
val* var7 /* : Array[MClassDef] */;
val* var9 /* : Array[MClassDef] */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : Array[MClassDef] */;
val* var15 /* : Array[MClassDef] */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClass */;
val* var35 /* : MClass */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : MClass */;
val* var43 /* : MClass */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MClassDef>*/;
}
var_mmodule = p0;
var_bound_mtype = p1;
var_location = p2;
{
{ /* Inline model#MClassDef#bound_mtype= (self,var_bound_mtype) on <self:MClassDef> */
self->attrs[COLOR_model__MClassDef___bound_mtype].val = var_bound_mtype; /* _bound_mtype on <self:MClassDef> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule= (self,var_mmodule) on <self:MClassDef> */
self->attrs[COLOR_model__MClassDef___mmodule].val = var_mmodule; /* _mmodule on <self:MClassDef> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_bound_mtype) on <var_bound_mtype:MClassType> */
var4 = var_bound_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_bound_mtype:MClassType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass= (self,var) on <self:MClassDef> */
self->attrs[COLOR_model__MClassDef___mclass].val = var; /* _mclass on <self:MClassDef> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#location= (self,var_location) on <self:MClassDef> */
self->attrs[COLOR_model__MClassDef___location].val = var_location; /* _location on <self:MClassDef> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var9 = var_mmodule->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
array__Array__add(var7, self); /* Direct call array#Array#add on <var7:Array[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var12 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#mclassdefs (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
array__Array__add(var13, self); /* Direct call array#Array#add on <var13:Array[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var18 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var16) on <var16:MClass> */
var21 = var16->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var16:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var19,var_mmodule) on <var19:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:MModule> */
var27 = var19 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var30 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = var28->attrs[COLOR_model__MClass___intro].val != NULL; /* _intro on <var28:MClass> */
var32 = !var31;
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 523);
show_backtrace(1);
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var35 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClass#intro= (var33,self) on <var33:MClass> */
var33->attrs[COLOR_model__MClass___intro].val = self; /* _intro on <var33:MClass> */
RET_LABEL36:(void)0;
}
}
} else {
}
if (varonce) {
var37 = varonce;
} else {
var38 = "#";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var43 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var41;
{
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
}
{
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
}
{
{ /* Inline model#MClassDef#to_s= (self,var47) on <self:MClassDef> */
self->attrs[COLOR_model__MClassDef___to_s].val = var47; /* _to_s on <self:MClassDef> */
RET_LABEL48:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassDef#init for (self: Object, MModule, MClassType, Location) */
void VIRTUAL_model__MClassDef__init(val* self, val* p0, val* p1, val* p2) {
model__MClassDef__init(self, p0, p1, p2); /* Direct call model#MClassDef#init on <self:Object(MClassDef)>*/
RET_LABEL:;
}
/* method model#MClassDef#name for (self: MClassDef): String */
val* model__MClassDef__name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#name for (self: Object): String */
val* VIRTUAL_model__MClassDef__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MClassDef__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#model for (self: MClassDef): Model */
val* model__MClassDef__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var1) on <var1:MModule> */
var6 = var1->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var1:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#model for (self: Object): Model */
val* VIRTUAL_model__MClassDef__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MClassDef__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#supertypes for (self: MClassDef): Array[MClassType] */
val* model__MClassDef__supertypes(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
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
val* var3 /* : Array[MClassType] */;
{ /* Inline model#MClassDef#supertypes (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#set_supertypes for (self: MClassDef, Array[MClassType]) */
void model__MClassDef__set_supertypes(val* self, val* p0) {
val* var_supertypes /* var supertypes: Array[MClassType] */;
val* var /* : nullable POSetElement[MClassDef] */;
val* var2 /* : nullable POSetElement[MClassDef] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var13 /* : Model */;
val* var15 /* : Model */;
val* var_model /* var model: Model */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[MClassType] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var23 /* : Array[MClassType] */;
val* var25 /* : Array[MClassType] */;
val* var26 /* : POSet[MClassType] */;
val* var28 /* : POSet[MClassType] */;
short int var29 /* : Bool */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MModule */;
val* var35 /* : MModule */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
val* var43 /* : MClass */;
val* var45 /* : MClass */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : POSet[MClassType] */;
val* var57 /* : POSet[MClassType] */;
var_supertypes = p0;
{
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
if (var == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,var3) on <var:nullable POSetElement[MClassDef]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var9 = var == var_other;
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
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 544);
show_backtrace(1);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var12 = self->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mmodule = var10;
{
{ /* Inline mmodule#MModule#model (var_mmodule) on <var_mmodule:MModule> */
var15 = var_mmodule->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var_mmodule:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_model = var13;
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var18 = self->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mtype = var16;
var_ = var_supertypes;
{
var19 = array__AbstractArrayRead__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = array__ArrayIterator__is_ok(var_20);
}
if (var21){
{
var22 = array__ArrayIterator__item(var_20);
}
var_supertype = var22;
{
{ /* Inline model#MClassDef#supertypes (self) on <self:MClassDef> */
var25 = self->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
array__Array__add(var23, var_supertype); /* Direct call array#Array#add on <var23:Array[MClassType]>*/
}
{
{ /* Inline model#Model#full_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var28 = var_model->attrs[COLOR_model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 57);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
poset__POSet__add_edge(var26, var_mtype, var_supertype); /* Direct call poset#POSet#add_edge on <var26:POSet[MClassType]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var32 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var33,var_mmodule) on <var33:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:MModule> */
var41 = var33 == var_other;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
var_42 = var36;
if (var36){
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var45 = var_supertype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var43) on <var43:MClass> */
var48 = var43->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var43:MClass> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var46,var_mmodule) on <var46:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var46,var_other) on <var46:MModule> */
var54 = var46 == var_other;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
var29 = var49;
} else {
var29 = var_42;
}
if (var29){
{
{ /* Inline model#Model#intro_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var57 = var_model->attrs[COLOR_model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 46);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
poset__POSet__add_edge(var55, var_mtype, var_supertype); /* Direct call poset#POSet#add_edge on <var55:POSet[MClassType]>*/
}
} else {
}
{
array__ArrayIterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:ArrayIterator[MClassType]> */
RET_LABEL58:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassDef#set_supertypes for (self: Object, Array[MClassType]) */
void VIRTUAL_model__MClassDef__set_supertypes(val* self, val* p0) {
model__MClassDef__set_supertypes(self, p0); /* Direct call model#MClassDef#set_supertypes on <self:Object(MClassDef)>*/
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: MClassDef) */
void model__MClassDef__add_in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var2 /* : nullable POSetElement[MClassDef] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
val* var13 /* : Model */;
val* var15 /* : Model */;
val* var_model /* var model: Model */;
val* var16 /* : POSet[MClassDef] */;
val* var18 /* : POSet[MClassDef] */;
val* var19 /* : POSetElement[Object] */;
val* var_res /* var res: POSetElement[MClassDef] */;
val* var21 /* : MClassType */;
val* var23 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var27 /* : Set[MClassDef] */;
val* var_ /* var : Set[MClassDef] */;
val* var28 /* : Iterator[nullable Object] */;
val* var_29 /* var : Iterator[MClassDef] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var32 /* : POSet[Object] */;
val* var34 /* : POSet[Object] */;
{
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
if (var == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,var3) on <var:nullable POSetElement[MClassDef]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var9 = var == var_other;
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
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 569);
show_backtrace(1);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var12 = self->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var10) on <var10:MModule> */
var15 = var10->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var10:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_model = var13;
{
{ /* Inline model#Model#mclassdef_hierarchy (var_model) on <var_model:Model> */
var18 = var_model->attrs[COLOR_model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var_model:Model> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 40);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = poset__POSet__add_node(var16, self);
}
var_res = var19;
{
{ /* Inline model#MClassDef#in_hierarchy= (self,var_res) on <self:MClassDef> */
self->attrs[COLOR_model__MClassDef___in_hierarchy].val = var_res; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var23 = self->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mtype = var21;
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var26 = self->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = model__MClassType__collect_mclassdefs(var_mtype, var24);
}
var_ = var27;
{
var28 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClassDef]>*/;
}
var_29 = var28;
for(;;) {
{
var30 = ((short int (*)(val*))(var_29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_29) /* is_ok on <var_29:Iterator[MClassDef]>*/;
}
if (var30){
{
var31 = ((val* (*)(val*))(var_29->class->vft[COLOR_abstract_collection__Iterator__item]))(var_29) /* item on <var_29:Iterator[MClassDef]>*/;
}
var_mclassdef = var31;
{
{ /* Inline poset#POSetElement#poset (var_res) on <var_res:POSetElement[MClassDef]> */
var34 = var_res->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <var_res:POSetElement[MClassDef]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "../lib/poset.nit", 239);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
poset__POSet__add_edge(var32, self, var_mclassdef); /* Direct call poset#POSet#add_edge on <var32:POSet[Object](POSet[MClassDef])>*/
}
{
((void (*)(val*))(var_29->class->vft[COLOR_abstract_collection__Iterator__next]))(var_29) /* next on <var_29:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_29) on <var_29:Iterator[MClassDef]> */
RET_LABEL35:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: Object) */
void VIRTUAL_model__MClassDef__add_in_hierarchy(val* self) {
model__MClassDef__add_in_hierarchy(self); /* Direct call model#MClassDef#add_in_hierarchy on <self:Object(MClassDef)>*/
RET_LABEL:;
}
/* method model#MClassDef#in_hierarchy for (self: MClassDef): nullable POSetElement[MClassDef] */
val* model__MClassDef__in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
var1 = self->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#in_hierarchy for (self: Object): nullable POSetElement[MClassDef] */
val* VIRTUAL_model__MClassDef__in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
val* var3 /* : nullable POSetElement[MClassDef] */;
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:Object(MClassDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#in_hierarchy= for (self: MClassDef, nullable POSetElement[MClassDef]) */
void model__MClassDef__in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassDef___in_hierarchy].val = p0; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#in_hierarchy= for (self: Object, nullable POSetElement[MClassDef]) */
void VIRTUAL_model__MClassDef__in_hierarchy_61d(val* self, val* p0) {
{ /* Inline model#MClassDef#in_hierarchy= (self,p0) on <self:Object(MClassDef)> */
self->attrs[COLOR_model__MClassDef___in_hierarchy].val = p0; /* _in_hierarchy on <self:Object(MClassDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassDef#is_intro for (self: MClassDef): Bool */
short int model__MClassDef__is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___intro].val; /* _intro on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var4,self) on <var4:MClassDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MClassDef> */
var12 = var4 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var = var7;
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
var1 = self->attrs[COLOR_model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 588);
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
val* var3 /* : Array[MProperty] */;
{ /* Inline model#MClassDef#intro_mproperties (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 588);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mpropdefs for (self: MClassDef): Array[MPropDef] */
val* model__MClassDef__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 591);
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
val* var3 /* : Array[MPropDef] */;
{ /* Inline model#MClassDef#mpropdefs (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 591);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#name for (self: MType): String */
val* model__MType__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:MType>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#name for (self: Object): String */
val* VIRTUAL_model__MType__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MType__name(self);
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
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other32 /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MClass */;
val* var38 /* : MClass */;
val* var39 /* : MClassType */;
val* var41 /* : MClassType */;
short int var42 /* : Bool */;
val* var43 /* : MType */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : MClass */;
val* var61 /* : MClass */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
short int var65 /* : Bool */;
val* var66 /* : MType */;
short int var67 /* : Bool */;
short int var_sup_accept_null /* var sup_accept_null: Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
short int var71 /* : Bool */;
val* var72 /* : MType */;
val* var74 /* : MType */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : MType */;
val* var86 /* : MType */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
short int var_94 /* var : Bool */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
short int var_108 /* var : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var119 /* : MType */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : MType */;
val* var127 /* : MType */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : null */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : MClassType */;
val* var_resolved_sub /* var resolved_sub: MClassType */;
val* var156 /* : Set[MClass] */;
val* var157 /* : MClass */;
val* var159 /* : MClass */;
short int var160 /* : Bool */;
short int var_res /* var res: Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var172 /* : MClass */;
val* var174 /* : MClass */;
val* var175 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
val* var176 /* : MClass */;
val* var178 /* : MClass */;
val* var179 /* : MClass */;
val* var181 /* : MClass */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
long var188 /* : Int */;
long var_i /* var i: Int */;
val* var189 /* : MClass */;
val* var191 /* : MClass */;
long var192 /* : Int */;
long var194 /* : Int */;
long var_195 /* var : Int */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
int cltype199;
int idtype200;
const char* var_class_name;
short int var201 /* : Bool */;
val* var202 /* : Array[MType] */;
val* var204 /* : Array[MType] */;
val* var205 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var206 /* : Array[MType] */;
val* var208 /* : Array[MType] */;
val* var209 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
long var217 /* : Int */;
long var218 /* : Int */;
short int var219 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
var_sup = p2;
var_sub = self;
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType> */
var6 = var_sub == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var7 = 1;
var = var7;
goto RET_LABEL;
} else {
}
var8 = NULL;
if (var_anchor == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,var8) on <var_anchor:nullable MClassType> */
var_other = var8;
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var14 = var_anchor == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
var15 = ((short int (*)(val*))(var_sub->class->vft[COLOR_model__MType__need_anchor]))(var_sub) /* need_anchor on <var_sub:MType>*/;
}
var16 = !var15;
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 637);
show_backtrace(1);
}
{
var17 = ((short int (*)(val*))(var_sup->class->vft[COLOR_model__MType__need_anchor]))(var_sup) /* need_anchor on <var_sup:MType>*/;
}
var18 = !var17;
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 638);
show_backtrace(1);
}
} else {
var19 = NULL;
{
var20 = ((short int (*)(val*, val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__can_resolve_for]))(var_sub, var_anchor, var19, var_mmodule) /* can_resolve_for on <var_sub:MType>*/;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 640);
show_backtrace(1);
}
var21 = NULL;
{
var22 = ((short int (*)(val*, val*, val*, val*))(var_sup->class->vft[COLOR_model__MType__can_resolve_for]))(var_sup, var_anchor, var21, var_mmodule) /* can_resolve_for on <var_sup:MType>*/;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 641);
show_backtrace(1);
}
}
/* <var_sub:MType> isa MParameterType */
cltype = type_model__MParameterType.color;
idtype = type_model__MParameterType.id;
if(cltype >= var_sub->type->table_size) {
var24 = 0;
} else {
var24 = var_sub->type->type_table[cltype] == idtype;
}
var_ = var24;
if (var24){
var23 = var_;
} else {
/* <var_sub:MType> isa MVirtualType */
cltype26 = type_model__MVirtualType.color;
idtype27 = type_model__MVirtualType.id;
if(cltype26 >= var_sub->type->table_size) {
var25 = 0;
} else {
var25 = var_sub->type->type_table[cltype26] == idtype27;
}
var23 = var25;
}
if (var23){
var28 = NULL;
if (var_anchor == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var28) on <var_anchor:nullable MClassType> */
var_other32 = var28;
{
var34 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other32) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var33 = var34;
}
var35 = !var33;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 648);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_anchor) on <var_anchor:nullable MClassType(MClassType)> */
var38 = var_anchor->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType(MClassType)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var36) on <var36:MClass> */
var41 = var36->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var36:MClass> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = 0;
{
var43 = ((val* (*)(val*, val*, val*, val*, short int))(var_sub->class->vft[COLOR_model__MType__resolve_for]))(var_sub, var39, var_anchor, var_mmodule, var42) /* resolve_for on <var_sub:MType>*/;
}
var_sub = var43;
} else {
}
/* <var_sup:MType> isa MParameterType */
cltype46 = type_model__MParameterType.color;
idtype47 = type_model__MParameterType.id;
if(cltype46 >= var_sup->type->table_size) {
var45 = 0;
} else {
var45 = var_sup->type->type_table[cltype46] == idtype47;
}
var_48 = var45;
if (var45){
var44 = var_48;
} else {
/* <var_sup:MType> isa MVirtualType */
cltype50 = type_model__MVirtualType.color;
idtype51 = type_model__MVirtualType.id;
if(cltype50 >= var_sup->type->table_size) {
var49 = 0;
} else {
var49 = var_sup->type->type_table[cltype50] == idtype51;
}
var44 = var49;
}
if (var44){
var52 = NULL;
if (var_anchor == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var52) on <var_anchor:nullable MClassType> */
var_other32 = var52;
{
var57 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other32) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var56 = var57;
}
var58 = !var56;
var54 = var58;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (unlikely(!var53)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 652);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_anchor) on <var_anchor:nullable MClassType(MClassType)> */
var61 = var_anchor->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType(MClassType)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var59) on <var59:MClass> */
var64 = var59->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var59:MClass> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = 0;
{
var66 = ((val* (*)(val*, val*, val*, val*, short int))(var_sup->class->vft[COLOR_model__MType__resolve_for]))(var_sup, var62, var_anchor, var_mmodule, var65) /* resolve_for on <var_sup:MType>*/;
}
var_sup = var66;
} else {
}
var67 = 0;
var_sup_accept_null = var67;
/* <var_sup:MType> isa MNullableType */
cltype69 = type_model__MNullableType.color;
idtype70 = type_model__MNullableType.id;
if(cltype69 >= var_sup->type->table_size) {
var68 = 0;
} else {
var68 = var_sup->type->type_table[cltype69] == idtype70;
}
if (var68){
var71 = 1;
var_sup_accept_null = var71;
{
{ /* Inline model#MNullableType#mtype (var_sup) on <var_sup:MType(MNullableType)> */
var74 = var_sup->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_sup:MType(MNullableType)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_sup = var72;
} else {
/* <var_sup:MType> isa MNullType */
cltype76 = type_model__MNullType.color;
idtype77 = type_model__MNullType.id;
if(cltype76 >= var_sup->type->table_size) {
var75 = 0;
} else {
var75 = var_sup->type->type_table[cltype76] == idtype77;
}
if (var75){
var78 = 1;
var_sup_accept_null = var78;
} else {
}
}
/* <var_sub:MType> isa MNullableType */
cltype80 = type_model__MNullableType.color;
idtype81 = type_model__MNullableType.id;
if(cltype80 >= var_sub->type->table_size) {
var79 = 0;
} else {
var79 = var_sub->type->type_table[cltype80] == idtype81;
}
if (var79){
var82 = !var_sup_accept_null;
if (var82){
var83 = 0;
var = var83;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MNullableType#mtype (var_sub) on <var_sub:MType(MNullableType)> */
var86 = var_sub->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_sub = var84;
} else {
/* <var_sub:MType> isa MNullType */
cltype88 = type_model__MNullType.color;
idtype89 = type_model__MNullType.id;
if(cltype88 >= var_sub->type->table_size) {
var87 = 0;
} else {
var87 = var_sub->type->type_table[cltype88] == idtype89;
}
if (var87){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
/* <var_sup:MType> isa MParameterType */
cltype92 = type_model__MParameterType.color;
idtype93 = type_model__MParameterType.id;
if(cltype92 >= var_sup->type->table_size) {
var91 = 0;
} else {
var91 = var_sup->type->type_table[cltype92] == idtype93;
}
var_94 = var91;
if (var91){
var90 = var_94;
} else {
/* <var_sup:MType> isa MVirtualType */
cltype96 = type_model__MVirtualType.color;
idtype97 = type_model__MVirtualType.id;
if(cltype96 >= var_sup->type->table_size) {
var95 = 0;
} else {
var95 = var_sup->type->type_table[cltype96] == idtype97;
}
var90 = var95;
}
if (var90){
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType> */
var103 = var_sub == var_other;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var98 = var99;
}
var = var98;
goto RET_LABEL;
} else {
}
/* <var_sub:MType> isa MParameterType */
cltype106 = type_model__MParameterType.color;
idtype107 = type_model__MParameterType.id;
if(cltype106 >= var_sub->type->table_size) {
var105 = 0;
} else {
var105 = var_sub->type->type_table[cltype106] == idtype107;
}
var_108 = var105;
if (var105){
var104 = var_108;
} else {
/* <var_sub:MType> isa MVirtualType */
cltype110 = type_model__MVirtualType.color;
idtype111 = type_model__MVirtualType.id;
if(cltype110 >= var_sub->type->table_size) {
var109 = 0;
} else {
var109 = var_sub->type->type_table[cltype110] == idtype111;
}
var104 = var109;
}
if (var104){
var112 = NULL;
if (var_anchor == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var112) on <var_anchor:nullable MClassType> */
var_other32 = var112;
{
var117 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other32) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var116 = var117;
}
var118 = !var116;
var114 = var118;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (unlikely(!var113)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 684);
show_backtrace(1);
}
{
var119 = ((val* (*)(val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__anchor_to]))(var_sub, var_mmodule, var_anchor) /* anchor_to on <var_sub:MType>*/;
}
var_sub = var119;
/* <var_sub:MType> isa MNullableType */
cltype121 = type_model__MNullableType.color;
idtype122 = type_model__MNullableType.id;
if(cltype121 >= var_sub->type->table_size) {
var120 = 0;
} else {
var120 = var_sub->type->type_table[cltype121] == idtype122;
}
if (var120){
var123 = !var_sup_accept_null;
if (var123){
var124 = 0;
var = var124;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MNullableType#mtype (var_sub) on <var_sub:MType(MNullableType)> */
var127 = var_sub->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_sub = var125;
} else {
/* <var_sub:MType> isa MNullType */
cltype129 = type_model__MNullType.color;
idtype130 = type_model__MNullType.id;
if(cltype129 >= var_sub->type->table_size) {
var128 = 0;
} else {
var128 = var_sub->type->type_table[cltype129] == idtype130;
}
if (var128){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_sub:MType> isa MClassType */
cltype132 = type_model__MClassType.color;
idtype133 = type_model__MClassType.id;
if(cltype132 >= var_sub->type->table_size) {
var131 = 0;
} else {
var131 = var_sub->type->type_table[cltype132] == idtype133;
}
if (unlikely(!var131)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 696);
show_backtrace(1);
}
/* <var_sup:MType> isa MNullType */
cltype135 = type_model__MNullType.color;
idtype136 = type_model__MNullType.id;
if(cltype135 >= var_sup->type->table_size) {
var134 = 0;
} else {
var134 = var_sup->type->type_table[cltype135] == idtype136;
}
if (var134){
var137 = 0;
var = var137;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MClassType */
cltype139 = type_model__MClassType.color;
idtype140 = type_model__MClassType.id;
if(cltype139 >= var_sup->type->table_size) {
var138 = 0;
} else {
var138 = var_sup->type->type_table[cltype139] == idtype140;
}
if (unlikely(!var138)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 703);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType(MClassType)> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType(MClassType)> */
var146 = var_sub == var_other;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
var147 = 1;
var = var147;
goto RET_LABEL;
} else {
}
var148 = NULL;
if (var_anchor == NULL) {
var149 = 1; /* is null */
} else {
var149 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,var148) on <var_anchor:nullable MClassType> */
var_other = var148;
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var154 = var_anchor == var_other;
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (var149){
var_anchor = var_sub;
} else {
}
{
var155 = model__MClassType__anchor_to(var_sub, var_mmodule, var_anchor);
}
var_resolved_sub = var155;
{
var156 = model__MClassType__collect_mclasses(var_resolved_sub, var_mmodule);
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MClassType)> */
var159 = var_sup->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MClassType)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = ((short int (*)(val*, val*))(var156->class->vft[COLOR_abstract_collection__Collection__has]))(var156, var157) /* has on <var156:Set[MClass]>*/;
}
var_res = var160;
var161 = 0;
{
{ /* Inline kernel#Bool#== (var_res,var161) on <var_res:Bool> */
var165 = var_res == var161;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (var162){
var166 = 0;
var = var166;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype168 = type_model__MGenericType.color;
idtype169 = type_model__MGenericType.id;
if(cltype168 >= var_sup->type->table_size) {
var167 = 0;
} else {
var167 = var_sup->type->type_table[cltype168] == idtype169;
}
var170 = !var167;
if (var170){
var171 = 1;
var = var171;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var174 = var_sup->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = model__MType__supertype_to(var_sub, var_mmodule, var_anchor, var172);
}
var_sub2 = var175;
{
{ /* Inline model#MClassType#mclass (var_sub2) on <var_sub2:MClassType> */
var178 = var_sub2->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_sub2:MClassType> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var181 = var_sup->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var176,var179) on <var176:MClass> */
var_other = var179;
{
{ /* Inline kernel#Object#is_same_instance (var176,var_other) on <var176:MClass> */
var187 = var176 == var_other;
var185 = var187;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (unlikely(!var182)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 715);
show_backtrace(1);
}
var188 = 0;
var_i = var188;
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var191 = var_sup->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline model#MClass#arity (var189) on <var189:MClass> */
var194 = var189->attrs[COLOR_model__MClass___arity].l; /* _arity on <var189:MClass> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
var_195 = var192;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_195) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_195:Int> isa OTHER */
/* <var_195:Int> isa OTHER */
var198 = 1; /* easy <var_195:Int> isa OTHER*/
if (unlikely(!var198)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var201 = var_i < var_195;
var196 = var201;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
if (var196){
{
{ /* Inline model#MClassType#arguments (var_sub2) on <var_sub2:MClassType> */
var204 = var_sub2->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_sub2:MClassType> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = array__Array___91d_93d(var202, var_i);
}
var_sub_arg = var205;
{
{ /* Inline model#MClassType#arguments (var_sup) on <var_sup:MType(MGenericType)> */
var208 = var_sup->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_sup:MType(MGenericType)> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
{
var209 = array__Array___91d_93d(var206, var_i);
}
var_sup_arg = var209;
{
var210 = model__MType__is_subtype(var_sub_arg, var_mmodule, var_anchor, var_sup_arg);
}
var_res = var210;
var211 = 0;
{
{ /* Inline kernel#Bool#== (var_res,var211) on <var_res:Bool> */
var215 = var_res == var211;
var213 = var215;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
var212 = var213;
}
if (var212){
var216 = 0;
var = var216;
goto RET_LABEL;
} else {
}
var217 = 1;
{
var218 = kernel__Int__successor(var_i, var217);
}
var_i = var218;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var219 = 1;
var = var219;
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
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
}
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
{
var3 = ((short int (*)(val*))(var_anchor->class->vft[COLOR_model__MType__need_anchor]))(var_anchor) /* need_anchor on <var_anchor:MClassType>*/;
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 760);
show_backtrace(1);
}
var5 = NULL;
var6 = 1;
{
var7 = ((val* (*)(val*, val*, val*, val*, short int))(self->class->vft[COLOR_model__MType__resolve_for]))(self, var_anchor, var5, var_mmodule, var6) /* resolve_for on <self:MType>*/;
}
var_res = var7;
{
var8 = ((short int (*)(val*))(var_res->class->vft[COLOR_model__MType__need_anchor]))(var_res) /* need_anchor on <var_res:MType>*/;
}
var9 = !var8;
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 763);
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
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MType */;
val* var_resolved_self /* var resolved_self: nullable Object */;
val* var33 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_34 /* var : Set[MClassType] */;
val* var35 /* : Iterator[nullable Object] */;
val* var_36 /* var : Iterator[MClassType] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MType */;
var_mmodule = p0;
var_anchor = p1;
var_super_mclass = p2;
{
{ /* Inline model#MClass#arity (var_super_mclass) on <var_super_mclass:MClass> */
var3 = var_super_mclass->attrs[COLOR_model__MClass___arity].l; /* _arity on <var_super_mclass:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 0;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var8 = var1 == var4;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline model#MClass#mclass_type (var_super_mclass) on <var_super_mclass:MClass> */
var11 = var_super_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_super_mclass:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
}
/* <self:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= self->type->table_size) {
var13 = 0;
} else {
var13 = self->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
{ /* Inline model#MClassType#mclass (self) on <self:MType(MClassType)> */
var16 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MType(MClassType)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var14,var_super_mclass) on <var14:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var14,var_other) on <var14:MClass> */
var22 = var14 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
var12 = var17;
} else {
var12 = var_;
}
if (var12){
var = self;
goto RET_LABEL;
} else {
}
{
var23 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
}
if (var23){
var24 = NULL;
if (var_anchor == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var24) on <var_anchor:nullable MClassType> */
var_other28 = var24;
{
var30 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other28) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var29 = var30;
}
var31 = !var29;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 789);
show_backtrace(1);
}
{
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MType__anchor_to]))(self, var_mmodule, var_anchor) /* anchor_to on <self:MType>*/;
}
var_resolved_self = var32;
} else {
var_resolved_self = self;
}
{
var33 = ((val* (*)(val*, val*))(var_resolved_self->class->vft[COLOR_model__MType__collect_mtypes]))(var_resolved_self, var_mmodule) /* collect_mtypes on <var_resolved_self:nullable Object(MType)>*/;
}
var_supertypes = var33;
var_34 = var_supertypes;
{
var35 = ((val* (*)(val*))(var_34->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_34) /* iterator on <var_34:Set[MClassType]>*/;
}
var_36 = var35;
for(;;) {
{
var37 = ((short int (*)(val*))(var_36->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_36) /* is_ok on <var_36:Iterator[MClassType]>*/;
}
if (var37){
{
var38 = ((val* (*)(val*))(var_36->class->vft[COLOR_abstract_collection__Iterator__item]))(var_36) /* item on <var_36:Iterator[MClassType]>*/;
}
var_supertype = var38;
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var41 = var_supertype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
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
{ /* Inline kernel#Object#== (var39,var_super_mclass) on <var39:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var39,var_other) on <var39:MClass> */
var47 = var39 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
var48 = 0;
{
var49 = ((val* (*)(val*, val*, val*, val*, short int))(var_supertype->class->vft[COLOR_model__MType__resolve_for]))(var_supertype, self, var_anchor, var_mmodule, var48) /* resolve_for on <var_supertype:MClassType>*/;
}
var = var49;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_36->class->vft[COLOR_abstract_collection__Iterator__next]))(var_36) /* next on <var_36:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_36) on <var_36:Iterator[MClassType]> */
RET_LABEL50:(void)0;
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 801);
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
/* method model#MType#can_resolve_for for (self: MType, MType, nullable MClassType, MModule): Bool */
short int model__MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "can_resolve_for", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 874);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
const char* var_class_name;
{ /* Inline model#MType#can_resolve_for (self,p0,p1,p2) on <self:Object(MType)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "can_resolve_for", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 874);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable for (self: MType): MType */
val* model__MType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MNullableType */;
{
{ /* Inline model#MType#as_nullable_cache (self) on <self:MType> */
var3 = self->attrs[COLOR_model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable MType> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MType(MType)>*/;
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
var = var_res;
goto RET_LABEL;
} else {
}
var11 = NEW_model__MNullableType(&type_model__MNullableType);
{
model__MNullableType__init(var11, self); /* Direct call model#MNullableType#init on <var11:MNullableType>*/
}
var_res = var11;
{
{ /* Inline model#MType#as_nullable_cache= (self,var_res) on <self:MType> */
self->attrs[COLOR_model__MType___as_nullable_cache].val = var_res; /* _as_nullable_cache on <self:MType> */
RET_LABEL12:(void)0;
}
}
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
/* method model#MType#as_notnullable for (self: MType): MType */
val* model__MType__as_notnullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_notnullable for (self: Object): MType */
val* VIRTUAL_model__MType__as_notnullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MType__as_notnullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache for (self: MType): nullable MType */
val* model__MType__as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache for (self: Object): nullable MType */
val* VIRTUAL_model__MType__as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MType#as_nullable_cache (self) on <self:Object(MType)> */
var3 = self->attrs[COLOR_model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:Object(MType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache= for (self: MType, nullable MType) */
void model__MType__as_nullable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_model__MType___as_nullable_cache].val = p0; /* _as_nullable_cache on <self:MType> */
RET_LABEL:;
}
/* method model#MType#as_nullable_cache= for (self: Object, nullable MType) */
void VIRTUAL_model__MType__as_nullable_cache_61d(val* self, val* p0) {
{ /* Inline model#MType#as_nullable_cache= (self,p0) on <self:Object(MType)> */
self->attrs[COLOR_model__MType___as_nullable_cache].val = p0; /* _as_nullable_cache on <self:Object(MType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclassdefs", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 946);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
const char* var_class_name;
{ /* Inline model#MType#collect_mclassdefs (self,p0) on <self:Object(MType)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclassdefs", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 946);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: MType, MModule): Set[MClass] */
val* model__MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 956);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
const char* var_class_name;
{ /* Inline model#MType#collect_mclasses (self,p0) on <self:Object(MType)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 956);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: MType, MModule): Set[MClassType] */
val* model__MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 962);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
const char* var_class_name;
{ /* Inline model#MType#collect_mtypes (self,p0) on <self:Object(MType)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 962);
show_backtrace(1);
RET_LABEL2:(void)0;
}
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
val* var6 /* : MClassDef */;
short int var7 /* : Bool */;
var_mmodule = p0;
var_mproperty = p1;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 975);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_model__MType__collect_mclassdefs]))(self, var_mmodule) /* collect_mclassdefs on <self:MType>*/;
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:MProperty> */
var6 = var_mproperty->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var4) /* has on <var3:Set[MClassDef]>*/;
}
var = var7;
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
/* method model#MClassType#mclass for (self: MClassType): MClass */
val* model__MClassType__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
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
val* var3 /* : MClass */;
{ /* Inline model#MClassType#mclass (self) on <self:Object(MClassType)> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:Object(MClassType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass= for (self: MClassType, MClass) */
void model__MClassType__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___mclass].val = p0; /* _mclass on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#mclass= for (self: Object, MClass) */
void VIRTUAL_model__MClassType__mclass_61d(val* self, val* p0) {
{ /* Inline model#MClassType#mclass= (self,p0) on <self:Object(MClassType)> */
self->attrs[COLOR_model__MClassType___mclass].val = p0; /* _mclass on <self:Object(MClassType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassType#model for (self: MClassType): Model */
val* model__MClassType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var = var7;
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
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MClassType>*/;
}
var_mclass = p0;
{
{ /* Inline model#MClassType#mclass= (self,var_mclass) on <self:MClassType> */
self->attrs[COLOR_model__MClassType___mclass].val = var_mclass; /* _mclass on <self:MClassType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassType#init for (self: Object, MClass) */
void VIRTUAL_model__MClassType__init(val* self, val* p0) {
model__MClassType__init(self, p0); /* Direct call model#MClassType#init on <self:Object(MClassType)>*/
RET_LABEL:;
}
/* method model#MClassType#arguments for (self: MClassType): Array[MType] */
val* model__MClassType__arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
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
val* var3 /* : Array[MType] */;
{ /* Inline model#MClassType#arguments (self) on <self:Object(MClassType)> */
var3 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:Object(MClassType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#arguments= for (self: MClassType, Array[MType]) */
void model__MClassType__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassType___arguments].val = p0; /* _arguments on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#arguments= for (self: Object, Array[MType]) */
void VIRTUAL_model__MClassType__arguments_61d(val* self, val* p0) {
{ /* Inline model#MClassType#arguments= (self,p0) on <self:Object(MClassType)> */
self->attrs[COLOR_model__MClassType___arguments].val = p0; /* _arguments on <self:Object(MClassType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassType#to_s for (self: MClassType): String */
val* model__MClassType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MClass__to_s(var1);
}
var = var4;
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
{
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MClassType__anchor_to]))(self, p0, p1) /* anchor_to on <self:MClassType>*/;
}
/* <var1:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1006);
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
val* var5 /* : HashMap[MModule, Set[MClassDef]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClassDef]] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1015);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#collect_mclassdefs_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1073);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = abstract_collection__MapRead__has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
model__MClassType__collect_things(self, var_mmodule); /* Direct call model#MClassType#collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = hash_collection__HashMap___91d_93d(var_cache, var_mmodule);
}
var = var8;
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
val* var5 /* : HashMap[MModule, Set[MClass]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClass]] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1025);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1074);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = abstract_collection__MapRead__has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
model__MClassType__collect_things(self, var_mmodule); /* Direct call model#MClassType#collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = hash_collection__HashMap___91d_93d(var_cache, var_mmodule);
}
var = var8;
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
val* var5 /* : HashMap[MModule, Set[MClassType]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClassType]] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
var_mmodule = p0;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1035);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1075);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = abstract_collection__MapRead__has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
model__MClassType__collect_things(self, var_mmodule); /* Direct call model#MClassType#collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = hash_collection__HashMap___91d_93d(var_cache, var_mmodule);
}
var = var8;
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
val* var5 /* : MClass */;
val* var6 /* : Array[MClass] */;
long var7 /* : Int */;
val* var_ /* var : Array[MClass] */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
val* var_todo /* var todo: Array[MClass] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var14 /* : Array[MClassDef] */;
val* var16 /* : Array[MClassDef] */;
val* var_17 /* var : Array[MClassDef] */;
val* var18 /* : ArrayIterator[nullable Object] */;
val* var_19 /* var : ArrayIterator[MClassDef] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var22 /* : POSetElement[MModule] */;
val* var24 /* : POSetElement[MModule] */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Array[MClassType] */;
val* var32 /* : Array[MClassType] */;
val* var_33 /* var : Array[MClassType] */;
val* var34 /* : ArrayIterator[nullable Object] */;
val* var_35 /* var : ArrayIterator[MClassType] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var38 /* : MClass */;
val* var40 /* : MClass */;
val* var_superclass /* var superclass: MClass */;
short int var41 /* : Bool */;
val* var48 /* : HashMap[MModule, Set[MClassDef]] */;
val* var50 /* : HashMap[MModule, Set[MClassDef]] */;
val* var51 /* : HashMap[MModule, Set[MClass]] */;
val* var53 /* : HashMap[MModule, Set[MClass]] */;
val* var54 /* : HashMap[MModule, Set[MClassType]] */;
val* var56 /* : HashMap[MModule, Set[MClassType]] */;
var_mmodule = p0;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassDef);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashSet[MClassDef]>*/;
}
var_res = var;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[MClass]>*/;
}
var_seen = var1;
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashSet[MClassType]>*/;
}
var_types = var2;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var5 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
hash_collection__HashSet__add(var_seen, var3); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[MClass]>*/
}
var6 = NEW_array__Array(&type_array__Arraymodel__MClass);
var7 = 1;
{
array__Array__with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[MClass]>*/
}
var_ = var6;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var10 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
array__AbstractArray__push(var_, var8); /* Direct call array#AbstractArray#push on <var_:Array[MClass]>*/
}
var_todo = var_;
for(;;) {
{
var11 = array__AbstractArrayRead__is_empty(var_todo);
}
var12 = !var11;
if (var12){
{
var13 = array__AbstractArray__pop(var_todo);
}
var_mclass = var13;
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var16 = var_mclass->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_17 = var14;
{
var18 = array__AbstractArrayRead__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = array__ArrayIterator__is_ok(var_19);
}
if (var20){
{
var21 = array__ArrayIterator__item(var_19);
}
var_mclassdef = var21;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var27 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = poset__POSetElement___60d_61d(var22, var25);
}
var29 = !var28;
if (var29){
goto BREAK_label;
} else {
}
{
hash_collection__HashSet__add(var_res, var_mclassdef); /* Direct call hash_collection#HashSet#add on <var_res:HashSet[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_33 = var30;
{
var34 = array__AbstractArrayRead__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = array__ArrayIterator__is_ok(var_35);
}
if (var36){
{
var37 = array__ArrayIterator__item(var_35);
}
var_supertype = var37;
{
hash_collection__HashSet__add(var_types, var_supertype); /* Direct call hash_collection#HashSet#add on <var_types:HashSet[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var40 = var_supertype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_superclass = var38;
{
var41 = hash_collection__HashSet__has(var_seen, var_superclass);
}
if (var41){
goto BREAK_label42;
} else {
}
{
hash_collection__HashSet__add(var_seen, var_superclass); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[MClass]>*/
}
{
array__Array__add(var_todo, var_superclass); /* Direct call array#Array#add on <var_todo:Array[MClass]>*/
}
BREAK_label42: (void)0;
{
array__ArrayIterator__next(var_35); /* Direct call array#ArrayIterator#next on <var_35:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_35) on <var_35:ArrayIterator[MClassType]> */
RET_LABEL44:(void)0;
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_19); /* Direct call array#ArrayIterator#next on <var_19:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label45;
}
}
BREAK_label45: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:ArrayIterator[MClassDef]> */
RET_LABEL46:(void)0;
}
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
{ /* Inline model#MClassType#collect_mclassdefs_cache (self) on <self:MClassType> */
var50 = self->attrs[COLOR_model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1073);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var48, var_mmodule, var_res); /* Direct call hash_collection#HashMap#[]= on <var48:HashMap[MModule, Set[MClassDef]]>*/
}
{
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:MClassType> */
var53 = self->attrs[COLOR_model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1074);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var51, var_mmodule, var_seen); /* Direct call hash_collection#HashMap#[]= on <var51:HashMap[MModule, Set[MClass]]>*/
}
{
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:MClassType> */
var56 = self->attrs[COLOR_model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1075);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var54, var_mmodule, var_types); /* Direct call hash_collection#HashMap#[]= on <var54:HashMap[MModule, Set[MClassType]]>*/
}
RET_LABEL:;
}
/* method model#MClassType#collect_things for (self: Object, MModule) */
void VIRTUAL_model__MClassType__collect_things(val* self, val* p0) {
model__MClassType__collect_things(self, p0); /* Direct call model#MClassType#collect_things on <self:Object(MClassType)>*/
RET_LABEL:;
}
/* method model#MClassType#collect_mclassdefs_cache for (self: MClassType): HashMap[MModule, Set[MClassDef]] */
val* model__MClassType__collect_mclassdefs_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassDef]] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
var1 = self->attrs[COLOR_model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1073);
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
val* var3 /* : HashMap[MModule, Set[MClassDef]] */;
{ /* Inline model#MClassType#collect_mclassdefs_cache (self) on <self:Object(MClassType)> */
var3 = self->attrs[COLOR_model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:Object(MClassType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1073);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_cache for (self: MClassType): HashMap[MModule, Set[MClass]] */
val* model__MClassType__collect_mclasses_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClass]] */;
val* var1 /* : HashMap[MModule, Set[MClass]] */;
var1 = self->attrs[COLOR_model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1074);
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
val* var3 /* : HashMap[MModule, Set[MClass]] */;
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:Object(MClassType)> */
var3 = self->attrs[COLOR_model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:Object(MClassType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1074);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes_cache for (self: MClassType): HashMap[MModule, Set[MClassType]] */
val* model__MClassType__collect_mtypes_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassType]] */;
val* var1 /* : HashMap[MModule, Set[MClassType]] */;
var1 = self->attrs[COLOR_model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1075);
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
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:Object(MClassType)> */
var3 = self->attrs[COLOR_model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:Object(MClassType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1075);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#init for (self: MGenericType, MClass, Array[MType]) */
void model__MGenericType__init(val* self, val* p0, val* p1) {
val* var_mclass /* var mclass: MClass */;
val* var_arguments /* var arguments: Array[MType] */;
val* var /* : MClass */;
val* var2 /* : MClass */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var_ /* var : Array[MType] */;
val* var16 /* : ArrayIterator[nullable Object] */;
val* var_17 /* var : ArrayIterator[MType] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
var_mclass = p0;
var_arguments = p1;
{
model__MClassType__init(self, var_mclass); /* Direct call model#MClassType#init on <self:MGenericType>*/
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var2 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
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
{ /* Inline model#MClass#arity (var) on <var:MClass> */
var5 = var->attrs[COLOR_model__MClass___arity].l; /* _arity on <var:MClass> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[MType]> */
var8 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[MType]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var3,var6) on <var3:Int> */
var12 = var3 == var6;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1087);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#arguments= (self,var_arguments) on <self:MGenericType> */
self->attrs[COLOR_model__MClassType___arguments].val = var_arguments; /* _arguments on <self:MGenericType> */
RET_LABEL13:(void)0;
}
}
var14 = 0;
{
{ /* Inline model#MGenericType#need_anchor= (self,var14) on <self:MGenericType> */
self->attrs[COLOR_model__MGenericType___need_anchor].s = var14; /* _need_anchor on <self:MGenericType> */
RET_LABEL15:(void)0;
}
}
var_ = var_arguments;
{
var16 = array__AbstractArrayRead__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = array__ArrayIterator__is_ok(var_17);
}
if (var18){
{
var19 = array__ArrayIterator__item(var_17);
}
var_t = var19;
{
var20 = ((short int (*)(val*))(var_t->class->vft[COLOR_model__MType__need_anchor]))(var_t) /* need_anchor on <var_t:MType>*/;
}
if (var20){
var21 = 1;
{
{ /* Inline model#MGenericType#need_anchor= (self,var21) on <self:MGenericType> */
self->attrs[COLOR_model__MGenericType___need_anchor].s = var21; /* _need_anchor on <self:MGenericType> */
RET_LABEL22:(void)0;
}
}
goto BREAK_label;
} else {
}
{
array__ArrayIterator__next(var_17); /* Direct call array#ArrayIterator#next on <var_17:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_17) on <var_17:ArrayIterator[MType]> */
RET_LABEL23:(void)0;
}
}
if (varonce) {
var24 = varonce;
} else {
var25 = "[";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = ", ";
var31 = 2;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
var33 = string__Collection__join(var_arguments, var29);
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "]";
var37 = 1;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 4;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var_mclass;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var24;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var41)->values[3] = (val*) var35;
{
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
{
{ /* Inline model#MGenericType#to_s= (self,var42) on <self:MGenericType> */
self->attrs[COLOR_model__MGenericType___to_s].val = var42; /* _to_s on <self:MGenericType> */
RET_LABEL43:(void)0;
}
}
RET_LABEL:;
}
/* method model#MGenericType#init for (self: Object, MClass, Array[MType]) */
void VIRTUAL_model__MGenericType__init(val* self, val* p0, val* p1) {
model__MGenericType__init(self, p0, p1); /* Direct call model#MGenericType#init on <self:Object(MGenericType)>*/
RET_LABEL:;
}
/* method model#MGenericType#to_s for (self: MGenericType): String */
val* model__MGenericType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MGenericType___to_s].val; /* _to_s on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1101);
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
val* var3 /* : String */;
{ /* Inline model#MGenericType#to_s (self) on <self:Object(MGenericType)> */
var3 = self->attrs[COLOR_model__MGenericType___to_s].val; /* _to_s on <self:Object(MGenericType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1101);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#to_s= for (self: MGenericType, String) */
void model__MGenericType__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MGenericType___to_s].val = p0; /* _to_s on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#to_s= for (self: Object, String) */
void VIRTUAL_model__MGenericType__to_s_61d(val* self, val* p0) {
{ /* Inline model#MGenericType#to_s= (self,p0) on <self:Object(MGenericType)> */
self->attrs[COLOR_model__MGenericType___to_s].val = p0; /* _to_s on <self:Object(MGenericType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MGenericType#need_anchor for (self: MGenericType): Bool */
short int model__MGenericType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MGenericType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MGenericType#need_anchor (self) on <self:Object(MGenericType)> */
var3 = self->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <self:Object(MGenericType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor= for (self: MGenericType, Bool) */
void model__MGenericType__need_anchor_61d(val* self, short int p0) {
self->attrs[COLOR_model__MGenericType___need_anchor].s = p0; /* _need_anchor on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#need_anchor= for (self: Object, Bool) */
void VIRTUAL_model__MGenericType__need_anchor_61d(val* self, short int p0) {
{ /* Inline model#MGenericType#need_anchor= (self,p0) on <self:Object(MGenericType)> */
self->attrs[COLOR_model__MGenericType___need_anchor].s = p0; /* _need_anchor on <self:Object(MGenericType)> */
RET_LABEL1:(void)0;
}
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[MType] */;
val* var_types /* var types: Array[MType] */;
val* var7 /* : Array[MType] */;
val* var9 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MType] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var14 /* : MType */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : MClassType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
{ /* Inline model#MGenericType#need_anchor (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
var5 = model__MGenericType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1110);
show_backtrace(1);
}
var6 = NEW_array__Array(&type_array__Arraymodel__MType);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[MType]>*/;
}
var_types = var6;
{
{ /* Inline model#MClassType#arguments (self) on <self:MGenericType> */
var9 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ = var7;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_t = var13;
{
var14 = ((val* (*)(val*, val*, val*, val*, short int))(var_t->class->vft[COLOR_model__MType__resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_t:MType>*/;
}
{
array__Array__add(var_types, var14); /* Direct call array#Array#add on <var_types:Array[MType]>*/
}
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[MType]> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var18 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = model__MClass__get_mtype(var16, var_types);
}
var = var19;
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[MType] */;
val* var8 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var9 /* : ArrayIterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
{ /* Inline model#MGenericType#need_anchor (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#arguments (self) on <self:MGenericType> */
var8 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = array__AbstractArrayRead__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var_10);
}
if (var11){
{
var12 = array__ArrayIterator__item(var_10);
}
var_t = var12;
{
var13 = ((short int (*)(val*, val*, val*, val*))(var_t->class->vft[COLOR_model__MType__can_resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var_t:MType>*/;
}
var14 = !var13;
if (var14){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
array__ArrayIterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:ArrayIterator[MType]> */
RET_LABEL16:(void)0;
}
}
var17 = 1;
var = var17;
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
/* method model#MGenericType#length for (self: MGenericType): Int */
long model__MGenericType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : Array[MType] */;
val* var4 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MType] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_a /* var a: MType */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
var1 = 1;
var_res = var1;
{
{ /* Inline model#MClassType#arguments (self) on <self:MGenericType> */
var4 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = array__AbstractArrayRead__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = array__ArrayIterator__is_ok(var_6);
}
if (var7){
{
var8 = array__ArrayIterator__item(var_6);
}
var_a = var8;
{
var9 = ((long (*)(val*))(var_a->class->vft[COLOR_model__MType__length]))(var_a) /* length on <var_a:MType>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var9) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var13 = var_res + var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_res = var10;
{
array__ArrayIterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:ArrayIterator[MType]> */
RET_LABEL14:(void)0;
}
}
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
var1 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
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
val* var3 /* : MProperty */;
{ /* Inline model#MVirtualType#mproperty (self) on <self:Object(MVirtualType)> */
var3 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:Object(MVirtualType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#mproperty= for (self: MVirtualType, MProperty) */
void model__MVirtualType__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_model__MVirtualType___mproperty].val = p0; /* _mproperty on <self:MVirtualType> */
RET_LABEL:;
}
/* method model#MVirtualType#mproperty= for (self: Object, MProperty) */
void VIRTUAL_model__MVirtualType__mproperty_61d(val* self, val* p0) {
{ /* Inline model#MVirtualType#mproperty= (self,p0) on <self:Object(MVirtualType)> */
self->attrs[COLOR_model__MVirtualType___mproperty].val = p0; /* _mproperty on <self:Object(MVirtualType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MVirtualType#model for (self: MVirtualType): Model */
val* model__MVirtualType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Model */;
val* var12 /* : Model */;
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var7) on <var7:MModule> */
var12 = var7->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var7:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
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
val* var5 /* : MProperty */;
val* var6 /* : Array[MPropDef] */;
val* var_props /* var props: Array[MPropDef] */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var18 /* : nullable MType */;
val* var20 /* : nullable MType */;
val* var21 /* : ArraySet[MType] */;
val* var_types /* var types: ArraySet[MType] */;
val* var_ /* var : Array[MPropDef] */;
val* var22 /* : ArrayIterator[nullable Object] */;
val* var_23 /* var : ArrayIterator[MPropDef] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_p /* var p: MPropDef */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable MType */;
val* var32 /* : nullable MType */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Object */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1166);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var5 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = model__MProperty__lookup_definitions(var3, var_mmodule, var_resolved_receiver);
}
var_props = var6;
{
var7 = array__AbstractArrayRead__is_empty(var_props);
}
if (var7){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1169);
show_backtrace(1);
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_props) on <var_props:Array[MPropDef]> */
var10 = var_props->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_props:Array[MPropDef]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 1;
{
{ /* Inline kernel#Int#== (var8,var11) on <var8:Int> */
var15 = var8 == var11;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
var16 = abstract_collection__SequenceRead__first(var_props);
}
/* <var16:nullable Object(MPropDef)> isa MVirtualTypeDef */
cltype = type_model__MVirtualTypeDef.color;
idtype = type_model__MVirtualTypeDef.id;
if(cltype >= var16->type->table_size) {
var17 = 0;
} else {
var17 = var16->type->type_table[cltype] == idtype;
}
if (unlikely(!var17)) {
var_class_name = var16 == NULL ? "null" : var16->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1171);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var16) on <var16:MPropDef(MVirtualTypeDef)> */
var20 = var16->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var16:MPropDef(MVirtualTypeDef)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1171);
show_backtrace(1);
}
var = var18;
goto RET_LABEL;
} else {
}
}
var21 = NEW_array__ArraySet(&type_array__ArraySetmodel__MType);
{
((void (*)(val*))(var21->class->vft[COLOR_kernel__Object__init]))(var21) /* init on <var21:ArraySet[MType]>*/;
}
var_types = var21;
var_ = var_props;
{
var22 = array__AbstractArrayRead__iterator(var_);
}
var_23 = var22;
for(;;) {
{
var24 = array__ArrayIterator__is_ok(var_23);
}
if (var24){
{
var25 = array__ArrayIterator__item(var_23);
}
var_p = var25;
/* <var_p:MPropDef> isa MVirtualTypeDef */
cltype27 = type_model__MVirtualTypeDef.color;
idtype28 = type_model__MVirtualTypeDef.id;
if(cltype27 >= var_p->type->table_size) {
var26 = 0;
} else {
var26 = var_p->type->type_table[cltype27] == idtype28;
}
if (unlikely(!var26)) {
var_class_name29 = var_p == NULL ? "null" : var_p->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1175);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MPropDef(MVirtualTypeDef)> */
var32 = var_p->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MPropDef(MVirtualTypeDef)> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1175);
show_backtrace(1);
}
{
array__ArraySet__add(var_types, var30); /* Direct call array#ArraySet#add on <var_types:ArraySet[MType]>*/
}
{
array__ArrayIterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:ArrayIterator[MPropDef]> */
RET_LABEL33:(void)0;
}
}
{
var34 = array__ArraySet__length(var_types);
}
var35 = 1;
{
{ /* Inline kernel#Int#== (var34,var35) on <var34:Int> */
var39 = var34 == var35;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
{
var40 = array__ArraySet__first(var_types);
}
var = var40;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1180);
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
/* method model#MVirtualType#is_fixed for (self: MVirtualType, MModule, MType): Bool */
short int model__MVirtualType__is_fixed(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var6 /* : Array[MPropDef] */;
val* var_props /* var props: Array[MPropDef] */;
short int var7 /* : Bool */;
val* var_ /* var : Array[MPropDef] */;
val* var8 /* : ArrayIterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[MPropDef] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_p /* var p: MPropDef */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1186);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var5 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = model__MProperty__lookup_definitions(var3, var_mmodule, var_resolved_receiver);
}
var_props = var6;
{
var7 = array__AbstractArrayRead__is_empty(var_props);
}
if (var7){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1189);
show_backtrace(1);
} else {
}
var_ = var_props;
{
var8 = array__AbstractArrayRead__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = array__ArrayIterator__is_ok(var_9);
}
if (var10){
{
var11 = array__ArrayIterator__item(var_9);
}
var_p = var11;
/* <var_p:MPropDef> isa MVirtualTypeDef */
cltype = type_model__MVirtualTypeDef.color;
idtype = type_model__MVirtualTypeDef.id;
if(cltype >= var_p->type->table_size) {
var12 = 0;
} else {
var12 = var_p->type->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var_p == NULL ? "null" : var_p->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1192);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_p) on <var_p:MPropDef(MVirtualTypeDef)> */
var15 = var_p->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MPropDef(MVirtualTypeDef)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
var16 = 1;
var = var16;
goto RET_LABEL;
} else {
}
{
array__ArrayIterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:ArrayIterator[MPropDef]> */
RET_LABEL17:(void)0;
}
}
var18 = 0;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#is_fixed for (self: Object, MModule, MType): Bool */
short int VIRTUAL_model__MVirtualType__is_fixed(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MVirtualType__is_fixed(self, p0, p1);
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
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var_resolved_reciever /* var resolved_reciever: nullable Object */;
val* var13 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var14 /* : MType */;
val* var_res /* var res: MType */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name;
val* var22 /* : MClass */;
val* var24 /* : MClass */;
val* var25 /* : MClassKind */;
val* var27 /* : MClassKind */;
val* var28 /* : MClassKind */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other32 /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var_ /* var : Bool */;
val* var44 /* : MClass */;
val* var46 /* : MClass */;
val* var47 /* : MClassKind */;
val* var49 /* : MClassKind */;
val* var50 /* : MClassKind */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = model__MVirtualType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1199);
show_backtrace(1);
}
{
var2 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var2){
var3 = NULL;
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var3) on <var_anchor:nullable MClassType> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1206);
show_backtrace(1);
}
var10 = NULL;
var11 = 1;
{
var12 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var_anchor, var10, var_mmodule, var11) /* resolve_for on <var_mtype:MType>*/;
}
var_resolved_reciever = var12;
} else {
var_resolved_reciever = var_mtype;
}
{
var13 = model__MVirtualType__lookup_bound(self, var_mmodule, var_resolved_reciever);
}
var_verbatim_bound = var13;
{
var14 = ((val* (*)(val*, val*, val*, val*, short int))(var_verbatim_bound->class->vft[COLOR_model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_verbatim_bound:MType>*/;
}
var_res = var14;
if (var_cleanup_virtual){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_resolved_reciever:nullable Object(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_resolved_reciever->type->table_size) {
var15 = 0;
} else {
var15 = var_resolved_reciever->type->type_table[cltype] == idtype;
}
if (var15){
{
{ /* Inline model#MNullableType#mtype (var_resolved_reciever) on <var_resolved_reciever:nullable Object(MNullableType)> */
var18 = var_resolved_reciever->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_resolved_reciever:nullable Object(MNullableType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_resolved_reciever = var16;
} else {
}
/* <var_resolved_reciever:nullable Object(MType)> isa MClassType */
cltype20 = type_model__MClassType.color;
idtype21 = type_model__MClassType.id;
if(cltype20 >= var_resolved_reciever->type->table_size) {
var19 = 0;
} else {
var19 = var_resolved_reciever->type->type_table[cltype20] == idtype21;
}
if (unlikely(!var19)) {
var_class_name = var_resolved_reciever == NULL ? "null" : var_resolved_reciever->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1222);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_resolved_reciever) on <var_resolved_reciever:MType(MClassType)> */
var24 = var_resolved_reciever->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_resolved_reciever:MType(MClassType)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var22) on <var22:MClass> */
var27 = var22->attrs[COLOR_model__MClass___kind].val; /* _kind on <var22:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var25,var28) on <var25:MClassKind> */
var_other32 = var28;
{
{ /* Inline kernel#Object#is_same_instance (var25,var_other32) on <var25:MClassKind> */
var35 = var25 == var_other32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:MType> isa MVirtualType */
cltype37 = type_model__MVirtualType.color;
idtype38 = type_model__MVirtualType.id;
if(cltype37 >= var_res->type->table_size) {
var36 = 0;
} else {
var36 = var_res->type->type_table[cltype37] == idtype38;
}
if (var36){
var = var_res;
goto RET_LABEL;
} else {
}
{
var39 = model__MVirtualType__is_fixed(self, var_mmodule, var_resolved_reciever);
}
if (var39){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:MType> isa MClassType */
cltype42 = type_model__MClassType.color;
idtype43 = type_model__MClassType.id;
if(cltype42 >= var_res->type->table_size) {
var41 = 0;
} else {
var41 = var_res->type->type_table[cltype42] == idtype43;
}
var_ = var41;
if (var41){
{
{ /* Inline model#MClassType#mclass (var_res) on <var_res:MType(MClassType)> */
var46 = var_res->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_res:MType(MClassType)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var44) on <var44:MClass> */
var49 = var44->attrs[COLOR_model__MClass___kind].val; /* _kind on <var44:MClass> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var47,var50) on <var47:MClassKind> */
var_other32 = var50;
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other32) on <var47:MClassKind> */
var56 = var47 == var_other32;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
var40 = var51;
} else {
var40 = var_;
}
if (var40){
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
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
val* var10 /* : MProperty */;
val* var12 /* : MProperty */;
short int var13 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var1){
var2 = NULL;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var2) on <var_anchor:nullable MClassType> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1239);
show_backtrace(1);
}
{
var9 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var9;
} else {
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var12 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = model__MType__has_mproperty(var_mtype, var_mmodule, var10);
}
var = var13;
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
val* var3 /* : MProperty */;
val* var4 /* : String */;
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MProperty__to_s(var1);
}
var = var4;
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
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MVirtualType>*/;
}
var_mproperty = p0;
{
{ /* Inline model#MVirtualType#mproperty= (self,var_mproperty) on <self:MVirtualType> */
self->attrs[COLOR_model__MVirtualType___mproperty].val = var_mproperty; /* _mproperty on <self:MVirtualType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method model#MVirtualType#init for (self: Object, MProperty) */
void VIRTUAL_model__MVirtualType__init(val* self, val* p0) {
model__MVirtualType__init(self, p0); /* Direct call model#MVirtualType#init on <self:Object(MVirtualType)>*/
RET_LABEL:;
}
/* method model#MParameterType#mclass for (self: MParameterType): MClass */
val* model__MParameterType__mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
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
val* var3 /* : MClass */;
{ /* Inline model#MParameterType#mclass (self) on <self:Object(MParameterType)> */
var3 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:Object(MParameterType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#mclass= for (self: MParameterType, MClass) */
void model__MParameterType__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameterType___mclass].val = p0; /* _mclass on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#mclass= for (self: Object, MClass) */
void VIRTUAL_model__MParameterType__mclass_61d(val* self, val* p0) {
{ /* Inline model#MParameterType#mclass= (self,p0) on <self:Object(MParameterType)> */
self->attrs[COLOR_model__MParameterType___mclass].val = p0; /* _mclass on <self:Object(MParameterType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameterType#model for (self: MParameterType): Model */
val* model__MParameterType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var = var7;
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
var1 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank for (self: Object): Int */
long VIRTUAL_model__MParameterType__rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline model#MParameterType#rank (self) on <self:Object(MParameterType)> */
var3 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:Object(MParameterType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank= for (self: MParameterType, Int) */
void model__MParameterType__rank_61d(val* self, long p0) {
self->attrs[COLOR_model__MParameterType___rank].l = p0; /* _rank on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#rank= for (self: Object, Int) */
void VIRTUAL_model__MParameterType__rank_61d(val* self, long p0) {
{ /* Inline model#MParameterType#rank= (self,p0) on <self:Object(MParameterType)> */
self->attrs[COLOR_model__MParameterType___rank].l = p0; /* _rank on <self:Object(MParameterType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameterType#name for (self: MParameterType): String */
val* model__MParameterType__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1289);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#name for (self: Object): String */
val* VIRTUAL_model__MParameterType__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MParameterType#name (self) on <self:Object(MParameterType)> */
var3 = self->attrs[COLOR_model__MParameterType___name].val; /* _name on <self:Object(MParameterType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1289);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#name= for (self: MParameterType, String) */
void model__MParameterType__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameterType___name].val = p0; /* _name on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#name= for (self: Object, String) */
void VIRTUAL_model__MParameterType__name_61d(val* self, val* p0) {
{ /* Inline model#MParameterType#name= (self,p0) on <self:Object(MParameterType)> */
self->attrs[COLOR_model__MParameterType___name].val = p0; /* _name on <self:Object(MParameterType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameterType#to_s for (self: MParameterType): String */
val* model__MParameterType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MParameterType#name (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1289);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
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
val* var5 /* : MClass */;
val* var_goalclass /* var goalclass: MClass */;
val* var6 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_ /* var : Set[MClassType] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[MClassType] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Array[MType] */;
val* var22 /* : Array[MType] */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var26 /* : nullable Object */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1297);
show_backtrace(1);
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var5 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_goalclass = var3;
{
var6 = ((val* (*)(val*, val*))(var_resolved_receiver->class->vft[COLOR_model__MType__collect_mtypes]))(var_resolved_receiver, var_mmodule) /* collect_mtypes on <var_resolved_receiver:MType>*/;
}
var_supertypes = var6;
var_ = var_supertypes;
{
var7 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClassType]>*/;
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:Iterator[MClassType]>*/;
}
if (var9){
{
var10 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__item]))(var_8) /* item on <var_8:Iterator[MClassType]>*/;
}
var_t = var10;
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MClassType> */
var13 = var_t->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_t:MClassType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var11,var_goalclass) on <var11:MClass> */
var_other = var_goalclass;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:MClass> */
var19 = var11 == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline model#MClassType#arguments (var_t) on <var_t:MClassType> */
var22 = var_t->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_t:MClassType> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var25 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = array__Array___91d_93d(var20, var23);
}
var_res = var26;
var = var_res;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__next]))(var_8) /* next on <var_8:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:Iterator[MClassType]> */
RET_LABEL27:(void)0;
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1308);
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
