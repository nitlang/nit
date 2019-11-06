#include "nitc__mmodule.sep.0.h"
/* method mmodule$Model$mmodules for (self: Model): Array[MModule] */
val* nitc__mmodule___Model___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__Model___mmodules].val; /* _mmodules on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$Model$mmodule_importation_hierarchy for (self: Model): POSet[MModule] */
val* nitc__mmodule___Model___mmodule_importation_hierarchy(val* self) {
val* var /* : POSet[MModule] */;
val* var1 /* : POSet[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$Model$mmodules_by_name for (self: Model): MultiHashMap[String, MModule] */
val* nitc__mmodule___Model___mmodules_by_name(val* self) {
val* var /* : MultiHashMap[String, MModule] */;
val* var1 /* : MultiHashMap[String, MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$Model$get_mmodules_by_name for (self: Model, String): nullable Array[MModule] */
val* nitc__mmodule___Model___get_mmodules_by_name(val* self, val* p0) {
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
{ /* Inline mmodule$Model$mmodules_by_name (self) on <self:Model> */
var3 = self->attrs[COLOR_nitc__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 36);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline mmodule$Model$mmodules_by_name (self) on <self:Model> */
var7 = self->attrs[COLOR_nitc__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <self:Model> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 36);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_name);
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
/* method mmodule$MGroup$mmodules for (self: MGroup): Array[MModule] */
val* nitc__mmodule___MGroup___mmodules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <self:MGroup> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MGroup$default_mmodule for (self: MGroup): nullable MModule */
val* nitc__mmodule___MGroup___default_mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__mmodule__MGroup___default_mmodule].val; /* _default_mmodule on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MGroup$default_mmodule= for (self: MGroup, nullable MModule) */
void nitc__mmodule___MGroup___default_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MGroup___default_mmodule].val = p0; /* _default_mmodule on <self:MGroup> */
RET_LABEL:;
}
/* method mmodule$MModule$model for (self: MModule): Model */
val* nitc___nitc__MModule___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$model= for (self: MModule, Model) */
void nitc___nitc__MModule___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MModule___model].val = p0; /* _model on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$mgroup for (self: MModule): nullable MGroup */
val* nitc___nitc__MModule___mgroup(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$mgroup= for (self: MModule, nullable MGroup) */
void nitc___nitc__MModule___mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val = p0; /* _mgroup on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$filepath for (self: MModule): nullable String */
val* nitc___nitc__MModule___filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : Location */;
val* var3 /* : Location */;
val* var4 /* : nullable SourceFile */;
val* var6 /* : nullable SourceFile */;
val* var_res /* var res: nullable SourceFile */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var15 /* : String */;
{
{ /* Inline mmodule$MModule$location (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline location$Location$file (var1) on <var1:Location> */
var6 = var1->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var1:Location> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_res = var4;
if (var_res == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable SourceFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable SourceFile(SourceFile)> */
var12 = var_res == var_other;
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
if (var7){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline location$SourceFile$filename (var_res) on <var_res:nullable SourceFile(SourceFile)> */
var15 = var_res->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var_res:nullable SourceFile(SourceFile)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$mpackage for (self: MModule): nullable MPackage */
val* nitc___nitc__MModule___mpackage(val* self) {
val* var /* : nullable MPackage */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MPackage */;
val* var12 /* : MPackage */;
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
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
{ /* Inline kernel$Object$== (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_g,var_other) on <var_g:nullable MGroup(MGroup)> */
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
{ /* Inline mpackage$MGroup$mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var12 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
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
/* method mmodule$MModule$name for (self: MModule): String */
val* nitc___nitc__MModule___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$name= for (self: MModule, String) */
void nitc___nitc__MModule___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MModule___name].val = p0; /* _name on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$location for (self: MModule): Location */
val* nitc___nitc__MModule___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$location= for (self: MModule, Location) */
void nitc___nitc__MModule___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MModule___location].val = p0; /* _location on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$to_s for (self: MModule): String */
val* nitc___nitc__MModule___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
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
/* method mmodule$MModule$in_importation for (self: MModule): POSetElement[MModule] */
val* nitc___nitc__MModule___in_importation(val* self) {
val* var /* : POSetElement[MModule] */;
val* var1 /* : POSetElement[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$in_importation= for (self: MModule, POSetElement[MModule]) */
void nitc___nitc__MModule___in_importation_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val = p0; /* _in_importation on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$full_name for (self: MModule): String */
val* nitc___nitc__MModule___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : nullable MGroup */;
val* var7 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : MPackage */;
val* var28 /* : MPackage */;
val* var29 /* : String */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___full_name].val != NULL; /* _full_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__mmodule__MModule___full_name].val; /* _full_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 111);
fatal_exit(1);
}
} else {
{
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
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
{ /* Inline kernel$Object$== (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
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
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var16 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var3 = var14;
goto RET_LABEL4;
} else {
if (unlikely(varonce==NULL)) {
var17 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "::";
var22 = (val*)(2l<<2|1);
var23 = (val*)(2l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[1]=var19;
} else {
var17 = varonce;
varonce = NULL;
}
{
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var28 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$name (var26) on <var26:MPackage> */
var31 = var26->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <var26:MPackage> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
((struct instance_core__NativeArray*)var17)->values[0]=var29;
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var34 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
((struct instance_core__NativeArray*)var17)->values[2]=var32;
{
var35 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
var3 = var35;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__mmodule__MModule___full_name].val = var3; /* _full_name on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$namespace_for for (self: MModule, MVisibility): String */
val* nitc___nitc__MModule___namespace_for(val* self, val* p0) {
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
val* var15 /* : MPackage */;
val* var17 /* : MPackage */;
val* var18 /* : String */;
var_v = p0;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___private_visibility(var1);
}
{
var3 = core___core__Comparable____60d_61d(var_v, var2);
}
if (var3){
{
var4 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(self);
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
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
{ /* Inline kernel$Object$== (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
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
var14 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(self);
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var17 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__MPackage___nitc__model_base__MEntity__full_name(var15);
}
var = var18;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule$MModule$c_name for (self: MModule): String */
val* nitc___nitc__MModule___nitc__model_base__MEntity__c_name(val* self) {
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
val* var14 /* : MPackage */;
val* var16 /* : MPackage */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MPackage */;
val* var29 /* : MPackage */;
val* var30 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : Text */;
val* var42 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Text */;
val* var_res /* var res: nullable Object */;
val* var47 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___c_name].val != NULL; /* _c_name on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__mmodule__MModule___c_name].val; /* _c_name on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 145);
fatal_exit(1);
}
} else {
{
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
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
{ /* Inline kernel$Object$!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
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
{ /* Inline mpackage$MGroup$mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var16 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$name (var14) on <var14:MPackage> */
var19 = var14->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <var14:MPackage> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var22 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var17,var20) on <var17:String> */
var_other = var20;
{
var25 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_core__kernel__Object___61d_61d]))(var17, var_other); /* == on <var17:String>*/
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
{ /* Inline mpackage$MGroup$mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var29 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline mpackage$MPackage$name (var27) on <var27:MPackage> */
var32 = var27->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <var27:MPackage> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = core___core__Text___to_cmangle(var30);
}
if (likely(varonce!=NULL)) {
var34 = varonce;
} else {
var35 = "__";
var37 = (val*)(2l<<2|1);
var38 = (val*)(2l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce = var34;
}
{
var41 = ((val*(*)(val* self, val* p0))(var33->class->vft[COLOR_core__abstract_text__Text___43d]))(var33, var34); /* + on <var33:String>*/
}
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var44 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = core___core__Text___to_cmangle(var42);
}
{
var46 = ((val*(*)(val* self, val* p0))(var41->class->vft[COLOR_core__abstract_text__Text___43d]))(var41, var45); /* + on <var41:Text(String)>*/
}
var_res = var46;
} else {
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var49 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = core___core__Text___to_cmangle(var47);
}
var_res = var50;
}
var3 = var_res;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__mmodule__MModule___c_name].val = var3; /* _c_name on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$c_namespace_for for (self: MModule, MVisibility): String */
val* nitc___nitc__MModule___c_namespace_for(val* self, val* p0) {
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
val* var15 /* : MPackage */;
val* var17 /* : MPackage */;
val* var18 /* : String */;
var_v = p0;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___private_visibility(var1);
}
{
var3 = core___core__Comparable____60d_61d(var_v, var2);
}
if (var3){
{
var4 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(self);
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var7 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
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
{ /* Inline kernel$Object$== (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mgroup,var_other) on <var_mgroup:nullable MGroup(MGroup)> */
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
var14 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(self);
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline mpackage$MGroup$mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var17 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__MPackage___nitc__model_base__MEntity__c_name(var15);
}
var = var18;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mmodule$MModule$init for (self: MModule) */
void nitc___nitc__MModule___core__kernel__Object__init(val* self) {
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
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Array[MModule] */;
val* var25 /* : Array[MModule] */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var31 /* : String */;
short int var32 /* : Bool */;
val* var33 /* : nullable MModule */;
val* var35 /* : nullable MModule */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var_other39 /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var44 /* : Model */;
val* var46 /* : Model */;
val* var47 /* : POSet[MModule] */;
val* var49 /* : POSet[MModule] */;
val* var50 /* : POSetElement[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MModule___core__kernel__Object__init]))(self); /* init on <self:MModule>*/
}
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule$Model$mmodules_by_name (var) on <var:Model> */
var5 = var->attrs[COLOR_nitc__mmodule__Model___mmodules_by_name].val; /* _mmodules_by_name on <var:Model> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 36);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var8 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var3, var6, self); /* Direct call more_collections$MultiHashMap$add_one on <var3:MultiHashMap[String, MModule]>*/
}
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var11 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
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
{
{ /* Inline mmodule$Model$mmodules (var9) on <var9:Model> */
var14 = var9->attrs[COLOR_nitc__mmodule__Model___mmodules].val; /* _mmodules on <var9:Model> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 30);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var12, self); /* Direct call array$Array$add on <var12:Array[MModule]>*/
}
{
{ /* Inline mmodule$MModule$mgroup (self) on <self:MModule> */
var17 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mgroup = var15;
if (var_mgroup == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
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
{ /* Inline mmodule$MGroup$mmodules (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var25 = var_mgroup->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var23, self); /* Direct call array$Array$add on <var23:Array[MModule]>*/
}
{
{ /* Inline mpackage$MGroup$name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var28 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (self) on <self:MModule> */
var31 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var29); /* == on <var26:String>*/
}
if (var32){
{
{ /* Inline mmodule$MGroup$default_mmodule (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var35 = var_mgroup->attrs[COLOR_nitc__mmodule__MGroup___default_mmodule].val; /* _default_mmodule on <var_mgroup:nullable MGroup(MGroup)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var33,((val*)NULL)) on <var33:nullable MModule> */
var_other39 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var33,var_other39) on <var33:nullable MModule(MModule)> */
var42 = var33 == var_other39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (unlikely(!var36)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 181);
fatal_exit(1);
}
{
{ /* Inline mmodule$MGroup$default_mmodule= (var_mgroup,self) on <var_mgroup:nullable MGroup(MGroup)> */
var_mgroup->attrs[COLOR_nitc__mmodule__MGroup___default_mmodule].val = self; /* _default_mmodule on <var_mgroup:nullable MGroup(MGroup)> */
RET_LABEL43:(void)0;
}
}
} else {
}
} else {
}
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var46 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline mmodule$Model$mmodule_importation_hierarchy (var44) on <var44:Model> */
var49 = var44->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var44:Model> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 33);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = poset___poset__POSet___add_node(var47, self);
}
{
{ /* Inline mmodule$MModule$in_importation= (self,var50) on <self:MModule> */
self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val = var50; /* _in_importation on <self:MModule> */
RET_LABEL51:(void)0;
}
}
RET_LABEL:;
}
/* method mmodule$MModule$set_imported_mmodules for (self: MModule, Array[MModule]) */
void nitc___nitc__MModule___set_imported_mmodules(val* self, val* p0) {
val* var_imported_mmodules /* var imported_mmodules: Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var /* : IndexedIterator[nullable Object] */;
val* var_1 /* var : IndexedIterator[MModule] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var4 /* : Model */;
val* var6 /* : Model */;
val* var7 /* : POSet[MModule] */;
val* var9 /* : POSet[MModule] */;
var_imported_mmodules = p0;
var_ = var_imported_mmodules;
{
var = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_1 = var;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1); /* is_ok on <var_1:IndexedIterator[MModule]>*/
}
if (var2){
} else {
goto BREAK_label;
}
{
var3 = ((val*(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1); /* item on <var_1:IndexedIterator[MModule]>*/
}
var_m = var3;
{
{ /* Inline mmodule$MModule$model (self) on <self:MModule> */
var6 = self->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <self:MModule> */
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
{
{ /* Inline mmodule$Model$mmodule_importation_hierarchy (var4) on <var4:Model> */
var9 = var4->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var4:Model> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 33);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
poset___poset__POSet___add_edge(var7, self, var_m); /* Direct call poset$POSet$add_edge on <var7:POSet[MModule]>*/
}
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1); /* next on <var_1:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1); /* finish on <var_1:IndexedIterator[MModule]>*/
}
RET_LABEL:;
}
/* method mmodule$MModule$intrude_mmodules for (self: MModule): HashSet[MModule] */
val* nitc___nitc__MModule___intrude_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$public_mmodules for (self: MModule): HashSet[MModule] */
val* nitc___nitc__MModule___public_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$private_mmodules for (self: MModule): HashSet[MModule] */
val* nitc___nitc__MModule___private_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$visibility_for for (self: MModule, MModule): MVisibility */
val* nitc___nitc__MModule___visibility_for(val* self, val* p0) {
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
{ /* Inline kernel$Object$== (var_m,self) on <var_m:MModule> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var_m,var_other) on <var_m:MModule> */
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
var7 = nitc__model_base___core__Sys___intrude_visibility(var6);
}
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$intrude_mmodules (self) on <self:MModule> */
var10 = self->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = core___core__HashSet___core__abstract_collection__Collection__has(var8, var_m);
}
if (var11){
var12 = glob_sys;
{
var13 = nitc__model_base___core__Sys___intrude_visibility(var12);
}
var = var13;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$public_mmodules (self) on <self:MModule> */
var16 = self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashSet___core__abstract_collection__Collection__has(var14, var_m);
}
if (var17){
var18 = glob_sys;
{
var19 = nitc__model_base___core__Sys___public_visibility(var18);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$private_mmodules (self) on <self:MModule> */
var22 = self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashSet___core__abstract_collection__Collection__has(var20, var_m);
}
if (var23){
var24 = glob_sys;
{
var25 = nitc__model_base___core__Sys___private_visibility(var24);
}
var = var25;
goto RET_LABEL;
} else {
}
var26 = glob_sys;
{
var27 = nitc__model_base___core__Sys___none_visibility(var26);
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$set_visibility_for for (self: MModule, MModule, MVisibility) */
void nitc___nitc__MModule___set_visibility_for(val* self, val* p0, val* p1) {
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
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : String */;
var_m = p0;
var_v = p1;
var = glob_sys;
{
var1 = nitc__model_base___core__Sys___intrude_visibility(var);
}
{
{ /* Inline kernel$Object$== (var_v,var1) on <var_v:MVisibility> */
var_other = var1;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
{ /* Inline mmodule$MModule$intrude_mmodules (self) on <self:MModule> */
var9 = self->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_m); /* Direct call hash_collection$HashSet$add on <var7:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$intrude_mmodules (self) on <self:MModule> */
var12 = self->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <self:MModule> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline mmodule$MModule$intrude_mmodules (var_m) on <var_m:MModule> */
var15 = var_m->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var10, var13); /* Direct call abstract_collection$SimpleCollection$add_all on <var10:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$public_mmodules (self) on <self:MModule> */
var18 = self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline mmodule$MModule$public_mmodules (var_m) on <var_m:MModule> */
var21 = var_m->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var16, var19); /* Direct call abstract_collection$SimpleCollection$add_all on <var16:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$private_mmodules (self) on <self:MModule> */
var24 = self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline mmodule$MModule$private_mmodules (var_m) on <var_m:MModule> */
var27 = var_m->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <var_m:MModule> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var22, var25); /* Direct call abstract_collection$SimpleCollection$add_all on <var22:HashSet[MModule]>*/
}
} else {
var28 = glob_sys;
{
var29 = nitc__model_base___core__Sys___public_visibility(var28);
}
{
{ /* Inline kernel$Object$== (var_v,var29) on <var_v:MVisibility> */
var_other = var29;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
{ /* Inline mmodule$MModule$public_mmodules (self) on <self:MModule> */
var37 = self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var35, var_m); /* Direct call hash_collection$HashSet$add on <var35:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$public_mmodules (self) on <self:MModule> */
var40 = self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline mmodule$MModule$intrude_mmodules (var_m) on <var_m:MModule> */
var43 = var_m->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var38, var41); /* Direct call abstract_collection$SimpleCollection$add_all on <var38:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$public_mmodules (self) on <self:MModule> */
var46 = self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <self:MModule> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline mmodule$MModule$public_mmodules (var_m) on <var_m:MModule> */
var49 = var_m->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var44, var47); /* Direct call abstract_collection$SimpleCollection$add_all on <var44:HashSet[MModule]>*/
}
} else {
var50 = glob_sys;
{
var51 = nitc__model_base___core__Sys___private_visibility(var50);
}
{
{ /* Inline kernel$Object$== (var_v,var51) on <var_v:MVisibility> */
var_other = var51;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
{ /* Inline mmodule$MModule$private_mmodules (self) on <self:MModule> */
var59 = self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var57, var_m); /* Direct call hash_collection$HashSet$add on <var57:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$private_mmodules (self) on <self:MModule> */
var62 = self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline mmodule$MModule$intrude_mmodules (var_m) on <var_m:MModule> */
var65 = var_m->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val; /* _intrude_mmodules on <var_m:MModule> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intrude_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 197);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var60, var63); /* Direct call abstract_collection$SimpleCollection$add_all on <var60:HashSet[MModule]>*/
}
{
{ /* Inline mmodule$MModule$private_mmodules (self) on <self:MModule> */
var68 = self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val; /* _private_mmodules on <self:MModule> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _private_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 199);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline mmodule$MModule$public_mmodules (var_m) on <var_m:MModule> */
var71 = var_m->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val; /* _public_mmodules on <var_m:MModule> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _public_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 198);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var66, var69); /* Direct call abstract_collection$SimpleCollection$add_all on <var66:HashSet[MModule]>*/
}
} else {
var72 = glob_sys;
if (unlikely(varonce==NULL)) {
var73 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " visibility for ";
var78 = (val*)(16l<<2|1);
var79 = (val*)(16l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var73)->values[1]=var75;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = " = ";
var86 = (val*)(3l<<2|1);
var87 = (val*)(3l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var73)->values[3]=var83;
} else {
var73 = varonce;
varonce = NULL;
}
{
var90 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:MModule>*/
}
((struct instance_core__NativeArray*)var73)->values[0]=var90;
{
var91 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MModule>*/
}
((struct instance_core__NativeArray*)var73)->values[2]=var91;
{
var92 = ((val*(*)(val* self))(var_v->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_v); /* to_s on <var_v:MVisibility>*/
}
((struct instance_core__NativeArray*)var73)->values[4]=var92;
{
var93 = ((val*(*)(val* self))(var73->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce = var73;
{
core__file___Sys___print(var72, var93); /* Direct call file$Sys$print on <var72:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 230);
fatal_exit(1);
}
}
}
RET_LABEL:;
}
/* method mmodule$MModule$is_visible for (self: MModule, MModule, MVisibility): Bool */
short int nitc___nitc__MModule___is_visible(val* self, val* p0, val* p1) {
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
var1 = nitc___nitc__MModule___visibility_for(self, var_intro_mmodule);
}
var_v = var1;
var2 = glob_sys;
{
var3 = nitc__model_base___core__Sys___intrude_visibility(var2);
}
{
{ /* Inline kernel$Object$== (var_v,var3) on <var_v:MVisibility> */
var_other = var3;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
var10 = nitc__model_base___core__Sys___private_visibility(var9);
}
{
var11 = core___core__Comparable____62d_61d(var_visibility, var10);
}
var = var11;
goto RET_LABEL;
} else {
var12 = glob_sys;
{
var13 = nitc__model_base___core__Sys___public_visibility(var12);
}
{
{ /* Inline kernel$Object$== (var_v,var13) on <var_v:MVisibility> */
var_other = var13;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
var20 = nitc__model_base___core__Sys___private_visibility(var19);
}
{
var21 = core___core__Comparable____62d(var_visibility, var20);
}
var = var21;
goto RET_LABEL;
} else {
var22 = glob_sys;
{
var23 = nitc__model_base___core__Sys___private_visibility(var22);
}
{
{ /* Inline kernel$Object$== (var_v,var23) on <var_v:MVisibility> */
var_other = var23;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
var30 = nitc__model_base___core__Sys___private_visibility(var29);
}
{
var31 = core___core__Comparable____62d(var_visibility, var30);
}
var = var31;
goto RET_LABEL;
} else {
var32 = glob_sys;
{
var33 = nitc__model_base___core__Sys___none_visibility(var32);
}
{
{ /* Inline kernel$Object$== (var_v,var33) on <var_v:MVisibility> */
var_other = var33;
{
{ /* Inline kernel$Object$is_same_instance (var_v,var_other) on <var_v:MVisibility> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 247);
fatal_exit(1);
}
}
}
}
RET_LABEL:;
return var;
}
/* method mmodule$MModule$is_test_suite= for (self: MModule, Bool) */
void nitc___nitc__MModule___is_test_suite_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__mmodule__MModule___is_test_suite].s = p0; /* _is_test_suite on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$is_generated= for (self: MModule, Bool) */
void nitc___nitc__MModule___is_generated_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__mmodule__MModule___is_generated].s = p0; /* _is_generated on <self:MModule> */
RET_LABEL:;
}
/* method mmodule$MModule$first_real_mmodule for (self: MModule): MModule */
val* nitc___nitc__MModule___first_real_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 260);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule$MModule$first_real_mmodule= for (self: MModule, MModule) */
void nitc___nitc__MModule___first_real_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val = p0; /* _first_real_mmodule on <self:MModule> */
RET_LABEL:;
}
