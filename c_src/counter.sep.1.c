#include "counter.sep.0.h"
/* method counter$Sys$div for (self: Sys, Int, Int): String */
val* counter___core__Sys___div(val* self, long p0, long p1) {
val* var /* : String */;
long var_n /* var n: Int */;
long var_d /* var d: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
double var22 /* : Float */;
double var24 /* : Float */;
double var25 /* : Float */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
double var31 /* : Float */;
val* var32 /* : String */;
var_n = p0;
var_d = p1;
{
{ /* Inline kernel$Int$== (var_d,0l) on <var_d:Int> */
var3 = var_d == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "na";
var7 = (val*)(2l<<2|1);
var8 = (val*)(2l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$* (100l,var_n) on <100l:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var13 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var14 = 100l * var_n;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel$Int$/ (var11,var_d) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var_d:Int> isa OTHER */
/* <var_d:Int> isa OTHER */
var17 = 1; /* easy <var_d:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var21 = var11 / var_d;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$to_f (var15) on <var15:Int> */
var24 = (double)var15;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Float$/ (var22,100.0) on <var22:Float> */
/* Covariant cast for argument 0 (i) <100.0:Float> isa OTHER */
/* <100.0:Float> isa OTHER */
var27 = 1; /* easy <100.0:Float> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var31 = var22 / 100.0;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var32 = core__abstract_text___Float___to_precision(var25, 2l);
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
