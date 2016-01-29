#include "core__utf8.sep.0.h"
/* method utf8#Sys#utf8_coder for (self: Sys): Coder */
val* core__utf8___Sys___utf8_coder(val* self) {
val* var /* : Coder */;
static val* varonce;
static int varonce_guard;
val* var1 /* : UTF8Coder */;
val* var2 /* : UTF8Coder */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__utf8__UTF8Coder(&type_core__utf8__UTF8Coder);
{
{ /* Inline kernel#Object#init (var2) on <var2:UTF8Coder> */
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
/* method utf8#Sys#utf8_decoder for (self: Sys): Decoder */
val* core__utf8___Sys___utf8_decoder(val* self) {
val* var /* : Decoder */;
static val* varonce;
static int varonce_guard;
val* var1 /* : UTF8Decoder */;
val* var2 /* : UTF8Decoder */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__utf8__UTF8Decoder(&type_core__utf8__UTF8Decoder);
{
{ /* Inline kernel#Object#init (var2) on <var2:UTF8Decoder> */
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
