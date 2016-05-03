#include "core__environ.sep.0.h"
/* method environ#String#environ for (self: String): String */
val* core__environ___String___environ(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_res /* var res: NativeString */;
static char* varonce;
static int varonce_guard;
char* var5 /* : NativeString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
char* var10 /* : NativeString */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_nulstr /* var nulstr: NativeString */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline environ#NativeString#get_environ (var1) on <var1:NativeString> */
var4 = environ___NativeString_get_environ___impl(var1);
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
var9 = core__flat___NativeString___to_s_full(var8, 0l, 0l);
var7 = var9;
varonce6 = var7;
}
{
var10 = ((char*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var7); /* to_cstring on <var7:String>*/
}
{
{ /* Inline environ#NativeString#get_environ (var10) on <var10:NativeString> */
var13 = environ___NativeString_get_environ___impl(var10);
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
{ /* Inline native#NativeString#!= (var_res,var_nulstr) on <var_res:NativeString> */
var16 = var_res == var_nulstr;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var18 = core__flat___NativeString___core__abstract_text__Object__to_s(var_res);
}
var = var18;
goto RET_LABEL;
} else {
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "";
var22 = core__flat___NativeString___to_s_full(var21, 0l, 0l);
var20 = var22;
varonce19 = var20;
}
var = var20;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method environ#NativeString#get_environ for (self: NativeString): NativeString */
char* core__environ___NativeString___get_environ(char* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = environ___NativeString_get_environ___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#Sys#init for (self: Sys) */
void core__environ___Sys___core__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var_x /* var x: String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__environ___Sys___core__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "NIT_SRAND";
var2 = core__flat___NativeString___to_s_full(var1, 9l, 9l);
var = var2;
varonce = var;
}
{
var3 = core__environ___String___environ(var);
}
var_x = var3;
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var7 = core__flat___NativeString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce4 = var5;
}
{
{ /* Inline kernel#Object#!= (var_x,var5) on <var_x:String> */
var_other = var5;
{
var10 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var_other); /* == on <var_x:String>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var12 = core__fixed_ints___Text___to_i(var_x);
}
{
{ /* Inline math#Sys#srand_from (self,var12) on <self:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
math___Sys_srand_from___impl(var_for_c_0, var12);
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
