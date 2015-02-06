#include "nit__mmodule.sep.0.h"
/* method mmodule#Model#mmodules for (self: Model): Array[MModule] */
val* nit__mmodule___Model___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__Model___mmodules].val; /* _mmodules on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 27);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var9 /* : null */;
var_name = p0;
{
{ /* Inline mmodule#Model#mmodules_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__MapRead___has_key(var1, var_name);
}
if (var4){
{
{ /* Inline mmodule#Model#mmodules_by_name (self) on <self:Model> */
var7 = self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 33);
show_backtrace(1);
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
var9 = NULL;
var = var9;
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : null */;
val* var12 /* : MProject */;
val* var14 /* : MProject */;
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_g = var1;
var4 = NULL;
if (var_g == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_g,var4) on <var_g:nullable MGroup> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_g,var_other) on <var_g:nullable MGroup(MGroup)> */
var10 = var_g == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = NULL;
var = var11;
goto RET_LABEL;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_g) on <var_g:nullable MGroup(MGroup)> */
var14 = var_g->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var = var12;
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
show_backtrace(1);
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
show_backtrace(1);
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
/* method mmodule#MModule#in_importation for (self: MModule): POSetElement[MModule] */
val* nit___nit__MModule___in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : MProject */;
val* var18 /* : MProject */;
val* var19 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var24 /* : String */;
short int var25 /* : Bool */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : MProject */;
val* var31 /* : MProject */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___full_name].val != NULL; /* _full_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mmodule__MModule___full_name].val; /* _full_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 99);
show_backtrace(1);
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
var9 = NULL;
if (var_mgroup == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,var9) on <var_mgroup:nullable MGroup> */
var_other = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
var15 = var_mgroup == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
var_ = var10;
if (var10){
var8 = var_;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var18 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var16) on <var16:MProject> */
var21 = var16->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var16:MProject> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var24 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var22) /* == on <var19:String>*/;
}
var8 = var25;
}
if (var8){
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var28 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var3 = var26;
goto RET_LABEL4;
} else {
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var31 = var_mgroup->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var29) on <var29:MProject> */
var34 = var29->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var29:MProject> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce) {
var35 = varonce;
} else {
var36 = "::";
var37 = 2;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var41 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 3;
var44 = NEW_standard__NativeArray(var43, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var44)->values[0] = (val*) var32;
((struct instance_standard__NativeArray*)var44)->values[1] = (val*) var35;
((struct instance_standard__NativeArray*)var44)->values[2] = (val*) var39;
{
((void (*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_standard__array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val* self))(var42->class->vft[COLOR_standard__string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
var3 = var45;
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
val* var1 /* : MVisibility */;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var4 /* : nullable MGroup */;
val* var6 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var7 /* : null */;
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
{
var1 = nit__model_base___standard__Object___private_visibility(self);
}
{
var2 = standard___standard__Comparable____60d_61d(var_v, var1);
}
if (var2){
{
var3 = nit___nit__MModule___nit__model_base__MEntity__full_name(self);
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var6 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mgroup = var4;
var7 = NULL;
if (var_mgroup == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,var7) on <var_mgroup:nullable MGroup> */
var_other = var7;
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
show_backtrace(1);
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : MProject */;
val* var17 /* : MProject */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var23 /* : String */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MProject */;
val* var30 /* : MProject */;
val* var31 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var_res /* var res: nullable Object */;
val* var45 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
var1 = self->attrs[COLOR_nit__mmodule__MModule___c_name].val != NULL; /* _c_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mmodule__MModule___c_name].val; /* _c_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 131);
show_backtrace(1);
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
var9 = NULL;
if (var_g == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,var9) on <var_g:nullable MGroup> */
var_other = var9;
{
var13 = ((short int (*)(val* self, val* p0))(var_g->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_g, var_other) /* == on <var_g:nullable MGroup(MGroup)>*/;
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
var_ = var10;
if (var10){
{
{ /* Inline mproject#MGroup#mproject (var_g) on <var_g:nullable MGroup(MGroup)> */
var17 = var_g->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var18,var21) on <var18:String> */
var_other = var21;
{
var26 = ((short int (*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_other) /* == on <var18:String>*/;
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var8 = var24;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline mproject#MGroup#mproject (var_g) on <var_g:nullable MGroup(MGroup)> */
var30 = var_g->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (var28) on <var28:MProject> */
var33 = var28->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <var28:MProject> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard___standard__Text___to_cmangle(var31);
}
if (varonce) {
var35 = varonce;
} else {
var36 = "__";
var37 = 2;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
{
var39 = ((val* (*)(val* self, val* p0))(var34->class->vft[COLOR_standard__string__String___43d]))(var34, var35) /* + on <var34:String>*/;
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var42 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = standard___standard__Text___to_cmangle(var40);
}
{
var44 = ((val* (*)(val* self, val* p0))(var39->class->vft[COLOR_standard__string__String___43d]))(var39, var43) /* + on <var39:String>*/;
}
var_res = var44;
} else {
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var47 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = standard___standard__Text___to_cmangle(var45);
}
var_res = var48;
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
val* var1 /* : MVisibility */;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var4 /* : nullable MGroup */;
val* var6 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var7 /* : null */;
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
{
var1 = nit__model_base___standard__Object___private_visibility(self);
}
{
var2 = standard___standard__Comparable____60d_61d(var_v, var1);
}
if (var2){
{
var3 = nit___nit__MModule___nit__model_base__MEntity__c_name(self);
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var6 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mgroup = var4;
var7 = NULL;
if (var_mgroup == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup,var7) on <var_mgroup:nullable MGroup> */
var_other = var7;
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
show_backtrace(1);
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
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable MGroup */;
val* var26 /* : nullable MGroup */;
val* var27 /* : Array[MModule] */;
val* var29 /* : Array[MModule] */;
val* var30 /* : nullable MGroup */;
val* var32 /* : nullable MGroup */;
val* var33 /* : String */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var38 /* : String */;
short int var39 /* : Bool */;
val* var40 /* : nullable MGroup */;
val* var42 /* : nullable MGroup */;
val* var43 /* : nullable MModule */;
val* var45 /* : nullable MModule */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var_other50 /* var other: nullable Object */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable MGroup */;
val* var56 /* : nullable MGroup */;
val* var58 /* : Model */;
val* var60 /* : Model */;
val* var61 /* : POSet[MModule] */;
val* var63 /* : POSet[MModule] */;
val* var64 /* : POSetElement[nullable Object] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MModule___standard__kernel__Object__init]))(self) /* init on <self:MModule>*/;
}
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var2 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
var18 = NULL;
if (var15 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var15,var18) on <var15:nullable MGroup> */
var_other = var18;
{
var22 = ((short int (*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_other) /* == on <var15:nullable MGroup(MGroup)>*/;
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var26 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 164);
show_backtrace(1);
} else {
{ /* Inline mmodule#MGroup#mmodules (var24) on <var24:nullable MGroup> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 51);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_nit__mmodule__MGroup___mmodules].val; /* _mmodules on <var24:nullable MGroup> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 51);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var27, self); /* Direct call array#Array#add on <var27:Array[MModule]>*/
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var32 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 165);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#name (var30) on <var30:nullable MGroup> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var35 = var30->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <var30:nullable MGroup> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var38 = self->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = ((short int (*)(val* self, val* p0))(var33->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var33, var36) /* == on <var33:String>*/;
}
if (var39){
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var42 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 166);
show_backtrace(1);
} else {
{ /* Inline mmodule#MGroup#default_mmodule (var40) on <var40:nullable MGroup> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 54);
show_backtrace(1);
}
var45 = var40->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val; /* _default_mmodule on <var40:nullable MGroup> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = NULL;
if (var43 == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var43,var46) on <var43:nullable MModule> */
var_other50 = var46;
{
{ /* Inline kernel#Object#is_same_instance (var43,var_other50) on <var43:nullable MModule(MModule)> */
var53 = var43 == var_other50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (unlikely(!var47)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 166);
show_backtrace(1);
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var56 = self->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 167);
show_backtrace(1);
} else {
{ /* Inline mmodule#MGroup#default_mmodule= (var54,self) on <var54:nullable MGroup> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 54);
show_backtrace(1);
}
var54->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val = self; /* _default_mmodule on <var54:nullable MGroup> */
RET_LABEL57:(void)0;
}
}
} else {
}
} else {
}
{
{ /* Inline mmodule#MModule#model (self) on <self:MModule> */
var60 = self->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var58) on <var58:Model> */
var63 = var58->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var58:Model> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 30);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = poset___poset__POSet___add_node(var61, self);
}
{
{ /* Inline mmodule#MModule#in_importation= (self,var64) on <self:MModule> */
self->attrs[COLOR_nit__mmodule__MModule___in_importation].val = var64; /* _in_importation on <self:MModule> */
RET_LABEL65:(void)0;
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
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = poset___poset__POSetElement___direct_greaters(var);
}
{
var4 = ((short int (*)(val* self))(var3->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var3) /* is_empty on <var3:Collection[nullable Object](Collection[MModule])>*/;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert \'unique_invocation\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 178);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:ArrayIterator[MModule]> */
RET_LABEL15:(void)0;
}
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var6 /* : MVisibility */;
val* var7 /* : HashSet[MModule] */;
val* var9 /* : HashSet[MModule] */;
short int var10 /* : Bool */;
val* var11 /* : MVisibility */;
val* var12 /* : HashSet[MModule] */;
val* var14 /* : HashSet[MModule] */;
short int var15 /* : Bool */;
val* var16 /* : MVisibility */;
val* var17 /* : HashSet[MModule] */;
val* var19 /* : HashSet[MModule] */;
short int var20 /* : Bool */;
val* var21 /* : MVisibility */;
val* var22 /* : MVisibility */;
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
{
var6 = nit__model_base___standard__Object___intrude_visibility(self);
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var9 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var7, var_m);
}
if (var10){
{
var11 = nit__model_base___standard__Object___intrude_visibility(self);
}
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var14 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var12, var_m);
}
if (var15){
{
var16 = nit__model_base___standard__Object___public_visibility(self);
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var19 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var17, var_m);
}
if (var20){
{
var21 = nit__model_base___standard__Object___private_visibility(self);
}
var = var21;
goto RET_LABEL;
} else {
}
{
var22 = nit__model_base___standard__Object___none_visibility(self);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule#MModule#set_visibility_for for (self: MModule, MModule, MVisibility) */
void nit___nit__MModule___set_visibility_for(val* self, val* p0, val* p1) {
val* var_m /* var m: MModule */;
val* var_v /* var v: MVisibility */;
val* var /* : MVisibility */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[MModule] */;
val* var8 /* : HashSet[MModule] */;
val* var9 /* : HashSet[MModule] */;
val* var11 /* : HashSet[MModule] */;
val* var12 /* : HashSet[MModule] */;
val* var14 /* : HashSet[MModule] */;
val* var15 /* : HashSet[MModule] */;
val* var17 /* : HashSet[MModule] */;
val* var18 /* : HashSet[MModule] */;
val* var20 /* : HashSet[MModule] */;
val* var21 /* : HashSet[MModule] */;
val* var23 /* : HashSet[MModule] */;
val* var24 /* : HashSet[MModule] */;
val* var26 /* : HashSet[MModule] */;
val* var27 /* : MVisibility */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : HashSet[MModule] */;
val* var35 /* : HashSet[MModule] */;
val* var36 /* : HashSet[MModule] */;
val* var38 /* : HashSet[MModule] */;
val* var39 /* : HashSet[MModule] */;
val* var41 /* : HashSet[MModule] */;
val* var42 /* : HashSet[MModule] */;
val* var44 /* : HashSet[MModule] */;
val* var45 /* : HashSet[MModule] */;
val* var47 /* : HashSet[MModule] */;
val* var48 /* : MVisibility */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : HashSet[MModule] */;
val* var56 /* : HashSet[MModule] */;
val* var57 /* : HashSet[MModule] */;
val* var59 /* : HashSet[MModule] */;
val* var60 /* : HashSet[MModule] */;
val* var62 /* : HashSet[MModule] */;
val* var63 /* : HashSet[MModule] */;
val* var65 /* : HashSet[MModule] */;
val* var66 /* : HashSet[MModule] */;
val* var68 /* : HashSet[MModule] */;
static val* varonce;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
var_m = p0;
var_v = p1;
{
var = nit__model_base___standard__Object___intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var) on <var_v:MVisibility> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var5 = var_v == var_other;
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
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var8 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var6, var_m); /* Direct call hash_collection#HashSet#add on <var6:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (self) on <self:MModule> */
var11 = self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var14 = var_m->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var9, var12); /* Direct call abstract_collection#SimpleCollection#add_all on <var9:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var17 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var20 = var_m->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var15, var18); /* Direct call abstract_collection#SimpleCollection#add_all on <var15:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var23 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline mmodule#MModule#private_mmodules (var_m) on <var_m:MModule> */
var26 = var_m->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <var_m:MModule> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var21, var24); /* Direct call abstract_collection#SimpleCollection#add_all on <var21:HashSet[MModule]>*/
}
} else {
{
var27 = nit__model_base___standard__Object___public_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var27) on <var_v:MVisibility> */
var_other = var27;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var32 = var_v == var_other;
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
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var35 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var33, var_m); /* Direct call hash_collection#HashSet#add on <var33:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var38 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var41 = var_m->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var36, var39); /* Direct call abstract_collection#SimpleCollection#add_all on <var36:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#public_mmodules (self) on <self:MModule> */
var44 = self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var47 = var_m->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var42, var45); /* Direct call abstract_collection#SimpleCollection#add_all on <var42:HashSet[MModule]>*/
}
} else {
{
var48 = nit__model_base___standard__Object___private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var48) on <var_v:MVisibility> */
var_other = var48;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var53 = var_v == var_other;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var56 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var54, var_m); /* Direct call hash_collection#HashSet#add on <var54:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var59 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline mmodule#MModule#intrude_mmodules (var_m) on <var_m:MModule> */
var62 = var_m->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 184);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var57, var60); /* Direct call abstract_collection#SimpleCollection#add_all on <var57:HashSet[MModule]>*/
}
{
{ /* Inline mmodule#MModule#private_mmodules (self) on <self:MModule> */
var65 = self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 186);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline mmodule#MModule#public_mmodules (var_m) on <var_m:MModule> */
var68 = var_m->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 185);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
standard___standard__SimpleCollection___add_all(var63, var66); /* Direct call abstract_collection#SimpleCollection#add_all on <var63:HashSet[MModule]>*/
}
} else {
if (varonce) {
var69 = varonce;
} else {
var70 = " visibility for ";
var71 = 16;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " = ";
var76 = 3;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 5;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) self;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var69;
((struct instance_standard__NativeArray*)var80)->values[2] = (val*) var_m;
((struct instance_standard__NativeArray*)var80)->values[3] = (val*) var74;
((struct instance_standard__NativeArray*)var80)->values[4] = (val*) var_v;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
standard__file___Object___print(self, var81); /* Direct call file#Object#print on <self:MModule>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 217);
show_backtrace(1);
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
val* var2 /* : MVisibility */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
short int var9 /* : Bool */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MVisibility */;
short int var17 /* : Bool */;
val* var18 /* : MVisibility */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : MVisibility */;
short int var25 /* : Bool */;
val* var26 /* : MVisibility */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_intro_mmodule = p0;
var_visibility = p1;
{
var1 = nit___nit__MModule___visibility_for(self, var_intro_mmodule);
}
var_v = var1;
{
var2 = nit__model_base___standard__Object___intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var2) on <var_v:MVisibility> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var7 = var_v == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var8 = nit__model_base___standard__Object___private_visibility(self);
}
{
var9 = standard___standard__Comparable____62d_61d(var_visibility, var8);
}
var = var9;
goto RET_LABEL;
} else {
{
var10 = nit__model_base___standard__Object___public_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var10) on <var_v:MVisibility> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var15 = var_v == var_other;
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
var16 = nit__model_base___standard__Object___private_visibility(self);
}
{
var17 = standard___standard__Comparable____62d(var_visibility, var16);
}
var = var17;
goto RET_LABEL;
} else {
{
var18 = nit__model_base___standard__Object___private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var18) on <var_v:MVisibility> */
var_other = var18;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var23 = var_v == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
var24 = nit__model_base___standard__Object___private_visibility(self);
}
{
var25 = standard___standard__Comparable____62d(var_visibility, var24);
}
var = var25;
goto RET_LABEL;
} else {
{
var26 = nit__model_base___standard__Object___none_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_v,var26) on <var_v:MVisibility> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_v,var_other) on <var_v:MVisibility> */
var31 = var_v == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var32 = 0;
var = var32;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 234);
show_backtrace(1);
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
