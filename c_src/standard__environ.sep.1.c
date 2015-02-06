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
long var9 /* : Int */;
val* var10 /* : FlatString */;
char* var11 /* : NativeString */;
char* var12 /* : NativeString */;
void* var14 /* : NativeString for extern */;
char* var_nulstr /* var nulstr: NativeString */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
val* var23 /* : Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
{
var1 = ((char* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self) /* to_cstring on <self:String>*/;
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
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
var11 = ((char* (*)(val* self))(var7->class->vft[COLOR_standard__string__Text__to_cstring]))(var7) /* to_cstring on <var7:String>*/;
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
var17 = BOX_standard__NativeString(var_nulstr); /* autobox from NativeString to nullable Object */
var_other = var17;
{ /* Inline kernel#Object#== (var_res,var_other) on <var_res:NativeString> */
var_other20 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other20) on <var_res:NativeString> */
var23 = BOX_standard__NativeString(var_res); /* autobox from NativeString to Object */
var24 = var23 == var_other20 || (var_other20 != NULL && var23->class == var_other20->class && ((var23->class->box_kind == 1 && ((struct instance_standard__Int*)var23)->value == ((struct instance_standard__Int*)var_other20)->value) || (var23->class->box_kind == 2 && ((struct instance_standard__Bool*)var23)->value == ((struct instance_standard__Bool*)var_other20)->value) || (var23->class->box_kind == 3 && ((struct instance_standard__Char*)var23)->value == ((struct instance_standard__Char*)var_other20)->value) || (var23->class->box_kind == 4 && ((struct instance_standard__Float*)var23)->value == ((struct instance_standard__Float*)var_other20)->value) || (var23->class->box_kind == 5 && ((struct instance_standard__NativeString*)var23)->value == ((struct instance_standard__NativeString*)var_other20)->value) || (var23->class->box_kind == 6 && ((struct instance_standard__Pointer*)var23)->value == ((struct instance_standard__Pointer*)var_other20)->value)));
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var25 = !var18;
var15 = var25;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var26 = standard___standard__NativeString___Object__to_s(var_res);
}
var = var26;
goto RET_LABEL;
} else {
if (varonce27) {
var28 = varonce27;
} else {
var29 = "";
var30 = 0;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var = var28;
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
