#include "core__kernel.sep.0.h"
/* method kernel$Object$object_id for (self: Object): Int */
long core___core__Object___object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Object$is_same_instance for (self: Object, nullable Object): Bool */
short int core___core__Object___is_same_instance(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self == p0 || (p0 != NULL && (!((long)self&3)) && (!((long)p0&3)) && self->class == p0->class && ((self->class->box_kind == 3 && ((struct instance_core__Byte*)self)->value == ((struct instance_core__Byte*)p0)->value) || (self->class->box_kind == 5 && ((struct instance_core__Float*)self)->value == ((struct instance_core__Float*)p0)->value) || (self->class->box_kind == 6 && ((struct instance_core__CString*)self)->value == ((struct instance_core__CString*)p0)->value) || (self->class->box_kind == 7 && ((struct instance_core__Pointer*)self)->value == ((struct instance_core__Pointer*)p0)->value) || (self->class->box_kind == 8 && ((struct instance_core__Int8*)self)->value == ((struct instance_core__Int8*)p0)->value) || (self->class->box_kind == 9 && ((struct instance_core__Int16*)self)->value == ((struct instance_core__Int16*)p0)->value) || (self->class->box_kind == 10 && ((struct instance_core__UInt16*)self)->value == ((struct instance_core__UInt16*)p0)->value) || (self->class->box_kind == 11 && ((struct instance_core__Int32*)self)->value == ((struct instance_core__Int32*)p0)->value) || (self->class->box_kind == 12 && ((struct instance_core__UInt32*)self)->value == ((struct instance_core__UInt32*)p0)->value)));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Object$== for (self: Object, nullable Object): Bool */
short int core___core__Object____61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other) on <self:Object> */
var3 = self == var_other || (var_other != NULL && (!((long)self&3)) && (!((long)var_other&3)) && self->class == var_other->class && ((self->class->box_kind == 3 && ((struct instance_core__Byte*)self)->value == ((struct instance_core__Byte*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_core__Float*)self)->value == ((struct instance_core__Float*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_core__CString*)self)->value == ((struct instance_core__CString*)var_other)->value) || (self->class->box_kind == 7 && ((struct instance_core__Pointer*)self)->value == ((struct instance_core__Pointer*)var_other)->value) || (self->class->box_kind == 8 && ((struct instance_core__Int8*)self)->value == ((struct instance_core__Int8*)var_other)->value) || (self->class->box_kind == 9 && ((struct instance_core__Int16*)self)->value == ((struct instance_core__Int16*)var_other)->value) || (self->class->box_kind == 10 && ((struct instance_core__UInt16*)self)->value == ((struct instance_core__UInt16*)var_other)->value) || (self->class->box_kind == 11 && ((struct instance_core__Int32*)self)->value == ((struct instance_core__Int32*)var_other)->value) || (self->class->box_kind == 12 && ((struct instance_core__UInt32*)self)->value == ((struct instance_core__UInt32*)var_other)->value)));
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
/* method kernel$Object$!= for (self: Object, nullable Object): Bool */
short int core___core__Object____33d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_other = p0;
{
var1 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Object___61d_61d]))(self, var_other); /* == on <self:Object>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Object$hash for (self: Object): Int */
long core___core__Object___hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Object$sys for (self: Object): Sys */
val* core___core__Object___sys(val* self) {
val* var /* : Sys */;
val* var1 /* : Sys */;
var1 = glob_sys;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Object$init for (self: Object) */
void core___core__Object___init(val* self) {
RET_LABEL:;
}
/* method kernel$Sys$run for (self: Sys) */
void core___core__Sys___run(val* self) {
{
nitc__abstract_compiler___core__Sys___main(self); /* Direct call abstract_compiler$Sys$main on <self:Sys>*/
}
RET_LABEL:;
}
/* method kernel$Sys$errno for (self: Sys): Int */
long core___core__Sys___errno(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__kernel___Sys_errno___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Sys$exit for (self: Sys, Int) */
void core___core__Sys___exit(val* self, long p0) {
exit((int)p0);
RET_LABEL:;
}
/* method kernel$Sys$is_windows for (self: Sys): Bool */
short int core___core__Sys___is_windows(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__kernel___Sys_is_windows___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Comparable$<= for (self: Comparable, Comparable): Bool */
short int core___core__Comparable____60d_61d(val* self, val* p0) {
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
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 322);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__kernel__Comparable___60d]))(var_other, self); /* < on <var_other:Comparable>*/
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Comparable$>= for (self: Comparable, Comparable): Bool */
short int core___core__Comparable____62d_61d(val* self, val* p0) {
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
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 326);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Comparable___60d]))(self, var_other); /* < on <self:Comparable>*/
}
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Comparable$> for (self: Comparable, Comparable): Bool */
short int core___core__Comparable____62d(val* self, val* p0) {
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
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 330);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__kernel__Comparable___60d]))(var_other, self); /* < on <var_other:Comparable>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Comparable$<=> for (self: Comparable, Comparable): Int */
long core___core__Comparable____60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 333);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Comparable___60d]))(self, var_other); /* < on <self:Comparable>*/
}
if (var2){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var5 = -1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
} else {
{
var6 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__kernel__Comparable___60d]))(var_other, self); /* < on <var_other:Comparable>*/
}
if (var6){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel$Comparable$max for (self: Comparable, Comparable): Comparable */
val* core___core__Comparable___max(val* self, val* p0) {
val* var /* : Comparable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 352);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Comparable___60d]))(self, var_other); /* < on <self:Comparable>*/
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
/* <self:Comparable> isa OTHER */
type_struct6 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= (((long)self&3)?type_info[((long)self&3)]:self->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)self&3)?type_info[((long)self&3)]:self->type)->type_table[cltype4] == idtype5;
}
if (unlikely(!var3)) {
var_class_name7 = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 358);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Comparable$min for (self: Comparable, Comparable): Comparable */
val* core___core__Comparable___min(val* self, val* p0) {
val* var /* : Comparable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_c /* var c: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
/* Covariant cast for argument 0 (c) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 362);
fatal_exit(1);
}
var_c = p0;
{
var2 = ((short int(*)(val* self, val* p0))((((long)var_c&3)?class_info[((long)var_c&3)]:var_c->class)->vft[COLOR_core__kernel__Comparable___60d]))(var_c, self); /* < on <var_c:Comparable>*/
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
/* <self:Comparable> isa OTHER */
type_struct6 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= (((long)self&3)?type_info[((long)self&3)]:self->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)self&3)?type_info[((long)self&3)]:self->type)->type_table[cltype4] == idtype5;
}
if (unlikely(!var3)) {
var_class_name7 = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 368);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Bool$object_id for (self: Bool): Int */
long core___core__Bool___Object__object_id(short int self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Bool$object_id for (self: Object): Int */
long VIRTUAL_core___core__Bool___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
{ /* Inline kernel$Bool$object_id (self) on <self:Object(Bool)> */
var3 = (short int)((long)(self)>>2);
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Bool$== for (self: Bool, nullable Object): Bool */
short int core___core__Bool___Object___61d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
if ((p0 != NULL) && (((long)p0&3) == 3)) {
var2 = (short int)((long)(p0)>>2);
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Bool$== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Bool___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel$Bool$== (self,p0) on <self:Object(Bool)> */
var3 = self == p0;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Bool$!= for (self: Bool, nullable Object): Bool */
short int core___core__Bool___Object___33d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
if ((p0 != NULL) && (((long)p0&3) == 3)) {
var2 = (short int)((long)(p0)>>2);
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Bool$!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Bool___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel$Bool$!= (self,p0) on <self:Object(Bool)> */
var3 = self == p0;
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Bool$hash for (self: Bool): Int */
long core___core__Bool___Object__hash(short int self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = core___core__Bool___to_i(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Bool$hash for (self: Object): Int */
long VIRTUAL_core___core__Bool___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var2 = (short int)((long)(self)>>2);
var1 = core___core__Bool___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Bool$to_i for (self: Bool): Int */
long core___core__Bool___to_i(short int self) {
long var /* : Int */;
if (self){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Float$object_id for (self: Float): Int */
long core___core__Float___Object__object_id(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$object_id for (self: Object): Int */
long VIRTUAL_core___core__Float___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel$Float$object_id (self) on <self:Object(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Object to Float */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$== for (self: Float, nullable Object): Bool */
short int core___core__Float___Object___61d_61d(double self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Float)) {
var2 = ((struct instance_core__Float*)p0)->value; /* autounbox from nullable Object to Float */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Float___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel$Float$== (self,p0) on <self:Object(Float)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Float*)self)->value == ((struct instance_core__Float*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$!= for (self: Float, nullable Object): Bool */
short int core___core__Float___Object___33d_61d(double self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var2 /* : Float */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Float)) {
var2 = ((struct instance_core__Float*)p0)->value; /* autounbox from nullable Object to Float */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Float___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel$Float$!= (self,p0) on <self:Object(Float)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Float*)self)->value == ((struct instance_core__Float*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$<= for (self: Float, Float): Bool */
short int core___core__Float___Comparable___60d_61d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Float___Comparable___60d_61d(val* self, val* p0) {
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
{ /* Inline kernel$Float$<= (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$< for (self: Float, Float): Bool */
short int core___core__Float___Comparable___60d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Float___Comparable___60d(val* self, val* p0) {
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
{ /* Inline kernel$Float$< (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$>= for (self: Float, Float): Bool */
short int core___core__Float___Comparable___62d_61d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 531);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Float___Comparable___62d_61d(val* self, val* p0) {
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
{ /* Inline kernel$Float$>= (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 531);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$> for (self: Float, Float): Bool */
short int core___core__Float___Comparable___62d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Float___Comparable___62d(val* self, val* p0) {
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
{ /* Inline kernel$Float$> (self,p0) on <self:Comparable(Float)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$+ for (self: Float, Float): Float */
double core___core__Float___Numeric___43d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Float___Numeric___43d(val* self, val* p0) {
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
{ /* Inline kernel$Float$+ (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Float$unary - for (self: Float): Float */
double core___core__Float___Numeric__unary_32d_45d(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Float___Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
{ /* Inline kernel$Float$unary - (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__Float(var1); /* autobox from Float to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel$Float$- for (self: Float, Float): Float */
double core___core__Float___Numeric___45d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Float___Numeric___45d(val* self, val* p0) {
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
{ /* Inline kernel$Float$- (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Float$* for (self: Float, Float): Float */
double core___core__Float___Numeric___42d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Float___Numeric___42d(val* self, val* p0) {
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
{ /* Inline kernel$Float$* (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Float$/ for (self: Float, Float): Float */
double core___core__Float___Numeric___47d(double self, double p0) {
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
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Float___Numeric___47d(val* self, val* p0) {
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
{ /* Inline kernel$Float$/ (self,p0) on <self:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var4 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var5 = ((struct instance_core__Float*)p0)->value; /* autounbox from Numeric to Float */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Float(var1); /* autobox from Float to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Float$to_i for (self: Float): Int */
long core___core__Float___Numeric__to_i(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$to_i for (self: Numeric): Int */
long VIRTUAL_core___core__Float___Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel$Float$to_i (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$to_f for (self: Float): Float */
double core___core__Float___Numeric__to_f(double self) {
double var /* : Float */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$to_f for (self: Numeric): Float */
double VIRTUAL_core___core__Float___Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = core___core__Float___Numeric__to_f(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$to_b for (self: Float): Byte */
unsigned char core___core__Float___Numeric__to_b(double self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Float$to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__Float___Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
double var3 /* : Float */;
unsigned char var4 /* : Byte */;
{ /* Inline kernel$Float$to_b (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$<=> for (self: Float, Float): Int */
long core___core__Float___Comparable___60d_61d_62d(double self, double p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var_other /* var other: Float */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 547);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel$Float$< (self,var_other) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_other:Float> isa OTHER */
/* <var_other:Float> isa OTHER */
var4 = 1; /* easy <var_other:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Float$< (var_other,self) on <var_other:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var14 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel$Float$<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__Float___Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
double var2 /* : Float */;
double var3 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var1 = core___core__Float___Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Float$max for (self: Float, Float): Float */
double core___core__Float___Comparable__max(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var_other /* var other: Float */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 582);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel$Float$< (self,var_other) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_other:Float> isa OTHER */
/* <var_other:Float> isa OTHER */
var4 = 1; /* easy <var_other:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Float$max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Float___Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var1 = core___core__Float___Comparable__max(var2, var3);
var4 = BOX_core__Float(var1); /* autobox from Float to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel$Float$min for (self: Float, Float): Float */
double core___core__Float___Comparable__min(double self, double p0) {
double var /* : Float */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var_c /* var c: Float */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Float> isa OTHER */
/* <p0:Float> isa OTHER */
var1 = 1; /* easy <p0:Float> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 591);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel$Float$< (var_c,self) on <var_c:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var4 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Float$min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Float___Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Comparable to Float */;
var3 = ((struct instance_core__Float*)p0)->value; /* autounbox from Comparable to Float */;
var1 = core___core__Float___Comparable__min(var2, var3);
var4 = BOX_core__Float(var1); /* autobox from Float to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel$Byte$successor for (self: Byte, Int): Byte */
unsigned char core___core__Byte___Discrete__successor(unsigned char self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
unsigned char var1 /* : Byte */;
unsigned char var3 /* : Byte */;
unsigned char var4 /* : Byte */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var7 /* : Byte */;
var_i = p0;
{
{ /* Inline kernel$Int$to_b (var_i) on <var_i:Int> */
var3 = (unsigned char)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Byte$+ (self,var1) on <self:Byte> */
/* Covariant cast for argument 0 (i) <var1:Byte> isa OTHER */
/* <var1:Byte> isa OTHER */
var6 = 1; /* easy <var1:Byte> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var7 = self + var1;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Byte___Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
unsigned char var1 /* : Byte */;
unsigned char var2 /* : Byte */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Discrete to Byte */;
var1 = core___core__Byte___Discrete__successor(var2, p0);
var3 = BOX_core__Byte(var1); /* autobox from Byte to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method kernel$Byte$object_id for (self: Byte): Int */
long core___core__Byte___Object__object_id(unsigned char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$object_id for (self: Object): Int */
long VIRTUAL_core___core__Byte___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
unsigned char var3 /* : Byte */;
long var4 /* : Int */;
{ /* Inline kernel$Byte$object_id (self) on <self:Object(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Object to Byte */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$hash for (self: Byte): Int */
long core___core__Byte___Object__hash(unsigned char self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline kernel$Byte$to_i (self) on <self:Byte> */
var3 = (long)self;
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
/* method kernel$Byte$hash for (self: Object): Int */
long VIRTUAL_core___core__Byte___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
unsigned char var2 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Object to Byte */;
var1 = core___core__Byte___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$== for (self: Byte, nullable Object): Bool */
short int core___core__Byte___Object___61d_61d(unsigned char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
unsigned char var2 /* : Byte */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Byte)) {
var2 = ((struct instance_core__Byte*)p0)->value; /* autounbox from nullable Object to Byte */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Byte___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel$Byte$== (self,p0) on <self:Object(Byte)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Byte*)self)->value == ((struct instance_core__Byte*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$!= for (self: Byte, nullable Object): Bool */
short int core___core__Byte___Object___33d_61d(unsigned char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
unsigned char var2 /* : Byte */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Byte)) {
var2 = ((struct instance_core__Byte*)p0)->value; /* autounbox from nullable Object to Byte */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Byte___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel$Byte$!= (self,p0) on <self:Object(Byte)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Byte*)self)->value == ((struct instance_core__Byte*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$<= for (self: Byte, Byte): Bool */
short int core___core__Byte___Comparable___60d_61d(unsigned char self, unsigned char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 618);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Byte___Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
short int var6 /* : Bool */;
{ /* Inline kernel$Byte$<= (self,p0) on <self:Comparable(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 618);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$< for (self: Byte, Byte): Bool */
short int core___core__Byte___Comparable___60d(unsigned char self, unsigned char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Byte___Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
short int var6 /* : Bool */;
{ /* Inline kernel$Byte$< (self,p0) on <self:Comparable(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$>= for (self: Byte, Byte): Bool */
short int core___core__Byte___Comparable___62d_61d(unsigned char self, unsigned char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 620);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Byte___Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
short int var6 /* : Bool */;
{ /* Inline kernel$Byte$>= (self,p0) on <self:Comparable(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 620);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$> for (self: Byte, Byte): Bool */
short int core___core__Byte___Comparable___62d(unsigned char self, unsigned char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 621);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Byte___Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
short int var6 /* : Bool */;
{ /* Inline kernel$Byte$> (self,p0) on <self:Comparable(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 621);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$+ for (self: Byte, Byte): Byte */
unsigned char core___core__Byte___Numeric___43d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var2 /* : Byte */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Byte___Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
unsigned char var1 /* : Byte */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var6 /* : Byte */;
val* var7 /* : Numeric */;
{ /* Inline kernel$Byte$+ (self,p0) on <self:Numeric(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Numeric to Byte */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Byte(var1); /* autobox from Byte to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Byte$unary - for (self: Byte): Byte */
unsigned char core___core__Byte___Numeric__unary_32d_45d(unsigned char self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Byte___Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
unsigned char var1 /* : Byte */;
unsigned char var3 /* : Byte */;
unsigned char var4 /* : Byte */;
val* var5 /* : Numeric */;
{ /* Inline kernel$Byte$unary - (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__Byte(var1); /* autobox from Byte to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel$Byte$- for (self: Byte, Byte): Byte */
unsigned char core___core__Byte___Numeric___45d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var2 /* : Byte */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 629);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Byte___Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
unsigned char var1 /* : Byte */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var6 /* : Byte */;
val* var7 /* : Numeric */;
{ /* Inline kernel$Byte$- (self,p0) on <self:Numeric(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 629);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Numeric to Byte */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Byte(var1); /* autobox from Byte to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Byte$* for (self: Byte, Byte): Byte */
unsigned char core___core__Byte___Numeric___42d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var2 /* : Byte */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 630);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Byte___Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
unsigned char var1 /* : Byte */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var6 /* : Byte */;
val* var7 /* : Numeric */;
{ /* Inline kernel$Byte$* (self,p0) on <self:Numeric(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 630);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Numeric to Byte */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Byte(var1); /* autobox from Byte to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Byte$/ for (self: Byte, Byte): Byte */
unsigned char core___core__Byte___Numeric___47d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var2 /* : Byte */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 631);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Byte___Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
unsigned char var1 /* : Byte */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
unsigned char var4 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var6 /* : Byte */;
val* var7 /* : Numeric */;
{ /* Inline kernel$Byte$/ (self,p0) on <self:Numeric(Byte)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 631);
fatal_exit(1);
}
var4 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var5 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Numeric to Byte */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Byte(var1); /* autobox from Byte to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Byte$>> for (self: Byte, Int): Byte */
unsigned char core___core__Byte____62d_62d(unsigned char self, long p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$ascii for (self: Byte): Char */
uint32_t core___core__Byte___ascii(unsigned char self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$to_i for (self: Byte): Int */
long core___core__Byte___Numeric__to_i(unsigned char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$to_i for (self: Numeric): Int */
long VIRTUAL_core___core__Byte___Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
unsigned char var3 /* : Byte */;
long var4 /* : Int */;
{ /* Inline kernel$Byte$to_i (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$to_f for (self: Byte): Float */
double core___core__Byte___Numeric__to_f(unsigned char self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$to_f for (self: Numeric): Float */
double VIRTUAL_core___core__Byte___Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
unsigned char var3 /* : Byte */;
double var4 /* : Float */;
{ /* Inline kernel$Byte$to_f (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$to_b for (self: Byte): Byte */
unsigned char core___core__Byte___Numeric__to_b(unsigned char self) {
unsigned char var /* : Byte */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__Byte___Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
unsigned char var2 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var1 = core___core__Byte___Numeric__to_b(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$distance for (self: Byte, Byte): Int */
long core___core__Byte___Discrete__distance(unsigned char self, unsigned char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var_i /* var i: Byte */;
unsigned char var2 /* : Byte */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
unsigned char var8 /* : Byte */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 663);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline kernel$Byte$- (self,var_i) on <self:Byte> */
/* Covariant cast for argument 0 (i) <var_i:Byte> isa OTHER */
/* <var_i:Byte> isa OTHER */
var4 = 1; /* easy <var_i:Byte> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 629);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Byte$to_i (var2) on <var2:Byte> */
var11 = (long)var2;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Byte$distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__Byte___Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
unsigned char var2 /* : Byte */;
unsigned char var3 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Discrete to Byte */;
var3 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Discrete to Byte */;
var1 = core___core__Byte___Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$<=> for (self: Byte, Byte): Int */
long core___core__Byte___Comparable___60d_61d_62d(unsigned char self, unsigned char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var_other /* var other: Byte */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 665);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel$Byte$< (self,var_other) on <self:Byte> */
/* Covariant cast for argument 0 (i) <var_other:Byte> isa OTHER */
/* <var_other:Byte> isa OTHER */
var4 = 1; /* easy <var_other:Byte> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Byte$< (var_other,self) on <var_other:Byte> */
/* Covariant cast for argument 0 (i) <self:Byte> isa OTHER */
/* <self:Byte> isa OTHER */
var14 = 1; /* easy <self:Byte> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel$Byte$<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__Byte___Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
unsigned char var2 /* : Byte */;
unsigned char var3 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var3 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var1 = core___core__Byte___Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Byte$max for (self: Byte, Byte): Byte */
unsigned char core___core__Byte___Comparable__max(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var_other /* var other: Byte */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 685);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel$Byte$< (self,var_other) on <self:Byte> */
/* Covariant cast for argument 0 (i) <var_other:Byte> isa OTHER */
/* <var_other:Byte> isa OTHER */
var4 = 1; /* easy <var_other:Byte> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Byte$max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Byte___Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
unsigned char var1 /* : Byte */;
unsigned char var2 /* : Byte */;
unsigned char var3 /* : Byte */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var3 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var1 = core___core__Byte___Comparable__max(var2, var3);
var4 = BOX_core__Byte(var1); /* autobox from Byte to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel$Byte$min for (self: Byte, Byte): Byte */
unsigned char core___core__Byte___Comparable__min(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var_c /* var c: Byte */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Byte> isa OTHER */
/* <p0:Byte> isa OTHER */
var1 = 1; /* easy <p0:Byte> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 694);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel$Byte$< (var_c,self) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <self:Byte> isa OTHER */
/* <self:Byte> isa OTHER */
var4 = 1; /* easy <self:Byte> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Byte$min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Byte___Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
unsigned char var1 /* : Byte */;
unsigned char var2 /* : Byte */;
unsigned char var3 /* : Byte */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Comparable to Byte */;
var3 = ((struct instance_core__Byte*)p0)->value; /* autounbox from Comparable to Byte */;
var1 = core___core__Byte___Comparable__min(var2, var3);
var4 = BOX_core__Byte(var1); /* autobox from Byte to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel$Int$successor for (self: Int, Int): Int */
long core___core__Int___Discrete__successor(long self, long p0) {
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
{ /* Inline kernel$Int$+ (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var3 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
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
/* method kernel$Int$successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int___Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : Discrete */;
var2 = (long)(self)>>2;
var1 = core___core__Int___Discrete__successor(var2, p0);
var3 = (val*)(var1<<2|1);
var = var3;
RET_LABEL:;
return var;
}
/* method kernel$Int$object_id for (self: Int): Int */
long core___core__Int___Object__object_id(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$object_id for (self: Object): Int */
long VIRTUAL_core___core__Int___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel$Int$object_id (self) on <self:Object(Int)> */
var3 = (long)(self)>>2;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$hash for (self: Int): Int */
long core___core__Int___Object__hash(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$hash for (self: Object): Int */
long VIRTUAL_core___core__Int___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core___core__Int___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$== for (self: Int, nullable Object): Bool */
short int core___core__Int___Object___61d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
if ((p0 != NULL) && (((long)p0&3) == 1)) {
var2 = (long)(p0)>>2;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel$Int$== (self,p0) on <self:Object(Int)> */
var3 = self == p0;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$!= for (self: Int, nullable Object): Bool */
short int core___core__Int___Object___33d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
if ((p0 != NULL) && (((long)p0&3) == 1)) {
var2 = (long)(p0)>>2;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel$Int$!= (self,p0) on <self:Object(Int)> */
var3 = self == p0;
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$<= for (self: Int, Int): Bool */
short int core___core__Int___Comparable___60d_61d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int___Comparable___60d_61d(val* self, val* p0) {
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
{ /* Inline kernel$Int$<= (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$< for (self: Int, Int): Bool */
short int core___core__Int___Comparable___60d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int___Comparable___60d(val* self, val* p0) {
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
{ /* Inline kernel$Int$< (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$>= for (self: Int, Int): Bool */
short int core___core__Int___Comparable___62d_61d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int___Comparable___62d_61d(val* self, val* p0) {
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
{ /* Inline kernel$Int$>= (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$> for (self: Int, Int): Bool */
short int core___core__Int___Comparable___62d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int___Comparable___62d(val* self, val* p0) {
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
{ /* Inline kernel$Int$> (self,p0) on <self:Comparable(Int)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$+ for (self: Int, Int): Int */
long core___core__Int___Numeric___43d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int___Numeric___43d(val* self, val* p0) {
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
{ /* Inline kernel$Int$+ (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Int$unary - for (self: Int): Int */
long core___core__Int___Numeric__unary_32d_45d(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int___Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Numeric */;
{ /* Inline kernel$Int$unary - (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = (val*)(var1<<2|1);
var = var5;
RET_LABEL:;
return var;
}
/* method kernel$Int$- for (self: Int, Int): Int */
long core___core__Int___Numeric___45d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int___Numeric___45d(val* self, val* p0) {
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
{ /* Inline kernel$Int$- (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Int$* for (self: Int, Int): Int */
long core___core__Int___Numeric___42d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int___Numeric___42d(val* self, val* p0) {
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
{ /* Inline kernel$Int$* (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Int$/ for (self: Int, Int): Int */
long core___core__Int___Numeric___47d(long self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int___Numeric___47d(val* self, val* p0) {
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
{ /* Inline kernel$Int$/ (self,p0) on <self:Numeric(Int)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var4 = (long)(self)>>2;
var5 = (long)(p0)>>2;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = (val*)(var1<<2|1);
var = var7;
RET_LABEL:;
return var;
}
/* method kernel$Int$% for (self: Int, Int): Int */
long core___core__Int____37d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$<< for (self: Int, Int): Int */
long core___core__Int____60d_60d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$>> for (self: Int, Int): Int */
long core___core__Int____62d_62d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$to_i for (self: Int): Int */
long core___core__Int___Numeric__to_i(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$to_i for (self: Numeric): Int */
long VIRTUAL_core___core__Int___Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core___core__Int___Numeric__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$to_f for (self: Int): Float */
double core___core__Int___Numeric__to_f(long self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$to_f for (self: Numeric): Float */
double VIRTUAL_core___core__Int___Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
long var3 /* : Int */;
double var4 /* : Float */;
{ /* Inline kernel$Int$to_f (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$to_b for (self: Int): Byte */
unsigned char core___core__Int___Numeric__to_b(long self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__Int___Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
long var3 /* : Int */;
unsigned char var4 /* : Byte */;
{ /* Inline kernel$Int$to_b (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$distance for (self: Int, Int): Int */
long core___core__Int___Discrete__distance(long self, long p0) {
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
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 760);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline kernel$Int$- (self,var_i) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_d = var2;
{
{ /* Inline kernel$Int$>= (var_d,0l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var15 = var_d >= 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_d;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$unary - (var_d) on <var_d:Int> */
var18 = -var_d;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Int$distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__Int___Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = core___core__Int___Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$<=> for (self: Int, Int): Int */
long core___core__Int___Comparable___60d_61d_62d(long self, long p0) {
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
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 770);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel$Int$< (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$< (var_other,self) on <var_other:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var14 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel$Int$<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__Int___Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = core___core__Int___Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Int$max for (self: Int, Int): Int */
long core___core__Int___Comparable__max(long self, long p0) {
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
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 790);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline kernel$Int$< (self,var_other) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Int$max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int___Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Comparable */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = core___core__Int___Comparable__max(var2, var3);
var4 = (val*)(var1<<2|1);
var = var4;
RET_LABEL:;
return var;
}
/* method kernel$Int$min for (self: Int, Int): Int */
long core___core__Int___Comparable__min(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_c /* var c: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 799);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel$Int$< (var_c,self) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var4 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Int$min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int___Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Comparable */;
var2 = (long)(self)>>2;
var3 = (long)(p0)>>2;
var1 = core___core__Int___Comparable__min(var2, var3);
var4 = (val*)(var1<<2|1);
var = var4;
RET_LABEL:;
return var;
}
/* method kernel$Int$code_point for (self: Int): Char */
uint32_t core___core__Int___code_point(long self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$digit_count for (self: Int, Int): Int */
long core___core__Int___digit_count(long self, long p0) {
long var /* : Int */;
long var_b /* var b: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var_d /* var d: Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var_n /* var n: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
var_b = p0;
{
{ /* Inline kernel$Int$== (var_b,10l) on <var_b:Int> */
var3 = var_b == 10l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var4 = core___core__Int___digit_count_base_95d10(self);
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = self < 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var_d = 1l;
{
{ /* Inline kernel$Int$unary - (self) on <self:Int> */
var11 = -self;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_n = var9;
} else {
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
var14 = self == 0l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var_d = 0l;
var_n = self;
}
}
for(;;) {
{
{ /* Inline kernel$Int$> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var21 = var_n > 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline kernel$Int$+ (var_d,1l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_d + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_d = var22;
{
{ /* Inline kernel$Int$/ (var_n,var_b) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_b:Int> isa OTHER */
/* <var_b:Int> isa OTHER */
var31 = 1; /* easy <var_b:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var35 = var_n / var_b;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_n = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_d;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Int$digit_count_base_10 for (self: Int): Int */
long core___core__Int___digit_count_base_95d10(long self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var_result /* var result: Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_val /* var val: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
{
{ /* Inline kernel$Int$< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = self < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var_result = 2l;
{
{ /* Inline kernel$Int$unary - (self) on <self:Int> */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_val = var5;
} else {
var_result = 1l;
var_val = self;
}
for(;;) {
{
{ /* Inline kernel$Int$< (var_val,10l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var10 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_val < 10l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = var_result;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_val,100l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <100l:Int> isa OTHER */
/* <100l:Int> isa OTHER */
var17 = 1; /* easy <100l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_val < 100l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline kernel$Int$+ (var_result,1l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_result + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_val,1000l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <1000l:Int> isa OTHER */
/* <1000l:Int> isa OTHER */
var31 = 1; /* easy <1000l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_val < 1000l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline kernel$Int$+ (var_result,2l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var38 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_result + 2l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var = var36;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_val,10000l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <10000l:Int> isa OTHER */
/* <10000l:Int> isa OTHER */
var45 = 1; /* easy <10000l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_val < 10000l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel$Int$+ (var_result,3l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var52 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_result + 3l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$/ (var_val,10000l) on <var_val:Int> */
/* Covariant cast for argument 0 (i) <10000l:Int> isa OTHER */
/* <10000l:Int> isa OTHER */
var59 = 1; /* easy <10000l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var63 = var_val / 10000l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_val = var57;
{
{ /* Inline kernel$Int$+ (var_result,4l) on <var_result:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var66 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = var_result + 4l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_result = var64;
}
RET_LABEL:;
return var;
}
/* method kernel$Int$to_c for (self: Int): Char */
uint32_t core___core__Int___to_c(long self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
uint32_t var30 /* : Char */;
uint32_t var32 /* : Char */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
uint32_t var50 /* : Char */;
uint32_t var52 /* : Char */;
{
{ /* Inline kernel$Int$>= (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = self >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Int$<= (self,36l) on <self:Int> */
/* Covariant cast for argument 0 (i) <36l:Int> isa OTHER */
/* <36l:Int> isa OTHER */
var8 = 1; /* easy <36l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = self <= 36l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 871);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$< (self,10l) on <self:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var15 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var19 = self < 10l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline kernel$Char$code_point ('0') on <'0':Char> */
var22 = (long)'0';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (self,var20) on <self:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var25 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = self + var20;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Int$code_point (var23) on <var23:Int> */
var32 = (uint32_t)var23;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var = var30;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$- (self,10l) on <self:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var35 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var39 = self - 10l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel$Char$code_point ('a') on <'a':Char> */
var42 = (long)'a';
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var33,var40) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var45 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var33 + var40;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel$Int$code_point (var43) on <var43:Int> */
var52 = (uint32_t)var43;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Int$abs for (self: Int): Int */
long core___core__Int___abs(long self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
{
{ /* Inline kernel$Int$>= (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = self >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var1 = self;
} else {
{
{ /* Inline kernel$Int$unary - (self) on <self:Int> */
var8 = -self;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$object_id for (self: Char): Int */
long core___core__Char___Object__object_id(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$object_id for (self: Object): Int */
long VIRTUAL_core___core__Char___Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var3 /* : Char */;
long var4 /* : Int */;
{ /* Inline kernel$Char$object_id (self) on <self:Object(Char)> */
var3 = (uint32_t)((long)(self)>>2);
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$hash for (self: Char): Int */
long core___core__Char___Object__hash(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
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
/* method kernel$Char$hash for (self: Object): Int */
long VIRTUAL_core___core__Char___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core___core__Char___Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$== for (self: Char, nullable Object): Bool */
short int core___core__Char___Object___61d_61d(uint32_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint32_t var2 /* : Char */;
if ((p0 != NULL) && (((long)p0&3) == 2)) {
var2 = (uint32_t)((long)(p0)>>2);
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Char___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel$Char$== (self,p0) on <self:Object(Char)> */
var3 = self == p0;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$!= for (self: Char, nullable Object): Bool */
short int core___core__Char___Object___33d_61d(uint32_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint32_t var2 /* : Char */;
short int var3 /* : Bool */;
if ((p0 != NULL) && (((long)p0&3) == 2)) {
var2 = (uint32_t)((long)(p0)>>2);
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Char___Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel$Char$!= (self,p0) on <self:Object(Char)> */
var3 = self == p0;
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$<= for (self: Char, Char): Bool */
short int core___core__Char___Comparable___60d_61d(uint32_t self, uint32_t p0) {
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
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Char___Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : Char */;
uint32_t var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel$Char$<= (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var4 = (uint32_t)((long)(self)>>2);
var5 = (uint32_t)((long)(p0)>>2);
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$< for (self: Char, Char): Bool */
short int core___core__Char___Comparable___60d(uint32_t self, uint32_t p0) {
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
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Char___Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : Char */;
uint32_t var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel$Char$< (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var4 = (uint32_t)((long)(self)>>2);
var5 = (uint32_t)((long)(p0)>>2);
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$>= for (self: Char, Char): Bool */
short int core___core__Char___Comparable___62d_61d(uint32_t self, uint32_t p0) {
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
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Char___Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : Char */;
uint32_t var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel$Char$>= (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var4 = (uint32_t)((long)(self)>>2);
var5 = (uint32_t)((long)(p0)>>2);
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$> for (self: Char, Char): Bool */
short int core___core__Char___Comparable___62d(uint32_t self, uint32_t p0) {
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
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Char___Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : Char */;
uint32_t var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel$Char$> (self,p0) on <self:Comparable(Char)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var4 = (uint32_t)((long)(self)>>2);
var5 = (uint32_t)((long)(p0)>>2);
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$successor for (self: Char, Int): Char */
uint32_t core___core__Char___Discrete__successor(uint32_t self, long p0) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Char___Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
uint32_t var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel$Char$successor (self,p0) on <self:Discrete(Char)> */
var3 = (uint32_t)((long)(self)>>2);
var4 = var3 + p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = (val*)((long)(var1)<<2|2);
var = var5;
RET_LABEL:;
return var;
}
/* method kernel$Char$distance for (self: Char, Char): Int */
long core___core__Char___Discrete__distance(uint32_t self, uint32_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
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
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 921);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var4 = (long)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var7 = (long)var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var2 - var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_d = var8;
{
{ /* Inline kernel$Int$>= (var_d,0l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var_d >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = var_d;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$unary - (var_d) on <var_d:Int> */
var24 = -var_d;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Char$distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__Char___Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : Char */;
uint32_t var3 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var3 = (uint32_t)((long)(p0)>>2);
var1 = core___core__Char___Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel$Char$to_i for (self: Char): Int */
long core___core__Char___to_i(uint32_t self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
{
{ /* Inline kernel$Char$== (self,'-') on <self:Char> */
var3 = self == '-';
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var6 = -1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
} else {
{
var7 = core___core__Char___is_digit(self);
}
if (var7){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var10 = (long)self;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Char$code_point ('0') on <'0':Char> */
var13 = (long)'0';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var8,var11) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var16 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var17 = var8 - var11;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var = var14;
goto RET_LABEL;
} else {
{
var18 = core___core__Char___to_lower(self);
}
{
{ /* Inline kernel$Char$code_point (var18) on <var18:Char> */
var21 = (long)var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel$Char$code_point ('a') on <'a':Char> */
var24 = (long)'a';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var19,var22) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var27 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var19 - var22;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var25,10l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var34 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var25 + 10l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel$Char$ascii for (self: Char): Byte */
unsigned char core___core__Char___ascii(uint32_t self) {
unsigned char var /* : Byte */;
long var1 /* : Int */;
long var3 /* : Int */;
unsigned char var4 /* : Byte */;
unsigned char var6 /* : Byte */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var1) on <var1:Int> */
var6 = (unsigned char)var1;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$code_point for (self: Char): Int */
long core___core__Char___code_point(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$to_lower for (self: Char): Char */
uint32_t core___core__Char___to_lower(uint32_t self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
uint32_t var10 /* : Char */;
uint32_t var12 /* : Char */;
{
var1 = core___core__Char___is_upper(self);
}
if (var1){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var4 = (long)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__Char___Discrete__distance('a', 'A');
}
{
{ /* Inline kernel$Int$+ (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var2 + var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$code_point (var6) on <var6:Int> */
var12 = (uint32_t)var6;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Char$to_upper for (self: Char): Char */
uint32_t core___core__Char___to_upper(uint32_t self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
uint32_t var10 /* : Char */;
uint32_t var12 /* : Char */;
{
var1 = core___core__Char___is_lower(self);
}
if (var1){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var4 = (long)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__Char___Discrete__distance('a', 'A');
}
{
{ /* Inline kernel$Int$- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var2 - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$code_point (var6) on <var6:Int> */
var12 = (uint32_t)var6;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel$Char$is_digit for (self: Char): Bool */
short int core___core__Char___is_digit(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$is_lower for (self: Char): Bool */
short int core___core__Char___is_lower(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var4 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= 'a';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var8 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= 'z';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$is_upper for (self: Char): Bool */
short int core___core__Char___is_upper(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var4 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= 'A';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'Z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var8 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= 'Z';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Char$is_whitespace for (self: Char): Bool */
short int core___core__Char___is_whitespace(uint32_t self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
{
{ /* Inline kernel$Int$<= (var_i,32l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var7 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var8 = var_i <= 32l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var4 = var_;
} else {
{
{ /* Inline kernel$Int$== (var_i,127l) on <var_i:Int> */
var11 = var_i == 127l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Pointer$address_is_null for (self: Pointer): Bool */
short int core___core__Pointer___address_is_null(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Pointer */
var1 = core__kernel___Pointer_address_is_null___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Pointer$free for (self: Pointer) */
void core___core__Pointer___free(val* self) {
void* var /* : Pointer for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing Pointer */
core__kernel___Pointer_free___impl(var);
RET_LABEL:;
}
/* method kernel$Pointer$hash for (self: Pointer): Int */
long core___core__Pointer___Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Pointer for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Pointer */
var1 = core__kernel___Pointer_hash___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Pointer$== for (self: Pointer, nullable Object): Bool */
short int core___core__Pointer___Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
void* var6 /* : Pointer for extern */;
void* var7 /* : Pointer for extern */;
var_o = p0;
/* <var_o:nullable Object> isa Pointer */
cltype = type_core__Pointer.color;
idtype = type_core__Pointer.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Pointer$native_equals (self,var_o) on <self:Pointer> */
var6 = ((struct instance_core__Pointer*)self)->value; /* unboxing Pointer */
var7 = ((struct instance_core__Pointer*)var_o)->value; /* unboxing nullable Object */
var5 = core__kernel___Pointer_native_equals___impl(var6, var7);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel$Pointer$native_equals for (self: Pointer, Pointer): Bool */
short int core___core__Pointer___native_equals(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Pointer for extern */;
void* var3 /* : Pointer for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Pointer */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing Pointer */
var1 = core__kernel___Pointer_native_equals___impl(var2, var3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
