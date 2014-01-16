#include "environ.sep.0.h"
/* method environ#String#environ for (self: String): String */
val* environ__String__environ(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var_res /* var res: NativeString */;
static char* varonce;
static int varonce_guard;
char* var3 /* : NativeString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
char* var9 /* : NativeString */;
char* var10 /* : NativeString */;
char* var_nulstr /* var nulstr: NativeString */;
short int var11 /* : Bool */;
val* var12 /* : Object */;
val* var13 /* : nullable Object */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var2 = environ__NativeString__get_environ(var1);
var_res = var2;
if (varonce_guard) {
var3 = varonce;
} else {
if (varonce4) {
var5 = varonce4;
} else {
var6 = "";
var7 = 0;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
var9 = ((char* (*)(val*))(var5->class->vft[COLOR_string__String__to_cstring]))(var5) /* to_cstring on <var5:String>*/;
var10 = environ__NativeString__get_environ(var9);
var3 = var10;
varonce = var3;
varonce_guard = 1;
}
var_nulstr = var3;
var12 = BOX_string__NativeString(var_res); /* autobox from NativeString to Object */
var13 = BOX_string__NativeString(var_nulstr); /* autobox from NativeString to nullable Object */
var11 = kernel__Object___33d_61d(var12, var13);
if (var11){
var14 = string__NativeString__to_s(var_res);
var = var14;
goto RET_LABEL;
} else {
if (varonce15) {
var16 = varonce15;
} else {
var17 = "";
var18 = 0;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var = var16;
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
/* method environ#String#setenv for (self: String, String) */
void environ__String__setenv(val* self, val* p0) {
val* var_v /* var v: String */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var_v = p0;
var = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var1 = ((char* (*)(val*))(var_v->class->vft[COLOR_string__String__to_cstring]))(var_v) /* to_cstring on <var_v:String>*/;
environ__NativeString__setenv(var, var1);
RET_LABEL:;
}
/* method environ#String#setenv for (self: Object, String) */
void VIRTUAL_environ__String__setenv(val* self, val* p0) {
environ__String__setenv(self, p0);
RET_LABEL:;
}
/* method environ#NativeString#get_environ for (self: NativeString): NativeString */
char* environ__NativeString__get_environ(char* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
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
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = environ__NativeString__get_environ(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method environ#NativeString#setenv for (self: NativeString, NativeString) */
void environ__NativeString__setenv(char* self, char* p0) {
string_NativeString_NativeString_setenv_1(self, p0);
RET_LABEL:;
}
/* method environ#NativeString#setenv for (self: Object, NativeString) */
void VIRTUAL_environ__NativeString__setenv(val* self, char* p0) {
char* var /* : NativeString */;
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
environ__NativeString__setenv(var, p0);
RET_LABEL:;
}
