#include "version.sep.0.h"
/* method version#Object#nit_version for (self: Object): String */
val* version__Object__nit_version(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "v0.6.6-321-g6277c0a";
var3 = 19;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method version#Object#nit_version for (self: Object): String */
val* VIRTUAL_version__Object__nit_version(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = version__Object__nit_version(self);
var = var1;
RET_LABEL:;
return var;
}
