#include "core__utf8.sep.0.h"
/* method utf8$Sys$utf8_codec for (self: Sys): Codec */
val* core__utf8___Sys___utf8_codec(val* self) {
val* var /* : Codec */;
static val* varonce;
static int varonce_guard;
val* var1 /* : UTF8Codec */;
val* var2 /* : UTF8Codec */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__utf8__UTF8Codec(&type_core__utf8__UTF8Codec);
{
{ /* Inline kernel$Object$init (var2) on <var2:UTF8Codec> */
RET_LABEL3:(void)0;
}
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
