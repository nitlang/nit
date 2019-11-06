#include "core__environ.sep.0.h"
/* method environ$String$environ for (self: String): String */
val* core__environ___String___environ(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
char* var_res /* var res: CString */;
static char* varonce;
static int varonce_guard;
char* var5 /* : CString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
char* var14 /* : CString */;
char* var15 /* : CString */;
char* var17 /* : CString */;
char* var_nulstr /* var nulstr: CString */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline environ$CString$get_environ (var1) on <var1:CString> */
var4 = core__environ___CString_get_environ___impl(var1);
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
var10 = (val*)(0l<<2|1);
var11 = (val*)(0l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
{
var14 = ((char*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var7); /* to_cstring on <var7:String>*/
}
{
{ /* Inline environ$CString$get_environ (var14) on <var14:CString> */
var17 = core__environ___CString_get_environ___impl(var14);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var5 = var15;
varonce = var5;
varonce_guard = 1;
}
var_nulstr = var5;
{
{ /* Inline native$CString$!= (var_res,var_nulstr) on <var_res:CString> */
var20 = var_res == var_nulstr;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
var22 = core__flat___CString___core__abstract_text__Object__to_s(var_res);
}
var = var22;
goto RET_LABEL;
} else {
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "";
var27 = (val*)(0l<<2|1);
var28 = (val*)(0l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
var = var24;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method environ$CString$get_environ for (self: CString): CString */
char* core__environ___CString___get_environ(char* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = core__environ___CString_get_environ___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ$Sys$init for (self: Sys) */
void core__environ___Sys___core__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : String */;
val* var_x /* var x: String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__environ___Sys___core__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "NIT_SRAND";
var3 = (val*)(9l<<2|1);
var4 = (val*)(9l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = core__environ___String___environ(var);
}
var_x = var7;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "";
var12 = (val*)(0l<<2|1);
var13 = (val*)(0l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
{
{ /* Inline kernel$Object$!= (var_x,var9) on <var_x:String> */
var_other = var9;
{
var18 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var_other); /* == on <var_x:String>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
var20 = core__fixed_ints_text___Text___to_i(var_x);
}
{
{ /* Inline math$Sys$srand_from (self,var20) on <self:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__math___Sys_srand_from___impl(var_for_c_0, var20);
RET_LABEL21:(void)0;
}
}
} else {
}
RET_LABEL:;
}
