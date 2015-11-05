#include "counter.sep.0.h"
/* method counter#Sys#div for (self: Sys, Int, Int): String */
val* counter___standard__Sys___div(val* self, long p0, long p1) {
val* var /* : String */;
long var_n /* var n: Int */;
long var_d /* var d: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
double var18 /* : Float */;
double var20 /* : Float */;
double var21 /* : Float */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
double var27 /* : Float */;
val* var28 /* : String */;
var_n = p0;
var_d = p1;
{
{ /* Inline kernel#Int#== (var_d,0l) on <var_d:Int> */
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
var6 = standard___standard__NativeString___to_s_with_length(var5, 2l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#* (100l,var_n) on <100l:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var9 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var10 = 100l * var_n;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var7,var_d) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var_d:Int> isa OTHER */
/* <var_d:Int> isa OTHER */
var13 = 1; /* easy <var_d:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 542);
fatal_exit(1);
}
var17 = var7 / var_d;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#to_f (var11) on <var11:Int> */
var20 = (double)var11;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var18,100.0) on <var18:Float> */
/* Covariant cast for argument 0 (i) <100.0:Float> isa OTHER */
/* <100.0:Float> isa OTHER */
var23 = 1; /* easy <100.0:Float> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 349);
fatal_exit(1);
}
var27 = var18 / 100.0;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = standard__string___Float___to_precision(var21, 2l);
}
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
