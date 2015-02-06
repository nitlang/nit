#include "nit__version.sep.0.h"
/* method version#Object#nit_version for (self: Object): String */
val* nit__version___standard__Object___nit_version(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "v0.7.1-31-g67c594b_dirty";
var3 = 24;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
