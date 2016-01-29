#include "nitc__version.sep.0.h"
/* method version#Sys#nit_version for (self: Sys): String */
val* nitc__version___core__Sys___nit_version(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "v0.7.9-559-gaa72992";
var3 = core__flat___NativeString___to_s_full(var2, 19l, 19l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
