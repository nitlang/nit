#include "standard__environ.sep.0.h"
/* method environ#String#environ for (self: String): String */
val* standard__environ___String___environ(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
void* var4 /* : NativeString for extern */;
char* var_res /* var res: NativeString */;
static char* varonce;
static int varonce_guard;
char* var5 /* : NativeString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
char* var10 /* : NativeString */;
char* var11 /* : NativeString */;
void* var13 /* : NativeString for extern */;
char* var_nulstr /* var nulstr: NativeString */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var_other19 /* var other: nullable Object */;
short int var20 /* : Bool */;
val* var22 /* : Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline environ#NativeString#get_environ (var1) on <var1:NativeString> */
var4 = string_NativeString_NativeString_get_environ_0(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_res = var2;
if (likely(varonce_guard)) {
var5 = varonce;
} else {
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "";
var9 = standard___standard__NativeString___to_s_with_length(var8, 0l);
var7 = var9;
varonce6 = var7;
}
{
var10 = ((char*(*)(val* self))(var7->class->vft[COLOR_standard__string__Text__to_cstring]))(var7); /* to_cstring on <var7:String>*/
}
{
{ /* Inline environ#NativeString#get_environ (var10) on <var10:NativeString> */
var13 = string_NativeString_NativeString_get_environ_0(var10);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var5 = var11;
varonce = var5;
varonce_guard = 1;
}
var_nulstr = var5;
{
{ /* Inline kernel#Object#!= (var_res,var_nulstr) on <var_res:NativeString> */
var16 = BOX_standard__NativeString(var_nulstr); /* autobox from NativeString to nullable Object */
var_other = var16;
{ /* Inline kernel#Object#== (var_res,var_other) on <var_res:NativeString> */
var_other19 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other19) on <var_res:NativeString> */
var22 = BOX_standard__NativeString(var_res); /* autobox from NativeString to Object */
var23 = var22 == var_other19 || (var_other19 != NULL && (!((long)var22&3)) && (!((long)var_other19&3)) && var22->class == var_other19->class && ((var22->class->box_kind == 3 && ((struct instance_standard__Byte*)var22)->value == ((struct instance_standard__Byte*)var_other19)->value) || (var22->class->box_kind == 5 && ((struct instance_standard__Float*)var22)->value == ((struct instance_standard__Float*)var_other19)->value) || (var22->class->box_kind == 6 && ((struct instance_standard__NativeString*)var22)->value == ((struct instance_standard__NativeString*)var_other19)->value) || (var22->class->box_kind == 7 && ((struct instance_standard__Pointer*)var22)->value == ((struct instance_standard__Pointer*)var_other19)->value)));
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var24 = !var17;
var14 = var24;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var25 = standard___standard__NativeString___Object__to_s(var_res);
}
var = var25;
goto RET_LABEL;
} else {
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "";
var29 = standard___standard__NativeString___to_s_with_length(var28, 0l);
var27 = var29;
varonce26 = var27;
}
var = var27;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method environ#NativeString#get_environ for (self: NativeString): NativeString */
char* standard__environ___NativeString___get_environ(char* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = string_NativeString_NativeString_get_environ_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#Sys#init for (self: Sys) */
void standard__environ___Sys___standard__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : String */;
val* var_x /* var x: String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__environ___Sys___standard__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "NIT_SRAND";
var2 = standard___standard__NativeString___to_s_with_length(var1, 9l);
var = var2;
varonce = var;
}
{
var3 = standard__environ___String___environ(var);
}
var_x = var3;
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var7 = standard___standard__NativeString___to_s_with_length(var6, 0l);
var5 = var7;
varonce4 = var5;
}
{
{ /* Inline kernel#Object#!= (var_x,var5) on <var_x:String> */
var_other = var5;
{
var10 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var_other); /* == on <var_x:String>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var12 = standard___standard__Text___to_i(var_x);
}
{
{ /* Inline math#Sys#srand_from (self,var12) on <self:Sys> */
kernel_Any_Any_srand_from_1(self, var12);
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
