#include "environ.sep.0.h"
/* method environ#String#environ for (self: String): String */
val* environ__String__environ(val* self) {
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
long var9 /* : Int */;
val* var10 /* : FlatString */;
char* var11 /* : NativeString */;
char* var12 /* : NativeString */;
void* var14 /* : NativeString for extern */;
char* var_nulstr /* var nulstr: NativeString */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
val* var_other21 /* var other: nullable Object */;
short int var22 /* : Bool */;
val* var24 /* : Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
{
var1 = string__FlatString__to_cstring(self);
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
if (varonce_guard) {
var5 = varonce;
} else {
if (varonce6) {
var7 = varonce6;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
var11 = string__FlatString__to_cstring(var7);
}
{
{ /* Inline environ#NativeString#get_environ (var11) on <var11:NativeString> */
var14 = string_NativeString_NativeString_get_environ_0(var11);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var5 = var12;
varonce = var5;
varonce_guard = 1;
}
var_nulstr = var5;
{
{ /* Inline kernel#Object#!= (var_res,var_nulstr) on <var_res:NativeString> */
var18 = BOX_string__NativeString(var_nulstr); /* autobox from NativeString to nullable Object */
var_other = var18;
{ /* Inline kernel#Object#== (var_res,var_other) on <var_res:NativeString> */
var_other21 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other21) on <var_res:NativeString> */
var24 = BOX_string__NativeString(var_res); /* autobox from NativeString to Object */
var25 = var24 == var_other21 || (var_other21 != NULL && var24->class == var_other21->class && ((var24->class->box_kind == 1 && ((struct instance_kernel__Int*)var24)->value == ((struct instance_kernel__Int*)var_other21)->value) || (var24->class->box_kind == 2 && ((struct instance_kernel__Bool*)var24)->value == ((struct instance_kernel__Bool*)var_other21)->value) || (var24->class->box_kind == 3 && ((struct instance_kernel__Char*)var24)->value == ((struct instance_kernel__Char*)var_other21)->value) || (var24->class->box_kind == 4 && ((struct instance_kernel__Float*)var24)->value == ((struct instance_kernel__Float*)var_other21)->value) || (var24->class->box_kind == 5 && ((struct instance_string__NativeString*)var24)->value == ((struct instance_string__NativeString*)var_other21)->value) || (var24->class->box_kind == 6 && ((struct instance_kernel__Pointer*)var24)->value == ((struct instance_kernel__Pointer*)var_other21)->value)));
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var26 = !var19;
var16 = var26;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
var27 = string__NativeString__to_s(var_res);
}
var = var27;
goto RET_LABEL;
} else {
if (varonce28) {
var29 = varonce28;
} else {
var30 = "";
var31 = 0;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var = var29;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method environ#String#environ for (self: Object): String */
val* VIRTUAL_environ__String__environ(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = environ__String__environ(self);
var = var1;
RET_LABEL:;
return var;
}
/* method environ#NativeString#get_environ for (self: NativeString): NativeString */
char* environ__NativeString__get_environ(char* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = string_NativeString_NativeString_get_environ_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#NativeString#get_environ for (self: Object): NativeString */
char* VIRTUAL_environ__NativeString__get_environ(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
void* var3 /* : NativeString for extern */;
char* var4 /* : NativeString */;
{ /* Inline environ#NativeString#get_environ (self) on <self:Object(NativeString)> */
var4 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var3 = string_NativeString_NativeString_get_environ_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
