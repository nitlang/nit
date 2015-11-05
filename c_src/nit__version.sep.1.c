#include "nit__version.sep.0.h"
/* method version#Sys#nit_version for (self: Sys): String */
val* nit__version___standard__Sys___nit_version(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "v0.7.5-191-gba3a053";
var3 = standard___standard__NativeString___to_s_with_length(var2, 19l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
