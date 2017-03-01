#include "nitc__model.sep.0.h"
/* method model$MVirtualTypeProp$mvirtualtype for (self: MVirtualTypeProp): MVirtualType */
val* nitc___nitc__MVirtualTypeProp___mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = self->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:MVirtualTypeProp> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2333);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MVirtualTypeProp$is_selftype for (self: MVirtualTypeProp): Bool */
short int nitc___nitc__MVirtualTypeProp___is_selftype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
short int var15 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MVirtualTypeProp__lazy_32d_is_selftype].s; /* lazy _is_selftype on <self:MVirtualTypeProp> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MVirtualTypeProp___is_selftype].s; /* _is_selftype on <self:MVirtualTypeProp> */
} else {
{
{
{ /* Inline model$MProperty$name (self) on <self:MVirtualTypeProp> */
var7 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MVirtualTypeProp> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "SELF";
var11 = (val*)(4l<<2|1);
var12 = (val*)(4l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
var15 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var8); /* == on <var5:String>*/
}
var3 = var15;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MVirtualTypeProp___is_selftype].s = var3; /* _is_selftype on <self:MVirtualTypeProp> */
var2 = var3;
self->attrs[COLOR_nitc__model__MVirtualTypeProp__lazy_32d_is_selftype].s = 1; /* lazy _is_selftype on <self:MVirtualTypeProp> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MPropDef$mclassdef for (self: MPropDef): MClassDef */
val* nitc___nitc__MPropDef___mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MPropDef$mclassdef= for (self: MPropDef, MClassDef) */
void nitc___nitc__MPropDef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:MPropDef> */
RET_LABEL:;
}
/* method model$MPropDef$mproperty for (self: MPropDef): MProperty */
val* nitc___nitc__MPropDef___mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MPropDef$mproperty= for (self: MPropDef, MProperty) */
void nitc___nitc__MPropDef___mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_nitc__model__MPropDef__MPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
self->attrs[COLOR_nitc__model__MPropDef___mproperty].val = p0; /* _mproperty on <self:MPropDef> */
RET_LABEL:;
}
/* method model$MPropDef$location for (self: MPropDef): Location */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MPropDef$location= for (self: MPropDef, Location) */
void nitc___nitc__MPropDef___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MPropDef___location].val = p0; /* _location on <self:MPropDef> */
RET_LABEL:;
}
/* method model$MPropDef$visibility for (self: MPropDef): MVisibility */
val* nitc___nitc__MPropDef___MEntity__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : MVisibility */;
val* var6 /* : MVisibility */;
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
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
/* method model$MPropDef$init for (self: MPropDef) */
void nitc___nitc__MPropDef___core__kernel__Object__init(val* self) {
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : Array[MPropDef] */;
val* var5 /* : Array[MPropDef] */;
val* var6 /* : MProperty */;
val* var8 /* : MProperty */;
val* var9 /* : Array[MPropDef] */;
val* var11 /* : Array[MPropDef] */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : HashMap[MProperty, MPropDef] */;
val* var17 /* : HashMap[MProperty, MPropDef] */;
val* var18 /* : MProperty */;
val* var20 /* : MProperty */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MProperty */;
val* var42 /* : MProperty */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var45 /* : NativeArray[String] */;
static val* varonce;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : MClassDef */;
val* var56 /* : MClassDef */;
val* var57 /* : String */;
val* var58 /* : MProperty */;
val* var60 /* : MProperty */;
val* var61 /* : String */;
val* var62 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MPropDef___core__kernel__Object__init]))(self); /* init on <self:MPropDef>*/
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var2 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClassDef$mpropdefs (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 723);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array$Array$add on <var3:Array[MPropDef]>*/
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var8 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MProperty$mpropdefs (var6) on <var6:MProperty> */
var11 = var6->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var6:MProperty> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var9, self); /* Direct call array$Array$add on <var9:Array[MPropDef]>*/
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var14 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MClassDef$mpropdefs_by_property (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_nitc__model__MClassDef___mpropdefs_by_property].val; /* _mpropdefs_by_property on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs_by_property");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 726);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var20 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var15, var18, self); /* Direct call hash_collection$HashMap$[]= on <var15:HashMap[MProperty, MPropDef]>*/
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var23 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var21) on <var21:MProperty> */
var26 = var21->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var21:MProperty> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var29 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var24,var27) on <var24:MClassDef> */
var_other = var27;
{
{ /* Inline kernel$Object$is_same_instance (var24,var_other) on <var24:MClassDef> */
var34 = var24 == var_other;
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
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var37 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = var35->attrs[COLOR_nitc__model__MProperty___intro].val != NULL; /* _intro on <var35:MProperty> */
var39 = !var38;
if (unlikely(!var39)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2370);
fatal_exit(1);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var42 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model$MProperty$intro= (var40,self) on <var40:MProperty> */
/* Covariant cast for argument 0 (intro) <self:MPropDef> isa MPROPDEF */
/* <self:MPropDef> isa MPROPDEF */
type_struct = var40->type->resolution_table->types[COLOR_nitc__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var44 = 0;
} else {
var44 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var44)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var40->attrs[COLOR_nitc__model__MProperty___intro].val = self; /* _intro on <var40:MProperty> */
RET_LABEL43:(void)0;
}
}
} else {
}
if (unlikely(varonce==NULL)) {
var45 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "$";
var50 = (val*)(1l<<2|1);
var51 = (val*)(1l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[1]=var47;
} else {
var45 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var56 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__Object__to_s]))(var54); /* to_s on <var54:MClassDef>*/
}
((struct instance_core__NativeArray*)var45)->values[0]=var57;
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var60 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__Object__to_s]))(var58); /* to_s on <var58:MProperty>*/
}
((struct instance_core__NativeArray*)var45)->values[2]=var61;
{
var62 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce = var45;
{
{ /* Inline model$MPropDef$to_s= (self,var62) on <self:MPropDef> */
self->attrs[COLOR_nitc__model__MPropDef___to_s].val = var62; /* _to_s on <self:MPropDef> */
RET_LABEL63:(void)0;
}
}
RET_LABEL:;
}
/* method model$MPropDef$name for (self: MPropDef): String */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
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
/* method model$MPropDef$full_name for (self: MPropDef): String */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : MClassDef */;
val* var20 /* : MClassDef */;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
short int var33 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : String */;
val* var39 /* : MClassDef */;
val* var41 /* : MClassDef */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
val* var45 /* : nullable MPackage */;
val* var46 /* : MProperty */;
val* var48 /* : MProperty */;
val* var49 /* : MClassDef */;
val* var51 /* : MClassDef */;
val* var52 /* : MModule */;
val* var54 /* : MModule */;
val* var55 /* : nullable MPackage */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other59 /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MProperty */;
val* var64 /* : MProperty */;
val* var65 /* : MClassDef */;
val* var67 /* : MClassDef */;
val* var68 /* : MModule */;
val* var70 /* : MModule */;
val* var71 /* : MProperty */;
val* var73 /* : MProperty */;
val* var74 /* : MVisibility */;
val* var76 /* : MVisibility */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : MProperty */;
val* var88 /* : MProperty */;
val* var89 /* : MVisibility */;
val* var91 /* : MVisibility */;
val* var92 /* : Sys */;
val* var93 /* : MVisibility */;
short int var94 /* : Bool */;
val* var95 /* : MClassDef */;
val* var97 /* : MClassDef */;
val* var98 /* : MModule */;
val* var100 /* : MModule */;
val* var101 /* : MClassDef */;
val* var103 /* : MClassDef */;
val* var104 /* : MClass */;
val* var106 /* : MClass */;
val* var107 /* : MVisibility */;
val* var109 /* : MVisibility */;
val* var110 /* : String */;
val* var111 /* : MProperty */;
val* var113 /* : MProperty */;
val* var114 /* : MClassDef */;
val* var116 /* : MClassDef */;
val* var117 /* : MModule */;
val* var119 /* : MModule */;
val* var120 /* : nullable MPackage */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
val* var133 /* : MProperty */;
val* var135 /* : MProperty */;
val* var136 /* : MClassDef */;
val* var138 /* : MClassDef */;
val* var139 /* : MModule */;
val* var141 /* : MModule */;
val* var142 /* : String */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var153 /* : MClassDef */;
val* var155 /* : MClassDef */;
val* var156 /* : MClass */;
val* var158 /* : MClass */;
val* var159 /* : MProperty */;
val* var161 /* : MProperty */;
val* var162 /* : MClassDef */;
val* var164 /* : MClassDef */;
val* var165 /* : MClass */;
val* var167 /* : MClass */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var172 /* : MProperty */;
val* var174 /* : MProperty */;
val* var175 /* : MClassDef */;
val* var177 /* : MClassDef */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Bool */;
val* var186 /* : nullable Bool */;
val* var187 /* : MProperty */;
val* var189 /* : MProperty */;
val* var190 /* : String */;
val* var192 /* : String */;
val* var193 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___full_name].val != NULL; /* _full_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MPropDef___full_name].val; /* _full_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2379);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_res = var5;
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var9 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
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
{
var10 = nitc___nitc__MClassDef___nitc__model_base__MEntity__full_name(var7);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var10); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "$";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var11); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var20 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var18) on <var18:MClassDef> */
var23 = var18->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var18:MClassDef> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var26 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var24) on <var24:MProperty> */
var29 = var24->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var24:MProperty> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var21,var30) on <var21:MClass> */
var_other = var30;
{
{ /* Inline kernel$Object$is_same_instance (var21,var_other) on <var21:MClass> */
var37 = var21 == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var38 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(self);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var38); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var41 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var39) on <var39:MClassDef> */
var44 = var39->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var39:MClassDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = nitc___nitc__MModule___mpackage(var42);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var48 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var46) on <var46:MProperty> */
var51 = var46->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var46:MProperty> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var49) on <var49:MClassDef> */
var54 = var49->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var49:MClassDef> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nitc___nitc__MModule___mpackage(var52);
}
if (var45 == NULL) {
var56 = (var55 != NULL);
} else {
{ /* Inline kernel$Object$!= (var45,var55) on <var45:nullable MPackage> */
var_other59 = var55;
{
var60 = ((short int(*)(val* self, val* p0))(var45->class->vft[COLOR_core__kernel__Object___61d_61d]))(var45, var_other59); /* == on <var45:nullable MPackage(MPackage)>*/
}
var61 = !var60;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var64 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var62) on <var62:MProperty> */
var67 = var62->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var62:MProperty> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var65) on <var65:MClassDef> */
var70 = var65->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var65:MClassDef> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var73 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var71) on <var71:MProperty> */
var76 = var71->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var71:MProperty> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nitc___nitc__MModule___namespace_for(var68, var74);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var77); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "::";
var82 = (val*)(2l<<2|1);
var83 = (val*)(2l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var79); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var88 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var86) on <var86:MProperty> */
var91 = var86->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var86:MProperty> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = glob_sys;
{
var93 = nitc__model_base___core__Sys___private_visibility(var92);
}
{
var94 = core___core__Comparable____60d_61d(var89, var93);
}
if (var94){
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var97 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var95) on <var95:MClassDef> */
var100 = var95->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var95:MClassDef> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var103 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var103 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var101) on <var101:MClassDef> */
var106 = var101->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var101:MClassDef> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var104) on <var104:MClass> */
var109 = var104->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var104:MClass> */
if (unlikely(var109 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = nitc___nitc__MModule___namespace_for(var98, var107);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var113 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var111) on <var111:MProperty> */
var116 = var111->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var111:MProperty> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var114) on <var114:MClassDef> */
var119 = var114->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var114:MClassDef> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = nitc___nitc__MModule___mpackage(var117);
}
{
{ /* Inline kernel$Object$!= (var110,var120) on <var110:String> */
var_other59 = var120;
{
var123 = ((short int(*)(val* self, val* p0))(var110->class->vft[COLOR_core__kernel__Object___61d_61d]))(var110, var_other59); /* == on <var110:String>*/
}
var124 = !var123;
var121 = var124;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
if (var121){
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "::";
var129 = (val*)(2l<<2|1);
var130 = (val*)(2l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var126); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var135 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var135 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var133) on <var133:MProperty> */
var138 = var133->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var133:MProperty> */
if (unlikely(var138 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var136) on <var136:MClassDef> */
var141 = var136->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var136:MClassDef> */
if (unlikely(var141 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var139) on <var139:MModule> */
var144 = var139->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var139:MModule> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var142); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "::";
var149 = (val*)(2l<<2|1);
var150 = (val*)(2l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var146); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
} else {
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var155 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var153) on <var153:MClassDef> */
var158 = var153->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var153:MClassDef> */
if (unlikely(var158 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var161 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var161 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var159) on <var159:MProperty> */
var164 = var159->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var159:MProperty> */
if (unlikely(var164 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var162) on <var162:MClassDef> */
var167 = var162->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var162:MClassDef> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var156,var165) on <var156:MClass> */
var_other59 = var165;
{
var170 = ((short int(*)(val* self, val* p0))(var156->class->vft[COLOR_core__kernel__Object___61d_61d]))(var156, var_other59); /* == on <var156:MClass>*/
}
var171 = !var170;
var168 = var171;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
if (var168){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var174 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var174 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var172) on <var172:MProperty> */
var177 = var172->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var172:MProperty> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = nitc___nitc__MClassDef___nitc__model_base__MEntity__name(var175);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var178); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "::";
var183 = (val*)(2l<<2|1);
var184 = (val*)(2l<<2|1);
var185 = (val*)((long)(0)<<2|3);
var186 = (val*)((long)(0)<<2|3);
var182 = core__flat___CString___to_s_unsafe(var181, var183, var184, var185, var186);
var180 = var182;
varonce179 = var180;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var180); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var189 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var189 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var187) on <var187:MProperty> */
var192 = var187->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var187:MProperty> */
if (unlikely(var192 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var190); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
}
{
var193 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_res);
}
var3 = var193;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MPropDef___full_name].val = var3; /* _full_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MPropDef$c_name for (self: MPropDef): String */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : MClassDef */;
val* var20 /* : MClassDef */;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
short int var33 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : MProperty */;
val* var48 /* : MProperty */;
val* var49 /* : MClassDef */;
val* var51 /* : MClassDef */;
val* var52 /* : MModule */;
val* var54 /* : MModule */;
short int var55 /* : Bool */;
val* var_other57 /* var other: nullable Object */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MProperty */;
val* var62 /* : MProperty */;
val* var63 /* : MClassDef */;
val* var65 /* : MClassDef */;
val* var66 /* : MModule */;
val* var68 /* : MModule */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : MClassDef */;
val* var80 /* : MClassDef */;
val* var81 /* : MClass */;
val* var83 /* : MClass */;
val* var84 /* : MProperty */;
val* var86 /* : MProperty */;
val* var87 /* : MClassDef */;
val* var89 /* : MClassDef */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : MProperty */;
val* var99 /* : MProperty */;
val* var100 /* : MClassDef */;
val* var102 /* : MClassDef */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : MProperty */;
val* var115 /* : MProperty */;
val* var116 /* : String */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___c_name].val != NULL; /* _c_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MPropDef___c_name].val; /* _c_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2428);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_res = var5;
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var9 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
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
{
var10 = nitc___nitc__MClassDef___nitc__model_base__MEntity__c_name(var7);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var10); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "___";
var14 = (val*)(3l<<2|1);
var15 = (val*)(3l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var11); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var20 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var18) on <var18:MClassDef> */
var23 = var18->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var18:MClassDef> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var26 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var24) on <var24:MProperty> */
var29 = var24->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var24:MProperty> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var21,var30) on <var21:MClass> */
var_other = var30;
{
{ /* Inline kernel$Object$is_same_instance (var21,var_other) on <var21:MClass> */
var37 = var21 == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var38 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(self);
}
{
var39 = core___core__Text___to_cmangle(var38);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var39); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var42 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var40) on <var40:MClassDef> */
var45 = var40->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var40:MClassDef> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var48 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var46) on <var46:MProperty> */
var51 = var46->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var46:MProperty> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var49) on <var49:MClassDef> */
var54 = var49->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var49:MClassDef> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var43,var52) on <var43:MModule> */
var_other57 = var52;
{
var58 = ((short int(*)(val* self, val* p0))(var43->class->vft[COLOR_core__kernel__Object___61d_61d]))(var43, var_other57); /* == on <var43:MModule>*/
}
var59 = !var58;
var55 = var59;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var62 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var60) on <var60:MProperty> */
var65 = var60->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var60:MProperty> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var63) on <var63:MClassDef> */
var68 = var63->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var63:MClassDef> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var66);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var69); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "__";
var74 = (val*)(2l<<2|1);
var75 = (val*)(2l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var71); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var80 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var78) on <var78:MClassDef> */
var83 = var78->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var78:MClassDef> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var86 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var84) on <var84:MProperty> */
var89 = var84->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var84:MProperty> */
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var87) on <var87:MClassDef> */
var92 = var87->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var87:MClassDef> */
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
{ /* Inline kernel$Object$!= (var81,var90) on <var81:MClass> */
var_other57 = var90;
{
var95 = ((short int(*)(val* self, val* p0))(var81->class->vft[COLOR_core__kernel__Object___61d_61d]))(var81, var_other57); /* == on <var81:MClass>*/
}
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (var93){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var99 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var97) on <var97:MProperty> */
var102 = var97->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var97:MProperty> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = nitc___nitc__MClassDef___nitc__model_base__MEntity__name(var100);
}
{
var104 = core___core__Text___to_cmangle(var103);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var104); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "__";
var109 = (val*)(2l<<2|1);
var110 = (val*)(2l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var106); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var115 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var113) on <var113:MProperty> */
var118 = var113->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var113:MProperty> */
if (unlikely(var118 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = core___core__Text___to_cmangle(var116);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_res, var119); /* Direct call flat$FlatBuffer$append on <var_res:FlatBuffer>*/
}
}
{
var120 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_res);
}
var3 = var120;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MPropDef___c_name].val = var3; /* _c_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MPropDef$model for (self: MPropDef): Model */
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : Model */;
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClassDef___nitc__model_base__MEntity__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MPropDef$to_s for (self: MPropDef): String */
val* nitc___nitc__MPropDef___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MPropDef$to_s= for (self: MPropDef, String) */
void nitc___nitc__MPropDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MPropDef___to_s].val = p0; /* _to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model$MPropDef$is_intro for (self: MPropDef): Bool */
short int nitc___nitc__MPropDef___is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MProperty */;
val* var4 /* : MProperty */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : MProperty */;
val* var8 /* : MProperty */;
val* var9 /* : MPropDef */;
val* var11 /* : MPropDef */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var4 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_nitc__model__MProperty___intro].val != NULL; /* _intro on <var2:MProperty> */
var_ = var5;
if (var5){
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var8 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var6) on <var6:MProperty> */
var11 = var6->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var6:MProperty> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var9,self) on <var9:MPropDef> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var9,var_other) on <var9:MPropDef> */
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
/* method model$MPropDef$lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* nitc___nitc__MPropDef___lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var6 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var7 /* : IndexedIterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[MPropDef] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2464);
fatal_exit(1);
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MPropDef> */
var5 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__MProperty___lookup_all_definitions(var3, var_mmodule, var_mtype);
}
var_mpropdefs = var6;
{
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_mpropdefs);
}
var_i = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[MPropDef]>*/
}
var_ = var9;
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[MPropDef]>*/
}
{
{ /* Inline kernel$Object$!= (var10,self) on <var10:nullable Object(MPropDef)> */
var_other = self;
{
var13 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other); /* == on <var10:nullable Object(MPropDef)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var8 = var11;
} else {
var8 = var_;
}
if (var8){
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var15 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[MPropDef]>*/
}
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'has_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2469);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[MPropDef]>*/
}
{
var16 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[MPropDef]>*/
}
if (unlikely(!var16)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'has_next_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2471);
fatal_exit(1);
}
{
var17 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[MPropDef]>*/
}
/* <var17:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nitc__model__MPropDef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (unlikely(!var18)) {
var_class_name = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2472);
fatal_exit(1);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$msignature for (self: MMethodDef): nullable MSignature */
val* nitc___nitc__MMethodDef___msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$msignature= for (self: MMethodDef, nullable MSignature) */
void nitc___nitc__MMethodDef___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MMethodDef___msignature].val = p0; /* _msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$new_msignature for (self: MMethodDef): nullable MSignature */
val* nitc___nitc__MMethodDef___new_msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$new_msignature= for (self: MMethodDef, nullable MSignature) */
void nitc___nitc__MMethodDef___new_msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = p0; /* _new_msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$initializers for (self: MMethodDef): Array[MProperty] */
val* nitc___nitc__MMethodDef___initializers(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <self:MMethodDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_abstract for (self: MMethodDef): Bool */
short int nitc___nitc__MMethodDef___is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_abstract= for (self: MMethodDef, Bool) */
void nitc___nitc__MMethodDef___is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$is_intern for (self: MMethodDef): Bool */
short int nitc___nitc__MMethodDef___is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_intern= for (self: MMethodDef, Bool) */
void nitc___nitc__MMethodDef___is_intern_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$is_extern for (self: MMethodDef): Bool */
short int nitc___nitc__MMethodDef___is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$is_extern= for (self: MMethodDef, Bool) */
void nitc___nitc__MMethodDef___is_extern_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MMethodDef$constant_value for (self: MMethodDef): nullable Object */
val* nitc___nitc__MMethodDef___constant_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethodDef$constant_value= for (self: MMethodDef, nullable Object) */
void nitc___nitc__MMethodDef___constant_value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MMethodDef___constant_value].val = p0; /* _constant_value on <self:MMethodDef> */
RET_LABEL:;
}
/* method model$MAttributeDef$static_mtype for (self: MAttributeDef): nullable MType */
val* nitc___nitc__MAttributeDef___static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MAttributeDef$static_mtype= for (self: MAttributeDef, nullable MType) */
void nitc___nitc__MAttributeDef___static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model$MVirtualTypeDef$bound for (self: MVirtualTypeDef): nullable MType */
val* nitc___nitc__MVirtualTypeDef___bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MVirtualTypeDef$bound= for (self: MVirtualTypeDef, nullable MType) */
void nitc___nitc__MVirtualTypeDef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model$MVirtualTypeDef$is_fixed for (self: MVirtualTypeDef): Bool */
short int nitc___nitc__MVirtualTypeDef___is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MVirtualTypeDef$is_fixed= for (self: MVirtualTypeDef, Bool) */
void nitc___nitc__MVirtualTypeDef___is_fixed_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model$MClassKind$to_s for (self: MClassKind): String */
val* nitc___nitc__MClassKind___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MClassKind___to_s].val; /* _to_s on <self:MClassKind> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2555);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassKind$to_s= for (self: MClassKind, String) */
void nitc___nitc__MClassKind___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MClassKind___to_s].val = p0; /* _to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model$MClassKind$need_init for (self: MClassKind): Bool */
short int nitc___nitc__MClassKind___need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MClassKind___need_init].s; /* _need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MClassKind$need_init= for (self: MClassKind, Bool) */
void nitc___nitc__MClassKind___need_init_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MClassKind___need_init].s = p0; /* _need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model$MClassKind$can_specialize for (self: MClassKind, MClassKind): Bool */
short int nitc___nitc__MClassKind___can_specialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MClassKind */;
val* var1 /* : Sys */;
val* var2 /* : MClassKind */;
short int var3 /* : Bool */;
val* var_other5 /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : Sys */;
val* var18 /* : MClassKind */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : Sys */;
val* var25 /* : MClassKind */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : Sys */;
val* var38 /* : MClassKind */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
val* var45 /* : Sys */;
val* var46 /* : MClassKind */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
var_other = p0;
var1 = glob_sys;
{
var2 = nitc__model___core__Sys___interface_kind(var1);
}
{
{ /* Inline kernel$Object$== (var_other,var2) on <var_other:MClassKind> */
var_other5 = var2;
{
{ /* Inline kernel$Object$is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var8 = var_other == var_other5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___interface_kind(var10);
}
{
{ /* Inline kernel$Object$== (self,var11) on <self:MClassKind> */
var_other5 = var11;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var16 = self == var_other5;
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
var_ = var12;
if (var12){
var9 = var_;
} else {
var17 = glob_sys;
{
var18 = nitc__model___core__Sys___enum_kind(var17);
}
{
{ /* Inline kernel$Object$== (self,var18) on <self:MClassKind> */
var_other5 = var18;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var23 = self == var_other5;
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
var9 = var19;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
var24 = glob_sys;
{
var25 = nitc__model___core__Sys___extern_kind(var24);
}
{
{ /* Inline kernel$Object$== (self,var25) on <self:MClassKind> */
var_other5 = var25;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var30 = self == var_other5;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline kernel$Object$== (self,var_other) on <self:MClassKind> */
var_other5 = var_other;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other5) on <self:MClassKind> */
var35 = self == var_other5;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var = var31;
goto RET_LABEL;
} else {
var37 = glob_sys;
{
var38 = nitc__model___core__Sys___enum_kind(var37);
}
{
{ /* Inline kernel$Object$== (var_other,var38) on <var_other:MClassKind> */
var_other5 = var38;
{
{ /* Inline kernel$Object$is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var43 = var_other == var_other5;
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
var_44 = var39;
if (var39){
var36 = var_44;
} else {
var45 = glob_sys;
{
var46 = nitc__model___core__Sys___extern_kind(var45);
}
{
{ /* Inline kernel$Object$== (var_other,var46) on <var_other:MClassKind> */
var_other5 = var46;
{
{ /* Inline kernel$Object$is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var51 = var_other == var_other5;
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
var36 = var47;
}
if (var36){
var = 0;
goto RET_LABEL;
} else {
}
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MClassKind$init for (self: MClassKind) */
void nitc___nitc__MClassKind___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MClassKind___core__kernel__Object__init]))(self); /* init on <self:MClassKind>*/
}
RET_LABEL:;
}
/* method model$Sys$abstract_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "abstract class";
var7 = (val*)(14l<<2|1);
var8 = (val*)(14l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$concrete_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "class";
var7 = (val*)(5l<<2|1);
var8 = (val*)(5l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$interface_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "interface";
var7 = (val*)(9l<<2|1);
var8 = (val*)(9l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$enum_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "enum";
var7 = (val*)(4l<<2|1);
var8 = (val*)(4l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$Sys$extern_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "extern class";
var7 = (val*)(12l<<2|1);
var8 = (val*)(12l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
