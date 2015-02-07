#include "nit__mproject.sep.0.h"
/* method mproject#MProject#name for (self: MProject): String */
val* nit___nit__MProject___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#name= for (self: MProject, String) */
void nit___nit__MProject___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___name].val = p0; /* _name on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#full_name for (self: MProject): String */
val* nit___nit__MProject___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mproject#MProject#name (self) on <self:MProject> */
var3 = self->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
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
/* method mproject#MProject#c_name for (self: MProject): String */
val* nit___nit__MProject___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
var1 = self->attrs[COLOR_nit__mproject__MProject___c_name].val != NULL; /* _c_name on <self:MProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__mproject__MProject___c_name].val; /* _c_name on <self:MProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 32);
show_backtrace(1);
}
} else {
{
{ /* Inline mproject#MProject#name (self) on <self:MProject> */
var5 = self->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__Text___to_cmangle(var3);
}
self->attrs[COLOR_nit__mproject__MProject___c_name].val = var6; /* _c_name on <self:MProject> */
var2 = var6;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model for (self: MProject): Model */
val* nit___nit__MProject___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__mproject__MProject___model].val; /* _model on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model= for (self: MProject, Model) */
void nit___nit__MProject___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___model].val = p0; /* _model on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#root for (self: MProject): nullable MGroup */
val* nit___nit__MProject___root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nit__mproject__MProject___root].val; /* _root on <self:MProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#root= for (self: MProject, nullable MGroup) */
void nit___nit__MProject___root_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MProject___root].val = p0; /* _root on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#mgroups for (self: MProject): POSet[MGroup] */
val* nit___nit__MProject___mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
var1 = self->attrs[COLOR_nit__mproject__MProject___mgroups].val; /* _mgroups on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#to_s for (self: MProject): String */
val* nit___nit__MProject___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mproject#MProject#name (self) on <self:MProject> */
var3 = self->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
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
/* method mproject#MProject#init for (self: MProject) */
void nit___nit__MProject___standard__kernel__Object__init(val* self) {
val* var /* : Model */;
val* var2 /* : Model */;
val* var3 /* : Array[MProject] */;
val* var5 /* : Array[MProject] */;
val* var6 /* : Model */;
val* var8 /* : Model */;
val* var9 /* : MultiHashMap[String, MProject] */;
val* var11 /* : MultiHashMap[String, MProject] */;
val* var12 /* : String */;
val* var14 /* : String */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MProject___standard__kernel__Object__init]))(self) /* init on <self:MProject>*/;
}
{
{ /* Inline mproject#MProject#model (self) on <self:MProject> */
var2 = self->attrs[COLOR_nit__mproject__MProject___model].val; /* _model on <self:MProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 34);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mproject#Model#mprojects (var) on <var:Model> */
var5 = var->attrs[COLOR_nit__mproject__Model___mprojects].val; /* _mprojects on <var:Model> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprojects");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 117);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[MProject]>*/
}
{
{ /* Inline mproject#MProject#model (self) on <self:MProject> */
var8 = self->attrs[COLOR_nit__mproject__MProject___model].val; /* _model on <self:MProject> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 34);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mproject#Model#mproject_by_name (var6) on <var6:Model> */
var11 = var6->attrs[COLOR_nit__mproject__Model___mproject_by_name].val; /* _mproject_by_name on <var6:Model> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 120);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mproject#MProject#name (self) on <self:MProject> */
var14 = self->attrs[COLOR_nit__mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 27);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var9, var12, self); /* Direct call more_collections#MultiHashMap#add_one on <var9:MultiHashMap[String, MProject]>*/
}
RET_LABEL:;
}
/* method mproject#MGroup#name for (self: MGroup): String */
val* nit___nit__MGroup___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name= for (self: MGroup, String) */
void nit___nit__MGroup___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___name].val = p0; /* _name on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#mproject for (self: MGroup): MProject */
val* nit___nit__MGroup___mproject(val* self) {
val* var /* : MProject */;
val* var1 /* : MProject */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#mproject= for (self: MGroup, MProject) */
void nit___nit__MGroup___mproject_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___mproject].val = p0; /* _mproject on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#parent for (self: MGroup): nullable MGroup */
val* nit___nit__MGroup___parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___parent].val; /* _parent on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent= for (self: MGroup, nullable MGroup) */
void nit___nit__MGroup___parent_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___parent].val = p0; /* _parent on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#full_name for (self: MGroup): String */
val* nit___nit__MGroup___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_p /* var p: nullable MGroup */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
static val* varonce;
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
{
{ /* Inline mproject#MGroup#parent (self) on <self:MGroup> */
var3 = self->attrs[COLOR_nit__mproject__MGroup___parent].val; /* _parent on <self:MGroup> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_p = var1;
var4 = NULL;
if (var_p == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,var4) on <var_p:nullable MGroup> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MGroup(MGroup)> */
var10 = var_p == var_other;
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
{
{ /* Inline mproject#MGroup#name (self) on <self:MGroup> */
var13 = self->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var = var11;
goto RET_LABEL;
} else {
}
{
var14 = nit___nit__MGroup___nit__model_base__MEntity__full_name(var_p);
}
if (varonce) {
var15 = varonce;
} else {
var16 = "/";
var17 = 1;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline mproject#MGroup#name (self) on <self:MGroup> */
var21 = self->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_standard__NativeArray(var23, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var24)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var24)->values[1] = (val*) var15;
((struct instance_standard__NativeArray*)var24)->values[2] = (val*) var19;
{
((void (*)(val* self, val* p0, long p1))(var22->class->vft[COLOR_standard__array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val* self))(var22->class->vft[COLOR_standard__string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting= for (self: MGroup, POSetElement[MGroup]) */
void nit___nit__MGroup___in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___in_nesting].val = p0; /* _in_nesting on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#filepath for (self: MGroup): nullable String */
val* nit___nit__MGroup___filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__mproject__MGroup___filepath].val; /* _filepath on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath= for (self: MGroup, nullable String) */
void nit___nit__MGroup___filepath_61d(val* self, val* p0) {
self->attrs[COLOR_nit__mproject__MGroup___filepath].val = p0; /* _filepath on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#init for (self: MGroup) */
void nit___nit__MGroup___standard__kernel__Object__init(val* self) {
val* var /* : MProject */;
val* var2 /* : MProject */;
val* var3 /* : POSet[MGroup] */;
val* var5 /* : POSet[MGroup] */;
val* var_tree /* var tree: POSet[MGroup] */;
val* var6 /* : POSetElement[nullable Object] */;
val* var8 /* : nullable MGroup */;
val* var10 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MGroup___standard__kernel__Object__init]))(self) /* init on <self:MGroup>*/;
}
{
{ /* Inline mproject#MGroup#mproject (self) on <self:MGroup> */
var2 = self->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <self:MGroup> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mproject#MProject#mgroups (var) on <var:MProject> */
var5 = var->attrs[COLOR_nit__mproject__MProject___mgroups].val; /* _mgroups on <var:MProject> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 40);
show_backtrace(1);
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
{ /* Inline mproject#MGroup#in_nesting= (self,var6) on <self:MGroup> */
self->attrs[COLOR_nit__mproject__MGroup___in_nesting].val = var6; /* _in_nesting on <self:MGroup> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mproject#MGroup#parent (self) on <self:MGroup> */
var10 = self->attrs[COLOR_nit__mproject__MGroup___parent].val; /* _parent on <self:MGroup> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_parent = var8;
var11 = NULL;
if (var_parent == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parent,var11) on <var_parent:nullable MGroup> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_parent->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_parent, var_other) /* == on <var_parent:nullable MGroup(MGroup)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
poset___poset__POSet___add_edge(var_tree, self, var_parent); /* Direct call poset#POSet#add_edge on <var_tree:POSet[MGroup]>*/
}
} else {
}
RET_LABEL:;
}
/* method mproject#MGroup#model for (self: MGroup): Model */
val* nit___nit__MGroup___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MProject */;
val* var3 /* : MProject */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline mproject#MGroup#mproject (self) on <self:MGroup> */
var3 = self->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mproject#MProject#model (var1) on <var1:MProject> */
var6 = var1->attrs[COLOR_nit__mproject__MProject___model].val; /* _model on <var1:MProject> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 34);
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
/* method mproject#MGroup#to_s for (self: MGroup): String */
val* nit___nit__MGroup___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mproject#MGroup#name (self) on <self:MGroup> */
var3 = self->attrs[COLOR_nit__mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 65);
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
/* method mproject#Model#mprojects for (self: Model): Array[MProject] */
val* nit__mproject___Model___mprojects(val* self) {
val* var /* : Array[MProject] */;
val* var1 /* : Array[MProject] */;
var1 = self->attrs[COLOR_nit__mproject__Model___mprojects].val; /* _mprojects on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprojects");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 117);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mproject_by_name for (self: Model): MultiHashMap[String, MProject] */
val* nit__mproject___Model___mproject_by_name(val* self) {
val* var /* : MultiHashMap[String, MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
var1 = self->attrs[COLOR_nit__mproject__Model___mproject_by_name].val; /* _mproject_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 120);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
