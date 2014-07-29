#include "kernel.sep.0.h"
/* method kernel#Object#object_id for (self: Object): Int */
long kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#object_id for (self: Object): Int */
long VIRTUAL_kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Object#object_id (self) on <self:Object> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_instance for (self: Object, nullable Object): Bool */
short int kernel__Object__is_same_instance(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self == p0 || (p0 != NULL && self->class == p0->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)p0)->value) || (self->class->box_kind == 5 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)p0)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)p0)->value)));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_instance for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Object__is_same_instance(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Object#is_same_instance (self,p0) on <self:Object> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)p0)->value) || (self->class->box_kind == 5 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)p0)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)p0)->value)));
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#== for (self: Object, nullable Object): Bool */
short int kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other) on <self:Object> */
var3 = self == var_other || (var_other != NULL && self->class == var_other->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)var_other)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)var_other)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)var_other)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)var_other)->value)));
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
{ /* Inline kernel#Object#== (self,p0) on <self:Object> */
var_other = p0;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other) on <self:Object> */
var5 = self == var_other || (var_other != NULL && self->class == var_other->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)var_other)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)var_other)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)var_other)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)var_other)->value)));
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#!= for (self: Object, nullable Object): Bool */
short int kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
{
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Object___61d_61d]))(self, var_other) /* == on <self:Object>*/;
var1 = var2;
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{ /* Inline kernel#Object#!= (self,p0) on <self:Object> */
var_other = p0;
{
var4 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Object___61d_61d]))(self, var_other) /* == on <self:Object>*/;
var3 = var4;
}
var5 = !var3;
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#exit for (self: Object, Int) */
void kernel__Object__exit(val* self, long p0) {
exit(p0);
RET_LABEL:;
}
/* method kernel#Object#exit for (self: Object, Int) */
void VIRTUAL_kernel__Object__exit(val* self, long p0) {
{ /* Inline kernel#Object#exit (self,p0) on <self:Object> */
exit(p0);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Object#sys for (self: Object): Sys */
val* kernel__Object__sys(val* self) {
val* var /* : Sys */;
val* var1 /* : Sys */;
var1 = glob_sys;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#sys for (self: Object): Sys */
val* VIRTUAL_kernel__Object__sys(val* self) {
val* var /* : Sys */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
{ /* Inline kernel#Object#sys (self) on <self:Object> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#hash for (self: Object): Int */
long kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
{
var1 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:Object>*/;
}
var2 = 8;
{
{ /* Inline kernel#Int#/ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var6 = var1 / var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#hash for (self: Object): Int */
long VIRTUAL_kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel__Object__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Sys#errno for (self: Sys): Int */
long kernel__Sys__errno(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = kernel___Sys_errno___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Sys#errno for (self: Object): Int */
long VIRTUAL_kernel__Sys__errno(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Sys#errno (self) on <self:Object(Sys)> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var3 = kernel___Sys_errno___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Sys#init for (self: Sys) */
void kernel__Sys__init(val* self) {
RET_LABEL:;
}
/* method kernel#Sys#init for (self: Object) */
void VIRTUAL_kernel__Sys__init(val* self) {
{ /* Inline kernel#Sys#init (self) on <self:Object(Sys)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Comparable#<= for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 111);
show_backtrace(1);
}
var_other = p0;
{
var2 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Comparable___60d]))(var_other, self) /* < on <var_other:Comparable>*/;
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___60d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#>= for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 115);
show_backtrace(1);
}
var_other = p0;
{
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d]))(self, var_other) /* < on <self:Comparable>*/;
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___62d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#> for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 119);
show_backtrace(1);
}
var_other = p0;
{
var2 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Comparable___60d]))(var_other, self) /* < on <var_other:Comparable>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___62d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<=> for (self: Comparable, Comparable): Int */
long kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 122);
show_backtrace(1);
}
var_other = p0;
{
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d]))(self, var_other) /* < on <self:Comparable>*/;
}
if (var2){
var3 = 1;
{
{ /* Inline kernel#Int#unary - (var3) on <var3:Int> */
var6 = -var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
} else {
{
var7 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Comparable___60d]))(var_other, self) /* < on <var_other:Comparable>*/;
}
if (var7){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
var9 = 0;
var = var9;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<=> for (self: Object, Comparable): Int */
long VIRTUAL_kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel__Comparable___60d_61d_62d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#object_id for (self: Bool): Int */
long kernel__Bool__object_id(short int self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#object_id for (self: Object): Int */
long VIRTUAL_kernel__Bool__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
{ /* Inline kernel#Bool#object_id (self) on <self:Object(Bool)> */
var3 = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#== for (self: Bool, nullable Object): Bool */
short int kernel__Bool___61d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Bool);
if (var1) {
var2 = ((struct instance_kernel__Bool*)p0)->value; /* autounbox from nullable Object to Bool */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Bool___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Bool#== (self,p0) on <self:Object(Bool)> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#!= for (self: Bool, nullable Object): Bool */
short int kernel__Bool___33d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Bool);
if (var1) {
var2 = ((struct instance_kernel__Bool*)p0)->value; /* autounbox from nullable Object to Bool */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Bool___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Bool#!= (self,p0) on <self:Object(Bool)> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#hash for (self: Bool): Int */
long kernel__Bool__hash(short int self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = kernel__Bool__to_i(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#hash for (self: Object): Int */
long VIRTUAL_kernel__Bool__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var2 = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
var1 = kernel__Bool__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#to_i for (self: Bool): Int */
long kernel__Bool__to_i(short int self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
if (self){
var1 = 1;
var = var1;
goto RET_LABEL;
} else {
var2 = 0;
var = var2;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Bool#to_i for (self: Object): Int */
long VIRTUAL_kernel__Bool__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var2 = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
var1 = kernel__Bool__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#object_id for (self: Float): Int */
long kernel__Float__object_id(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#object_id for (self: Object): Int */
long VIRTUAL_kernel__Float__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel#Float#object_id (self) on <self:Object(Float)> */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#<= for (self: Float, Float): Bool */
short int kernel__Float___60d_61d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 289);
show_backtrace(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Float___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#<= (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 289);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#< for (self: Float, Float): Bool */
short int kernel__Float___60d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 290);
show_backtrace(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#< for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Float___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#< (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 290);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#>= for (self: Float, Float): Bool */
short int kernel__Float___62d_61d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 291);
show_backtrace(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Float___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#>= (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 291);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#> for (self: Float, Float): Bool */
short int kernel__Float___62d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 292);
show_backtrace(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Float___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var6 /* : Bool */;
{ /* Inline kernel#Float#> (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 292);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#+ for (self: Float, Float): Float */
double kernel__Float___43d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 294);
show_backtrace(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#+ for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Float___43d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#+ (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 294);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#unary - for (self: Float): Float */
double kernel__Float__unary_32d_45d(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#unary - for (self: Object): Numeric */
val* VIRTUAL_kernel__Float__unary_32d_45d(val* self) {
val* var /* : Numeric */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
{ /* Inline kernel#Float#unary - (self) on <self:Object(Float)> */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Float(var1); /* autobox from Float to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Float#- for (self: Float, Float): Float */
double kernel__Float___45d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 296);
show_backtrace(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#- for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Float___45d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#- (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 296);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#* for (self: Float, Float): Float */
double kernel__Float___42d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 297);
show_backtrace(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#* for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Float___42d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#* (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 297);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#/ for (self: Float, Float): Float */
double kernel__Float___47d(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var2 /* : Float */;
/* Covariant cast for argument 0 (i) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 298);
show_backtrace(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#/ for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Float___47d(val* self, val* p0) {
val* var /* : Numeric */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Float#/ (self,p0) on <self:Object(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 298);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var5 = ((struct instance_kernel__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_i for (self: Float): Int */
long kernel__Float__to_i(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_i for (self: Object): Int */
long VIRTUAL_kernel__Float__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel#Float#to_i (self) on <self:Object(Float)> */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_f for (self: Float): Float */
double kernel__Float__to_f(double self) {
double var /* : Float */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_f for (self: Object): Float */
double VIRTUAL_kernel__Float__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = kernel__Float__to_f(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#successor for (self: Int, Int): Int */
long kernel__Int__successor(long self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#+ (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var3 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var4 = self + var_i;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#successor for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Int__successor(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Discrete */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__successor(var2, p0);
var3 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Int#predecessor for (self: Int, Int): Int */
long kernel__Int__predecessor(long self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#- (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var3 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var4 = self - var_i;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#predecessor for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Int__predecessor(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Discrete */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__predecessor(var2, p0);
var3 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method kernel#Int#object_id for (self: Int): Int */
long kernel__Int__object_id(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#object_id for (self: Object): Int */
long VIRTUAL_kernel__Int__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Int#object_id (self) on <self:Object(Int)> */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#hash for (self: Int): Int */
long kernel__Int__hash(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#hash for (self: Object): Int */
long VIRTUAL_kernel__Int__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#== for (self: Int, nullable Object): Bool */
short int kernel__Int___61d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Int);
if (var1) {
var2 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from nullable Object to Int */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Int___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Int#== (self,p0) on <self:Object(Int)> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#!= for (self: Int, nullable Object): Bool */
short int kernel__Int___33d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Int);
if (var1) {
var2 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from nullable Object to Int */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Int___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Int#!= (self,p0) on <self:Object(Int)> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#<= for (self: Int, Int): Bool */
short int kernel__Int___60d_61d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#<= (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#< for (self: Int, Int): Bool */
short int kernel__Int___60d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#< for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#< (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#>= for (self: Int, Int): Bool */
short int kernel__Int___62d_61d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#>= (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#> for (self: Int, Int): Bool */
short int kernel__Int___62d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#> (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#+ for (self: Int, Int): Int */
long kernel__Int___43d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#+ for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Int___43d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#+ (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Numeric to Int */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Int(var1); /* autobox from Int to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#unary - for (self: Int): Int */
long kernel__Int__unary_32d_45d(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#unary - for (self: Object): Numeric */
val* VIRTUAL_kernel__Int__unary_32d_45d(val* self) {
val* var /* : Numeric */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Numeric */;
{ /* Inline kernel#Int#unary - (self) on <self:Object(Int)> */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Int(var1); /* autobox from Int to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Int#- for (self: Int, Int): Int */
long kernel__Int___45d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#- for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Int___45d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#- (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Numeric to Int */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Int(var1); /* autobox from Int to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#* for (self: Int, Int): Int */
long kernel__Int___42d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 332);
show_backtrace(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#* for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Int___42d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#* (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 332);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Numeric to Int */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Int(var1); /* autobox from Int to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#/ for (self: Int, Int): Int */
long kernel__Int___47d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var2 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#/ for (self: Object, Numeric): Numeric */
val* VIRTUAL_kernel__Int___47d(val* self, val* p0) {
val* var /* : Numeric */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
val* var7 /* : Numeric */;
{ /* Inline kernel#Int#/ (self,p0) on <self:Object(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Numeric to Int */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_kernel__Int(var1); /* autobox from Int to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel#Int#% for (self: Int, Int): Int */
long kernel__Int___37d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#% for (self: Object, Int): Int */
long VIRTUAL_kernel__Int___37d(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#% (self,p0) on <self:Object(Int)> */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 % p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#lshift for (self: Int, Int): Int */
long kernel__Int__lshift(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#lshift for (self: Object, Int): Int */
long VIRTUAL_kernel__Int__lshift(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#lshift (self,p0) on <self:Object(Int)> */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 << p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_i for (self: Int): Int */
long kernel__Int__to_i(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_i for (self: Object): Int */
long VIRTUAL_kernel__Int__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_f for (self: Int): Float */
double kernel__Int__to_f(long self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_f for (self: Object): Float */
double VIRTUAL_kernel__Int__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
long var3 /* : Int */;
double var4 /* : Float */;
{ /* Inline kernel#Int#to_f (self) on <self:Object(Int)> */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#distance for (self: Int, Int): Int */
long kernel__Int__distance(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
long var8 /* : Int */;
long var_d /* var d: Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 352);
show_backtrace(1);
}
var_i = p0;
{
{ /* Inline kernel#Int#- (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_d = var2;
var9 = 0;
{
{ /* Inline kernel#Int#>= (var_d,var9) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var16 = var_d >= var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_d;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (var_d) on <var_d:Int> */
var19 = -var_d;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#distance for (self: Object, Discrete): Int */
long VIRTUAL_kernel__Int__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Discrete to Int */;
var1 = kernel__Int__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#<=> for (self: Int, Int): Int */
long kernel__Int___60d_61d_62d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 362);
show_backtrace(1);
}
var_other = p0;
{
{ /* Inline kernel#Int#< (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var9 = 1;
{
{ /* Inline kernel#Int#unary - (var9) on <var9:Int> */
var12 = -var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#< (var_other,self) on <var_other:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var15 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var19 = var_other < self;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var20 = 1;
var = var20;
goto RET_LABEL;
} else {
var21 = 0;
var = var21;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Int#<=> for (self: Object, Comparable): Int */
long VIRTUAL_kernel__Int___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var1 = kernel__Int___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#ascii for (self: Int): Char */
char kernel__Int__ascii(long self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#ascii for (self: Object): Char */
char VIRTUAL_kernel__Int__ascii(val* self) {
char var /* : Char */;
char var1 /* : Char */;
long var3 /* : Int */;
char var4 /* : Char */;
{ /* Inline kernel#Int#ascii (self) on <self:Object(Int)> */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count for (self: Int, Int): Int */
long kernel__Int__digit_count(long self, long p0) {
long var /* : Int */;
long var_b /* var b: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var_d /* var d: Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var_n /* var n: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
var_b = p0;
var1 = 10;
{
{ /* Inline kernel#Int#== (var_b,var1) on <var_b:Int> */
var5 = var_b == var1;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var6 = kernel__Int__digit_count_base_95d10(self);
}
var = var6;
goto RET_LABEL;
} else {
}
var7 = 0;
{
{ /* Inline kernel#Int#< (self,var7) on <self:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var11 = self < var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var12 = 1;
var_d = var12;
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var15 = -self;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_n = var13;
} else {
var16 = 0;
{
{ /* Inline kernel#Int#== (self,var16) on <self:Int> */
var20 = self == var16;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var21 = 1;
var = var21;
goto RET_LABEL;
} else {
var22 = 0;
var_d = var22;
var_n = self;
}
}
for(;;) {
var23 = 0;
{
{ /* Inline kernel#Int#> (var_n,var23) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var30 = var_n > var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (!var24) break;
var31 = 1;
{
{ /* Inline kernel#Int#+ (var_d,var31) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var38 = var_d + var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_d = var32;
{
{ /* Inline kernel#Int#/ (var_n,var_b) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_b:Int> isa OTHER */
/* <var_b:Int> isa OTHER */
var41 = 1; /* easy <var_b:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var45 = var_n / var_b;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_n = var39;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_d;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count for (self: Object, Int): Int */
long VIRTUAL_kernel__Int__digit_count(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__digit_count(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count_base_10 for (self: Int): Int */
long kernel__Int__digit_count_base_95d10(long self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var_result /* var result: Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_val /* var val: Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
var1 = 0;
{
{ /* Inline kernel#Int#< (self,var1) on <self:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var5 = self < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var6 = 2;
var_result = var6;
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var9 = -self;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_val = var7;
} else {
var10 = 1;
var_result = var10;
var_val = self;
}
for(;;) {
var11 = 10;
{
{ /* Inline kernel#Int#< (var_val,var11) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var18 = var_val < var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = var_result;
goto RET_LABEL;
} else {
}
var19 = 100;
{
{ /* Inline kernel#Int#< (var_val,var19) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var26 = var_val < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = 1;
{
{ /* Inline kernel#Int#+ (var_result,var27) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var34 = var_result + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var = var28;
goto RET_LABEL;
} else {
}
var35 = 1000;
{
{ /* Inline kernel#Int#< (var_val,var35) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var42 = var_val < var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var43 = 2;
{
{ /* Inline kernel#Int#+ (var_result,var43) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var50 = var_result + var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var = var44;
goto RET_LABEL;
} else {
}
var51 = 10000;
{
{ /* Inline kernel#Int#< (var_val,var51) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var58 = var_val < var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
var59 = 3;
{
{ /* Inline kernel#Int#+ (var_result,var59) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <var59:Int> isa OTHER */
/* <var59:Int> isa OTHER */
var62 = 1; /* easy <var59:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var66 = var_result + var59;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var = var60;
goto RET_LABEL;
} else {
}
var67 = 10000;
{
{ /* Inline kernel#Int#/ (var_val,var67) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var74 = var_val / var67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_val = var68;
var75 = 4;
{
{ /* Inline kernel#Int#+ (var_result,var75) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <var75:Int> isa OTHER */
/* <var75:Int> isa OTHER */
var78 = 1; /* easy <var75:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var82 = var_result + var75;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_result = var76;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count_base_10 for (self: Object): Int */
long VIRTUAL_kernel__Int__digit_count_base_95d10(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__digit_count_base_95d10(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_c for (self: Int): Char */
char kernel__Int__to_c(long self) {
char var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
char var23 /* : Char */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
char var34 /* : Char */;
char var36 /* : Char */;
char var37 /* : Char */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
char var56 /* : Char */;
char var58 /* : Char */;
var2 = 0;
{
{ /* Inline kernel#Int#>= (self,var2) on <self:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = 36;
{
{ /* Inline kernel#Int#<= (self,var7) on <self:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var1 = var8;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 462);
show_backtrace(1);
}
var15 = 10;
{
{ /* Inline kernel#Int#< (self,var15) on <self:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var22 = self < var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var23 = '0';
{
{ /* Inline kernel#Char#ascii (var23) on <var23:Char> */
var26 = (unsigned char)var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (self,var24) on <self:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var29 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var33 = self + var24;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var27) on <var27:Int> */
var36 = var27;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var = var34;
goto RET_LABEL;
} else {
var37 = 'a';
{
{ /* Inline kernel#Char#ascii (var37) on <var37:Char> */
var40 = (unsigned char)var37;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var41 = 10;
{
{ /* Inline kernel#Int#- (var38,var41) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var48 = var38 - var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (self,var42) on <self:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var51 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var55 = self + var42;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var49) on <var49:Int> */
var58 = var49;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var = var56;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#to_c for (self: Object): Char */
char VIRTUAL_kernel__Int__to_c(val* self) {
char var /* : Char */;
char var1 /* : Char */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__to_c(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#object_id for (self: Char): Int */
long kernel__Char__object_id(char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#object_id for (self: Object): Int */
long VIRTUAL_kernel__Char__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var3 /* : Char */;
long var4 /* : Int */;
{ /* Inline kernel#Char#object_id (self) on <self:Object(Char)> */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#hash for (self: Char): Int */
long kernel__Char__hash(char self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var3 = (unsigned char)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#hash for (self: Object): Int */
long VIRTUAL_kernel__Char__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#== for (self: Char, nullable Object): Bool */
short int kernel__Char___61d_61d(char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Char);
if (var1) {
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Char___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Char#== (self,p0) on <self:Object(Char)> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#!= for (self: Char, nullable Object): Bool */
short int kernel__Char___33d_61d(char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Char);
if (var1) {
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Char___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Char#!= (self,p0) on <self:Object(Char)> */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#<= for (self: Char, Char): Bool */
short int kernel__Char___60d_61d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 499);
show_backtrace(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#<= (self,p0) on <self:Object(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 499);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#< for (self: Char, Char): Bool */
short int kernel__Char___60d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 500);
show_backtrace(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#< for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#< (self,p0) on <self:Object(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 500);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#>= for (self: Char, Char): Bool */
short int kernel__Char___62d_61d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 501);
show_backtrace(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#>= (self,p0) on <self:Object(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 501);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#> for (self: Char, Char): Bool */
short int kernel__Char___62d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 502);
show_backtrace(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#> (self,p0) on <self:Object(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 502);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#successor for (self: Char, Int): Char */
char kernel__Char__successor(char self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#successor for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Char__successor(val* self, long p0) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#successor (self,p0) on <self:Object(Char)> */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = var3 + p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Char(var1); /* autobox from Char to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#predecessor for (self: Char, Int): Char */
char kernel__Char__predecessor(char self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self - p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#predecessor for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Char__predecessor(val* self, long p0) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#predecessor (self,p0) on <self:Object(Char)> */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = var3 - p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Char(var1); /* autobox from Char to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#distance for (self: Char, Char): Int */
long kernel__Char__distance(char self, char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_d /* var d: Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var25 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 507);
show_backtrace(1);
}
var_c = p0;
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var7 = (unsigned char)var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var14 = var2 - var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_d = var8;
var15 = 0;
{
{ /* Inline kernel#Int#>= (var_d,var15) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var22 = var_d >= var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var = var_d;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (var_d) on <var_d:Int> */
var25 = -var_d;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#distance for (self: Object, Discrete): Int */
long VIRTUAL_kernel__Char__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
char var3 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var3 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Discrete to Char */;
var1 = kernel__Char__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_i for (self: Char): Int */
long kernel__Char__to_i(char self) {
long var /* : Int */;
char var1 /* : Char */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var13 /* : Int */;
char var14 /* : Char */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
char var22 /* : Char */;
long var23 /* : Int */;
long var25 /* : Int */;
char var26 /* : Char */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
var1 = '-';
{
{ /* Inline kernel#Char#== (self,var1) on <self:Char> */
var5 = self == var1;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var6 = 1;
{
{ /* Inline kernel#Int#unary - (var6) on <var6:Int> */
var9 = -var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
} else {
{
var10 = kernel__Char__is_digit(self);
}
if (var10){
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var13 = (unsigned char)self;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var14 = '0';
{
{ /* Inline kernel#Char#ascii (var14) on <var14:Char> */
var17 = (unsigned char)var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var11,var15) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var21 = var11 - var15;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var = var18;
goto RET_LABEL;
} else {
{
var22 = kernel__Char__to_lower(self);
}
{
{ /* Inline kernel#Char#ascii (var22) on <var22:Char> */
var25 = (unsigned char)var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var26 = 'a';
{
{ /* Inline kernel#Char#ascii (var26) on <var26:Char> */
var29 = (unsigned char)var26;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var23,var27) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var32 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var36 = var23 - var27;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var37 = 10;
{
{ /* Inline kernel#Int#+ (var30,var37) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var40 = 1; /* easy <var37:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var44 = var30 + var37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var = var38;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Char#to_i for (self: Object): Int */
long VIRTUAL_kernel__Char__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#ascii for (self: Char): Int */
long kernel__Char__ascii(char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#ascii for (self: Object): Int */
long VIRTUAL_kernel__Char__ascii(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var3 /* : Char */;
long var4 /* : Int */;
{ /* Inline kernel#Char#ascii (self) on <self:Object(Char)> */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_lower for (self: Char): Char */
char kernel__Char__to_lower(char self) {
char var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
char var5 /* : Char */;
char var6 /* : Char */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
char var12 /* : Char */;
char var14 /* : Char */;
{
var1 = kernel__Char__is_upper(self);
}
if (var1){
{
{ /* Inline kernel#Char#ascii (self) on <self:Char> */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var5 = 'a';
var6 = 'A';
{
var7 = kernel__Char__distance(var5, var6);
}
{
{ /* Inline kernel#Int#+ (var2,var7) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var11 = var2 + var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var8) on <var8:Int> */
var14 = var8;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#to_lower for (self: Object): Char */
char VIRTUAL_kernel__Char__to_lower(val* self) {
char var /* : Char */;
char var1 /* : Char */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__to_lower(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_digit for (self: Char): Bool */
short int kernel__Char__is_digit(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = '0';
{
{ /* Inline kernel#Char#>= (self,var2) on <self:Char> */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 501);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = '9';
{
{ /* Inline kernel#Char#<= (self,var7) on <self:Char> */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 499);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_digit for (self: Object): Bool */
short int VIRTUAL_kernel__Char__is_digit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__is_digit(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_upper for (self: Char): Bool */
short int kernel__Char__is_upper(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = 'A';
{
{ /* Inline kernel#Char#>= (self,var2) on <self:Char> */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 501);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = 'Z';
{
{ /* Inline kernel#Char#<= (self,var7) on <self:Char> */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 499);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_upper for (self: Object): Bool */
short int VIRTUAL_kernel__Char__is_upper(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__is_upper(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Pointer#address_is_null for (self: Pointer): Bool */
short int kernel__Pointer__address_is_null(void* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = address_is_null(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Pointer#address_is_null for (self: Object): Bool */
short int VIRTUAL_kernel__Pointer__address_is_null(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
void* var4 /* : Pointer */;
{ /* Inline kernel#Pointer#address_is_null (self) on <self:Object(Pointer)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Pointer */;
var3 = address_is_null(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
