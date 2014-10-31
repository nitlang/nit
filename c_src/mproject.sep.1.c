#include "mproject.sep.0.h"
/* method mproject#MProject#name for (self: MProject): String */
val* mproject__MProject__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#name for (self: Object): String */
val* VIRTUAL_mproject__MProject__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline mproject#MProject#name (self) on <self:Object(MProject)> */
var3 = self->attrs[COLOR_mproject__MProject___name].val; /* _name on <self:Object(MProject)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 26);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#name= for (self: MProject, String) */
void mproject__MProject__name_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___name].val = p0; /* _name on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#name= for (self: Object, String) */
void VIRTUAL_mproject__MProject__name_61d(val* self, val* p0) {
{ /* Inline mproject#MProject#name= (self,p0) on <self:Object(MProject)> */
self->attrs[COLOR_mproject__MProject___name].val = p0; /* _name on <self:Object(MProject)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MProject#model for (self: MProject): Model */
val* mproject__MProject__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_mproject__MProject___model].val; /* _model on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model for (self: Object): Model */
val* VIRTUAL_mproject__MProject__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
val* var3 /* : Model */;
{ /* Inline mproject#MProject#model (self) on <self:Object(MProject)> */
var3 = self->attrs[COLOR_mproject__MProject___model].val; /* _model on <self:Object(MProject)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 29);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model= for (self: MProject, Model) */
void mproject__MProject__model_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___model].val = p0; /* _model on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#model= for (self: Object, Model) */
void VIRTUAL_mproject__MProject__model_61d(val* self, val* p0) {
{ /* Inline mproject#MProject#model= (self,p0) on <self:Object(MProject)> */
self->attrs[COLOR_mproject__MProject___model].val = p0; /* _model on <self:Object(MProject)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MProject#root for (self: MProject): nullable MGroup */
val* mproject__MProject__root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_mproject__MProject___root].val; /* _root on <self:MProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#root for (self: Object): nullable MGroup */
val* VIRTUAL_mproject__MProject__root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
{ /* Inline mproject#MProject#root (self) on <self:Object(MProject)> */
var3 = self->attrs[COLOR_mproject__MProject___root].val; /* _root on <self:Object(MProject)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#root= for (self: MProject, nullable MGroup) */
void mproject__MProject__root_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___root].val = p0; /* _root on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#root= for (self: Object, nullable MGroup) */
void VIRTUAL_mproject__MProject__root_61d(val* self, val* p0) {
{ /* Inline mproject#MProject#root= (self,p0) on <self:Object(MProject)> */
self->attrs[COLOR_mproject__MProject___root].val = p0; /* _root on <self:Object(MProject)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MProject#mgroups for (self: MProject): POSet[MGroup] */
val* mproject__MProject__mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
var1 = self->attrs[COLOR_mproject__MProject___mgroups].val; /* _mgroups on <self:MProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 35);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#mgroups for (self: Object): POSet[MGroup] */
val* VIRTUAL_mproject__MProject__mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
val* var3 /* : POSet[MGroup] */;
{ /* Inline mproject#MProject#mgroups (self) on <self:Object(MProject)> */
var3 = self->attrs[COLOR_mproject__MProject___mgroups].val; /* _mgroups on <self:Object(MProject)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 35);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#to_s for (self: MProject): String */
val* mproject__MProject__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mproject#MProject#name (self) on <self:MProject> */
var3 = self->attrs[COLOR_mproject__MProject___name].val; /* _name on <self:MProject> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 26);
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
/* method mproject#MProject#to_s for (self: Object): String */
val* VIRTUAL_mproject__MProject__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MProject__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#init for (self: MProject, String, Model) */
void mproject__MProject__init(val* self, val* p0, val* p1) {
val* var_name /* var name: String */;
val* var_model /* var model: Model */;
val* var /* : Array[MProject] */;
val* var4 /* : Array[MProject] */;
val* var5 /* : MultiHashMap[String, MProject] */;
val* var7 /* : MultiHashMap[String, MProject] */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MProject>*/;
}
var_name = p0;
var_model = p1;
{
{ /* Inline mproject#MProject#name= (self,var_name) on <self:MProject> */
self->attrs[COLOR_mproject__MProject___name].val = var_name; /* _name on <self:MProject> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mproject#MProject#model= (self,var_model) on <self:MProject> */
self->attrs[COLOR_mproject__MProject___model].val = var_model; /* _model on <self:MProject> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mproject#Model#mprojects (var_model) on <var_model:Model> */
var4 = var_model->attrs[COLOR_mproject__Model___mprojects].val; /* _mprojects on <var_model:Model> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprojects");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 109);
show_backtrace(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
array__Array__add(var, self); /* Direct call array#Array#add on <var:Array[MProject]>*/
}
{
{ /* Inline mproject#Model#mproject_by_name (var_model) on <var_model:Model> */
var7 = var_model->attrs[COLOR_mproject__Model___mproject_by_name].val; /* _mproject_by_name on <var_model:Model> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 112);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
more_collections__MultiHashMap__add_one(var5, var_name, self); /* Direct call more_collections#MultiHashMap#add_one on <var5:MultiHashMap[String, MProject]>*/
}
RET_LABEL:;
}
/* method mproject#MProject#init for (self: Object, String, Model) */
void VIRTUAL_mproject__MProject__init(val* self, val* p0, val* p1) {
mproject__MProject__init(self, p0, p1); /* Direct call mproject#MProject#init on <self:Object(MProject)>*/
RET_LABEL:;
}
/* method mproject#MGroup#name for (self: MGroup): String */
val* mproject__MGroup__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name for (self: Object): String */
val* VIRTUAL_mproject__MGroup__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline mproject#MGroup#name (self) on <self:Object(MGroup)> */
var3 = self->attrs[COLOR_mproject__MGroup___name].val; /* _name on <self:Object(MGroup)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name= for (self: MGroup, String) */
void mproject__MGroup__name_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___name].val = p0; /* _name on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#name= for (self: Object, String) */
void VIRTUAL_mproject__MGroup__name_61d(val* self, val* p0) {
{ /* Inline mproject#MGroup#name= (self,p0) on <self:Object(MGroup)> */
self->attrs[COLOR_mproject__MGroup___name].val = p0; /* _name on <self:Object(MGroup)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MGroup#mproject for (self: MGroup): MProject */
val* mproject__MGroup__mproject(val* self) {
val* var /* : MProject */;
val* var1 /* : MProject */;
var1 = self->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 60);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#mproject for (self: Object): MProject */
val* VIRTUAL_mproject__MGroup__mproject(val* self) {
val* var /* : MProject */;
val* var1 /* : MProject */;
val* var3 /* : MProject */;
{ /* Inline mproject#MGroup#mproject (self) on <self:Object(MGroup)> */
var3 = self->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <self:Object(MGroup)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 60);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#mproject= for (self: MGroup, MProject) */
void mproject__MGroup__mproject_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___mproject].val = p0; /* _mproject on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#mproject= for (self: Object, MProject) */
void VIRTUAL_mproject__MGroup__mproject_61d(val* self, val* p0) {
{ /* Inline mproject#MGroup#mproject= (self,p0) on <self:Object(MGroup)> */
self->attrs[COLOR_mproject__MGroup___mproject].val = p0; /* _mproject on <self:Object(MGroup)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MGroup#parent for (self: MGroup): nullable MGroup */
val* mproject__MGroup__parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_mproject__MGroup___parent].val; /* _parent on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent for (self: Object): nullable MGroup */
val* VIRTUAL_mproject__MGroup__parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
{ /* Inline mproject#MGroup#parent (self) on <self:Object(MGroup)> */
var3 = self->attrs[COLOR_mproject__MGroup___parent].val; /* _parent on <self:Object(MGroup)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent= for (self: MGroup, nullable MGroup) */
void mproject__MGroup__parent_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___parent].val = p0; /* _parent on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#parent= for (self: Object, nullable MGroup) */
void VIRTUAL_mproject__MGroup__parent_61d(val* self, val* p0) {
{ /* Inline mproject#MGroup#parent= (self,p0) on <self:Object(MGroup)> */
self->attrs[COLOR_mproject__MGroup___parent].val = p0; /* _parent on <self:Object(MGroup)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MGroup#full_name for (self: MGroup): String */
val* mproject__MGroup__full_name(val* self) {
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
var3 = self->attrs[COLOR_mproject__MGroup___parent].val; /* _parent on <self:MGroup> */
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
var13 = self->attrs[COLOR_mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
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
var14 = mproject__MGroup__full_name(var_p);
}
if (varonce) {
var15 = varonce;
} else {
var16 = "/";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline mproject#MGroup#name (self) on <self:MGroup> */
var21 = self->attrs[COLOR_mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var19;
{
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#full_name for (self: Object): String */
val* VIRTUAL_mproject__MGroup__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MGroup__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting= for (self: MGroup, POSetElement[MGroup]) */
void mproject__MGroup__in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___in_nesting].val = p0; /* _in_nesting on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#in_nesting= for (self: Object, POSetElement[MGroup]) */
void VIRTUAL_mproject__MGroup__in_nesting_61d(val* self, val* p0) {
{ /* Inline mproject#MGroup#in_nesting= (self,p0) on <self:Object(MGroup)> */
self->attrs[COLOR_mproject__MGroup___in_nesting].val = p0; /* _in_nesting on <self:Object(MGroup)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MGroup#filepath for (self: MGroup): nullable String */
val* mproject__MGroup__filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_mproject__MGroup___filepath].val; /* _filepath on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath for (self: Object): nullable String */
val* VIRTUAL_mproject__MGroup__filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline mproject#MGroup#filepath (self) on <self:Object(MGroup)> */
var3 = self->attrs[COLOR_mproject__MGroup___filepath].val; /* _filepath on <self:Object(MGroup)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath= for (self: MGroup, nullable String) */
void mproject__MGroup__filepath_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___filepath].val = p0; /* _filepath on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#filepath= for (self: Object, nullable String) */
void VIRTUAL_mproject__MGroup__filepath_61d(val* self, val* p0) {
{ /* Inline mproject#MGroup#filepath= (self,p0) on <self:Object(MGroup)> */
self->attrs[COLOR_mproject__MGroup___filepath].val = p0; /* _filepath on <self:Object(MGroup)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method mproject#MGroup#init for (self: MGroup, String, MProject, nullable MGroup) */
void mproject__MGroup__init(val* self, val* p0, val* p1, val* p2) {
val* var_name /* var name: String */;
val* var_mproject /* var mproject: MProject */;
val* var_parent /* var parent: nullable MGroup */;
val* var /* : POSet[MGroup] */;
val* var5 /* : POSet[MGroup] */;
val* var_tree /* var tree: POSet[MGroup] */;
val* var6 /* : POSetElement[Object] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MGroup>*/;
}
var_name = p0;
var_mproject = p1;
var_parent = p2;
{
{ /* Inline mproject#MGroup#name= (self,var_name) on <self:MGroup> */
self->attrs[COLOR_mproject__MGroup___name].val = var_name; /* _name on <self:MGroup> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mproject#MGroup#mproject= (self,var_mproject) on <self:MGroup> */
self->attrs[COLOR_mproject__MGroup___mproject].val = var_mproject; /* _mproject on <self:MGroup> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mproject#MGroup#parent= (self,var_parent) on <self:MGroup> */
self->attrs[COLOR_mproject__MGroup___parent].val = var_parent; /* _parent on <self:MGroup> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline mproject#MProject#mgroups (var_mproject) on <var_mproject:MProject> */
var5 = var_mproject->attrs[COLOR_mproject__MProject___mgroups].val; /* _mgroups on <var_mproject:MProject> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 35);
show_backtrace(1);
}
var = var5;
RET_LABEL4:(void)0;
}
}
var_tree = var;
{
var6 = poset__POSet__add_node(var_tree, self);
}
{
{ /* Inline mproject#MGroup#in_nesting= (self,var6) on <self:MGroup> */
self->attrs[COLOR_mproject__MGroup___in_nesting].val = var6; /* _in_nesting on <self:MGroup> */
RET_LABEL7:(void)0;
}
}
var8 = NULL;
if (var_parent == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parent,var8) on <var_parent:nullable MGroup> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_parent->class->vft[COLOR_kernel__Object___61d_61d]))(var_parent, var_other) /* == on <var_parent:nullable MGroup(MGroup)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
poset__POSet__add_edge(var_tree, self, var_parent); /* Direct call poset#POSet#add_edge on <var_tree:POSet[MGroup]>*/
}
} else {
}
RET_LABEL:;
}
/* method mproject#MGroup#init for (self: Object, String, MProject, nullable MGroup) */
void VIRTUAL_mproject__MGroup__init(val* self, val* p0, val* p1, val* p2) {
mproject__MGroup__init(self, p0, p1, p2); /* Direct call mproject#MGroup#init on <self:Object(MGroup)>*/
RET_LABEL:;
}
/* method mproject#MGroup#model for (self: MGroup): Model */
val* mproject__MGroup__model(val* self) {
val* var /* : Model */;
val* var1 /* : MProject */;
val* var3 /* : MProject */;
val* var4 /* : Model */;
val* var6 /* : Model */;
{
{ /* Inline mproject#MGroup#mproject (self) on <self:MGroup> */
var3 = self->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 60);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline mproject#MProject#model (var1) on <var1:MProject> */
var6 = var1->attrs[COLOR_mproject__MProject___model].val; /* _model on <var1:MProject> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 29);
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
/* method mproject#MGroup#model for (self: Object): Model */
val* VIRTUAL_mproject__MGroup__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = mproject__MGroup__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#to_s for (self: MGroup): String */
val* mproject__MGroup__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mproject#MGroup#name (self) on <self:MGroup> */
var3 = self->attrs[COLOR_mproject__MGroup___name].val; /* _name on <self:MGroup> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
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
/* method mproject#MGroup#to_s for (self: Object): String */
val* VIRTUAL_mproject__MGroup__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MGroup__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects for (self: Model): Array[MProject] */
val* mproject__Model__mprojects(val* self) {
val* var /* : Array[MProject] */;
val* var1 /* : Array[MProject] */;
var1 = self->attrs[COLOR_mproject__Model___mprojects].val; /* _mprojects on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprojects");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 109);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects for (self: Object): Array[MProject] */
val* VIRTUAL_mproject__Model__mprojects(val* self) {
val* var /* : Array[MProject] */;
val* var1 /* : Array[MProject] */;
val* var3 /* : Array[MProject] */;
{ /* Inline mproject#Model#mprojects (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_mproject__Model___mprojects].val; /* _mprojects on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprojects");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 109);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mproject_by_name for (self: Model): MultiHashMap[String, MProject] */
val* mproject__Model__mproject_by_name(val* self) {
val* var /* : MultiHashMap[String, MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
var1 = self->attrs[COLOR_mproject__Model___mproject_by_name].val; /* _mproject_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 112);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mproject_by_name for (self: Object): MultiHashMap[String, MProject] */
val* VIRTUAL_mproject__Model__mproject_by_name(val* self) {
val* var /* : MultiHashMap[String, MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
val* var3 /* : MultiHashMap[String, MProject] */;
{ /* Inline mproject#Model#mproject_by_name (self) on <self:Object(Model)> */
var3 = self->attrs[COLOR_mproject__Model___mproject_by_name].val; /* _mproject_by_name on <self:Object(Model)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 112);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
