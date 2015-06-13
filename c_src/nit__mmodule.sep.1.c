#include "nit__mmodule.sep.0.h"
/* method mmodule#Model#mmodules for (self: Model): Array[MModule] */
val* nit__mmodule___Model___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodules].val; /* _mmodules on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodule_importation_hierarchy for (self: Model): POSet[MModule] */
val* nit__mmodule___Model___mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#mmodules_by_name for (self: Model): MultiHashMap[String, MModule] */
val* nit__mmodule___Model___mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#Model#get_mmodules_by_name for (self: Model, String): nullable Array[MModule] */
val* nit__mmodule___Model___get_mmodules_by_name(val* self, val* p0) {
val* var /* : nullable Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MModule] */;
val* var3 /* : MultiHashMap[String, MModule] */;
short int var4 /* : Bool */;
val* var5 /* : MultiHashMap[String, MModule] */;
val* var7 /* : MultiHashMap[String, MModule] */;
val* var8 /* : nullable Object */;
var_name = p0;
{
{ /* Inline mmodule#Model#mmodules_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline mmodule#Model#mmodules_by_name (self) on <self:Model> */
var7 = self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var5, var_name);
}
var = var8;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#mmodules for (self: MGroup): Array[MModule] */
val* nit__mmodule___MGroup___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MGroup___mmodules].val; /* _mmodules on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 51);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#default_mmodule for (self: MGroup): nullable MModule */
val* nit__mmodule___MGroup___default_mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val; /* _default_mmodule on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MGroup#default_mmodule= for (self: MGroup, nullable MModule) */
void nit__mmodule___MGroup___default_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val = p0; /* _default_mmodule on <self:MGroup> */
RET_LABEL:;
}
/* method mmodule#MModule#model for (self: MModule): Model */
val* nit___nit__MModule___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#model= for (self: MModule, Model) */
void nit___nit__MModule___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___model].val = p0; /* _model on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#mgroup for (self: MModule): nullable MGroup */
val* nit___nit__MModule___mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#mgroup= for (self: MModule, nullable MGroup) */
void nit___nit__MModule___mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___mgroup].val = p0; /* _mgroup on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#mproject for (self: MModule): nullable MProject */
val* nit___nit__MModule___mproject(val* self) {
val* var /* : nullable MProject */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MProject */;
val* var12 /* : MProject */;
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_g = var1;
if (var_g == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_g,var_other) on <var_g:nullable MGroup(MGroup)> */
var9 = var_g == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_g) on <var_g:nullable MGroup(MGroup)> */
var12 = var_g->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name for (self: MModule): String */
val* nit___nit__MModule___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#name= for (self: MModule, String) */
void nit___nit__MModule___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___name].val = p0; /* _name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#location for (self: MModule): Location */
val* nit___nit__MModule___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#location= for (self: MModule, Location) */
void nit___nit__MModule___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___location].val = p0; /* _location on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#to_s for (self: MModule): String */
val* nit___nit__MModule___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
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
/* method mmodule#MModule#in_importation for (self: MModule): POSetElement[MModule] */
val* nit___nit__MModule___in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#in_importation= for (self: MModule, POSetElement[MModule]) */
void nit___nit__MModule___in_importation_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mmodule__MModule___in_importation].val = p0; /* _in_importation on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#full_name for (self: MModule): String */
val* nit___nit__MModule___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : nullable MGroup */;
val* var7 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : MProject */;
val* var17 /* : MProject */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var23 /* : String */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var27 /* : String */;
val* var28 /* : NativeArray[String] */;
static val* varonce;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : MProject */;
val* var35 /* : MProject */;
val* var36 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___full_name].val != NULL; /* _full_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mmodule__MModule___full_name].val; /* _full_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 99);
fatal_exit(1);
}
} else {
{
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_mgroup = var5;
if (var_mgroup == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
var14 = var_mgroup == var_other;
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
var_ = var9;
if (var9){
var8 = var_;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var17 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var15) on <var15:MProject> */
var20 = var15->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var15:MProject> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var23 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var21); /* == on <var18:String>*/
}
var8 = var24;
}
if (var8){
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var27 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var3 = var25;
goto RET_LABEL4;
} else {
if (unlikely(varonce==NULL)) {
var28 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "::";
var32 = standard___standard__NativeString___to_s_with_length(var31, 2l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var28)->values[1]=var30;
} else {
var28 = varonce;
varonce = NULL;
}
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var35 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var33) on <var33:MProject> */
var38 = var33->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var33:MProject> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
((struct instance_standard__NativeArray*)var28)->values[0]=var36;
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var41 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
((struct instance_standard__NativeArray*)var28)->values[2]=var39;
{
var42 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce = var28;
var3 = var42;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__mmodule__MModule___full_name].val = var3; /* _full_name on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#namespace_for for (self: MModule, MVisibility): String */
val* nit___nit__MModule___namespace_for(val* self, val* p0) {
val* var /* : String */;
val* var_v /* var v: MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable MGroup */;
val* var7 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : String */;
val* var15 /* : MProject */;
val* var17 /* : MProject */;
val* var18 /* : String */;
var_v = p0;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___private_visibility(var1);
}
{
var3 = standard___standard__Comparable____60d_61d(var_v, var2);
}
if (var3){
{
var4 = nit___nit__MModule___nit__model_base__MEntity__full_name(self);
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_mgroup = var5;
if (var_mgroup == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
var13 = var_mgroup == var_other;
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
var14 = nit___nit__MModule___nit__model_base__MEntity__full_name(self);
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var17 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__MProject___nit__model_base__MEntity__full_name(var15);
}
var = var18;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#c_name for (self: MModule): String */
val* nit___nit__MModule___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : nullable MGroup */;
val* var7 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : MProject */;
val* var16 /* : MProject */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MProject */;
val* var29 /* : MProject */;
val* var30 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var_res /* var res: nullable Object */;
val* var43 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___c_name].val != NULL; /* _c_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mmodule__MModule___c_name].val; /* _c_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 131);
fatal_exit(1);
}
} else {
{
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_g = var5;
if (var_g == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
{
{ /* Inline mproject#MGroup#mproject (var_g) on <var_g:nullable MGroup(MGroup)> */
var16 = var_g->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var14) on <var14:MProject> */
var19 = var14->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var14:MProject> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var22 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var17,var20) on <var17:String> */
var_other = var20;
{
var25 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var_other); /* == on <var17:String>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var8 = var23;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline mproject#MGroup#mproject (var_g) on <var_g:nullable MGroup(MGroup)> */
var29 = var_g->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var27) on <var27:MProject> */
var32 = var27->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var27:MProject> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = standard___standard__Text___to_cmangle(var30);
}
if (likely(varonce!=NULL)) {
var34 = varonce;
} else {
var35 = "__";
var36 = standard___standard__NativeString___to_s_with_length(var35, 2l);
var34 = var36;
varonce = var34;
}
{
var37 = ((val*(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__string__String___43d]))(var33, var34); /* + on <var33:String>*/
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var40 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = standard___standard__Text___to_cmangle(var38);
}
{
var42 = ((val*(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__string__String___43d]))(var37, var41); /* + on <var37:String>*/
}
var_res = var42;
} else {
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var45 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = standard___standard__Text___to_cmangle(var43);
}
var_res = var46;
}
var3 = var_res;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__mmodule__MModule___c_name].val = var3; /* _c_name on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#c_namespace_for for (self: MModule, MVisibility): String */
val* nit___nit__MModule___c_namespace_for(val* self, val* p0) {
val* var /* : String */;
val* var_v /* var v: MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable MGroup */;
val* var7 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : String */;
val* var15 /* : MProject */;
val* var17 /* : MProject */;
val* var18 /* : String */;
var_v = p0;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___private_visibility(var1);
}
{
var3 = standard___standard__Comparable____60d_61d(var_v, var2);
}
if (var3){
{
var4 = nit___nit__MModule___nit__model_base__MEntity__c_name(self);
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_mgroup = var5;
if (var_mgroup == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
var13 = var_mgroup == var_other;
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
var14 = nit___nit__MModule___nit__model_base__MEntity__c_name(self);
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var17 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__MProject___nit__model_base__MEntity__c_name(var15);
}
var = var18;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#init for (self: MModule) */
void nit___nit__MModule___standard__kernel__Object__init(val* self) {
val* var /* : Model */;
val* var2 /* : Model */;
val* var3 /* : MultiHashMap[String, MModule] */;
val* var5 /* : MultiHashMap[String, MModule] */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var9 /* : Model */;
val* var11 /* : Model */;
val* var12 /* : Array[MModule] */;
val* var14 /* : Array[MModule] */;
val* var15 /* : nullable MGroup */;
val* var17 /* : nullable MGroup */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : nullable MGroup */;
val* var25 /* : nullable MGroup */;
val* var26 /* : Array[MModule] */;
val* var28 /* : Array[MModule] */;
val* var29 /* : nullable MGroup */;
val* var31 /* : nullable MGroup */;
val* var32 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var39 /* : nullable MGroup */;
val* var41 /* : nullable MGroup */;
val* var42 /* : nullable MModule */;
val* var44 /* : nullable MModule */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_other48 /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : nullable MGroup */;
val* var54 /* : nullable MGroup */;
val* var56 /* : Model */;
val* var58 /* : Model */;
val* var59 /* : POSet[MModule] */;
val* var61 /* : POSet[MModule] */;
val* var62 /* : POSetElement[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MModule___standard__kernel__Object__init]))(self); /* init on <self:MModule>*/
}
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var2 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodules_by_name (var) on <var:Model> */
var5 = var->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <var:Model> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var8 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var3, var6, self); /* Direct call more_collections#MultiHashMap#add_one on <var3:MultiHashMap[String, MModule]>*/
}
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var11 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodules (var9) on <var9:Model> */
var14 = var9->attrs[COLOR_nit__mmodule__Model___mmodules].val; /* _mmodules on <var9:Model> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 27);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var12, self); /* Direct call array#Array#add on <var12:Array[MModule]>*/
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var17 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var15,((val*)NULL)) on <var15:nullable MGroup> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:nullable MGroup(MGroup)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var25 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 164);
fatal_exit(1);
} else {
{ /* Inline mmodule#MGroup#mmodules (var23) on <var23:nullable MGroup> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 51);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nit__mmodule__MGroup___mmodules].val; /* _mmodules on <var23:nullable MGroup> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 51);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var26, self); /* Direct call array#Array#add on <var26:Array[MModule]>*/
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var31 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 165);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#name (var29) on <var29:nullable MGroup> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <var29:nullable MGroup> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var37 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var32, var35); /* == on <var32:String>*/
}
if (var38){
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var41 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 166);
fatal_exit(1);
} else {
{ /* Inline mmodule#MGroup#default_mmodule (var39) on <var39:nullable MGroup> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 54);
fatal_exit(1);
}
var44 = var39->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val; /* _default_mmodule on <var39:nullable MGroup> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var42,((val*)NULL)) on <var42:nullable MModule> */
var_other48 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var42,var_other48) on <var42:nullable MModule(MModule)> */
var51 = var42 == var_other48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 166);
fatal_exit(1);
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var54 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (var52 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 167);
fatal_exit(1);
} else {
{ /* Inline mmodule#MGroup#default_mmodule= (var52,self) on <var52:nullable MGroup> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 54);
fatal_exit(1);
}
var52->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val = self; /* _default_mmodule on <var52:nullable MGroup> */
RET_LABEL55:(void)0;
}
}
} else {
}
} else {
}
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var58 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var56) on <var56:Model> */
var61 = var56->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var56:Model> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 30);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = poset___poset__POSet___add_node(var59, self);
}
{
{ /* Inline mmodule#MModule#in_importation= (self,var62) on <self:MModule> */
self->attrs[COLOR_nit__mmodule__MModule___in_importation].val = var62; /* _in_importation on <self:MModule> */
RET_LABEL63:(void)0;
}
}
RET_LABEL:;
}
/* method mmodule#MModule#set_imported_mmodules for (self: MModule, Array[MModule]) */
void nit___nit__MModule___set_imported_mmodules(val* self, val* p0) {
val* var_imported_mmodules /* var imported_mmodules: Array[MModule] */;
val* var /* : POSetElement[MModule] */;
val* var2 /* : POSetElement[MModule] */;
val* var3 /* : Collection[nullable Object] */;
short int var4 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MModule] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var9 /* : Model */;
val* var11 /* : Model */;
val* var12 /* : POSet[MModule] */;
val* var14 /* : POSet[MModule] */;
var_imported_mmodules = p0;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var2 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = poset___poset__POSetElement___direct_greaters(var);
}
{
var4 = ((short int(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var3); /* is_empty on <var3:Collection[nullable Object](Collection[MModule])>*/
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 178);
fatal_exit(1);
}
var_ = var_imported_mmodules;
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
var_m = var8;
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var11 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var9) on <var9:Model> */
var14 = var9->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var9:Model> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 30);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
poset___poset__POSet___add_edge(var12, self, var_m); /* Direct call poset#POSet#add_edge on <var12:POSet[MModule]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_6); /* Direct call array#ArrayIterator#finish on <var_6:ArrayIterator[MModule]>*/
}
RET_LABEL:;
}
/* method mmodule#MModule#intrude_mmodules for (self: MModule): HashSet[MModule] */
val* nit___nit__MModule___intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#public_mmodules for (self: MModule): HashSet[MModule] */
val* nit___nit__MModule___public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#private_mmodules for (self: MModule): HashSet[MModule] */
val* nit___nit__MModule___private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#visibility_for for (self: MModule, MModule): MVisibility */
val* nit___nit__MModule___visibility_for(val* self, val* p0) {
val* var /* : MVisibility */;
val* var_m /* var m: MModule */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Sys */;
val* var7 /* : MVisibility */;
val* var8 /* : HashSet[MModule] */;
val* var10 /* : HashSet[MModule] */;
short int var11 /* : Bool */;
val* var12 /* : Sys */;
val* var13 /* : MVisibility */;
val* var14 /* : HashSet[MModule] */;
val* var16 /* : HashSet[MModule] */;
short int var17 /* : Bool */;
val* var18 /* : Sys */;
val* var19 /* : MVisibility */;
val* var20 /* : HashSet[MModule] */;
val* var22 /* : HashSet[MModule] */;
short int var23 /* : Bool */;
val* var24 /* : Sys */;
val* var25 /* : MVisibility */;
val* var26 /* : Sys */;
val* var27 /* : MVisibility */;
var_m = p0;
{
{ /* Inline kernel#Object#== (var_m,self) on <var_m:MModule> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var_m,var_other) on <var_m:MModule> */
var5 = var_m == var_other;
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
var6 = glob_sys;
{
var7 = nit__model_base___standard__Sys___intrude_visibility(var6);
}
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var10 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var8, var_m);
}
if (var11){
var12 = glob_sys;
{
var13 = nit__model_base___standard__Sys___intrude_visibility(var12);
}
var = var13;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var16 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var14, var_m);
}
if (var17){
var18 = glob_sys;
{
var19 = nit__model_base___standard__Sys___public_visibility(var18);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var22 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var20, var_m);
}
if (var23){
var24 = glob_sys;
{
var25 = nit__model_base___standard__Sys___private_visibility(var24);
}
var = var25;
goto RET_LABEL;
} else {
}
var26 = glob_sys;
{
var27 = nit__model_base___standard__Sys___none_visibility(var26);
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#set_visibility_for for (self: MModule, MModule, MVisibility) */
void nit___nit__MModule___set_visibility_for(val* self, val* p0, val* p1) {
val* var_m /* var m: MModule */;
val* var_v /* var v: MVisibility */;
val* var /* : Sys */;
val* var1 /* : MVisibility */;
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
val* var28 /* : Sys */;
val* var29 /* : MVisibility */;
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
val* var50 /* : Sys */;
val* var51 /* : MVisibility */;
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
val* var72 /* : Sys */;
val* var73 /* : NativeArray[String] */;
static val* varonce;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
var_m = p0;
var_v = p1;
var = glob_sys;
{
var1 = nit__model_base___standard__Sys___intrude_visibility(var);
}
{
{ /* Inline kernel#Object#== (var_v,var1) on <var_v:MVisibility> */
var_other = var1;
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
}
if (var2){
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var9 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var7, var_m); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var12 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var15 = var_m->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var10, var13); /* Direct call abstract_collection#SimpleCollection#add_all on <var10:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var18 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var21 = var_m->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var16, var19); /* Direct call abstract_collection#SimpleCollection#add_all on <var16:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var24 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline mmodule#MModule#private_mmodules (var_m) on <var_m:MModule> */
var27 = var_m->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <var_m:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var22, var25); /* Direct call abstract_collection#SimpleCollection#add_all on <var22:HashSet[MModule]>*/
}
} else {
var28 = glob_sys;
{
var29 = nit__model_base___standard__Sys___public_visibility(var28);
}
{
{ /* Inline kernel#Object#== (var_v,var29) on <var_v:MVisibility> */
var_other = var29;
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
}
if (var30){
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var37 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var35, var_m); /* Direct call hash_collection#HashSet#add on <var35:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var40 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var43 = var_m->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var38, var41); /* Direct call abstract_collection#SimpleCollection#add_all on <var38:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var46 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var49 = var_m->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var44, var47); /* Direct call abstract_collection#SimpleCollection#add_all on <var44:HashSet[MModule]>*/
}
} else {
var50 = glob_sys;
{
var51 = nit__model_base___standard__Sys___private_visibility(var50);
}
{
{ /* Inline kernel#Object#== (var_v,var51) on <var_v:MVisibility> */
var_other = var51;
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
}
if (var52){
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var59 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var57, var_m); /* Direct call hash_collection#HashSet#add on <var57:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var62 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var65 = var_m->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var60, var63); /* Direct call abstract_collection#SimpleCollection#add_all on <var60:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var68 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var71 = var_m->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var66, var69); /* Direct call abstract_collection#SimpleCollection#add_all on <var66:HashSet[MModule]>*/
}
} else {
var72 = glob_sys;
if (unlikely(varonce==NULL)) {
var73 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " visibility for ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 16l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var73)->values[1]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " = ";
var81 = standard___standard__NativeString___to_s_with_length(var80, 3l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var73)->values[3]=var79;
} else {
var73 = varonce;
varonce = NULL;
}
{
var82 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_standard__NativeArray*)var73)->values[0]=var82;
{
var83 = ((val*(*)(val* self))(var_m->class->vft[COLOR_standard__string__Object__to_s]))(var_m); /* to_s on <var_m:MModule>*/
}
((struct instance_standard__NativeArray*)var73)->values[2]=var83;
{
var84 = ((val*(*)(val* self))(var_v->class->vft[COLOR_standard__string__Object__to_s]))(var_v); /* to_s on <var_v:MVisibility>*/
}
((struct instance_standard__NativeArray*)var73)->values[4]=var84;
{
var85 = ((val*(*)(val* self))(var73->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce = var73;
{
standard__file___Sys___print(var72, var85); /* Direct call file#Sys#print on <var72:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 217);
fatal_exit(1);
}
}
}
RET_LABEL:;
}
/* method mmodule#MModule#is_visible for (self: MModule, MModule, MVisibility): Bool */
short int nit___nit__MModule___is_visible(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_intro_mmodule /* var intro_mmodule: MModule */;
val* var_visibility /* var visibility: MVisibility */;
val* var1 /* : MVisibility */;
val* var_v /* var v: MVisibility */;
val* var2 /* : Sys */;
val* var3 /* : MVisibility */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var12 /* : Sys */;
val* var13 /* : MVisibility */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Sys */;
val* var20 /* : MVisibility */;
short int var21 /* : Bool */;
val* var22 /* : Sys */;
val* var23 /* : MVisibility */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Sys */;
val* var30 /* : MVisibility */;
short int var31 /* : Bool */;
val* var32 /* : Sys */;
val* var33 /* : MVisibility */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
var_intro_mmodule = p0;
var_visibility = p1;
{
var1 = nit___nit__MModule___visibility_for(self, var_intro_mmodule);
}
var_v = var1;
var2 = glob_sys;
{
var3 = nit__model_base___standard__Sys___intrude_visibility(var2);
}
{
{ /* Inline kernel#Object#== (var_v,var3) on <var_v:MVisibility> */
var_other = var3;
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
}
if (var4){
var9 = glob_sys;
{
var10 = nit__model_base___standard__Sys___private_visibility(var9);
}
{
var11 = standard___standard__Comparable____62d_61d(var_visibility, var10);
}
var = var11;
goto RET_LABEL;
} else {
var12 = glob_sys;
{
var13 = nit__model_base___standard__Sys___public_visibility(var12);
}
{
{ /* Inline kernel#Object#== (var_v,var13) on <var_v:MVisibility> */
var_other = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var18 = var_v == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var19 = glob_sys;
{
var20 = nit__model_base___standard__Sys___private_visibility(var19);
}
{
var21 = standard___standard__Comparable____62d(var_visibility, var20);
}
var = var21;
goto RET_LABEL;
} else {
var22 = glob_sys;
{
var23 = nit__model_base___standard__Sys___private_visibility(var22);
}
{
{ /* Inline kernel#Object#== (var_v,var23) on <var_v:MVisibility> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var28 = var_v == var_other;
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
if (var24){
var29 = glob_sys;
{
var30 = nit__model_base___standard__Sys___private_visibility(var29);
}
{
var31 = standard___standard__Comparable____62d(var_visibility, var30);
}
var = var31;
goto RET_LABEL;
} else {
var32 = glob_sys;
{
var33 = nit__model_base___standard__Sys___none_visibility(var32);
}
{
{ /* Inline kernel#Object#== (var_v,var33) on <var_v:MVisibility> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var38 = var_v == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var = 0;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 234);
fatal_exit(1);
}
}
}
}
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_fictive for (self: MModule): Bool */
short int nit___nit__MModule___is_fictive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___is_fictive].s; /* _is_fictive on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#is_fictive= for (self: MModule, Bool) */
void nit___nit__MModule___is_fictive_61d(val* self, short int p0) {
self->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = p0; /* _is_fictive on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#is_test_suite= for (self: MModule, Bool) */
void nit___nit__MModule___is_test_suite_61d(val* self, short int p0) {
self->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s = p0; /* _is_test_suite on <self:MModule> */
RET_LABEL:;
}
/* method mmodule#MModule#first_real_mmodule for (self: MModule): MModule */
val* nit___nit__MModule___first_real_mmodule(val* self) {
val* var /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : POSetElement[MModule] */;
val* var6 /* : POSetElement[MModule] */;
val* var7 /* : Collection[nullable Object] */;
val* var8 /* : nullable Object */;
var_mmodule = self;
for(;;) {
{
{ /* Inline mmodule#MModule#is_fictive (var_mmodule) on <var_mmodule:MModule> */
var3 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___is_fictive].s; /* _is_fictive on <var_mmodule:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var6 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = poset___poset__POSetElement___direct_greaters(var4);
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var7); /* first on <var7:Collection[nullable Object](Collection[MModule])>*/
}
var_mmodule = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
