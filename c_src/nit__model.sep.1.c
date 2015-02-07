#include "nit__model.sep.0.h"
/* method model#Model#mclasses for (self: Model): Array[MClass] */
val* nit__model___Model___mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nit__model__Model___mclasses].val; /* _mclasses on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties for (self: Model): Array[MProperty] */
val* nit__model___Model___mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nit__model__Model___mproperties].val; /* _mproperties on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 37);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclassdef_hierarchy for (self: Model): POSet[MClassDef] */
val* nit__model___Model___mclassdef_hierarchy(val* self) {
val* var /* : POSet[MClassDef] */;
val* var1 /* : POSet[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#intro_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* nit__model___Model___intro_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#full_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* nit__model___Model___full_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#mclasses_by_name for (self: Model): MultiHashMap[String, MClass] */
val* nit__model___Model___mclasses_by_name(val* self) {
val* var /* : MultiHashMap[String, MClass] */;
val* var1 /* : MultiHashMap[String, MClass] */;
var1 = self->attrs[COLOR_nit__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 66);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#get_mclasses_by_name for (self: Model, String): nullable Array[MClass] */
val* nit__model___Model___get_mclasses_by_name(val* self, val* p0) {
val* var /* : nullable Array[MClass] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MClass] */;
val* var3 /* : MultiHashMap[String, MClass] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
{ /* Inline model#Model#mclasses_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nit__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 66);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var1, var_name);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Model#mproperties_by_name for (self: Model): MultiHashMap[String, MProperty] */
val* nit__model___Model___mproperties_by_name(val* self) {
val* var /* : MultiHashMap[String, MProperty] */;
val* var1 /* : MultiHashMap[String, MProperty] */;
var1 = self->attrs[COLOR_nit__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 80);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#Model#get_mproperties_by_name for (self: Model, String): nullable Array[MProperty] */
val* nit__model___Model___get_mproperties_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProperty] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProperty] */;
val* var3 /* : MultiHashMap[String, MProperty] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
{ /* Inline model#Model#mproperties_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nit__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 80);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var1, var_name);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Model#null_type for (self: Model): MNullType */
val* nit__model___Model___null_type(val* self) {
val* var /* : MNullType */;
val* var1 /* : MNullType */;
var1 = self->attrs[COLOR_nit__model__Model___null_type].val; /* _null_type on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 94);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#intro_mclasses for (self: MModule): Array[MClass] */
val* nit__model___MModule___intro_mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nit__model__MModule___intro_mclasses].val; /* _intro_mclasses on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 128);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#mclassdefs for (self: MModule): Array[MClassDef] */
val* nit__model___MModule___mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy for (self: MModule): POSet[MClass] */
val* nit__model___MModule___flatten_mclass_hierarchy(val* self) {
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
val* var10 /* : POSet[MClass] */;
val* var12 /* : POSetElement[MModule] */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : Collection[nullable Object] */;
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
val* var31 /* : POSetElement[nullable Object] */;
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
var3 = self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
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
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable POSet[MClass](POSet[MClass])>*/;
}
var9 = !var8;
var6 = var9;
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
var10 = NEW_poset__POSet(&type_poset__POSet__nit__MClass);
{
{ /* Inline kernel#Object#init (var10) on <var10:POSet[MClass]> */
RET_LABEL11:(void)0;
}
}
var_res = var10;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var14 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = poset___poset__POSetElement___greaters(var12);
}
var_ = var15;
{
var16 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_17 = var16;
for(;;) {
{
var18 = ((short int (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17) /* is_ok on <var_17:Iterator[MModule]>*/;
}
if (var18){
{
var19 = ((val* (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17) /* item on <var_17:Iterator[MModule]>*/;
}
var_m = var19;
{
{ /* Inline model#MModule#mclassdefs (var_m) on <var_m:MModule> */
var22 = var_m->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <var_m:MModule> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_23 = var20;
{
var24 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_23);
}
var_25 = var24;
for(;;) {
{
var26 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_25);
}
if (var26){
{
var27 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_25);
}
var_cd = var27;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var30 = var_cd->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_c = var28;
{
var31 = poset___poset__POSet___add_node(var_res, var_c);
}
{
{ /* Inline model#MClassDef#supertypes (var_cd) on <var_cd:MClassDef> */
var34 = var_cd->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_cd:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_35 = var32;
{
var36 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_35);
}
var_37 = var36;
for(;;) {
{
var38 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_37);
}
if (var38){
{
var39 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_37);
}
var_s = var39;
{
{ /* Inline model#MClassType#mclass (var_s) on <var_s:MClassType> */
var42 = var_s->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_s:MClassType> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
poset___poset__POSet___add_edge(var_res, var_c, var40); /* Direct call poset#POSet#add_edge on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_37); /* Direct call array#ArrayIterator#next on <var_37:ArrayIterator[MClassType]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_25); /* Direct call array#ArrayIterator#next on <var_25:ArrayIterator[MClassDef]>*/
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
((void (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17) /* next on <var_17:Iterator[MModule]>*/;
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
self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val = var_res; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL48:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#linearize_mclasses for (self: MModule, Array[MClass]) */
void nit__model___MModule___linearize_mclasses(val* self, val* p0) {
val* var_mclasses /* var mclasses: Array[MClass] */;
val* var /* : POSet[MClass] */;
var_mclasses = p0;
{
var = nit__model___MModule___flatten_mclass_hierarchy(self);
}
{
standard___standard__Comparator___sort(var, var_mclasses); /* Direct call sorter#Comparator#sort on <var:POSet[MClass]>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mclassdefs for (self: MModule, Array[MClassDef]) */
void nit__model___MModule___linearize_mclassdefs(val* self, val* p0) {
val* var_mclassdefs /* var mclassdefs: Array[MClassDef] */;
val* var /* : MClassDefSorter */;
val* var_sorter /* var sorter: MClassDefSorter */;
var_mclassdefs = p0;
var = NEW_nit__model__MClassDefSorter(&type_nit__model__MClassDefSorter);
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__model__MClassDefSorter__mmodule_61d]))(var, self) /* mmodule= on <var:MClassDefSorter>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:MClassDefSorter>*/;
}
var_sorter = var;
{
standard___standard__Comparator___sort(var_sorter, var_mclassdefs); /* Direct call sorter#Comparator#sort on <var_sorter:MClassDefSorter>*/
}
RET_LABEL:;
}
/* method model#MModule#linearize_mpropdefs for (self: MModule, Array[MPropDef]) */
void nit__model___MModule___linearize_mpropdefs(val* self, val* p0) {
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var /* : MPropDefSorter */;
val* var_sorter /* var sorter: MPropDefSorter */;
var_mpropdefs = p0;
var = NEW_nit__model__MPropDefSorter(&type_nit__model__MPropDefSorter);
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__model__MPropDefSorter__mmodule_61d]))(var, self) /* mmodule= on <var:MPropDefSorter>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:MPropDefSorter>*/;
}
var_sorter = var;
{
standard___standard__Comparator___sort(var_sorter, var_mpropdefs); /* Direct call sorter#Comparator#sort on <var_sorter:MPropDefSorter>*/
}
RET_LABEL:;
}
/* method model#MModule#flatten_mclass_hierarchy_cache for (self: MModule): nullable POSet[MClass] */
val* nit__model___MModule___flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
var1 = self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#flatten_mclass_hierarchy_cache= for (self: MModule, nullable POSet[MClass]) */
void nit__model___MModule___flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val = p0; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#object_type for (self: MModule): MClassType */
val* nit__model___MModule___object_type(val* self) {
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
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
{
{ /* Inline model#MModule#object_type_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__model__MModule___object_type_cache].val; /* _object_type_cache on <self:MModule> */
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
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MClassType(MClassType)>*/;
}
var9 = !var8;
var6 = var9;
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
var10 = varonce;
} else {
var11 = "Object";
var12 = 6;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
var14 = nit__model___MModule___get_primitive_class(self, var10);
}
{
{ /* Inline model#MClass#mclass_type (var14) on <var14:MClass> */
var17 = var14->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var14:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_res = var15;
{
{ /* Inline model#MModule#object_type_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_nit__model__MModule___object_type_cache].val = var_res; /* _object_type_cache on <self:MModule> */
RET_LABEL18:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache for (self: MModule): nullable MClassType */
val* nit__model___MModule___object_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___object_type_cache].val; /* _object_type_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#object_type_cache= for (self: MModule, nullable MClassType) */
void nit__model___MModule___object_type_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___object_type_cache].val = p0; /* _object_type_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#pointer_type for (self: MModule): MClassType */
val* nit__model___MModule___pointer_type(val* self) {
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
var1 = self->attrs[COLOR_nit__model__MModule___pointer_type].val != NULL; /* _pointer_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___pointer_type].val; /* _pointer_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 209);
show_backtrace(1);
}
} else {
if (varonce) {
var3 = varonce;
} else {
var4 = "Pointer";
var5 = 7;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var7) on <var7:MClass> */
var10 = var7->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var7:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___pointer_type].val = var8; /* _pointer_type on <self:MModule> */
var2 = var8;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type for (self: MModule): MClassType */
val* nit__model___MModule___bool_type(val* self) {
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
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
{
{ /* Inline model#MModule#bool_type_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__model__MModule___bool_type_cache].val; /* _bool_type_cache on <self:MModule> */
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
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MClassType(MClassType)>*/;
}
var9 = !var8;
var6 = var9;
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
var10 = varonce;
} else {
var11 = "Bool";
var12 = 4;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
var14 = nit__model___MModule___get_primitive_class(self, var10);
}
{
{ /* Inline model#MClass#mclass_type (var14) on <var14:MClass> */
var17 = var14->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var14:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_res = var15;
{
{ /* Inline model#MModule#bool_type_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_nit__model__MModule___bool_type_cache].val = var_res; /* _bool_type_cache on <self:MModule> */
RET_LABEL18:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache for (self: MModule): nullable MClassType */
val* nit__model___MModule___bool_type_cache(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___bool_type_cache].val; /* _bool_type_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type_cache= for (self: MModule, nullable MClassType) */
void nit__model___MModule___bool_type_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MModule___bool_type_cache].val = p0; /* _bool_type_cache on <self:MModule> */
RET_LABEL:;
}
/* method model#MModule#sys_type for (self: MModule): nullable MClassType */
val* nit__model___MModule___sys_type(val* self) {
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
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = nit__model___Model___get_mclasses_by_name(var1, var4);
}
var_clas = var8;
var9 = NULL;
if (var_clas == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = standard___standard__Array___standard__kernel__Object___61d_61d(var_clas, var9);
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
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
var18 = nit__model___MModule___get_primitive_class(self, var14);
}
{
{ /* Inline model#MClass#mclass_type (var18) on <var18:MClass> */
var21 = var18->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var18:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
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
/* method model#MModule#finalizable_type for (self: MModule): nullable MClassType */
val* nit__model___MModule___finalizable_type(val* self) {
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
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = nit__model___Model___get_mclasses_by_name(var1, var4);
}
var_clas = var8;
var9 = NULL;
if (var_clas == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = standard___standard__Array___standard__kernel__Object___61d_61d(var_clas, var9);
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
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
var18 = nit__model___MModule___get_primitive_class(self, var14);
}
{
{ /* Inline model#MClass#mclass_type (var18) on <var18:MClass> */
var21 = var18->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var18:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
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
/* method model#MModule#get_primitive_class for (self: MModule, String): MClass */
val* nit__model___MModule___get_primitive_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : nullable Array[MClass] */;
val* var_cla /* var cla: nullable Array[MClass] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : Model */;
val* var16 /* : Model */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : nullable Array[MClass] */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MClass */;
val* var30 /* : null */;
val* var31 /* : MClassKind */;
val* var32 /* : MVisibility */;
val* var_c /* var c: MClass */;
val* var33 /* : MClassDef */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var37 /* : Location */;
val* var38 /* : null */;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
val* var_cladef /* var cladef: MClassDef */;
val* var43 /* : Array[MClassType] */;
long var44 /* : Int */;
val* var_45 /* var : Array[MClassType] */;
val* var46 /* : MClassType */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
long var56 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var_msg /* var msg: String */;
val* var_80 /* var : nullable Array[MClass] */;
val* var81 /* : ArrayIterator[nullable Object] */;
val* var_82 /* var : ArrayIterator[MClass] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
val* var_c85 /* var c: MClass */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
val* var91 /* : String */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var98 /* : nullable Object */;
var_name = p0;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mclasses_by_name(var1, var_name);
}
var_cla = var4;
var5 = NULL;
if (var_cla == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = standard___standard__Array___standard__kernel__Object___61d_61d(var_cla, var5);
var6 = var7;
}
if (var6){
if (varonce) {
var9 = varonce;
} else {
var10 = "Bool";
var11 = 4;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
var13 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var9) /* == on <var_name:String>*/;
}
var_ = var13;
if (var13){
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var16 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "Object";
var20 = 6;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = nit__model___Model___get_mclasses_by_name(var14, var18);
}
var23 = NULL;
if (var22 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var22,var23) on <var22:nullable Array[MClass]> */
var_other = var23;
{
var27 = ((short int (*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var_other) /* == on <var22:nullable Array[MClass](Array[MClass])>*/;
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var8 = var24;
} else {
var8 = var_;
}
if (var8){
var29 = NEW_nit__MClass(&type_nit__MClass);
var30 = NULL;
{
var31 = nit__model___standard__Object___enum_kind(self);
}
{
var32 = nit__model_base___standard__Object___public_visibility(self);
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_nit__model__MClass__intro_mmodule_61d]))(var29, self) /* intro_mmodule= on <var29:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_nit__model__MClass__name_61d]))(var29, var_name) /* name= on <var29:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_nit__model__MClass__setup_parameter_names]))(var29, var30) /* setup_parameter_names on <var29:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_nit__model__MClass__kind_61d]))(var29, var31) /* kind= on <var29:MClass>*/;
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_nit__model__MClass__visibility_61d]))(var29, var32) /* visibility= on <var29:MClass>*/;
}
{
((void (*)(val* self))(var29->class->vft[COLOR_standard__kernel__Object__init]))(var29) /* init on <var29:MClass>*/;
}
var_c = var29;
var33 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var36 = var_c->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = NEW_nit__Location(&type_nit__Location);
var38 = NULL;
var39 = 0;
var40 = 0;
var41 = 0;
var42 = 0;
{
((void (*)(val* self, val* p0))(var37->class->vft[COLOR_nit__location__Location__file_61d]))(var37, var38) /* file= on <var37:Location>*/;
}
{
((void (*)(val* self, long p0))(var37->class->vft[COLOR_nit__location__Location__line_start_61d]))(var37, var39) /* line_start= on <var37:Location>*/;
}
{
((void (*)(val* self, long p0))(var37->class->vft[COLOR_nit__location__Location__line_end_61d]))(var37, var40) /* line_end= on <var37:Location>*/;
}
{
((void (*)(val* self, long p0))(var37->class->vft[COLOR_nit__location__Location__column_start_61d]))(var37, var41) /* column_start= on <var37:Location>*/;
}
{
((void (*)(val* self, long p0))(var37->class->vft[COLOR_nit__location__Location__column_end_61d]))(var37, var42) /* column_end= on <var37:Location>*/;
}
{
((void (*)(val* self))(var37->class->vft[COLOR_standard__kernel__Object__init]))(var37) /* init on <var37:Location>*/;
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var33, self) /* mmodule= on <var33:MClassDef>*/;
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var33, var34) /* bound_mtype= on <var33:MClassDef>*/;
}
{
((void (*)(val* self, val* p0))(var33->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var33, var37) /* location= on <var33:MClassDef>*/;
}
{
((void (*)(val* self))(var33->class->vft[COLOR_standard__kernel__Object__init]))(var33) /* init on <var33:MClassDef>*/;
}
var_cladef = var33;
var43 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
var44 = 1;
{
standard___standard__Array___with_capacity(var43, var44); /* Direct call array#Array#with_capacity on <var43:Array[MClassType]>*/
}
var_45 = var43;
{
var46 = nit__model___MModule___object_type(self);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_45, var46); /* Direct call array#AbstractArray#push on <var_45:Array[MClassType]>*/
}
{
nit___nit__MClassDef___set_supertypes(var_cladef, var_45); /* Direct call model#MClassDef#set_supertypes on <var_cladef:MClassDef>*/
}
{
nit___nit__MClassDef___add_in_hierarchy(var_cladef); /* Direct call model#MClassDef#add_in_hierarchy on <var_cladef:MClassDef>*/
}
var = var_c;
goto RET_LABEL;
} else {
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "Fatal Error: no primitive class ";
var50 = 32;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 2;
var54 = NEW_standard__NativeArray(var53, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var54)->values[0] = (val*) var48;
((struct instance_standard__NativeArray*)var54)->values[1] = (val*) var_name;
{
((void (*)(val* self, val* p0, long p1))(var52->class->vft[COLOR_standard__array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val* self))(var52->class->vft[COLOR_standard__string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
standard__file___Object___print(self, var55); /* Direct call file#Object#print on <self:MModule>*/
}
var56 = 1;
{
{ /* Inline kernel#Object#exit (self,var56) on <self:MModule> */
exit(var56);
RET_LABEL57:(void)0;
}
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 258);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_cla) on <var_cla:nullable Array[MClass]> */
if (unlikely(var_cla == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var60 = var_cla->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_cla:nullable Array[MClass]> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = 1;
{
{ /* Inline kernel#Int#!= (var58,var61) on <var58:Int> */
var64 = var58 == var61;
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
if (var62){
if (varonce66) {
var67 = varonce66;
} else {
var68 = "Fatal Error: more than one primitive class ";
var69 = 43;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ":";
var74 = 1;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_standard__NativeArray(var77, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var78)->values[0] = (val*) var67;
((struct instance_standard__NativeArray*)var78)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var78)->values[2] = (val*) var72;
{
((void (*)(val* self, val* p0, long p1))(var76->class->vft[COLOR_standard__array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val* self))(var76->class->vft[COLOR_standard__string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
var_msg = var79;
var_80 = var_cla;
if (var_80 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 260);
show_backtrace(1);
} else {
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
var_c85 = var84;
if (varonce86) {
var87 = varonce86;
} else {
var88 = " ";
var89 = 1;
var90 = standard___standard__NativeString___to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
{
var91 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_c85);
}
var92 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 2;
var94 = NEW_standard__NativeArray(var93, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var94)->values[0] = (val*) var87;
((struct instance_standard__NativeArray*)var94)->values[1] = (val*) var91;
{
((void (*)(val* self, val* p0, long p1))(var92->class->vft[COLOR_standard__array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var95 = ((val* (*)(val* self))(var92->class->vft[COLOR_standard__string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
{
var96 = ((val* (*)(val* self, val* p0))(var_msg->class->vft[COLOR_standard__string__String___43d]))(var_msg, var95) /* + on <var_msg:String>*/;
}
var_msg = var96;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_82); /* Direct call array#ArrayIterator#next on <var_82:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_82) on <var_82:ArrayIterator[MClass]> */
RET_LABEL97:(void)0;
}
}
{
standard__file___Object___print(self, var_msg); /* Direct call file#Object#print on <self:MModule>*/
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 264);
show_backtrace(1);
} else {
var98 = standard___standard__SequenceRead___Collection__first(var_cla);
}
var = var98;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#try_get_primitive_method for (self: MModule, String, MClass): nullable MMethod */
val* nit__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1) {
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
val* var29 /* : Collection[nullable Object] */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable POSetElement[MClassDef] */;
val* var37 /* : nullable POSetElement[MClassDef] */;
val* var38 /* : Collection[nullable Object] */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var_other50 /* var other: nullable Object */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
static val* varonce;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
var_name = p0;
var_recv = p1;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
var5 = NULL;
if (var_props == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = standard___standard__Array___standard__kernel__Object___61d_61d(var_props, var5);
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
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_mprop = var13;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var14 = 0;
} else {
var14 = var_mprop->type->type_table[cltype] == idtype;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 274);
show_backtrace(1);
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var17 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_intro = var15;
{
{ /* Inline model#MClass#mclassdefs (var_recv) on <var_recv:MClass> */
var20 = var_recv->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_recv:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 417);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_21 = var18;
{
var22 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_21);
}
var_23 = var22;
for(;;) {
{
var24 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_23);
}
if (var24){
{
var25 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_23);
}
var_mclassdef = var25;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = poset___poset__POSetElement___greaters(var26);
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((short int (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var29, var30) /* has on <var29:Collection[nullable Object](Collection[MModule])>*/;
}
var34 = !var33;
if (var34){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 278);
show_backtrace(1);
} else {
var38 = poset___poset__POSetElement___greaters(var35);
}
{
var39 = ((short int (*)(val* self, val* p0))(var38->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var38, var_intro) /* has on <var38:Collection[nullable Object](Collection[MClassDef])>*/;
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
var_other50 = var_mprop;
{
var51 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other50) /* == on <var_res:nullable MMethod(MMethod)>*/;
}
var52 = !var51;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
if (varonce) {
var53 = varonce;
} else {
var54 = "Fatal Error: ambigous property name \'";
var55 = 37;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce = var53;
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = "\'; conflict between ";
var60 = 20;
var61 = standard___standard__NativeString___to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
var62 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " and ";
var66 = 5;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
var68 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_res);
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 6;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var53;
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var58;
((struct instance_standard__NativeArray*)var71)->values[3] = (val*) var62;
((struct instance_standard__NativeArray*)var71)->values[4] = (val*) var64;
((struct instance_standard__NativeArray*)var71)->values[5] = (val*) var68;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
standard__file___Object___print(self, var72); /* Direct call file#Object#print on <self:MModule>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 283);
show_backtrace(1);
} else {
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label73;
}
}
BREAK_label73: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:ArrayIterator[MClassDef]> */
RET_LABEL74:(void)0;
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[MProperty]> */
RET_LABEL76:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule for (self: MClassDefSorter): MModule */
val* nit__model___nit__model__MClassDefSorter___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 294);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#mmodule= for (self: MClassDefSorter, MModule) */
void nit__model___nit__model__MClassDefSorter___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDefSorter___mmodule].val = p0; /* _mmodule on <self:MClassDefSorter> */
RET_LABEL:;
}
/* method model#MClassDefSorter#compare for (self: MClassDefSorter, MClassDef, MClassDef): Int */
long nit__model___nit__model__MClassDefSorter___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : POSet[MClass] */;
long var21 /* : Int */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : Model */;
val* var27 /* : Model */;
val* var28 /* : POSet[MClassDef] */;
val* var30 /* : POSet[MClassDef] */;
long var31 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:MClassDef> isa COMPARED */
/* <p0:MClassDef> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 295);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:MClassDef> isa COMPARED */
/* <p1:MClassDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 295);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline model#MClassDef#mclass (var_a) on <var_a:MClassDef> */
var9 = var_a->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ca = var7;
{
{ /* Inline model#MClassDef#mclass (var_b) on <var_b:MClassDef> */
var12 = var_b->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_b:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
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
var15 = ((short int (*)(val* self, val* p0))(var_ca->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ca, var_other) /* == on <var_ca:MClass>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline model#MClassDefSorter#mmodule (self) on <self:MClassDefSorter> */
var19 = self->attrs[COLOR_nit__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 294);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit__model___MModule___flatten_mclass_hierarchy(var17);
}
{
var21 = poset___poset__POSet___standard__sorter__Comparator__compare(var20, var_ca, var_cb);
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDefSorter#mmodule (self) on <self:MClassDefSorter> */
var24 = self->attrs[COLOR_nit__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 294);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var22) on <var22:MModule> */
var27 = var22->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var22:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#Model#mclassdef_hierarchy (var25) on <var25:Model> */
var30 = var25->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var25:Model> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 40);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset___poset__POSet___standard__sorter__Comparator__compare(var28, var_a, var_b);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDefSorter#init for (self: MClassDefSorter) */
void nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init]))(self) /* init on <self:MClassDefSorter>*/;
}
RET_LABEL:;
}
/* method model#MPropDefSorter#mmodule for (self: MPropDefSorter): MModule */
val* nit__model___nit__model__MPropDefSorter___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 307);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#mmodule= for (self: MPropDefSorter, MModule) */
void nit__model___nit__model__MPropDefSorter___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDefSorter___mmodule].val = p0; /* _mmodule on <self:MPropDefSorter> */
RET_LABEL:;
}
/* method model#MPropDefSorter#compare for (self: MPropDefSorter, MPropDef, MPropDef): Int */
long nit__model___nit__model__MPropDefSorter___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
val* var26 /* : POSet[MClass] */;
long var27 /* : Int */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var31 /* : Model */;
val* var33 /* : Model */;
val* var34 /* : POSet[MClassDef] */;
val* var36 /* : POSet[MClassDef] */;
long var37 /* : Int */;
/* Covariant cast for argument 0 (pa) <p0:MPropDef> isa COMPARED */
/* <p0:MPropDef> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 308);
show_backtrace(1);
}
/* Covariant cast for argument 1 (pb) <p1:MPropDef> isa COMPARED */
/* <p1:MPropDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 308);
show_backtrace(1);
}
var_pa = p0;
var_pb = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_pa) on <var_pa:MPropDef> */
var9 = var_pa->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pa:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_a = var7;
{
{ /* Inline model#MPropDef#mclassdef (var_pb) on <var_pb:MPropDef> */
var12 = var_pb->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pb:MPropDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_b = var10;
{
{ /* Inline model#MClassDef#mclass (var_a) on <var_a:MClassDef> */
var15 = var_a->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ca = var13;
{
{ /* Inline model#MClassDef#mclass (var_b) on <var_b:MClassDef> */
var18 = var_b->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_b:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
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
var21 = ((short int (*)(val* self, val* p0))(var_ca->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ca, var_other) /* == on <var_ca:MClass>*/;
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline model#MPropDefSorter#mmodule (self) on <self:MPropDefSorter> */
var25 = self->attrs[COLOR_nit__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 307);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit__model___MModule___flatten_mclass_hierarchy(var23);
}
{
var27 = poset___poset__POSet___standard__sorter__Comparator__compare(var26, var_ca, var_cb);
}
var = var27;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDefSorter#mmodule (self) on <self:MPropDefSorter> */
var30 = self->attrs[COLOR_nit__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 307);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var28) on <var28:MModule> */
var33 = var28->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var28:MModule> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#Model#mclassdef_hierarchy (var31) on <var31:Model> */
var36 = var31->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var31:Model> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 40);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = poset___poset__POSet___standard__sorter__Comparator__compare(var34, var_a, var_b);
}
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDefSorter#init for (self: MPropDefSorter) */
void nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init]))(self) /* init on <self:MPropDefSorter>*/;
}
RET_LABEL:;
}
/* method model#MClass#intro_mmodule for (self: MClass): MModule */
val* nit___nit__MClass___intro_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro_mmodule= for (self: MClass, MModule) */
void nit___nit__MClass___intro_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___intro_mmodule].val = p0; /* _intro_mmodule on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#name for (self: MClass): String */
val* nit___nit__MClass___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#name= for (self: MClass, String) */
void nit___nit__MClass___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___name].val = p0; /* _name on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#full_name for (self: MClass): String */
val* nit___nit__MClass___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MVisibility */;
val* var10 /* : MVisibility */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___full_name].val != NULL; /* _full_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClass___full_name].val; /* _full_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 352);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var7 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (self) on <self:MClass> */
var10 = self->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MModule___namespace_for(var5, var8);
}
if (varonce) {
var12 = varonce;
} else {
var13 = "::";
var14 = 2;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var18 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_standard__NativeArray(var20, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var21)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var21)->values[1] = (val*) var12;
((struct instance_standard__NativeArray*)var21)->values[2] = (val*) var16;
{
((void (*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var3 = var22;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClass___full_name].val = var3; /* _full_name on <self:MClass> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClass#c_name for (self: MClass): String */
val* nit___nit__MClass___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MVisibility */;
val* var10 /* : MVisibility */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___c_name].val != NULL; /* _c_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClass___c_name].val; /* _c_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 360);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var7 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (self) on <self:MClass> */
var10 = self->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MModule___c_namespace_for(var5, var8);
}
if (varonce) {
var12 = varonce;
} else {
var13 = "__";
var14 = 2;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var18 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = standard___standard__Text___to_cmangle(var16);
}
var20 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_standard__NativeArray(var21, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var12;
((struct instance_standard__NativeArray*)var22)->values[2] = (val*) var19;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
var3 = var23;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClass___c_name].val = var3; /* _c_name on <self:MClass> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClass#arity for (self: MClass): Int */
long nit___nit__MClass___arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#arity= for (self: MClass, Int) */
void nit___nit__MClass___arity_61d(val* self, long p0) {
self->attrs[COLOR_nit__model__MClass___arity].l = p0; /* _arity on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#mparameters for (self: MClass): Array[MParameterType] */
val* nit___nit__MClass___mparameters(val* self) {
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MParameterType] */;
var1 = self->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 368);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mparameters= for (self: MClass, Array[MParameterType]) */
void nit___nit__MClass___mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___mparameters].val = p0; /* _mparameters on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#setup_parameter_names for (self: MClass, nullable Array[String]) */
void nit___nit__MClass___setup_parameter_names(val* self, val* p0) {
val* var_parameter_names /* var parameter_names: nullable Array[String] */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Array[MParameterType] */;
val* var_mparametertypes /* var mparametertypes: Array[MParameterType] */;
long var24 /* : Int */;
long var_i /* var i: Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_ /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : MParameterType */;
val* var36 /* : nullable Object */;
val* var_mparametertype /* var mparametertype: MParameterType */;
long var37 /* : Int */;
long var38 /* : Int */;
val* var40 /* : MGenericType */;
val* var_mclass_type /* var mclass_type: MGenericType */;
val* var42 /* : HashMap[Array[MType], MGenericType] */;
val* var44 /* : HashMap[Array[MType], MGenericType] */;
val* var45 /* : MClassType */;
var_parameter_names = p0;
var = NULL;
if (var_parameter_names == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = standard___standard__Array___standard__kernel__Object___61d_61d(var_parameter_names, var);
var1 = var2;
}
if (var1){
var3 = 0;
{
{ /* Inline model#MClass#arity= (self,var3) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___arity].l = var3; /* _arity on <self:MClass> */
RET_LABEL4:(void)0;
}
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_parameter_names) on <var_parameter_names:nullable Array[String](Array[String])> */
var7 = var_parameter_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_parameter_names:nullable Array[String](Array[String])> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#arity= (self,var5) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___arity].l = var5; /* _arity on <self:MClass> */
RET_LABEL8:(void)0;
}
}
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var11 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 0;
{
{ /* Inline kernel#Int#> (var9,var12) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var16 = var9 > var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var17 = NULL;
if (var_parameter_names == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parameter_names,var17) on <var_parameter_names:nullable Array[String]> */
var_other = var17;
{
var21 = ((short int (*)(val* self, val* p0))(var_parameter_names->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parameter_names, var_other) /* == on <var_parameter_names:nullable Array[String](Array[String])>*/;
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 384);
show_backtrace(1);
}
var23 = NEW_standard__Array(&type_standard__Array__nit__MParameterType);
{
standard___standard__Array___standard__kernel__Object__init(var23); /* Direct call array#Array#init on <var23:Array[MParameterType]>*/
}
var_mparametertypes = var23;
var24 = 0;
var_i = var24;
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var27 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_ = var25;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var30 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var34 = var_i < var_;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
var35 = NEW_nit__MParameterType(&type_nit__MParameterType);
{
var36 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_parameter_names, var_i);
}
{
((void (*)(val* self, val* p0))(var35->class->vft[COLOR_nit__model__MParameterType__mclass_61d]))(var35, self) /* mclass= on <var35:MParameterType>*/;
}
{
((void (*)(val* self, long p0))(var35->class->vft[COLOR_nit__model__MParameterType__rank_61d]))(var35, var_i) /* rank= on <var35:MParameterType>*/;
}
{
((void (*)(val* self, val* p0))(var35->class->vft[COLOR_nit__model__MParameterType__name_61d]))(var35, var36) /* name= on <var35:MParameterType>*/;
}
{
((void (*)(val* self))(var35->class->vft[COLOR_standard__kernel__Object__init]))(var35) /* init on <var35:MParameterType>*/;
}
var_mparametertype = var35;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparametertypes, var_mparametertype); /* Direct call array#Array#add on <var_mparametertypes:Array[MParameterType]>*/
}
var37 = 1;
{
var38 = standard___standard__Int___Discrete__successor(var_i, var37);
}
var_i = var38;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MClass#mparameters= (self,var_mparametertypes) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___mparameters].val = var_mparametertypes; /* _mparameters on <self:MClass> */
RET_LABEL39:(void)0;
}
}
var40 = NEW_nit__MGenericType(&type_nit__MGenericType);
{
((void (*)(val* self, val* p0))(var40->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var40, self) /* mclass= on <var40:MGenericType>*/;
}
{
((void (*)(val* self, val* p0))(var40->class->vft[COLOR_nit__model__MClassType__arguments_61d]))(var40, var_mparametertypes) /* arguments= on <var40:MGenericType>*/;
}
{
((void (*)(val* self))(var40->class->vft[COLOR_standard__kernel__Object__init]))(var40) /* init on <var40:MGenericType>*/;
}
var_mclass_type = var40;
{
{ /* Inline model#MClass#mclass_type= (self,var_mclass_type) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___mclass_type].val = var_mclass_type; /* _mclass_type on <self:MClass> */
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var44 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 470);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var42, var_mparametertypes, var_mclass_type); /* Direct call hash_collection#HashMap#[]= on <var42:HashMap[Array[MType], MGenericType]>*/
}
} else {
var45 = NEW_nit__MClassType(&type_nit__MClassType);
{
((void (*)(val* self, val* p0))(var45->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var45, self) /* mclass= on <var45:MClassType>*/;
}
{
((void (*)(val* self))(var45->class->vft[COLOR_standard__kernel__Object__init]))(var45) /* init on <var45:MClassType>*/;
}
{
{ /* Inline model#MClass#mclass_type= (self,var45) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___mclass_type].val = var45; /* _mclass_type on <self:MClass> */
RET_LABEL46:(void)0;
}
}
}
RET_LABEL:;
}
/* method model#MClass#kind for (self: MClass): MClassKind */
val* nit___nit__MClass___kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = self->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#kind= for (self: MClass, MClassKind) */
void nit___nit__MClass___kind_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___kind].val = p0; /* _kind on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#visibility for (self: MClass): MVisibility */
val* nit___nit__MClass___visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#visibility= for (self: MClass, MVisibility) */
void nit___nit__MClass___visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___visibility].val = p0; /* _visibility on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#init for (self: MClass) */
void nit___nit__MClass___standard__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : Array[MClass] */;
val* var5 /* : Array[MClass] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : Model */;
val* var11 /* : Model */;
val* var_model /* var model: Model */;
val* var12 /* : MultiHashMap[String, MClass] */;
val* var14 /* : MultiHashMap[String, MClass] */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : Array[MClass] */;
val* var20 /* : Array[MClass] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MClass___standard__kernel__Object__init]))(self) /* init on <self:MClass>*/;
}
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var2 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MModule#intro_mclasses (var) on <var:MModule> */
var5 = var->attrs[COLOR_nit__model__MModule___intro_mclasses].val; /* _intro_mclasses on <var:MModule> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 128);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[MClass]>*/
}
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var8 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var6) on <var6:MModule> */
var11 = var6->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var6:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_model = var9;
{
{ /* Inline model#Model#mclasses_by_name (var_model) on <var_model:Model> */
var14 = var_model->attrs[COLOR_nit__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <var_model:Model> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 66);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var17 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var12, var15, self); /* Direct call more_collections#MultiHashMap#add_one on <var12:MultiHashMap[String, MClass]>*/
}
{
{ /* Inline model#Model#mclasses (var_model) on <var_model:Model> */
var20 = var_model->attrs[COLOR_nit__model__Model___mclasses].val; /* _mclasses on <var_model:Model> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 34);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var18, self); /* Direct call array#Array#add on <var18:Array[MClass]>*/
}
RET_LABEL:;
}
/* method model#MClass#model for (self: MClass): Model */
val* nit___nit__MClass___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var3 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var1) on <var1:MModule> */
var6 = var1->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var1:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
/* method model#MClass#mclassdefs for (self: MClass): Array[MClassDef] */
val* nit___nit__MClass___mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 417);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#to_s for (self: MClass): String */
val* nit___nit__MClass___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var3 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
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
/* method model#MClass#intro for (self: MClass): MClassDef */
val* nit___nit__MClass___intro(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#intro= for (self: MClass, MClassDef) */
void nit___nit__MClass___intro_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___intro].val = p0; /* _intro on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#in_hierarchy for (self: MClass, MModule): POSetElement[MClass] */
val* nit___nit__MClass___in_hierarchy(val* self, val* p0) {
val* var /* : POSetElement[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : POSet[MClass] */;
val* var2 /* : POSetElement[nullable Object] */;
var_mmodule = p0;
{
var1 = nit__model___MModule___flatten_mclass_hierarchy(var_mmodule);
}
{
var2 = poset___poset__POSet____91d_93d(var1, self);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type for (self: MClass): MClassType */
val* nit___nit__MClass___mclass_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#mclass_type= for (self: MClass, MClassType) */
void nit___nit__MClass___mclass_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClass___mclass_type].val = p0; /* _mclass_type on <self:MClass> */
RET_LABEL:;
}
/* method model#MClass#get_mtype for (self: MClass, Array[MType]): MClassType */
val* nit___nit__MClass___get_mtype(val* self, val* p0) {
val* var /* : MClassType */;
val* var_mtype_arguments /* var mtype_arguments: Array[MType] */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MClassType */;
val* var19 /* : MClassType */;
val* var20 /* : HashMap[Array[MType], MGenericType] */;
val* var22 /* : HashMap[Array[MType], MGenericType] */;
val* var23 /* : nullable Object */;
val* var_res /* var res: nullable MGenericType */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MGenericType */;
val* var31 /* : HashMap[Array[MType], MGenericType] */;
val* var33 /* : HashMap[Array[MType], MGenericType] */;
val* var34 /* : Array[nullable Object] */;
var_mtype_arguments = p0;
{
{ /* Inline array#AbstractArrayRead#length (var_mtype_arguments) on <var_mtype_arguments:Array[MType]> */
var3 = var_mtype_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mtype_arguments:Array[MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var6 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var9 = var1 == var4;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 461);
show_backtrace(1);
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var12 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = 0;
{
{ /* Inline kernel#Int#== (var10,var13) on <var10:Int> */
var16 = var10 == var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline model#MClass#mclass_type (self) on <self:MClass> */
var19 = self->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var22 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 470);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var20, var_mtype_arguments);
}
var_res = var23;
var24 = NULL;
if (var_res == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var24) on <var_res:nullable MGenericType> */
var_other = var24;
{
var28 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MGenericType(MGenericType)>*/;
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var = var_res;
goto RET_LABEL;
} else {
}
var30 = NEW_nit__MGenericType(&type_nit__MGenericType);
{
((void (*)(val* self, val* p0))(var30->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var30, self) /* mclass= on <var30:MGenericType>*/;
}
{
((void (*)(val* self, val* p0))(var30->class->vft[COLOR_nit__model__MClassType__arguments_61d]))(var30, var_mtype_arguments) /* arguments= on <var30:MGenericType>*/;
}
{
((void (*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30) /* init on <var30:MGenericType>*/;
}
var_res = var30;
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var33 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 470);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard__array___Collection___to_a(var_mtype_arguments);
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var31, var34, var_res); /* Direct call hash_collection#HashMap#[]= on <var31:HashMap[Array[MType], MGenericType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#get_mtype_cache for (self: MClass): HashMap[Array[MType], MGenericType] */
val* nit___nit__MClass___get_mtype_cache(val* self) {
val* var /* : HashMap[Array[MType], MGenericType] */;
val* var1 /* : HashMap[Array[MType], MGenericType] */;
var1 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 470);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule for (self: MClassDef): MModule */
val* nit___nit__MClassDef___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mmodule= for (self: MClassDef, MModule) */
void nit___nit__MClassDef___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___mmodule].val = p0; /* _mmodule on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#mclass for (self: MClassDef): MClass */
val* nit___nit__MClassDef___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mclass= for (self: MClassDef, MClass) */
void nit___nit__MClassDef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___mclass].val = p0; /* _mclass on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#bound_mtype for (self: MClassDef): MClassType */
val* nit___nit__MClassDef___bound_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#bound_mtype= for (self: MClassDef, MClassType) */
void nit___nit__MClassDef___bound_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val = p0; /* _bound_mtype on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#location for (self: MClassDef): Location */
val* nit___nit__MClassDef___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 507);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#location= for (self: MClassDef, Location) */
void nit___nit__MClassDef___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___location].val = p0; /* _location on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#to_s for (self: MClassDef): String */
val* nit___nit__MClassDef___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___to_s].val; /* _to_s on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 510);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#to_s= for (self: MClassDef, String) */
void nit___nit__MClassDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___to_s].val = p0; /* _to_s on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#init for (self: MClassDef) */
void nit___nit__MClassDef___standard__kernel__Object__init(val* self) {
val* var /* : MClassType */;
val* var2 /* : MClassType */;
val* var3 /* : MClass */;
val* var5 /* : MClass */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Array[MClassDef] */;
val* var12 /* : Array[MClassDef] */;
val* var13 /* : MClass */;
val* var15 /* : MClass */;
val* var16 /* : Array[MClassDef] */;
val* var18 /* : Array[MClassDef] */;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClass */;
val* var35 /* : MClass */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : MClass */;
val* var40 /* : MClass */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : MClass */;
val* var51 /* : MClass */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MClassDef___standard__kernel__Object__init]))(self) /* init on <self:MClassDef>*/;
}
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var) on <var:MClassType> */
var5 = var->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass= (self,var3) on <self:MClassDef> */
self->attrs[COLOR_nit__model__MClassDef___mclass].val = var3; /* _mclass on <self:MClassDef> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var9 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MModule#mclassdefs (var7) on <var7:MModule> */
var12 = var7->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <var7:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var10, self); /* Direct call array#Array#add on <var10:Array[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var15 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClass#mclassdefs (var13) on <var13:MClass> */
var18 = var13->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var13:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 417);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var16, self); /* Direct call array#Array#add on <var16:Array[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var21 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var27 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var22,var25) on <var22:MModule> */
var_other = var25;
{
{ /* Inline kernel#Object#is_same_instance (var22,var_other) on <var22:MModule> */
var32 = var22 == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var35 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = var33->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <var33:MClass> */
var37 = !var36;
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 520);
show_backtrace(1);
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var40 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClass#intro= (var38,self) on <var38:MClass> */
var38->attrs[COLOR_nit__model__MClass___intro].val = self; /* _intro on <var38:MClass> */
RET_LABEL41:(void)0;
}
}
} else {
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var44 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce) {
var45 = varonce;
} else {
var46 = "#";
var47 = 1;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var51 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var52 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 3;
var54 = NEW_standard__NativeArray(var53, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var54)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var54)->values[1] = (val*) var45;
((struct instance_standard__NativeArray*)var54)->values[2] = (val*) var49;
{
((void (*)(val* self, val* p0, long p1))(var52->class->vft[COLOR_standard__array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val* self))(var52->class->vft[COLOR_standard__string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
{ /* Inline model#MClassDef#to_s= (self,var55) on <self:MClassDef> */
self->attrs[COLOR_nit__model__MClassDef___to_s].val = var55; /* _to_s on <self:MClassDef> */
RET_LABEL56:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassDef#name for (self: MClassDef): String */
val* nit___nit__MClassDef___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
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
/* method model#MClassDef#full_name for (self: MClassDef): String */
val* nit___nit__MClassDef___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : MVisibility */;
val* var14 /* : MVisibility */;
val* var15 /* : String */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : MClass */;
val* var22 /* : MClass */;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MModule */;
val* var35 /* : MModule */;
val* var36 /* : nullable MProject */;
val* var37 /* : MModule */;
val* var39 /* : MModule */;
val* var40 /* : nullable MProject */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : MClass */;
val* var57 /* : MClass */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
val* var63 /* : MClass */;
val* var65 /* : MClass */;
val* var66 /* : MVisibility */;
val* var68 /* : MVisibility */;
val* var69 /* : MVisibility */;
short int var70 /* : Bool */;
val* var71 /* : MModule */;
val* var73 /* : MModule */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : MClass */;
val* var82 /* : MClass */;
val* var83 /* : String */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
val* var90 /* : MModule */;
val* var92 /* : MModule */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : MClass */;
val* var101 /* : MClass */;
val* var102 /* : MModule */;
val* var104 /* : MModule */;
val* var105 /* : String */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : MClass */;
val* var115 /* : MClass */;
val* var116 /* : String */;
val* var118 /* : String */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___full_name].val != NULL; /* _full_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClassDef___full_name].val; /* _full_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 529);
show_backtrace(1);
}
} else {
{
{
var5 = nit___nit__MClassDef___is_intro(self);
}
if (var5){
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var8 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var11 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var9:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit___nit__MModule___namespace_for(var6, var12);
}
if (varonce) {
var16 = varonce;
} else {
var17 = "#";
var18 = 1;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var22 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClass#name (var20) on <var20:MClass> */
var25 = var20->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var20:MClass> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var26 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_standard__NativeArray(var27, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var28)->values[0] = (val*) var15;
((struct instance_standard__NativeArray*)var28)->values[1] = (val*) var16;
((struct instance_standard__NativeArray*)var28)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var26->class->vft[COLOR_standard__array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val* self))(var26->class->vft[COLOR_standard__string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
var3 = var29;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var32 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nit___nit__MModule___mproject(var33);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var39 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nit___nit__MModule___mproject(var37);
}
if (var36 == NULL) {
var41 = (var40 != NULL);
} else {
{ /* Inline kernel#Object#!= (var36,var40) on <var36:nullable MProject> */
var_other = var40;
{
var44 = ((short int (*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var36, var_other) /* == on <var36:nullable MProject(MProject)>*/;
}
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var48 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = nit___nit__MModule___nit__model_base__MEntity__full_name(var46);
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "#";
var53 = 1;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var57 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = nit___nit__MClass___nit__model_base__MEntity__full_name(var55);
}
var59 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 3;
var61 = NEW_standard__NativeArray(var60, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var61)->values[0] = (val*) var49;
((struct instance_standard__NativeArray*)var61)->values[1] = (val*) var51;
((struct instance_standard__NativeArray*)var61)->values[2] = (val*) var58;
{
((void (*)(val* self, val* p0, long p1))(var59->class->vft[COLOR_standard__array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var62 = ((val* (*)(val* self))(var59->class->vft[COLOR_standard__string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
var3 = var62;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var65 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var63) on <var63:MClass> */
var68 = var63->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var63:MClass> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nit__model_base___standard__Object___private_visibility(self);
}
{
var70 = standard___standard__Comparable____62d(var66, var69);
}
if (var70){
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var73 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = nit___nit__MModule___nit__model_base__MEntity__full_name(var71);
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "#";
var78 = 1;
var79 = standard___standard__NativeString___to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var82 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline model#MClass#name (var80) on <var80:MClass> */
var85 = var80->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var80:MClass> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var86 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 3;
var88 = NEW_standard__NativeArray(var87, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var88)->values[0] = (val*) var74;
((struct instance_standard__NativeArray*)var88)->values[1] = (val*) var76;
((struct instance_standard__NativeArray*)var88)->values[2] = (val*) var83;
{
((void (*)(val* self, val* p0, long p1))(var86->class->vft[COLOR_standard__array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val* self))(var86->class->vft[COLOR_standard__string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
var3 = var89;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var92 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = nit___nit__MModule___nit__model_base__MEntity__full_name(var90);
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "#::";
var97 = 3;
var98 = standard___standard__NativeString___to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var101 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var99) on <var99:MClass> */
var104 = var99->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var99:MClass> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var102) on <var102:MModule> */
var107 = var102->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var102:MModule> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "::";
var111 = 2;
var112 = standard___standard__NativeString___to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var115 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline model#MClass#name (var113) on <var113:MClass> */
var118 = var113->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var113:MClass> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
var119 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 5;
var121 = NEW_standard__NativeArray(var120, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var121)->values[0] = (val*) var93;
((struct instance_standard__NativeArray*)var121)->values[1] = (val*) var95;
((struct instance_standard__NativeArray*)var121)->values[2] = (val*) var105;
((struct instance_standard__NativeArray*)var121)->values[3] = (val*) var109;
((struct instance_standard__NativeArray*)var121)->values[4] = (val*) var116;
{
((void (*)(val* self, val* p0, long p1))(var119->class->vft[COLOR_standard__array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
}
{
var122 = ((val* (*)(val* self))(var119->class->vft[COLOR_standard__string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
}
var3 = var122;
goto RET_LABEL4;
}
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClassDef___full_name].val = var3; /* _full_name on <self:MClassDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClassDef#c_name for (self: MClassDef): String */
val* nit___nit__MClassDef___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : MVisibility */;
val* var14 /* : MVisibility */;
val* var15 /* : String */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : MClass */;
val* var22 /* : MClass */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
short int var28 /* : Bool */;
val* var29 /* : MClass */;
val* var31 /* : MClass */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
val* var35 /* : nullable MProject */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var39 /* : nullable MProject */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
val* var46 /* : MClass */;
val* var48 /* : MClass */;
val* var49 /* : MVisibility */;
val* var51 /* : MVisibility */;
val* var52 /* : MVisibility */;
short int var53 /* : Bool */;
val* var54 /* : MModule */;
val* var56 /* : MModule */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : MClass */;
val* var65 /* : MClass */;
val* var66 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
val* var74 /* : MModule */;
val* var76 /* : MModule */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : MClass */;
val* var85 /* : MClass */;
val* var86 /* : String */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___c_name].val != NULL; /* _c_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClassDef___c_name].val; /* _c_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 554);
show_backtrace(1);
}
} else {
{
{
var5 = nit___nit__MClassDef___is_intro(self);
}
if (var5){
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var8 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var11 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var9:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit___nit__MModule___c_namespace_for(var6, var12);
}
if (varonce) {
var16 = varonce;
} else {
var17 = "___";
var18 = 3;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var22 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit___nit__MClass___nit__model_base__MEntity__c_name(var20);
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 3;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var15;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var16;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
var3 = var27;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var31 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var29) on <var29:MClass> */
var34 = var29->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var29:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit___nit__MModule___mproject(var32);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var38 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nit___nit__MModule___mproject(var36);
}
if (var35 == NULL) {
var40 = (var39 == NULL);
} else {
{ /* Inline kernel#Object#== (var35,var39) on <var35:nullable MProject> */
var_other = var39;
{
{ /* Inline kernel#Object#is_same_instance (var35,var_other) on <var35:nullable MProject(MProject)> */
var45 = var35 == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
var_ = var40;
if (var40){
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var48 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var46) on <var46:MClass> */
var51 = var46->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var46:MClass> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = nit__model_base___standard__Object___private_visibility(self);
}
{
var53 = standard___standard__Comparable____62d(var49, var52);
}
var28 = var53;
} else {
var28 = var_;
}
if (var28){
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var56 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit___nit__MModule___nit__model_base__MEntity__c_name(var54);
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "___";
var61 = 3;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var65 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model#MClass#name (var63) on <var63:MClass> */
var68 = var63->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var63:MClass> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = standard___standard__Text___to_cmangle(var66);
}
var70 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 3;
var72 = NEW_standard__NativeArray(var71, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var72)->values[0] = (val*) var57;
((struct instance_standard__NativeArray*)var72)->values[1] = (val*) var59;
((struct instance_standard__NativeArray*)var72)->values[2] = (val*) var69;
{
((void (*)(val* self, val* p0, long p1))(var70->class->vft[COLOR_standard__array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val* self))(var70->class->vft[COLOR_standard__string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
var3 = var73;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var76 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nit___nit__MModule___nit__model_base__MEntity__c_name(var74);
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "___";
var81 = 3;
var82 = standard___standard__NativeString___to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var85 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = nit___nit__MClass___nit__model_base__MEntity__c_name(var83);
}
var87 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 3;
var89 = NEW_standard__NativeArray(var88, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var89)->values[0] = (val*) var77;
((struct instance_standard__NativeArray*)var89)->values[1] = (val*) var79;
((struct instance_standard__NativeArray*)var89)->values[2] = (val*) var86;
{
((void (*)(val* self, val* p0, long p1))(var87->class->vft[COLOR_standard__array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val* self))(var87->class->vft[COLOR_standard__string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
var3 = var90;
goto RET_LABEL4;
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MClassDef___c_name].val = var3; /* _c_name on <self:MClassDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MClassDef#model for (self: MClassDef): Model */
val* nit___nit__MClassDef___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var1) on <var1:MModule> */
var6 = var1->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var1:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
/* method model#MClassDef#supertypes for (self: MClassDef): Array[MClassType] */
val* nit___nit__MClassDef___supertypes(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#set_supertypes for (self: MClassDef, Array[MClassType]) */
void nit___nit__MClassDef___set_supertypes(val* self, val* p0) {
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
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : MClass */;
val* var44 /* : MClass */;
val* var45 /* : MModule */;
val* var47 /* : MModule */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : POSet[MClassType] */;
val* var55 /* : POSet[MClassType] */;
var_supertypes = p0;
{
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 576);
show_backtrace(1);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var12 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mmodule = var10;
{
{ /* Inline mmodule#MModule#model (var_mmodule) on <var_mmodule:MModule> */
var15 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var_mmodule:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_model = var13;
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var18 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mtype = var16;
var_ = var_supertypes;
{
var19 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_20);
}
if (var21){
{
var22 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_20);
}
var_supertype = var22;
{
{ /* Inline model#MClassDef#supertypes (self) on <self:MClassDef> */
var25 = self->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var23, var_supertype); /* Direct call array#Array#add on <var23:Array[MClassType]>*/
}
{
{ /* Inline model#Model#full_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var28 = var_model->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 57);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
poset___poset__POSet___add_edge(var26, var_mtype, var_supertype); /* Direct call poset#POSet#add_edge on <var26:POSet[MClassType]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var32 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
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
var40 = var33 == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_41 = var36;
if (var36){
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var44 = var_supertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var42) on <var42:MClass> */
var47 = var42->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var42:MClass> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var45,var_mmodule) on <var45:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var45,var_other) on <var45:MModule> */
var52 = var45 == var_other;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var29 = var48;
} else {
var29 = var_41;
}
if (var29){
{
{ /* Inline model#Model#intro_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var55 = var_model->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 46);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
poset___poset__POSet___add_edge(var53, var_mtype, var_supertype); /* Direct call poset#POSet#add_edge on <var53:POSet[MClassType]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:ArrayIterator[MClassType]> */
RET_LABEL56:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: MClassDef) */
void nit___nit__MClassDef___add_in_hierarchy(val* self) {
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
val* var19 /* : POSetElement[nullable Object] */;
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
val* var32 /* : POSet[nullable Object] */;
val* var34 /* : POSet[nullable Object] */;
{
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 601);
show_backtrace(1);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var12 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var10) on <var10:MModule> */
var15 = var10->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var10:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_model = var13;
{
{ /* Inline model#Model#mclassdef_hierarchy (var_model) on <var_model:Model> */
var18 = var_model->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var_model:Model> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 40);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = poset___poset__POSet___add_node(var16, self);
}
var_res = var19;
{
{ /* Inline model#MClassDef#in_hierarchy= (self,var_res) on <self:MClassDef> */
self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val = var_res; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var23 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mtype = var21;
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var26 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nit___nit__MClassType___MType__collect_mclassdefs(var_mtype, var24);
}
var_ = var27;
{
var28 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClassDef]>*/;
}
var_29 = var28;
for(;;) {
{
var30 = ((short int (*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_29) /* is_ok on <var_29:Iterator[MClassDef]>*/;
}
if (var30){
{
var31 = ((val* (*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_29) /* item on <var_29:Iterator[MClassDef]>*/;
}
var_mclassdef = var31;
{
{ /* Inline poset#POSetElement#poset (var_res) on <var_res:POSetElement[MClassDef]> */
var34 = var_res->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <var_res:POSetElement[MClassDef]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 383);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
poset___poset__POSet___add_edge(var32, self, var_mclassdef); /* Direct call poset#POSet#add_edge on <var32:POSet[nullable Object](POSet[MClassDef])>*/
}
{
((void (*)(val* self))(var_29->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_29) /* next on <var_29:Iterator[MClassDef]>*/;
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
/* method model#MClassDef#in_hierarchy for (self: MClassDef): nullable POSetElement[MClassDef] */
val* nit___nit__MClassDef___in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#in_hierarchy= for (self: MClassDef, nullable POSetElement[MClassDef]) */
void nit___nit__MClassDef___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val = p0; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL:;
}
/* method model#MClassDef#is_intro for (self: MClassDef): Bool */
short int nit___nit__MClassDef___is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
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
var11 = var4 == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassDef#intro_mproperties for (self: MClassDef): Array[MProperty] */
val* nit___nit__MClassDef___intro_mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 620);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassDef#mpropdefs for (self: MClassDef): Array[MPropDef] */
val* nit___nit__MClassDef___mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mpropdefs].val; /* _mpropdefs on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 623);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#name for (self: MType): String */
val* nit___nit__MType___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self) /* to_s on <self:MType>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#is_subtype for (self: MType, MModule, nullable MClassType, MType): Bool */
short int nit___nit__MType___is_subtype(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sup /* var sup: MType */;
val* var_sub /* var sub: MType */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : MType */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : MType */;
short int var24 /* : Bool */;
short int var_sup_accept_null /* var sup_accept_null: Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
short int var26 /* : Bool */;
val* var27 /* : MType */;
val* var29 /* : MType */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MType */;
val* var41 /* : MType */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var_ /* var : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var_other62 /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : MType */;
val* var73 /* : MType */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
short int var_84 /* var : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : null */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : MClassType */;
val* var_resolved_sub /* var resolved_sub: MClassType */;
val* var110 /* : Set[MClass] */;
val* var111 /* : MClass */;
val* var113 /* : MClass */;
short int var114 /* : Bool */;
short int var_res /* var res: Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : MClass */;
val* var127 /* : MClass */;
val* var128 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
val* var129 /* : MClass */;
val* var131 /* : MClass */;
val* var132 /* : MClass */;
val* var134 /* : MClass */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
long var140 /* : Int */;
long var_i /* var i: Int */;
val* var141 /* : MClass */;
val* var143 /* : MClass */;
long var144 /* : Int */;
long var146 /* : Int */;
long var_147 /* var : Int */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name;
short int var153 /* : Bool */;
val* var154 /* : Array[MType] */;
val* var155 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var156 /* : Array[MType] */;
val* var158 /* : Array[MType] */;
val* var159 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
long var166 /* : Int */;
long var167 /* : Int */;
short int var169 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
var_sup = p2;
var_sub = self;
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType> */
var5 = var_sub == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var6 = 1;
var = var6;
goto RET_LABEL;
} else {
}
var7 = NULL;
if (var_anchor == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,var7) on <var_anchor:nullable MClassType> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var13 = var_anchor == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var14 = ((short int (*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sub) /* need_anchor on <var_sub:MType>*/;
}
var15 = !var14;
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 672);
show_backtrace(1);
}
{
var16 = ((short int (*)(val* self))(var_sup->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sup) /* need_anchor on <var_sup:MType>*/;
}
var17 = !var16;
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 673);
show_backtrace(1);
}
} else {
var18 = NULL;
{
var19 = ((short int (*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_sub, var_anchor, var18, var_mmodule) /* can_resolve_for on <var_sub:MType>*/;
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 676);
show_backtrace(1);
}
{
var20 = ((val* (*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_sub, var_mmodule, var_anchor) /* lookup_fixed on <var_sub:MType>*/;
}
var_sub = var20;
var21 = NULL;
{
var22 = ((short int (*)(val* self, val* p0, val* p1, val* p2))(var_sup->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_sup, var_anchor, var21, var_mmodule) /* can_resolve_for on <var_sup:MType>*/;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 678);
show_backtrace(1);
}
{
var23 = ((val* (*)(val* self, val* p0, val* p1))(var_sup->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_sup, var_mmodule, var_anchor) /* lookup_fixed on <var_sup:MType>*/;
}
var_sup = var23;
}
var24 = 0;
var_sup_accept_null = var24;
/* <var_sup:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_sup->type->table_size) {
var25 = 0;
} else {
var25 = var_sup->type->type_table[cltype] == idtype;
}
if (var25){
var26 = 1;
var_sup_accept_null = var26;
{
{ /* Inline model#MNullableType#mtype (var_sup) on <var_sup:MType(MNullableType)> */
var29 = var_sup->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_sup:MType(MNullableType)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_sup = var27;
} else {
/* <var_sup:MType> isa MNullType */
cltype31 = type_nit__MNullType.color;
idtype32 = type_nit__MNullType.id;
if(cltype31 >= var_sup->type->table_size) {
var30 = 0;
} else {
var30 = var_sup->type->type_table[cltype31] == idtype32;
}
if (var30){
var33 = 1;
var_sup_accept_null = var33;
} else {
}
}
/* <var_sub:MType> isa MNullableType */
cltype35 = type_nit__MNullableType.color;
idtype36 = type_nit__MNullableType.id;
if(cltype35 >= var_sub->type->table_size) {
var34 = 0;
} else {
var34 = var_sub->type->type_table[cltype35] == idtype36;
}
if (var34){
var37 = !var_sup_accept_null;
if (var37){
var38 = 0;
var = var38;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MNullableType#mtype (var_sub) on <var_sub:MType(MNullableType)> */
var41 = var_sub->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_sub = var39;
} else {
/* <var_sub:MType> isa MNullType */
cltype43 = type_nit__MNullType.color;
idtype44 = type_nit__MNullType.id;
if(cltype43 >= var_sub->type->table_size) {
var42 = 0;
} else {
var42 = var_sub->type->type_table[cltype43] == idtype44;
}
if (var42){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
for(;;) {
/* <var_sub:MType> isa MParameterType */
cltype47 = type_nit__MParameterType.color;
idtype48 = type_nit__MParameterType.id;
if(cltype47 >= var_sub->type->table_size) {
var46 = 0;
} else {
var46 = var_sub->type->type_table[cltype47] == idtype48;
}
var_ = var46;
if (var46){
var45 = var_;
} else {
/* <var_sub:MType> isa MVirtualType */
cltype50 = type_nit__MVirtualType.color;
idtype51 = type_nit__MVirtualType.id;
if(cltype50 >= var_sub->type->table_size) {
var49 = 0;
} else {
var49 = var_sub->type->type_table[cltype50] == idtype51;
}
var45 = var49;
}
if (var45){
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType> */
var56 = var_sub == var_other;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
var57 = 1;
var = var57;
goto RET_LABEL;
} else {
}
var58 = NULL;
if (var_anchor == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var58) on <var_anchor:nullable MClassType> */
var_other62 = var58;
{
var63 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other62) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var64 = !var63;
var60 = var64;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (unlikely(!var59)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 710);
show_backtrace(1);
}
{
var65 = ((val* (*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__lookup_bound]))(var_sub, var_mmodule, var_anchor) /* lookup_bound on <var_sub:MType>*/;
}
var_sub = var65;
/* <var_sub:MType> isa MNullableType */
cltype67 = type_nit__MNullableType.color;
idtype68 = type_nit__MNullableType.id;
if(cltype67 >= var_sub->type->table_size) {
var66 = 0;
} else {
var66 = var_sub->type->type_table[cltype67] == idtype68;
}
if (var66){
var69 = !var_sup_accept_null;
if (var69){
var70 = 0;
var = var70;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MNullableType#mtype (var_sub) on <var_sub:MType(MNullableType)> */
var73 = var_sub->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_sub = var71;
} else {
/* <var_sub:MType> isa MNullType */
cltype75 = type_nit__MNullType.color;
idtype76 = type_nit__MNullType.id;
if(cltype75 >= var_sub->type->table_size) {
var74 = 0;
} else {
var74 = var_sub->type->type_table[cltype75] == idtype76;
}
if (var74){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_sub:MType> isa MClassType */
cltype78 = type_nit__MClassType.color;
idtype79 = type_nit__MClassType.id;
if(cltype78 >= var_sub->type->table_size) {
var77 = 0;
} else {
var77 = var_sub->type->type_table[cltype78] == idtype79;
}
if (unlikely(!var77)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 725);
show_backtrace(1);
}
/* <var_sup:MType> isa MParameterType */
cltype82 = type_nit__MParameterType.color;
idtype83 = type_nit__MParameterType.id;
if(cltype82 >= var_sup->type->table_size) {
var81 = 0;
} else {
var81 = var_sup->type->type_table[cltype82] == idtype83;
}
var_84 = var81;
if (var81){
var80 = var_84;
} else {
/* <var_sup:MType> isa MVirtualType */
cltype86 = type_nit__MVirtualType.color;
idtype87 = type_nit__MVirtualType.id;
if(cltype86 >= var_sup->type->table_size) {
var85 = 0;
} else {
var85 = var_sup->type->type_table[cltype86] == idtype87;
}
var80 = var85;
}
if (var80){
var88 = 0;
var = var88;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MNullType */
cltype90 = type_nit__MNullType.color;
idtype91 = type_nit__MNullType.id;
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
cltype94 = type_nit__MClassType.color;
idtype95 = type_nit__MClassType.id;
if(cltype94 >= var_sup->type->table_size) {
var93 = 0;
} else {
var93 = var_sup->type->type_table[cltype94] == idtype95;
}
if (unlikely(!var93)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 737);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType(MClassType)> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType(MClassType)> */
var100 = var_sub == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
var101 = 1;
var = var101;
goto RET_LABEL;
} else {
}
var102 = NULL;
if (var_anchor == NULL) {
var103 = 1; /* is null */
} else {
var103 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,var102) on <var_anchor:nullable MClassType> */
var_other = var102;
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var108 = var_anchor == var_other;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
var103 = var104;
}
if (var103){
var_anchor = var_sub;
} else {
}
{
var109 = nit___nit__MClassType___MType__anchor_to(var_sub, var_mmodule, var_anchor);
}
var_resolved_sub = var109;
{
var110 = nit___nit__MClassType___MType__collect_mclasses(var_resolved_sub, var_mmodule);
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MClassType)> */
var113 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MClassType)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = ((short int (*)(val* self, val* p0))(var110->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var110, var111) /* has on <var110:Set[MClass]>*/;
}
var_res = var114;
var115 = 0;
{
{ /* Inline kernel#Bool#== (var_res,var115) on <var_res:Bool> */
var118 = var_res == var115;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
if (var116){
var119 = 0;
var = var119;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype121 = type_nit__MGenericType.color;
idtype122 = type_nit__MGenericType.id;
if(cltype121 >= var_sup->type->table_size) {
var120 = 0;
} else {
var120 = var_sup->type->type_table[cltype121] == idtype122;
}
var123 = !var120;
if (var123){
var124 = 1;
var = var124;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var127 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
var128 = nit___nit__MType___supertype_to(var_sub, var_mmodule, var_anchor, var125);
}
var_sub2 = var128;
{
{ /* Inline model#MClassType#mclass (var_sub2) on <var_sub2:MClassType> */
var131 = var_sub2->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sub2:MClassType> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var134 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var129,var132) on <var129:MClass> */
var_other = var132;
{
{ /* Inline kernel#Object#is_same_instance (var129,var_other) on <var129:MClass> */
var139 = var129 == var_other;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
if (unlikely(!var135)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 749);
show_backtrace(1);
}
var140 = 0;
var_i = var140;
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var143 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline model#MClass#arity (var141) on <var141:MClass> */
var146 = var141->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var141:MClass> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_147 = var144;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_147) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_147:Int> isa OTHER */
/* <var_147:Int> isa OTHER */
var150 = 1; /* easy <var_147:Int> isa OTHER*/
if (unlikely(!var150)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var153 = var_i < var_147;
var148 = var153;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
if (var148){
{
var154 = ((val* (*)(val* self))(var_sub2->class->vft[COLOR_nit__model__MClassType__arguments]))(var_sub2) /* arguments on <var_sub2:MClassType>*/;
}
{
var155 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var154, var_i);
}
var_sub_arg = var155;
{
{ /* Inline model#MGenericType#arguments (var_sup) on <var_sup:MType(MGenericType)> */
var158 = var_sup->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_sup:MType(MGenericType)> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
var159 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var156, var_i);
}
var_sup_arg = var159;
{
var160 = nit___nit__MType___is_subtype(var_sub_arg, var_mmodule, var_anchor, var_sup_arg);
}
var_res = var160;
var161 = 0;
{
{ /* Inline kernel#Bool#== (var_res,var161) on <var_res:Bool> */
var164 = var_res == var161;
var162 = var164;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
if (var162){
var165 = 0;
var = var165;
goto RET_LABEL;
} else {
}
var166 = 1;
{
var167 = standard___standard__Int___Discrete__successor(var_i, var166);
}
var_i = var167;
} else {
goto BREAK_label168;
}
}
BREAK_label168: (void)0;
var169 = 1;
var = var169;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#anchor_to for (self: MType, MModule, MClassType): MType */
val* nit___nit__MType___anchor_to(val* self, val* p0, val* p1) {
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
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
}
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
{
var3 = ((short int (*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MType__need_anchor]))(var_anchor) /* need_anchor on <var_anchor:MClassType>*/;
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 796);
show_backtrace(1);
}
var5 = NULL;
var6 = 1;
{
var7 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__model__MType__resolve_for]))(self, var_anchor, var5, var_mmodule, var6) /* resolve_for on <self:MType>*/;
}
var_res = var7;
{
var8 = ((short int (*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__need_anchor]))(var_res) /* need_anchor on <var_res:MType>*/;
}
var9 = !var8;
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 799);
show_backtrace(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#need_anchor for (self: MType): Bool */
short int nit___nit__MType___need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#supertype_to for (self: MType, MModule, nullable MClassType, MClass): MClassType */
val* nit___nit__MType___supertype_to(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_super_mclass /* var super_mclass: MClass */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var13 /* : MClass */;
val* var15 /* : MClass */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MType */;
val* var_resolved_self /* var resolved_self: nullable Object */;
val* var30 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_31 /* var : Set[MClassType] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : Iterator[MClassType] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var36 /* : MClass */;
val* var38 /* : MClass */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : MType */;
var_mmodule = p0;
var_anchor = p1;
var_super_mclass = p2;
{
{ /* Inline model#MClass#arity (var_super_mclass) on <var_super_mclass:MClass> */
var3 = var_super_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_super_mclass:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 0;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var7 = var1 == var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline model#MClass#mclass_type (var_super_mclass) on <var_super_mclass:MClass> */
var10 = var_super_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_super_mclass:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
} else {
}
/* <self:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= self->type->table_size) {
var12 = 0;
} else {
var12 = self->type->type_table[cltype] == idtype;
}
var_ = var12;
if (var12){
{
{ /* Inline model#MClassType#mclass (self) on <self:MType(MClassType)> */
var15 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MType(MClassType)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var13,var_super_mclass) on <var13:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:MClass> */
var20 = var13 == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var11 = var16;
} else {
var11 = var_;
}
if (var11){
var = self;
goto RET_LABEL;
} else {
}
{
var21 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
}
if (var21){
var22 = NULL;
if (var_anchor == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var22) on <var_anchor:nullable MClassType> */
var_other26 = var22;
{
var27 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other26) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var28 = !var27;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 829);
show_backtrace(1);
}
{
var29 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MType__anchor_to]))(self, var_mmodule, var_anchor) /* anchor_to on <self:MType>*/;
}
var_resolved_self = var29;
} else {
var_resolved_self = self;
}
{
var30 = ((val* (*)(val* self, val* p0))(var_resolved_self->class->vft[COLOR_nit__model__MType__collect_mtypes]))(var_resolved_self, var_mmodule) /* collect_mtypes on <var_resolved_self:nullable Object(MType)>*/;
}
var_supertypes = var30;
var_31 = var_supertypes;
{
var32 = ((val* (*)(val* self))(var_31->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_31) /* iterator on <var_31:Set[MClassType]>*/;
}
var_33 = var32;
for(;;) {
{
var34 = ((short int (*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_33) /* is_ok on <var_33:Iterator[MClassType]>*/;
}
if (var34){
{
var35 = ((val* (*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_33) /* item on <var_33:Iterator[MClassType]>*/;
}
var_supertype = var35;
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var38 = var_supertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var36,var_super_mclass) on <var36:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var36,var_other) on <var36:MClass> */
var43 = var36 == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var44 = 0;
{
var45 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_supertype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_supertype, self, var_anchor, var_mmodule, var44) /* resolve_for on <var_supertype:MClassType>*/;
}
var = var45;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_33->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_33) /* next on <var_33:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_33) on <var_33:Iterator[MClassType]> */
RET_LABEL46:(void)0;
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 841);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#lookup_bound for (self: MType, MModule, MType): MType */
val* nit___nit__MType___lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#lookup_fixed for (self: MType, MModule, MType): MType */
val* nit___nit__MType___lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#can_resolve_for for (self: MType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MType___can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "can_resolve_for", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 942);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable for (self: MType): MType */
val* nit___nit__MType___as_nullable(val* self) {
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
val* var10 /* : MNullableType */;
{
{ /* Inline model#MType#as_nullable_cache (self) on <self:MType> */
var3 = self->attrs[COLOR_nit__model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
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
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MType(MType)>*/;
}
var9 = !var8;
var6 = var9;
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
var10 = NEW_nit__MNullableType(&type_nit__MNullableType);
{
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_nit__model__MNullableType__mtype_61d]))(var10, self) /* mtype= on <var10:MNullableType>*/;
}
{
((void (*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10) /* init on <var10:MNullableType>*/;
}
var_res = var10;
{
{ /* Inline model#MType#as_nullable_cache= (self,var_res) on <self:MType> */
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var_res; /* _as_nullable_cache on <self:MType> */
RET_LABEL11:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_notnullable for (self: MType): MType */
val* nit___nit__MType___as_notnullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache for (self: MType): nullable MType */
val* nit___nit__MType___as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable_cache= for (self: MType, nullable MType) */
void nit___nit__MType___as_nullable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = p0; /* _as_nullable_cache on <self:MType> */
RET_LABEL:;
}
/* method model#MType#length for (self: MType): Int */
long nit___nit__MType___length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclassdefs for (self: MType, MModule): Set[MClassDef] */
val* nit___nit__MType___collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclassdefs", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1018);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: MType, MModule): Set[MClass] */
val* nit___nit__MType___collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1028);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: MType, MModule): Set[MClassType] */
val* nit___nit__MType___collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1034);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MType#has_mproperty for (self: MType, MModule, MProperty): Bool */
short int nit___nit__MType___has_mproperty(val* self, val* p0, val* p1) {
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
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self) /* need_anchor on <self:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1047);
show_backtrace(1);
}
{
var3 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(self, var_mmodule) /* collect_mclassdefs on <self:MType>*/;
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:MProperty> */
var6 = var_mproperty->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int (*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var4) /* has on <var3:Set[MClassDef]>*/;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass for (self: MClassType): MClass */
val* nit___nit__MClassType___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#mclass= for (self: MClassType, MClass) */
void nit___nit__MClassType___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___mclass].val = p0; /* _mclass on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#model for (self: MClassType): Model */
val* nit___nit__MClassType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
/* method model#MClassType#arguments for (self: MClassType): Array[MType] */
val* nit___nit__MClassType___arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nit__model__MClassType___arguments].val; /* _arguments on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1065);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#arguments= for (self: MClassType, Array[MType]) */
void nit___nit__MClassType___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___arguments].val = p0; /* _arguments on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#to_s for (self: MClassType): String */
val* nit___nit__MClassType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MClass___standard__string__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#full_name for (self: MClassType): String */
val* nit___nit__MClassType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MClass___nit__model_base__MEntity__full_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#c_name for (self: MClassType): String */
val* nit___nit__MClassType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MClass___nit__model_base__MEntity__c_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#need_anchor for (self: MClassType): Bool */
short int nit___nit__MClassType___MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#anchor_to for (self: MClassType, MModule, MClassType): MClassType */
val* nit___nit__MClassType___MType__anchor_to(val* self, val* p0, val* p1) {
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
var1 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__MClassType___MType__anchor_to]))(self, p0, p1) /* anchor_to on <self:MClassType>*/;
}
/* <var1:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1079);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#resolve_for for (self: MClassType, MType, nullable MClassType, MModule, Bool): MClassType */
val* nit___nit__MClassType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
/* method model#MClassType#can_resolve_for for (self: MClassType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MClassType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
/* method model#MClassType#collect_mclassdefs for (self: MClassType, MModule): Set[MClassDef] */
val* nit___nit__MClassType___MType__collect_mclassdefs(val* self, val* p0) {
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
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1088);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#collect_mclassdefs_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1153);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = standard___standard__MapRead___has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
nit___nit__MClassType___collect_things(self, var_mmodule); /* Direct call model#MClassType#collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_cache, var_mmodule);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses for (self: MClassType, MModule): Set[MClass] */
val* nit___nit__MClassType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable MModule */;
val* var3 /* : nullable MModule */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Set[MClass] */;
val* var12 /* : Set[MClass] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : HashMap[MModule, Set[MClass]] */;
val* var17 /* : HashMap[MModule, Set[MClass]] */;
val* var_cache /* var cache: HashMap[MModule, Set[MClass]] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_res /* var res: Set[MClass] */;
var_mmodule = p0;
{
{ /* Inline model#MClassType#collect_mclasses_last_module (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val; /* _collect_mclasses_last_module on <self:MClassType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* <var_mmodule:MModule> cannot be null */
} else {
{ /* Inline kernel#Object#== (var1,var_mmodule) on <var1:nullable MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable MModule(MModule)> */
var9 = var1 == var_other;
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
{
{ /* Inline model#MClassType#collect_mclasses_last_module_cache (self) on <self:MClassType> */
var12 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module_cache].val; /* _collect_mclasses_last_module_cache on <self:MClassType> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_last_module_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1111);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
}
{
var13 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
}
var14 = !var13;
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1099);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:MClassType> */
var17 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1154);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_cache = var15;
{
var18 = standard___standard__MapRead___has_key(var_cache, var_mmodule);
}
var19 = !var18;
if (var19){
{
nit___nit__MClassType___collect_things(self, var_mmodule); /* Direct call model#MClassType#collect_things on <self:MClassType>*/
}
} else {
}
{
var20 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_cache, var_mmodule);
}
var_res = var20;
{
{ /* Inline model#MClassType#collect_mclasses_last_module= (self,var_mmodule) on <self:MClassType> */
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val = var_mmodule; /* _collect_mclasses_last_module on <self:MClassType> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassType#collect_mclasses_last_module_cache= (self,var_res) on <self:MClassType> */
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module_cache].val = var_res; /* _collect_mclasses_last_module_cache on <self:MClassType> */
RET_LABEL22:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_last_module for (self: MClassType): nullable MModule */
val* nit___nit__MClassType___collect_mclasses_last_module(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val; /* _collect_mclasses_last_module on <self:MClassType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_last_module= for (self: MClassType, nullable MModule) */
void nit___nit__MClassType___collect_mclasses_last_module_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val = p0; /* _collect_mclasses_last_module on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mclasses_last_module_cache for (self: MClassType): Set[MClass] */
val* nit___nit__MClassType___collect_mclasses_last_module_cache(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module_cache].val; /* _collect_mclasses_last_module_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_last_module_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1111);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_last_module_cache= for (self: MClassType, Set[MClass]) */
void nit___nit__MClassType___collect_mclasses_last_module_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module_cache].val = p0; /* _collect_mclasses_last_module_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model#MClassType#collect_mtypes for (self: MClassType, MModule): Set[MClassType] */
val* nit___nit__MClassType___MType__collect_mtypes(val* self, val* p0) {
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
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self) /* need_anchor on <self:MClassType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1115);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1155);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = standard___standard__MapRead___has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
nit___nit__MClassType___collect_things(self, var_mmodule); /* Direct call model#MClassType#collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_cache, var_mmodule);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_things for (self: MClassType, MModule) */
void nit___nit__MClassType___collect_things(val* self, val* p0) {
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
var = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[MClassDef]>*/
}
var_res = var;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClass]>*/
}
var_seen = var1;
var2 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[MClassType]>*/
}
var_types = var2;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_seen, var3); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[MClass]>*/
}
var6 = NEW_standard__Array(&type_standard__Array__nit__MClass);
var7 = 1;
{
standard___standard__Array___with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[MClass]>*/
}
var_ = var6;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var10 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var8); /* Direct call array#AbstractArray#push on <var_:Array[MClass]>*/
}
var_todo = var_;
for(;;) {
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_todo);
}
var12 = !var11;
if (var12){
{
var13 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_todo);
}
var_mclass = var13;
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var16 = var_mclass->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 417);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_17 = var14;
{
var18 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_19);
}
if (var20){
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_19);
}
var_mclassdef = var21;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var27 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = poset___poset__POSetElement____60d_61d(var22, var25);
}
var29 = !var28;
if (var29){
goto BREAK_label;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_res, var_mclassdef); /* Direct call hash_collection#HashSet#add on <var_res:HashSet[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 566);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_33 = var30;
{
var34 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_35);
}
if (var36){
{
var37 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_35);
}
var_supertype = var37;
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_types, var_supertype); /* Direct call hash_collection#HashSet#add on <var_types:HashSet[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var40 = var_supertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_superclass = var38;
{
var41 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var_seen, var_superclass);
}
if (var41){
goto BREAK_label42;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_seen, var_superclass); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[MClass]>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_todo, var_superclass); /* Direct call array#Array#add on <var_todo:Array[MClass]>*/
}
BREAK_label42: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_35); /* Direct call array#ArrayIterator#next on <var_35:ArrayIterator[MClassType]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_19); /* Direct call array#ArrayIterator#next on <var_19:ArrayIterator[MClassDef]>*/
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
var50 = self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1153);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var48, var_mmodule, var_res); /* Direct call hash_collection#HashMap#[]= on <var48:HashMap[MModule, Set[MClassDef]]>*/
}
{
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:MClassType> */
var53 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1154);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var51, var_mmodule, var_seen); /* Direct call hash_collection#HashMap#[]= on <var51:HashMap[MModule, Set[MClass]]>*/
}
{
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:MClassType> */
var56 = self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1155);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var54, var_mmodule, var_types); /* Direct call hash_collection#HashMap#[]= on <var54:HashMap[MModule, Set[MClassType]]>*/
}
RET_LABEL:;
}
/* method model#MClassType#collect_mclassdefs_cache for (self: MClassType): HashMap[MModule, Set[MClassDef]] */
val* nit___nit__MClassType___collect_mclassdefs_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassDef]] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1153);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mclasses_cache for (self: MClassType): HashMap[MModule, Set[MClass]] */
val* nit___nit__MClassType___collect_mclasses_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClass]] */;
val* var1 /* : HashMap[MModule, Set[MClass]] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1154);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#collect_mtypes_cache for (self: MClassType): HashMap[MModule, Set[MClassType]] */
val* nit___nit__MClassType___collect_mtypes_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassType]] */;
val* var1 /* : HashMap[MModule, Set[MClassType]] */;
var1 = self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1155);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#init for (self: MClassType) */
void nit___nit__MClassType___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MClassType___standard__kernel__Object__init]))(self) /* init on <self:MClassType>*/;
}
RET_LABEL:;
}
/* method model#MGenericType#arguments for (self: MGenericType): Array[MType] */
val* nit___nit__MGenericType___MClassType__arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#arguments= for (self: MGenericType, Array[MType]) */
void nit___nit__MGenericType___MClassType__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MGenericType___arguments].val = p0; /* _arguments on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#init for (self: MGenericType) */
void nit___nit__MGenericType___standard__kernel__Object__init(val* self) {
val* var /* : MClass */;
val* var2 /* : MClass */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var6 /* : Array[MType] */;
val* var8 /* : Array[MType] */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : Array[MType] */;
val* var19 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var20 /* : ArrayIterator[nullable Object] */;
val* var_21 /* var : ArrayIterator[MType] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : Array[MType] */;
val* var37 /* : Array[MType] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MGenericType___standard__kernel__Object__init]))(self) /* init on <self:MGenericType>*/;
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var2 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
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
{ /* Inline model#MClass#arity (var) on <var:MClass> */
var5 = var->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var:MClass> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var8 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var6) on <var6:Array[MType]> */
var11 = var6->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var6:Array[MType]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var3,var9) on <var3:Int> */
var14 = var3 == var9;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1170);
show_backtrace(1);
}
var15 = 0;
{
{ /* Inline model#MGenericType#need_anchor= (self,var15) on <self:MGenericType> */
self->attrs[COLOR_nit__model__MGenericType___need_anchor].s = var15; /* _need_anchor on <self:MGenericType> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var19 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_21 = var20;
for(;;) {
{
var22 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_21);
}
if (var22){
{
var23 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_21);
}
var_t = var23;
{
var24 = ((short int (*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__need_anchor]))(var_t) /* need_anchor on <var_t:MType>*/;
}
if (var24){
var25 = 1;
{
{ /* Inline model#MGenericType#need_anchor= (self,var25) on <self:MGenericType> */
self->attrs[COLOR_nit__model__MGenericType___need_anchor].s = var25; /* _need_anchor on <self:MGenericType> */
RET_LABEL26:(void)0;
}
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_21); /* Direct call array#ArrayIterator#next on <var_21:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_21) on <var_21:ArrayIterator[MType]> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var30 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (varonce) {
var31 = varonce;
} else {
var32 = "[";
var33 = 1;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var37 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ", ";
var41 = 2;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
var43 = standard__string___Collection___join(var35, var39);
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "]";
var47 = 1;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 4;
var51 = NEW_standard__NativeArray(var50, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var51)->values[0] = (val*) var28;
((struct instance_standard__NativeArray*)var51)->values[1] = (val*) var31;
((struct instance_standard__NativeArray*)var51)->values[2] = (val*) var43;
((struct instance_standard__NativeArray*)var51)->values[3] = (val*) var45;
{
((void (*)(val* self, val* p0, long p1))(var49->class->vft[COLOR_standard__array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var52 = ((val* (*)(val* self))(var49->class->vft[COLOR_standard__string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
{
{ /* Inline model#MGenericType#to_s= (self,var52) on <self:MGenericType> */
self->attrs[COLOR_nit__model__MGenericType___to_s].val = var52; /* _to_s on <self:MGenericType> */
RET_LABEL53:(void)0;
}
}
RET_LABEL:;
}
/* method model#MGenericType#to_s for (self: MGenericType): String */
val* nit___nit__MGenericType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___to_s].val; /* _to_s on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1183);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#to_s= for (self: MGenericType, String) */
void nit___nit__MGenericType___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MGenericType___to_s].val = p0; /* _to_s on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#full_name for (self: MGenericType): String */
val* nit___nit__MGenericType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
val* var6 /* : Array[MType] */;
val* var8 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var9 /* : ArrayIterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[MType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var13 /* : String */;
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___full_name].val != NULL; /* _full_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MGenericType___full_name].val; /* _full_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1187);
show_backtrace(1);
}
} else {
{
var5 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[String]>*/
}
var_args = var5;
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var8 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_10);
}
if (var11){
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_10);
}
var_t = var12;
{
var13 = ((val* (*)(val* self))(var_t->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_t) /* full_name on <var_t:MType>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var13); /* Direct call array#Array#add on <var_args:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:ArrayIterator[MType]> */
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var17 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__MClass___nit__model_base__MEntity__full_name(var15);
}
if (varonce) {
var19 = varonce;
} else {
var20 = "[";
var21 = 1;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = ", ";
var26 = 2;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = standard__string___Collection___join(var_args, var24);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "]}";
var32 = 2;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 4;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var18;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var19;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var28;
((struct instance_standard__NativeArray*)var36)->values[3] = (val*) var30;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
var3 = var37;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MGenericType___full_name].val = var3; /* _full_name on <self:MGenericType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MGenericType#c_name for (self: MGenericType): String */
val* nit___nit__MGenericType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var_res /* var res: String */;
val* var9 /* : Array[MType] */;
val* var11 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MType] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MType */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var24 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___c_name].val != NULL; /* _c_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MGenericType___c_name].val; /* _c_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1197);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var7 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MClass___nit__model_base__MEntity__c_name(var5);
}
var_res = var8;
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var11 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
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
var_t = var15;
if (varonce) {
var16 = varonce;
} else {
var17 = "__";
var18 = 2;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
var20 = ((val* (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__String___43d]))(var_res, var16) /* + on <var_res:String>*/;
}
var_res = var20;
{
var21 = ((val* (*)(val* self))(var_t->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_t) /* c_name on <var_t:MType>*/;
}
{
var22 = ((val* (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__String___43d]))(var_res, var21) /* + on <var_res:String>*/;
}
var_res = var22;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:ArrayIterator[MType]> */
RET_LABEL23:(void)0;
}
}
{
var24 = standard___standard__String___Object__to_s(var_res);
}
var3 = var24;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MGenericType___c_name].val = var3; /* _c_name on <self:MGenericType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor for (self: MGenericType): Bool */
short int nit___nit__MGenericType___MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MGenericType#need_anchor= for (self: MGenericType, Bool) */
void nit___nit__MGenericType___need_anchor_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MGenericType___need_anchor].s = p0; /* _need_anchor on <self:MGenericType> */
RET_LABEL:;
}
/* method model#MGenericType#resolve_for for (self: MGenericType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MGenericType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
var3 = self->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
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
var5 = nit___nit__MGenericType___MType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1212);
show_backtrace(1);
}
var6 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[MType]>*/
}
var_types = var6;
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var9 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ = var7;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_t = var13;
{
var14 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nit__model__MType__resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_t:MType>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_types, var14); /* Direct call array#Array#add on <var_types:Array[MType]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MType]>*/
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
var18 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit___nit__MClass___get_mtype(var16, var_types);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#can_resolve_for for (self: MGenericType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MGenericType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
var3 = self->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
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
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var8 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_10);
}
if (var11){
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_10);
}
var_t = var12;
{
var13 = ((short int (*)(val* self, val* p0, val* p1, val* p2))(var_t->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var_t:MType>*/;
}
var14 = !var13;
if (var14){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[MType]>*/
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
/* method model#MGenericType#length for (self: MGenericType): Int */
long nit___nit__MGenericType___MType__length(val* self) {
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
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var4 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_6);
}
if (var7){
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_6);
}
var_a = var8;
{
var9 = ((long (*)(val* self))(var_a->class->vft[COLOR_nit__model__MType__length]))(var_a) /* length on <var_a:MType>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var9) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[MType]>*/
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
/* method model#MVirtualType#mproperty for (self: MVirtualType): MVirtualTypeProp */
val* nit___nit__MVirtualType___mproperty(val* self) {
val* var /* : MVirtualTypeProp */;
val* var1 /* : MVirtualTypeProp */;
var1 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#mproperty= for (self: MVirtualType, MVirtualTypeProp) */
void nit___nit__MVirtualType___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MVirtualType___mproperty].val = p0; /* _mproperty on <self:MVirtualType> */
RET_LABEL:;
}
/* method model#MVirtualType#model for (self: MVirtualType): Model */
val* nit___nit__MVirtualType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Model */;
val* var12 /* : Model */;
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var1) on <var1:MVirtualTypeProp> */
var6 = var1->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var1:MVirtualTypeProp> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var7) on <var7:MModule> */
var12 = var7->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var7:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
/* method model#MVirtualType#lookup_bound for (self: MVirtualType, MModule, MType): MType */
val* nit___nit__MVirtualType___MType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MVirtualTypeDef */;
val* var2 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = nit___nit__MVirtualType___lookup_single_definition(self, var_mmodule, var_resolved_receiver);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var1) on <var1:MVirtualTypeDef> */
var4 = var1->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var1:MVirtualTypeDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1262);
show_backtrace(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_single_definition for (self: MVirtualType, MModule, MType): MVirtualTypeDef */
val* nit___nit__MVirtualType___lookup_single_definition(val* self, val* p0, val* p1) {
val* var /* : MVirtualTypeDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MVirtualTypeProp */;
val* var5 /* : MVirtualTypeProp */;
val* var6 /* : Array[MPropDef] */;
val* var_props /* var props: Array[MVirtualTypeDef] */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : ArraySet[MType] */;
val* var_types /* var types: ArraySet[MType] */;
val* var17 /* : nullable Object */;
val* var_res /* var res: MVirtualTypeDef */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var18 /* : ArrayIterator[nullable Object] */;
val* var_19 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var22 /* : nullable MType */;
val* var24 /* : nullable MType */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1267);
show_backtrace(1);
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var5 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit___nit__MProperty___lookup_definitions(var3, var_mmodule, var_resolved_receiver);
}
var_props = var6;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_props);
}
if (var7){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1270);
show_backtrace(1);
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_props) on <var_props:Array[MVirtualTypeDef]> */
var10 = var_props->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_props:Array[MVirtualTypeDef]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 1;
{
{ /* Inline kernel#Int#== (var8,var11) on <var8:Int> */
var14 = var8 == var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var15 = standard___standard__SequenceRead___Collection__first(var_props);
}
var = var15;
goto RET_LABEL;
} else {
}
}
var16 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MType);
{
standard___standard__ArraySet___standard__kernel__Object__init(var16); /* Direct call array#ArraySet#init on <var16:ArraySet[MType]>*/
}
var_types = var16;
{
var17 = standard___standard__SequenceRead___Collection__first(var_props);
}
var_res = var17;
var_ = var_props;
{
var18 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_19 = var18;
for(;;) {
{
var20 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_19);
}
if (var20){
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_19);
}
var_p = var21;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var24 = var_p->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1277);
show_backtrace(1);
}
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var_types, var22); /* Direct call array#ArraySet#add on <var_types:ArraySet[MType]>*/
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_res) on <var_res:MVirtualTypeDef> */
var27 = var_res->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_res:MVirtualTypeDef> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = !var25;
if (var28){
var_res = var_p;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_19); /* Direct call array#ArrayIterator#next on <var_19:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:ArrayIterator[MVirtualTypeDef]> */
RET_LABEL29:(void)0;
}
}
{
var30 = standard___standard__ArraySet___standard__abstract_collection__Collection__length(var_types);
}
var31 = 1;
{
{ /* Inline kernel#Int#== (var30,var31) on <var30:Int> */
var34 = var30 == var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var = var_res;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1283);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MVirtualType#lookup_fixed for (self: MVirtualType, MModule, MType): MType */
val* nit___nit__MVirtualType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MVirtualTypeDef */;
val* var_prop /* var prop: MVirtualTypeDef */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var_res /* var res: MType */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var_ /* var : Bool */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : MClassKind */;
val* var22 /* : MClassKind */;
val* var23 /* : MClassKind */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MClass */;
val* var31 /* : MClass */;
val* var32 /* : MClassKind */;
val* var34 /* : MClassKind */;
val* var35 /* : MClassKind */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1292);
show_backtrace(1);
}
{
var3 = ((val* (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_resolved_receiver) /* as_notnullable on <var_resolved_receiver:MType>*/;
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1294);
show_backtrace(1);
}
{
var5 = nit___nit__MVirtualType___lookup_single_definition(self, var_mmodule, var_resolved_receiver);
}
var_prop = var5;
{
{ /* Inline model#MVirtualTypeDef#bound (var_prop) on <var_prop:MVirtualTypeDef> */
var8 = var_prop->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_prop:MVirtualTypeDef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1297);
show_backtrace(1);
}
var_res = var6;
{
var9 = ((val* (*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_res, var_mmodule, var_resolved_receiver) /* lookup_fixed on <var_res:MType>*/;
}
var_res = var9;
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_prop) on <var_prop:MVirtualTypeDef> */
var12 = var_prop->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_prop:MVirtualTypeDef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:MType> isa MClassType */
cltype15 = type_nit__MClassType.color;
idtype16 = type_nit__MClassType.id;
if(cltype15 >= var_res->type->table_size) {
var14 = 0;
} else {
var14 = var_res->type->type_table[cltype15] == idtype16;
}
var_ = var14;
if (var14){
{
{ /* Inline model#MClassType#mclass (var_res) on <var_res:MType(MClassType)> */
var19 = var_res->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_res:MType(MClassType)> */
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
{ /* Inline model#MClass#kind (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var20,var23) on <var20:MClassKind> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var20,var_other) on <var20:MClassKind> */
var28 = var20 == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var13 = var24;
} else {
var13 = var_;
}
if (var13){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_resolved_receiver) on <var_resolved_receiver:MType(MClassType)> */
var31 = var_resolved_receiver->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var29) on <var29:MClass> */
var34 = var29->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var29:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var32,var35) on <var32:MClassKind> */
var_other = var35;
{
{ /* Inline kernel#Object#is_same_instance (var32,var_other) on <var32:MClassKind> */
var40 = var32 == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var = var_res;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MVirtualType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
val* var13 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var14 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = !var_cleanup_virtual;
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = nit___nit__MVirtualType___MType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1317);
show_backtrace(1);
}
{
var3 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var3){
var4 = NULL;
if (var_anchor == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var4) on <var_anchor:nullable MClassType> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1324);
show_backtrace(1);
}
var10 = NULL;
var11 = 1;
{
var12 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var_anchor, var10, var_mmodule, var11) /* resolve_for on <var_mtype:MType>*/;
}
var_resolved_receiver = var12;
} else {
var_resolved_receiver = var_mtype;
}
{
var13 = nit___nit__MVirtualType___MType__lookup_bound(self, var_mmodule, var_resolved_receiver);
}
var_verbatim_bound = var13;
{
var14 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nit__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_verbatim_bound:MType>*/;
}
var_res = var14;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#can_resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MVirtualType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
val* var8 /* : MType */;
val* var9 /* : MVirtualTypeProp */;
val* var11 /* : MVirtualTypeProp */;
short int var12 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
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
var6 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1340);
show_backtrace(1);
}
{
var8 = ((val* (*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var8;
} else {
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var11 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__MType___has_mproperty(var_mtype, var_mmodule, var9);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#to_s for (self: MVirtualType): String */
val* nit___nit__MVirtualType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : String */;
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MProperty___standard__string__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#full_name for (self: MVirtualType): String */
val* nit___nit__MVirtualType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : String */;
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#c_name for (self: MVirtualType): String */
val* nit___nit__MVirtualType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : String */;
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MProperty___nit__model_base__MEntity__c_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualType#init for (self: MVirtualType) */
void nit___nit__MVirtualType___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MVirtualType___standard__kernel__Object__init]))(self) /* init on <self:MVirtualType>*/;
}
RET_LABEL:;
}
/* method model#MParameterType#mclass for (self: MParameterType): MClass */
val* nit___nit__MParameterType___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#mclass= for (self: MParameterType, MClass) */
void nit___nit__MParameterType___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameterType___mclass].val = p0; /* _mclass on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#model for (self: MParameterType): Model */
val* nit___nit__MParameterType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
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
/* method model#MParameterType#rank for (self: MParameterType): Int */
long nit___nit__MParameterType___rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#rank= for (self: MParameterType, Int) */
void nit___nit__MParameterType___rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model__MParameterType___rank].l = p0; /* _rank on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#name for (self: MParameterType): String */
val* nit___nit__MParameterType___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1391);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#name= for (self: MParameterType, String) */
void nit___nit__MParameterType___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameterType___name].val = p0; /* _name on <self:MParameterType> */
RET_LABEL:;
}
/* method model#MParameterType#to_s for (self: MParameterType): String */
val* nit___nit__MParameterType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MParameterType#name (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1391);
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
/* method model#MParameterType#full_name for (self: MParameterType): String */
val* nit___nit__MParameterType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___full_name].val != NULL; /* _full_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MParameterType___full_name].val; /* _full_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1395);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var7 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MClass___nit__model_base__MEntity__full_name(var5);
}
if (varonce) {
var9 = varonce;
} else {
var10 = "::";
var11 = 2;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
{ /* Inline model#MParameterType#name (self) on <self:MParameterType> */
var15 = self->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1391);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var8;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var9;
((struct instance_standard__NativeArray*)var18)->values[2] = (val*) var13;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
var3 = var19;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MParameterType___full_name].val = var3; /* _full_name on <self:MParameterType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MParameterType#c_name for (self: MParameterType): String */
val* nit___nit__MParameterType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___c_name].val != NULL; /* _c_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MParameterType___c_name].val; /* _c_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1397);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var7 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MClass___nit__model_base__MEntity__c_name(var5);
}
if (varonce) {
var9 = varonce;
} else {
var10 = "__";
var11 = 2;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
var13 = ((val* (*)(val* self, val* p0))(var8->class->vft[COLOR_standard__string__String___43d]))(var8, var9) /* + on <var8:String>*/;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "#";
var17 = 1;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
{
{ /* Inline model#MParameterType#name (self) on <self:MParameterType> */
var21 = self->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1391);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 2;
var24 = NEW_standard__NativeArray(var23, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var24)->values[0] = (val*) var15;
((struct instance_standard__NativeArray*)var24)->values[1] = (val*) var19;
{
((void (*)(val* self, val* p0, long p1))(var22->class->vft[COLOR_standard__array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
{
var26 = standard___standard__Text___to_cmangle(var25);
}
{
var27 = ((val* (*)(val* self, val* p0))(var13->class->vft[COLOR_standard__string__String___43d]))(var13, var26) /* + on <var13:String>*/;
}
var3 = var27;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MParameterType___c_name].val = var3; /* _c_name on <self:MParameterType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MParameterType#lookup_bound for (self: MParameterType, MModule, MType): MType */
val* nit___nit__MParameterType___MType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var_goalclass /* var goalclass: MClass */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[MType] */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
val* var21 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_ /* var : Set[MClassType] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[MClassType] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var26 /* : MClass */;
val* var28 /* : MClass */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[MType] */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : nullable Object */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1401);
show_backtrace(1);
}
{
var3 = ((val* (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_resolved_receiver) /* as_notnullable on <var_resolved_receiver:MType>*/;
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1403);
show_backtrace(1);
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var7 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_goalclass = var5;
{
{ /* Inline model#MClassType#mclass (var_resolved_receiver) on <var_resolved_receiver:MType(MClassType)> */
var10 = var_resolved_receiver->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var8,var_goalclass) on <var8:MClass> */
var_other = var_goalclass;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:MClass> */
var15 = var8 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var16 = ((val* (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__arguments]))(var_resolved_receiver) /* arguments on <var_resolved_receiver:MType(MClassType)>*/;
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var19 = self->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var16, var17);
}
var = var20;
goto RET_LABEL;
} else {
}
{
var21 = nit___nit__MClassType___MType__collect_mtypes(var_resolved_receiver, var_mmodule);
}
var_supertypes = var21;
var_ = var_supertypes;
{
var22 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClassType]>*/;
}
var_23 = var22;
for(;;) {
{
var24 = ((short int (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_23) /* is_ok on <var_23:Iterator[MClassType]>*/;
}
if (var24){
{
var25 = ((val* (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_23) /* item on <var_23:Iterator[MClassType]>*/;
}
var_t = var25;
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MClassType> */
var28 = var_t->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_t:MClassType> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var26,var_goalclass) on <var26:MClass> */
var_other = var_goalclass;
{
{ /* Inline kernel#Object#is_same_instance (var26,var_other) on <var26:MClass> */
var33 = var26 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
var34 = ((val* (*)(val* self))(var_t->class->vft[COLOR_nit__model__MClassType__arguments]))(var_t) /* arguments on <var_t:MClassType>*/;
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var37 = self->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var34, var35);
}
var_res = var38;
var = var_res;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_23) /* next on <var_23:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:Iterator[MClassType]> */
RET_LABEL39:(void)0;
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1417);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model#MParameterType#lookup_fixed for (self: MParameterType, MModule, MType): MType */
val* nit___nit__MParameterType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1429);
show_backtrace(1);
}
{
var3 = ((val* (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_resolved_receiver) /* as_notnullable on <var_resolved_receiver:MType>*/;
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1431);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_resolved_receiver) on <var_resolved_receiver:MType(MClassType)> */
var7 = var_resolved_receiver->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 0;
{
var12 = nit___nit__MParameterType___MType__resolve_for(self, var8, var_resolved_receiver, var_mmodule, var11);
}
var_res = var12;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
