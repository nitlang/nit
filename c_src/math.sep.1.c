#include "math.sep.0.h"
/* method math#Float#is_nan for (self: Float): Bool */
short int math__Float__is_nan(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = isnan(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_nan for (self: Object): Bool */
short int VIRTUAL_math__Float__is_nan(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
double var4 /* : Float */;
{ /* Inline math#Float#is_nan (self) on <self:Object(Float)> */
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var3 = isnan(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf for (self: Float): Int */
long math__Float__is_inf(double self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
double var4 /* : Float */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
{
{ /* Inline math#Float#is_inf_extern (self) on <self:Float> */
var3 = isinf(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = 0.0;
{
{ /* Inline kernel#Float#< (self,var4) on <self:Float> */
/* Covariant cast for argument 0 (i) <var4:Float> isa OTHER */
/* <var4:Float> isa OTHER */
var7 = 1; /* easy <var4:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 290);
show_backtrace(1);
}
var8 = self < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var9 = 1;
{
{ /* Inline kernel#Int#unary - (var9) on <var9:Int> */
var12 = -var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
}
var13 = 1;
var = var13;
goto RET_LABEL;
} else {
}
var14 = 0;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf for (self: Object): Int */
long VIRTUAL_math__Float__is_inf(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__is_inf(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf_extern for (self: Float): Bool */
short int math__Float__is_inf_extern(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = isinf(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf_extern for (self: Object): Bool */
short int VIRTUAL_math__Float__is_inf_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
double var4 /* : Float */;
{ /* Inline math#Float#is_inf_extern (self) on <self:Object(Float)> */
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var3 = isinf(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
