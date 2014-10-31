#include "array.sep.0.h"
/* method array#AbstractArrayRead#length for (self: AbstractArrayRead[nullable Object]): Int */
long array__AbstractArrayRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#length for (self: Object): Int */
long VIRTUAL_array__AbstractArrayRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline array#AbstractArrayRead#length (self) on <self:Object(AbstractArrayRead[nullable Object])> */
var3 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Object(AbstractArrayRead[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#is_empty for (self: AbstractArrayRead[nullable Object]): Bool */
short int array__AbstractArrayRead__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var2 = 0;
{
{ /* Inline kernel#Int#== (var1,var2) on <var1:Int> */
var6 = var1 == var2;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#is_empty for (self: Object): Bool */
short int VIRTUAL_array__AbstractArrayRead__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__AbstractArrayRead__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#has for (self: AbstractArrayRead[nullable Object], nullable Object): Bool */
short int array__AbstractArrayRead__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
short int var25 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 28);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
var_i = var2;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArrayRead[nullable Object]> */
var5 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_l = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var8 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var12 = var_i < var_l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var13 = array__Array___91d_93d(self, var_i);
}
if (var13 == NULL) {
var14 = (var_item == NULL);
} else {
var15 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_item) /* == on <var13:nullable Object>*/;
var14 = var15;
}
if (var14){
var16 = 1;
var = var16;
goto RET_LABEL;
} else {
}
var17 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var17) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var24 = var_i + var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_i = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var25 = 0;
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__AbstractArrayRead__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__AbstractArrayRead__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long array__AbstractArrayRead__index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SequenceRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 62);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
{
var3 = array__AbstractArrayRead__index_of_from(self, var_item, var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of for (self: Object, nullable Object): Int */
long VIRTUAL_array__AbstractArrayRead__index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__index_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long array__AbstractArrayRead__last_index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
long var13 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 64);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArrayRead[nullable Object]> */
var4 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = 1;
{
{ /* Inline kernel#Int#- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var12 = var2 - var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var13 = array__AbstractArrayRead__last_index_of_from(self, var_item, var6);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of for (self: Object, nullable Object): Int */
long VIRTUAL_array__AbstractArrayRead__last_index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__last_index_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of_from for (self: AbstractArrayRead[nullable Object], nullable Object, Int): Int */
long array__AbstractArrayRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_len /* var len: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 66);
show_backtrace(1);
}
var_item = p0;
var_pos = p1;
var_i = var_pos;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArrayRead[nullable Object]> */
var4 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_len = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_len) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var7 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var11 = var_i < var_len;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var12 = array__Array___91d_93d(self, var_i);
}
if (var12 == NULL) {
var13 = (var_item == NULL);
} else {
var14 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_item) /* == on <var12:nullable Object>*/;
var13 = var14;
}
if (var13){
var = var_i;
goto RET_LABEL;
} else {
}
var15 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var15) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var22 = var_i + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var23 = 1;
{
{ /* Inline kernel#Int#unary - (var23) on <var23:Int> */
var26 = -var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of_from for (self: Object, nullable Object, Int): Int */
long VIRTUAL_array__AbstractArrayRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__index_of_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of_from for (self: AbstractArrayRead[nullable Object], nullable Object, Int): Int */
long array__AbstractArrayRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 79);
show_backtrace(1);
}
var_item = p0;
var_pos = p1;
var_i = var_pos;
for(;;) {
var2 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var9 = var_i >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var10 = array__Array___91d_93d(self, var_i);
}
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var12 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_item) /* == on <var10:nullable Object>*/;
var11 = var12;
}
if (var11){
var = var_i;
goto RET_LABEL;
} else {
var13 = 1;
{
{ /* Inline kernel#Int#- (var_i,var13) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var20 = var_i - var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_i = var14;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var21 = 1;
{
{ /* Inline kernel#Int#unary - (var21) on <var21:Int> */
var24 = -var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of_from for (self: Object, nullable Object, Int): Int */
long VIRTUAL_array__AbstractArrayRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__last_index_of_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#reversed for (self: AbstractArrayRead[nullable Object]): Array[nullable Object] */
val* array__AbstractArrayRead__reversed(val* self) {
val* var /* : Array[nullable Object] */;
long var1 /* : Int */;
long var_cmp /* var cmp: Int */;
val* var2 /* : Array[nullable Object] */;
val* var_result /* var result: Array[nullable Object] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var16 /* : nullable Object */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var_cmp = var1;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__AbstractArrayRead_FT0]);
{
array__Array__with_capacity(var2, var_cmp); /* Direct call array#Array#with_capacity on <var2:Array[nullable Object]>*/
}
var_result = var2;
for(;;) {
var3 = 0;
{
{ /* Inline kernel#Int#> (var_cmp,var3) on <var_cmp:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var7 = var_cmp > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var8 = 1;
{
{ /* Inline kernel#Int#- (var_cmp,var8) on <var_cmp:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var15 = var_cmp - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_cmp = var9;
{
var16 = array__Array___91d_93d(self, var_cmp);
}
{
array__Array__add(var_result, var16); /* Direct call array#Array#add on <var_result:Array[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#reversed for (self: Object): Array[nullable Object] */
val* VIRTUAL_array__AbstractArrayRead__reversed(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = array__AbstractArrayRead__reversed(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#copy_to for (self: AbstractArrayRead[nullable Object], Int, Int, AbstractArray[nullable Object], Int) */
void array__AbstractArrayRead__copy_to(val* self, long p0, long p1, val* p2, long p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: AbstractArray[nullable Object] */;
long var_new_start /* var new_start: Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : nullable Object */;
/* Covariant cast for argument 2 (dest) <p2:AbstractArray[nullable Object]> isa AbstractArray[E] */
/* <p2:AbstractArray[nullable Object]> isa AbstractArray[E] */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayarray__AbstractArrayRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p2->type->table_size) {
var = 0;
} else {
var = p2->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 106);
show_backtrace(1);
}
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
var_i = var_len;
for(;;) {
var1 = 0;
{
{ /* Inline kernel#Int#> (var_i,var1) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var8 = var_i > var1;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var9 = 1;
{
{ /* Inline kernel#Int#- (var_i,var9) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var16 = var_i - var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_i = var10;
{
{ /* Inline kernel#Int#+ (var_new_start,var_i) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var19 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var23 = var_new_start + var_i;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start,var_i) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var26 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var30 = var_start + var_i;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var31 = array__Array___91d_93d(self, var24);
}
{
array__Array___91d_93d_61d(var_dest, var17, var31); /* Direct call array#Array#[]= on <var_dest:AbstractArray[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#AbstractArrayRead#copy_to for (self: Object, Int, Int, AbstractArray[nullable Object], Int) */
void VIRTUAL_array__AbstractArrayRead__copy_to(val* self, long p0, long p1, val* p2, long p3) {
array__AbstractArrayRead__copy_to(self, p0, p1, p2, p3); /* Direct call array#AbstractArrayRead#copy_to on <self:Object(AbstractArrayRead[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArrayRead#iterator for (self: AbstractArrayRead[nullable Object]): ArrayIterator[nullable Object] */
val* array__AbstractArrayRead__iterator(val* self) {
val* var /* : ArrayIterator[nullable Object] */;
val* var1 /* : ArrayIterator[nullable Object] */;
var1 = NEW_array__ArrayIterator(self->type->resolution_table->types[COLOR_array__ArrayIteratorarray__AbstractArrayRead_FT0]);
{
array__ArrayIterator__init(var1, self); /* Direct call array#ArrayIterator#init on <var1:ArrayIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__AbstractArrayRead__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ArrayIterator[nullable Object] */;
var1 = array__AbstractArrayRead__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#push for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 147);
show_backtrace(1);
}
var_item = p0;
{
array__Array__add(self, var_item); /* Direct call array#Array#add on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array#AbstractArray#push for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__push(val* self, val* p0) {
array__AbstractArray__push(self, p0); /* Direct call array#AbstractArray#push on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArray#pop for (self: AbstractArray[nullable Object]): nullable Object */
val* array__AbstractArray__pop(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_r /* var r: nullable Object */;
val* var_ /* var : AbstractArray[nullable Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
{
var1 = array__AbstractArrayRead__is_empty(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 151);
show_backtrace(1);
}
{
var3 = abstract_collection__SequenceRead__last(self);
}
var_r = var3;
var_ = self;
var4 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:AbstractArray[nullable Object]> */
var5 = 1;
{
{ /* Inline kernel#Int#- (var4,var5) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var9 = var4 - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var6; /* _length on <var_:AbstractArray[nullable Object]> */
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#pop for (self: Object): nullable Object */
val* VIRTUAL_array__AbstractArray__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__AbstractArray__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#shift for (self: AbstractArray[nullable Object]): nullable Object */
val* array__AbstractArray__shift(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_r /* var r: nullable Object */;
long var4 /* : Int */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_l /* var l: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
{
var1 = array__AbstractArrayRead__is_empty(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 159);
show_backtrace(1);
}
{
var3 = abstract_collection__SequenceRead__first(self);
}
var_r = var3;
var4 = 1;
var_i = var4;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var7 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_l = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var10 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var11 = var_i < var_l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var12 = 1;
{
{ /* Inline kernel#Int#- (var_i,var12) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var19 = var_i - var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var20 = array__Array___91d_93d(self, var_i);
}
{
array__Array___91d_93d_61d(self, var13, var20); /* Direct call array#Array#[]= on <self:AbstractArray[nullable Object]>*/
}
var21 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var21) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var28 = var_i + var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var29 = 1;
{
{ /* Inline kernel#Int#- (var_l,var29) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var36 = var_l - var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var30; /* _length on <self:AbstractArray[nullable Object]> */
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#shift for (self: Object): nullable Object */
val* VIRTUAL_array__AbstractArray__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__AbstractArray__shift(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#unshift for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
long var_i /* var i: Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var37 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 171);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var3 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#- (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var11 = var1 - var4;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_i = var5;
for(;;) {
var12 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var12) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var19 = var_i >= var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var20 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var20) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var27 = var_i + var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = array__Array___91d_93d(self, var_i);
}
{
array__Array___91d_93d_61d(self, var21, var28); /* Direct call array#Array#[]= on <self:AbstractArray[nullable Object]>*/
}
var29 = 1;
{
{ /* Inline kernel#Int#- (var_i,var29) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var36 = var_i - var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_i = var30;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var37 = 0;
{
array__Array___91d_93d_61d(self, var37, var_item); /* Direct call array#Array#[]= on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array#AbstractArray#unshift for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__unshift(val* self, val* p0) {
array__AbstractArray__unshift(self, p0); /* Direct call array#AbstractArray#unshift on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArray#insert for (self: AbstractArray[nullable Object], nullable Object, Int) */
void array__AbstractArray__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 181);
show_backtrace(1);
}
var_item = p0;
var_pos = p1;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var3 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#+ (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var11 = var1 + var4;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
array__Array__enlarge(self, var5); /* Direct call array#Array#enlarge on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var14 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var12,var_pos) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var17 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var21 = var12 - var_pos;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var22 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var22) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var29 = var_pos + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
array__AbstractArrayRead__copy_to(self, var_pos, var15, self, var23); /* Direct call array#AbstractArrayRead#copy_to on <self:AbstractArray[nullable Object]>*/
}
{
array__Array___91d_93d_61d(self, var_pos, var_item); /* Direct call array#Array#[]= on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array#AbstractArray#insert for (self: Object, nullable Object, Int) */
void VIRTUAL_array__AbstractArray__insert(val* self, val* p0, long p1) {
array__AbstractArray__insert(self, p0, p1); /* Direct call array#AbstractArray#insert on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArray#insert_all for (self: AbstractArray[nullable Object], Collection[nullable Object], Int) */
void array__AbstractArray__insert_all(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
val* var_ /* var : AbstractArray[nullable Object] */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
val* var_49 /* var : Collection[nullable Object] */;
val* var50 /* : Iterator[nullable Object] */;
val* var_51 /* var : Iterator[nullable Object] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_c /* var c: nullable Object */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 188);
show_backtrace(1);
}
var_coll = p0;
var_pos = p1;
{
var1 = ((long (*)(val*))(var_coll->class->vft[COLOR_abstract_collection__Collection__length]))(var_coll) /* length on <var_coll:Collection[nullable Object]>*/;
}
var_l = var1;
var2 = 0;
{
{ /* Inline kernel#Int#== (var_l,var2) on <var_l:Int> */
var6 = var_l == var2;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var9 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var7,var_l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var12 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var16 = var7 + var_l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
array__Array__enlarge(self, var10); /* Direct call array#Array#enlarge on <self:AbstractArray[nullable Object]>*/
}
var_ = self;
var17 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:AbstractArray[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var17,var_l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var20 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var24 = var17 + var_l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var18; /* _length on <var_:AbstractArray[nullable Object]> */
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var27 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var25,var_pos) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var30 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var34 = var25 - var_pos;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var28,var_l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var37 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var41 = var28 - var_l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,var_l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var44 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var48 = var_pos + var_l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
array__AbstractArrayRead__copy_to(self, var_pos, var35, self, var42); /* Direct call array#AbstractArrayRead#copy_to on <self:AbstractArray[nullable Object]>*/
}
var_49 = var_coll;
{
var50 = ((val* (*)(val*))(var_49->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_49) /* iterator on <var_49:Collection[nullable Object]>*/;
}
var_51 = var50;
for(;;) {
{
var52 = ((short int (*)(val*))(var_51->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_51) /* is_ok on <var_51:Iterator[nullable Object]>*/;
}
if (var52){
{
var53 = ((val* (*)(val*))(var_51->class->vft[COLOR_abstract_collection__Iterator__item]))(var_51) /* item on <var_51:Iterator[nullable Object]>*/;
}
var_c = var53;
{
array__Array___91d_93d_61d(self, var_pos, var_c); /* Direct call array#Array#[]= on <self:AbstractArray[nullable Object]>*/
}
var54 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var54) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var61 = var_pos + var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_pos = var55;
{
((void (*)(val*))(var_51->class->vft[COLOR_abstract_collection__Iterator__next]))(var_51) /* next on <var_51:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_51) on <var_51:Iterator[nullable Object]> */
RET_LABEL62:(void)0;
}
}
RET_LABEL:;
}
/* method array#AbstractArray#insert_all for (self: Object, Collection[nullable Object], Int) */
void VIRTUAL_array__AbstractArray__insert_all(val* self, val* p0, long p1) {
array__AbstractArray__insert_all(self, p0, p1); /* Direct call array#AbstractArray#insert_all on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArray#clear for (self: AbstractArray[nullable Object]) */
void array__AbstractArray__clear(val* self) {
long var /* : Int */;
var = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var; /* _length on <self:AbstractArray[nullable Object]> */
RET_LABEL:;
}
/* method array#AbstractArray#clear for (self: Object) */
void VIRTUAL_array__AbstractArray__clear(val* self) {
array__AbstractArray__clear(self); /* Direct call array#AbstractArray#clear on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArray#remove for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 205);
show_backtrace(1);
}
var_item = p0;
{
var1 = array__AbstractArrayRead__index_of(self, var_item);
}
{
array__AbstractArray__remove_at(self, var1); /* Direct call array#AbstractArray#remove_at on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array#AbstractArray#remove for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__remove(val* self, val* p0) {
array__AbstractArray__remove(self, p0); /* Direct call array#AbstractArray#remove on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#AbstractArray#remove_at for (self: AbstractArray[nullable Object], Int) */
void array__AbstractArray__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
long var /* : Int */;
long var2 /* : Int */;
long var_l /* var l: Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var_j /* var j: Int */;
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
val* var39 /* : nullable Object */;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
var_i = p0;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:AbstractArray[nullable Object]> */
var2 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArray[nullable Object]> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_l = var;
var4 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var4) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var8 = var_i >= var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var11 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var15 = var_i < var_l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var3 = var9;
} else {
var3 = var_;
}
if (var3){
var16 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var16) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var23 = var_i + var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_j = var17;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var26 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var30 = var_j < var_l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = 1;
{
{ /* Inline kernel#Int#- (var_j,var31) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var38 = var_j - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var39 = array__Array___91d_93d(self, var_j);
}
{
array__Array___91d_93d_61d(self, var32, var39); /* Direct call array#Array#[]= on <self:AbstractArray[nullable Object]>*/
}
var40 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var40) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var47 = var_j + var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_j = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var48 = 1;
{
{ /* Inline kernel#Int#- (var_l,var48) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var55 = var_l - var48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var49; /* _length on <self:AbstractArray[nullable Object]> */
} else {
}
RET_LABEL:;
}
/* method array#AbstractArray#remove_at for (self: Object, Int) */
void VIRTUAL_array__AbstractArray__remove_at(val* self, long p0) {
array__AbstractArray__remove_at(self, p0); /* Direct call array#AbstractArray#remove_at on <self:Object(AbstractArray[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#[] for (self: Array[nullable Object], Int): nullable Object */
val* array__Array___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
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
val* var15 /* : nullable NativeArray[nullable Object] */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
var_index = p0;
var2 = 0;
{
{ /* Inline kernel#Int#>= (var_index,var2) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var6 = var_index >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{
{ /* Inline kernel#Int#< (var_index,var7) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var14 = var_index < var7;
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
PRINT_ERROR("Runtime error: %s", "Assert \'index\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 258);
show_backtrace(1);
}
var15 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 259);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var15,var_index) on <var15:nullable NativeArray[nullable Object]> */
var18 = ((struct instance_array__NativeArray*)var15)->values[var_index];
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Array#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_array__Array___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__Array___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#Array#[]= for (self: Array[nullable Object], Int, nullable Object) */
void array__Array___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : nullable NativeArray[nullable Object] */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const struct type* type_struct63;
short int is_nullable64;
const char* var_class_name65;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 262);
show_backtrace(1);
}
var_index = p0;
var_item = p1;
var2 = 0;
{
{ /* Inline kernel#Int#>= (var_index,var2) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var9 = var_index >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var10 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var11 = 1;
{
{ /* Inline kernel#Int#+ (var10,var11) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var18 = var10 + var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_index,var12) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var21 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var25 = var_index < var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var1 = var19;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert \'index\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 264);
show_backtrace(1);
}
var26 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var26,var_index) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var29 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var33 = var26 <= var_index;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var34 = 1;
{
{ /* Inline kernel#Int#+ (var_index,var34) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var41 = var_index + var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
array__Array__enlarge(self, var35); /* Direct call array#Array#enlarge on <self:Array[nullable Object]>*/
}
} else {
}
var42 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var42,var_index) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var45 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var49 = var42 <= var_index;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
var50 = 1;
{
{ /* Inline kernel#Int#+ (var_index,var50) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var57 = var_index + var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var51; /* _length on <self:Array[nullable Object]> */
} else {
}
var58 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 271);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var58,var_index,var_item) on <var58:nullable NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct63 = var58->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype61 = type_struct63->color;
idtype62 = type_struct63->id;
is_nullable64 = type_struct63->is_nullable;
if(var_item == NULL) {
var60 = is_nullable64;
} else {
if(cltype61 >= var_item->type->table_size) {
var60 = 0;
} else {
var60 = var_item->type->type_table[cltype61] == idtype62;
}
}
if (unlikely(!var60)) {
var_class_name65 = var_item == NULL ? "null" : var_item->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 778);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var58)->values[var_index]=var_item;
RET_LABEL59:(void)0;
}
}
RET_LABEL:;
}
/* method array#Array#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_array__Array___91d_93d_61d(val* self, long p0, val* p1) {
array__Array___91d_93d_61d(self, p0, p1); /* Direct call array#Array#[]= on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#add for (self: Array[nullable Object], nullable Object) */
void array__Array__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : nullable NativeArray[nullable Object] */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const struct type* type_struct31;
short int is_nullable32;
const char* var_class_name33;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 274);
show_backtrace(1);
}
var_item = p0;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
var2 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var2,var_l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var5 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var9 = var2 <= var_l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var10 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var10) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var17 = var_l + var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
array__Array__enlarge(self, var11); /* Direct call array#Array#enlarge on <self:Array[nullable Object]>*/
}
} else {
}
var18 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var18) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var25 = var_l + var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var19; /* _length on <self:Array[nullable Object]> */
var26 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 281);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var26,var_l,var_item) on <var26:nullable NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct31 = var26->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype29 = type_struct31->color;
idtype30 = type_struct31->id;
is_nullable32 = type_struct31->is_nullable;
if(var_item == NULL) {
var28 = is_nullable32;
} else {
if(cltype29 >= var_item->type->table_size) {
var28 = 0;
} else {
var28 = var_item->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
var_class_name33 = var_item == NULL ? "null" : var_item->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 778);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var26)->values[var_l]=var_item;
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method array#Array#add for (self: Object, nullable Object) */
void VIRTUAL_array__Array__add(val* self, val* p0) {
array__Array__add(self, p0); /* Direct call array#Array#add on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#enlarge for (self: Array[nullable Object], Int) */
void array__Array__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_c /* var c: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : NativeArray[nullable Object] */;
val* var30 /* : NativeArray[nullable Object] */;
val* var_a /* var a: NativeArray[nullable Object] */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
val* var40 /* : nullable NativeArray[nullable Object] */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const struct type* type_struct;
const char* var_class_name46;
var_cap = p0;
var = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var_c = var;
{
{ /* Inline kernel#Int#<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var4 = var_cap <= var_c;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline kernel#Int#<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var7 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var11 = var_c <= var_cap;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var12 = 2;
{
{ /* Inline kernel#Int#* (var_c,var12) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var19 = var_c * var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var20 = 2;
{
{ /* Inline kernel#Int#+ (var13,var20) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var27 = var13 + var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_c = var21;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline array#ArrayCapable#calloc_array (self,var_c) on <self:Array[nullable Object]> */
var30 = NEW_array__NativeArray(var_c, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_a = var28;
var31 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var32 = 0;
{
{ /* Inline kernel#Int#> (var31,var32) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var39 = var31 > var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var40 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var41 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 290);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#copy_to (var40,var_a,var41) on <var40:nullable NativeArray[nullable Object]> */
/* Covariant cast for argument 0 (dest) <var_a:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_a:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = var40->type->resolution_table->types[COLOR_array__NativeArrayarray__NativeArray_FT0];
cltype44 = type_struct->color;
idtype45 = type_struct->id;
if(cltype44 >= var_a->type->table_size) {
var43 = 0;
} else {
var43 = var_a->type->type_table[cltype44] == idtype45;
}
if (unlikely(!var43)) {
var_class_name46 = var_a == NULL ? "null" : var_a->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 779);
show_backtrace(1);
}
memmove(((struct instance_array__NativeArray*)var_a)->values, ((struct instance_array__NativeArray*)var40)->values, var41*sizeof(val*));
RET_LABEL42:(void)0;
}
}
} else {
}
self->attrs[COLOR_array__Array___items].val = var_a; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_c; /* _capacity on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#enlarge for (self: Object, Int) */
void VIRTUAL_array__Array__enlarge(val* self, long p0) {
array__Array__enlarge(self, p0); /* Direct call array#Array#enlarge on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#init for (self: Array[nullable Object]) */
void array__Array__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_array__Array__init]))(self) /* init on <self:Array[nullable Object]>*/;
}
var = 0;
self->attrs[COLOR_array__Array___capacity].l = var; /* _capacity on <self:Array[nullable Object]> */
var1 = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var1; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#init for (self: Object) */
void VIRTUAL_array__Array__init(val* self) {
array__Array__init(self); /* Direct call array#Array#init on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#with_items for (self: Array[nullable Object], Array[nullable Object]) */
void array__Array__with_items(val* self, val* p0) {
val* var_objects /* var objects: Array[nullable Object] */;
val* var /* : nullable NativeArray[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:Array[nullable Object]>*/;
}
var_objects = p0;
var = var_objects->attrs[COLOR_array__Array___items].val; /* _items on <var_objects:Array[nullable Object]> */
self->attrs[COLOR_array__Array___items].val = var; /* _items on <self:Array[nullable Object]> */
var1 = var_objects->attrs[COLOR_array__Array___capacity].l; /* _capacity on <var_objects:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var1; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline array#AbstractArrayRead#length (var_objects) on <var_objects:Array[nullable Object]> */
var4 = var_objects->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_objects:Array[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var2; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#with_items for (self: Object, Array[nullable Object]) */
void VIRTUAL_array__Array__with_items(val* self, val* p0) {
array__Array__with_items(self, p0); /* Direct call array#Array#with_items on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#with_capacity for (self: Array[nullable Object], Int) */
void array__Array__with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : NativeArray[nullable Object] */;
val* var7 /* : NativeArray[nullable Object] */;
long var8 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:Array[nullable Object]>*/;
}
var_cap = p0;
var = 0;
{
{ /* Inline kernel#Int#>= (var_cap,var) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var4 = var_cap >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert \'positive\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 319);
show_backtrace(1);
}
{
{ /* Inline array#ArrayCapable#calloc_array (self,var_cap) on <self:Array[nullable Object]> */
var7 = NEW_array__NativeArray(var_cap, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_array__Array___items].val = var5; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_cap; /* _capacity on <self:Array[nullable Object]> */
var8 = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var8; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#with_capacity for (self: Object, Int) */
void VIRTUAL_array__Array__with_capacity(val* self, long p0) {
array__Array__with_capacity(self, p0); /* Direct call array#Array#with_capacity on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#with_native for (self: Array[nullable Object], NativeArray[nullable Object], Int) */
void array__Array__with_native(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_nat /* var nat: NativeArray[nullable Object] */;
long var_size /* var size: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (nat) <p0:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArrayarray__Array_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 339);
show_backtrace(1);
}
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:Array[nullable Object]>*/;
}
var_nat = p0;
var_size = p1;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_size,var1) on <var_size:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var8 = var_size >= var1;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'positive\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 342);
show_backtrace(1);
}
self->attrs[COLOR_array__Array___items].val = var_nat; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_size; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_array__AbstractArrayRead___length].l = var_size; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#with_native for (self: Object, NativeArray[nullable Object], Int) */
void VIRTUAL_array__Array__with_native(val* self, val* p0, long p1) {
array__Array__with_native(self, p0, p1); /* Direct call array#Array#with_native on <self:Object(Array[nullable Object])>*/
RET_LABEL:;
}
/* method array#Array#== for (self: Array[nullable Object], nullable Object): Bool */
short int array__Array___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_l /* var l: Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_i /* var i: Int */;
val* var18 /* : nullable NativeArray[nullable Object] */;
val* var_it /* var it: nullable NativeArray[nullable Object] */;
val* var19 /* : nullable NativeArray[nullable Object] */;
val* var_oit /* var oit: nullable NativeArray[nullable Object] */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
val* var29 /* : nullable Object */;
val* var31 /* : nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa Array[nullable Object] */
cltype = type_array__Arraynullable_kernel__Object.color;
idtype = type_array__Arraynullable_kernel__Object.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var1 = 0;
} else {
var1 = var_o->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var4 = ((short int (*)(val*, val*))(self->class->vft[COLOR_array__Array___61d_61d]))(self, p0) /* == on <self:Array[nullable Object]>*/;
var3 = var4;
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:Array[nullable Object]> */
var7 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_l = var5;
{
{ /* Inline array#AbstractArrayRead#length (var_o) on <var_o:nullable Object(Array[nullable Object])> */
var10 = var_o->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_o:nullable Object(Array[nullable Object])> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_l,var8) on <var_l:Int> */
var14 = var_l == var8;
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var16 = 0;
var = var16;
goto RET_LABEL;
} else {
}
var17 = 0;
var_i = var17;
var18 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var_it = var18;
var19 = var_o->attrs[COLOR_array__Array___items].val; /* _items on <var_o:nullable Object(Array[nullable Object])> */
var_oit = var19;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var22 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var25 = var_i < var_l;
var20 = var25;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 368);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var_it,var_i) on <var_it:nullable NativeArray[nullable Object]> */
var28 = ((struct instance_array__NativeArray*)var_it)->values[var_i];
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var_oit == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 368);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var_oit,var_i) on <var_oit:nullable NativeArray[nullable Object]> */
var31 = ((struct instance_array__NativeArray*)var_oit)->values[var_i];
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var26 == NULL) {
var32 = (var29 != NULL);
} else {
var33 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___33d_61d]))(var26, var29) /* != on <var26:nullable Object>*/;
var32 = var33;
}
if (var32){
var34 = 0;
var = var34;
goto RET_LABEL;
} else {
}
var35 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var35) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var42 = var_i + var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var43 = 1;
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Array#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__Array___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__Array___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#item for (self: ArrayIterator[nullable Object]): nullable Object */
val* array__ArrayIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : AbstractArrayRead[nullable Object] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 403);
show_backtrace(1);
}
var2 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
{
var3 = array__Array___91d_93d(var1, var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#item for (self: Object): nullable Object */
val* VIRTUAL_array__ArrayIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__ArrayIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#is_ok for (self: ArrayIterator[nullable Object]): Bool */
short int array__ArrayIterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : AbstractArrayRead[nullable Object] */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
var1 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var2 = self->attrs[COLOR_array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 407);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var2) on <var2:AbstractArrayRead[nullable Object]> */
var5 = var2->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var2:AbstractArrayRead[nullable Object]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var8 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var9 = var1 < var3;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_array__ArrayIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#next for (self: ArrayIterator[nullable Object]) */
void array__ArrayIterator__next(val* self) {
val* var_ /* var : ArrayIterator[nullable Object] */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
var_ = self;
var = var_->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <var_:ArrayIterator[nullable Object]> */
var1 = 1;
{
{ /* Inline kernel#Int#+ (var,var1) on <var:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var5 = var + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_->attrs[COLOR_array__ArrayIterator___index].l = var2; /* _index on <var_:ArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayIterator#next for (self: Object) */
void VIRTUAL_array__ArrayIterator__next(val* self) {
array__ArrayIterator__next(self); /* Direct call array#ArrayIterator#next on <self:Object(ArrayIterator[nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayIterator#init for (self: ArrayIterator[nullable Object], AbstractArrayRead[nullable Object]) */
void array__ArrayIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_a /* var a: AbstractArrayRead[nullable Object] */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:AbstractArrayRead[nullable Object]> isa AbstractArrayRead[E] */
/* <p0:AbstractArrayRead[nullable Object]> isa AbstractArrayRead[E] */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayReadarray__ArrayIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArrayRead[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 411);
show_backtrace(1);
}
var_a = p0;
self->attrs[COLOR_array__ArrayIterator___array].val = var_a; /* _array on <self:ArrayIterator[nullable Object]> */
var1 = 0;
self->attrs[COLOR_array__ArrayIterator___index].l = var1; /* _index on <self:ArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayIterator#init for (self: Object, AbstractArrayRead[nullable Object]) */
void VIRTUAL_array__ArrayIterator__init(val* self, val* p0) {
array__ArrayIterator__init(self, p0); /* Direct call array#ArrayIterator#init on <self:Object(ArrayIterator[nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayIterator#index for (self: ArrayIterator[nullable Object]): Int */
long array__ArrayIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#index for (self: Object): Int */
long VIRTUAL_array__ArrayIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline array#ArrayIterator#index (self) on <self:Object(ArrayIterator[nullable Object])> */
var3 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:Object(ArrayIterator[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#has for (self: ArraySet[Object], Object): Bool */
short int array__ArraySet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : Array[Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 445);
show_backtrace(1);
}
var_e = p0;
var2 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 445);
show_backtrace(1);
}
{
var3 = array__AbstractArrayRead__has(var2, var_e);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArraySet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArraySet__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#add for (self: ArraySet[Object], Object) */
void array__ArraySet__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var1 /* : Array[Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 447);
show_backtrace(1);
}
var_e = p0;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 447);
show_backtrace(1);
}
{
var2 = array__AbstractArrayRead__has(var1, var_e);
}
var3 = !var2;
if (var3){
var4 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 447);
show_backtrace(1);
}
{
array__Array__add(var4, var_e); /* Direct call array#Array#add on <var4:Array[Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method array#ArraySet#add for (self: Object, nullable Object) */
void VIRTUAL_array__ArraySet__add(val* self, val* p0) {
array__ArraySet__add(self, p0); /* Direct call array#ArraySet#add on <self:Object(ArraySet[Object])>*/
RET_LABEL:;
}
/* method array#ArraySet#is_empty for (self: ArraySet[Object]): Bool */
short int array__ArraySet__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Object] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 449);
show_backtrace(1);
}
{
var2 = array__AbstractArrayRead__is_empty(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArraySet__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArraySet__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#length for (self: ArraySet[Object]): Int */
long array__ArraySet__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 451);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[Object]> */
var4 = var1->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var1:Array[Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#length for (self: Object): Int */
long VIRTUAL_array__ArraySet__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArraySet__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#first for (self: ArraySet[Object]): Object */
val* array__ArraySet__first(val* self) {
val* var /* : Object */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : Array[Object] */;
val* var11 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 455);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[Object]> */
var4 = var1->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var1:Array[Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = 0;
{
{ /* Inline kernel#Int#> (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var9 = var2 > var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 455);
show_backtrace(1);
}
var10 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 456);
show_backtrace(1);
}
{
var11 = abstract_collection__SequenceRead__first(var10);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#first for (self: Object): nullable Object */
val* VIRTUAL_array__ArraySet__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = array__ArraySet__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#remove for (self: ArraySet[Object], Object) */
void array__ArraySet__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Object */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 459);
show_backtrace(1);
}
var_item = p0;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 461);
show_backtrace(1);
}
{
var2 = array__AbstractArrayRead__index_of(var1, var_item);
}
var_i = var2;
var3 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var10 = var_i >= var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
array__ArraySet__remove_at(self, var_i); /* Direct call array#ArraySet#remove_at on <self:ArraySet[Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method array#ArraySet#remove for (self: Object, nullable Object) */
void VIRTUAL_array__ArraySet__remove(val* self, val* p0) {
array__ArraySet__remove(self, p0); /* Direct call array#ArraySet#remove on <self:Object(ArraySet[Object])>*/
RET_LABEL:;
}
/* method array#ArraySet#clear for (self: ArraySet[Object]) */
void array__ArraySet__clear(val* self) {
val* var /* : Array[Object] */;
var = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 467);
show_backtrace(1);
}
{
array__AbstractArray__clear(var); /* Direct call array#AbstractArray#clear on <var:Array[Object]>*/
}
RET_LABEL:;
}
/* method array#ArraySet#clear for (self: Object) */
void VIRTUAL_array__ArraySet__clear(val* self) {
array__ArraySet__clear(self); /* Direct call array#ArraySet#clear on <self:Object(ArraySet[Object])>*/
RET_LABEL:;
}
/* method array#ArraySet#iterator for (self: ArraySet[Object]): Iterator[Object] */
val* array__ArraySet__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : ArraySetIterator[Object] */;
val* var2 /* : Array[Object] */;
val* var3 /* : ArrayIterator[nullable Object] */;
var1 = NEW_array__ArraySetIterator(self->type->resolution_table->types[COLOR_array__ArraySetIteratorarray__ArraySet_FT0]);
var2 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 469);
show_backtrace(1);
}
{
var3 = array__AbstractArrayRead__iterator(var2);
}
{
array__ArraySetIterator__init(var1, var3); /* Direct call array#ArraySetIterator#init on <var1:ArraySetIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__ArraySet__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = array__ArraySet__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#remove_at for (self: ArraySet[Object], Int) */
void array__ArraySet__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[Object] */;
val* var4 /* : nullable Object */;
var_i = p0;
var = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 476);
show_backtrace(1);
}
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 476);
show_backtrace(1);
}
{
var2 = abstract_collection__SequenceRead__last(var1);
}
{
array__Array___91d_93d_61d(var, var_i, var2); /* Direct call array#Array#[]= on <var:Array[Object]>*/
}
var3 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 477);
show_backtrace(1);
}
{
var4 = array__AbstractArray__pop(var3);
}
RET_LABEL:;
}
/* method array#ArraySet#remove_at for (self: Object, Int) */
void VIRTUAL_array__ArraySet__remove_at(val* self, long p0) {
array__ArraySet__remove_at(self, p0); /* Direct call array#ArraySet#remove_at on <self:Object(ArraySet[Object])>*/
RET_LABEL:;
}
/* method array#ArraySet#init for (self: ArraySet[Object]) */
void array__ArraySet__init(val* self) {
val* var /* : Array[Object] */;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__ArraySet_FT0]);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[Object]>*/;
}
self->attrs[COLOR_array__ArraySet___array].val = var; /* _array on <self:ArraySet[Object]> */
RET_LABEL:;
}
/* method array#ArraySet#init for (self: Object) */
void VIRTUAL_array__ArraySet__init(val* self) {
array__ArraySet__init(self); /* Direct call array#ArraySet#init on <self:Object(ArraySet[Object])>*/
RET_LABEL:;
}
/* method array#ArraySetIterator#is_ok for (self: ArraySetIterator[Object]): Bool */
short int array__ArraySetIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayIterator[Object] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 493);
show_backtrace(1);
}
{
var2 = array__ArrayIterator__is_ok(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_array__ArraySetIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArraySetIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#next for (self: ArraySetIterator[Object]) */
void array__ArraySetIterator__next(val* self) {
val* var /* : ArrayIterator[Object] */;
var = self->attrs[COLOR_array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 495);
show_backtrace(1);
}
{
array__ArrayIterator__next(var); /* Direct call array#ArrayIterator#next on <var:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method array#ArraySetIterator#next for (self: Object) */
void VIRTUAL_array__ArraySetIterator__next(val* self) {
array__ArraySetIterator__next(self); /* Direct call array#ArraySetIterator#next on <self:Object(ArraySetIterator[Object])>*/
RET_LABEL:;
}
/* method array#ArraySetIterator#item for (self: ArraySetIterator[Object]): Object */
val* array__ArraySetIterator__item(val* self) {
val* var /* : Object */;
val* var1 /* : ArrayIterator[Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 497);
show_backtrace(1);
}
{
var2 = array__ArrayIterator__item(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#item for (self: Object): nullable Object */
val* VIRTUAL_array__ArraySetIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = array__ArraySetIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#init for (self: ArraySetIterator[Object], ArrayIterator[Object]) */
void array__ArraySetIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_iter /* var iter: ArrayIterator[Object] */;
/* Covariant cast for argument 0 (iter) <p0:ArrayIterator[Object]> isa ArrayIterator[E] */
/* <p0:ArrayIterator[Object]> isa ArrayIterator[E] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayIteratorarray__ArraySetIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayIterator[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 499);
show_backtrace(1);
}
var_iter = p0;
self->attrs[COLOR_array__ArraySetIterator___iter].val = var_iter; /* _iter on <self:ArraySetIterator[Object]> */
RET_LABEL:;
}
/* method array#ArraySetIterator#init for (self: Object, ArrayIterator[Object]) */
void VIRTUAL_array__ArraySetIterator__init(val* self, val* p0) {
array__ArraySetIterator__init(self, p0); /* Direct call array#ArraySetIterator#init on <self:Object(ArraySetIterator[Object])>*/
RET_LABEL:;
}
/* method array#ArrayMap#[] for (self: ArrayMap[Object, nullable Object], Object): nullable Object */
val* array__ArrayMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
val* var11 /* : Array[Couple[Object, nullable Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:Object> isa K */
/* <p0:Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 509);
show_backtrace(1);
}
var_key = p0;
{
var2 = array__ArrayMap__index(self, var_key);
}
var_i = var2;
var3 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var10 = var_i >= var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var11 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 514);
show_backtrace(1);
}
{
var12 = array__Array___91d_93d(var11, var_i);
}
{
{ /* Inline abstract_collection#Couple#second (var12) on <var12:nullable Object(Couple[Object, nullable Object])> */
var15 = var12->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <var12:nullable Object(Couple[Object, nullable Object])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
} else {
{
var16 = abstract_collection__MapRead__provide_default_value(self, var_key);
}
var = var16;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method array#ArrayMap#[] for (self: Object, Object): nullable Object */
val* VIRTUAL_array__ArrayMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__ArrayMap___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#[]= for (self: ArrayMap[Object, nullable Object], Object, nullable Object) */
void array__ArrayMap___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_key /* var key: Object */;
val* var_item /* var item: nullable Object */;
long var6 /* : Int */;
long var_i /* var i: Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : Array[Couple[Object, nullable Object]] */;
val* var16 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
short int is_nullable22;
const char* var_class_name23;
val* var24 /* : Array[Couple[Object, nullable Object]] */;
val* var25 /* : Couple[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa K */
/* <p0:Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 520);
show_backtrace(1);
}
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct4 = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 520);
show_backtrace(1);
}
var_key = p0;
var_item = p1;
{
var6 = array__ArrayMap__index(self, var_key);
}
var_i = var6;
var7 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var7) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var14 = var_i >= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var15 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 525);
show_backtrace(1);
}
{
var16 = array__Array___91d_93d(var15, var_i);
}
{
{ /* Inline abstract_collection#Couple#second= (var16,var_item) on <var16:nullable Object(Couple[Object, nullable Object])> */
/* Covariant cast for argument 0 (second) <var_item:nullable Object> isa S */
/* <var_item:nullable Object> isa S */
type_struct21 = var16->type->resolution_table->types[COLOR_abstract_collection__Couple_FT1];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
is_nullable22 = type_struct21->is_nullable;
if(var_item == NULL) {
var18 = is_nullable22;
} else {
if(cltype19 >= var_item->type->table_size) {
var18 = 0;
} else {
var18 = var_item->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name23 = var_item == NULL ? "null" : var_item->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 965);
show_backtrace(1);
}
var16->attrs[COLOR_abstract_collection__Couple___second].val = var_item; /* _second on <var16:nullable Object(Couple[Object, nullable Object])> */
RET_LABEL17:(void)0;
}
}
} else {
var24 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 527);
show_backtrace(1);
}
var25 = NEW_abstract_collection__Couple(self->type->resolution_table->types[COLOR_abstract_collection__Couplearray__ArrayMap_FT0array__ArrayMap_FT1]);
{
abstract_collection__Couple__init(var25, var_key, var_item); /* Direct call abstract_collection#Couple#init on <var25:Couple[Object, nullable Object]>*/
}
{
array__AbstractArray__push(var24, var25); /* Direct call array#AbstractArray#push on <var24:Array[Couple[Object, nullable Object]]>*/
}
}
RET_LABEL:;
}
/* method array#ArrayMap#[]= for (self: Object, Object, nullable Object) */
void VIRTUAL_array__ArrayMap___91d_93d_61d(val* self, val* p0, val* p1) {
array__ArrayMap___91d_93d_61d(self, p0, p1); /* Direct call array#ArrayMap#[]= on <self:Object(ArrayMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMap#keys for (self: ArrayMap[Object, nullable Object]): RemovableCollection[Object] */
val* array__ArrayMap__keys(val* self) {
val* var /* : RemovableCollection[Object] */;
val* var1 /* : RemovableCollection[Object] */;
var1 = self->attrs[COLOR_array__ArrayMap___keys].val; /* _keys on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 531);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#keys for (self: Object): Collection[Object] */
val* VIRTUAL_array__ArrayMap__keys(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : RemovableCollection[Object] */;
val* var3 /* : RemovableCollection[Object] */;
{ /* Inline array#ArrayMap#keys (self) on <self:Object(ArrayMap[Object, nullable Object])> */
var3 = self->attrs[COLOR_array__ArrayMap___keys].val; /* _keys on <self:Object(ArrayMap[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 531);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#values for (self: ArrayMap[Object, nullable Object]): RemovableCollection[nullable Object] */
val* array__ArrayMap__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMap___values].val; /* _values on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 532);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#values for (self: Object): Collection[nullable Object] */
val* VIRTUAL_array__ArrayMap__values(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
val* var3 /* : RemovableCollection[nullable Object] */;
{ /* Inline array#ArrayMap#values (self) on <self:Object(ArrayMap[Object, nullable Object])> */
var3 = self->attrs[COLOR_array__ArrayMap___values].val; /* _values on <self:Object(ArrayMap[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 532);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#length for (self: ArrayMap[Object, nullable Object]): Int */
long array__ArrayMap__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
long var2 /* : Int */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 535);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[Couple[Object, nullable Object]]> */
var4 = var1->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var1:Array[Couple[Object, nullable Object]]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#length for (self: Object): Int */
long VIRTUAL_array__ArrayMap__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMap__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#couple_iterator for (self: ArrayMap[Object, nullable Object]): Iterator[Couple[Object, nullable Object]] */
val* array__ArrayMap__couple_iterator(val* self) {
val* var /* : Iterator[Couple[Object, nullable Object]] */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
val* var2 /* : ArrayIterator[nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 537);
show_backtrace(1);
}
{
var2 = array__AbstractArrayRead__iterator(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#couple_iterator for (self: Object): Iterator[Couple[Object, nullable Object]] */
val* VIRTUAL_array__ArrayMap__couple_iterator(val* self) {
val* var /* : Iterator[Couple[Object, nullable Object]] */;
val* var1 /* : Iterator[Couple[Object, nullable Object]] */;
var1 = array__ArrayMap__couple_iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#is_empty for (self: ArrayMap[Object, nullable Object]): Bool */
short int array__ArrayMap__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 539);
show_backtrace(1);
}
{
var2 = array__AbstractArrayRead__is_empty(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArrayMap__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMap__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#clear for (self: ArrayMap[Object, nullable Object]) */
void array__ArrayMap__clear(val* self) {
val* var /* : Array[Couple[Object, nullable Object]] */;
var = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 541);
show_backtrace(1);
}
{
array__AbstractArray__clear(var); /* Direct call array#AbstractArray#clear on <var:Array[Couple[Object, nullable Object]]>*/
}
RET_LABEL:;
}
/* method array#ArrayMap#clear for (self: Object) */
void VIRTUAL_array__ArrayMap__clear(val* self) {
array__ArrayMap__clear(self); /* Direct call array#ArrayMap#clear on <self:Object(ArrayMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMap#remove_at_index for (self: ArrayMap[Object, nullable Object], Int) */
void array__ArrayMap__remove_at_index(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[Couple[Object, nullable Object]] */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[Couple[Object, nullable Object]] */;
val* var4 /* : nullable Object */;
var_i = p0;
var = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 562);
show_backtrace(1);
}
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 562);
show_backtrace(1);
}
{
var2 = abstract_collection__SequenceRead__last(var1);
}
{
array__Array___91d_93d_61d(var, var_i, var2); /* Direct call array#Array#[]= on <var:Array[Couple[Object, nullable Object]]>*/
}
var3 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 563);
show_backtrace(1);
}
{
var4 = array__AbstractArray__pop(var3);
}
RET_LABEL:;
}
/* method array#ArrayMap#remove_at_index for (self: Object, Int) */
void VIRTUAL_array__ArrayMap__remove_at_index(val* self, long p0) {
array__ArrayMap__remove_at_index(self, p0); /* Direct call array#ArrayMap#remove_at_index on <self:Object(ArrayMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMap#index for (self: ArrayMap[Object, nullable Object], Object): Int */
long array__ArrayMap__index(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_l /* var l: Int */;
short int var3 /* : Bool */;
val* var4 /* : Array[Couple[Object, nullable Object]] */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : Array[Couple[Object, nullable Object]] */;
val* var16 /* : nullable Object */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var_i /* var i: Int */;
val* var23 /* : Array[Couple[Object, nullable Object]] */;
long var24 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var34 /* : Array[Couple[Object, nullable Object]] */;
val* var35 /* : nullable Object */;
val* var36 /* : nullable Object */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
/* Covariant cast for argument 0 (key) <p0:Object> isa K */
/* <p0:Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMap_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 569);
show_backtrace(1);
}
var_key = p0;
var2 = self->attrs[COLOR_array__ArrayMap___last_index].l; /* _last_index on <self:ArrayMap[Object, nullable Object]> */
var_l = var2;
var4 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 574);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var4) on <var4:Array[Couple[Object, nullable Object]]> */
var7 = var4->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var4:Array[Couple[Object, nullable Object]]> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_l,var5) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var14 = var_l < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ = var8;
if (var8){
var15 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 574);
show_backtrace(1);
}
{
var16 = array__Array___91d_93d(var15, var_l);
}
{
{ /* Inline abstract_collection#Couple#first (var16) on <var16:nullable Object(Couple[Object, nullable Object])> */
var19 = var16->attrs[COLOR_abstract_collection__Couple___first].val; /* _first on <var16:nullable Object(Couple[Object, nullable Object])> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var21 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_key) /* == on <var17:nullable Object(Object)>*/;
var20 = var21;
}
var3 = var20;
} else {
var3 = var_;
}
if (var3){
var = var_l;
goto RET_LABEL;
} else {
}
var22 = 0;
var_i = var22;
for(;;) {
var23 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 577);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var23) on <var23:Array[Couple[Object, nullable Object]]> */
var26 = var23->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var23:Array[Couple[Object, nullable Object]]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var29 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var33 = var_i < var24;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var34 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 578);
show_backtrace(1);
}
{
var35 = array__Array___91d_93d(var34, var_i);
}
{
{ /* Inline abstract_collection#Couple#first (var35) on <var35:nullable Object(Couple[Object, nullable Object])> */
var38 = var35->attrs[COLOR_abstract_collection__Couple___first].val; /* _first on <var35:nullable Object(Couple[Object, nullable Object])> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var40 = ((short int (*)(val*, val*))(var36->class->vft[COLOR_kernel__Object___61d_61d]))(var36, var_key) /* == on <var36:nullable Object(Object)>*/;
var39 = var40;
}
if (var39){
self->attrs[COLOR_array__ArrayMap___last_index].l = var_i; /* _last_index on <self:ArrayMap[Object, nullable Object]> */
var = var_i;
goto RET_LABEL;
} else {
}
var41 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var41) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var48 = var_i + var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_i = var42;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var49 = 1;
{
{ /* Inline kernel#Int#unary - (var49) on <var49:Int> */
var52 = -var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#index for (self: Object, Object): Int */
long VIRTUAL_array__ArrayMap__index(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMap__index(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#map for (self: ArrayMapKeys[Object, nullable Object]): ArrayMap[Object, nullable Object] */
val* array__ArrayMapKeys__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#map for (self: Object): ArrayMap[Object, nullable Object] */
val* VIRTUAL_array__ArrayMapKeys__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
{ /* Inline array#ArrayMapKeys#map (self) on <self:Object(ArrayMapKeys[Object, nullable Object])> */
var3 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:Object(ArrayMapKeys[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#map= for (self: ArrayMapKeys[Object, nullable Object], ArrayMap[Object, nullable Object]) */
void array__ArrayMapKeys__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[K, E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
self->attrs[COLOR_array__ArrayMapKeys___map].val = p0; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMapKeys#map= for (self: Object, ArrayMap[Object, nullable Object]) */
void VIRTUAL_array__ArrayMapKeys__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline array#ArrayMapKeys#map= (self,p0) on <self:Object(ArrayMapKeys[Object, nullable Object])> */
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[K, E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
self->attrs[COLOR_array__ArrayMapKeys___map].val = p0; /* _map on <self:Object(ArrayMapKeys[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method array#ArrayMapKeys#first for (self: ArrayMapKeys[Object, nullable Object]): Object */
val* array__ArrayMapKeys__first(val* self) {
val* var /* : Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : Array[Couple[Object, nullable Object]] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var1:ArrayMap[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 593);
show_backtrace(1);
}
{
var5 = abstract_collection__SequenceRead__first(var4);
}
{
{ /* Inline abstract_collection#Couple#first (var5) on <var5:nullable Object(Couple[Object, nullable Object])> */
var8 = var5->attrs[COLOR_abstract_collection__Couple___first].val; /* _first on <var5:nullable Object(Couple[Object, nullable Object])> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#first for (self: Object): nullable Object */
val* VIRTUAL_array__ArrayMapKeys__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = array__ArrayMapKeys__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#has for (self: ArrayMapKeys[Object, nullable Object], Object): Bool */
short int array__ArrayMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : ArrayMap[Object, nullable Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 594);
show_backtrace(1);
}
var_k = p0;
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var4 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__ArrayMap__index(var2, var_k);
}
var6 = 0;
{
{ /* Inline kernel#Int#>= (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var13 = var5 >= var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArrayMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapKeys__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#is_empty for (self: ArrayMapKeys[Object, nullable Object]): Bool */
short int array__ArrayMapKeys__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__ArrayMap__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArrayMapKeys__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapKeys__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#length for (self: ArrayMapKeys[Object, nullable Object]): Int */
long array__ArrayMapKeys__length(val* self) {
long var /* : Int */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__ArrayMap__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#length for (self: Object): Int */
long VIRTUAL_array__ArrayMapKeys__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMapKeys__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#iterator for (self: ArrayMapKeys[Object, nullable Object]): Iterator[Object] */
val* array__ArrayMapKeys__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : MapKeysIterator[Object, nullable Object] */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : ArrayMap[Object, nullable Object] */;
val* var5 /* : MapIterator[Object, nullable Object] */;
var1 = NEW_abstract_collection__MapKeysIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapKeysIteratorarray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1]);
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var4 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = abstract_collection__CoupleMap__iterator(var2);
}
{
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapKeysIterator__original_iterator_61d]))(var1, var5) /* original_iterator= on <var1:MapKeysIterator[Object, nullable Object]>*/;
}
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:MapKeysIterator[Object, nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__ArrayMapKeys__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = array__ArrayMapKeys__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#clear for (self: ArrayMapKeys[Object, nullable Object]) */
void array__ArrayMapKeys__clear(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var2 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
array__ArrayMap__clear(var); /* Direct call array#ArrayMap#clear on <var:ArrayMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method array#ArrayMapKeys#clear for (self: Object) */
void VIRTUAL_array__ArrayMapKeys__clear(val* self) {
array__ArrayMapKeys__clear(self); /* Direct call array#ArrayMapKeys#clear on <self:Object(ArrayMapKeys[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMapKeys#remove for (self: ArrayMapKeys[Object, nullable Object], Object) */
void array__ArrayMapKeys__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
long var4 /* : Int */;
long var_i /* var i: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : ArrayMap[Object, nullable Object] */;
val* var15 /* : ArrayMap[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 600);
show_backtrace(1);
}
var_key = p0;
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__ArrayMap__index(var1, var_key);
}
var_i = var4;
var5 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var5) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var12 = var_i >= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
{ /* Inline array#ArrayMapKeys#map (self) on <self:ArrayMapKeys[Object, nullable Object]> */
var15 = self->attrs[COLOR_array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 590);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
array__ArrayMap__remove_at_index(var13, var_i); /* Direct call array#ArrayMap#remove_at_index on <var13:ArrayMap[Object, nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method array#ArrayMapKeys#remove for (self: Object, nullable Object) */
void VIRTUAL_array__ArrayMapKeys__remove(val* self, val* p0) {
array__ArrayMapKeys__remove(self, p0); /* Direct call array#ArrayMapKeys#remove on <self:Object(ArrayMapKeys[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMapKeys#init for (self: ArrayMapKeys[Object, nullable Object]) */
void array__ArrayMapKeys__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__init]))(self) /* init on <self:ArrayMapKeys[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method array#ArrayMapKeys#init for (self: Object) */
void VIRTUAL_array__ArrayMapKeys__init(val* self) {
{ /* Inline array#ArrayMapKeys#init (self) on <self:Object(ArrayMapKeys[Object, nullable Object])> */
{
((void (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__init]))(self) /* init on <self:Object(ArrayMapKeys[Object, nullable Object])>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method array#ArrayMapValues#map for (self: ArrayMapValues[Object, nullable Object]): ArrayMap[Object, nullable Object] */
val* array__ArrayMapValues__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#map for (self: Object): ArrayMap[Object, nullable Object] */
val* VIRTUAL_array__ArrayMapValues__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
{ /* Inline array#ArrayMapValues#map (self) on <self:Object(ArrayMapValues[Object, nullable Object])> */
var3 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:Object(ArrayMapValues[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#map= for (self: ArrayMapValues[Object, nullable Object], ArrayMap[Object, nullable Object]) */
void array__ArrayMapValues__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapValues_FT0array__ArrayMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[K, E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
self->attrs[COLOR_array__ArrayMapValues___map].val = p0; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMapValues#map= for (self: Object, ArrayMap[Object, nullable Object]) */
void VIRTUAL_array__ArrayMapValues__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline array#ArrayMapValues#map= (self,p0) on <self:Object(ArrayMapValues[Object, nullable Object])> */
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[K, E] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapValues_FT0array__ArrayMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[K, E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
self->attrs[COLOR_array__ArrayMapValues___map].val = p0; /* _map on <self:Object(ArrayMapValues[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method array#ArrayMapValues#first for (self: ArrayMapValues[Object, nullable Object]): nullable Object */
val* array__ArrayMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : Array[Couple[Object, nullable Object]] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var1:ArrayMap[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 612);
show_backtrace(1);
}
{
var5 = abstract_collection__SequenceRead__first(var4);
}
{
{ /* Inline abstract_collection#Couple#second (var5) on <var5:nullable Object(Couple[Object, nullable Object])> */
var8 = var5->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <var5:nullable Object(Couple[Object, nullable Object])> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#first for (self: Object): nullable Object */
val* VIRTUAL_array__ArrayMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__ArrayMapValues__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#is_empty for (self: ArrayMapValues[Object, nullable Object]): Bool */
short int array__ArrayMapValues__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__ArrayMap__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArrayMapValues__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapValues__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#length for (self: ArrayMapValues[Object, nullable Object]): Int */
long array__ArrayMapValues__length(val* self) {
long var /* : Int */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__ArrayMap__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#length for (self: Object): Int */
long VIRTUAL_array__ArrayMapValues__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMapValues__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#iterator for (self: ArrayMapValues[Object, nullable Object]): Iterator[nullable Object] */
val* array__ArrayMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[Object, nullable Object] */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : ArrayMap[Object, nullable Object] */;
val* var5 /* : MapIterator[Object, nullable Object] */;
var1 = NEW_abstract_collection__MapValuesIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapValuesIteratorarray__ArrayMapValues_FT0array__ArrayMapValues_FT1]);
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var4 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = abstract_collection__CoupleMap__iterator(var2);
}
{
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapValuesIterator__original_iterator_61d]))(var1, var5) /* original_iterator= on <var1:MapValuesIterator[Object, nullable Object]>*/;
}
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:MapValuesIterator[Object, nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__ArrayMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = array__ArrayMapValues__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#has for (self: ArrayMapValues[Object, nullable Object], nullable Object): Bool */
short int array__ArrayMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : ArrayMap[Object, nullable Object] */;
val* var5 /* : Array[Couple[Object, nullable Object]] */;
val* var_ /* var : Array[Couple[Object, nullable Object]] */;
val* var6 /* : ArrayIterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[Couple[Object, nullable Object]] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_i /* var i: Couple[Object, nullable Object] */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 617);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var4 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var2:ArrayMap[Object, nullable Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 620);
show_backtrace(1);
}
var_ = var5;
{
var6 = array__AbstractArrayRead__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = array__ArrayIterator__is_ok(var_7);
}
if (var8){
{
var9 = array__ArrayIterator__item(var_7);
}
var_i = var9;
{
{ /* Inline abstract_collection#Couple#second (var_i) on <var_i:Couple[Object, nullable Object]> */
var12 = var_i->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <var_i:Couple[Object, nullable Object]> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
var13 = (var_item == NULL);
} else {
var14 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_item) /* == on <var10:nullable Object>*/;
var13 = var14;
}
if (var13){
var15 = 1;
var = var15;
goto RET_LABEL;
} else {
}
{
array__ArrayIterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[Couple[Object, nullable Object]]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:ArrayIterator[Couple[Object, nullable Object]]> */
RET_LABEL16:(void)0;
}
}
var17 = 0;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArrayMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapValues__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#clear for (self: ArrayMapValues[Object, nullable Object]) */
void array__ArrayMapValues__clear(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var2 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
array__ArrayMap__clear(var); /* Direct call array#ArrayMap#clear on <var:ArrayMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method array#ArrayMapValues#clear for (self: Object) */
void VIRTUAL_array__ArrayMapValues__clear(val* self) {
array__ArrayMapValues__clear(self); /* Direct call array#ArrayMapValues#clear on <self:Object(ArrayMapValues[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMapValues#remove for (self: ArrayMapValues[Object, nullable Object], nullable Object) */
void array__ArrayMapValues__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
val* var_map /* var map: ArrayMap[Object, nullable Object] */;
val* var4 /* : Array[Couple[Object, nullable Object]] */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var_i /* var i: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
val* var24 /* : Array[Couple[Object, nullable Object]] */;
val* var25 /* : nullable Object */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 641);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline array#ArrayMapValues#map (self) on <self:ArrayMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 610);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_map = var1;
var4 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 644);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var4) on <var4:Array[Couple[Object, nullable Object]]> */
var7 = var4->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var4:Array[Couple[Object, nullable Object]]> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = 1;
{
{ /* Inline kernel#Int#- (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var15 = var5 - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_i = var9;
for(;;) {
var16 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var16) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var23 = var_i >= var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var24 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 646);
show_backtrace(1);
}
{
var25 = array__Array___91d_93d(var24, var_i);
}
{
{ /* Inline abstract_collection#Couple#second (var25) on <var25:nullable Object(Couple[Object, nullable Object])> */
var28 = var25->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <var25:nullable Object(Couple[Object, nullable Object])> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
var29 = (var_item == NULL);
} else {
var30 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_item) /* == on <var26:nullable Object>*/;
var29 = var30;
}
if (var29){
{
array__ArrayMap__remove_at_index(var_map, var_i); /* Direct call array#ArrayMap#remove_at_index on <var_map:ArrayMap[Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var31 = 1;
{
{ /* Inline kernel#Int#- (var_i,var31) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var38 = var_i - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_i = var32;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#ArrayMapValues#remove for (self: Object, nullable Object) */
void VIRTUAL_array__ArrayMapValues__remove(val* self, val* p0) {
array__ArrayMapValues__remove(self, p0); /* Direct call array#ArrayMapValues#remove on <self:Object(ArrayMapValues[Object, nullable Object])>*/
RET_LABEL:;
}
/* method array#ArrayMapValues#init for (self: ArrayMapValues[Object, nullable Object]) */
void array__ArrayMapValues__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__init]))(self) /* init on <self:ArrayMapValues[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method array#ArrayMapValues#init for (self: Object) */
void VIRTUAL_array__ArrayMapValues__init(val* self) {
{ /* Inline array#ArrayMapValues#init (self) on <self:Object(ArrayMapValues[Object, nullable Object])> */
{
((void (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__init]))(self) /* init on <self:Object(ArrayMapValues[Object, nullable Object])>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method array#Iterator#to_a for (self: Iterator[nullable Object]): Array[nullable Object] */
val* array__Iterator__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
var1 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayabstract_collection__Iterator_FT0]);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[nullable Object]>*/;
}
var_res = var1;
for(;;) {
{
var2 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:Iterator[nullable Object]>*/;
}
if (var2){
{
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__item]))(self) /* item on <self:Iterator[nullable Object]>*/;
}
{
array__Array__add(var_res, var3); /* Direct call array#Array#add on <var_res:Array[nullable Object]>*/
}
{
((void (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__next]))(self) /* next on <self:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Iterator#to_a for (self: Object): Array[nullable Object] */
val* VIRTUAL_array__Iterator__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = array__Iterator__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#Collection#to_a for (self: Collection[nullable Object]): Array[nullable Object] */
val* array__Collection__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
long var2 /* : Int */;
val* var_res /* var res: Array[nullable Object] */;
var1 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayabstract_collection__Collection_FT0]);
{
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
}
{
array__Array__with_capacity(var1, var2); /* Direct call array#Array#with_capacity on <var1:Array[nullable Object]>*/
}
var_res = var1;
{
abstract_collection__SimpleCollection__add_all(var_res, self); /* Direct call abstract_collection#SimpleCollection#add_all on <var_res:Array[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Collection#to_a for (self: Object): Array[nullable Object] */
val* VIRTUAL_array__Collection__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = array__Collection__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayCapable#calloc_array for (self: ArrayCapable[nullable Object], Int): NativeArray[nullable Object] */
val* array__ArrayCapable__calloc_array(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
var1 = NEW_array__NativeArray(p0, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayCapable#calloc_array for (self: Object, Int): NativeArray[nullable Object] */
val* VIRTUAL_array__ArrayCapable__calloc_array(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
val* var3 /* : NativeArray[nullable Object] */;
{ /* Inline array#ArrayCapable#calloc_array (self,p0) on <self:Object(ArrayCapable[nullable Object])> */
var3 = NEW_array__NativeArray(p0, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#NativeArray#new for (self: NativeArray[nullable Object], Int): NativeArray[nullable Object] */
val* array__NativeArray__new(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
RET_LABEL:;
return var;
}
/* method array#NativeArray#new for (self: Object, Int): NativeArray[nullable Object] */
val* VIRTUAL_array__NativeArray__new(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
{ /* Inline array#NativeArray#new (self,p0) on <self:Object(NativeArray[nullable Object])> */
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#NativeArray#[] for (self: NativeArray[nullable Object], Int): nullable Object */
val* array__NativeArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = ((struct instance_array__NativeArray*)self)->values[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#NativeArray#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_array__NativeArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{ /* Inline array#NativeArray#[] (self,p0) on <self:Object(NativeArray[nullable Object])> */
var3 = ((struct instance_array__NativeArray*)self)->values[p0];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#NativeArray#[]= for (self: NativeArray[nullable Object], Int, nullable Object) */
void array__NativeArray___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 778);
show_backtrace(1);
}
((struct instance_array__NativeArray*)self)->values[p0]=p1;
RET_LABEL:;
}
/* method array#NativeArray#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_array__NativeArray___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{ /* Inline array#NativeArray#[]= (self,p0,p1) on <self:Object(NativeArray[nullable Object])> */
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 778);
show_backtrace(1);
}
((struct instance_array__NativeArray*)self)->values[p0]=p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method array#NativeArray#copy_to for (self: NativeArray[nullable Object], NativeArray[nullable Object], Int) */
void array__NativeArray__copy_to(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (dest) <p0:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArrayarray__NativeArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 779);
show_backtrace(1);
}
memmove(((struct instance_array__NativeArray*)p0)->values, ((struct instance_array__NativeArray*)self)->values, p1*sizeof(val*));
RET_LABEL:;
}
/* method array#NativeArray#copy_to for (self: Object, NativeArray[nullable Object], Int) */
void VIRTUAL_array__NativeArray__copy_to(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline array#NativeArray#copy_to (self,p0,p1) on <self:Object(NativeArray[nullable Object])> */
/* Covariant cast for argument 0 (dest) <p0:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArrayarray__NativeArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 779);
show_backtrace(1);
}
memmove(((struct instance_array__NativeArray*)p0)->values, ((struct instance_array__NativeArray*)self)->values, p1*sizeof(val*));
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
