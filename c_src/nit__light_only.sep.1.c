#include "nit__light_only.sep.0.h"
/* method light_only#MClassType#cname_normal_class for (self: MClassType): String */
val* nit__light_only___MClassType___cname_normal_class(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "void*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 5l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_only#AMethPropdef#accept_externmeth for (self: AMethPropdef): Bool */
short int nit__light_only___AMethPropdef___accept_externmeth(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable AExternCalls */;
val* var3 /* : nullable AExternCalls */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_calls (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable AExternCalls> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable AExternCalls(AExternCalls)> */
var9 = var1 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
