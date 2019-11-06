#include "core__math.sep.0.h"
/* method math$Int$& for (self: Int, Int): Int */
long core__math___Int____38d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$| for (self: Int, Int): Int */
long core__math___Int____124d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Byte$& for (self: Byte, Byte): Byte */
unsigned char core__math___Byte____38d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$is_nan for (self: Float): Bool */
short int core__math___Float___is_nan(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__math___Float_is_nan___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$is_inf for (self: Float): Int */
long core__math___Float___is_inf(double self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
{
{ /* Inline math$Float$native_is_inf (self) on <self:Float> */
var3 = core__math___Float_native_is_inf___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Float$< (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var6 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var7 = self < 0.0;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var10 = -1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
} else {
}
var = 1l;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$native_is_inf for (self: Float): Bool */
short int core__math___Float___native_is_inf(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__math___Float_native_is_inf___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Sys$init for (self: Sys) */
void core__math___Sys___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__math___Sys___core__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
{
{ /* Inline math$Sys$srand (self) on <self:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__math___Sys_srand___impl(var_for_c_0);
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method math$Sys$srand_from for (self: Sys, Int) */
void core__math___Sys___srand_from(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__math___Sys_srand_from___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method math$Sys$srand for (self: Sys) */
void core__math___Sys___srand(val* self) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__math___Sys_srand___impl(var_for_c_0);
RET_LABEL:;
}
