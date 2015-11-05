#include "nit__model.sep.0.h"
/* method model#Model#mclasses for (self: Model): Array[MClass] */
val* nit__model___Model___mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nit__model__Model___mclasses].val; /* _mclasses on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 34);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : POSet[MClass] */;
val* var11 /* : POSetElement[MModule] */;
val* var13 /* : POSetElement[MModule] */;
val* var14 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : Iterator[MModule] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var19 /* : Array[MClassDef] */;
val* var21 /* : Array[MClassDef] */;
val* var_22 /* var : Array[MClassDef] */;
val* var23 /* : ArrayIterator[nullable Object] */;
val* var_24 /* var : ArrayIterator[MClassDef] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var_c /* var c: MClass */;
val* var30 /* : POSetElement[nullable Object] */;
val* var31 /* : Array[MClassType] */;
val* var33 /* : Array[MClassType] */;
val* var_34 /* var : Array[MClassType] */;
val* var35 /* : ArrayIterator[nullable Object] */;
val* var_36 /* var : ArrayIterator[MClassType] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
{
{ /* Inline model#MModule#flatten_mclass_hierarchy_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable POSet[MClass]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
var9 = NEW_poset__POSet(&type_poset__POSet__nit__MClass);
{
{ /* Inline kernel#Object#init (var9) on <var9:POSet[MClass]> */
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var13 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = poset___poset__POSetElement___greaters(var11);
}
var_ = var14;
{
var15 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[MModule]>*/
}
if (var17){
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[MModule]>*/
}
var_m = var18;
{
{ /* Inline model#MModule#mclassdefs (var_m) on <var_m:MModule> */
var21 = var_m->attrs[COLOR_nit__model__MModule___mclassdefs].val; /* _mclassdefs on <var_m:MModule> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 131);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_22 = var19;
{
var23 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_22);
}
var_24 = var23;
for(;;) {
{
var25 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_24);
}
if (var25){
{
var26 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_24);
}
var_cd = var26;
{
{ /* Inline model#MClassDef#mclass (var_cd) on <var_cd:MClassDef> */
var29 = var_cd->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_c = var27;
{
var30 = poset___poset__POSet___add_node(var_res, var_c);
}
{
{ /* Inline model#MClassDef#supertypes (var_cd) on <var_cd:MClassDef> */
var33 = var_cd->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_cd:MClassDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_34 = var31;
{
var35 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_34);
}
var_36 = var35;
for(;;) {
{
var37 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_36);
}
if (var37){
{
var38 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_36);
}
var_s = var38;
{
{ /* Inline model#MClassType#mclass (var_s) on <var_s:MClassType> */
var41 = var_s->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_s:MClassType> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
poset___poset__POSet___add_edge(var_res, var_c, var39); /* Direct call poset#POSet#add_edge on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_36); /* Direct call array#ArrayIterator#next on <var_36:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_36); /* Direct call array#ArrayIterator#finish on <var_36:ArrayIterator[MClassType]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_24); /* Direct call array#ArrayIterator#next on <var_24:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_24); /* Direct call array#ArrayIterator#finish on <var_24:ArrayIterator[MClassDef]>*/
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[MModule]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[MModule]>*/
}
{
{ /* Inline model#MModule#flatten_mclass_hierarchy_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val = var_res; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL44:(void)0;
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
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__model__MClassDefSorter__mmodule_61d]))(var, self); /* mmodule= on <var:MClassDefSorter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:MClassDefSorter>*/
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
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__model__MPropDefSorter__mmodule_61d]))(var, self); /* mmodule= on <var:MPropDefSorter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:MPropDefSorter>*/
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
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___object_type].val != NULL; /* _object_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___object_type].val; /* _object_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _object_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 197);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___object_type].val = var7; /* _object_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#pointer_type for (self: MModule): MClassType */
val* nit__model___MModule___pointer_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___pointer_type].val != NULL; /* _pointer_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___pointer_type].val; /* _pointer_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 200);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Pointer";
var5 = standard___standard__NativeString___to_s_with_length(var4, 7l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___pointer_type].val = var7; /* _pointer_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#bool_type for (self: MModule): MClassType */
val* nit__model___MModule___bool_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___bool_type].val != NULL; /* _bool_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___bool_type].val; /* _bool_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bool_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 203);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Bool";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___bool_type].val = var7; /* _bool_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#int_type for (self: MModule): MClassType */
val* nit__model___MModule___int_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___int_type].val != NULL; /* _int_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___int_type].val; /* _int_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _int_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 206);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Int";
var5 = standard___standard__NativeString___to_s_with_length(var4, 3l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___int_type].val = var7; /* _int_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#byte_type for (self: MModule): MClassType */
val* nit__model___MModule___byte_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___byte_type].val != NULL; /* _byte_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___byte_type].val; /* _byte_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _byte_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 209);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Byte";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___byte_type].val = var7; /* _byte_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#char_type for (self: MModule): MClassType */
val* nit__model___MModule___char_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___char_type].val != NULL; /* _char_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___char_type].val; /* _char_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _char_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 212);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Char";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___char_type].val = var7; /* _char_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#float_type for (self: MModule): MClassType */
val* nit__model___MModule___float_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___float_type].val != NULL; /* _float_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___float_type].val; /* _float_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _float_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 215);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Float";
var5 = standard___standard__NativeString___to_s_with_length(var4, 5l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___float_type].val = var7; /* _float_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#string_type for (self: MModule): MClassType */
val* nit__model___MModule___string_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___string_type].val != NULL; /* _string_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___string_type].val; /* _string_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 218);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "String";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___string_type].val = var7; /* _string_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#native_string_type for (self: MModule): MClassType */
val* nit__model___MModule___native_string_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
var1 = self->attrs[COLOR_nit__model__MModule___native_string_type].val != NULL; /* _native_string_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___native_string_type].val; /* _native_string_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_string_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 221);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "NativeString";
var5 = standard___standard__NativeString___to_s_with_length(var4, 12l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model#MClass#mclass_type (var6) on <var6:MClass> */
var9 = var6->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var6:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__MModule___native_string_type].val = var7; /* _native_string_type on <self:MModule> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#array_type for (self: MModule, MType): MClassType */
val* nit__model___MModule___array_type(val* self, val* p0) {
val* var /* : MClassType */;
val* var_elt_type /* var elt_type: MType */;
val* var1 /* : MClass */;
val* var2 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var3 /* : MClassType */;
var_elt_type = p0;
{
var1 = nit__model___MModule___array_class(self);
}
var2 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var2, 1l); /* Direct call array#Array#with_capacity on <var2:Array[MType]>*/
}
var_ = var2;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elt_type); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var3 = nit___nit__MClass___get_mtype(var1, var_);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#array_class for (self: MModule): MClass */
val* nit__model___MModule___array_class(val* self) {
val* var /* : MClass */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MModule___array_class].val != NULL; /* _array_class on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___array_class].val; /* _array_class on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array_class");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 227);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Array";
var5 = standard___standard__NativeString___to_s_with_length(var4, 5l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
self->attrs[COLOR_nit__model__MModule___array_class].val = var6; /* _array_class on <self:MModule> */
var2 = var6;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#native_array_type for (self: MModule, MType): MClassType */
val* nit__model___MModule___native_array_type(val* self, val* p0) {
val* var /* : MClassType */;
val* var_elt_type /* var elt_type: MType */;
val* var1 /* : MClass */;
val* var2 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var3 /* : MClassType */;
var_elt_type = p0;
{
var1 = nit__model___MModule___native_array_class(self);
}
var2 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var2, 1l); /* Direct call array#Array#with_capacity on <var2:Array[MType]>*/
}
var_ = var2;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elt_type); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var3 = nit___nit__MClass___get_mtype(var1, var_);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MModule#native_array_class for (self: MModule): MClass */
val* nit__model___MModule___native_array_class(val* self) {
val* var /* : MClass */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
var1 = self->attrs[COLOR_nit__model__MModule___native_array_class].val != NULL; /* _native_array_class on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MModule___native_array_class].val; /* _native_array_class on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_array_class");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 233);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "NativeArray";
var5 = standard___standard__NativeString___to_s_with_length(var4, 11l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__model___MModule___get_primitive_class(self, var3);
}
self->attrs[COLOR_nit__model__MModule___native_array_class].val = var6; /* _native_array_class on <self:MModule> */
var2 = var6;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MModule#sys_type for (self: MModule): nullable MClassType */
val* nit__model___MModule___sys_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
val* var3 /* : Model */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "Sys";
var6 = standard___standard__NativeString___to_s_with_length(var5, 3l);
var4 = var6;
varonce = var4;
}
{
var7 = nit__model___Model___get_mclasses_by_name(var1, var4);
}
var_clas = var7;
if (var_clas == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = standard___standard__Array___standard__kernel__Object___61d_61d(var_clas, ((val*)NULL));
var8 = var9;
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Sys";
var13 = standard___standard__NativeString___to_s_with_length(var12, 3l);
var11 = var13;
varonce10 = var11;
}
{
var14 = nit__model___MModule___get_primitive_class(self, var11);
}
{
{ /* Inline model#MClass#mclass_type (var14) on <var14:MClass> */
var17 = var14->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var14:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var = var15;
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
val* var6 /* : FlatString */;
val* var7 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "Finalizable";
var6 = standard___standard__NativeString___to_s_with_length(var5, 11l);
var4 = var6;
varonce = var4;
}
{
var7 = nit__model___Model___get_mclasses_by_name(var1, var4);
}
var_clas = var7;
if (var_clas == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = standard___standard__Array___standard__kernel__Object___61d_61d(var_clas, ((val*)NULL));
var8 = var9;
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Finalizable";
var13 = standard___standard__NativeString___to_s_with_length(var12, 11l);
var11 = var13;
varonce10 = var11;
}
{
var14 = nit__model___MModule___get_primitive_class(self, var11);
}
{
{ /* Inline model#MClass#mclass_type (var14) on <var14:MClass> */
var17 = var14->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var14:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var = var15;
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
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[MClass] */;
val* var_ /* var : Array[MClass] */;
val* var_11 /* var : Array[MClass] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var16 /* : POSetElement[MModule] */;
val* var18 /* : POSetElement[MModule] */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
val* var34 /* : Model */;
val* var36 /* : Model */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : nullable Array[MClass] */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : MClass */;
val* var48 /* : Sys */;
val* var49 /* : MClassKind */;
val* var50 /* : Sys */;
val* var51 /* : MVisibility */;
val* var_c52 /* var c: MClass */;
val* var53 /* : MClassDef */;
val* var54 /* : MClassType */;
val* var56 /* : MClassType */;
val* var57 /* : Location */;
val* var_cladef /* var cladef: MClassDef */;
val* var58 /* : Array[MClassType] */;
val* var_59 /* var : Array[MClassType] */;
val* var60 /* : MClassType */;
val* var61 /* : Sys */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : Sys */;
long var76 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var_msg /* var msg: String */;
val* var_99 /* var : nullable Array[MClass] */;
val* var100 /* : ArrayIterator[nullable Object] */;
val* var_101 /* var : ArrayIterator[MClass] */;
short int var102 /* : Bool */;
val* var103 /* : nullable Object */;
val* var_c104 /* var c: MClass */;
val* var106 /* : NativeArray[String] */;
static val* varonce105;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var115 /* : Sys */;
val* var116 /* : nullable Object */;
var_name = p0;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mclasses_by_name(var1, var_name);
}
var_cla = var4;
if (var_cla == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,((val*)NULL)) on <var_cla:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cla, var_other); /* == on <var_cla:nullable Array[MClass](Array[MClass])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___with_capacity(var10, 1l); /* Direct call array#Array#with_capacity on <var10:Array[MClass]>*/
}
var_ = var10;
var_11 = var_cla;
{
var12 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_11);
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
var_c = var15;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var18 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var_c) on <var_c:MClass> */
var21 = var_c->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = poset___poset__POSetElement____60d_61d(var16, var19);
}
if (var22){
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_c); /* Direct call array#AbstractArray#push on <var_:Array[MClass]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_13); /* Direct call array#ArrayIterator#finish on <var_13:ArrayIterator[MClass]>*/
}
var_cla = var_;
} else {
}
if (var_cla == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
var25 = standard___standard__Array___standard__kernel__Object___61d_61d(var_cla, ((val*)NULL));
var24 = var25;
}
var_26 = var24;
if (var24){
var23 = var_26;
} else {
{
var27 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_cla);
}
var23 = var27;
}
if (var23){
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "Bool";
var31 = standard___standard__NativeString___to_s_with_length(var30, 4l);
var29 = var31;
varonce = var29;
}
{
var32 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var29); /* == on <var_name:String>*/
}
var_33 = var32;
if (var32){
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var36 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Object";
var40 = standard___standard__NativeString___to_s_with_length(var39, 6l);
var38 = var40;
varonce37 = var38;
}
{
var41 = nit__model___Model___get_mclasses_by_name(var34, var38);
}
if (var41 == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var41,((val*)NULL)) on <var41:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var41->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var41, var_other); /* == on <var41:nullable Array[MClass](Array[MClass])>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
var28 = var42;
} else {
var28 = var_33;
}
if (var28){
var47 = NEW_nit__MClass(&type_nit__MClass);
var48 = glob_sys;
{
var49 = nit__model___standard__Sys___enum_kind(var48);
}
var50 = glob_sys;
{
var51 = nit__model_base___standard__Sys___public_visibility(var50);
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__model__MClass__intro_mmodule_61d]))(var47, self); /* intro_mmodule= on <var47:MClass>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__model__MClass__name_61d]))(var47, var_name); /* name= on <var47:MClass>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__model__MClass__setup_parameter_names]))(var47, ((val*)NULL)); /* setup_parameter_names on <var47:MClass>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__model__MClass__kind_61d]))(var47, var49); /* kind= on <var47:MClass>*/
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_nit__model__MClass__visibility_61d]))(var47, var51); /* visibility= on <var47:MClass>*/
}
{
((void(*)(val* self))(var47->class->vft[COLOR_standard__kernel__Object__init]))(var47); /* init on <var47:MClass>*/
}
var_c52 = var47;
var53 = NEW_nit__MClassDef(&type_nit__MClassDef);
{
{ /* Inline model#MClass#mclass_type (var_c52) on <var_c52:MClass> */
var56 = var_c52->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c52:MClass> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var57 = NEW_nit__Location(&type_nit__Location);
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__location__Location__file_61d]))(var57, ((val*)NULL)); /* file= on <var57:Location>*/
}
{
((void(*)(val* self, long p0))(var57->class->vft[COLOR_nit__location__Location__line_start_61d]))(var57, 0l); /* line_start= on <var57:Location>*/
}
{
((void(*)(val* self, long p0))(var57->class->vft[COLOR_nit__location__Location__line_end_61d]))(var57, 0l); /* line_end= on <var57:Location>*/
}
{
((void(*)(val* self, long p0))(var57->class->vft[COLOR_nit__location__Location__column_start_61d]))(var57, 0l); /* column_start= on <var57:Location>*/
}
{
((void(*)(val* self, long p0))(var57->class->vft[COLOR_nit__location__Location__column_end_61d]))(var57, 0l); /* column_end= on <var57:Location>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_standard__kernel__Object__init]))(var57); /* init on <var57:Location>*/
}
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nit__model__MClassDef__mmodule_61d]))(var53, self); /* mmodule= on <var53:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nit__model__MClassDef__bound_mtype_61d]))(var53, var54); /* bound_mtype= on <var53:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nit__model__MClassDef__location_61d]))(var53, var57); /* location= on <var53:MClassDef>*/
}
{
((void(*)(val* self))(var53->class->vft[COLOR_standard__kernel__Object__init]))(var53); /* init on <var53:MClassDef>*/
}
var_cladef = var53;
var58 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
standard___standard__Array___with_capacity(var58, 1l); /* Direct call array#Array#with_capacity on <var58:Array[MClassType]>*/
}
var_59 = var58;
{
var60 = nit__model___MModule___object_type(self);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_59, var60); /* Direct call array#AbstractArray#push on <var_59:Array[MClassType]>*/
}
{
nit___nit__MClassDef___set_supertypes(var_cladef, var_59); /* Direct call model#MClassDef#set_supertypes on <var_cladef:MClassDef>*/
}
{
nit___nit__MClassDef___add_in_hierarchy(var_cladef); /* Direct call model#MClassDef#add_in_hierarchy on <var_cladef:MClassDef>*/
}
var = var_c52;
goto RET_LABEL;
} else {
}
var61 = glob_sys;
if (unlikely(varonce62==NULL)) {
var63 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Fatal Error: no primitive class ";
var67 = standard___standard__NativeString___to_s_with_length(var66, 32l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var63)->values[0]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = " in ";
var71 = standard___standard__NativeString___to_s_with_length(var70, 4l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var63)->values[2]=var69;
} else {
var63 = varonce62;
varonce62 = NULL;
}
((struct instance_standard__NativeArray*)var63)->values[1]=var_name;
{
var72 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var63)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
standard__file___Sys___print(var61, var73); /* Direct call file#Sys#print on <var61:Sys>*/
}
var74 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var74,1l) on <var74:Sys> */
exit(1l);
RET_LABEL75:(void)0;
}
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 272);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var_cla) on <var_cla:nullable Array[MClass]> */
if (unlikely(var_cla == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var78 = var_cla->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_cla:nullable Array[MClass]> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var76,1l) on <var76:Int> */
var81 = var76 == 1l;
var82 = !var81;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
if (unlikely(varonce83==NULL)) {
var84 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Fatal Error: more than one primitive class ";
var88 = standard___standard__NativeString___to_s_with_length(var87, 43l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var84)->values[0]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " in ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 4l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var84)->values[2]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ":";
var96 = standard___standard__NativeString___to_s_with_length(var95, 1l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var84)->values[4]=var94;
} else {
var84 = varonce83;
varonce83 = NULL;
}
((struct instance_standard__NativeArray*)var84)->values[1]=var_name;
{
var97 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var84)->values[3]=var97;
{
var98 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
var_msg = var98;
var_99 = var_cla;
if (var_99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 274);
fatal_exit(1);
} else {
var100 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_99);
}
var_101 = var100;
for(;;) {
{
var102 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_101);
}
if (var102){
{
var103 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_101);
}
var_c104 = var103;
if (unlikely(varonce105==NULL)) {
var106 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = " ";
var110 = standard___standard__NativeString___to_s_with_length(var109, 1l);
var108 = var110;
varonce107 = var108;
}
((struct instance_standard__NativeArray*)var106)->values[0]=var108;
} else {
var106 = varonce105;
varonce105 = NULL;
}
{
var111 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_c104);
}
((struct instance_standard__NativeArray*)var106)->values[1]=var111;
{
var112 = ((val*(*)(val* self))(var106->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var106); /* native_to_s on <var106:NativeArray[String]>*/
}
varonce105 = var106;
{
var113 = ((val*(*)(val* self, val* p0))(var_msg->class->vft[COLOR_standard__string__String___43d]))(var_msg, var112); /* + on <var_msg:String>*/
}
var_msg = var113;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_101); /* Direct call array#ArrayIterator#next on <var_101:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label114;
}
}
BREAK_label114: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_101); /* Direct call array#ArrayIterator#finish on <var_101:ArrayIterator[MClass]>*/
}
var115 = glob_sys;
{
standard__file___Sys___print(var115, var_msg); /* Direct call file#Sys#print on <var115:Sys>*/
}
} else {
}
if (var_cla == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 278);
fatal_exit(1);
} else {
var116 = standard___standard__SequenceRead___Collection__first(var_cla);
}
var = var116;
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
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_res /* var res: nullable MMethod */;
val* var_ /* var : Array[MProperty] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[MProperty] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_intro /* var intro: MClassDef */;
val* var15 /* : Array[MClassDef] */;
val* var17 /* : Array[MClassDef] */;
val* var_18 /* var : Array[MClassDef] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[MClassDef] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var23 /* : POSetElement[MModule] */;
val* var25 /* : POSetElement[MModule] */;
val* var26 /* : Collection[nullable Object] */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable POSetElement[MClassDef] */;
val* var34 /* : nullable POSetElement[MClassDef] */;
val* var35 /* : Collection[nullable Object] */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other46 /* var other: nullable Object */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Sys */;
val* var50 /* : NativeArray[String] */;
static val* varonce;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
var_name = p0;
var_recv = p1;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
if (var_props == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = standard___standard__Array___standard__kernel__Object___61d_61d(var_props, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ = var_props;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_8);
}
if (var9){
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_8);
}
var_mprop = var10;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var11 = 0;
} else {
var11 = var_mprop->type->type_table[cltype] == idtype;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 288);
fatal_exit(1);
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var14 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_intro = var12;
{
{ /* Inline model#MClass#mclassdefs (var_recv) on <var_recv:MClass> */
var17 = var_recv->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_recv:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 454);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_18);
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
var_mclassdef = var22;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var25 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = poset___poset__POSetElement___greaters(var23);
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = ((short int(*)(val* self, val* p0))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var26, var27); /* has on <var26:Collection[nullable Object](Collection[MModule])>*/
}
var31 = !var30;
if (var31){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var34 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 292);
fatal_exit(1);
} else {
var35 = poset___poset__POSetElement___greaters(var32);
}
{
var36 = ((short int(*)(val* self, val* p0))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var35, var_intro); /* has on <var35:Collection[nullable Object](Collection[MClassDef])>*/
}
var37 = !var36;
if (var37){
goto BREAK_label;
} else {
}
if (var_res == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var43 = var_res == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
var_res = var_mprop;
} else {
{
{ /* Inline kernel#Object#!= (var_res,var_mprop) on <var_res:nullable MMethod(MMethod)> */
var_other46 = var_mprop;
{
var47 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other46); /* == on <var_res:nullable MMethod(MMethod)>*/
}
var48 = !var47;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
var49 = glob_sys;
if (unlikely(varonce==NULL)) {
var50 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Fatal Error: ambigous property name \'";
var54 = standard___standard__NativeString___to_s_with_length(var53, 37l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var50)->values[0]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\'; conflict between ";
var58 = standard___standard__NativeString___to_s_with_length(var57, 20l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var50)->values[2]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = " and ";
var62 = standard___standard__NativeString___to_s_with_length(var61, 5l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var50)->values[4]=var60;
} else {
var50 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var50)->values[1]=var_name;
{
var63 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
((struct instance_standard__NativeArray*)var50)->values[3]=var63;
{
var64 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_res);
}
((struct instance_standard__NativeArray*)var50)->values[5]=var64;
{
var65 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce = var50;
{
standard__file___Sys___print(var49, var65); /* Direct call file#Sys#print on <var49:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 297);
fatal_exit(1);
} else {
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label66;
}
}
BREAK_label66: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_20); /* Direct call array#ArrayIterator#finish on <var_20:ArrayIterator[MClassDef]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_8); /* Direct call array#ArrayIterator#next on <var_8:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label67;
}
}
BREAK_label67: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_8); /* Direct call array#ArrayIterator#finish on <var_8:ArrayIterator[MProperty]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 308);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 309);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 309);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline model#MClassDef#mclass (var_a) on <var_a:MClassDef> */
var9 = var_a->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
var15 = ((short int(*)(val* self, val* p0))(var_ca->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ca, var_other); /* == on <var_ca:MClass>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 308);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 308);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init]))(self); /* init on <self:MClassDefSorter>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 321);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 322);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 322);
fatal_exit(1);
}
var_pa = p0;
var_pb = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_pa) on <var_pa:MPropDef> */
var9 = var_pa->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pa:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
var21 = ((short int(*)(val* self, val* p0))(var_ca->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ca, var_other); /* == on <var_ca:MClass>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 321);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 321);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init]))(self); /* init on <self:MPropDefSorter>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
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
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
val* var13 /* : MVisibility */;
val* var15 /* : MVisibility */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___full_name].val != NULL; /* _full_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClass___full_name].val; /* _full_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 366);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var12 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (self) on <self:MClass> */
var15 = self->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit___nit__MModule___namespace_for(var10, var13);
}
((struct instance_standard__NativeArray*)var5)->values[0]=var16;
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var19 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
((struct instance_standard__NativeArray*)var5)->values[2]=var17;
{
var20 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var20;
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
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
val* var13 /* : MVisibility */;
val* var15 /* : MVisibility */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClass___c_name].val != NULL; /* _c_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClass___c_name].val; /* _c_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 374);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "__";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var12 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (self) on <self:MClass> */
var15 = self->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit___nit__MModule___c_namespace_for(var10, var13);
}
((struct instance_standard__NativeArray*)var5)->values[0]=var16;
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var19 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__Text___to_cmangle(var17);
}
((struct instance_standard__NativeArray*)var5)->values[2]=var20;
{
var21 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var21;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 382);
fatal_exit(1);
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
/* method model#MClass#signature_to_s for (self: MClass): String */
val* nit___nit__MClass___signature_to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var12 /* : String */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
long var_i /* var i: Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_ /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : Array[MParameterType] */;
val* var38 /* : Array[MParameterType] */;
val* var39 /* : nullable Object */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : MClassDef */;
val* var49 /* : MClassDef */;
val* var50 /* : MClassType */;
val* var52 /* : MClassType */;
val* var53 /* : Array[MType] */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
long var56 /* : Int */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var3 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var9 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
} else {
}
var10 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var10) on <var10:FlatBuffer> */
{
((void(*)(val* self))(var10->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var10); /* init on <var10:FlatBuffer>*/
}
RET_LABEL11:(void)0;
}
}
var_res = var10;
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var14 = self->attrs[COLOR_nit__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var12); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "[";
var17 = standard___standard__NativeString___to_s_with_length(var16, 1l);
var15 = var17;
varonce = var15;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var15); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var_i = 0l;
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var20 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ = var18;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var23 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var24 = var_i < var_;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var27 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var31 = var_i > 0l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ", ";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var33); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MClass#mparameters (self) on <self:MClass> */
var38 = self->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <self:MClass> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 382);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var36, var_i);
}
{
{ /* Inline model#MParameterType#name (var39) on <var39:nullable Object(MParameterType)> */
var42 = var39->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <var39:nullable Object(MParameterType)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1481);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var40); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = ": ";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var44); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model#MClass#intro (self) on <self:MClass> */
var49 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var47) on <var47:MClassDef> */
var52 = var47->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var47:MClassDef> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = ((val*(*)(val* self))(var50->class->vft[COLOR_nit__model__MClassType__arguments]))(var50); /* arguments on <var50:MClassType>*/
}
{
var54 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var53, var_i);
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_standard__string__Object__to_s]))(var54); /* to_s on <var54:nullable Object(MType)>*/
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var55); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
{
var56 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var56;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "]";
var60 = standard___standard__NativeString___to_s_with_length(var59, 1l);
var58 = var60;
varonce57 = var58;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var58); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
{
var61 = standard___standard__FlatBuffer___Object__to_s(var_res);
}
var = var61;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClass#setup_parameter_names for (self: MClass, nullable Array[String]) */
void nit___nit__MClass___setup_parameter_names(val* self, val* p0) {
val* var_parameter_names /* var parameter_names: nullable Array[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[MParameterType] */;
val* var_mparametertypes /* var mparametertypes: Array[MParameterType] */;
long var_i /* var i: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_ /* var : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : MParameterType */;
val* var31 /* : nullable Object */;
val* var_mparametertype /* var mparametertype: MParameterType */;
long var32 /* : Int */;
val* var34 /* : MGenericType */;
val* var_mclass_type /* var mclass_type: MGenericType */;
val* var36 /* : HashMap[Array[MType], MGenericType] */;
val* var38 /* : HashMap[Array[MType], MGenericType] */;
val* var39 /* : MClassType */;
var_parameter_names = p0;
if (var_parameter_names == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = standard___standard__Array___standard__kernel__Object___61d_61d(var_parameter_names, ((val*)NULL));
var = var1;
}
if (var){
{
{ /* Inline model#MClass#arity= (self,0l) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___arity].l = 0l; /* _arity on <self:MClass> */
RET_LABEL2:(void)0;
}
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_parameter_names) on <var_parameter_names:nullable Array[String](Array[String])> */
var5 = var_parameter_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_parameter_names:nullable Array[String](Array[String])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClass#arity= (self,var3) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___arity].l = var3; /* _arity on <self:MClass> */
RET_LABEL6:(void)0;
}
}
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var9 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var7,0l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var12 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var13 = var7 > 0l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_parameter_names == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parameter_names,((val*)NULL)) on <var_parameter_names:nullable Array[String]> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_parameter_names->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parameter_names, var_other); /* == on <var_parameter_names:nullable Array[String](Array[String])>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 421);
fatal_exit(1);
}
var19 = NEW_standard__Array(&type_standard__Array__nit__MParameterType);
{
standard___standard__Array___standard__kernel__Object__init(var19); /* Direct call array#Array#init on <var19:Array[MParameterType]>*/
}
var_mparametertypes = var19;
var_i = 0l;
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var22 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_ = var20;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var25 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var29 = var_i < var_;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var30 = NEW_nit__MParameterType(&type_nit__MParameterType);
{
var31 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_parameter_names, var_i);
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nit__model__MParameterType__mclass_61d]))(var30, self); /* mclass= on <var30:MParameterType>*/
}
{
((void(*)(val* self, long p0))(var30->class->vft[COLOR_nit__model__MParameterType__rank_61d]))(var30, var_i); /* rank= on <var30:MParameterType>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nit__model__MParameterType__name_61d]))(var30, var31); /* name= on <var30:MParameterType>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30); /* init on <var30:MParameterType>*/
}
var_mparametertype = var30;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparametertypes, var_mparametertype); /* Direct call array#Array#add on <var_mparametertypes:Array[MParameterType]>*/
}
{
var32 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var32;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MClass#mparameters= (self,var_mparametertypes) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___mparameters].val = var_mparametertypes; /* _mparameters on <self:MClass> */
RET_LABEL33:(void)0;
}
}
var34 = NEW_nit__MGenericType(&type_nit__MGenericType);
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var34, self); /* mclass= on <var34:MGenericType>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nit__model__MClassType__arguments_61d]))(var34, var_mparametertypes); /* arguments= on <var34:MGenericType>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_standard__kernel__Object__init]))(var34); /* init on <var34:MGenericType>*/
}
var_mclass_type = var34;
{
{ /* Inline model#MClass#mclass_type= (self,var_mclass_type) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___mclass_type].val = var_mclass_type; /* _mclass_type on <self:MClass> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var38 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 516);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var36, var_mparametertypes, var_mclass_type); /* Direct call hash_collection#HashMap#[]= on <var36:HashMap[Array[MType], MGenericType]>*/
}
} else {
var39 = NEW_nit__MClassType(&type_nit__MClassType);
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var39, self); /* mclass= on <var39:MClassType>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39); /* init on <var39:MClassType>*/
}
{
{ /* Inline model#MClass#mclass_type= (self,var39) on <self:MClass> */
self->attrs[COLOR_nit__model__MClass___mclass_type].val = var39; /* _mclass_type on <self:MClass> */
RET_LABEL40:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClass___standard__kernel__Object__init]))(self); /* init on <self:MClass>*/
}
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var2 = self->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 454);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
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
/* method model#MClass#try_intro for (self: MClass): nullable MClassDef */
val* nit___nit__MClass___try_intro(val* self) {
val* var /* : nullable MClassDef */;
short int var1 /* : Bool */;
val* var2 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <self:MClass> */
if (var1){
var2 = self->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 472);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
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
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : HashMap[Array[MType], MGenericType] */;
val* var21 /* : HashMap[Array[MType], MGenericType] */;
val* var22 /* : nullable Object */;
val* var_res /* var res: nullable MGenericType */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MGenericType */;
val* var29 /* : HashMap[Array[MType], MGenericType] */;
val* var31 /* : HashMap[Array[MType], MGenericType] */;
val* var32 /* : Array[nullable Object] */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 507);
fatal_exit(1);
}
{
{ /* Inline model#MClass#arity (self) on <self:MClass> */
var12 = self->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <self:MClass> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var10,0l) on <var10:Int> */
var15 = var10 == 0l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline model#MClass#mclass_type (self) on <self:MClass> */
var18 = self->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var21 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 516);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var19, var_mtype_arguments);
}
var_res = var22;
if (var_res == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable MGenericType> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MGenericType(MGenericType)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
var = var_res;
goto RET_LABEL;
} else {
}
var28 = NEW_nit__MGenericType(&type_nit__MGenericType);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nit__model__MClassType__mclass_61d]))(var28, self); /* mclass= on <var28:MGenericType>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nit__model__MClassType__arguments_61d]))(var28, var_mtype_arguments); /* arguments= on <var28:MGenericType>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_standard__kernel__Object__init]))(var28); /* init on <var28:MGenericType>*/
}
var_res = var28;
{
{ /* Inline model#MClass#get_mtype_cache (self) on <self:MClass> */
var31 = self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 516);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard__array___Collection___to_a(var_mtype_arguments);
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var29, var32, var_res); /* Direct call hash_collection#HashMap#[]= on <var29:HashMap[Array[MType], MGenericType]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 516);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#has_new_factory for (self: MClass): Bool */
short int nit___nit__MClass___has_new_factory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MClass___has_new_factory].s; /* _has_new_factory on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClass#has_new_factory= for (self: MClass, Bool) */
void nit___nit__MClass___has_new_factory_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MClass___has_new_factory].s = p0; /* _has_new_factory on <self:MClass> */
RET_LABEL:;
}
/* method model#MClassDef#mmodule for (self: MClassDef): MModule */
val* nit___nit__MClassDef___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 568);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 571);
fatal_exit(1);
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
val* var42 /* : NativeArray[String] */;
static val* varonce;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : MModule */;
val* var49 /* : MModule */;
val* var50 /* : String */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : String */;
val* var55 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClassDef___standard__kernel__Object__init]))(self); /* init on <self:MClassDef>*/
}
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 454);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = var33->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <var33:MClass> */
var37 = !var36;
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 581);
fatal_exit(1);
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var40 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
if (unlikely(varonce==NULL)) {
var42 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "#";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var42)->values[1]=var44;
} else {
var42 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var49 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__Object__to_s]))(var47); /* to_s on <var47:MModule>*/
}
((struct instance_standard__NativeArray*)var42)->values[0]=var50;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var53 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = ((val*(*)(val* self))(var51->class->vft[COLOR_standard__string__Object__to_s]))(var51); /* to_s on <var51:MClass>*/
}
((struct instance_standard__NativeArray*)var42)->values[2]=var54;
{
var55 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce = var42;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
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
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : String */;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var24 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : nullable MProject */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : nullable MProject */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : MModule */;
val* var52 /* : MModule */;
val* var53 /* : String */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : MClass */;
val* var61 /* : MClass */;
val* var62 /* : MVisibility */;
val* var64 /* : MVisibility */;
val* var65 /* : Sys */;
val* var66 /* : MVisibility */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : MModule */;
val* var76 /* : MModule */;
val* var77 /* : String */;
val* var78 /* : MClass */;
val* var80 /* : MClass */;
val* var81 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : MModule */;
val* var97 /* : MModule */;
val* var98 /* : String */;
val* var99 /* : MClass */;
val* var101 /* : MClass */;
val* var102 /* : MModule */;
val* var104 /* : MModule */;
val* var105 /* : String */;
val* var107 /* : String */;
val* var108 /* : MClass */;
val* var110 /* : MClass */;
val* var111 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___full_name].val != NULL; /* _full_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClassDef___full_name].val; /* _full_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 590);
fatal_exit(1);
}
} else {
{
{
var5 = nit___nit__MClassDef___is_intro(self);
}
if (var5){
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "#";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var13 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var16 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var14) on <var14:MClass> */
var19 = var14->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var14:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit___nit__MModule___namespace_for(var11, var17);
}
((struct instance_standard__NativeArray*)var6)->values[0]=var20;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var23 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClass#name (var21) on <var21:MClass> */
var26 = var21->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var21:MClass> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
((struct instance_standard__NativeArray*)var6)->values[2]=var24;
{
var27 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var3 = var27;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var30 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var28) on <var28:MClass> */
var33 = var28->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var28:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nit___nit__MModule___mproject(var31);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var37 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit___nit__MModule___mproject(var35);
}
if (var34 == NULL) {
var39 = (var38 != NULL);
} else {
{ /* Inline kernel#Object#!= (var34,var38) on <var34:nullable MProject> */
var_other = var38;
{
var42 = ((short int(*)(val* self, val* p0))(var34->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var34, var_other); /* == on <var34:nullable MProject(MProject)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
if (unlikely(varonce44==NULL)) {
var45 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "#";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var45)->values[1]=var47;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var52 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nit___nit__MModule___nit__model_base__MEntity__full_name(var50);
}
((struct instance_standard__NativeArray*)var45)->values[0]=var53;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var56 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit___nit__MClass___nit__model_base__MEntity__full_name(var54);
}
((struct instance_standard__NativeArray*)var45)->values[2]=var57;
{
var58 = ((val*(*)(val* self))(var45->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
var3 = var58;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var61 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var59) on <var59:MClass> */
var64 = var59->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var59:MClass> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = glob_sys;
{
var66 = nit__model_base___standard__Sys___private_visibility(var65);
}
{
var67 = standard___standard__Comparable____62d(var62, var66);
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "#";
var73 = standard___standard__NativeString___to_s_with_length(var72, 1l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var69)->values[1]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var76 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nit___nit__MModule___nit__model_base__MEntity__full_name(var74);
}
((struct instance_standard__NativeArray*)var69)->values[0]=var77;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var80 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MClass#name (var78) on <var78:MClass> */
var83 = var78->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var78:MClass> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
((struct instance_standard__NativeArray*)var69)->values[2]=var81;
{
var84 = ((val*(*)(val* self))(var69->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
var3 = var84;
goto RET_LABEL4;
} else {
if (unlikely(varonce85==NULL)) {
var86 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "#::";
var90 = standard___standard__NativeString___to_s_with_length(var89, 3l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var86)->values[1]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "::";
var94 = standard___standard__NativeString___to_s_with_length(var93, 2l);
var92 = var94;
varonce91 = var92;
}
((struct instance_standard__NativeArray*)var86)->values[3]=var92;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var97 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = nit___nit__MModule___nit__model_base__MEntity__full_name(var95);
}
((struct instance_standard__NativeArray*)var86)->values[0]=var98;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var101 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
((struct instance_standard__NativeArray*)var86)->values[2]=var105;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var110 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MClass#name (var108) on <var108:MClass> */
var113 = var108->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var108:MClass> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
((struct instance_standard__NativeArray*)var86)->values[4]=var111;
{
var114 = ((val*(*)(val* self))(var86->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
var3 = var114;
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
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : String */;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var24 /* : String */;
val* var25 /* : String */;
short int var26 /* : Bool */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var33 /* : nullable MProject */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var37 /* : nullable MProject */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
val* var44 /* : MClass */;
val* var46 /* : MClass */;
val* var47 /* : MVisibility */;
val* var49 /* : MVisibility */;
val* var50 /* : Sys */;
val* var51 /* : MVisibility */;
short int var52 /* : Bool */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
val* var59 /* : MModule */;
val* var61 /* : MModule */;
val* var62 /* : String */;
val* var63 /* : MClass */;
val* var65 /* : MClass */;
val* var66 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
val* var77 /* : MModule */;
val* var79 /* : MModule */;
val* var80 /* : String */;
val* var81 /* : MClass */;
val* var83 /* : MClass */;
val* var84 /* : String */;
val* var85 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassDef___c_name].val != NULL; /* _c_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MClassDef___c_name].val; /* _c_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 615);
fatal_exit(1);
}
} else {
{
{
var5 = nit___nit__MClassDef___is_intro(self);
}
if (var5){
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "___";
var10 = standard___standard__NativeString___to_s_with_length(var9, 3l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var13 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var16 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var14) on <var14:MClass> */
var19 = var14->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var14:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit___nit__MModule___c_namespace_for(var11, var17);
}
((struct instance_standard__NativeArray*)var6)->values[0]=var20;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var23 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nit___nit__MClass___nit__model_base__MEntity__c_name(var21);
}
((struct instance_standard__NativeArray*)var6)->values[2]=var24;
{
var25 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var3 = var25;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var29 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var27:MClass> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = nit___nit__MModule___mproject(var30);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var36 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nit___nit__MModule___mproject(var34);
}
if (var33 == NULL) {
var38 = (var37 == NULL);
} else {
{ /* Inline kernel#Object#== (var33,var37) on <var33:nullable MProject> */
var_other = var37;
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:nullable MProject(MProject)> */
var43 = var33 == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
var_ = var38;
if (var38){
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var46 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var44) on <var44:MClass> */
var49 = var44->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var44:MClass> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
var50 = glob_sys;
{
var51 = nit__model_base___standard__Sys___private_visibility(var50);
}
{
var52 = standard___standard__Comparable____62d(var47, var51);
}
var26 = var52;
} else {
var26 = var_;
}
if (var26){
if (unlikely(varonce53==NULL)) {
var54 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "___";
var58 = standard___standard__NativeString___to_s_with_length(var57, 3l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var54)->values[1]=var56;
} else {
var54 = varonce53;
varonce53 = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var61 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = nit___nit__MModule___nit__model_base__MEntity__c_name(var59);
}
((struct instance_standard__NativeArray*)var54)->values[0]=var62;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var65 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = standard___standard__Text___to_cmangle(var66);
}
((struct instance_standard__NativeArray*)var54)->values[2]=var69;
{
var70 = ((val*(*)(val* self))(var54->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
var3 = var70;
goto RET_LABEL4;
} else {
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "___";
var76 = standard___standard__NativeString___to_s_with_length(var75, 3l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[1]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var79 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nit___nit__MModule___nit__model_base__MEntity__c_name(var77);
}
((struct instance_standard__NativeArray*)var72)->values[0]=var80;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var83 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nit___nit__MClass___nit__model_base__MEntity__c_name(var81);
}
((struct instance_standard__NativeArray*)var72)->values[2]=var84;
{
var85 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
var3 = var85;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var12 /* : Model */;
val* var14 /* : Model */;
val* var_model /* var model: Model */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var18 /* : ArrayIterator[nullable Object] */;
val* var_19 /* var : ArrayIterator[MClassType] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var22 /* : Array[MClassType] */;
val* var24 /* : Array[MClassType] */;
val* var25 /* : POSet[MClassType] */;
val* var27 /* : POSet[MClassType] */;
short int var28 /* : Bool */;
val* var29 /* : MClass */;
val* var31 /* : MClass */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var_40 /* var : Bool */;
val* var41 /* : MClass */;
val* var43 /* : MClass */;
val* var44 /* : MModule */;
val* var46 /* : MModule */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : POSet[MClassType] */;
val* var54 /* : POSet[MClassType] */;
var_supertypes = p0;
{
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var8 = var == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 637);
fatal_exit(1);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var11 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mmodule = var9;
{
{ /* Inline mmodule#MModule#model (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_model = var12;
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var17 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mtype = var15;
var_ = var_supertypes;
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
var_supertype = var21;
{
{ /* Inline model#MClassDef#supertypes (self) on <self:MClassDef> */
var24 = self->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var22, var_supertype); /* Direct call array#Array#add on <var22:Array[MClassType]>*/
}
{
{ /* Inline model#Model#full_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var27 = var_model->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 57);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
poset___poset__POSet___add_edge(var25, var_mtype, var_supertype); /* Direct call poset#POSet#add_edge on <var25:POSet[MClassType]>*/
}
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var31 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var32,var_mmodule) on <var32:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var32,var_other) on <var32:MModule> */
var39 = var32 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_40 = var35;
if (var35){
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var43 = var_supertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var41) on <var41:MClass> */
var46 = var41->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var41:MClass> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var44,var_mmodule) on <var44:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var44,var_other) on <var44:MModule> */
var51 = var44 == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var28 = var47;
} else {
var28 = var_40;
}
if (var28){
{
{ /* Inline model#Model#intro_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var54 = var_model->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 46);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
poset___poset__POSet___add_edge(var52, var_mtype, var_supertype); /* Direct call poset#POSet#add_edge on <var52:POSet[MClassType]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_19); /* Direct call array#ArrayIterator#next on <var_19:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_19); /* Direct call array#ArrayIterator#finish on <var_19:ArrayIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method model#MClassDef#add_in_hierarchy for (self: MClassDef) */
void nit___nit__MClassDef___add_in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var2 /* : nullable POSetElement[MClassDef] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : Model */;
val* var14 /* : Model */;
val* var_model /* var model: Model */;
val* var15 /* : POSet[MClassDef] */;
val* var17 /* : POSet[MClassDef] */;
val* var18 /* : POSetElement[nullable Object] */;
val* var_res /* var res: POSetElement[MClassDef] */;
val* var20 /* : MClassType */;
val* var22 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
val* var26 /* : Set[MClassDef] */;
val* var_ /* var : Set[MClassDef] */;
val* var27 /* : Iterator[nullable Object] */;
val* var_28 /* var : Iterator[MClassDef] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var31 /* : POSet[nullable Object] */;
val* var33 /* : POSet[nullable Object] */;
{
{ /* Inline model#MClassDef#in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var8 = var == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 662);
fatal_exit(1);
}
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var11 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var9) on <var9:MModule> */
var14 = var9->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var9:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_model = var12;
{
{ /* Inline model#Model#mclassdef_hierarchy (var_model) on <var_model:Model> */
var17 = var_model->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var_model:Model> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 40);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = poset___poset__POSet___add_node(var15, self);
}
var_res = var18;
{
{ /* Inline model#MClassDef#in_hierarchy= (self,var_res) on <self:MClassDef> */
self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val = var_res; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (self) on <self:MClassDef> */
var22 = self->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mtype = var20;
{
{ /* Inline model#MClassDef#mmodule (self) on <self:MClassDef> */
var25 = self->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__MClassType___MType__collect_mclassdefs(var_mtype, var23);
}
var_ = var26;
{
var27 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClassDef]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[MClassDef]>*/
}
if (var29){
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[MClassDef]>*/
}
var_mclassdef = var30;
{
{ /* Inline poset#POSetElement#poset (var_res) on <var_res:POSetElement[MClassDef]> */
var33 = var_res->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <var_res:POSetElement[MClassDef]> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 400);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
poset___poset__POSet___add_edge(var31, self, var_mclassdef); /* Direct call poset#POSet#add_edge on <var31:POSet[nullable Object](POSet[MClassDef])>*/
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[MClassDef]>*/
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
short int var1 /* : Bool */;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var4 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_nit__model__MClass___intro].val != NULL; /* _intro on <var2:MClass> */
var_ = var5;
if (var5){
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var8 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var6:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var9,self) on <var9:MClassDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var9,var_other) on <var9:MClassDef> */
var16 = var9 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var1 = var12;
} else {
var1 = var_;
}
var = var1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 681);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 684);
fatal_exit(1);
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
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MType>*/
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
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
short int var18 /* : Bool */;
val* var19 /* : MType */;
short int var_sup_accept_null /* var sup_accept_null: Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : MType */;
val* var23 /* : MType */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : MType */;
val* var29 /* : MType */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
short int var_sub_reject_null /* var sub_reject_null: Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
short int var36 /* : Bool */;
val* var37 /* : MType */;
val* var39 /* : MType */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : MType */;
val* var45 /* : MType */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other60 /* var other: nullable Object */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : MType */;
val* var64 /* : MType */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var_ /* var : Bool */;
short int var70 /* : Bool */;
val* var71 /* : MType */;
val* var73 /* : MType */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
val* var77 /* : MType */;
val* var79 /* : MType */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
val* var86 /* : Sys */;
val* var87 /* : NativeArray[String] */;
static val* varonce;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : MClassType */;
val* var_resolved_sub /* var resolved_sub: MClassType */;
val* var116 /* : Set[MClass] */;
val* var117 /* : MClass */;
val* var119 /* : MClass */;
short int var120 /* : Bool */;
short int var_res /* var res: Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
short int var127 /* : Bool */;
val* var128 /* : MClass */;
val* var130 /* : MClass */;
val* var131 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
val* var132 /* : MClass */;
val* var134 /* : MClass */;
val* var135 /* : MClass */;
val* var137 /* : MClass */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
long var_i /* var i: Int */;
val* var143 /* : MClass */;
val* var145 /* : MClass */;
long var146 /* : Int */;
long var148 /* : Int */;
long var_149 /* var : Int */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name;
short int var155 /* : Bool */;
val* var156 /* : Array[MType] */;
val* var157 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var158 /* : Array[MType] */;
val* var160 /* : Array[MType] */;
val* var161 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
long var166 /* : Int */;
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
var = 1;
goto RET_LABEL;
} else {
}
if (var_anchor == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var11 = var_anchor == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var12 = ((short int(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sub); /* need_anchor on <var_sub:MType>*/
}
var13 = !var12;
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 733);
fatal_exit(1);
}
{
var14 = ((short int(*)(val* self))(var_sup->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sup); /* need_anchor on <var_sup:MType>*/
}
var15 = !var14;
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 734);
fatal_exit(1);
}
} else {
{
var16 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_sub, var_anchor, ((val*)NULL), var_mmodule); /* can_resolve_for on <var_sub:MType>*/
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 737);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_sub, var_mmodule, var_anchor); /* lookup_fixed on <var_sub:MType>*/
}
var_sub = var17;
{
var18 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sup->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_sup, var_anchor, ((val*)NULL), var_mmodule); /* can_resolve_for on <var_sup:MType>*/
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 739);
fatal_exit(1);
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_sup->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_sup, var_mmodule, var_anchor); /* lookup_fixed on <var_sup:MType>*/
}
var_sup = var19;
}
var_sup_accept_null = 0;
/* <var_sup:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_sup->type->table_size) {
var20 = 0;
} else {
var20 = var_sup->type->type_table[cltype] == idtype;
}
if (var20){
var_sup_accept_null = 1;
{
{ /* Inline model#MProxyType#mtype (var_sup) on <var_sup:MType(MNullableType)> */
var23 = var_sup->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_sup:MType(MNullableType)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_sup = var21;
} else {
/* <var_sup:MType> isa MNotNullType */
cltype25 = type_nit__MNotNullType.color;
idtype26 = type_nit__MNotNullType.id;
if(cltype25 >= var_sup->type->table_size) {
var24 = 0;
} else {
var24 = var_sup->type->type_table[cltype25] == idtype26;
}
if (var24){
{
{ /* Inline model#MProxyType#mtype (var_sup) on <var_sup:MType(MNotNullType)> */
var29 = var_sup->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_sup:MType(MNotNullType)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
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
var_sup_accept_null = 1;
} else {
}
}
}
var_sub_reject_null = 0;
/* <var_sub:MType> isa MNullableType */
cltype34 = type_nit__MNullableType.color;
idtype35 = type_nit__MNullableType.id;
if(cltype34 >= var_sub->type->table_size) {
var33 = 0;
} else {
var33 = var_sub->type->type_table[cltype34] == idtype35;
}
if (var33){
var36 = !var_sup_accept_null;
if (var36){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProxyType#mtype (var_sub) on <var_sub:MType(MNullableType)> */
var39 = var_sub->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_sub = var37;
} else {
/* <var_sub:MType> isa MNotNullType */
cltype41 = type_nit__MNotNullType.color;
idtype42 = type_nit__MNotNullType.id;
if(cltype41 >= var_sub->type->table_size) {
var40 = 0;
} else {
var40 = var_sub->type->type_table[cltype41] == idtype42;
}
if (var40){
var_sub_reject_null = 1;
{
{ /* Inline model#MProxyType#mtype (var_sub) on <var_sub:MType(MNotNullType)> */
var45 = var_sub->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNotNullType)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_sub = var43;
} else {
/* <var_sub:MType> isa MNullType */
cltype47 = type_nit__MNullType.color;
idtype48 = type_nit__MNullType.id;
if(cltype47 >= var_sub->type->table_size) {
var46 = 0;
} else {
var46 = var_sub->type->type_table[cltype47] == idtype48;
}
if (var46){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
}
for(;;) {
/* <var_sub:MType> isa MFormalType */
cltype50 = type_nit__MFormalType.color;
idtype51 = type_nit__MFormalType.id;
if(cltype50 >= var_sub->type->table_size) {
var49 = 0;
} else {
var49 = var_sub->type->type_table[cltype50] == idtype51;
}
if (var49){
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType(MFormalType)> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType(MFormalType)> */
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
var = 1;
goto RET_LABEL;
} else {
}
if (var_anchor == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other60 = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other60); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var62 = !var61;
var58 = var62;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (unlikely(!var57)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 777);
fatal_exit(1);
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nit__model__MType__lookup_bound]))(var_sub, var_mmodule, var_anchor); /* lookup_bound on <var_sub:MType(MFormalType)>*/
}
var_sub = var63;
if (var_sub_reject_null){
{
var64 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__as_notnull]))(var_sub); /* as_notnull on <var_sub:MType>*/
}
var_sub = var64;
} else {
}
/* <var_sub:MType> isa MNullableType */
cltype66 = type_nit__MNullableType.color;
idtype67 = type_nit__MNullableType.id;
if(cltype66 >= var_sub->type->table_size) {
var65 = 0;
} else {
var65 = var_sub->type->type_table[cltype66] == idtype67;
}
if (var65){
var69 = !var_sup_accept_null;
var_ = var69;
if (var69){
var70 = !var_sub_reject_null;
var68 = var70;
} else {
var68 = var_;
}
if (var68){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProxyType#mtype (var_sub) on <var_sub:MType(MNullableType)> */
var73 = var_sub->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_sub = var71;
} else {
/* <var_sub:MType> isa MNotNullType */
cltype75 = type_nit__MNotNullType.color;
idtype76 = type_nit__MNotNullType.id;
if(cltype75 >= var_sub->type->table_size) {
var74 = 0;
} else {
var74 = var_sub->type->type_table[cltype75] == idtype76;
}
if (var74){
var_sub_reject_null = 1;
{
{ /* Inline model#MProxyType#mtype (var_sub) on <var_sub:MType(MNotNullType)> */
var79 = var_sub->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNotNullType)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_sub = var77;
} else {
/* <var_sub:MType> isa MNullType */
cltype81 = type_nit__MNullType.color;
idtype82 = type_nit__MNullType.id;
if(cltype81 >= var_sub->type->table_size) {
var80 = 0;
} else {
var80 = var_sub->type->type_table[cltype81] == idtype82;
}
if (var80){
var = var_sup_accept_null;
goto RET_LABEL;
} else {
}
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_sub:MType> isa MClassType */
cltype84 = type_nit__MClassType.color;
idtype85 = type_nit__MClassType.id;
if(cltype84 >= var_sub->type->table_size) {
var83 = 0;
} else {
var83 = var_sub->type->type_table[cltype84] == idtype85;
}
if (unlikely(!var83)) {
var86 = glob_sys;
if (unlikely(varonce==NULL)) {
var87 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " <? ";
var91 = standard___standard__NativeString___to_s_with_length(var90, 4l);
var89 = var91;
varonce88 = var89;
}
((struct instance_standard__NativeArray*)var87)->values[1]=var89;
} else {
var87 = varonce;
varonce = NULL;
}
{
var92 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var87)->values[0]=var92;
{
var93 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var87)->values[2]=var93;
{
var94 = ((val*(*)(val* self))(var87->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce = var87;
{
standard__file___Sys___print(var86, var94); /* Direct call file#Sys#print on <var86:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 796);
fatal_exit(1);
}
/* <var_sup:MType> isa MFormalType */
cltype96 = type_nit__MFormalType.color;
idtype97 = type_nit__MFormalType.id;
if(cltype96 >= var_sup->type->table_size) {
var95 = 0;
} else {
var95 = var_sup->type->type_table[cltype96] == idtype97;
}
if (var95){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MNullType */
cltype99 = type_nit__MNullType.color;
idtype100 = type_nit__MNullType.id;
if(cltype99 >= var_sup->type->table_size) {
var98 = 0;
} else {
var98 = var_sup->type->type_table[cltype99] == idtype100;
}
if (var98){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MClassType */
cltype102 = type_nit__MClassType.color;
idtype103 = type_nit__MClassType.id;
if(cltype102 >= var_sup->type->table_size) {
var101 = 0;
} else {
var101 = var_sup->type->type_table[cltype102] == idtype103;
}
if (unlikely(!var101)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 808);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#== (var_sub,var_sup) on <var_sub:MType(MClassType)> */
var_other = var_sup;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:MType(MClassType)> */
var108 = var_sub == var_other;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
if (var104){
var = 1;
goto RET_LABEL;
} else {
}
if (var_anchor == NULL) {
var109 = 1; /* is null */
} else {
var109 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var114 = var_anchor == var_other;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
var109 = var110;
}
if (var109){
var_anchor = var_sub;
} else {
}
{
var115 = nit___nit__MClassType___MType__anchor_to(var_sub, var_mmodule, var_anchor);
}
var_resolved_sub = var115;
{
var116 = nit___nit__MClassType___MType__collect_mclasses(var_resolved_sub, var_mmodule);
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MClassType)> */
var119 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MClassType)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = ((short int(*)(val* self, val* p0))((((long)var116&3)?class_info[((long)var116&3)]:var116->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var116, var117); /* has on <var116:Set[MClass]>*/
}
var_res = var120;
{
{ /* Inline kernel#Bool#== (var_res,0) on <var_res:Bool> */
var123 = var_res == 0;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
if (var121){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype125 = type_nit__MGenericType.color;
idtype126 = type_nit__MGenericType.id;
if(cltype125 >= var_sup->type->table_size) {
var124 = 0;
} else {
var124 = var_sup->type->type_table[cltype125] == idtype126;
}
var127 = !var124;
if (var127){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var130 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = nit___nit__MType___supertype_to(var_sub, var_mmodule, var_anchor, var128);
}
var_sub2 = var131;
{
{ /* Inline model#MClassType#mclass (var_sub2) on <var_sub2:MClassType> */
var134 = var_sub2->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sub2:MClassType> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var137 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var132,var135) on <var132:MClass> */
var_other = var135;
{
{ /* Inline kernel#Object#is_same_instance (var132,var_other) on <var132:MClass> */
var142 = var132 == var_other;
var140 = var142;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var138 = var140;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
if (unlikely(!var138)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 820);
fatal_exit(1);
}
var_i = 0l;
{
{ /* Inline model#MClassType#mclass (var_sup) on <var_sup:MType(MGenericType)> */
var145 = var_sup->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline model#MClass#arity (var143) on <var143:MClass> */
var148 = var143->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var143:MClass> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
var_149 = var146;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_149) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_149:Int> isa OTHER */
/* <var_149:Int> isa OTHER */
var152 = 1; /* easy <var_149:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var155 = var_i < var_149;
var150 = var155;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
if (var150){
{
var156 = ((val*(*)(val* self))(var_sub2->class->vft[COLOR_nit__model__MClassType__arguments]))(var_sub2); /* arguments on <var_sub2:MClassType>*/
}
{
var157 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var156, var_i);
}
var_sub_arg = var157;
{
{ /* Inline model#MGenericType#arguments (var_sup) on <var_sup:MType(MGenericType)> */
var160 = var_sup->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_sup:MType(MGenericType)> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var158, var_i);
}
var_sup_arg = var161;
{
var162 = nit___nit__MType___is_subtype(var_sub_arg, var_mmodule, var_anchor, var_sup_arg);
}
var_res = var162;
{
{ /* Inline kernel#Bool#== (var_res,0) on <var_res:Bool> */
var165 = var_res == 0;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
if (var163){
var = 0;
goto RET_LABEL;
} else {
}
{
var166 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var166;
} else {
goto BREAK_label167;
}
}
BREAK_label167: (void)0;
var = 1;
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
val* var5 /* : MType */;
val* var_res /* var res: MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
{
var3 = ((short int(*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MType__need_anchor]))(var_anchor); /* need_anchor on <var_anchor:MClassType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 867);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nit__model__MType__resolve_for]))(self, var_anchor, ((val*)NULL), var_mmodule, 1); /* resolve_for on <self:MType>*/
}
var_res = var5;
{
var6 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__need_anchor]))(var_res); /* need_anchor on <var_res:MType>*/
}
var7 = !var6;
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 870);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#need_anchor for (self: MType): Bool */
short int nit___nit__MType___need_anchor(val* self) {
short int var /* : Bool */;
var = 1;
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
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var12 /* : MClass */;
val* var14 /* : MClass */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MType */;
val* var_resolved_self /* var resolved_self: nullable Object */;
val* var28 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_29 /* var : Set[MClassType] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : Iterator[MClassType] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MType */;
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
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline model#MClass#mclass_type (var_super_mclass) on <var_super_mclass:MClass> */
var9 = var_super_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_super_mclass:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
} else {
}
/* <self:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= self->type->table_size) {
var11 = 0;
} else {
var11 = self->type->type_table[cltype] == idtype;
}
var_ = var11;
if (var11){
{
{ /* Inline model#MClassType#mclass (self) on <self:MType(MClassType)> */
var14 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MType(MClassType)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var12,var_super_mclass) on <var12:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:MClass> */
var19 = var12 == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var10 = var15;
} else {
var10 = var_;
}
if (var10){
var = self;
goto RET_LABEL;
} else {
}
{
var20 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
if (var20){
if (var_anchor == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other24); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 900);
fatal_exit(1);
}
{
var27 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__model__MType__anchor_to]))(self, var_mmodule, var_anchor); /* anchor_to on <self:MType>*/
}
var_resolved_self = var27;
} else {
var_resolved_self = self;
}
{
var28 = ((val*(*)(val* self, val* p0))(var_resolved_self->class->vft[COLOR_nit__model__MType__collect_mtypes]))(var_resolved_self, var_mmodule); /* collect_mtypes on <var_resolved_self:nullable Object(MType)>*/
}
var_supertypes = var28;
var_29 = var_supertypes;
{
var30 = ((val*(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_29); /* iterator on <var_29:Set[MClassType]>*/
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[MClassType]>*/
}
if (var32){
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[MClassType]>*/
}
var_supertype = var33;
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var36 = var_supertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var34,var_super_mclass) on <var34:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel#Object#is_same_instance (var34,var_other) on <var34:MClass> */
var41 = var34 == var_other;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var42 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_supertype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_supertype, self, var_anchor, var_mmodule, 0); /* resolve_for on <var_supertype:MClassType>*/
}
var = var42;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[MClassType]>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 912);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1013);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#as_nullable for (self: MType): MType */
val* nit___nit__MType___as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MNullableType */;
{
{ /* Inline model#MType#as_nullable_cache (self) on <self:MType> */
var3 = self->attrs[COLOR_nit__model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable MType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MType(MType)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
var9 = NEW_nit__MNullableType(&type_nit__MNullableType);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__model__MProxyType__mtype_61d]))(var9, self); /* mtype= on <var9:MNullableType>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:MNullableType>*/
}
var_res = var9;
{
{ /* Inline model#MType#as_nullable_cache= (self,var_res) on <self:MType> */
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var_res; /* _as_nullable_cache on <self:MType> */
RET_LABEL10:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#undecorate for (self: MType): MType */
val* nit___nit__MType___undecorate(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MType#as_notnull for (self: MType): MType */
val* nit___nit__MType___as_notnull(val* self) {
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
var = 1l;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1098);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mclasses for (self: MType, MModule): Set[MClass] */
val* nit___nit__MType___collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1108);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model#MType#collect_mtypes for (self: MType, MModule): Set[MClassType] */
val* nit___nit__MType___collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1114);
fatal_exit(1);
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1127);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(self, var_mmodule); /* collect_mclassdefs on <self:MType>*/
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:MProperty> */
var6 = var_mproperty->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var3, var4); /* has on <var3:Set[MClassDef]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1145);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
var = 0;
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
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__MClassType___MType__anchor_to]))(self, p0, p1); /* anchor_to on <self:MClassType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1159);
fatal_exit(1);
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
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1168);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#collect_mclassdefs_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1233);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var_cache, var_mmodule);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1191);
fatal_exit(1);
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
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var14 = !var13;
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1179);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:MClassType> */
var17 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1234);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_cache = var15;
{
var18 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var_cache, var_mmodule);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1191);
fatal_exit(1);
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1195);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1235);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var_cache, var_mmodule);
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
val* var_ /* var : Array[MClass] */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
val* var_todo /* var todo: Array[MClass] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var13 /* : Array[MClassDef] */;
val* var15 /* : Array[MClassDef] */;
val* var_16 /* var : Array[MClassDef] */;
val* var17 /* : ArrayIterator[nullable Object] */;
val* var_18 /* var : ArrayIterator[MClassDef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var21 /* : POSetElement[MModule] */;
val* var23 /* : POSetElement[MModule] */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Array[MClassType] */;
val* var31 /* : Array[MClassType] */;
val* var_32 /* var : Array[MClassType] */;
val* var33 /* : ArrayIterator[nullable Object] */;
val* var_34 /* var : ArrayIterator[MClassType] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var37 /* : MClass */;
val* var39 /* : MClass */;
val* var_superclass /* var superclass: MClass */;
short int var40 /* : Bool */;
val* var45 /* : HashMap[MModule, Set[MClassDef]] */;
val* var47 /* : HashMap[MModule, Set[MClassDef]] */;
val* var48 /* : HashMap[MModule, Set[MClass]] */;
val* var50 /* : HashMap[MModule, Set[MClass]] */;
val* var51 /* : HashMap[MModule, Set[MClassType]] */;
val* var53 /* : HashMap[MModule, Set[MClassType]] */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_seen, var3); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[MClass]>*/
}
var6 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___with_capacity(var6, 1l); /* Direct call array#Array#with_capacity on <var6:Array[MClass]>*/
}
var_ = var6;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var9 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var7); /* Direct call array#AbstractArray#push on <var_:Array[MClass]>*/
}
var_todo = var_;
for(;;) {
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_todo);
}
var11 = !var10;
if (var11){
{
var12 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_todo);
}
var_mclass = var12;
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var15 = var_mclass->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 454);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
{
var17 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_16);
}
var_18 = var17;
for(;;) {
{
var19 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_18);
}
if (var19){
{
var20 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_18);
}
var_mclassdef = var20;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var23 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = poset___poset__POSetElement____60d_61d(var21, var24);
}
var28 = !var27;
if (var28){
goto BREAK_label;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_res, var_mclassdef); /* Direct call hash_collection#HashSet#add on <var_res:HashSet[MClassDef]>*/
}
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 627);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_32 = var29;
{
var33 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_32);
}
var_34 = var33;
for(;;) {
{
var35 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_34);
}
if (var35){
{
var36 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_34);
}
var_supertype = var36;
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_types, var_supertype); /* Direct call hash_collection#HashSet#add on <var_types:HashSet[MClassType]>*/
}
{
{ /* Inline model#MClassType#mclass (var_supertype) on <var_supertype:MClassType> */
var39 = var_supertype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_superclass = var37;
{
var40 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var_seen, var_superclass);
}
if (var40){
goto BREAK_label41;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_seen, var_superclass); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[MClass]>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_todo, var_superclass); /* Direct call array#Array#add on <var_todo:Array[MClass]>*/
}
BREAK_label41: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_34); /* Direct call array#ArrayIterator#next on <var_34:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_34); /* Direct call array#ArrayIterator#finish on <var_34:ArrayIterator[MClassType]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_18); /* Direct call array#ArrayIterator#next on <var_18:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_18); /* Direct call array#ArrayIterator#finish on <var_18:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label44;
}
}
BREAK_label44: (void)0;
{
{ /* Inline model#MClassType#collect_mclassdefs_cache (self) on <self:MClassType> */
var47 = self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1233);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var45, var_mmodule, var_res); /* Direct call hash_collection#HashMap#[]= on <var45:HashMap[MModule, Set[MClassDef]]>*/
}
{
{ /* Inline model#MClassType#collect_mclasses_cache (self) on <self:MClassType> */
var50 = self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1234);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var48, var_mmodule, var_seen); /* Direct call hash_collection#HashMap#[]= on <var48:HashMap[MModule, Set[MClass]]>*/
}
{
{ /* Inline model#MClassType#collect_mtypes_cache (self) on <self:MClassType> */
var53 = self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1235);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var51, var_mmodule, var_types); /* Direct call hash_collection#HashMap#[]= on <var51:HashMap[MModule, Set[MClassType]]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1233);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1234);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1235);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassType#init for (self: MClassType) */
void nit___nit__MClassType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MClassType___standard__kernel__Object__init]))(self); /* init on <self:MClassType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
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
val* var16 /* : Array[MType] */;
val* var18 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[MType] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var23 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : String */;
val* var38 /* : Array[MType] */;
val* var40 /* : Array[MType] */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MGenericType___standard__kernel__Object__init]))(self); /* init on <self:MGenericType>*/
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var2 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1250);
fatal_exit(1);
}
{
{ /* Inline model#MGenericType#need_anchor= (self,0) on <self:MGenericType> */
self->attrs[COLOR_nit__model__MGenericType___need_anchor].s = 0; /* _need_anchor on <self:MGenericType> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var18 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
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
var_t = var22;
{
var23 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
if (var23){
{
{ /* Inline model#MGenericType#need_anchor= (self,1) on <self:MGenericType> */
self->attrs[COLOR_nit__model__MGenericType___need_anchor].s = 1; /* _need_anchor on <self:MGenericType> */
RET_LABEL24:(void)0;
}
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_20); /* Direct call array#ArrayIterator#finish on <var_20:ArrayIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var25 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "[";
var29 = standard___standard__NativeString___to_s_with_length(var28, 1l);
var27 = var29;
varonce26 = var27;
}
((struct instance_standard__NativeArray*)var25)->values[1]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "]";
var33 = standard___standard__NativeString___to_s_with_length(var32, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var25)->values[3]=var31;
} else {
var25 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var36 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = ((val*(*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34); /* to_s on <var34:MClass>*/
}
((struct instance_standard__NativeArray*)var25)->values[0]=var37;
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var40 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ", ";
var44 = standard___standard__NativeString___to_s_with_length(var43, 2l);
var42 = var44;
varonce41 = var42;
}
{
var45 = standard__string___Collection___join(var38, var42);
}
((struct instance_standard__NativeArray*)var25)->values[2]=var45;
{
var46 = ((val*(*)(val* self))(var25->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
{ /* Inline model#MGenericType#to_s= (self,var46) on <self:MGenericType> */
self->attrs[COLOR_nit__model__MGenericType___to_s].val = var46; /* _to_s on <self:MGenericType> */
RET_LABEL47:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1263);
fatal_exit(1);
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
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : MClass */;
val* var25 /* : MClass */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___full_name].val != NULL; /* _full_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MGenericType___full_name].val; /* _full_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1267);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
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
var13 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var_t); /* full_name on <var_t:MType>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_10); /* Direct call array#ArrayIterator#finish on <var_10:ArrayIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var14 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "[";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[1]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "]";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var14)->values[3]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var25 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__MClass___nit__model_base__MEntity__full_name(var23);
}
((struct instance_standard__NativeArray*)var14)->values[0]=var26;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = ", ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 2l);
var28 = var30;
varonce27 = var28;
}
{
var31 = standard__string___Collection___join(var_args, var28);
}
((struct instance_standard__NativeArray*)var14)->values[2]=var31;
{
var32 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
var3 = var32;
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
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
var1 = self->attrs[COLOR_nit__model__MGenericType___c_name].val != NULL; /* _c_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MGenericType___c_name].val; /* _c_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1277);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var7 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
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
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "__";
var18 = standard___standard__NativeString___to_s_with_length(var17, 2l);
var16 = var18;
varonce = var16;
}
{
var19 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__String___43d]))(var_res, var16); /* + on <var_res:String>*/
}
var_res = var19;
{
var20 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MType>*/
}
{
var21 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__String___43d]))(var_res, var20); /* + on <var_res:String>*/
}
var_res = var21;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_13); /* Direct call array#ArrayIterator#finish on <var_13:ArrayIterator[MType]>*/
}
{
var22 = standard___standard__String___Object__to_s(var_res);
}
var3 = var22;
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
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : MClassType */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1292);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
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
var14 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nit__model__MType__resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_t:MType>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[MType]>*/
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MGenericType> */
var17 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__MClass___get_mtype(var15, var_types);
}
var = var18;
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
val* var5 /* : Array[MType] */;
val* var7 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var8 /* : ArrayIterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
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
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var7 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_9);
}
if (var10){
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_9);
}
var_t = var11;
{
var12 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_t->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <var_t:MType>*/
}
var13 = !var12;
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_9); /* Direct call array#ArrayIterator#finish on <var_9:ArrayIterator[MType]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MGenericType#length for (self: MGenericType): Int */
long nit___nit__MGenericType___MType__length(val* self) {
long var /* : Int */;
long var_res /* var res: Int */;
val* var1 /* : Array[MType] */;
val* var3 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var4 /* : ArrayIterator[nullable Object] */;
val* var_5 /* var : ArrayIterator[MType] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_a /* var a: MType */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
var_res = 1l;
{
{ /* Inline model#MGenericType#arguments (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_5);
}
if (var6){
{
var7 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_5);
}
var_a = var7;
{
var8 = ((long(*)(val* self))(var_a->class->vft[COLOR_nit__model__MType__length]))(var_a); /* length on <var_a:MType>*/
}
{
{ /* Inline kernel#Int#+ (var_res,var8) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var12 = var_res + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_5); /* Direct call array#ArrayIterator#next on <var_5:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_5); /* Direct call array#ArrayIterator#finish on <var_5:ArrayIterator[MType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MFormalType#as_notnull for (self: MFormalType): MType */
val* nit___nit__MFormalType___MType__as_notnull(val* self) {
val* var /* : MType */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var3 /* : MNotNullType */;
var1 = self->attrs[COLOR_nit__model__MFormalType___as_notnull].val != NULL; /* _as_notnull on <self:MFormalType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MFormalType___as_notnull].val; /* _as_notnull on <self:MFormalType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _as_notnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1337);
fatal_exit(1);
}
} else {
var3 = NEW_nit__MNotNullType(&type_nit__MNotNullType);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MProxyType__mtype_61d]))(var3, self); /* mtype= on <var3:MNotNullType>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:MNotNullType>*/
}
self->attrs[COLOR_nit__model__MFormalType___as_notnull].val = var3; /* _as_notnull on <self:MFormalType> */
var2 = var3;
}
var = var2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1352);
fatal_exit(1);
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
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : ArraySet[MType] */;
val* var_types /* var types: ArraySet[MType] */;
val* var16 /* : nullable Object */;
val* var_res /* var res: MVirtualTypeDef */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var17 /* : ArrayIterator[nullable Object] */;
val* var_18 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var21 /* : nullable MType */;
val* var23 /* : nullable MType */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1357);
fatal_exit(1);
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var5 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1360);
fatal_exit(1);
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_props) on <var_props:Array[MVirtualTypeDef]> */
var10 = var_props->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_props:Array[MVirtualTypeDef]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var14 = standard___standard__SequenceRead___Collection__first(var_props);
}
var = var14;
goto RET_LABEL;
} else {
}
}
var15 = NEW_standard__ArraySet(&type_standard__ArraySet__nit__MType);
{
standard___standard__ArraySet___standard__kernel__Object__init(var15); /* Direct call array#ArraySet#init on <var15:ArraySet[MType]>*/
}
var_types = var15;
{
var16 = standard___standard__SequenceRead___Collection__first(var_props);
}
var_res = var16;
var_ = var_props;
{
var17 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_18 = var17;
for(;;) {
{
var19 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_18);
}
if (var19){
{
var20 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_18);
}
var_p = var20;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var23 = var_p->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1367);
fatal_exit(1);
}
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var_types, var21); /* Direct call array#ArraySet#add on <var_types:ArraySet[MType]>*/
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_res) on <var_res:MVirtualTypeDef> */
var26 = var_res->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_res:MVirtualTypeDef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = !var24;
if (var27){
var_res = var_p;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_18); /* Direct call array#ArrayIterator#next on <var_18:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_18); /* Direct call array#ArrayIterator#finish on <var_18:ArrayIterator[MVirtualTypeDef]>*/
}
{
var28 = standard___standard__ArraySet___standard__abstract_collection__Collection__length(var_types);
}
{
{ /* Inline kernel#Int#== (var28,1l) on <var28:Int> */
var31 = var28 == 1l;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var = var_res;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1373);
fatal_exit(1);
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
val* var23 /* : Sys */;
val* var24 /* : MClassKind */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MClassKind */;
val* var35 /* : MClassKind */;
val* var36 /* : Sys */;
val* var37 /* : MClassKind */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1384);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1387);
fatal_exit(1);
}
var_res = var6;
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var_res, var_mmodule, var_resolved_receiver); /* lookup_fixed on <var_res:MType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = glob_sys;
{
var24 = nit__model___standard__Sys___enum_kind(var23);
}
{
{ /* Inline kernel#Object#== (var20,var24) on <var20:MClassKind> */
var_other = var24;
{
{ /* Inline kernel#Object#is_same_instance (var20,var_other) on <var20:MClassKind> */
var29 = var20 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var13 = var25;
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
var32 = var_resolved_receiver->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = glob_sys;
{
var37 = nit__model___standard__Sys___enum_kind(var36);
}
{
{ /* Inline kernel#Object#== (var33,var37) on <var33:MClassKind> */
var_other = var37;
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:MClassKind> */
var42 = var33 == var_other;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
val* var10 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var11 /* : MType */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1407);
fatal_exit(1);
}
{
var3 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var3){
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1414);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var_anchor, ((val*)NULL), var_mmodule, 1); /* resolve_for on <var_mtype:MType>*/
}
var_resolved_receiver = var9;
} else {
var_resolved_receiver = var_mtype;
}
{
var10 = nit___nit__MVirtualType___MType__lookup_bound(self, var_mmodule, var_resolved_receiver);
}
var_verbatim_bound = var10;
{
var11 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nit__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_verbatim_bound:MType>*/
}
var_res = var11;
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
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var8 /* : MVirtualTypeProp */;
val* var10 /* : MVirtualTypeProp */;
short int var11 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var1){
if (var_anchor == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1430);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var7;
} else {
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var10 = self->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MType___has_mproperty(var_mtype, var_mmodule, var8);
}
var = var11;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MVirtualType___standard__kernel__Object__init]))(self); /* init on <self:MVirtualType>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1472);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1472);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1481);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1481);
fatal_exit(1);
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
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameterType___full_name].val != NULL; /* _full_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MParameterType___full_name].val; /* _full_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1485);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var12 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1472);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nit___nit__MClass___nit__model_base__MEntity__full_name(var10);
}
((struct instance_standard__NativeArray*)var5)->values[0]=var13;
{
{ /* Inline model#MParameterType#name (self) on <self:MParameterType> */
var16 = self->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1481);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
((struct instance_standard__NativeArray*)var5)->values[2]=var14;
{
var17 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var17;
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
