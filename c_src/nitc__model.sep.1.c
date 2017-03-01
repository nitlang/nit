#include "nitc__model.sep.0.h"
/* method model$MEntity$visibility for (self: MEntity): MVisibility */
val* nitc__model___MEntity___visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___public_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Model$mclasses for (self: Model): Array[MClass] */
val* nitc__model___Model___mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nitc__model__Model___mclasses].val; /* _mclasses on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 43);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$mproperties for (self: Model): Array[MProperty] */
val* nitc__model___Model___mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nitc__model__Model___mproperties].val; /* _mproperties on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$mclassdef_hierarchy for (self: Model): POSet[MClassDef] */
val* nitc__model___Model___mclassdef_hierarchy(val* self) {
val* var /* : POSet[MClassDef] */;
val* var1 /* : POSet[MClassDef] */;
var1 = self->attrs[COLOR_nitc__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 49);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$intro_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* nitc__model___Model___intro_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_nitc__model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 55);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$full_mtype_specialization_hierarchy for (self: Model): POSet[MClassType] */
val* nitc__model___Model___full_mtype_specialization_hierarchy(val* self) {
val* var /* : POSet[MClassType] */;
val* var1 /* : POSet[MClassType] */;
var1 = self->attrs[COLOR_nitc__model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$mclasses_by_name for (self: Model): MultiHashMap[String, MClass] */
val* nitc__model___Model___mclasses_by_name(val* self) {
val* var /* : MultiHashMap[String, MClass] */;
val* var1 /* : MultiHashMap[String, MClass] */;
var1 = self->attrs[COLOR_nitc__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 75);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$get_mclasses_by_name for (self: Model, String): nullable Array[MClass] */
val* nitc__model___Model___get_mclasses_by_name(val* self, val* p0) {
val* var /* : nullable Array[MClass] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MClass] */;
val* var3 /* : MultiHashMap[String, MClass] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
{ /* Inline model$Model$mclasses_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nitc__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 75);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_name);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Model$mproperties_by_name for (self: Model): MultiHashMap[String, MProperty] */
val* nitc__model___Model___mproperties_by_name(val* self) {
val* var /* : MultiHashMap[String, MProperty] */;
val* var1 /* : MultiHashMap[String, MProperty] */;
var1 = self->attrs[COLOR_nitc__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$Model$get_mproperties_by_name for (self: Model, String): nullable Array[MProperty] */
val* nitc__model___Model___get_mproperties_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProperty] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProperty] */;
val* var3 /* : MultiHashMap[String, MProperty] */;
val* var4 /* : nullable Object */;
var_name = p0;
{
{ /* Inline model$Model$mproperties_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nitc__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 89);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_name);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Model$null_type for (self: Model): MNullType */
val* nitc__model___Model___null_type(val* self) {
val* var /* : MNullType */;
val* var1 /* : MNullType */;
var1 = self->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 103);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MModule$intro_mclasses for (self: MModule): Array[MClass] */
val* nitc__model___MModule___intro_mclasses(val* self) {
val* var /* : Array[MClass] */;
val* var1 /* : Array[MClass] */;
var1 = self->attrs[COLOR_nitc__model__MModule___intro_mclasses].val; /* _intro_mclasses on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 147);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MModule$mclassdefs for (self: MModule): Array[MClassDef] */
val* nitc__model___MModule___mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_nitc__model__MModule___mclassdefs].val; /* _mclassdefs on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 150);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MModule$flatten_mclass_hierarchy for (self: MModule): POSet[MClass] */
val* nitc__model___MModule___flatten_mclass_hierarchy(val* self) {
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
val* var23 /* : IndexedIterator[nullable Object] */;
val* var_24 /* var : IndexedIterator[MClassDef] */;
short int var25 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var_c /* var c: MClass */;
val* var31 /* : POSetElement[nullable Object] */;
val* var32 /* : Array[MClassType] */;
val* var34 /* : Array[MClassType] */;
val* var_35 /* var : Array[MClassType] */;
val* var36 /* : IndexedIterator[nullable Object] */;
val* var_37 /* var : IndexedIterator[MClassType] */;
short int var38 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var41 /* : MClass */;
val* var43 /* : MClass */;
{
{ /* Inline model$MModule$flatten_mclass_hierarchy_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable POSet[MClass]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable POSet[MClass](POSet[MClass])>*/
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
var9 = NEW_poset__POSet(&type_poset__POSet__nitc__MClass);
{
{ /* Inline kernel$Object$init (var9) on <var9:POSet[MClass]> */
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
{ /* Inline mmodule$MModule$in_importation (self) on <self:MModule> */
var13 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
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
var15 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[MModule]>*/
}
if (var17){
} else {
goto BREAK_label;
}
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[MModule]>*/
}
var_m = var18;
{
{ /* Inline model$MModule$mclassdefs (var_m) on <var_m:MModule> */
var21 = var_m->attrs[COLOR_nitc__model__MModule___mclassdefs].val; /* _mclassdefs on <var_m:MModule> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 150);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_22 = var19;
{
var23 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_22);
}
var_24 = var23;
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_24); /* is_ok on <var_24:IndexedIterator[MClassDef]>*/
}
if (var25){
} else {
goto BREAK_label26;
}
{
var27 = ((val*(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_24); /* item on <var_24:IndexedIterator[MClassDef]>*/
}
var_cd = var27;
{
{ /* Inline model$MClassDef$mclass (var_cd) on <var_cd:MClassDef> */
var30 = var_cd->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_cd:MClassDef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
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
{ /* Inline model$MClassDef$supertypes (var_cd) on <var_cd:MClassDef> */
var34 = var_cd->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_cd:MClassDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_35 = var32;
{
var36 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_35);
}
var_37 = var36;
for(;;) {
{
var38 = ((short int(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_37); /* is_ok on <var_37:IndexedIterator[MClassType]>*/
}
if (var38){
} else {
goto BREAK_label39;
}
{
var40 = ((val*(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_37); /* item on <var_37:IndexedIterator[MClassType]>*/
}
var_s = var40;
{
{ /* Inline model$MClassType$mclass (var_s) on <var_s:MClassType> */
var43 = var_s->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_s:MClassType> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
poset___poset__POSet___add_edge(var_res, var_c, var41); /* Direct call poset$POSet$add_edge on <var_res:nullable POSet[MClass](POSet[MClass])>*/
}
{
((void(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_37); /* next on <var_37:IndexedIterator[MClassType]>*/
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_37); /* finish on <var_37:IndexedIterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_24); /* next on <var_24:IndexedIterator[MClassDef]>*/
}
}
BREAK_label26: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_24); /* finish on <var_24:IndexedIterator[MClassDef]>*/
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[MModule]>*/
}
{
{ /* Inline model$MModule$flatten_mclass_hierarchy_cache= (self,var_res) on <self:MModule> */
self->attrs[COLOR_nitc__model__MModule___flatten_mclass_hierarchy_cache].val = var_res; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL44:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MModule$linearize_mclasses for (self: MModule, Array[MClass]) */
void nitc__model___MModule___linearize_mclasses(val* self, val* p0) {
val* var_mclasses /* var mclasses: Array[MClass] */;
val* var /* : POSet[MClass] */;
var_mclasses = p0;
{
var = nitc__model___MModule___flatten_mclass_hierarchy(self);
}
{
core___core__Comparator___sort(var, var_mclasses); /* Direct call sorter$Comparator$sort on <var:POSet[MClass]>*/
}
RET_LABEL:;
}
/* method model$MModule$linearize_mclassdefs for (self: MModule, Array[MClassDef]) */
void nitc__model___MModule___linearize_mclassdefs(val* self, val* p0) {
val* var_mclassdefs /* var mclassdefs: Array[MClassDef] */;
val* var /* : MClassDefSorter */;
val* var_sorter /* var sorter: MClassDefSorter */;
var_mclassdefs = p0;
var = NEW_nitc__model__MClassDefSorter(&type_nitc__model__MClassDefSorter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__model__MClassDefSorter__mmodule_61d]))(var, self); /* mmodule= on <var:MClassDefSorter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:MClassDefSorter>*/
}
var_sorter = var;
{
core___core__Comparator___sort(var_sorter, var_mclassdefs); /* Direct call sorter$Comparator$sort on <var_sorter:MClassDefSorter>*/
}
RET_LABEL:;
}
/* method model$MModule$linearize_mpropdefs for (self: MModule, Array[MPropDef]) */
void nitc__model___MModule___linearize_mpropdefs(val* self, val* p0) {
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var /* : MPropDefSorter */;
val* var_sorter /* var sorter: MPropDefSorter */;
var_mpropdefs = p0;
var = NEW_nitc__model__MPropDefSorter(&type_nitc__model__MPropDefSorter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__model__MPropDefSorter__mmodule_61d]))(var, self); /* mmodule= on <var:MPropDefSorter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:MPropDefSorter>*/
}
var_sorter = var;
{
core___core__Comparator___sort(var_sorter, var_mpropdefs); /* Direct call sorter$Comparator$sort on <var_sorter:MPropDefSorter>*/
}
RET_LABEL:;
}
/* method model$MModule$flatten_mclass_hierarchy_cache for (self: MModule): nullable POSet[MClass] */
val* nitc__model___MModule___flatten_mclass_hierarchy_cache(val* self) {
val* var /* : nullable POSet[MClass] */;
val* var1 /* : nullable POSet[MClass] */;
var1 = self->attrs[COLOR_nitc__model__MModule___flatten_mclass_hierarchy_cache].val; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MModule$flatten_mclass_hierarchy_cache= for (self: MModule, nullable POSet[MClass]) */
void nitc__model___MModule___flatten_mclass_hierarchy_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MModule___flatten_mclass_hierarchy_cache].val = p0; /* _flatten_mclass_hierarchy_cache on <self:MModule> */
RET_LABEL:;
}
/* method model$MModule$object_type for (self: MModule): MClassType */
val* nitc__model___MModule___object_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___object_type].val != NULL; /* _object_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___object_type].val; /* _object_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _object_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 216);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___object_type].val = var11; /* _object_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$pointer_type for (self: MModule): MClassType */
val* nitc__model___MModule___pointer_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___pointer_type].val != NULL; /* _pointer_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___pointer_type].val; /* _pointer_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 219);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Pointer";
var6 = (val*)(7l<<2|1);
var7 = (val*)(7l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___pointer_type].val = var11; /* _pointer_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$bool_type for (self: MModule): MClassType */
val* nitc__model___MModule___bool_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___bool_type].val != NULL; /* _bool_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___bool_type].val; /* _bool_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bool_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 222);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Bool";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___bool_type].val = var11; /* _bool_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$int_type for (self: MModule): MClassType */
val* nitc__model___MModule___int_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___int_type].val != NULL; /* _int_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___int_type].val; /* _int_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _int_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 225);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Int";
var6 = (val*)(3l<<2|1);
var7 = (val*)(3l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___int_type].val = var11; /* _int_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$byte_type for (self: MModule): MClassType */
val* nitc__model___MModule___byte_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___byte_type].val != NULL; /* _byte_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___byte_type].val; /* _byte_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _byte_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 228);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Byte";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___byte_type].val = var11; /* _byte_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$int8_type for (self: MModule): MClassType */
val* nitc__model___MModule___int8_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___int8_type].val != NULL; /* _int8_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___int8_type].val; /* _int8_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _int8_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 231);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Int8";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___int8_type].val = var11; /* _int8_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$int16_type for (self: MModule): MClassType */
val* nitc__model___MModule___int16_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___int16_type].val != NULL; /* _int16_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___int16_type].val; /* _int16_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _int16_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 234);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Int16";
var6 = (val*)(5l<<2|1);
var7 = (val*)(5l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___int16_type].val = var11; /* _int16_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$uint16_type for (self: MModule): MClassType */
val* nitc__model___MModule___uint16_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___uint16_type].val != NULL; /* _uint16_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___uint16_type].val; /* _uint16_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _uint16_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 237);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "UInt16";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___uint16_type].val = var11; /* _uint16_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$int32_type for (self: MModule): MClassType */
val* nitc__model___MModule___int32_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___int32_type].val != NULL; /* _int32_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___int32_type].val; /* _int32_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _int32_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 240);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Int32";
var6 = (val*)(5l<<2|1);
var7 = (val*)(5l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___int32_type].val = var11; /* _int32_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$uint32_type for (self: MModule): MClassType */
val* nitc__model___MModule___uint32_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___uint32_type].val != NULL; /* _uint32_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___uint32_type].val; /* _uint32_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _uint32_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 243);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "UInt32";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___uint32_type].val = var11; /* _uint32_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$char_type for (self: MModule): MClassType */
val* nitc__model___MModule___char_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___char_type].val != NULL; /* _char_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___char_type].val; /* _char_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _char_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 246);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Char";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___char_type].val = var11; /* _char_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$float_type for (self: MModule): MClassType */
val* nitc__model___MModule___float_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___float_type].val != NULL; /* _float_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___float_type].val; /* _float_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _float_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 249);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Float";
var6 = (val*)(5l<<2|1);
var7 = (val*)(5l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___float_type].val = var11; /* _float_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$string_type for (self: MModule): MClassType */
val* nitc__model___MModule___string_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___string_type].val != NULL; /* _string_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___string_type].val; /* _string_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 252);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "String";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___string_type].val = var11; /* _string_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$c_string_type for (self: MModule): MClassType */
val* nitc__model___MModule___c_string_type(val* self) {
val* var /* : MClassType */;
short int var1 /* : Bool */;
val* var2 /* : MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MModule___c_string_type].val != NULL; /* _c_string_type on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___c_string_type].val; /* _c_string_type on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_string_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 255);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "CString";
var6 = (val*)(7l<<2|1);
var7 = (val*)(7l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
{
{ /* Inline model$MClass$mclass_type (var10) on <var10:MClass> */
var13 = var10->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var10:MClass> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nitc__model__MModule___c_string_type].val = var11; /* _c_string_type on <self:MModule> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$array_type for (self: MModule, MType): MClassType */
val* nitc__model___MModule___array_type(val* self, val* p0) {
val* var /* : MClassType */;
val* var_elt_type /* var elt_type: MType */;
val* var1 /* : MClass */;
val* var2 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var3 /* : MClassType */;
var_elt_type = p0;
{
var1 = nitc__model___MModule___array_class(self);
}
var2 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var2, 1l); /* Direct call array$Array$with_capacity on <var2:Array[MType]>*/
}
var_ = var2;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_elt_type); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
}
{
var3 = nitc___nitc__MClass___get_mtype(var1, var_);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MModule$array_class for (self: MModule): MClass */
val* nitc__model___MModule___array_class(val* self) {
val* var /* : MClass */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
var1 = self->attrs[COLOR_nitc__model__MModule___array_class].val != NULL; /* _array_class on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___array_class].val; /* _array_class on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array_class");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 261);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Array";
var6 = (val*)(5l<<2|1);
var7 = (val*)(5l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
self->attrs[COLOR_nitc__model__MModule___array_class].val = var10; /* _array_class on <self:MModule> */
var2 = var10;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$native_array_type for (self: MModule, MType): MClassType */
val* nitc__model___MModule___native_array_type(val* self, val* p0) {
val* var /* : MClassType */;
val* var_elt_type /* var elt_type: MType */;
val* var1 /* : MClass */;
val* var2 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var3 /* : MClassType */;
var_elt_type = p0;
{
var1 = nitc__model___MModule___native_array_class(self);
}
var2 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var2, 1l); /* Direct call array$Array$with_capacity on <var2:Array[MType]>*/
}
var_ = var2;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_elt_type); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
}
{
var3 = nitc___nitc__MClass___get_mtype(var1, var_);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MModule$native_array_class for (self: MModule): MClass */
val* nitc__model___MModule___native_array_class(val* self) {
val* var /* : MClass */;
short int var1 /* : Bool */;
val* var2 /* : MClass */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : MClass */;
var1 = self->attrs[COLOR_nitc__model__MModule___native_array_class].val != NULL; /* _native_array_class on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MModule___native_array_class].val; /* _native_array_class on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_array_class");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 267);
fatal_exit(1);
}
} else {
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "NativeArray";
var6 = (val*)(11l<<2|1);
var7 = (val*)(11l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__model___MModule___get_primitive_class(self, var3);
}
self->attrs[COLOR_nitc__model__MModule___native_array_class].val = var10; /* _native_array_class on <self:MModule> */
var2 = var10;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MModule$sys_type for (self: MModule): nullable MClassType */
val* nitc__model___MModule___sys_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
val* var3 /* : Model */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : MClass */;
val* var23 /* : MClassType */;
val* var25 /* : MClassType */;
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
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
var7 = (val*)(3l<<2|1);
var8 = (val*)(3l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = nitc__model___Model___get_mclasses_by_name(var1, var4);
}
var_clas = var11;
if (var_clas == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = core___core__Array___core__kernel__Object___61d_61d(var_clas, ((val*)NULL));
var12 = var13;
}
if (var12){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Sys";
var18 = (val*)(3l<<2|1);
var19 = (val*)(3l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
{
var22 = nitc__model___MModule___get_primitive_class(self, var15);
}
{
{ /* Inline model$MClass$mclass_type (var22) on <var22:MClass> */
var25 = var22->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var22:MClass> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MModule$finalizable_type for (self: MModule): nullable MClassType */
val* nitc__model___MModule___finalizable_type(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : Model */;
val* var3 /* : Model */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Array[MClass] */;
val* var_clas /* var clas: nullable Array[MClass] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : MClass */;
val* var23 /* : MClassType */;
val* var25 /* : MClassType */;
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
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
var7 = (val*)(11l<<2|1);
var8 = (val*)(11l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = nitc__model___Model___get_mclasses_by_name(var1, var4);
}
var_clas = var11;
if (var_clas == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = core___core__Array___core__kernel__Object___61d_61d(var_clas, ((val*)NULL));
var12 = var13;
}
if (var12){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Finalizable";
var18 = (val*)(11l<<2|1);
var19 = (val*)(11l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
{
var22 = nitc__model___MModule___get_primitive_class(self, var15);
}
{
{ /* Inline model$MClass$mclass_type (var22) on <var22:MClass> */
var25 = var22->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var22:MClass> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MModule$get_primitive_class for (self: MModule, String): MClass */
val* nitc__model___MModule___get_primitive_class(val* self, val* p0) {
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
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MClass] */;
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
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
val* var38 /* : Model */;
val* var40 /* : Model */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Array[MClass] */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : Model */;
val* var57 /* : Model */;
val* var58 /* : Location */;
val* var60 /* : Location */;
val* var_loc /* var loc: Location */;
val* var61 /* : MClass */;
val* var62 /* : Sys */;
val* var63 /* : MClassKind */;
val* var64 /* : Sys */;
val* var65 /* : MVisibility */;
val* var_c66 /* var c: MClass */;
val* var67 /* : MClassDef */;
val* var68 /* : MClassType */;
val* var70 /* : MClassType */;
val* var_cladef /* var cladef: MClassDef */;
val* var71 /* : Array[MClassType] */;
val* var_72 /* var : Array[MClassType] */;
val* var73 /* : MClassType */;
val* var74 /* : Sys */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : Sys */;
long var97 /* : Int */;
long var99 /* : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var_msg /* var msg: String */;
val* var_132 /* var : Array[MClass] */;
val* var133 /* : IndexedIterator[nullable Object] */;
val* var_134 /* var : IndexedIterator[MClass] */;
short int var135 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_c138 /* var c: MClass */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : Text */;
val* var152 /* : Sys */;
val* var153 /* : nullable Object */;
var_name = p0;
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__model___Model___get_mclasses_by_name(var1, var_name);
}
var_cla = var4;
if (var_cla == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cla,((val*)NULL)) on <var_cla:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla, var_other); /* == on <var_cla:nullable Array[MClass](Array[MClass])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___with_capacity(var10, 1l); /* Direct call array$Array$with_capacity on <var10:Array[MClass]>*/
}
var_ = var10;
var_11 = var_cla;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_11);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MClass]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MClass]>*/
}
var_c = var15;
{
{ /* Inline mmodule$MModule$in_importation (self) on <self:MModule> */
var18 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c) on <var_c:MClass> */
var21 = var_c->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c:MClass> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
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
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_c); /* Direct call array$AbstractArray$push on <var_:Array[MClass]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MClass]>*/
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
var25 = core___core__Array___core__kernel__Object___61d_61d(var_cla, ((val*)NULL));
var24 = var25;
}
var_26 = var24;
if (var24){
var23 = var_26;
} else {
{
var27 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_cla);
}
var23 = var27;
}
if (var23){
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "Bool";
var32 = (val*)(4l<<2|1);
var33 = (val*)(4l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce = var29;
}
{
var36 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var29); /* == on <var_name:String>*/
}
var_37 = var36;
if (var36){
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var40 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Object";
var45 = (val*)(6l<<2|1);
var46 = (val*)(6l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
{
var49 = nitc__model___Model___get_mclasses_by_name(var38, var42);
}
if (var49 == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var49,((val*)NULL)) on <var49:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var49->class->vft[COLOR_core__kernel__Object___61d_61d]))(var49, var_other); /* == on <var49:nullable Array[MClass](Array[MClass])>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
var28 = var50;
} else {
var28 = var_37;
}
if (var28){
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var57 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model_base$Model$no_location (var55) on <var55:Model> */
var60 = var55->attrs[COLOR_nitc__model_base__Model___no_location].val; /* _no_location on <var55:Model> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _no_location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 28);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_loc = var58;
var61 = NEW_nitc__MClass(&type_nitc__MClass);
var62 = glob_sys;
{
var63 = nitc__model___core__Sys___enum_kind(var62);
}
var64 = glob_sys;
{
var65 = nitc__model_base___core__Sys___public_visibility(var64);
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClass__intro_mmodule_61d]))(var61, self); /* intro_mmodule= on <var61:MClass>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClass__name_61d]))(var61, var_name); /* name= on <var61:MClass>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClass__location_61d]))(var61, var_loc); /* location= on <var61:MClass>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClass__setup_parameter_names]))(var61, ((val*)NULL)); /* setup_parameter_names on <var61:MClass>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClass__kind_61d]))(var61, var63); /* kind= on <var61:MClass>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__model__MClass__visibility_61d]))(var61, var65); /* visibility= on <var61:MClass>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:MClass>*/
}
var_c66 = var61;
var67 = NEW_nitc__MClassDef(&type_nitc__MClassDef);
{
{ /* Inline model$MClass$mclass_type (var_c66) on <var_c66:MClass> */
var70 = var_c66->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c66:MClass> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_nitc__model__MClassDef__mmodule_61d]))(var67, self); /* mmodule= on <var67:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_nitc__model__MClassDef__bound_mtype_61d]))(var67, var68); /* bound_mtype= on <var67:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var67->class->vft[COLOR_nitc__model__MClassDef__location_61d]))(var67, var_loc); /* location= on <var67:MClassDef>*/
}
{
((void(*)(val* self))(var67->class->vft[COLOR_core__kernel__Object__init]))(var67); /* init on <var67:MClassDef>*/
}
var_cladef = var67;
var71 = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___with_capacity(var71, 1l); /* Direct call array$Array$with_capacity on <var71:Array[MClassType]>*/
}
var_72 = var71;
{
var73 = nitc__model___MModule___object_type(self);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_72, var73); /* Direct call array$AbstractArray$push on <var_72:Array[MClassType]>*/
}
{
nitc___nitc__MClassDef___set_supertypes(var_cladef, var_72); /* Direct call model$MClassDef$set_supertypes on <var_cladef:MClassDef>*/
}
{
nitc___nitc__MClassDef___add_in_hierarchy(var_cladef); /* Direct call model$MClassDef$add_in_hierarchy on <var_cladef:MClassDef>*/
}
var = var_c66;
goto RET_LABEL;
} else {
}
var74 = glob_sys;
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Fatal Error: no primitive class ";
var81 = (val*)(32l<<2|1);
var82 = (val*)(32l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " in ";
var89 = (val*)(4l<<2|1);
var90 = (val*)(4l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var76)->values[2]=var86;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_core__NativeArray*)var76)->values[1]=var_name;
{
var93 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_core__NativeArray*)var76)->values[3]=var93;
{
var94 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
core__file___Sys___print_error(var74, var94); /* Direct call file$Sys$print_error on <var74:Sys>*/
}
var95 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var95,1l) on <var95:Sys> */
exit((int)1l);
RET_LABEL96:(void)0;
}
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 306);
fatal_exit(1);
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_cla) on <var_cla:nullable Array[MClass](Array[MClass])> */
var99 = var_cla->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_cla:nullable Array[MClass](Array[MClass])> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var97,1l) on <var97:Int> */
var102 = var97 == 1l;
var103 = !var102;
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "Fatal Error: more than one primitive class ";
var110 = (val*)(43l<<2|1);
var111 = (val*)(43l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = " in ";
var118 = (val*)(4l<<2|1);
var119 = (val*)(4l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var105)->values[2]=var115;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ":";
var126 = (val*)(1l<<2|1);
var127 = (val*)(1l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var105)->values[4]=var123;
} else {
var105 = varonce104;
varonce104 = NULL;
}
((struct instance_core__NativeArray*)var105)->values[1]=var_name;
{
var130 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_core__NativeArray*)var105)->values[3]=var130;
{
var131 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
var_msg = var131;
var_132 = var_cla;
{
var133 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_132);
}
var_134 = var133;
for(;;) {
{
var135 = ((short int(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_134); /* is_ok on <var_134:IndexedIterator[MClass]>*/
}
if (var135){
} else {
goto BREAK_label136;
}
{
var137 = ((val*(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_134); /* item on <var_134:IndexedIterator[MClass]>*/
}
var_c138 = var137;
if (unlikely(varonce139==NULL)) {
var140 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = " ";
var145 = (val*)(1l<<2|1);
var146 = (val*)(1l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var140)->values[0]=var142;
} else {
var140 = varonce139;
varonce139 = NULL;
}
{
var149 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c138);
}
((struct instance_core__NativeArray*)var140)->values[1]=var149;
{
var150 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
{
var151 = ((val*(*)(val* self, val* p0))(var_msg->class->vft[COLOR_core__abstract_text__Text___43d]))(var_msg, var150); /* + on <var_msg:String>*/
}
var_msg = var151;
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_134); /* next on <var_134:IndexedIterator[MClass]>*/
}
}
BREAK_label136: (void)0;
{
((void(*)(val* self))((((long)var_134&3)?class_info[((long)var_134&3)]:var_134->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_134); /* finish on <var_134:IndexedIterator[MClass]>*/
}
var152 = glob_sys;
{
core__file___Sys___print_error(var152, var_msg); /* Direct call file$Sys$print_error on <var152:Sys>*/
}
} else {
}
{
var153 = core___core__SequenceRead___Collection__first(var_cla);
}
var = var153;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MModule$try_get_primitive_method for (self: MModule, String, MClass): nullable MMethod */
val* nitc__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1) {
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
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_ /* var : Array[MProperty] */;
val* var13 /* : IndexedIterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[MProperty] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : Sys */;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
var_name = p0;
var_recv = p1;
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
if (var_props == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = core___core__Array___core__kernel__Object___61d_61d(var_props, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
{
{ /* Inline model$MClass$intro (var_recv) on <var_recv:MClass> */
var9 = var_recv->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_recv:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recvtype = var10;
var_ = var_props;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[MProperty]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[MProperty]>*/
}
var_mprop = var16;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var17 = 0;
} else {
var17 = var_mprop->type->type_table[cltype] == idtype;
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 325);
fatal_exit(1);
}
{
var18 = nitc___nitc__MType___has_mproperty(var_recvtype, self, var_mprop);
}
var19 = !var18;
if (var19){
goto BREAK_label20;
} else {
}
if (var_res == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var26 = var_res == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
var_res = var_mprop;
} else {
{
{ /* Inline kernel$Object$!= (var_res,var_mprop) on <var_res:nullable MMethod(MMethod)> */
var_other29 = var_mprop;
{
var30 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other29); /* == on <var_res:nullable MMethod(MMethod)>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var32 = glob_sys;
if (unlikely(varonce==NULL)) {
var33 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Fatal Error: ambigous property name \'";
var38 = (val*)(37l<<2|1);
var39 = (val*)(37l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "\'; conflict between ";
var46 = (val*)(20l<<2|1);
var47 = (val*)(20l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var33)->values[2]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = " and ";
var54 = (val*)(5l<<2|1);
var55 = (val*)(5l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var33)->values[4]=var51;
} else {
var33 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_name;
{
var58 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var33)->values[3]=var58;
{
var59 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_res);
}
((struct instance_core__NativeArray*)var33)->values[5]=var59;
{
var60 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
core__file___Sys___print_error(var32, var60); /* Direct call file$Sys$print_error on <var32:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 331);
fatal_exit(1);
} else {
}
}
BREAK_label20: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[MProperty]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassDefSorter$mmodule for (self: MClassDefSorter): MModule */
val* nitc__model___nitc__model__MClassDefSorter___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 341);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDefSorter$mmodule= for (self: MClassDefSorter, MModule) */
void nitc__model___nitc__model__MClassDefSorter___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDefSorter___mmodule].val = p0; /* _mmodule on <self:MClassDefSorter> */
RET_LABEL:;
}
/* method model$MClassDefSorter$compare for (self: MClassDefSorter, MClassDef, MClassDef): Int */
long nitc__model___nitc__model__MClassDefSorter___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 342);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:MClassDef> isa COMPARED */
/* <p1:MClassDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 342);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
{ /* Inline model$MClassDef$mclass (var_a) on <var_a:MClassDef> */
var9 = var_a->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ca = var7;
{
{ /* Inline model$MClassDef$mclass (var_b) on <var_b:MClassDef> */
var12 = var_b->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_b:MClassDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_cb = var10;
{
{ /* Inline kernel$Object$!= (var_ca,var_cb) on <var_ca:MClass> */
var_other = var_cb;
{
var15 = ((short int(*)(val* self, val* p0))(var_ca->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ca, var_other); /* == on <var_ca:MClass>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline model$MClassDefSorter$mmodule (self) on <self:MClassDefSorter> */
var19 = self->attrs[COLOR_nitc__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 341);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__model___MModule___flatten_mclass_hierarchy(var17);
}
{
var21 = poset___poset__POSet___core__sorter__Comparator__compare(var20, var_ca, var_cb);
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassDefSorter$mmodule (self) on <self:MClassDefSorter> */
var24 = self->attrs[COLOR_nitc__model__MClassDefSorter___mmodule].val; /* _mmodule on <self:MClassDefSorter> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 341);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var22) on <var22:MModule> */
var27 = var22->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var22:MModule> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model$Model$mclassdef_hierarchy (var25) on <var25:Model> */
var30 = var25->attrs[COLOR_nitc__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var25:Model> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 49);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset___poset__POSet___core__sorter__Comparator__compare(var28, var_a, var_b);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassDefSorter$init for (self: MClassDefSorter) */
void nitc__model___nitc__model__MClassDefSorter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__model___nitc__model__MClassDefSorter___core__kernel__Object__init]))(self); /* init on <self:MClassDefSorter>*/
}
RET_LABEL:;
}
/* method model$MPropDefSorter$mmodule for (self: MPropDefSorter): MModule */
val* nitc__model___nitc__model__MPropDefSorter___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 354);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MPropDefSorter$mmodule= for (self: MPropDefSorter, MModule) */
void nitc__model___nitc__model__MPropDefSorter___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MPropDefSorter___mmodule].val = p0; /* _mmodule on <self:MPropDefSorter> */
RET_LABEL:;
}
/* method model$MPropDefSorter$compare for (self: MPropDefSorter, MPropDef, MPropDef): Int */
long nitc__model___nitc__model__MPropDefSorter___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 355);
fatal_exit(1);
}
/* Covariant cast for argument 1 (pb) <p1:MPropDef> isa COMPARED */
/* <p1:MPropDef> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 355);
fatal_exit(1);
}
var_pa = p0;
var_pb = p1;
{
{ /* Inline model$MPropDef$mclassdef (var_pa) on <var_pa:MPropDef> */
var9 = var_pa->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pa:MPropDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_a = var7;
{
{ /* Inline model$MPropDef$mclassdef (var_pb) on <var_pb:MPropDef> */
var12 = var_pb->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pb:MPropDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_b = var10;
{
{ /* Inline model$MClassDef$mclass (var_a) on <var_a:MClassDef> */
var15 = var_a->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_a:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ca = var13;
{
{ /* Inline model$MClassDef$mclass (var_b) on <var_b:MClassDef> */
var18 = var_b->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_b:MClassDef> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_cb = var16;
{
{ /* Inline kernel$Object$!= (var_ca,var_cb) on <var_ca:MClass> */
var_other = var_cb;
{
var21 = ((short int(*)(val* self, val* p0))(var_ca->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ca, var_other); /* == on <var_ca:MClass>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline model$MPropDefSorter$mmodule (self) on <self:MPropDefSorter> */
var25 = self->attrs[COLOR_nitc__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 354);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc__model___MModule___flatten_mclass_hierarchy(var23);
}
{
var27 = poset___poset__POSet___core__sorter__Comparator__compare(var26, var_ca, var_cb);
}
var = var27;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDefSorter$mmodule (self) on <self:MPropDefSorter> */
var30 = self->attrs[COLOR_nitc__model__MPropDefSorter___mmodule].val; /* _mmodule on <self:MPropDefSorter> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 354);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var28) on <var28:MModule> */
var33 = var28->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var28:MModule> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$Model$mclassdef_hierarchy (var31) on <var31:Model> */
var36 = var31->attrs[COLOR_nitc__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var31:Model> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 49);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = poset___poset__POSet___core__sorter__Comparator__compare(var34, var_a, var_b);
}
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MPropDefSorter$init for (self: MPropDefSorter) */
void nitc__model___nitc__model__MPropDefSorter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__model___nitc__model__MPropDefSorter___core__kernel__Object__init]))(self); /* init on <self:MPropDefSorter>*/
}
RET_LABEL:;
}
/* method model$MClass$intro_mmodule for (self: MClass): MModule */
val* nitc___nitc__MClass___intro_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$intro_mmodule= for (self: MClass, MModule) */
void nitc___nitc__MClass___intro_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val = p0; /* _intro_mmodule on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$name for (self: MClass): String */
val* nitc___nitc__MClass___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$name= for (self: MClass, String) */
void nitc___nitc__MClass___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___name].val = p0; /* _name on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$location for (self: MClass): Location */
val* nitc___nitc__MClass___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__model__MClass___location].val; /* _location on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 400);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$location= for (self: MClass, Location) */
void nitc___nitc__MClass___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___location].val = p0; /* _location on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$full_name for (self: MClass): String */
val* nitc___nitc__MClass___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClass___full_name].val != NULL; /* _full_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MClass___full_name].val; /* _full_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 402);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var10 = (val*)(2l<<2|1);
var11 = (val*)(2l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (self) on <self:MClass> */
var16 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (self) on <self:MClass> */
var19 = self->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__MModule___namespace_for(var14, var17);
}
((struct instance_core__NativeArray*)var5)->values[0]=var20;
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var23 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
((struct instance_core__NativeArray*)var5)->values[2]=var21;
{
var24 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var24;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MClass___full_name].val = var3; /* _full_name on <self:MClass> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MClass$c_name for (self: MClass): String */
val* nitc___nitc__MClass___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClass___c_name].val != NULL; /* _c_name on <self:MClass> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MClass___c_name].val; /* _c_name on <self:MClass> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 410);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "__";
var10 = (val*)(2l<<2|1);
var11 = (val*)(2l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (self) on <self:MClass> */
var16 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (self) on <self:MClass> */
var19 = self->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__MModule___c_namespace_for(var14, var17);
}
((struct instance_core__NativeArray*)var5)->values[0]=var20;
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var23 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = core___core__Text___to_cmangle(var21);
}
((struct instance_core__NativeArray*)var5)->values[2]=var24;
{
var25 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var25;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MClass___c_name].val = var3; /* _c_name on <self:MClass> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MClass$arity for (self: MClass): Int */
long nitc___nitc__MClass___arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$arity= for (self: MClass, Int) */
void nitc___nitc__MClass___arity_61d(val* self, long p0) {
self->attrs[COLOR_nitc__model__MClass___arity].l = p0; /* _arity on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$mparameters for (self: MClass): Array[MParameterType] */
val* nitc___nitc__MClass___mparameters(val* self) {
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MParameterType] */;
var1 = self->attrs[COLOR_nitc__model__MClass___mparameters].val; /* _mparameters on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 418);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$mparameters= for (self: MClass, Array[MParameterType]) */
void nitc___nitc__MClass___mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___mparameters].val = p0; /* _mparameters on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$signature_to_s for (self: MClass): String */
val* nitc___nitc__MClass___signature_to_s(val* self) {
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
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
long var_i /* var i: Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_ /* var : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : Array[MParameterType] */;
val* var46 /* : Array[MParameterType] */;
val* var47 /* : nullable Object */;
val* var48 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : MClassDef */;
val* var61 /* : MClassDef */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var65 /* : Array[MType] */;
val* var66 /* : nullable Object */;
val* var67 /* : String */;
long var68 /* : Int */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
val* var77 /* : String */;
{
{ /* Inline model$MClass$arity (self) on <self:MClass> */
var3 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var9 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
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
var10 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var10) on <var10:FlatBuffer> */
{
((void(*)(val* self))(var10->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var10); /* init on <var10:FlatBuffer>*/
}
RET_LABEL11:(void)0;
}
}
var_res = var10;
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var14 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var12); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "[";
var18 = (val*)(1l<<2|1);
var19 = (val*)(1l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var15); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
var_i = 0l;
{
{ /* Inline model$MClass$arity (self) on <self:MClass> */
var24 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var27 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_i < var_;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var31 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var35 = var_i > 0l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ", ";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var37); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MClass$mparameters (self) on <self:MClass> */
var46 = self->attrs[COLOR_nitc__model__MClass___mparameters].val; /* _mparameters on <self:MClass> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 418);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var44, var_i);
}
{
{ /* Inline model$MParameterType$name (var47) on <var47:nullable Object(MParameterType)> */
var50 = var47->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <var47:nullable Object(MParameterType)> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var48); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = ": ";
var55 = (val*)(2l<<2|1);
var56 = (val*)(2l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var52); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MClass$intro (self) on <self:MClass> */
var61 = self->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var59) on <var59:MClassDef> */
var64 = var59->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var59:MClassDef> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = ((val*(*)(val* self))(var62->class->vft[COLOR_nitc__model__MClassType__arguments]))(var62); /* arguments on <var62:MClassType>*/
}
{
var66 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var65, var_i);
}
{
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__Object__to_s]))(var66); /* to_s on <var66:nullable Object(MType)>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var67); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
var68 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var68;
}
BREAK_label: (void)0;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "]";
var73 = (val*)(1l<<2|1);
var74 = (val*)(1l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var70); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
var77 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_res);
}
var = var77;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClass$setup_parameter_names for (self: MClass, nullable Array[String]) */
void nitc___nitc__MClass___setup_parameter_names(val* self, val* p0) {
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
var1 = core___core__Array___core__kernel__Object___61d_61d(var_parameter_names, ((val*)NULL));
var = var1;
}
if (var){
{
{ /* Inline model$MClass$arity= (self,0l) on <self:MClass> */
self->attrs[COLOR_nitc__model__MClass___arity].l = 0l; /* _arity on <self:MClass> */
RET_LABEL2:(void)0;
}
}
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_parameter_names) on <var_parameter_names:nullable Array[String](Array[String])> */
var5 = var_parameter_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_parameter_names:nullable Array[String](Array[String])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClass$arity= (self,var3) on <self:MClass> */
self->attrs[COLOR_nitc__model__MClass___arity].l = var3; /* _arity on <self:MClass> */
RET_LABEL6:(void)0;
}
}
}
{
{ /* Inline model$MClass$arity (self) on <self:MClass> */
var9 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var7,0l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var12 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline kernel$Object$!= (var_parameter_names,((val*)NULL)) on <var_parameter_names:nullable Array[String]> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_parameter_names->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_parameter_names, var_other); /* == on <var_parameter_names:nullable Array[String](Array[String])>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 457);
fatal_exit(1);
}
var19 = NEW_core__Array(&type_core__Array__nitc__MParameterType);
{
core___core__Array___core__kernel__Object__init(var19); /* Direct call array$Array$init on <var19:Array[MParameterType]>*/
}
var_mparametertypes = var19;
var_i = 0l;
{
{ /* Inline model$MClass$arity (self) on <self:MClass> */
var22 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_ = var20;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var25 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var_i < var_;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
} else {
goto BREAK_label;
}
var30 = NEW_nitc__MParameterType(&type_nitc__MParameterType);
{
var31 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_parameter_names, var_i);
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitc__model__MParameterType__mclass_61d]))(var30, self); /* mclass= on <var30:MParameterType>*/
}
{
((void(*)(val* self, long p0))(var30->class->vft[COLOR_nitc__model__MParameterType__rank_61d]))(var30, var_i); /* rank= on <var30:MParameterType>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitc__model__MParameterType__name_61d]))(var30, var31); /* name= on <var30:MParameterType>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:MParameterType>*/
}
var_mparametertype = var30;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparametertypes, var_mparametertype); /* Direct call array$Array$add on <var_mparametertypes:Array[MParameterType]>*/
}
{
var32 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var32;
}
BREAK_label: (void)0;
{
{ /* Inline model$MClass$mparameters= (self,var_mparametertypes) on <self:MClass> */
self->attrs[COLOR_nitc__model__MClass___mparameters].val = var_mparametertypes; /* _mparameters on <self:MClass> */
RET_LABEL33:(void)0;
}
}
var34 = NEW_nitc__MGenericType(&type_nitc__MGenericType);
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nitc__model__MClassType__mclass_61d]))(var34, self); /* mclass= on <var34:MGenericType>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nitc__model__MClassType__arguments_61d]))(var34, var_mparametertypes); /* arguments= on <var34:MGenericType>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_core__kernel__Object__init]))(var34); /* init on <var34:MGenericType>*/
}
var_mclass_type = var34;
{
{ /* Inline model$MClass$mclass_type= (self,var_mclass_type) on <self:MClass> */
self->attrs[COLOR_nitc__model__MClass___mclass_type].val = var_mclass_type; /* _mclass_type on <self:MClass> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MClass$get_mtype_cache (self) on <self:MClass> */
var38 = self->attrs[COLOR_nitc__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 552);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var36, var_mparametertypes, var_mclass_type); /* Direct call hash_collection$HashMap$[]= on <var36:HashMap[Array[MType], MGenericType]>*/
}
} else {
var39 = NEW_nitc__MClassType(&type_nitc__MClassType);
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__model__MClassType__mclass_61d]))(var39, self); /* mclass= on <var39:MClassType>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_core__kernel__Object__init]))(var39); /* init on <var39:MClassType>*/
}
{
{ /* Inline model$MClass$mclass_type= (self,var39) on <self:MClass> */
self->attrs[COLOR_nitc__model__MClass___mclass_type].val = var39; /* _mclass_type on <self:MClass> */
RET_LABEL40:(void)0;
}
}
}
RET_LABEL:;
}
/* method model$MClass$kind for (self: MClass): MClassKind */
val* nitc___nitc__MClass___kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = self->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$kind= for (self: MClass, MClassKind) */
void nitc___nitc__MClass___kind_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___kind].val = p0; /* _kind on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$visibility for (self: MClass): MVisibility */
val* nitc___nitc__MClass___MEntity__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$visibility= for (self: MClass, MVisibility) */
void nitc___nitc__MClass___visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___visibility].val = p0; /* _visibility on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$init for (self: MClass) */
void nitc___nitc__MClass___core__kernel__Object__init(val* self) {
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
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MClass___core__kernel__Object__init]))(self); /* init on <self:MClass>*/
}
{
{ /* Inline model$MClass$intro_mmodule (self) on <self:MClass> */
var2 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MModule$intro_mclasses (var) on <var:MModule> */
var5 = var->attrs[COLOR_nitc__model__MModule___intro_mclasses].val; /* _intro_mclasses on <var:MModule> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 147);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array$Array$add on <var3:Array[MClass]>*/
}
{
{ /* Inline model$MClass$intro_mmodule (self) on <self:MClass> */
var8 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var6) on <var6:MModule> */
var11 = var6->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var6:MModule> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_model = var9;
{
{ /* Inline model$Model$mclasses_by_name (var_model) on <var_model:Model> */
var14 = var_model->attrs[COLOR_nitc__model__Model___mclasses_by_name].val; /* _mclasses_by_name on <var_model:Model> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 75);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var17 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var12, var15, self); /* Direct call more_collections$MultiHashMap$add_one on <var12:MultiHashMap[String, MClass]>*/
}
{
{ /* Inline model$Model$mclasses (var_model) on <var_model:Model> */
var20 = var_model->attrs[COLOR_nitc__model__Model___mclasses].val; /* _mclasses on <var_model:Model> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 43);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var18, self); /* Direct call array$Array$add on <var18:Array[MClass]>*/
}
RET_LABEL:;
}
/* method model$MClass$model for (self: MClass): Model */
val* nitc___nitc__MClass___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline model$MClass$intro_mmodule (self) on <self:MClass> */
var3 = self->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var1) on <var1:MModule> */
var6 = var1->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var1:MModule> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
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
/* method model$MClass$mclassdefs for (self: MClass): Array[MClassDef] */
val* nitc___nitc__MClass___mclassdefs(val* self) {
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MClassDef] */;
var1 = self->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 490);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$to_s for (self: MClass): String */
val* nitc___nitc__MClass___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model$MClass$name (self) on <self:MClass> */
var3 = self->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
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
/* method model$MClass$intro for (self: MClass): MClassDef */
val* nitc___nitc__MClass___intro(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$intro= for (self: MClass, MClassDef) */
void nitc___nitc__MClass___intro_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___intro].val = p0; /* _intro on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$try_intro for (self: MClass): nullable MClassDef */
val* nitc___nitc__MClass___try_intro(val* self) {
val* var /* : nullable MClassDef */;
short int var1 /* : Bool */;
val* var2 /* : MClassDef */;
var1 = self->attrs[COLOR_nitc__model__MClass___intro].val != NULL; /* _intro on <self:MClass> */
if (var1){
var2 = self->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <self:MClass> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 508);
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
/* method model$MClass$in_hierarchy for (self: MClass, MModule): POSetElement[MClass] */
val* nitc___nitc__MClass___in_hierarchy(val* self, val* p0) {
val* var /* : POSetElement[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : POSet[MClass] */;
val* var2 /* : POSetElement[nullable Object] */;
var_mmodule = p0;
{
var1 = nitc__model___MModule___flatten_mclass_hierarchy(var_mmodule);
}
{
var2 = poset___poset__POSet____91d_93d(var1, self);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClass$mclass_type for (self: MClass): MClassType */
val* nitc___nitc__MClass___mclass_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$mclass_type= for (self: MClass, MClassType) */
void nitc___nitc__MClass___mclass_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClass___mclass_type].val = p0; /* _mclass_type on <self:MClass> */
RET_LABEL:;
}
/* method model$MClass$get_mtype for (self: MClass, Array[MType]): MClassType */
val* nitc___nitc__MClass___get_mtype(val* self, val* p0) {
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
{ /* Inline array$AbstractArrayRead$length (var_mtype_arguments) on <var_mtype_arguments:Array[MType]> */
var3 = var_mtype_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mtype_arguments:Array[MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$arity (self) on <self:MClass> */
var6 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,var4) on <var1:Int> */
var9 = var1 == var4;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (unlikely(!var7)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 543);
fatal_exit(1);
}
{
{ /* Inline model$MClass$arity (self) on <self:MClass> */
var12 = self->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <self:MClass> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var10,0l) on <var10:Int> */
var15 = var10 == 0l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline model$MClass$mclass_type (self) on <self:MClass> */
var18 = self->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <self:MClass> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
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
{ /* Inline model$MClass$get_mtype_cache (self) on <self:MClass> */
var21 = self->attrs[COLOR_nitc__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 552);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var19, var_mtype_arguments);
}
var_res = var22;
if (var_res == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable MGenericType> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MGenericType(MGenericType)>*/
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
var28 = NEW_nitc__MGenericType(&type_nitc__MGenericType);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nitc__model__MClassType__mclass_61d]))(var28, self); /* mclass= on <var28:MGenericType>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nitc__model__MClassType__arguments_61d]))(var28, var_mtype_arguments); /* arguments= on <var28:MGenericType>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:MGenericType>*/
}
var_res = var28;
{
{ /* Inline model$MClass$get_mtype_cache (self) on <self:MClass> */
var31 = self->attrs[COLOR_nitc__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 552);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = core__array___Collection___to_a(var_mtype_arguments);
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var29, var32, var_res); /* Direct call hash_collection$HashMap$[]= on <var29:HashMap[Array[MType], MGenericType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClass$get_mtype_cache for (self: MClass): HashMap[Array[MType], MGenericType] */
val* nitc___nitc__MClass___get_mtype_cache(val* self) {
val* var /* : HashMap[Array[MType], MGenericType] */;
val* var1 /* : HashMap[Array[MType], MGenericType] */;
var1 = self->attrs[COLOR_nitc__model__MClass___get_mtype_cache].val; /* _get_mtype_cache on <self:MClass> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _get_mtype_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 552);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$has_new_factory for (self: MClass): Bool */
short int nitc___nitc__MClass___has_new_factory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MClass___has_new_factory].s; /* _has_new_factory on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClass$has_new_factory= for (self: MClass, Bool) */
void nitc___nitc__MClass___has_new_factory_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MClass___has_new_factory].s = p0; /* _has_new_factory on <self:MClass> */
RET_LABEL:;
}
/* method model$MClassDef$mmodule for (self: MClassDef): MModule */
val* nitc___nitc__MClassDef___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$mmodule= for (self: MClassDef, MModule) */
void nitc___nitc__MClassDef___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDef___mmodule].val = p0; /* _mmodule on <self:MClassDef> */
RET_LABEL:;
}
/* method model$MClassDef$mclass for (self: MClassDef): MClass */
val* nitc___nitc__MClassDef___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$mclass= for (self: MClassDef, MClass) */
void nitc___nitc__MClassDef___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDef___mclass].val = p0; /* _mclass on <self:MClassDef> */
RET_LABEL:;
}
/* method model$MClassDef$bound_mtype for (self: MClassDef): MClassType */
val* nitc___nitc__MClassDef___bound_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$bound_mtype= for (self: MClassDef, MClassType) */
void nitc___nitc__MClassDef___bound_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val = p0; /* _bound_mtype on <self:MClassDef> */
RET_LABEL:;
}
/* method model$MClassDef$location for (self: MClassDef): Location */
val* nitc___nitc__MClassDef___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 606);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$location= for (self: MClassDef, Location) */
void nitc___nitc__MClassDef___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDef___location].val = p0; /* _location on <self:MClassDef> */
RET_LABEL:;
}
/* method model$MClassDef$visibility for (self: MClassDef): MVisibility */
val* nitc___nitc__MClassDef___MEntity__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MVisibility */;
val* var6 /* : MVisibility */;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
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
/* method model$MClassDef$to_s for (self: MClassDef): String */
val* nitc___nitc__MClassDef___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___to_s].val; /* _to_s on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 610);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$to_s= for (self: MClassDef, String) */
void nitc___nitc__MClassDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDef___to_s].val = p0; /* _to_s on <self:MClassDef> */
RET_LABEL:;
}
/* method model$MClassDef$init for (self: MClassDef) */
void nitc___nitc__MClassDef___core__kernel__Object__init(val* self) {
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
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : MModule */;
val* var53 /* : MModule */;
val* var54 /* : String */;
val* var55 /* : MClass */;
val* var57 /* : MClass */;
val* var58 /* : String */;
val* var59 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MClassDef___core__kernel__Object__init]))(self); /* init on <self:MClassDef>*/
}
{
{ /* Inline model$MClassDef$bound_mtype (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var) on <var:MClassType> */
var5 = var->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var:MClassType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass= (self,var3) on <self:MClassDef> */
self->attrs[COLOR_nitc__model__MClassDef___mclass].val = var3; /* _mclass on <self:MClassDef> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var9 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MModule$mclassdefs (var7) on <var7:MModule> */
var12 = var7->attrs[COLOR_nitc__model__MModule___mclassdefs].val; /* _mclassdefs on <var7:MModule> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 150);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var10, self); /* Direct call array$Array$add on <var10:Array[MClassDef]>*/
}
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var15 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model$MClass$mclassdefs (var13) on <var13:MClass> */
var18 = var13->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var13:MClass> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 490);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var16, self); /* Direct call array$Array$add on <var16:Array[MClassDef]>*/
}
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var21 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var19:MClass> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var27 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var22,var25) on <var22:MModule> */
var_other = var25;
{
{ /* Inline kernel$Object$is_same_instance (var22,var_other) on <var22:MModule> */
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
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var35 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = var33->attrs[COLOR_nitc__model__MClass___intro].val != NULL; /* _intro on <var33:MClass> */
var37 = !var36;
if (unlikely(!var37)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 620);
fatal_exit(1);
}
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var40 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model$MClass$intro= (var38,self) on <var38:MClass> */
var38->attrs[COLOR_nitc__model__MClass___intro].val = self; /* _intro on <var38:MClass> */
RET_LABEL41:(void)0;
}
}
} else {
}
if (unlikely(varonce==NULL)) {
var42 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "$";
var47 = (val*)(1l<<2|1);
var48 = (val*)(1l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[1]=var44;
} else {
var42 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var53 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__Object__to_s]))(var51); /* to_s on <var51:MModule>*/
}
((struct instance_core__NativeArray*)var42)->values[0]=var54;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var57 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__Object__to_s]))(var55); /* to_s on <var55:MClass>*/
}
((struct instance_core__NativeArray*)var42)->values[2]=var58;
{
var59 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce = var42;
{
{ /* Inline model$MClassDef$to_s= (self,var59) on <self:MClassDef> */
self->attrs[COLOR_nitc__model__MClassDef___to_s].val = var59; /* _to_s on <self:MClassDef> */
RET_LABEL60:(void)0;
}
}
RET_LABEL:;
}
/* method model$MClassDef$name for (self: MClassDef): String */
val* nitc___nitc__MClassDef___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
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
/* method model$MClassDef$full_name for (self: MClassDef): String */
val* nitc___nitc__MClassDef___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MVisibility */;
val* var23 /* : MVisibility */;
val* var24 /* : String */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : MClass */;
val* var34 /* : MClass */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : nullable MPackage */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : nullable MPackage */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : MModule */;
val* var60 /* : MModule */;
val* var61 /* : String */;
val* var62 /* : MClass */;
val* var64 /* : MClass */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : MClass */;
val* var69 /* : MClass */;
val* var70 /* : MVisibility */;
val* var72 /* : MVisibility */;
val* var73 /* : Sys */;
val* var74 /* : MVisibility */;
short int var75 /* : Bool */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : MModule */;
val* var88 /* : MModule */;
val* var89 /* : String */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : MModule */;
val* var117 /* : MModule */;
val* var118 /* : String */;
val* var119 /* : MClass */;
val* var121 /* : MClass */;
val* var122 /* : MModule */;
val* var124 /* : MModule */;
val* var125 /* : String */;
val* var127 /* : String */;
val* var128 /* : MClass */;
val* var130 /* : MClass */;
val* var131 /* : String */;
val* var133 /* : String */;
val* var134 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___full_name].val != NULL; /* _full_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MClassDef___full_name].val; /* _full_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 629);
fatal_exit(1);
}
} else {
{
{
var5 = nitc___nitc__MClassDef___is_intro(self);
}
if (var5){
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "$";
var11 = (val*)(1l<<2|1);
var12 = (val*)(1l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var17 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var20 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__MModule___namespace_for(var15, var21);
}
((struct instance_core__NativeArray*)var6)->values[0]=var24;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var27 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model$MClass$name (var25) on <var25:MClass> */
var30 = var25->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var25:MClass> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
((struct instance_core__NativeArray*)var6)->values[2]=var28;
{
var31 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var3 = var31;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var34 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var32) on <var32:MClass> */
var37 = var32->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var32:MClass> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc___nitc__MModule___mpackage(var35);
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var41 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nitc___nitc__MModule___mpackage(var39);
}
if (var38 == NULL) {
var43 = (var42 != NULL);
} else {
{ /* Inline kernel$Object$!= (var38,var42) on <var38:nullable MPackage> */
var_other = var42;
{
var46 = ((short int(*)(val* self, val* p0))(var38->class->vft[COLOR_core__kernel__Object___61d_61d]))(var38, var_other); /* == on <var38:nullable MPackage(MPackage)>*/
}
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "$";
var54 = (val*)(1l<<2|1);
var55 = (val*)(1l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[1]=var51;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var60 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var58);
}
((struct instance_core__NativeArray*)var49)->values[0]=var61;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var64 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var62);
}
((struct instance_core__NativeArray*)var49)->values[2]=var65;
{
var66 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
var3 = var66;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var69 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var67) on <var67:MClass> */
var72 = var67->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var67:MClass> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
var73 = glob_sys;
{
var74 = nitc__model_base___core__Sys___private_visibility(var73);
}
{
var75 = core___core__Comparable____62d(var70, var74);
}
if (var75){
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "$";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[1]=var79;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var88 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var86);
}
((struct instance_core__NativeArray*)var77)->values[0]=var89;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var92 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model$MClass$name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
((struct instance_core__NativeArray*)var77)->values[2]=var93;
{
var96 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
var3 = var96;
goto RET_LABEL4;
} else {
if (unlikely(varonce97==NULL)) {
var98 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "$::";
var103 = (val*)(3l<<2|1);
var104 = (val*)(3l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var98)->values[1]=var100;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "::";
var111 = (val*)(2l<<2|1);
var112 = (val*)(2l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var98)->values[3]=var108;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var117 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var115);
}
((struct instance_core__NativeArray*)var98)->values[0]=var118;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var121 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var121 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var119) on <var119:MClass> */
var124 = var119->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var119:MClass> */
if (unlikely(var124 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var122) on <var122:MModule> */
var127 = var122->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var122:MModule> */
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
((struct instance_core__NativeArray*)var98)->values[2]=var125;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var130 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var130 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline model$MClass$name (var128) on <var128:MClass> */
var133 = var128->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var128:MClass> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
((struct instance_core__NativeArray*)var98)->values[4]=var131;
{
var134 = ((val*(*)(val* self))(var98->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
var3 = var134;
goto RET_LABEL4;
}
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MClassDef___full_name].val = var3; /* _full_name on <self:MClassDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MClassDef$c_name for (self: MClassDef): String */
val* nitc___nitc__MClassDef___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MVisibility */;
val* var23 /* : MVisibility */;
val* var24 /* : String */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var28 /* : String */;
val* var29 /* : String */;
short int var30 /* : Bool */;
val* var31 /* : MClass */;
val* var33 /* : MClass */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var37 /* : nullable MPackage */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
val* var41 /* : nullable MPackage */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var_ /* var : Bool */;
val* var48 /* : MClass */;
val* var50 /* : MClass */;
val* var51 /* : MVisibility */;
val* var53 /* : MVisibility */;
val* var54 /* : Sys */;
val* var55 /* : MVisibility */;
short int var56 /* : Bool */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
val* var67 /* : MModule */;
val* var69 /* : MModule */;
val* var70 /* : String */;
val* var71 /* : MClass */;
val* var73 /* : MClass */;
val* var74 /* : String */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
val* var89 /* : MModule */;
val* var91 /* : MModule */;
val* var92 /* : String */;
val* var93 /* : MClass */;
val* var95 /* : MClass */;
val* var96 /* : String */;
val* var97 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___c_name].val != NULL; /* _c_name on <self:MClassDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MClassDef___c_name].val; /* _c_name on <self:MClassDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 654);
fatal_exit(1);
}
} else {
{
{
var5 = nitc___nitc__MClassDef___is_intro(self);
}
if (var5){
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "___";
var11 = (val*)(3l<<2|1);
var12 = (val*)(3l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var17 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var20 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__MModule___c_namespace_for(var15, var21);
}
((struct instance_core__NativeArray*)var6)->values[0]=var24;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var27 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var25);
}
((struct instance_core__NativeArray*)var6)->values[2]=var28;
{
var29 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var3 = var29;
goto RET_LABEL4;
} else {
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var33 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var31) on <var31:MClass> */
var36 = var31->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var31:MClass> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nitc___nitc__MModule___mpackage(var34);
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var40 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nitc___nitc__MModule___mpackage(var38);
}
if (var37 == NULL) {
var42 = (var41 == NULL);
} else {
{ /* Inline kernel$Object$== (var37,var41) on <var37:nullable MPackage> */
var_other = var41;
{
{ /* Inline kernel$Object$is_same_instance (var37,var_other) on <var37:nullable MPackage(MPackage)> */
var47 = var37 == var_other;
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
var_ = var42;
if (var42){
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var50 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var48) on <var48:MClass> */
var53 = var48->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var48:MClass> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = glob_sys;
{
var55 = nitc__model_base___core__Sys___private_visibility(var54);
}
{
var56 = core___core__Comparable____62d(var51, var55);
}
var30 = var56;
} else {
var30 = var_;
}
if (var30){
if (unlikely(varonce57==NULL)) {
var58 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "___";
var63 = (val*)(3l<<2|1);
var64 = (val*)(3l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var58)->values[1]=var60;
} else {
var58 = varonce57;
varonce57 = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var69 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var67);
}
((struct instance_core__NativeArray*)var58)->values[0]=var70;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var73 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline model$MClass$name (var71) on <var71:MClass> */
var76 = var71->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var71:MClass> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = core___core__Text___to_cmangle(var74);
}
((struct instance_core__NativeArray*)var58)->values[2]=var77;
{
var78 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
var3 = var78;
goto RET_LABEL4;
} else {
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "___";
var85 = (val*)(3l<<2|1);
var86 = (val*)(3l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var91 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var89);
}
((struct instance_core__NativeArray*)var80)->values[0]=var92;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var95 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var93);
}
((struct instance_core__NativeArray*)var80)->values[2]=var96;
{
var97 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
var3 = var97;
goto RET_LABEL4;
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MClassDef___c_name].val = var3; /* _c_name on <self:MClassDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MClassDef$model for (self: MClassDef): Model */
val* nitc___nitc__MClassDef___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var3 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var1) on <var1:MModule> */
var6 = var1->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var1:MModule> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
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
/* method model$MClassDef$supertypes for (self: MClassDef): Array[MClassType] */
val* nitc___nitc__MClassDef___supertypes(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$set_supertypes for (self: MClassDef, Array[MClassType]) */
void nitc___nitc__MClassDef___set_supertypes(val* self, val* p0) {
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
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[MClassType] */;
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
{ /* Inline model$MClassDef$in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
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
{ /* Inline kernel$Object$== (var,((val*)NULL)) on <var:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 676);
fatal_exit(1);
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var11 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mmodule = var9;
{
{ /* Inline mmodule$MModule$model (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_model = var12;
{
{ /* Inline model$MClassDef$bound_mtype (self) on <self:MClassDef> */
var17 = self->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mtype = var15;
var_ = var_supertypes;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[MClassType]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[MClassType]>*/
}
var_supertype = var21;
{
{ /* Inline model$MClassDef$supertypes (self) on <self:MClassDef> */
var24 = self->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <self:MClassDef> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var22, var_supertype); /* Direct call array$Array$add on <var22:Array[MClassType]>*/
}
{
{ /* Inline model$Model$full_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var27 = var_model->attrs[COLOR_nitc__model__Model___full_mtype_specialization_hierarchy].val; /* _full_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 66);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
poset___poset__POSet___add_edge(var25, var_mtype, var_supertype); /* Direct call poset$POSet$add_edge on <var25:POSet[MClassType]>*/
}
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var31 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var29) on <var29:MClass> */
var34 = var29->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var29:MClass> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var32,var_mmodule) on <var32:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel$Object$is_same_instance (var32,var_other) on <var32:MModule> */
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
{ /* Inline model$MClassType$mclass (var_supertype) on <var_supertype:MClassType> */
var43 = var_supertype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var41) on <var41:MClass> */
var46 = var41->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var41:MClass> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var44,var_mmodule) on <var44:MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel$Object$is_same_instance (var44,var_other) on <var44:MModule> */
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
{ /* Inline model$Model$intro_mtype_specialization_hierarchy (var_model) on <var_model:Model> */
var54 = var_model->attrs[COLOR_nitc__model__Model___intro_mtype_specialization_hierarchy].val; /* _intro_mtype_specialization_hierarchy on <var_model:Model> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mtype_specialization_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 55);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
poset___poset__POSet___add_edge(var52, var_mtype, var_supertype); /* Direct call poset$POSet$add_edge on <var52:POSet[MClassType]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[MClassType]>*/
}
RET_LABEL:;
}
/* method model$MClassDef$add_in_hierarchy for (self: MClassDef) */
void nitc___nitc__MClassDef___add_in_hierarchy(val* self) {
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
{ /* Inline model$MClassDef$in_hierarchy (self) on <self:MClassDef> */
var2 = self->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
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
{ /* Inline kernel$Object$== (var,((val*)NULL)) on <var:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 701);
fatal_exit(1);
}
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var11 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var9) on <var9:MModule> */
var14 = var9->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var9:MModule> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_model = var12;
{
{ /* Inline model$Model$mclassdef_hierarchy (var_model) on <var_model:Model> */
var17 = var_model->attrs[COLOR_nitc__model__Model___mclassdef_hierarchy].val; /* _mclassdef_hierarchy on <var_model:Model> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 49);
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
{ /* Inline model$MClassDef$in_hierarchy= (self,var_res) on <self:MClassDef> */
self->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val = var_res; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (self) on <self:MClassDef> */
var22 = self->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <self:MClassDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mtype = var20;
{
{ /* Inline model$MClassDef$mmodule (self) on <self:MClassDef> */
var25 = self->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <self:MClassDef> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_mtype, var23);
}
var_ = var26;
{
var27 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClassDef]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[MClassDef]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[MClassDef]>*/
}
var_mclassdef = var30;
{
{ /* Inline poset$POSetElement$poset (var_res) on <var_res:POSetElement[MClassDef]> */
var33 = var_res->attrs[COLOR_poset__POSetElement___poset].val; /* _poset on <var_res:POSetElement[MClassDef]> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_poset, 526);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
poset___poset__POSet___add_edge(var31, self, var_mclassdef); /* Direct call poset$POSet$add_edge on <var31:POSet[nullable Object](POSet[MClassDef])>*/
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method model$MClassDef$in_hierarchy for (self: MClassDef): nullable POSetElement[MClassDef] */
val* nitc___nitc__MClassDef___in_hierarchy(val* self) {
val* var /* : nullable POSetElement[MClassDef] */;
val* var1 /* : nullable POSetElement[MClassDef] */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <self:MClassDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$in_hierarchy= for (self: MClassDef, nullable POSetElement[MClassDef]) */
void nitc___nitc__MClassDef___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val = p0; /* _in_hierarchy on <self:MClassDef> */
RET_LABEL:;
}
/* method model$MClassDef$is_intro for (self: MClassDef): Bool */
short int nitc___nitc__MClassDef___is_intro(val* self) {
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
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var4 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_nitc__model__MClass___intro].val != NULL; /* _intro on <var2:MClass> */
var_ = var5;
if (var5){
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var8 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MClass$intro (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var6:MClass> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var9,self) on <var9:MClassDef> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var9,var_other) on <var9:MClassDef> */
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
/* method model$MClassDef$intro_mproperties for (self: MClassDef): Array[MProperty] */
val* nitc___nitc__MClassDef___intro_mproperties(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 720);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$mpropdefs for (self: MClassDef): Array[MPropDef] */
val* nitc___nitc__MClassDef___mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___mpropdefs].val; /* _mpropdefs on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 723);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassDef$mpropdefs_by_property for (self: MClassDef): HashMap[MProperty, MPropDef] */
val* nitc___nitc__MClassDef___mpropdefs_by_property(val* self) {
val* var /* : HashMap[MProperty, MPropDef] */;
val* var1 /* : HashMap[MProperty, MPropDef] */;
var1 = self->attrs[COLOR_nitc__model__MClassDef___mpropdefs_by_property].val; /* _mpropdefs_by_property on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs_by_property");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 726);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MType$name for (self: MType): String */
val* nitc___nitc__MType___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$is_subtype for (self: MType, MModule, nullable MClassType, MType): Bool */
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2) {
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
short int var84 /* : Bool */;
int cltype85;
int idtype86;
short int var_87 /* var : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
val* var94 /* : Sys */;
val* var95 /* : NativeArray[String] */;
static val* varonce;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
val* var104 /* : String */;
val* var105 /* : String */;
val* var106 /* : String */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
short int var_113 /* var : Bool */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
short int var_117 /* var : Bool */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
short int var_121 /* var : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
val* var128 /* : Sys */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : String */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
val* var161 /* : MClassType */;
val* var_resolved_sub /* var resolved_sub: MClassType */;
val* var162 /* : Set[MClass] */;
val* var163 /* : MClass */;
val* var165 /* : MClass */;
short int var166 /* : Bool */;
short int var_res /* var res: Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
short int var173 /* : Bool */;
val* var174 /* : MClass */;
val* var176 /* : MClass */;
val* var177 /* : MClassType */;
val* var_sub2 /* var sub2: MClassType */;
val* var178 /* : MClass */;
val* var180 /* : MClass */;
val* var181 /* : MClass */;
val* var183 /* : MClass */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
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
val* var203 /* : Array[MType] */;
val* var204 /* : nullable Object */;
val* var_sub_arg /* var sub_arg: MType */;
val* var205 /* : Array[MType] */;
val* var207 /* : Array[MType] */;
val* var208 /* : nullable Object */;
val* var_sup_arg /* var sup_arg: MType */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
long var213 /* : Int */;
var_mmodule = p0;
var_anchor = p1;
var_sup = p2;
var_sub = self;
{
{ /* Inline kernel$Object$== (var_sub,var_sup) on <var_sub:MType> */
var_other = var_sup;
{
{ /* Inline kernel$Object$is_same_instance (var_sub,var_other) on <var_sub:MType> */
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
{ /* Inline kernel$Object$== (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
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
var12 = ((short int(*)(val* self))(var_sub->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_sub); /* need_anchor on <var_sub:MType>*/
}
var13 = !var12;
if (unlikely(!var13)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 775);
fatal_exit(1);
}
{
var14 = ((short int(*)(val* self))(var_sup->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_sup); /* need_anchor on <var_sup:MType>*/
}
var15 = !var14;
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 776);
fatal_exit(1);
}
} else {
{
var16 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sub->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_sub, var_anchor, ((val*)NULL), var_mmodule); /* can_resolve_for on <var_sub:MType>*/
}
if (unlikely(!var16)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 779);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nitc__model__MType__lookup_fixed]))(var_sub, var_mmodule, var_anchor); /* lookup_fixed on <var_sub:MType>*/
}
var_sub = var17;
{
var18 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_sup->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_sup, var_anchor, ((val*)NULL), var_mmodule); /* can_resolve_for on <var_sup:MType>*/
}
if (unlikely(!var18)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 781);
fatal_exit(1);
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_sup->class->vft[COLOR_nitc__model__MType__lookup_fixed]))(var_sup, var_mmodule, var_anchor); /* lookup_fixed on <var_sup:MType>*/
}
var_sup = var19;
}
var_sup_accept_null = 0;
/* <var_sup:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_sup->type->table_size) {
var20 = 0;
} else {
var20 = var_sup->type->type_table[cltype] == idtype;
}
if (var20){
var_sup_accept_null = 1;
{
{ /* Inline model$MProxyType$mtype (var_sup) on <var_sup:MType(MNullableType)> */
var23 = var_sup->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_sup:MType(MNullableType)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_sup = var21;
} else {
/* <var_sup:MType> isa MNotNullType */
cltype25 = type_nitc__MNotNullType.color;
idtype26 = type_nitc__MNotNullType.id;
if(cltype25 >= var_sup->type->table_size) {
var24 = 0;
} else {
var24 = var_sup->type->type_table[cltype25] == idtype26;
}
if (var24){
{
{ /* Inline model$MProxyType$mtype (var_sup) on <var_sup:MType(MNotNullType)> */
var29 = var_sup->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_sup:MType(MNotNullType)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_sup = var27;
} else {
/* <var_sup:MType> isa MNullType */
cltype31 = type_nitc__MNullType.color;
idtype32 = type_nitc__MNullType.id;
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
cltype34 = type_nitc__MNullableType.color;
idtype35 = type_nitc__MNullableType.id;
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
{ /* Inline model$MProxyType$mtype (var_sub) on <var_sub:MType(MNullableType)> */
var39 = var_sub->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_sub = var37;
} else {
/* <var_sub:MType> isa MNotNullType */
cltype41 = type_nitc__MNotNullType.color;
idtype42 = type_nitc__MNotNullType.id;
if(cltype41 >= var_sub->type->table_size) {
var40 = 0;
} else {
var40 = var_sub->type->type_table[cltype41] == idtype42;
}
if (var40){
var_sub_reject_null = 1;
{
{ /* Inline model$MProxyType$mtype (var_sub) on <var_sub:MType(MNotNullType)> */
var45 = var_sub->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNotNullType)> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_sub = var43;
} else {
/* <var_sub:MType> isa MNullType */
cltype47 = type_nitc__MNullType.color;
idtype48 = type_nitc__MNullType.id;
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
cltype50 = type_nitc__MFormalType.color;
idtype51 = type_nitc__MFormalType.id;
if(cltype50 >= var_sub->type->table_size) {
var49 = 0;
} else {
var49 = var_sub->type->type_table[cltype50] == idtype51;
}
if (var49){
{
{ /* Inline kernel$Object$== (var_sub,var_sup) on <var_sub:MType(MFormalType)> */
var_other = var_sup;
{
{ /* Inline kernel$Object$is_same_instance (var_sub,var_other) on <var_sub:MType(MFormalType)> */
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
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other60 = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other60); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var62 = !var61;
var58 = var62;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (unlikely(!var57)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 819);
fatal_exit(1);
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1))(var_sub->class->vft[COLOR_nitc__model__MType__lookup_bound]))(var_sub, var_mmodule, var_anchor); /* lookup_bound on <var_sub:MType(MFormalType)>*/
}
var_sub = var63;
if (var_sub_reject_null){
{
var64 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_sub); /* as_notnull on <var_sub:MType>*/
}
var_sub = var64;
} else {
}
/* <var_sub:MType> isa MNullableType */
cltype66 = type_nitc__MNullableType.color;
idtype67 = type_nitc__MNullableType.id;
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
{ /* Inline model$MProxyType$mtype (var_sub) on <var_sub:MType(MNullableType)> */
var73 = var_sub->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNullableType)> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_sub = var71;
} else {
/* <var_sub:MType> isa MNotNullType */
cltype75 = type_nitc__MNotNullType.color;
idtype76 = type_nitc__MNotNullType.id;
if(cltype75 >= var_sub->type->table_size) {
var74 = 0;
} else {
var74 = var_sub->type->type_table[cltype75] == idtype76;
}
if (var74){
var_sub_reject_null = 1;
{
{ /* Inline model$MProxyType$mtype (var_sub) on <var_sub:MType(MNotNullType)> */
var79 = var_sub->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_sub:MType(MNotNullType)> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_sub = var77;
} else {
/* <var_sub:MType> isa MNullType */
cltype81 = type_nitc__MNullType.color;
idtype82 = type_nitc__MNullType.id;
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
/* <var_sub:MType> isa MBottomType */
cltype85 = type_nitc__MBottomType.color;
idtype86 = type_nitc__MBottomType.id;
if(cltype85 >= var_sub->type->table_size) {
var84 = 0;
} else {
var84 = var_sub->type->type_table[cltype85] == idtype86;
}
var_87 = var84;
if (var84){
var83 = var_87;
} else {
/* <var_sub:MType> isa MErrorType */
cltype89 = type_nitc__MErrorType.color;
idtype90 = type_nitc__MErrorType.id;
if(cltype89 >= var_sub->type->table_size) {
var88 = 0;
} else {
var88 = var_sub->type->type_table[cltype89] == idtype90;
}
var83 = var88;
}
if (var83){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_sub:MType> isa MClassType */
cltype92 = type_nitc__MClassType.color;
idtype93 = type_nitc__MClassType.id;
if(cltype92 >= var_sub->type->table_size) {
var91 = 0;
} else {
var91 = var_sub->type->type_table[cltype92] == idtype93;
}
if (unlikely(!var91)) {
var94 = glob_sys;
if (unlikely(varonce==NULL)) {
var95 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = " <? ";
var100 = (val*)(4l<<2|1);
var101 = (val*)(4l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var95)->values[1]=var97;
} else {
var95 = varonce;
varonce = NULL;
}
{
var104 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_core__NativeArray*)var95)->values[0]=var104;
{
var105 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_core__NativeArray*)var95)->values[2]=var105;
{
var106 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce = var95;
{
core__file___Sys___print_error(var94, var106); /* Direct call file$Sys$print_error on <var94:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 842);
fatal_exit(1);
}
/* <var_sup:MType> isa MFormalType */
cltype111 = type_nitc__MFormalType.color;
idtype112 = type_nitc__MFormalType.id;
if(cltype111 >= var_sup->type->table_size) {
var110 = 0;
} else {
var110 = var_sup->type->type_table[cltype111] == idtype112;
}
var_113 = var110;
if (var110){
var109 = var_113;
} else {
/* <var_sup:MType> isa MNullType */
cltype115 = type_nitc__MNullType.color;
idtype116 = type_nitc__MNullType.id;
if(cltype115 >= var_sup->type->table_size) {
var114 = 0;
} else {
var114 = var_sup->type->type_table[cltype115] == idtype116;
}
var109 = var114;
}
var_117 = var109;
if (var109){
var108 = var_117;
} else {
/* <var_sup:MType> isa MBottomType */
cltype119 = type_nitc__MBottomType.color;
idtype120 = type_nitc__MBottomType.id;
if(cltype119 >= var_sup->type->table_size) {
var118 = 0;
} else {
var118 = var_sup->type->type_table[cltype119] == idtype120;
}
var108 = var118;
}
var_121 = var108;
if (var108){
var107 = var_121;
} else {
/* <var_sup:MType> isa MErrorType */
cltype123 = type_nitc__MErrorType.color;
idtype124 = type_nitc__MErrorType.id;
if(cltype123 >= var_sup->type->table_size) {
var122 = 0;
} else {
var122 = var_sup->type->type_table[cltype123] == idtype124;
}
var107 = var122;
}
if (var107){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType> isa MClassType */
cltype126 = type_nitc__MClassType.color;
idtype127 = type_nitc__MClassType.id;
if(cltype126 >= var_sup->type->table_size) {
var125 = 0;
} else {
var125 = var_sup->type->type_table[cltype126] == idtype127;
}
if (unlikely(!var125)) {
var128 = glob_sys;
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "got ";
var135 = (val*)(4l<<2|1);
var136 = (val*)(4l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[0]=var132;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = " ";
var143 = (val*)(1l<<2|1);
var144 = (val*)(1l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var130)->values[2]=var140;
} else {
var130 = varonce129;
varonce129 = NULL;
}
{
var147 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_core__NativeArray*)var130)->values[1]=var147;
{
var148 = core__abstract_text___Object___inspect(var_sub);
}
((struct instance_core__NativeArray*)var130)->values[3]=var148;
{
var149 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
core__file___Sys___print_error(var128, var149); /* Direct call file$Sys$print_error on <var128:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 850);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var_sub,var_sup) on <var_sub:MType(MClassType)> */
var_other = var_sup;
{
{ /* Inline kernel$Object$is_same_instance (var_sub,var_other) on <var_sub:MType(MClassType)> */
var154 = var_sub == var_other;
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
if (var150){
var = 1;
goto RET_LABEL;
} else {
}
if (var_anchor == NULL) {
var155 = 1; /* is null */
} else {
var155 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var160 = var_anchor == var_other;
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
if (var155){
var_anchor = var_sub;
} else {
}
{
var161 = nitc___nitc__MClassType___MType__anchor_to(var_sub, var_mmodule, var_anchor);
}
var_resolved_sub = var161;
{
var162 = nitc___nitc__MClassType___MType__collect_mclasses(var_resolved_sub, var_mmodule);
}
{
{ /* Inline model$MClassType$mclass (var_sup) on <var_sup:MType(MClassType)> */
var165 = var_sup->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MClassType)> */
if (unlikely(var165 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
var166 = ((short int(*)(val* self, val* p0))((((long)var162&3)?class_info[((long)var162&3)]:var162->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var162, var163); /* has on <var162:Set[MClass]>*/
}
var_res = var166;
{
{ /* Inline kernel$Bool$== (var_res,0) on <var_res:Bool> */
var169 = var_res == 0;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_sup:MType(MClassType)> isa MGenericType */
cltype171 = type_nitc__MGenericType.color;
idtype172 = type_nitc__MGenericType.id;
if(cltype171 >= var_sup->type->table_size) {
var170 = 0;
} else {
var170 = var_sup->type->type_table[cltype171] == idtype172;
}
var173 = !var170;
if (var173){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (var_sup) on <var_sup:MType(MGenericType)> */
var176 = var_sup->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var176 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
var177 = nitc___nitc__MType___supertype_to(var_sub, var_mmodule, var_anchor, var174);
}
var_sub2 = var177;
{
{ /* Inline model$MClassType$mclass (var_sub2) on <var_sub2:MClassType> */
var180 = var_sub2->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_sub2:MClassType> */
if (unlikely(var180 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_sup) on <var_sup:MType(MGenericType)> */
var183 = var_sup->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var183 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var178,var181) on <var178:MClass> */
var_other = var181;
{
{ /* Inline kernel$Object$is_same_instance (var178,var_other) on <var178:MClass> */
var188 = var178 == var_other;
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
var184 = var186;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
if (unlikely(!var184)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 862);
fatal_exit(1);
}
var_i = 0l;
{
{ /* Inline model$MClassType$mclass (var_sup) on <var_sup:MType(MGenericType)> */
var191 = var_sup->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_sup:MType(MGenericType)> */
if (unlikely(var191 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline model$MClass$arity (var189) on <var189:MClass> */
var194 = var189->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var189:MClass> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
var_195 = var192;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_195) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_195:Int> isa OTHER */
/* <var_195:Int> isa OTHER */
var198 = 1; /* easy <var_195:Int> isa OTHER*/
if (unlikely(!var198)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var201 = var_i < var_195;
var196 = var201;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
if (var196){
} else {
goto BREAK_label202;
}
{
var203 = ((val*(*)(val* self))(var_sub2->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_sub2); /* arguments on <var_sub2:MClassType>*/
}
{
var204 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var203, var_i);
}
var_sub_arg = var204;
{
{ /* Inline model$MGenericType$arguments (var_sup) on <var_sup:MType(MGenericType)> */
var207 = var_sup->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_sup:MType(MGenericType)> */
if (unlikely(var207 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
var208 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var205, var_i);
}
var_sup_arg = var208;
{
var209 = nitc___nitc__MType___is_subtype(var_sub_arg, var_mmodule, var_anchor, var_sup_arg);
}
var_res = var209;
{
{ /* Inline kernel$Bool$== (var_res,0) on <var_res:Bool> */
var212 = var_res == 0;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
if (var210){
var = 0;
goto RET_LABEL;
} else {
}
{
var213 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var213;
}
BREAK_label202: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$anchor_to for (self: MType, MModule, MClassType): MType */
val* nitc___nitc__MType___anchor_to(val* self, val* p0, val* p1) {
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
var2 = !var1;
if (var2){
var = self;
goto RET_LABEL;
} else {
}
{
var3 = ((short int(*)(val* self))(var_anchor->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_anchor); /* need_anchor on <var_anchor:MClassType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 909);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nitc__model__MType__resolve_for]))(self, var_anchor, ((val*)NULL), var_mmodule, 1); /* resolve_for on <self:MType>*/
}
var_res = var5;
{
var6 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_res); /* need_anchor on <var_res:MType>*/
}
var7 = !var6;
if (unlikely(!var7)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 912);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$need_anchor for (self: MType): Bool */
short int nitc___nitc__MType___need_anchor(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$supertype_to for (self: MType, MModule, nullable MClassType, MClass): MClassType */
val* nitc___nitc__MType___supertype_to(val* self, val* p0, val* p1, val* p2) {
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
{ /* Inline model$MClass$arity (var_super_mclass) on <var_super_mclass:MClass> */
var3 = var_super_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_super_mclass:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline model$MClass$mclass_type (var_super_mclass) on <var_super_mclass:MClass> */
var9 = var_super_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_super_mclass:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
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
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= self->type->table_size) {
var11 = 0;
} else {
var11 = self->type->type_table[cltype] == idtype;
}
var_ = var11;
if (var11){
{
{ /* Inline model$MClassType$mclass (self) on <self:MType(MClassType)> */
var14 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MType(MClassType)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var12,var_super_mclass) on <var12:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel$Object$is_same_instance (var12,var_other) on <var12:MClass> */
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
var20 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
if (var20){
if (var_anchor == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other24); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (unlikely(!var21)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 942);
fatal_exit(1);
}
{
var27 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__model__MType__anchor_to]))(self, var_mmodule, var_anchor); /* anchor_to on <self:MType>*/
}
var_resolved_self = var27;
} else {
var_resolved_self = self;
}
{
var28 = ((val*(*)(val* self, val* p0))(var_resolved_self->class->vft[COLOR_nitc__model__MType__collect_mtypes]))(var_resolved_self, var_mmodule); /* collect_mtypes on <var_resolved_self:nullable Object(MType)>*/
}
var_supertypes = var28;
var_29 = var_supertypes;
{
var30 = ((val*(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_29); /* iterator on <var_29:Set[MClassType]>*/
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[MClassType]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[MClassType]>*/
}
var_supertype = var33;
{
{ /* Inline model$MClassType$mclass (var_supertype) on <var_supertype:MClassType> */
var36 = var_supertype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var34,var_super_mclass) on <var34:MClass> */
var_other = var_super_mclass;
{
{ /* Inline kernel$Object$is_same_instance (var34,var_other) on <var34:MClass> */
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
var42 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_supertype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_supertype, self, var_anchor, var_mmodule, 0); /* resolve_for on <var_supertype:MClassType>*/
}
var = var42;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[MClassType]>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 954);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model$MType$lookup_bound for (self: MType, MModule, MType): MType */
val* nitc___nitc__MType___lookup_bound(val* self, val* p0, val* p1) {
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
/* method model$MType$lookup_fixed for (self: MType, MModule, MType): MType */
val* nitc___nitc__MType___lookup_fixed(val* self, val* p0, val* p1) {
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
/* method model$MType$is_ok for (self: MType): Bool */
short int nitc___nitc__MType___is_ok(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$is_legal_in for (self: MType, MModule, nullable MClassType): Bool */
short int nitc___nitc__MType___is_legal_in(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var1 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__is_ok]))(self); /* is_ok on <self:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$can_resolve_for for (self: MType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MType___can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "can_resolve_for", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1072);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model$MType$as_nullable for (self: MType): MType */
val* nitc___nitc__MType___as_nullable(val* self) {
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
{ /* Inline model$MType$as_nullable_cache (self) on <self:MType> */
var3 = self->attrs[COLOR_nitc__model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable MType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MType(MType)>*/
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
var9 = NEW_nitc__MNullableType(&type_nitc__MNullableType);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__model__MProxyType__mtype_61d]))(var9, self); /* mtype= on <var9:MNullableType>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:MNullableType>*/
}
var_res = var9;
{
{ /* Inline model$MType$as_nullable_cache= (self,var_res) on <self:MType> */
self->attrs[COLOR_nitc__model__MType___as_nullable_cache].val = var_res; /* _as_nullable_cache on <self:MType> */
RET_LABEL10:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$undecorate for (self: MType): MType */
val* nitc___nitc__MType___undecorate(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$as_notnull for (self: MType): MType */
val* nitc___nitc__MType___as_notnull(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$as_nullable_cache for (self: MType): nullable MType */
val* nitc___nitc__MType___as_nullable_cache(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__model__MType___as_nullable_cache].val; /* _as_nullable_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MType$as_nullable_cache= for (self: MType, nullable MType) */
void nitc___nitc__MType___as_nullable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MType___as_nullable_cache].val = p0; /* _as_nullable_cache on <self:MType> */
RET_LABEL:;
}
/* method model$MType$length for (self: MType): Int */
long nitc___nitc__MType___length(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MType$collect_mclassdefs for (self: MType, MModule): Set[MClassDef] */
val* nitc___nitc__MType___collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclassdefs", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1157);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model$MType$collect_mclasses for (self: MType, MModule): Set[MClass] */
val* nitc___nitc__MType___collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mclasses", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1167);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model$MType$collect_mtypes for (self: MType, MModule): Set[MClassType] */
val* nitc___nitc__MType___collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "collect_mtypes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1173);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model$MType$has_mproperty for (self: MType, MModule, MProperty): Bool */
short int nitc___nitc__MType___has_mproperty(val* self, val* p0, val* p1) {
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__need_anchor]))(self); /* need_anchor on <self:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1186);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__model__MType__collect_mclassdefs]))(self, var_mmodule); /* collect_mclassdefs on <self:MType>*/
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mproperty) on <var_mproperty:MProperty> */
var6 = var_mproperty->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:MProperty> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var3, var4); /* has on <var3:Set[MClassDef]>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$mclass for (self: MClassType): MClass */
val* nitc___nitc__MClassType___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$mclass= for (self: MClassType, MClass) */
void nitc___nitc__MClassType___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassType___mclass].val = p0; /* _mclass on <self:MClassType> */
RET_LABEL:;
}
/* method model$MClassType$model for (self: MClassType): Model */
val* nitc___nitc__MClassType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
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
/* method model$MClassType$location for (self: MClassType): Location */
val* nitc___nitc__MClassType___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$location (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___location].val; /* _location on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 400);
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
/* method model$MClassType$arguments for (self: MClassType): Array[MType] */
val* nitc___nitc__MClassType___arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nitc__model__MClassType___arguments].val; /* _arguments on <self:MClassType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1206);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$arguments= for (self: MClassType, Array[MType]) */
void nitc___nitc__MClassType___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassType___arguments].val = p0; /* _arguments on <self:MClassType> */
RET_LABEL:;
}
/* method model$MClassType$to_s for (self: MClassType): String */
val* nitc___nitc__MClassType___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClass___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$full_name for (self: MClassType): String */
val* nitc___nitc__MClassType___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$c_name for (self: MClassType): String */
val* nitc___nitc__MClassType___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$need_anchor for (self: MClassType): Bool */
short int nitc___nitc__MClassType___MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$anchor_to for (self: MClassType, MModule, MClassType): MClassType */
val* nitc___nitc__MClassType___MType__anchor_to(val* self, val* p0, val* p1) {
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
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__MClassType___MType__anchor_to]))(self, p0, p1); /* anchor_to on <self:MClassType>*/
}
/* <var1:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1220);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$resolve_for for (self: MClassType, MType, nullable MClassType, MModule, Bool): MClassType */
val* nitc___nitc__MClassType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
/* method model$MClassType$can_resolve_for for (self: MClassType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MClassType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
/* method model$MClassType$collect_mclassdefs for (self: MClassType, MModule): Set[MClassDef] */
val* nitc___nitc__MClassType___MType__collect_mclassdefs(val* self, val* p0) {
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1229);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$collect_mclassdefs_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nitc__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1294);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
nitc___nitc__MClassType___collect_things(self, var_mmodule); /* Direct call model$MClassType$collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_cache, var_mmodule);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_mclasses for (self: MClassType, MModule): Set[MClass] */
val* nitc___nitc__MClassType___MType__collect_mclasses(val* self, val* p0) {
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
{ /* Inline model$MClassType$collect_mclasses_last_module (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module].val; /* _collect_mclasses_last_module on <self:MClassType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* <var_mmodule:MModule> cannot be null */
} else {
{ /* Inline kernel$Object$== (var1,var_mmodule) on <var1:nullable MModule> */
var_other = var_mmodule;
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable MModule(MModule)> */
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
{ /* Inline model$MClassType$collect_mclasses_last_module_cache (self) on <self:MClassType> */
var12 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module_cache].val; /* _collect_mclasses_last_module_cache on <self:MClassType> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_last_module_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1252);
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
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var14 = !var13;
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1240);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$collect_mclasses_cache (self) on <self:MClassType> */
var17 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1295);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_cache = var15;
{
var18 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var_cache, var_mmodule);
}
var19 = !var18;
if (var19){
{
nitc___nitc__MClassType___collect_things(self, var_mmodule); /* Direct call model$MClassType$collect_things on <self:MClassType>*/
}
} else {
}
{
var20 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_cache, var_mmodule);
}
var_res = var20;
{
{ /* Inline model$MClassType$collect_mclasses_last_module= (self,var_mmodule) on <self:MClassType> */
self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module].val = var_mmodule; /* _collect_mclasses_last_module on <self:MClassType> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MClassType$collect_mclasses_last_module_cache= (self,var_res) on <self:MClassType> */
self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module_cache].val = var_res; /* _collect_mclasses_last_module_cache on <self:MClassType> */
RET_LABEL22:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_mclasses_last_module for (self: MClassType): nullable MModule */
val* nitc___nitc__MClassType___collect_mclasses_last_module(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module].val; /* _collect_mclasses_last_module on <self:MClassType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_mclasses_last_module= for (self: MClassType, nullable MModule) */
void nitc___nitc__MClassType___collect_mclasses_last_module_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module].val = p0; /* _collect_mclasses_last_module on <self:MClassType> */
RET_LABEL:;
}
/* method model$MClassType$collect_mclasses_last_module_cache for (self: MClassType): Set[MClass] */
val* nitc___nitc__MClassType___collect_mclasses_last_module_cache(val* self) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module_cache].val; /* _collect_mclasses_last_module_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_last_module_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1252);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_mclasses_last_module_cache= for (self: MClassType, Set[MClass]) */
void nitc___nitc__MClassType___collect_mclasses_last_module_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_last_module_cache].val = p0; /* _collect_mclasses_last_module_cache on <self:MClassType> */
RET_LABEL:;
}
/* method model$MClassType$collect_mtypes for (self: MClassType, MModule): Set[MClassType] */
val* nitc___nitc__MClassType___MType__collect_mtypes(val* self, val* p0) {
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
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__model__MType__need_anchor]))(self); /* need_anchor on <self:MClassType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1256);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$collect_mtypes_cache (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nitc__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1296);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_cache = var3;
{
var6 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var_cache, var_mmodule);
}
var7 = !var6;
if (var7){
{
nitc___nitc__MClassType___collect_things(self, var_mmodule); /* Direct call model$MClassType$collect_things on <self:MClassType>*/
}
} else {
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_cache, var_mmodule);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_things for (self: MClassType, MModule) */
void nitc___nitc__MClassType___collect_things(val* self, val* p0) {
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
val* var17 /* : IndexedIterator[nullable Object] */;
val* var_18 /* var : IndexedIterator[MClassDef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var21 /* : POSetElement[MModule] */;
val* var23 /* : POSetElement[MModule] */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var30 /* : Array[MClassType] */;
val* var32 /* : Array[MClassType] */;
val* var_33 /* var : Array[MClassType] */;
val* var34 /* : IndexedIterator[nullable Object] */;
val* var_35 /* var : IndexedIterator[MClassType] */;
short int var36 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_supertype /* var supertype: MClassType */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
val* var_superclass /* var superclass: MClass */;
short int var42 /* : Bool */;
val* var45 /* : HashMap[MModule, Set[MClassDef]] */;
val* var47 /* : HashMap[MModule, Set[MClassDef]] */;
val* var48 /* : HashMap[MModule, Set[MClass]] */;
val* var50 /* : HashMap[MModule, Set[MClass]] */;
val* var51 /* : HashMap[MModule, Set[MClassType]] */;
val* var53 /* : HashMap[MModule, Set[MClassType]] */;
var_mmodule = p0;
var = NEW_core__HashSet(&type_core__HashSet__nitc__MClassDef);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[MClassDef]>*/
}
var_res = var;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClass);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClass]>*/
}
var_seen = var1;
var2 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassType);
{
core___core__HashSet___core__kernel__Object__init(var2); /* Direct call hash_collection$HashSet$init on <var2:HashSet[MClassType]>*/
}
var_types = var2;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var5 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_seen, var3); /* Direct call hash_collection$HashSet$add on <var_seen:HashSet[MClass]>*/
}
var6 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___with_capacity(var6, 1l); /* Direct call array$Array$with_capacity on <var6:Array[MClass]>*/
}
var_ = var6;
{
{ /* Inline model$MClassType$mclass (self) on <self:MClassType> */
var9 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var7); /* Direct call array$AbstractArray$push on <var_:Array[MClass]>*/
}
var_todo = var_;
for(;;) {
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_todo);
}
var11 = !var10;
if (var11){
{
var12 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_todo);
}
var_mclass = var12;
{
{ /* Inline model$MClass$mclassdefs (var_mclass) on <var_mclass:MClass> */
var15 = var_mclass->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 490);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_16);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:IndexedIterator[MClassDef]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:IndexedIterator[MClassDef]>*/
}
var_mclassdef = var20;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var23 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
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
goto BREAK_label29;
} else {
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_res, var_mclassdef); /* Direct call hash_collection$HashSet$add on <var_res:HashSet[MClassDef]>*/
}
{
{ /* Inline model$MClassDef$supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_33 = var30;
{
var34 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:IndexedIterator[MClassType]>*/
}
if (var36){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:IndexedIterator[MClassType]>*/
}
var_supertype = var38;
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_types, var_supertype); /* Direct call hash_collection$HashSet$add on <var_types:HashSet[MClassType]>*/
}
{
{ /* Inline model$MClassType$mclass (var_supertype) on <var_supertype:MClassType> */
var41 = var_supertype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_supertype:MClassType> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_superclass = var39;
{
var42 = core___core__HashSet___core__abstract_collection__Collection__has(var_seen, var_superclass);
}
if (var42){
goto BREAK_label43;
} else {
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_seen, var_superclass); /* Direct call hash_collection$HashSet$add on <var_seen:HashSet[MClass]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_todo, var_superclass); /* Direct call array$Array$add on <var_todo:Array[MClass]>*/
}
BREAK_label43: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:IndexedIterator[MClassType]>*/
}
}
BREAK_label37: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:IndexedIterator[MClassType]>*/
}
BREAK_label29: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:IndexedIterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:IndexedIterator[MClassDef]>*/
}
} else {
goto BREAK_label44;
}
}
BREAK_label44: (void)0;
{
{ /* Inline model$MClassType$collect_mclassdefs_cache (self) on <self:MClassType> */
var47 = self->attrs[COLOR_nitc__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1294);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var45, var_mmodule, var_res); /* Direct call hash_collection$HashMap$[]= on <var45:HashMap[MModule, Set[MClassDef]]>*/
}
{
{ /* Inline model$MClassType$collect_mclasses_cache (self) on <self:MClassType> */
var50 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1295);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var48, var_mmodule, var_seen); /* Direct call hash_collection$HashMap$[]= on <var48:HashMap[MModule, Set[MClass]]>*/
}
{
{ /* Inline model$MClassType$collect_mtypes_cache (self) on <self:MClassType> */
var53 = self->attrs[COLOR_nitc__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1296);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var51, var_mmodule, var_types); /* Direct call hash_collection$HashMap$[]= on <var51:HashMap[MModule, Set[MClassType]]>*/
}
RET_LABEL:;
}
/* method model$MClassType$collect_mclassdefs_cache for (self: MClassType): HashMap[MModule, Set[MClassDef]] */
val* nitc___nitc__MClassType___collect_mclassdefs_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassDef]] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
var1 = self->attrs[COLOR_nitc__model__MClassType___collect_mclassdefs_cache].val; /* _collect_mclassdefs_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclassdefs_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1294);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_mclasses_cache for (self: MClassType): HashMap[MModule, Set[MClass]] */
val* nitc___nitc__MClassType___collect_mclasses_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClass]] */;
val* var1 /* : HashMap[MModule, Set[MClass]] */;
var1 = self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_cache].val; /* _collect_mclasses_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mclasses_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1295);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$collect_mtypes_cache for (self: MClassType): HashMap[MModule, Set[MClassType]] */
val* nitc___nitc__MClassType___collect_mtypes_cache(val* self) {
val* var /* : HashMap[MModule, Set[MClassType]] */;
val* var1 /* : HashMap[MModule, Set[MClassType]] */;
var1 = self->attrs[COLOR_nitc__model__MClassType___collect_mtypes_cache].val; /* _collect_mtypes_cache on <self:MClassType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_mtypes_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1296);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassType$init for (self: MClassType) */
void nitc___nitc__MClassType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MClassType___core__kernel__Object__init]))(self); /* init on <self:MClassType>*/
}
RET_LABEL:;
}
/* method model$MGenericType$arguments for (self: MGenericType): Array[MType] */
val* nitc___nitc__MGenericType___MClassType__arguments(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MGenericType$arguments= for (self: MGenericType, Array[MType]) */
void nitc___nitc__MGenericType___MClassType__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MGenericType___arguments].val = p0; /* _arguments on <self:MGenericType> */
RET_LABEL:;
}
