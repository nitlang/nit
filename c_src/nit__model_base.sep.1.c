#include "nit__model_base.sep.0.h"
/* method model_base#MEntity#full_name for (self: MEntity): String */
val* nit___nit__MEntity___full_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "full_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_base, 37);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base#MEntity#c_name for (self: MEntity): String */
val* nit___nit__MEntity___c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_base, 50);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base#MEntity#model for (self: MEntity): Model */
val* nit___nit__MEntity___model(val* self) {
val* var /* : Model */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "model", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_base, 65);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s for (self: MVisibility): String */
val* nit___nit__MVisibility___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model_base__MVisibility___to_s].val; /* _to_s on <self:MVisibility> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_base, 91);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s= for (self: MVisibility, String) */
void nit___nit__MVisibility___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model_base__MVisibility___to_s].val = p0; /* _to_s on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#level for (self: MVisibility): Int */
long nit___nit__MVisibility___level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model_base__MVisibility___level].l; /* _level on <self:MVisibility> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level= for (self: MVisibility, Int) */
void nit___nit__MVisibility___level_61d(val* self, long p0) {
self->attrs[COLOR_nit__model_base__MVisibility___level].l = p0; /* _level on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#< for (self: MVisibility, MVisibility): Bool */
short int nit___nit__MVisibility___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: MVisibility */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:MVisibility> isa OTHER */
/* <p0:MVisibility> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model_base, 97);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline model_base#MVisibility#level (self) on <self:MVisibility> */
var4 = self->attrs[COLOR_nit__model_base__MVisibility___level].l; /* _level on <self:MVisibility> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model_base#MVisibility#level (var_other) on <var_other:MVisibility> */
var7 = var_other->attrs[COLOR_nit__model_base__MVisibility___level].l; /* _level on <var_other:MVisibility> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var14 = var2 < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#init for (self: MVisibility) */
void nit___nit__MVisibility___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__MVisibility___standard__kernel__Object__init]))(self); /* init on <self:MVisibility>*/
}
RET_LABEL:;
}
/* method model_base#Sys#intrude_visibility for (self: Sys): MVisibility */
val* nit__model_base___standard__Sys___intrude_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MVisibility(&type_nit__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "intrude";
var6 = standard___standard__NativeString___to_s_with_length(var5, 7l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__level_61d]))(var2, 5l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base#Sys#public_visibility for (self: Sys): MVisibility */
val* nit__model_base___standard__Sys___public_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MVisibility(&type_nit__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "public";
var6 = standard___standard__NativeString___to_s_with_length(var5, 6l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__level_61d]))(var2, 4l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base#Sys#protected_visibility for (self: Sys): MVisibility */
val* nit__model_base___standard__Sys___protected_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MVisibility(&type_nit__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "protected";
var6 = standard___standard__NativeString___to_s_with_length(var5, 9l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__level_61d]))(var2, 3l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base#Sys#private_visibility for (self: Sys): MVisibility */
val* nit__model_base___standard__Sys___private_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MVisibility(&type_nit__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "private";
var6 = standard___standard__NativeString___to_s_with_length(var5, 7l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__level_61d]))(var2, 2l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base#Sys#none_visibility for (self: Sys): MVisibility */
val* nit__model_base___standard__Sys___none_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__MVisibility(&type_nit__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "none";
var6 = standard___standard__NativeString___to_s_with_length(var5, 4l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nit__model_base__MVisibility__level_61d]))(var2, 1l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
