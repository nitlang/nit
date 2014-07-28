#include "model_base.sep.0.h"
/* method model_base#Model#init for (self: Model) */
void model_base__Model__init(val* self) {
RET_LABEL:;
}
/* method model_base#Model#init for (self: Object) */
void VIRTUAL_model_base__Model__init(val* self) {
{ /* Inline model_base#Model#init (self) on <self:Object(Model)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model_base#MEntity#model for (self: MEntity): Model */
val* model_base__MEntity__model(val* self) {
val* var /* : Model */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "model", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model_base.nit", 31);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method model_base#MEntity#model for (self: Object): Model */
val* VIRTUAL_model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
const char* var_class_name;
{ /* Inline model_base#MEntity#model (self) on <self:Object(MEntity)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "model", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model_base.nit", 31);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MEntity#init for (self: MEntity) */
void model_base__MEntity__init(val* self) {
RET_LABEL:;
}
/* method model_base#MEntity#init for (self: Object) */
void VIRTUAL_model_base__MEntity__init(val* self) {
{ /* Inline model_base#MEntity#init (self) on <self:Object(MEntity)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model_base#MVisibility#to_s for (self: MVisibility): String */
val* model_base__MVisibility__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model_base__MVisibility___to_s].val; /* _to_s on <self:MVisibility> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model_base.nit", 56);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s for (self: Object): String */
val* VIRTUAL_model_base__MVisibility__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model_base#MVisibility#to_s (self) on <self:Object(MVisibility)> */
var3 = self->attrs[COLOR_model_base__MVisibility___to_s].val; /* _to_s on <self:Object(MVisibility)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model_base.nit", 56);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s= for (self: MVisibility, String) */
void model_base__MVisibility__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MVisibility___to_s].val = p0; /* _to_s on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#to_s= for (self: Object, String) */
void VIRTUAL_model_base__MVisibility__to_s_61d(val* self, val* p0) {
{ /* Inline model_base#MVisibility#to_s= (self,p0) on <self:Object(MVisibility)> */
self->attrs[COLOR_model_base__MVisibility___to_s].val = p0; /* _to_s on <self:Object(MVisibility)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model_base#MVisibility#level for (self: MVisibility): Int */
long model_base__MVisibility__level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model_base__MVisibility___level].l; /* _level on <self:MVisibility> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level for (self: Object): Int */
long VIRTUAL_model_base__MVisibility__level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline model_base#MVisibility#level (self) on <self:Object(MVisibility)> */
var3 = self->attrs[COLOR_model_base__MVisibility___level].l; /* _level on <self:Object(MVisibility)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level= for (self: MVisibility, Int) */
void model_base__MVisibility__level_61d(val* self, long p0) {
self->attrs[COLOR_model_base__MVisibility___level].l = p0; /* _level on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#level= for (self: Object, Int) */
void VIRTUAL_model_base__MVisibility__level_61d(val* self, long p0) {
{ /* Inline model_base#MVisibility#level= (self,p0) on <self:Object(MVisibility)> */
self->attrs[COLOR_model_base__MVisibility___level].l = p0; /* _level on <self:Object(MVisibility)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model_base#MVisibility#init for (self: MVisibility, String, Int) */
void model_base__MVisibility__init(val* self, val* p0, long p1) {
val* var_s /* var s: String */;
long var_level /* var level: Int */;
var_s = p0;
var_level = p1;
{
{ /* Inline model_base#MVisibility#to_s= (self,var_s) on <self:MVisibility> */
self->attrs[COLOR_model_base__MVisibility___to_s].val = var_s; /* _to_s on <self:MVisibility> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model_base#MVisibility#level= (self,var_level) on <self:MVisibility> */
self->attrs[COLOR_model_base__MVisibility___level].l = var_level; /* _level on <self:MVisibility> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method model_base#MVisibility#init for (self: Object, String, Int) */
void VIRTUAL_model_base__MVisibility__init(val* self, val* p0, long p1) {
model_base__MVisibility__init(self, p0, p1); /* Direct call model_base#MVisibility#init on <self:Object(MVisibility)>*/
RET_LABEL:;
}
/* method model_base#MVisibility#< for (self: MVisibility, MVisibility): Bool */
short int model_base__MVisibility___60d(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model_base.nit", 66);
show_backtrace(1);
}
var_other = p0;
{
{ /* Inline model_base#MVisibility#level (self) on <self:MVisibility> */
var4 = self->attrs[COLOR_model_base__MVisibility___level].l; /* _level on <self:MVisibility> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model_base#MVisibility#level (var_other) on <var_other:MVisibility> */
var7 = var_other->attrs[COLOR_model_base__MVisibility___level].l; /* _level on <var_other:MVisibility> */
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
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
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
/* method model_base#MVisibility#< for (self: Object, Comparable): Bool */
short int VIRTUAL_model_base__MVisibility___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model_base__MVisibility___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#intrude_visibility for (self: Object): MVisibility */
val* model_base__Object__intrude_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "intrude";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 5;
{
model_base__MVisibility__init(var2, var4, var8); /* Direct call model_base#MVisibility#init on <var2:MVisibility>*/
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
/* method model_base#Object#intrude_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__intrude_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__intrude_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#public_visibility for (self: Object): MVisibility */
val* model_base__Object__public_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "public";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 4;
{
model_base__MVisibility__init(var2, var4, var8); /* Direct call model_base#MVisibility#init on <var2:MVisibility>*/
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
/* method model_base#Object#public_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__public_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__public_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#protected_visibility for (self: Object): MVisibility */
val* model_base__Object__protected_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "protected";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 3;
{
model_base__MVisibility__init(var2, var4, var8); /* Direct call model_base#MVisibility#init on <var2:MVisibility>*/
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
/* method model_base#Object#protected_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__protected_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__protected_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#private_visibility for (self: Object): MVisibility */
val* model_base__Object__private_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "private";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 2;
{
model_base__MVisibility__init(var2, var4, var8); /* Direct call model_base#MVisibility#init on <var2:MVisibility>*/
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
/* method model_base#Object#private_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__private_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__private_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#none_visibility for (self: Object): MVisibility */
val* model_base__Object__none_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "none";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
model_base__MVisibility__init(var2, var4, var8); /* Direct call model_base#MVisibility#init on <var2:MVisibility>*/
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
/* method model_base#Object#none_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__none_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__none_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
