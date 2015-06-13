#include "standard__exec.sep.0.h"
/* method exec#Sys#system for (self: Sys, String): Int */
long standard__exec___Sys___system(val* self, val* p0) {
long var /* : Int */;
val* var_command /* var command: String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var4 /* : Int for extern */;
var_command = p0;
{
var1 = ((char*(*)(val* self))(var_command->class->vft[COLOR_standard__string__Text__to_cstring]))(var_command); /* to_cstring on <var_command:String>*/
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
/* method exec#NativeString#system for (self: NativeString): Int */
long standard__exec___NativeString___system(char* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = string_NativeString_NativeString_system_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
