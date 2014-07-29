#include "mmodule.sep.0.h"
/* method mmodule#Model#mmodules for (self: Model): Array[MModule] */
val* mmodule__Model__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___mmodules].val; /* _mmodules on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 28);
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
val* var3 /* : Array[MModule] */;
{ /* Inline mmodule#Model#mmodules (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_mmodule__Model___mmodules].val; /* _mmodules on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 28);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_nesting_hierarchy for (self: Model): POSet[MModule] */
val* mmodule__Model__mmodule_nesting_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___mmodule_nesting_hierarchy].val; /* _mmodule_nesting_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_nesting_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 31);
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
val* var3 /* : POSet[MModule] */;
{ /* Inline mmodule#Model#mmodule_nesting_hierarchy (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_mmodule__Model___mmodule_nesting_hierarchy].val; /* _mmodule_nesting_hierarchy on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_nesting_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 31);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_importation_hierarchy for (self: Model): POSet[MModule] */
val* mmodule__Model__mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 37);
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
val* var3 /* : POSet[MModule] */;
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 37);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules_by_name for (self: Model): MultiHashMap[String, MModule] */
val* mmodule__Model__mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = self->attrs[COLOR_mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 40);
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
val* var3 /* : MultiHashMap[String, MModule] */;
{ /* Inline mmodule#Model#mmodules_by_name (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#mmodules for (self: MGroup): Array[MModule] */
val* mmodule__MGroup__mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_mmodule__MGroup___mmodules].val; /* _mmodules on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 58);
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
val* var3 /* : Array[MModule] */;
{ /* Inline mmodule#MGroup#mmodules (self) on <self:Object(MGroup)> */
var3 = self->attrs[COLOR_mmodule__MGroup___mmodules].val; /* _mmodules on <self:Object(MGroup)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 58);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#fuzzy_owner for (self: MGroup): nullable MModule */
val* mmodule__MGroup__fuzzy_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : Array[MModule] */;
val* var3 /* : Array[MModule] */;
val* var4 /* : ArrayIterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : null */;
{
{ /* Inline mmodule#MGroup#mmodules (self) on <self:MGroup> */
var3 = self->attrs[COLOR_mmodule__MGroup___mmodules].val; /* _mmodules on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 58);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArrayRead__iterator(var1);
}
for(;;) {
{
var5 = array__ArrayIterator__is_ok(var4);
}
if(!var5) break;
{
var6 = array__ArrayIterator__item(var4);
}
var_m = var6;
{
{ /* Inline mmodule#MModule#name (var_m) on <var_m:MModule> */
var9 = var_m->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_m:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline mproject#MGroup#name (self) on <self:MGroup> */
var12 = self->attrs[COLOR_mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 56);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var14 = string__FlatString___61d_61d(var7, var10);
var13 = var14;
}
if (var13){
var = var_m;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var4); /* Direct call array#ArrayIterator#next on <var4:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var15 = NULL;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#fuzzy_owner for (self: Object): nullable MModule */
val* VIRTUAL_mmodule__MGroup__fuzzy_owner(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = mmodule__MGroup__fuzzy_owner(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model for (self: MModule): Model */
val* mmodule__MModule__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 74);
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
val* var3 /* : Model */;
{ /* Inline mmodule#MModule#model (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 74);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model= for (self: MModule, Model) */
void mmodule__MModule__model_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___model].val = p0; /* _model on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#model= for (self: Object, Model) */
void VIRTUAL_mmodule__MModule__model_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#model= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___model].val = p0; /* _model on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#direct_owner= for (self: MModule, nullable MModule) */
void mmodule__MModule__direct_owner_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___direct_owner].val = p0; /* _direct_owner on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#direct_owner= for (self: Object, nullable MModule) */
void VIRTUAL_mmodule__MModule__direct_owner_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#direct_owner= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___direct_owner].val = p0; /* _direct_owner on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#mgroup for (self: MModule): nullable MGroup */
val* mmodule__MModule__mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#mgroup for (self: Object): nullable MGroup */
val* VIRTUAL_mmodule__MModule__mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
{ /* Inline mmodule#MModule#mgroup (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___mgroup].val; /* _mgroup on <self:Object(MModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#mgroup= for (self: MModule, nullable MGroup) */
void mmodule__MModule__mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___mgroup].val = p0; /* _mgroup on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#mgroup= for (self: Object, nullable MGroup) */
void VIRTUAL_mmodule__MModule__mgroup_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#mgroup= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___mgroup].val = p0; /* _mgroup on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#name for (self: MModule): String */
val* mmodule__MModule__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
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
val* var3 /* : String */;
{ /* Inline mmodule#MModule#name (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___name].val; /* _name on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name= for (self: MModule, String) */
void mmodule__MModule__name_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___name].val = p0; /* _name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#name= for (self: Object, String) */
void VIRTUAL_mmodule__MModule__name_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#name= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___name].val = p0; /* _name on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#location for (self: MModule): Location */
val* mmodule__MModule__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_mmodule__MModule___location].val; /* _location on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 89);
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
val* var3 /* : Location */;
{ /* Inline mmodule#MModule#location (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___location].val; /* _location on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 89);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#location= for (self: MModule, Location) */
void mmodule__MModule__location_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___location].val = p0; /* _location on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#location= for (self: Object, Location) */
void VIRTUAL_mmodule__MModule__location_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#location= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___location].val = p0; /* _location on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#to_s for (self: MModule): String */
val* mmodule__MModule__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var3 = self->attrs[COLOR_mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
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
/* method mmodule#MModule#to_s for (self: Object): String */
val* VIRTUAL_mmodule__MModule__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mmodule__MModule__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_nesting= for (self: MModule, POSetElement[MModule]) */
void mmodule__MModule__in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___in_nesting].val = p0; /* _in_nesting on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#in_nesting= for (self: Object, POSetElement[MModule]) */
void VIRTUAL_mmodule__MModule__in_nesting_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#in_nesting= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___in_nesting].val = p0; /* _in_nesting on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#in_importation for (self: MModule): POSetElement[MModule] */
val* mmodule__MModule__in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
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
val* var3 /* : POSetElement[MModule] */;
{ /* Inline mmodule#MModule#in_importation (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_importation= for (self: MModule, POSetElement[MModule]) */
void mmodule__MModule__in_importation_61d(val* self, val* p0) {
self->attrs[COLOR_mmodule__MModule___in_importation].val = p0; /* _in_importation on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#in_importation= for (self: Object, POSetElement[MModule]) */
void VIRTUAL_mmodule__MModule__in_importation_61d(val* self, val* p0) {
{ /* Inline mmodule#MModule#in_importation= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___in_importation].val = p0; /* _in_importation on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mmodule#MModule#full_name for (self: MModule): String */
val* mmodule__MModule__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var4 /* : Bool */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : MProject */;
val* var14 /* : MProject */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : String */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : MProject */;
val* var28 /* : MProject */;
val* var29 /* : String */;
val* var31 /* : String */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var38 /* : String */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var3 = self->attrs[COLOR_mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mgroup = var1;
var5 = NULL;
if (var_mgroup == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,var5) on <var_mgroup:nullable MGroup> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
var11 = var_mgroup == var_other;
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
var_ = var6;
if (var6){
var4 = var_;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var14 = var_mgroup->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 60);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var12) on <var12:MProject> */
var17 = var12->attrs[COLOR_mproject__MProject___name].val; /* _name on <var12:MProject> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 26);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var20 = self->attrs[COLOR_mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var22 = string__FlatString___61d_61d(var15, var18);
var21 = var22;
}
var4 = var21;
}
if (var4){
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var25 = self->attrs[COLOR_mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var28 = var_mgroup->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 60);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var26) on <var26:MProject> */
var31 = var26->attrs[COLOR_mproject__MProject___name].val; /* _name on <var26:MProject> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 26);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (varonce) {
var32 = varonce;
} else {
var33 = "::";
var34 = 2;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var38 = self->attrs[COLOR_mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var36;
{
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
var = var42;
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
val* var6 /* : MultiHashMap[String, MModule] */;
val* var7 /* : Array[MModule] */;
val* var9 /* : Array[MModule] */;
val* var10 /* : POSet[MModule] */;
val* var12 /* : POSet[MModule] */;
val* var13 /* : POSetElement[Object] */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Array[MModule] */;
val* var25 /* : Array[MModule] */;
val* var26 /* : nullable MModule */;
val* var_direct_owner /* var direct_owner: nullable MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[MModule] */;
val* var36 /* : Array[MModule] */;
val* var37 /* : ArrayIterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_m /* var m: MModule */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var47 /* : POSet[MModule] */;
val* var49 /* : POSet[MModule] */;
val* var50 /* : nullable MGroup */;
val* var52 /* : nullable MGroup */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : nullable MGroup */;
val* var62 /* : nullable MGroup */;
val* var63 /* : nullable MModule */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var_ /* var : Bool */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var79 /* : POSet[MModule] */;
val* var81 /* : POSet[MModule] */;
val* var82 /* : POSet[MModule] */;
val* var84 /* : POSet[MModule] */;
val* var85 /* : POSetElement[Object] */;
{
{ /* Inline model_base#MEntity#init (self) on <self:MModule> */
RET_LABEL1:(void)0;
}
}
var_model = p0;
var_mgroup = p1;
var_name = p2;
var_location = p3;
{
{ /* Inline mmodule#MModule#model= (self,var_model) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___model].val = var_model; /* _model on <self:MModule> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name= (self,var_name) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___name].val = var_name; /* _name on <self:MModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline mmodule#MModule#location= (self,var_location) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___location].val = var_location; /* _location on <self:MModule> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodules_by_name (var_model) on <var_model:Model> */
var6 = var_model->attrs[COLOR_mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <var_model:Model> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 40);
show_backtrace(1);
}
var = var6;
RET_LABEL5:(void)0;
}
}
{
more_collections__MultiHashMap__add_one(var, var_name, self); /* Direct call more_collections#MultiHashMap#add_one on <var:MultiHashMap[String, MModule]>*/
}
{
{ /* Inline mmodule#Model#mmodules (var_model) on <var_model:Model> */
var9 = var_model->attrs[COLOR_mmodule__Model___mmodules].val; /* _mmodules on <var_model:Model> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 28);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
array__Array__add(var7, self); /* Direct call array#Array#add on <var7:Array[MModule]>*/
}
{
{ /* Inline mmodule#Model#mmodule_nesting_hierarchy (var_model) on <var_model:Model> */
var12 = var_model->attrs[COLOR_mmodule__Model___mmodule_nesting_hierarchy].val; /* _mmodule_nesting_hierarchy on <var_model:Model> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_nesting_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 31);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = poset__POSet__add_node(var10, self);
}
{
{ /* Inline mmodule#MModule#in_nesting= (self,var13) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___in_nesting].val = var13; /* _in_nesting on <self:MModule> */
RET_LABEL14:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup= (self,var_mgroup) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___mgroup].val = var_mgroup; /* _mgroup on <self:MModule> */
RET_LABEL15:(void)0;
}
}
var16 = NULL;
if (var_mgroup == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var16) on <var_mgroup:nullable MGroup> */
var_other = var16;
{
var21 = ((short int (*)(val*, val*))(var_mgroup->class->vft[COLOR_kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
var20 = var21;
}
var22 = !var20;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
{ /* Inline mmodule#MGroup#mmodules (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var25 = var_mgroup->attrs[COLOR_mmodule__MGroup___mmodules].val; /* _mmodules on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 58);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
array__Array__add(var23, self); /* Direct call array#Array#add on <var23:Array[MModule]>*/
}
{
var26 = mmodule__MGroup__fuzzy_owner(var_mgroup);
}
var_direct_owner = var26;
if (var_direct_owner == NULL) {
var27 = 0; /* <self:MModule> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_direct_owner,self) on <var_direct_owner:nullable MModule> */
var_other30 = self;
{
{ /* Inline kernel#Object#is_same_instance (var_direct_owner,var_other30) on <var_direct_owner:nullable MModule(MModule)> */
var33 = var_direct_owner == var_other30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline mmodule#MGroup#mmodules (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var36 = var_mgroup->attrs[COLOR_mmodule__MGroup___mmodules].val; /* _mmodules on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 58);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = array__AbstractArrayRead__iterator(var34);
}
for(;;) {
{
var38 = array__ArrayIterator__is_ok(var37);
}
if(!var38) break;
{
var39 = array__ArrayIterator__item(var37);
}
var_m = var39;
{
{ /* Inline kernel#Object#== (var_m,self) on <var_m:MModule> */
var_other30 = self;
{
{ /* Inline kernel#Object#is_same_instance (var_m,var_other30) on <var_m:MModule> */
var45 = var_m == var_other30;
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
if (var40){
goto CONTINUE_label;
} else {
}
{
{ /* Inline mmodule#MModule#direct_owner= (var_m,self) on <var_m:MModule> */
var_m->attrs[COLOR_mmodule__MModule___direct_owner].val = self; /* _direct_owner on <var_m:MModule> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_nesting_hierarchy (var_model) on <var_model:Model> */
var49 = var_model->attrs[COLOR_mmodule__Model___mmodule_nesting_hierarchy].val; /* _mmodule_nesting_hierarchy on <var_model:Model> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_nesting_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 31);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
poset__POSet__add_edge(var47, self, var_m); /* Direct call poset#POSet#add_edge on <var47:POSet[MModule]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var37); /* Direct call array#ArrayIterator#next on <var37:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline mproject#MGroup#parent (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var52 = var_mgroup->attrs[COLOR_mproject__MGroup___parent].val; /* _parent on <var_mgroup:nullable MGroup(MGroup)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = NULL;
if (var50 == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var50,var53) on <var50:nullable MGroup> */
var_other = var53;
{
var58 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_kernel__Object___61d_61d]))(var50, var_other) /* == on <var50:nullable MGroup(MGroup)>*/;
var57 = var58;
}
var59 = !var57;
var55 = var59;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline mproject#MGroup#parent (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var62 = var_mgroup->attrs[COLOR_mproject__MGroup___parent].val; /* _parent on <var_mgroup:nullable MGroup(MGroup)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 138);
show_backtrace(1);
} else {
var63 = mmodule__MGroup__fuzzy_owner(var60);
}
var_direct_owner = var63;
} else {
}
} else {
}
if (var_direct_owner == NULL) {
var65 = 1; /* <self:MModule> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var_direct_owner,self) on <var_direct_owner:nullable MModule> */
var_other = self;
{
var69 = ((short int (*)(val*, val*))(var_direct_owner->class->vft[COLOR_kernel__Object___61d_61d]))(var_direct_owner, var_other) /* == on <var_direct_owner:nullable MModule(MModule)>*/;
var68 = var69;
}
var70 = !var68;
var66 = var70;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var_ = var65;
if (var65){
var71 = NULL;
if (var_direct_owner == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_direct_owner,var71) on <var_direct_owner:nullable MModule> */
var_other = var71;
{
var76 = ((short int (*)(val*, val*))(var_direct_owner->class->vft[COLOR_kernel__Object___61d_61d]))(var_direct_owner, var_other) /* == on <var_direct_owner:nullable MModule(MModule)>*/;
var75 = var76;
}
var77 = !var75;
var73 = var77;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
var64 = var72;
} else {
var64 = var_;
}
if (var64){
{
{ /* Inline mmodule#MModule#direct_owner= (self,var_direct_owner) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___direct_owner].val = var_direct_owner; /* _direct_owner on <self:MModule> */
RET_LABEL78:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_nesting_hierarchy (var_model) on <var_model:Model> */
var81 = var_model->attrs[COLOR_mmodule__Model___mmodule_nesting_hierarchy].val; /* _mmodule_nesting_hierarchy on <var_model:Model> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_nesting_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 31);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
poset__POSet__add_edge(var79, var_direct_owner, self); /* Direct call poset#POSet#add_edge on <var79:POSet[MModule]>*/
}
} else {
}
} else {
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var_model) on <var_model:Model> */
var84 = var_model->attrs[COLOR_mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var_model:Model> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 37);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = poset__POSet__add_node(var82, self);
}
{
{ /* Inline mmodule#MModule#in_importation= (self,var85) on <self:MModule> */
self->attrs[COLOR_mmodule__MModule___in_importation].val = var85; /* _in_importation on <self:MModule> */
RET_LABEL86:(void)0;
}
}
RET_LABEL:;
}
/* method mmodule#MModule#init for (self: Object, Model, nullable MGroup, String, Location) */
void VIRTUAL_mmodule__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3) {
mmodule__MModule__init(self, p0, p1, p2, p3); /* Direct call mmodule#MModule#init on <self:Object(MModule)>*/
RET_LABEL:;
}
/* method mmodule#MModule#set_imported_mmodules for (self: MModule, Array[MModule]) */
void mmodule__MModule__set_imported_mmodules(val* self, val* p0) {
val* var_imported_mmodules /* var imported_mmodules: Array[MModule] */;
val* var /* : POSetElement[MModule] */;
val* var2 /* : POSetElement[MModule] */;
val* var3 /* : Collection[Object] */;
short int var4 /* : Bool */;
val* var5 /* : ArrayIterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var8 /* : Model */;
val* var10 /* : Model */;
val* var11 /* : POSet[MModule] */;
val* var13 /* : POSet[MModule] */;
var_imported_mmodules = p0;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var2 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = poset__POSetElement__direct_greaters(var);
}
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var3) /* is_empty on <var3:Collection[Object](Collection[MModule])>*/;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 153);
show_backtrace(1);
}
{
var5 = array__AbstractArrayRead__iterator(var_imported_mmodules);
}
for(;;) {
{
var6 = array__ArrayIterator__is_ok(var5);
}
if(!var6) break;
{
var7 = array__ArrayIterator__item(var5);
}
var_m = var7;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var10 = self->attrs[COLOR_mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 74);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var8) on <var8:Model> */
var13 = var8->attrs[COLOR_mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var8:Model> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 37);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
poset__POSet__add_edge(var11, self, var_m); /* Direct call poset#POSet#add_edge on <var11:POSet[MModule]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var5); /* Direct call array#ArrayIterator#next on <var5:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method mmodule#MModule#set_imported_mmodules for (self: Object, Array[MModule]) */
void VIRTUAL_mmodule__MModule__set_imported_mmodules(val* self, val* p0) {
mmodule__MModule__set_imported_mmodules(self, p0); /* Direct call mmodule#MModule#set_imported_mmodules on <self:Object(MModule)>*/
RET_LABEL:;
}
/* method mmodule#MModule#intrude_mmodules for (self: MModule): HashSet[MModule] */
val* mmodule__MModule__intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
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
val* var3 /* : HashSet[MModule] */;
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#public_mmodules for (self: MModule): HashSet[MModule] */
val* mmodule__MModule__public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
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
val* var3 /* : HashSet[MModule] */;
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#private_mmodules for (self: MModule): HashSet[MModule] */
val* mmodule__MModule__private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
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
val* var3 /* : HashSet[MModule] */;
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#visibility_for for (self: MModule, MModule): MVisibility */
val* mmodule__MModule__visibility_for(val* self, val* p0) {
val* var /* : MVisibility */;
val* var_m /* var m: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MVisibility */;
val* var8 /* : HashSet[MModule] */;
val* var10 /* : HashSet[MModule] */;
short int var11 /* : Bool */;
val* var12 /* : MVisibility */;
val* var13 /* : HashSet[MModule] */;
val* var15 /* : HashSet[MModule] */;
short int var16 /* : Bool */;
val* var17 /* : MVisibility */;
val* var18 /* : HashSet[MModule] */;
val* var20 /* : HashSet[MModule] */;
short int var21 /* : Bool */;
val* var22 /* : MVisibility */;
val* var23 /* : MVisibility */;
var_m = p0;
{
{ /* Inline kernel#Object#== (var_m,self) on <var_m:MModule> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var_m,var_other) on <var_m:MModule> */
var6 = var_m == var_other;
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
{
var7 = model_base__Object__intrude_visibility(self);
}
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var10 = self->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = hash_collection__HashSet__has(var8, var_m);
}
if (var11){
{
var12 = model_base__Object__intrude_visibility(self);
}
var = var12;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var15 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = hash_collection__HashSet__has(var13, var_m);
}
if (var16){
{
var17 = model_base__Object__public_visibility(self);
}
var = var17;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var20 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = hash_collection__HashSet__has(var18, var_m);
}
if (var21){
{
var22 = model_base__Object__private_visibility(self);
}
var = var22;
goto RET_LABEL;
} else {
}
{
var23 = model_base__Object__none_visibility(self);
}
var = var23;
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
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashSet[MModule] */;
val* var9 /* : HashSet[MModule] */;
val* var10 /* : HashSet[MModule] */;
val* var12 /* : HashSet[MModule] */;
val* var13 /* : HashSet[MModule] */;
val* var15 /* : HashSet[MModule] */;
val* var16 /* : HashSet[MModule] */;
val* var18 /* : HashSet[MModule] */;
val* var19 /* : HashSet[MModule] */;
val* var21 /* : HashSet[MModule] */;
val* var22 /* : HashSet[MModule] */;
val* var24 /* : HashSet[MModule] */;
val* var25 /* : HashSet[MModule] */;
val* var27 /* : HashSet[MModule] */;
val* var28 /* : MVisibility */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : HashSet[MModule] */;
val* var37 /* : HashSet[MModule] */;
val* var38 /* : HashSet[MModule] */;
val* var40 /* : HashSet[MModule] */;
val* var41 /* : HashSet[MModule] */;
val* var43 /* : HashSet[MModule] */;
val* var44 /* : HashSet[MModule] */;
val* var46 /* : HashSet[MModule] */;
val* var47 /* : HashSet[MModule] */;
val* var49 /* : HashSet[MModule] */;
val* var50 /* : MVisibility */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : HashSet[MModule] */;
val* var59 /* : HashSet[MModule] */;
val* var60 /* : HashSet[MModule] */;
val* var62 /* : HashSet[MModule] */;
val* var63 /* : HashSet[MModule] */;
val* var65 /* : HashSet[MModule] */;
val* var66 /* : HashSet[MModule] */;
val* var68 /* : HashSet[MModule] */;
val* var69 /* : HashSet[MModule] */;
val* var71 /* : HashSet[MModule] */;
static val* varonce;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
var_m = p0;
var_v = p1;
{
var = model_base__Object__intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var) on <var_v:MVisibility> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var6 = var_v == var_other;
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
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var9 = self->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
hash_collection__HashSet__add(var7, var_m); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var12 = self->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var15 = var_m->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var10, var13); /* Direct call abstract_collection#SimpleCollection#add_all on <var10:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var18 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var21 = var_m->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var16, var19); /* Direct call abstract_collection#SimpleCollection#add_all on <var16:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var24 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline mmodule#MModule#private_mmodules (var_m) on <var_m:MModule> */
var27 = var_m->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <var_m:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var22, var25); /* Direct call abstract_collection#SimpleCollection#add_all on <var22:HashSet[MModule]>*/
}
} else {
{
var28 = model_base__Object__public_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var28) on <var_v:MVisibility> */
var_other = var28;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var34 = var_v == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var37 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
hash_collection__HashSet__add(var35, var_m); /* Direct call hash_collection#HashSet#add on <var35:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var40 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var43 = var_m->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var38, var41); /* Direct call abstract_collection#SimpleCollection#add_all on <var38:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var46 = self->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var49 = var_m->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var44, var47); /* Direct call abstract_collection#SimpleCollection#add_all on <var44:HashSet[MModule]>*/
}
} else {
{
var50 = model_base__Object__private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var50) on <var_v:MVisibility> */
var_other = var50;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var56 = var_v == var_other;
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
if (var51){
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var59 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
hash_collection__HashSet__add(var57, var_m); /* Direct call hash_collection#HashSet#add on <var57:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var62 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var65 = var_m->attrs[COLOR_mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 159);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var60, var63); /* Direct call abstract_collection#SimpleCollection#add_all on <var60:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var68 = self->attrs[COLOR_mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 161);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var71 = var_m->attrs[COLOR_mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 160);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var66, var69); /* Direct call abstract_collection#SimpleCollection#add_all on <var66:HashSet[MModule]>*/
}
} else {
if (varonce) {
var72 = varonce;
} else {
var73 = " visibility for ";
var74 = 16;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = " = ";
var79 = 3;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 5;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) self;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var72;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var_m;
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var77;
((struct instance_array__NativeArray*)var83)->values[4] = (val*) var_v;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
{
file__Object__print(self, var84); /* Direct call file#Object#print on <self:MModule>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 192);
show_backtrace(1);
}
}
}
RET_LABEL:;
}
/* method mmodule#MModule#set_visibility_for for (self: Object, MModule, MVisibility) */
void VIRTUAL_mmodule__MModule__set_visibility_for(val* self, val* p0, val* p1) {
mmodule__MModule__set_visibility_for(self, p0, p1); /* Direct call mmodule#MModule#set_visibility_for on <self:Object(MModule)>*/
RET_LABEL:;
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
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
val* var11 /* : MVisibility */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MVisibility */;
short int var19 /* : Bool */;
val* var20 /* : MVisibility */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MVisibility */;
short int var28 /* : Bool */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
var_intro_mmodule = p0;
var_visibility = p1;
{
var1 = mmodule__MModule__visibility_for(self, var_intro_mmodule);
}
var_v = var1;
{
var2 = model_base__Object__intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var2) on <var_v:MVisibility> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var8 = var_v == var_other;
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
if (var3){
{
var9 = model_base__Object__private_visibility(self);
}
{
var10 = kernel__Comparable___62d_61d(var_visibility, var9);
}
var = var10;
goto RET_LABEL;
} else {
{
var11 = model_base__Object__public_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var11) on <var_v:MVisibility> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var17 = var_v == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
var18 = model_base__Object__private_visibility(self);
}
{
var19 = kernel__Comparable___62d(var_visibility, var18);
}
var = var19;
goto RET_LABEL;
} else {
{
var20 = model_base__Object__private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var20) on <var_v:MVisibility> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var26 = var_v == var_other;
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
{
var27 = model_base__Object__private_visibility(self);
}
{
var28 = kernel__Comparable___62d(var_visibility, var27);
}
var = var28;
goto RET_LABEL;
} else {
{
var29 = model_base__Object__none_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var29) on <var_v:MVisibility> */
var_other = var29;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var35 = var_v == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var36 = 0;
var = var36;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 221);
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
/* method mmodule#MModule#is_fictive= for (self: MModule, Bool) */
void mmodule__MModule__is_fictive_61d(val* self, short int p0) {
self->attrs[COLOR_mmodule__MModule___is_fictive].s = p0; /* _is_fictive on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#is_fictive= for (self: Object, Bool) */
void VIRTUAL_mmodule__MModule__is_fictive_61d(val* self, short int p0) {
{ /* Inline mmodule#MModule#is_fictive= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_mmodule__MModule___is_fictive].s = p0; /* _is_fictive on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
