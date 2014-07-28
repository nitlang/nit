#include "exec.sep.0.h"
/* method exec#Sys#system for (self: Sys, String): Int */
long exec__Sys__system(val* self, val* p0) {
long var /* : Int */;
val* var_command /* var command: String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var4 /* : Int */;
var_command = p0;
{
var1 = string__FlatString__to_cstring(var_command);
}
{
{ /* Inline exec#NativeString#system (var1) on <var1:NativeString> */
var4 = string_NativeString_NativeString_system_0(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Sys#system for (self: Object, String): Int */
long VIRTUAL_exec__Sys__system(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec__Sys__system(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeString#system for (self: NativeString): Int */
long exec__NativeString__system(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_NativeString_NativeString_system_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeString#system for (self: Object): Int */
long VIRTUAL_exec__NativeString__system(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
char* var4 /* : NativeString */;
{ /* Inline exec#NativeString#system (self) on <self:Object(NativeString)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var3 = string_NativeString_NativeString_system_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
