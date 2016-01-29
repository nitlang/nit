#include "nitc__mpackage.sep.0.h"
/* method mpackage#MPackage#name for (self: MPackage): String */
val* nitc___nitc__MPackage___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <self:MPackage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MPackage#name= for (self: MPackage, String) */
void nitc___nitc__MPackage___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MPackage___name].val = p0; /* _name on <self:MPackage> */
RET_LABEL:;
}
/* method mpackage#MPackage#full_name for (self: MPackage): String */
val* nitc___nitc__MPackage___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mpackage#MPackage#name (self) on <self:MPackage> */
var3 = self->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <self:MPackage> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
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
/* method mpackage#MPackage#c_name for (self: MPackage): String */
val* nitc___nitc__MPackage___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
var1 = self->attrs[COLOR_nitc__mpackage__MPackage___c_name].val != NULL; /* _c_name on <self:MPackage> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__mpackage__MPackage___c_name].val; /* _c_name on <self:MPackage> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 32);
fatal_exit(1);
}
} else {
{
{ /* Inline mpackage#MPackage#name (self) on <self:MPackage> */
var5 = self->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <self:MPackage> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__Text___to_cmangle(var3);
}
self->attrs[COLOR_nitc__mpackage__MPackage___c_name].val = var6; /* _c_name on <self:MPackage> */
var2 = var6;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mpackage#MPackage#model for (self: MPackage): Model */
val* nitc___nitc__MPackage___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__mpackage__MPackage___model].val; /* _model on <self:MPackage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MPackage#model= for (self: MPackage, Model) */
void nitc___nitc__MPackage___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MPackage___model].val = p0; /* _model on <self:MPackage> */
RET_LABEL:;
}
/* method mpackage#MPackage#root for (self: MPackage): nullable MGroup */
val* nitc___nitc__MPackage___root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <self:MPackage> */
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MPackage#root= for (self: MPackage, nullable MGroup) */
void nitc___nitc__MPackage___root_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MPackage___root].val = p0; /* _root on <self:MPackage> */
RET_LABEL:;
}
/* method mpackage#MPackage#mgroups for (self: MPackage): POSet[MGroup] */
val* nitc___nitc__MPackage___mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
var1 = self->attrs[COLOR_nitc__mpackage__MPackage___mgroups].val; /* _mgroups on <self:MPackage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MPackage#to_s for (self: MPackage): String */
val* nitc___nitc__MPackage___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mpackage#MPackage#name (self) on <self:MPackage> */
var3 = self->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <self:MPackage> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
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
/* method mpackage#MPackage#init for (self: MPackage) */
void nitc___nitc__MPackage___core__kernel__Object__init(val* self) {
val* var /* : Model */;
val* var2 /* : Model */;
val* var3 /* : Array[MPackage] */;
val* var5 /* : Array[MPackage] */;
val* var6 /* : Model */;
val* var8 /* : Model */;
val* var9 /* : MultiHashMap[String, MPackage] */;
val* var11 /* : MultiHashMap[String, MPackage] */;
val* var12 /* : String */;
val* var14 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MPackage___core__kernel__Object__init]))(self); /* init on <self:MPackage>*/
}
{
{ /* Inline mpackage#MPackage#model (self) on <self:MPackage> */
var2 = self->attrs[COLOR_nitc__mpackage__MPackage___model].val; /* _model on <self:MPackage> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 34);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mpackage#Model#mpackages (var) on <var:Model> */
var5 = var->attrs[COLOR_nitc__mpackage__Model___mpackages].val; /* _mpackages on <var:Model> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 117);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[MPackage]>*/
}
{
{ /* Inline mpackage#MPackage#model (self) on <self:MPackage> */
var8 = self->attrs[COLOR_nitc__mpackage__MPackage___model].val; /* _model on <self:MPackage> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 34);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mpackage#Model#mpackage_by_name (var6) on <var6:Model> */
var11 = var6->attrs[COLOR_nitc__mpackage__Model___mpackage_by_name].val; /* _mpackage_by_name on <var6:Model> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 120);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#name (self) on <self:MPackage> */
var14 = self->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <self:MPackage> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var9, var12, self); /* Direct call more_collections#MultiHashMap#add_one on <var9:MultiHashMap[String, MPackage]>*/
}
RET_LABEL:;
}
/* method mpackage#MGroup#name for (self: MGroup): String */
val* nitc___nitc__MGroup___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MGroup#name= for (self: MGroup, String) */
void nitc___nitc__MGroup___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MGroup___name].val = p0; /* _name on <self:MGroup> */
RET_LABEL:;
}
/* method mpackage#MGroup#mpackage for (self: MGroup): MPackage */
val* nitc___nitc__MGroup___mpackage(val* self) {
val* var /* : MPackage */;
val* var1 /* : MPackage */;
var1 = self->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MGroup#mpackage= for (self: MGroup, MPackage) */
void nitc___nitc__MGroup___mpackage_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val = p0; /* _mpackage on <self:MGroup> */
RET_LABEL:;
}
/* method mpackage#MGroup#parent for (self: MGroup): nullable MGroup */
val* nitc___nitc__MGroup___parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nitc__mpackage__MGroup___parent].val; /* _parent on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MGroup#parent= for (self: MGroup, nullable MGroup) */
void nitc___nitc__MGroup___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MGroup___parent].val = p0; /* _parent on <self:MGroup> */
RET_LABEL:;
}
/* method mpackage#MGroup#full_name for (self: MGroup): String */
val* nitc___nitc__MGroup___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_p /* var p: nullable MGroup */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
{
{ /* Inline mpackage#MGroup#parent (self) on <self:MGroup> */
var3 = self->attrs[COLOR_nitc__mpackage__MGroup___parent].val; /* _parent on <self:MGroup> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_p = var1;
if (var_p == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MGroup(MGroup)> */
var9 = var_p == var_other;
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
{ /* Inline mpackage#MGroup#name (self) on <self:MGroup> */
var12 = self->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
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
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "/";
var17 = core__flat___NativeString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[1]=var15;
} else {
var13 = varonce;
varonce = NULL;
}
{
var18 = nitc___nitc__MGroup___nitc__model_base__MEntity__full_name(var_p);
}
((struct instance_core__NativeArray*)var13)->values[0]=var18;
{
{ /* Inline mpackage#MGroup#name (self) on <self:MGroup> */
var21 = self->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
((struct instance_core__NativeArray*)var13)->values[2]=var19;
{
var22 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mpackage#MGroup#in_nesting for (self: MGroup): POSetElement[MGroup] */
val* nitc___nitc__MGroup___in_nesting(val* self) {
val* var /* : POSetElement[MGroup] */;
val* var1 /* : POSetElement[MGroup] */;
var1 = self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val; /* _in_nesting on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_nesting");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MGroup#in_nesting= for (self: MGroup, POSetElement[MGroup]) */
void nitc___nitc__MGroup___in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val = p0; /* _in_nesting on <self:MGroup> */
RET_LABEL:;
}
/* method mpackage#MGroup#filepath for (self: MGroup): nullable String */
val* nitc___nitc__MGroup___filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__mpackage__MGroup___filepath].val; /* _filepath on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#MGroup#filepath= for (self: MGroup, nullable String) */
void nitc___nitc__MGroup___filepath_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mpackage__MGroup___filepath].val = p0; /* _filepath on <self:MGroup> */
RET_LABEL:;
}
/* method mpackage#MGroup#init for (self: MGroup) */
void nitc___nitc__MGroup___core__kernel__Object__init(val* self) {
val* var /* : MPackage */;
val* var2 /* : MPackage */;
val* var3 /* : POSet[MGroup] */;
val* var5 /* : POSet[MGroup] */;
val* var_tree /* var tree: POSet[MGroup] */;
val* var6 /* : POSetElement[nullable Object] */;
val* var8 /* : nullable MGroup */;
val* var10 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MGroup___core__kernel__Object__init]))(self); /* init on <self:MGroup>*/
}
{
{ /* Inline mpackage#MGroup#mpackage (self) on <self:MGroup> */
var2 = self->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <self:MGroup> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#mgroups (var) on <var:MPackage> */
var5 = var->attrs[COLOR_nitc__mpackage__MPackage___mgroups].val; /* _mgroups on <var:MPackage> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 40);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_tree = var3;
{
var6 = poset___poset__POSet___add_node(var_tree, self);
}
{
{ /* Inline mpackage#MGroup#in_nesting= (self,var6) on <self:MGroup> */
self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val = var6; /* _in_nesting on <self:MGroup> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#parent (self) on <self:MGroup> */
var10 = self->attrs[COLOR_nitc__mpackage__MGroup___parent].val; /* _parent on <self:MGroup> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_parent = var8;
if (var_parent == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parent,((val*)NULL)) on <var_parent:nullable MGroup> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_parent, var_other); /* == on <var_parent:nullable MGroup(MGroup)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
poset___poset__POSet___add_edge(var_tree, self, var_parent); /* Direct call poset#POSet#add_edge on <var_tree:POSet[MGroup]>*/
}
} else {
}
RET_LABEL:;
}
/* method mpackage#MGroup#model for (self: MGroup): Model */
val* nitc___nitc__MGroup___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MPackage */;
val* var3 /* : MPackage */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline mpackage#MGroup#mpackage (self) on <self:MGroup> */
var3 = self->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#model (var1) on <var1:MPackage> */
var6 = var1->attrs[COLOR_nitc__mpackage__MPackage___model].val; /* _model on <var1:MPackage> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 34);
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
/* method mpackage#MGroup#to_s for (self: MGroup): String */
val* nitc___nitc__MGroup___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mpackage#MGroup#name (self) on <self:MGroup> */
var3 = self->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 65);
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
/* method mpackage#Model#mpackages for (self: Model): Array[MPackage] */
val* nitc__mpackage___Model___mpackages(val* self) {
val* var /* : Array[MPackage] */;
val* var1 /* : Array[MPackage] */;
var1 = self->attrs[COLOR_nitc__mpackage__Model___mpackages].val; /* _mpackages on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 117);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mpackage#Model#mpackage_by_name for (self: Model): MultiHashMap[String, MPackage] */
val* nitc__mpackage___Model___mpackage_by_name(val* self) {
val* var /* : MultiHashMap[String, MPackage] */;
val* var1 /* : MultiHashMap[String, MPackage] */;
var1 = self->attrs[COLOR_nitc__mpackage__Model___mpackage_by_name].val; /* _mpackage_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 120);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
