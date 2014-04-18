#include "math.sep.0.h"
/* method math#Int#rand for (self: Int): Int */
long math__Int__rand(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel_Int_Int_rand_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#rand for (self: Object): Int */
long VIRTUAL_math__Int__rand(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = math__Int__rand(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Int#bin_and for (self: Int, Int): Int */
long math__Int__bin_and(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel_Int_Int_binand_0(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_and for (self: Object, Int): Int */
long VIRTUAL_math__Int__bin_and(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = math__Int__bin_and(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Int#bin_or for (self: Int, Int): Int */
long math__Int__bin_or(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel_Int_Int_binor_0(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_or for (self: Object, Int): Int */
long VIRTUAL_math__Int__bin_or(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = math__Int__bin_or(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Int#bin_xor for (self: Int, Int): Int */
long math__Int__bin_xor(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel_Int_Int_binxor_0(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#bin_xor for (self: Object, Int): Int */
long VIRTUAL_math__Int__bin_xor(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = math__Int__bin_xor(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Int#sqrt for (self: Int): Int */
long math__Int__sqrt(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = math___Int_sqrt___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Int#sqrt for (self: Object): Int */
long VIRTUAL_math__Int__sqrt(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = math__Int__sqrt(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#sqrt for (self: Float): Float */
double math__Float__sqrt(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_sqrt_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#sqrt for (self: Object): Float */
double VIRTUAL_math__Float__sqrt(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__sqrt(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#cos for (self: Float): Float */
double math__Float__cos(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_cos_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#cos for (self: Object): Float */
double VIRTUAL_math__Float__cos(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__cos(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#sin for (self: Float): Float */
double math__Float__sin(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_sin_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#sin for (self: Object): Float */
double VIRTUAL_math__Float__sin(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__sin(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#tan for (self: Float): Float */
double math__Float__tan(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_tan_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#tan for (self: Object): Float */
double VIRTUAL_math__Float__tan(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__tan(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#acos for (self: Float): Float */
double math__Float__acos(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_acos_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#acos for (self: Object): Float */
double VIRTUAL_math__Float__acos(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__acos(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#asin for (self: Float): Float */
double math__Float__asin(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_asin_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#asin for (self: Object): Float */
double VIRTUAL_math__Float__asin(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__asin(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#atan for (self: Float): Float */
double math__Float__atan(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_atan_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#atan for (self: Object): Float */
double VIRTUAL_math__Float__atan(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__atan(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#abs for (self: Float): Float */
double math__Float__abs(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = math___Float_abs___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#abs for (self: Object): Float */
double VIRTUAL_math__Float__abs(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__abs(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#pow for (self: Float, Float): Float */
double math__Float__pow(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_pow_1(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#pow for (self: Object, Float): Float */
double VIRTUAL_math__Float__pow(val* self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__pow(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#log for (self: Float): Float */
double math__Float__log(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_log_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#log for (self: Object): Float */
double VIRTUAL_math__Float__log(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__log(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#exp for (self: Float): Float */
double math__Float__exp(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_exp_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#exp for (self: Object): Float */
double VIRTUAL_math__Float__exp(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__exp(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#rand for (self: Float): Float */
double math__Float__rand(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Float_Float_rand_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#rand for (self: Object): Float */
double VIRTUAL_math__Float__rand(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__rand(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#hypot_with for (self: Float, Float): Float */
double math__Float__hypot_with(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = hypotf(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#hypot_with for (self: Object, Float): Float */
double VIRTUAL_math__Float__hypot_with(val* self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__hypot_with(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#is_nan for (self: Float): Bool */
short int math__Float__is_nan(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = isnan(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_nan for (self: Object): Bool */
short int VIRTUAL_math__Float__is_nan(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__is_nan(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf for (self: Float): Int */
long math__Float__is_inf(double self) {
long var /* : Int */;
short int var1 /* : Bool */;
double var2 /* : Float */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
var1 = math__Float__is_inf_extern(self);
if (var1){
var2 = 0.0;
{ /* Inline kernel#Float#< (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var5 = 1; /* easy <var2:Float> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Float.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 233);
show_backtrace(1);
}
var6 = self < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = 1;
{ /* Inline kernel#Int#unary - (var7) */
var10 = -var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var = var8;
goto RET_LABEL;
} else {
}
var11 = 1;
var = var11;
goto RET_LABEL;
} else {
}
var12 = 0;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf for (self: Object): Int */
long VIRTUAL_math__Float__is_inf(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__is_inf(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf_extern for (self: Float): Bool */
short int math__Float__is_inf_extern(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = isinf(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Float#is_inf_extern for (self: Object): Bool */
short int VIRTUAL_math__Float__is_inf_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = math__Float__is_inf_extern(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Collection#rand for (self: Collection[nullable Object]): nullable Object */
val* math__Collection__rand(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_rand_index /* var rand_index: Int */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:Collection[nullable Object]>*/;
if (var1){
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/math.nit", 74);
show_backtrace(1);
} else {
}
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
var3 = math__Int__rand(var2);
var_rand_index = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_e = var6;
var7 = 0;
{ /* Inline kernel#Int#== (var_rand_index,var7) */
var10 = var_rand_index == var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var = var_e;
goto RET_LABEL;
} else {
}
var11 = 1;
{ /* Inline kernel#Int#- (var_rand_index,var11) */
var14 = var_rand_index - var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_rand_index = var12;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/math.nit", 81);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method math#Collection#rand for (self: Object): nullable Object */
val* VIRTUAL_math__Collection__rand(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = math__Collection__rand(self);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Object#atan2 for (self: Object, Float, Float): Float */
double math__Object__atan2(val* self, double p0, double p1) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Any_Any_atan2_2(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Object#atan2 for (self: Object, Float, Float): Float */
double VIRTUAL_math__Object__atan2(val* self, double p0, double p1) {
double var /* : Float */;
double var1 /* : Float */;
var1 = math__Object__atan2(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Object#pi for (self: Object): Float */
double math__Object__pi(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = kernel_Any_Any_pi_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math#Object#pi for (self: Object): Float */
double VIRTUAL_math__Object__pi(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = math__Object__pi(self);
var = var1;
RET_LABEL:;
return var;
}
/* method math#Object#srand_from for (self: Object, Int) */
void math__Object__srand_from(val* self, long p0) {
kernel_Any_Any_srand_from_1(self, p0);
RET_LABEL:;
}
/* method math#Object#srand_from for (self: Object, Int) */
void VIRTUAL_math__Object__srand_from(val* self, long p0) {
math__Object__srand_from(self, p0);
RET_LABEL:;
}
/* method math#Object#srand for (self: Object) */
void math__Object__srand(val* self) {
kernel_Any_Any_srand_0(self);
RET_LABEL:;
}
/* method math#Object#srand for (self: Object) */
void VIRTUAL_math__Object__srand(val* self) {
math__Object__srand(self);
RET_LABEL:;
}
