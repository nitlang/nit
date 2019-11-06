#include "core__array.sep.0.h"
/* method array$AbstractArrayRead$length for (self: AbstractArrayRead[nullable Object]): Int */
long core___core__AbstractArrayRead___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$length= for (self: AbstractArrayRead[nullable Object], Int) */
void core___core__AbstractArrayRead___length_61d(val* self, long p0) {
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = p0; /* _length on <self:AbstractArrayRead[nullable Object]> */
RET_LABEL:;
}
/* method array$AbstractArrayRead$is_empty for (self: AbstractArrayRead[nullable Object]): Bool */
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$has for (self: AbstractArrayRead[nullable Object], nullable Object): Bool */
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
var_item = p0;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArrayRead[nullable Object]>*/
}
var_l = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var4 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
if (var6 == NULL) {
var7 = (var_item == NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var_item); /* == on <var6:nullable Object>*/
var7 = var8;
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_i + 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_i = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$count for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long core___core__AbstractArrayRead___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_res /* var res: Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
var_item = p0;
var_res = 0l;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArrayRead[nullable Object]>*/
}
var_l = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var4 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
if (var6 == NULL) {
var7 = (var_item == NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var_item); /* == on <var6:nullable Object>*/
var7 = var8;
}
if (var7){
{
{ /* Inline kernel$Int$+ (var_res,1l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_res + 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_res = var9;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_i + 1l;
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
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$index_of for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
var_item = p0;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of_from(self, var_item, 0l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$last_index_of for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
var_item = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArrayRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of_from(self, var_item, var2);
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$index_of_from for (self: AbstractArrayRead[nullable Object], nullable Object, Int): Int */
long core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
var_item = p0;
var_pos = p1;
var_i = var_pos;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArrayRead[nullable Object]>*/
}
var_len = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_len) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var4 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_len;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
if (var6 == NULL) {
var7 = (var_item == NULL);
} else {
var8 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var_item); /* == on <var6:nullable Object>*/
var7 = var8;
}
if (var7){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_i + 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_i = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var18 = -1l;
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
/* method array$AbstractArrayRead$last_index_of_from for (self: AbstractArrayRead[nullable Object], nullable Object, Int): Int */
long core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
var_item = p0;
var_pos = p1;
var_i = var_pos;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
if (var5 == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_item); /* == on <var5:nullable Object>*/
var6 = var7;
}
if (var6){
var = var_i;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var17 = -1l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$reversed for (self: AbstractArrayRead[nullable Object]): Array[nullable Object] */
val* core___core__AbstractArrayRead___reversed(val* self) {
val* var /* : Array[nullable Object] */;
long var1 /* : Int */;
long var_cmp /* var cmp: Int */;
val* var2 /* : Array[nullable Object] */;
val* var_result /* var result: Array[nullable Object] */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var_cmp = var1;
var2 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__AbstractArrayRead___35dE]);
{
core___core__Array___with_capacity(var2, var_cmp); /* Direct call array$Array$with_capacity on <var2:Array[nullable Object]>*/
}
var_result = var2;
for(;;) {
{
{ /* Inline kernel$Int$> (var_cmp,0l) on <var_cmp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var_cmp > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel$Int$- (var_cmp,1l) on <var_cmp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var_cmp - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_cmp = var7;
{
var14 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_cmp); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_result, var14); /* Direct call array$Array$add on <var_result:Array[nullable Object]>*/
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
/* method array$AbstractArrayRead$copy_to for (self: AbstractArrayRead[nullable Object], Int, Int, AbstractArray[nullable Object], Int) */
void core___core__AbstractArrayRead___copy_to(val* self, long p0, long p1, val* p2, long p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: AbstractArray[nullable Object] */;
long var_new_start /* var new_start: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
long var_i /* var i: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
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
val* var36 /* : nullable Object */;
long var_i37 /* var i: Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
/* Covariant cast for argument 2 (dest) <p2:AbstractArray[nullable Object]> isa AbstractArray[E] */
/* <p2:AbstractArray[nullable Object]> isa AbstractArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__AbstractArray__core__AbstractArrayRead___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 106);
fatal_exit(1);
}
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
{
{ /* Inline kernel$Int$< (var_start,var_new_start) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_new_start:Int> isa OTHER */
/* <var_new_start:Int> isa OTHER */
var3 = 1; /* easy <var_new_start:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_start < var_new_start;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var_i = var_len;
for(;;) {
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var14 = var_i > 0l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var_i - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_i = var15;
{
{ /* Inline kernel$Int$+ (var_new_start,var_i) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var24 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_new_start + var_i;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start,var_i) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var31 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_start + var_i;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var36 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var29); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_dest->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_dest, var22, var36); /* []= on <var_dest:AbstractArray[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
var_i37 = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i37,var_len) on <var_i37:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var40 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var44 = var_i37 < var_len;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel$Int$+ (var_new_start,var_i37) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_i37:Int> isa OTHER */
/* <var_i37:Int> isa OTHER */
var47 = 1; /* easy <var_i37:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_new_start + var_i37;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start,var_i37) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_i37:Int> isa OTHER */
/* <var_i37:Int> isa OTHER */
var54 = 1; /* easy <var_i37:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_start + var_i37;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
var59 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var52); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_dest->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_dest, var45, var59); /* []= on <var_dest:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_i37,1l) on <var_i37:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_i37 + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_i37 = var60;
} else {
goto BREAK_label67;
}
}
BREAK_label67: (void)0;
}
RET_LABEL:;
}
/* method array$AbstractArrayRead$iterator for (self: AbstractArrayRead[nullable Object]): IndexedIterator[nullable Object] */
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[nullable Object] */;
val* var1 /* : nullable ArrayIterator[nullable Object] */;
val* var_res /* var res: nullable ArrayIterator[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ArrayIterator[nullable Object] */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___free_iterator].val; /* _free_iterator on <self:AbstractArrayRead[nullable Object]> */
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable ArrayIterator[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable ArrayIterator[nullable Object](ArrayIterator[nullable Object])> */
var7 = var_res == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var8 = NEW_core__array__ArrayIterator(self->type->resolution_table->types[COLOR_core__array__ArrayIterator__core__AbstractArrayRead___35dE]);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__array__ArrayIterator__array_61d]))(var8, self); /* array= on <var8:ArrayIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:ArrayIterator[nullable Object]>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var_res->attrs[COLOR_core__array__ArrayIterator___index].l = 0l; /* _index on <var_res:nullable ArrayIterator[nullable Object](ArrayIterator[nullable Object])> */
self->attrs[COLOR_core__array__AbstractArrayRead___free_iterator].val = ((val*)NULL); /* _free_iterator on <self:AbstractArrayRead[nullable Object]> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$reverse_iterator for (self: AbstractArrayRead[nullable Object]): IndexedIterator[nullable Object] */
val* core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[nullable Object] */;
val* var1 /* : ArrayReverseIterator[nullable Object] */;
var1 = NEW_core__array__ArrayReverseIterator(self->type->resolution_table->types[COLOR_core__array__ArrayReverseIterator__core__AbstractArrayRead___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__array__ArrayIterator__array_61d]))(var1, self); /* array= on <var1:ArrayReverseIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ArrayReverseIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArrayRead$sub for (self: AbstractArrayRead[nullable Object], Int, Int): Array[nullable Object] */
val* core___core__AbstractArrayRead___sub(val* self, long p0, long p1) {
val* var /* : Array[nullable Object] */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var_to /* var to: Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
val* var35 /* : Array[nullable Object] */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
val* var_res /* var res: Array[nullable Object] */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_from < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_count + var_from;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_count = var5;
var_from = 0l;
} else {
}
{
{ /* Inline kernel$Int$< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_count < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_count = 0l;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var21 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_from + var_count;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_to = var19;
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArrayRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$> (var_to,var26) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var33 = var_to > var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var34 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArrayRead[nullable Object]>*/
}
var_to = var34;
} else {
}
var35 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__AbstractArrayRead___35dE]);
{
{ /* Inline kernel$Int$- (var_to,var_from) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var38 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_to - var_from;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
core___core__Array___with_capacity(var35, var36); /* Direct call array$Array$with_capacity on <var35:Array[nullable Object]>*/
}
var_res = var35;
for(;;) {
{
{ /* Inline kernel$Int$< (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var45 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_from < var_to;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
var50 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_from); /* [] on <self:AbstractArrayRead[nullable Object]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var50); /* Direct call array$Array$add on <var_res:Array[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_from,1l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var57 = var_from + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_from = var51;
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
/* method array$AbstractArray$push for (self: AbstractArray[nullable Object], nullable Object) */
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__AbstractArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 216);
fatal_exit(1);
}
var_item = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(self, var_item); /* add on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$AbstractArray$pop for (self: AbstractArray[nullable Object]): nullable Object */
val* core___core__AbstractArray___core__abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_r /* var r: nullable Object */;
val* var_ /* var : AbstractArray[nullable Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:AbstractArray[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 220);
fatal_exit(1);
}
{
var3 = core___core__SequenceRead___last(self);
}
var_r = var3;
var_ = self;
var4 = var_->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_:AbstractArray[nullable Object]> */
{
{ /* Inline kernel$Int$- (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var4 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_->attrs[COLOR_core__array__AbstractArrayRead___length].l = var5; /* _length on <var_:AbstractArray[nullable Object]> */
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArray$shift for (self: AbstractArray[nullable Object]): nullable Object */
val* core___core__AbstractArray___core__abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_r /* var r: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_l /* var l: Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:AbstractArray[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 228);
fatal_exit(1);
}
{
var3 = core___core__SequenceRead___Collection__first(self);
}
var_r = var3;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var4 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_l = var5;
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(self->class->vft[COLOR_core__array__AbstractArrayRead__copy_to]))(self, 1l, var_l, self, 0l); /* copy_to on <self:AbstractArray[nullable Object]>*/
}
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var_l; /* _length on <self:AbstractArray[nullable Object]> */
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$AbstractArray$unshift for (self: AbstractArray[nullable Object], nullable Object) */
void core___core__AbstractArray___core__abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__AbstractArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 236);
fatal_exit(1);
}
var_item = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
var_l = var1;
{
{ /* Inline kernel$Int$> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var8 = var_l > 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_l + 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__array__AbstractArray__enlarge]))(self, var9); /* enlarge on <self:AbstractArray[nullable Object]>*/
}
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(self->class->vft[COLOR_core__array__AbstractArrayRead__copy_to]))(self, 0l, var_l, self, 1l); /* copy_to on <self:AbstractArray[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, 0l, var_item); /* []= on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$AbstractArray$insert for (self: AbstractArray[nullable Object], nullable Object, Int) */
void core___core__AbstractArray___core__abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
long var8 /* : Int */;
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
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__AbstractArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 246);
fatal_exit(1);
}
var_item = p0;
var_pos = p1;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var1 + 1l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__array__AbstractArray__enlarge]))(self, var2); /* enlarge on <self:AbstractArray[nullable Object]>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var9,var_pos) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var12 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var9 - var_pos;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_pos + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(self->class->vft[COLOR_core__array__AbstractArrayRead__copy_to]))(self, var_pos, var10, self, var17); /* copy_to on <self:AbstractArray[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, var_pos, var_item); /* []= on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$AbstractArray$insert_all for (self: AbstractArray[nullable Object], Collection[nullable Object], Int) */
void core___core__AbstractArray___core__abstract_collection__Sequence__insert_all(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
val* var_ /* var : AbstractArray[nullable Object] */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
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
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
val* var_43 /* var : Collection[nullable Object] */;
val* var44 /* : Iterator[nullable Object] */;
val* var_45 /* var : Iterator[nullable Object] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_c /* var c: nullable Object */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Collection__core__AbstractArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 252);
fatal_exit(1);
}
var_coll = p0;
var_pos = p1;
{
var1 = ((long(*)(val* self))((((long)var_coll&3)?class_info[((long)var_coll&3)]:var_coll->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_coll); /* length on <var_coll:Collection[nullable Object]>*/
}
var_l = var1;
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var4 = var_l == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
goto RET_LABEL;
} else {
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var5,var_l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var8 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var5 + var_l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__array__AbstractArray__enlarge]))(self, var6); /* enlarge on <self:AbstractArray[nullable Object]>*/
}
var_ = self;
var13 = var_->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_:AbstractArray[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var13,var_l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var16 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var13 + var_l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_->attrs[COLOR_core__array__AbstractArrayRead___length].l = var14; /* _length on <var_:AbstractArray[nullable Object]> */
{
var21 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var21,var_pos) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var24 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var21 - var_pos;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var22,var_l) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var31 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var22 - var_l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,var_l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var38 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_pos + var_l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(self->class->vft[COLOR_core__array__AbstractArrayRead__copy_to]))(self, var_pos, var29, self, var36); /* copy_to on <self:AbstractArray[nullable Object]>*/
}
var_43 = var_coll;
{
var44 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_43); /* iterator on <var_43:Collection[nullable Object]>*/
}
var_45 = var44;
for(;;) {
{
var46 = ((short int(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_45); /* is_ok on <var_45:Iterator[nullable Object]>*/
}
if (var46){
} else {
goto BREAK_label;
}
{
var47 = ((val*(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_45); /* item on <var_45:Iterator[nullable Object]>*/
}
var_c = var47;
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, var_pos, var_c); /* []= on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_pos + 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_pos = var48;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_45); /* next on <var_45:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_45); /* finish on <var_45:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$AbstractArray$clear for (self: AbstractArray[nullable Object]) */
void core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(val* self) {
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = 0l; /* _length on <self:AbstractArray[nullable Object]> */
RET_LABEL:;
}
/* method array$AbstractArray$remove for (self: AbstractArray[nullable Object], nullable Object) */
void core___core__AbstractArray___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_item /* var item: nullable Object */;
long var /* : Int */;
var_item = p0;
{
var = core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of(self, var_item);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__remove_at(self, var); /* Direct call array$AbstractArray$remove_at on <self:AbstractArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$AbstractArray$remove_at for (self: AbstractArray[nullable Object], Int) */
void core___core__AbstractArray___core__abstract_collection__Sequence__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
long var /* : Int */;
long var_l /* var l: Int */;
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
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var_j /* var j: Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
val* var34 /* : nullable Object */;
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
var_i = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
var_l = var;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var8 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_i + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_j = var13;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var22 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_j < var_l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
{ /* Inline kernel$Int$- (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var33 = var_j - 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
var34 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_j); /* [] on <self:AbstractArray[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, var27, var34); /* []= on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_j + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_j = var35;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var_l - 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var42; /* _length on <self:AbstractArray[nullable Object]> */
} else {
}
RET_LABEL:;
}
/* method array$Array$[] for (self: Array[nullable Object], Int): nullable Object */
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : nullable NativeArray[nullable Object] */;
val* var15 /* : nullable Object */;
val* var17 /* : Object */;
var_index = p0;
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_index >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var6 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$< (var_index,var6) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_index < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'index\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 323);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 324);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[] (var14,var_index) on <var14:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
var17 = ((struct instance_core__NativeArray*)var14)->values[var_index];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$Array$[]= for (self: Array[nullable Object], Int, nullable Object) */
void core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : nullable NativeArray[nullable Object] */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const struct type* type_struct59;
short int is_nullable60;
const char* var_class_name61;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Array___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 327);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var9 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var9 + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_index,var10) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var19 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var23 = var_index < var10;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var1 = var17;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'index\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 329);
fatal_exit(1);
}
var24 = self->attrs[COLOR_core__array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$<= (var24,var_index) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var27 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var31 = var24 <= var_index;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline kernel$Int$+ (var_index,1l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var_index + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___AbstractArray__enlarge(self, var32); /* Direct call array$Array$enlarge on <self:Array[nullable Object]>*/
}
} else {
}
var39 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$<= (var39,var_index) on <var39:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var42 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var46 = var39 <= var_index;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
{ /* Inline kernel$Int$+ (var_index,1l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_index + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var47; /* _length on <self:Array[nullable Object]> */
} else {
}
var54 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 336);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[]= (var54,var_index,var_item) on <var54:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct59 = var54->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype57 = type_struct59->color;
idtype58 = type_struct59->id;
is_nullable60 = type_struct59->is_nullable;
if(var_item == NULL) {
var56 = is_nullable60;
} else {
if(cltype57 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var56 = 0;
} else {
var56 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype57] == idtype58;
}
}
if (unlikely(!var56)) {
var_class_name61 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var54)->values[var_index]=var_item;
RET_LABEL55:(void)0;
}
}
RET_LABEL:;
}
/* method array$Array$add for (self: Array[nullable Object], nullable Object) */
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
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
val* var24 /* : nullable NativeArray[nullable Object] */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const struct type* type_struct29;
short int is_nullable30;
const char* var_class_name31;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Array___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 339);
fatal_exit(1);
}
var_item = p0;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
var2 = self->attrs[COLOR_core__array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$<= (var2,var_l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var5 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var9 = var2 <= var_l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_l + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
core___core__Array___AbstractArray__enlarge(self, var10); /* Direct call array$Array$enlarge on <self:Array[nullable Object]>*/
}
} else {
}
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_l + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var17; /* _length on <self:Array[nullable Object]> */
var24 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 346);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[]= (var24,var_l,var_item) on <var24:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct29 = var24->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype27 = type_struct29->color;
idtype28 = type_struct29->id;
is_nullable30 = type_struct29->is_nullable;
if(var_item == NULL) {
var26 = is_nullable30;
} else {
if(cltype27 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name31 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var24)->values[var_l]=var_item;
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method array$Array$add_all for (self: Array[nullable Object], Collection[nullable Object]) */
void core___core__Array___core__abstract_collection__SimpleCollection__add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_items /* var items: Collection[nullable Object] */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
long var9 /* : Int */;
long var_nl /* var nl: Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
long var_k /* var k: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : nullable NativeArray[nullable Object] */;
val* var30 /* : nullable NativeArray[nullable Object] */;
val* var31 /* : nullable Object */;
val* var33 /* : Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const struct type* type_struct38;
short int is_nullable;
const char* var_class_name39;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var54 /* : Iterator[nullable Object] */;
val* var_55 /* var : Iterator[nullable Object] */;
short int var56 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_item /* var item: nullable Object */;
val* var59 /* : nullable NativeArray[nullable Object] */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const struct type* type_struct64;
short int is_nullable65;
const char* var_class_name66;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
/* Covariant cast for argument 0 (items) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Collection__core__Array___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 349);
fatal_exit(1);
}
var_items = p0;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
{
var2 = ((long(*)(val* self))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_items); /* length on <var_items:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_l,var2) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_l + var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nl = var3;
var10 = self->attrs[COLOR_core__array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$< (var10,var_nl) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_nl:Int> isa OTHER */
/* <var_nl:Int> isa OTHER */
var13 = 1; /* easy <var_nl:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var10 < var_nl;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
core___core__Array___AbstractArray__enlarge(self, var_nl); /* Direct call array$Array$enlarge on <self:Array[nullable Object]>*/
}
} else {
}
/* <var_items:Collection[nullable Object]> isa Array[E] */
type_struct21 = self->type->resolution_table->types[COLOR_core__Array__core__Array___35dE];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
if(cltype19 >= (((long)var_items&3)?type_info[((long)var_items&3)]:var_items->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_items&3)?type_info[((long)var_items&3)]:var_items->type)->type_table[cltype19] == idtype20;
}
if (var18){
var_k = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_l,var_nl) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_nl:Int> isa OTHER */
/* <var_nl:Int> isa OTHER */
var24 = 1; /* easy <var_nl:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_l < var_nl;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var29 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 361);
fatal_exit(1);
}
var30 = var_items->attrs[COLOR_core__array__Array___items].val; /* _items on <var_items:Collection[nullable Object](Array[nullable Object])> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 361);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[] (var30,var_k) on <var30:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
var33 = ((struct instance_core__NativeArray*)var30)->values[var_k];
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline array$NativeArray$[]= (var29,var_l,var31) on <var29:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
/* Covariant cast for argument 1 (item) <var31:nullable Object> isa E */
/* <var31:nullable Object> isa E */
type_struct38 = var29->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype36 = type_struct38->color;
idtype37 = type_struct38->id;
is_nullable = type_struct38->is_nullable;
if(var31 == NULL) {
var35 = is_nullable;
} else {
if(cltype36 >= (((long)var31&3)?type_info[((long)var31&3)]:var31->type)->table_size) {
var35 = 0;
} else {
var35 = (((long)var31&3)?type_info[((long)var31&3)]:var31->type)->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
var_class_name39 = var31 == NULL ? "null" : (((long)var31&3)?type_info[((long)var31&3)]:var31->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var29)->values[var_l]=var31;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_l + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_l = var40;
{
{ /* Inline kernel$Int$+ (var_k,1l) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_k + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_k = var47;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
var_ = var_items;
{
var54 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_55 = var54;
for(;;) {
{
var56 = ((short int(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_55); /* is_ok on <var_55:Iterator[nullable Object]>*/
}
if (var56){
} else {
goto BREAK_label57;
}
{
var58 = ((val*(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_55); /* item on <var_55:Iterator[nullable Object]>*/
}
var_item = var58;
var59 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 367);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[]= (var59,var_l,var_item) on <var59:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct64 = var59->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype62 = type_struct64->color;
idtype63 = type_struct64->id;
is_nullable65 = type_struct64->is_nullable;
if(var_item == NULL) {
var61 = is_nullable65;
} else {
if(cltype62 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var61 = 0;
} else {
var61 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype62] == idtype63;
}
}
if (unlikely(!var61)) {
var_class_name66 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var59)->values[var_l]=var_item;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_l + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_l = var67;
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_55); /* next on <var_55:Iterator[nullable Object]>*/
}
}
BREAK_label57: (void)0;
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_55); /* finish on <var_55:Iterator[nullable Object]>*/
}
}
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var_nl; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array$Array$copy_to for (self: Array[nullable Object], Int, Int, AbstractArray[nullable Object], Int) */
void core___core__Array___AbstractArrayRead__copy_to(val* self, long p0, long p1, val* p2, long p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: AbstractArray[nullable Object] */;
long var_new_start /* var new_start: Int */;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
long var_dest_len /* var dest_len: Int */;
long var13 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var24 /* : nullable NativeArray[nullable Object] */;
val* var26 /* : nullable NativeArray[nullable Object] */;
val* var_items /* var items: nullable NativeArray[nullable Object] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable NativeArray[nullable Object] */;
val* var35 /* : nullable NativeArray[nullable Object] */;
val* var_dest_items /* var dest_items: nullable NativeArray[nullable Object] */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var_other39 /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const struct type* type_struct46;
const char* var_class_name47;
/* Covariant cast for argument 2 (dest) <p2:AbstractArray[nullable Object]> isa AbstractArray[E] */
/* <p2:AbstractArray[nullable Object]> isa AbstractArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__AbstractArray__core__Array___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 375);
fatal_exit(1);
}
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
/* <var_dest:AbstractArray[nullable Object]> isa Array[E] */
type_struct4 = self->type->resolution_table->types[COLOR_core__Array__core__Array___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= var_dest->type->table_size) {
var1 = 0;
} else {
var1 = var_dest->type->type_table[cltype2] == idtype3;
}
var5 = !var1;
if (var5){
{
((void(*)(val* self, long p0, long p1, val* p2, long p3))(self->class->vft[COLOR_core___core__Array___AbstractArrayRead__copy_to]))(self, p0, p1, p2, p3); /* copy_to on <self:Array[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_new_start,var_len) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var8 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_new_start + var_len;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_dest_len = var6;
{
{ /* Inline array$AbstractArrayRead$length (var_dest) on <var_dest:AbstractArray[nullable Object](Array[nullable Object])> */
var15 = var_dest->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_dest:AbstractArray[nullable Object](Array[nullable Object])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_dest_len,var13) on <var_dest_len:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var18 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var22 = var_dest_len > var13;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
core___core__Array___AbstractArray__enlarge(var_dest, var_dest_len); /* Direct call array$Array$enlarge on <var_dest:AbstractArray[nullable Object](Array[nullable Object])>*/
}
{
{ /* Inline array$AbstractArrayRead$length= (var_dest,var_dest_len) on <var_dest:AbstractArray[nullable Object](Array[nullable Object])> */
var_dest->attrs[COLOR_core__array__AbstractArrayRead___length].l = var_dest_len; /* _length on <var_dest:AbstractArray[nullable Object](Array[nullable Object])> */
RET_LABEL23:(void)0;
}
}
} else {
}
{
{ /* Inline array$Array$items (self) on <self:Array[nullable Object]> */
var26 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_items = var24;
if (var_items == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_items,((val*)NULL)) on <var_items:nullable NativeArray[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_items,var_other) on <var_items:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
var32 = var_items == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
goto RET_LABEL;
} else {
}
{
{ /* Inline array$Array$items (var_dest) on <var_dest:AbstractArray[nullable Object](Array[nullable Object])> */
var35 = var_dest->attrs[COLOR_core__array__Array___items].val; /* _items on <var_dest:AbstractArray[nullable Object](Array[nullable Object])> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_dest_items = var33;
if (var_dest_items == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_dest_items,((val*)NULL)) on <var_dest_items:nullable NativeArray[nullable Object]> */
var_other39 = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_dest_items->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_dest_items, var_other39); /* == on <var_dest_items:nullable NativeArray[nullable Object](NativeArray[nullable Object])>*/
}
var41 = !var40;
var37 = var41;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (unlikely(!var36)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 395);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$memmove (var_items,var_start,var_len,var_dest_items,var_new_start) on <var_items:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
/* Covariant cast for argument 2 (dest) <var_dest_items:nullable NativeArray[nullable Object](NativeArray[nullable Object])> isa NativeArray[E] */
/* <var_dest_items:nullable NativeArray[nullable Object](NativeArray[nullable Object])> isa NativeArray[E] */
type_struct46 = var_items->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
cltype44 = type_struct46->color;
idtype45 = type_struct46->id;
if(cltype44 >= var_dest_items->type->table_size) {
var43 = 0;
} else {
var43 = var_dest_items->type->type_table[cltype44] == idtype45;
}
if (unlikely(!var43)) {
var_class_name47 = var_dest_items == NULL ? "null" : var_dest_items->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 997);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)var_dest_items)->values+var_new_start, ((struct instance_core__NativeArray*)var_items)->values+var_start, var_len*sizeof(val*));
RET_LABEL42:(void)0;
}
}
RET_LABEL:;
}
/* method array$Array$enlarge for (self: Array[nullable Object], Int) */
void core___core__Array___AbstractArray__enlarge(val* self, long p0) {
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
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : NativeArray[nullable Object] */;
val* var_a /* var a: NativeArray[nullable Object] */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : nullable NativeArray[nullable Object] */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const struct type* type_struct;
const char* var_class_name41;
var_cap = p0;
var = self->attrs[COLOR_core__array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var_c = var;
{
{ /* Inline kernel$Int$<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
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
{ /* Inline kernel$Int$<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var7 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var11 = var_c <= var_cap;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel$Int$* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var14 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var18 = var_c * 2l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var12,2l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var21 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var12 + 2l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_c = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var26 = NEW_core__NativeArray((int)var_c, self->type->resolution_table->types[COLOR_core__NativeArray__core__Array___35dE]);
var_a = var26;
var27 = self->attrs[COLOR_core__array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{
{ /* Inline kernel$Int$> (var27,0l) on <var27:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var30 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var34 = var27 > 0l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
var35 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 407);
fatal_exit(1);
}
var36 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{
{ /* Inline array$NativeArray$copy_to (var35,var_a,var36) on <var35:nullable NativeArray[nullable Object](NativeArray[nullable Object])> */
/* Covariant cast for argument 0 (dest) <var_a:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_a:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = var35->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
cltype39 = type_struct->color;
idtype40 = type_struct->id;
if(cltype39 >= var_a->type->table_size) {
var38 = 0;
} else {
var38 = var_a->type->type_table[cltype39] == idtype40;
}
if (unlikely(!var38)) {
var_class_name41 = var_a == NULL ? "null" : var_a->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 994);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)var_a)->values, ((struct instance_core__NativeArray*)var35)->values, var36*sizeof(val*));
RET_LABEL37:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__array__Array___items].val = var_a; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__Array___capacity].l = var_c; /* _capacity on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array$Array$init for (self: Array[nullable Object]) */
void core___core__Array___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Array___core__kernel__Object__init]))(self); /* init on <self:Array[nullable Object]>*/
}
self->attrs[COLOR_core__array__Array___capacity].l = 0l; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = 0l; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array$Array$with_capacity for (self: Array[nullable Object], Int) */
void core___core__Array___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : NativeArray[nullable Object] */;
{
core___core__Array___core__kernel__Object__init(self); /* Direct call array$Array$init on <self:Array[nullable Object]>*/
}
var_cap = p0;
{
{ /* Inline kernel$Int$>= (var_cap,0l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var3 = var_cap >= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'positive\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 436);
fatal_exit(1);
}
var4 = NEW_core__NativeArray((int)var_cap, self->type->resolution_table->types[COLOR_core__NativeArray__core__Array___35dE]);
self->attrs[COLOR_core__array__Array___items].val = var4; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__Array___capacity].l = var_cap; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = 0l; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array$Array$filled_with for (self: Array[nullable Object], nullable Object, Int) */
void core___core__Array___filled_with(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_value /* var value: nullable Object */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
val* var8 /* : NativeArray[nullable Object] */;
long var_i /* var i: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Array___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 442);
fatal_exit(1);
}
{
core___core__Array___core__kernel__Object__init(self); /* Direct call array$Array$init on <self:Array[nullable Object]>*/
}
var_value = p0;
var_count = p1;
{
{ /* Inline kernel$Int$>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var_count >= 0l;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'positive\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 445);
fatal_exit(1);
}
var8 = NEW_core__NativeArray((int)var_count, self->type->resolution_table->types[COLOR_core__NativeArray__core__Array___35dE]);
self->attrs[COLOR_core__array__Array___items].val = var8; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__Array___capacity].l = var_count; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var_count; /* _length on <self:Array[nullable Object]> */
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_count) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var11 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var_i < var_count;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(self, var_i, var_value); /* Direct call array$Array$[]= on <self:Array[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_i + 1l;
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
RET_LABEL:;
}
/* method array$Array$with_native for (self: Array[nullable Object], NativeArray[nullable Object], Int) */
void core___core__Array___with_native(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_nat /* var nat: NativeArray[nullable Object] */;
long var_size /* var size: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (nat) <p0:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__NativeArray__core__Array___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 456);
fatal_exit(1);
}
{
core___core__Array___core__kernel__Object__init(self); /* Direct call array$Array$init on <self:Array[nullable Object]>*/
}
var_nat = p0;
var_size = p1;
{
{ /* Inline kernel$Int$>= (var_size,0l) on <var_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var_size >= 0l;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'positive\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 459);
fatal_exit(1);
}
self->attrs[COLOR_core__array__Array___items].val = var_nat; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__Array___capacity].l = var_size; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var_size; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array$Array$items for (self: Array[nullable Object]): nullable NativeArray[nullable Object] */
val* core___core__Array___items(val* self) {
val* var /* : nullable NativeArray[nullable Object] */;
val* var1 /* : nullable NativeArray[nullable Object] */;
var1 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array$Array$== for (self: Array[nullable Object], nullable Object): Bool */
short int core___core__Array___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_l /* var l: Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var_i /* var i: Int */;
val* var17 /* : nullable NativeArray[nullable Object] */;
val* var_it /* var it: NativeArray[nullable Object] */;
val* var18 /* : nullable NativeArray[nullable Object] */;
val* var_oit /* var oit: NativeArray[nullable Object] */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var27 /* : Object */;
val* var28 /* : nullable Object */;
val* var30 /* : Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
var_o = p0;
/* <var_o:nullable Object> isa Array[nullable Object] */
cltype = type_core__Array__nullable__core__Object.color;
idtype = type_core__Array__nullable__core__Object.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__Array___core__kernel__Object___61d_61d]))(self, p0); /* == on <self:Array[nullable Object]>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (self) on <self:Array[nullable Object]> */
var6 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_l = var4;
{
{ /* Inline array$AbstractArrayRead$length (var_o) on <var_o:nullable Object(Array[nullable Object])> */
var9 = var_o->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_o:nullable Object(Array[nullable Object])> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_l,var7) on <var_l:Int> */
var12 = var_l == var7;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var16 = var_l == 0l;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var = 1;
goto RET_LABEL;
} else {
}
var_i = 0l;
var17 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 479);
fatal_exit(1);
}
var_it = var17;
var18 = var_o->attrs[COLOR_core__array__Array___items].val; /* _items on <var_o:nullable Object(Array[nullable Object])> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 480);
fatal_exit(1);
}
var_oit = var18;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var21 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var_i < var_l;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline array$NativeArray$[] (var_it,var_i) on <var_it:NativeArray[nullable Object]> */
var27 = ((struct instance_core__NativeArray*)var_it)->values[var_i];
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline array$NativeArray$[] (var_oit,var_i) on <var_oit:NativeArray[nullable Object]> */
var30 = ((struct instance_core__NativeArray*)var_oit)->values[var_i];
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var25 == NULL) {
var31 = (var28 != NULL);
} else {
var32 = ((short int(*)(val* self, val* p0))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var25, var28); /* != on <var25:nullable Object>*/
var31 = var32;
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_i + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_i = var33;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$Array$clone for (self: Array[nullable Object]): Array[nullable Object] */
val* core___core__Array___core__kernel__Cloneable__clone(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
var1 = core__array___Collection___to_a(self);
}
/* <var1:Array[nullable Object]> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 509);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayIterator$item for (self: ArrayIterator[nullable Object]): nullable Object */
val* core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : AbstractArrayRead[nullable Object] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_core__array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 560);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
{
var3 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var2); /* [] on <var1:AbstractArrayRead[nullable Object]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayIterator$is_ok for (self: ArrayIterator[nullable Object]): Bool */
short int core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : AbstractArrayRead[nullable Object] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_core__array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var2 = self->attrs[COLOR_core__array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 564);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_collection__Collection__length]))(var2); /* length on <var2:AbstractArrayRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$< (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var1 < var3;
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
/* method array$ArrayIterator$next for (self: ArrayIterator[nullable Object]) */
void core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : ArrayIterator[nullable Object] */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
var = var_->attrs[COLOR_core__array__ArrayIterator___index].l; /* _index on <var_:ArrayIterator[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_->attrs[COLOR_core__array__ArrayIterator___index].l = var1; /* _index on <var_:ArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayIterator$index for (self: ArrayIterator[nullable Object]): Int */
long core__array___core__array__ArrayIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array$ArrayIterator$array= for (self: ArrayIterator[nullable Object], AbstractArrayRead[nullable Object]) */
void core__array___core__array__ArrayIterator___array_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (array) <p0:AbstractArrayRead[nullable Object]> isa AbstractArrayRead[E] */
/* <p0:AbstractArrayRead[nullable Object]> isa AbstractArrayRead[E] */
type_struct = self->type->resolution_table->types[COLOR_core__AbstractArrayRead__core__array__ArrayIterator___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 570);
fatal_exit(1);
}
self->attrs[COLOR_core__array__ArrayIterator___array].val = p0; /* _array on <self:ArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayIterator$finish for (self: ArrayIterator[nullable Object]) */
void core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__finish(val* self) {
val* var /* : AbstractArrayRead[nullable Object] */;
var = self->attrs[COLOR_core__array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 572);
fatal_exit(1);
}
var->attrs[COLOR_core__array__AbstractArrayRead___free_iterator].val = self; /* _free_iterator on <var:AbstractArrayRead[nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayIterator$init for (self: ArrayIterator[nullable Object]) */
void core__array___core__array__ArrayIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__array___core__array__ArrayIterator___core__kernel__Object__init]))(self); /* init on <self:ArrayIterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArrayReverseIterator$is_ok for (self: ArrayReverseIterator[nullable Object]): Bool */
short int core__array___core__array__ArrayReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
var1 = self->attrs[COLOR_core__array__ArrayIterator___index].l; /* _index on <self:ArrayReverseIterator[nullable Object]> */
{
{ /* Inline kernel$Int$>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var1 >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayReverseIterator$next for (self: ArrayReverseIterator[nullable Object]) */
void core__array___core__array__ArrayReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : ArrayReverseIterator[nullable Object] */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
var = var_->attrs[COLOR_core__array__ArrayIterator___index].l; /* _index on <var_:ArrayReverseIterator[nullable Object]> */
{
{ /* Inline kernel$Int$- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_->attrs[COLOR_core__array__ArrayIterator___index].l = var1; /* _index on <var_:ArrayReverseIterator[nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayReverseIterator$init for (self: ArrayReverseIterator[nullable Object]) */
void core__array___core__array__ArrayReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : AbstractArrayRead[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__array___core__array__ArrayReverseIterator___core__kernel__Object__init]))(self); /* init on <self:ArrayReverseIterator[nullable Object]>*/
}
var = self->attrs[COLOR_core__array__ArrayIterator___array].val; /* _array on <self:ArrayReverseIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 584);
fatal_exit(1);
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_core__abstract_collection__Collection__length]))(var); /* length on <var:AbstractArrayRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__array__ArrayIterator___index].l = var2; /* _index on <self:ArrayReverseIterator[nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayReverseIterator$finish for (self: ArrayReverseIterator[nullable Object]) */
void core__array___core__array__ArrayReverseIterator___core__abstract_collection__Iterator__finish(val* self) {
RET_LABEL:;
}
/* method array$ArraySet$has for (self: ArraySet[nullable Object], nullable Object): Bool */
short int core___core__ArraySet___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
val* var1 /* : Array[nullable Object] */;
short int var2 /* : Bool */;
var_e = p0;
var1 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 600);
fatal_exit(1);
}
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var1, var_e);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySet$add for (self: ArraySet[nullable Object], nullable Object) */
void core___core__ArraySet___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : Array[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__ArraySet___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 602);
fatal_exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 602);
fatal_exit(1);
}
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var1, var_e);
}
var3 = !var2;
if (var3){
var4 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 602);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var4, var_e); /* Direct call array$Array$add on <var4:Array[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method array$ArraySet$is_empty for (self: ArraySet[nullable Object]): Bool */
short int core___core__ArraySet___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[nullable Object] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 604);
fatal_exit(1);
}
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySet$length for (self: ArraySet[nullable Object]): Int */
long core___core__ArraySet___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[nullable Object] */;
long var2 /* : Int */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 606);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var1) on <var1:Array[nullable Object]> */
var4 = var1->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var1:Array[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySet$first for (self: ArraySet[nullable Object]): nullable Object */
val* core___core__ArraySet___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Array[nullable Object] */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : Array[nullable Object] */;
val* var10 /* : nullable Object */;
var1 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 610);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var1) on <var1:Array[nullable Object]> */
var4 = var1->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var1:Array[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var2,0l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var8 = var2 > 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 610);
fatal_exit(1);
}
var9 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 611);
fatal_exit(1);
}
{
var10 = core___core__SequenceRead___Collection__first(var9);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySet$remove for (self: ArraySet[nullable Object], nullable Object) */
void core___core__ArraySet___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_item /* var item: nullable Object */;
val* var /* : Array[nullable Object] */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
var_item = p0;
var = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 616);
fatal_exit(1);
}
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of(var, var_item);
}
var_i = var1;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
core___core__ArraySet___remove_at(self, var_i); /* Direct call array$ArraySet$remove_at on <self:ArraySet[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method array$ArraySet$clear for (self: ArraySet[nullable Object]) */
void core___core__ArraySet___core__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : Array[nullable Object] */;
var = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 622);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var); /* Direct call array$AbstractArray$clear on <var:Array[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArraySet$iterator for (self: ArraySet[nullable Object]): Iterator[nullable Object] */
val* core___core__ArraySet___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ArraySetIterator[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var3 /* : IndexedIterator[nullable Object] */;
var1 = NEW_core__array__ArraySetIterator(self->type->resolution_table->types[COLOR_core__array__ArraySetIterator__core__ArraySet___35dE]);
var2 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 624);
fatal_exit(1);
}
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__array__ArraySetIterator__iter_61d]))(var1, var3); /* iter= on <var1:ArraySetIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ArraySetIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySet$remove_at for (self: ArraySet[nullable Object], Int) */
void core___core__ArraySet___remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[nullable Object] */;
val* var4 /* : nullable Object */;
var_i = p0;
var = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 631);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 631);
fatal_exit(1);
}
{
var2 = core___core__SequenceRead___last(var1);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var, var_i, var2); /* Direct call array$Array$[]= on <var:Array[nullable Object]>*/
}
var3 = self->attrs[COLOR_core__array__ArraySet___array].val; /* _array on <self:ArraySet[nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 632);
fatal_exit(1);
}
{
var4 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var3);
}
RET_LABEL:;
}
/* method array$ArraySet$init for (self: ArraySet[nullable Object]) */
void core___core__ArraySet___core__kernel__Object__init(val* self) {
val* var /* : Array[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__ArraySet___core__kernel__Object__init]))(self); /* init on <self:ArraySet[nullable Object]>*/
}
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__ArraySet___35dE]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[nullable Object]>*/
}
self->attrs[COLOR_core__array__ArraySet___array].val = var; /* _array on <self:ArraySet[nullable Object]> */
RET_LABEL:;
}
/* method array$ArraySet$new_set for (self: ArraySet[nullable Object]): Set[nullable Object] */
val* core___core__ArraySet___core__abstract_collection__Set__new_set(val* self) {
val* var /* : Set[nullable Object] */;
val* var1 /* : ArraySet[nullable Object] */;
var1 = NEW_core__ArraySet(self->type->resolution_table->types[COLOR_core__ArraySet__core__ArraySet___35dE]);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array$ArraySet$init on <var1:ArraySet[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySet$clone for (self: ArraySet[nullable Object]): ArraySet[nullable Object] */
val* core___core__ArraySet___core__kernel__Cloneable__clone(val* self) {
val* var /* : ArraySet[nullable Object] */;
val* var1 /* : ArraySet[nullable Object] */;
val* var_res /* var res: ArraySet[nullable Object] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_core__ArraySet(self->type->resolution_table->types[COLOR_core__ArraySet__core__ArraySet___35dE]);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array$ArraySet$init on <var1:ArraySet[nullable Object]>*/
}
var_res = var1;
{
core___core__SimpleCollection___add_all(var_res, self); /* Direct call abstract_collection$SimpleCollection$add_all on <var_res:ArraySet[nullable Object]>*/
}
/* <var_res:ArraySet[nullable Object]> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_res->type->table_size) {
var2 = 0;
} else {
var2 = var_res->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var_res == NULL ? "null" : var_res->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 671);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySetIterator$is_ok for (self: ArraySetIterator[nullable Object]): Bool */
short int core__array___core__array__ArraySetIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_core__array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 679);
fatal_exit(1);
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:Iterator[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySetIterator$next for (self: ArraySetIterator[nullable Object]) */
void core__array___core__array__ArraySetIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Iterator[nullable Object] */;
var = self->attrs[COLOR_core__array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 681);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var); /* next on <var:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArraySetIterator$item for (self: ArraySetIterator[nullable Object]): nullable Object */
val* core__array___core__array__ArraySetIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_core__array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 683);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:Iterator[nullable Object]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArraySetIterator$iter= for (self: ArraySetIterator[nullable Object], Iterator[nullable Object]) */
void core__array___core__array__ArraySetIterator___iter_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (iter) <p0:Iterator[nullable Object]> isa Iterator[E] */
/* <p0:Iterator[nullable Object]> isa Iterator[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Iterator__core__array__ArraySetIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Iterator[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 685);
fatal_exit(1);
}
self->attrs[COLOR_core__array__ArraySetIterator___iter].val = p0; /* _iter on <self:ArraySetIterator[nullable Object]> */
RET_LABEL:;
}
/* method array$ArraySetIterator$init for (self: ArraySetIterator[nullable Object]) */
void core__array___core__array__ArraySetIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__array___core__array__ArraySetIterator___core__kernel__Object__init]))(self); /* init on <self:ArraySetIterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArrayMap$[] for (self: ArrayMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* core___core__ArrayMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_key /* var key: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var2 /* : Int */;
long var_i /* var i: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
val* var10 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var11 /* : nullable Object */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
var_key = p0;
/* <var_key:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__ArrayMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_key == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = var_key == NULL ? "null" : (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 697);
fatal_exit(1);
}
{
var2 = core___core__ArrayMap___index(self, var_key);
}
var_i = var2;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var9 = var_i >= 0l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var10 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 699);
fatal_exit(1);
}
{
var11 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var10, var_i);
}
{
{ /* Inline abstract_collection$Couple$second (var11) on <var11:nullable Object(Couple[nullable Object, nullable Object])> */
var14 = var11->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <var11:nullable Object(Couple[nullable Object, nullable Object])> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
{
var15 = core___core__MapRead___provide_default_value(self, var_key);
}
var = var15;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method array$ArrayMap$[]= for (self: ArrayMap[nullable Object, nullable Object], nullable Object, nullable Object) */
void core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
val* var_key /* var key: nullable Object */;
val* var_item /* var item: nullable Object */;
long var7 /* : Int */;
long var_i /* var i: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var16 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
short int is_nullable22;
const char* var_class_name23;
val* var24 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var25 /* : Couple[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__ArrayMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 705);
fatal_exit(1);
}
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_core__ArrayMap___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 705);
fatal_exit(1);
}
var_key = p0;
var_item = p1;
{
var7 = core___core__ArrayMap___index(self, var_key);
}
var_i = var7;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var14 = var_i >= 0l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var15 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 710);
fatal_exit(1);
}
{
var16 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var15, var_i);
}
{
{ /* Inline abstract_collection$Couple$second= (var16,var_item) on <var16:nullable Object(Couple[nullable Object, nullable Object])> */
/* Covariant cast for argument 0 (second) <var_item:nullable Object> isa S */
/* <var_item:nullable Object> isa S */
type_struct21 = var16->type->resolution_table->types[COLOR_core__Couple___35dS];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
is_nullable22 = type_struct21->is_nullable;
if(var_item == NULL) {
var18 = is_nullable22;
} else {
if(cltype19 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name23 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1258);
fatal_exit(1);
}
var16->attrs[COLOR_core__abstract_collection__Couple___second].val = var_item; /* _second on <var16:nullable Object(Couple[nullable Object, nullable Object])> */
RET_LABEL17:(void)0;
}
}
} else {
var24 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 712);
fatal_exit(1);
}
var25 = NEW_core__Couple(self->type->resolution_table->types[COLOR_core__Couple__core__ArrayMap___35dK__core__ArrayMap___35dE]);
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_core__abstract_collection__Couple__first_61d]))(var25, var_key); /* first= on <var25:Couple[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_core__abstract_collection__Couple__second_61d]))(var25, var_item); /* second= on <var25:Couple[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:Couple[nullable Object, nullable Object]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var24, var25); /* Direct call array$AbstractArray$push on <var24:Array[Couple[nullable Object, nullable Object]]>*/
}
}
RET_LABEL:;
}
/* method array$ArrayMap$keys for (self: ArrayMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* core___core__ArrayMap___core__abstract_collection__MapRead__keys(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : ArrayMapKeys[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__array__ArrayMap___keys].val != NULL; /* _keys on <self:ArrayMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__array__ArrayMap___keys].val; /* _keys on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 716);
fatal_exit(1);
}
} else {
var3 = NEW_core__array__ArrayMapKeys(self->type->resolution_table->types[COLOR_core__array__ArrayMapKeys__core__ArrayMap___35dK__core__ArrayMap___35dE]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__array__ArrayMapKeys__map_61d]))(var3, self); /* map= on <var3:ArrayMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:ArrayMapKeys[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_core__array__ArrayMap___keys].val = var3; /* _keys on <self:ArrayMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method array$ArrayMap$values for (self: ArrayMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* core___core__ArrayMap___core__abstract_collection__MapRead__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : ArrayMapValues[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__array__ArrayMap___values].val != NULL; /* _values on <self:ArrayMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__array__ArrayMap___values].val; /* _values on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 717);
fatal_exit(1);
}
} else {
var3 = NEW_core__array__ArrayMapValues(self->type->resolution_table->types[COLOR_core__array__ArrayMapValues__core__ArrayMap___35dK__core__ArrayMap___35dE]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__array__ArrayMapValues__map_61d]))(var3, self); /* map= on <var3:ArrayMapValues[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:ArrayMapValues[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_core__array__ArrayMap___values].val = var3; /* _values on <self:ArrayMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method array$ArrayMap$length for (self: ArrayMap[nullable Object, nullable Object]): Int */
long core___core__ArrayMap___core__abstract_collection__MapRead__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[Couple[nullable Object, nullable Object]] */;
long var2 /* : Int */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 720);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var1) on <var1:Array[Couple[nullable Object, nullable Object]]> */
var4 = var1->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var1:Array[Couple[nullable Object, nullable Object]]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMap$couple_iterator for (self: ArrayMap[nullable Object, nullable Object]): Iterator[Couple[nullable Object, nullable Object]] */
val* core___core__ArrayMap___core__abstract_collection__CoupleMap__couple_iterator(val* self) {
val* var /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var1 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var2 /* : IndexedIterator[nullable Object] */;
var1 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 722);
fatal_exit(1);
}
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMap$is_empty for (self: ArrayMap[nullable Object, nullable Object]): Bool */
short int core___core__ArrayMap___core__abstract_collection__MapRead__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Couple[nullable Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 724);
fatal_exit(1);
}
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMap$clear for (self: ArrayMap[nullable Object, nullable Object]) */
void core___core__ArrayMap___core__abstract_collection__Map__clear(val* self) {
val* var /* : Array[Couple[nullable Object, nullable Object]] */;
var = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 726);
fatal_exit(1);
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var); /* Direct call array$AbstractArray$clear on <var:Array[Couple[nullable Object, nullable Object]]>*/
}
RET_LABEL:;
}
/* method array$ArrayMap$couple_at for (self: ArrayMap[nullable Object, nullable Object], nullable Object): nullable Couple[nullable Object, nullable Object] */
val* core___core__ArrayMap___core__abstract_collection__CoupleMap__couple_at(val* self, val* p0) {
val* var /* : nullable Couple[nullable Object, nullable Object] */;
val* var_key /* var key: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var2 /* : Int */;
long var_i /* var i: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
val* var10 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var11 /* : nullable Object */;
var_key = p0;
/* <var_key:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__ArrayMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_key == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = var_key == NULL ? "null" : (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 733);
fatal_exit(1);
}
{
var2 = core___core__ArrayMap___index(self, var_key);
}
var_i = var2;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var9 = var_i >= 0l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var10 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 735);
fatal_exit(1);
}
{
var11 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var10, var_i);
}
var = var11;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method array$ArrayMap$remove_at_index for (self: ArrayMap[nullable Object, nullable Object], Int) */
void core___core__ArrayMap___remove_at_index(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[Couple[nullable Object, nullable Object]] */;
val* var1 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var4 /* : nullable Object */;
var_i = p0;
var = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 747);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 747);
fatal_exit(1);
}
{
var2 = core___core__SequenceRead___last(var1);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var, var_i, var2); /* Direct call array$Array$[]= on <var:Array[Couple[nullable Object, nullable Object]]>*/
}
var3 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 748);
fatal_exit(1);
}
{
var4 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var3);
}
RET_LABEL:;
}
/* method array$ArrayMap$index for (self: ArrayMap[nullable Object, nullable Object], nullable Object): Int */
long core___core__ArrayMap___index(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
long var2 /* : Int */;
long var_l /* var l: Int */;
short int var3 /* : Bool */;
val* var4 /* : Array[Couple[nullable Object, nullable Object]] */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var16 /* : nullable Object */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
long var_i /* var i: Int */;
val* var22 /* : Array[Couple[nullable Object, nullable Object]] */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
val* var33 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var34 /* : nullable Object */;
val* var35 /* : nullable Object */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__ArrayMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 754);
fatal_exit(1);
}
var_key = p0;
var2 = self->attrs[COLOR_core__array__ArrayMap___last_index].l; /* _last_index on <self:ArrayMap[nullable Object, nullable Object]> */
var_l = var2;
var4 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 759);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var4) on <var4:Array[Couple[nullable Object, nullable Object]]> */
var7 = var4->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var4:Array[Couple[nullable Object, nullable Object]]> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_l,var5) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_l < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ = var8;
if (var8){
var15 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 759);
fatal_exit(1);
}
{
var16 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var15, var_l);
}
{
{ /* Inline abstract_collection$Couple$first (var16) on <var16:nullable Object(Couple[nullable Object, nullable Object])> */
var19 = var16->attrs[COLOR_core__abstract_collection__Couple___first].val; /* _first on <var16:nullable Object(Couple[nullable Object, nullable Object])> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
var20 = (var_key == NULL);
} else {
var21 = ((short int(*)(val* self, val* p0))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var17, var_key); /* == on <var17:nullable Object>*/
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
var_i = 0l;
for(;;) {
var22 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 762);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var22) on <var22:Array[Couple[nullable Object, nullable Object]]> */
var25 = var22->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var22:Array[Couple[nullable Object, nullable Object]]> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var28 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var32 = var_i < var23;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var33 = self->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <self:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 763);
fatal_exit(1);
}
{
var34 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var33, var_i);
}
{
{ /* Inline abstract_collection$Couple$first (var34) on <var34:nullable Object(Couple[nullable Object, nullable Object])> */
var37 = var34->attrs[COLOR_core__abstract_collection__Couple___first].val; /* _first on <var34:nullable Object(Couple[nullable Object, nullable Object])> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35 == NULL) {
var38 = (var_key == NULL);
} else {
var39 = ((short int(*)(val* self, val* p0))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var35, var_key); /* == on <var35:nullable Object>*/
var38 = var39;
}
if (var38){
self->attrs[COLOR_core__array__ArrayMap___last_index].l = var_i; /* _last_index on <self:ArrayMap[nullable Object, nullable Object]> */
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_i + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_i = var40;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var49 = -1l;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var = var47;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMap$clone for (self: ArrayMap[nullable Object, nullable Object]): ArrayMap[nullable Object, nullable Object] */
val* core___core__ArrayMap___core__kernel__Cloneable__clone(val* self) {
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var_res /* var res: ArrayMap[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_core__ArrayMap(self->type->resolution_table->types[COLOR_core__ArrayMap__core__ArrayMap___35dK__core__ArrayMap___35dE]);
{
{ /* Inline kernel$Object$init (var1) on <var1:ArrayMap[nullable Object, nullable Object]> */
RET_LABEL2:(void)0;
}
}
var_res = var1;
{
core___core__Map___add_all(var_res, self); /* Direct call abstract_collection$Map$add_all on <var_res:ArrayMap[nullable Object, nullable Object]>*/
}
/* <var_res:ArrayMap[nullable Object, nullable Object]> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_res->type->table_size) {
var3 = 0;
} else {
var3 = var_res->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var_res == NULL ? "null" : var_res->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 798);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$map for (self: ArrayMapKeys[nullable Object, nullable Object]): ArrayMap[nullable Object, nullable Object] */
val* core__array___core__array__ArrayMapKeys___map(val* self) {
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$map= for (self: ArrayMapKeys[nullable Object, nullable Object], ArrayMap[nullable Object, nullable Object]) */
void core__array___core__array__ArrayMapKeys___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[nullable Object, nullable Object]> isa ArrayMap[K, E] */
/* <p0:ArrayMap[nullable Object, nullable Object]> isa ArrayMap[K, E] */
type_struct = self->type->resolution_table->types[COLOR_core__ArrayMap__core__array__ArrayMapKeys___35dK__core__array__ArrayMapKeys___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
self->attrs[COLOR_core__array__ArrayMapKeys___map].val = p0; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayMapKeys$count for (self: ArrayMapKeys[nullable Object, nullable Object], nullable Object): Int */
long core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_k /* var k: nullable Object */;
short int var1 /* : Bool */;
var_k = p0;
{
var1 = core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__has(self, var_k);
}
if (var1){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$first for (self: ArrayMapKeys[nullable Object, nullable Object]): nullable Object */
val* core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
val* var4 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <var1:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 807);
fatal_exit(1);
}
{
var5 = core___core__SequenceRead___Collection__first(var4);
}
{
{ /* Inline abstract_collection$Couple$first (var5) on <var5:nullable Object(Couple[nullable Object, nullable Object])> */
var8 = var5->attrs[COLOR_core__abstract_collection__Couple___first].val; /* _first on <var5:nullable Object(Couple[nullable Object, nullable Object])> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$has for (self: ArrayMapKeys[nullable Object, nullable Object], nullable Object): Bool */
short int core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_k /* var k: nullable Object */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
var_k = p0;
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var_k:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__array__ArrayMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_k == NULL) {
var4 = is_nullable;
} else {
if(cltype >= (((long)var_k&3)?type_info[((long)var_k&3)]:var_k->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_k&3)?type_info[((long)var_k&3)]:var_k->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
var_class_name = var_k == NULL ? "null" : (((long)var_k&3)?type_info[((long)var_k&3)]:var_k->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 808);
fatal_exit(1);
}
{
var5 = core___core__ArrayMap___index(var1, var_k);
}
{
{ /* Inline kernel$Int$>= (var5,0l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var12 = var5 >= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$is_empty for (self: ArrayMapKeys[nullable Object, nullable Object]): Bool */
short int core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__ArrayMap___core__abstract_collection__MapRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$length for (self: ArrayMapKeys[nullable Object, nullable Object]): Int */
long core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__ArrayMap___core__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$iterator for (self: ArrayMapKeys[nullable Object, nullable Object]): Iterator[nullable Object] */
val* core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapKeysIterator[nullable Object, nullable Object] */;
val* var2 /* : ArrayMap[nullable Object, nullable Object] */;
val* var4 /* : ArrayMap[nullable Object, nullable Object] */;
val* var5 /* : MapIterator[nullable Object, nullable Object] */;
var1 = NEW_core__MapKeysIterator(self->type->resolution_table->types[COLOR_core__MapKeysIterator__core__array__ArrayMapKeys___35dK__core__array__ArrayMapKeys___35dE]);
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__CoupleMap___MapRead__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapKeysIterator__original_iterator_61d]))(var1, var5); /* original_iterator= on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapKeys$clear for (self: ArrayMapKeys[nullable Object, nullable Object]) */
void core__array___core__array__ArrayMapKeys___core__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var2 /* : ArrayMap[nullable Object, nullable Object] */;
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__ArrayMap___core__abstract_collection__Map__clear(var); /* Direct call array$ArrayMap$clear on <var:ArrayMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArrayMapKeys$remove for (self: ArrayMapKeys[nullable Object, nullable Object], nullable Object) */
void core__array___core__array__ArrayMapKeys___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_key /* var key: nullable Object */;
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var2 /* : ArrayMap[nullable Object, nullable Object] */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var4 /* : Int */;
long var_i /* var i: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : ArrayMap[nullable Object, nullable Object] */;
val* var14 /* : ArrayMap[nullable Object, nullable Object] */;
var_key = p0;
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var_key:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__array__ArrayMapKeys___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_key == NULL) {
var3 = is_nullable;
} else {
if(cltype >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var_key == NULL ? "null" : (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 816);
fatal_exit(1);
}
{
var4 = core___core__ArrayMap___index(var, var_key);
}
var_i = var4;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_i >= 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array$ArrayMapKeys$map (self) on <self:ArrayMapKeys[nullable Object, nullable Object]> */
var14 = self->attrs[COLOR_core__array__ArrayMapKeys___map].val; /* _map on <self:ArrayMapKeys[nullable Object, nullable Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 804);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
core___core__ArrayMap___remove_at_index(var12, var_i); /* Direct call array$ArrayMap$remove_at_index on <var12:ArrayMap[nullable Object, nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method array$ArrayMapKeys$init for (self: ArrayMapKeys[nullable Object, nullable Object]) */
void core__array___core__array__ArrayMapKeys___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__array___core__array__ArrayMapKeys___core__kernel__Object__init]))(self); /* init on <self:ArrayMapKeys[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArrayMapValues$map for (self: ArrayMapValues[nullable Object, nullable Object]): ArrayMap[nullable Object, nullable Object] */
val* core__array___core__array__ArrayMapValues___map(val* self) {
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$map= for (self: ArrayMapValues[nullable Object, nullable Object], ArrayMap[nullable Object, nullable Object]) */
void core__array___core__array__ArrayMapValues___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[nullable Object, nullable Object]> isa ArrayMap[K, E] */
/* <p0:ArrayMap[nullable Object, nullable Object]> isa ArrayMap[K, E] */
type_struct = self->type->resolution_table->types[COLOR_core__ArrayMap__core__array__ArrayMapValues___35dK__core__array__ArrayMapValues___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
self->attrs[COLOR_core__array__ArrayMapValues___map].val = p0; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method array$ArrayMapValues$first for (self: ArrayMapValues[nullable Object, nullable Object]): nullable Object */
val* core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
val* var4 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <var1:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 826);
fatal_exit(1);
}
{
var5 = core___core__SequenceRead___Collection__first(var4);
}
{
{ /* Inline abstract_collection$Couple$second (var5) on <var5:nullable Object(Couple[nullable Object, nullable Object])> */
var8 = var5->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <var5:nullable Object(Couple[nullable Object, nullable Object])> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$is_empty for (self: ArrayMapValues[nullable Object, nullable Object]): Bool */
short int core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__ArrayMap___core__abstract_collection__MapRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$length for (self: ArrayMapValues[nullable Object, nullable Object]): Int */
long core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__ArrayMap___core__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$iterator for (self: ArrayMapValues[nullable Object, nullable Object]): Iterator[nullable Object] */
val* core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[nullable Object, nullable Object] */;
val* var2 /* : ArrayMap[nullable Object, nullable Object] */;
val* var4 /* : ArrayMap[nullable Object, nullable Object] */;
val* var5 /* : MapIterator[nullable Object, nullable Object] */;
var1 = NEW_core__MapValuesIterator(self->type->resolution_table->types[COLOR_core__MapValuesIterator__core__array__ArrayMapValues___35dK__core__array__ArrayMapValues___35dE]);
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__CoupleMap___MapRead__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapValuesIterator__original_iterator_61d]))(var1, var5); /* original_iterator= on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$has for (self: ArrayMapValues[nullable Object, nullable Object], nullable Object): Bool */
short int core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
val* var4 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var_ /* var : Array[Couple[nullable Object, nullable Object]] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Couple[nullable Object, nullable Object]] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_i /* var i: Couple[nullable Object, nullable Object] */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
var_item = p0;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <var1:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 834);
fatal_exit(1);
}
var_ = var4;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
var_i = var8;
{
{ /* Inline abstract_collection$Couple$second (var_i) on <var_i:Couple[nullable Object, nullable Object]> */
var11 = var_i->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <var_i:Couple[nullable Object, nullable Object]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
var12 = (var_item == NULL);
} else {
var13 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var_item); /* == on <var9:nullable Object>*/
var12 = var13;
}
if (var12){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$count for (self: ArrayMapValues[nullable Object, nullable Object], nullable Object): Int */
long core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_nb /* var nb: Int */;
val* var1 /* : ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : ArrayMap[nullable Object, nullable Object] */;
val* var4 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var_ /* var : Array[Couple[nullable Object, nullable Object]] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Couple[nullable Object, nullable Object]] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_i /* var i: Couple[nullable Object, nullable Object] */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
var_item = p0;
var_nb = 0l;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <var1:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 849);
fatal_exit(1);
}
var_ = var4;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
var_i = var8;
{
{ /* Inline abstract_collection$Couple$second (var_i) on <var_i:Couple[nullable Object, nullable Object]> */
var11 = var_i->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <var_i:Couple[nullable Object, nullable Object]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
var12 = (var_item == NULL);
} else {
var13 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var_item); /* == on <var9:nullable Object>*/
var12 = var13;
}
if (var12){
{
{ /* Inline kernel$Int$+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var_nb + 1l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nb = var14;
} else {
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Couple[nullable Object, nullable Object]]>*/
}
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$ArrayMapValues$clear for (self: ArrayMapValues[nullable Object, nullable Object]) */
void core__array___core__array__ArrayMapValues___core__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var2 /* : ArrayMap[nullable Object, nullable Object] */;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__ArrayMap___core__abstract_collection__Map__clear(var); /* Direct call array$ArrayMap$clear on <var:ArrayMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method array$ArrayMapValues$remove for (self: ArrayMapValues[nullable Object, nullable Object], nullable Object) */
void core__array___core__array__ArrayMapValues___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_item /* var item: nullable Object */;
val* var /* : ArrayMap[nullable Object, nullable Object] */;
val* var2 /* : ArrayMap[nullable Object, nullable Object] */;
val* var_map /* var map: ArrayMap[nullable Object, nullable Object] */;
val* var3 /* : Array[Couple[nullable Object, nullable Object]] */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
long var_i /* var i: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : Array[Couple[nullable Object, nullable Object]] */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
var_item = p0;
{
{ /* Inline array$ArrayMapValues$map (self) on <self:ArrayMapValues[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__array__ArrayMapValues___map].val; /* _map on <self:ArrayMapValues[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 824);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_map = var;
var3 = var_map->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 858);
fatal_exit(1);
}
{
{ /* Inline array$AbstractArrayRead$length (var3) on <var3:Array[Couple[nullable Object, nullable Object]]> */
var6 = var3->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var3:Array[Couple[nullable Object, nullable Object]]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var10 = var4 - 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_i = var7;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var17 = var_i >= 0l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var18 = var_map->attrs[COLOR_core__array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[nullable Object, nullable Object]> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 860);
fatal_exit(1);
}
{
var19 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var18, var_i);
}
{
{ /* Inline abstract_collection$Couple$second (var19) on <var19:nullable Object(Couple[nullable Object, nullable Object])> */
var22 = var19->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <var19:nullable Object(Couple[nullable Object, nullable Object])> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
var23 = (var_item == NULL);
} else {
var24 = ((short int(*)(val* self, val* p0))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var20, var_item); /* == on <var20:nullable Object>*/
var23 = var24;
}
if (var23){
{
core___core__ArrayMap___remove_at_index(var_map, var_i); /* Direct call array$ArrayMap$remove_at_index on <var_map:ArrayMap[nullable Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_i - 1l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_i = var25;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array$ArrayMapValues$init for (self: ArrayMapValues[nullable Object, nullable Object]) */
void core__array___core__array__ArrayMapValues___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__array___core__array__ArrayMapValues___core__kernel__Object__init]))(self); /* init on <self:ArrayMapValues[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method array$Iterator$to_a for (self: Iterator[nullable Object]): Array[nullable Object] */
val* core__array___Iterator___to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
var1 = NEW_core__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__Iterator___35dE]);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[nullable Object]>*/
}
var_res = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:Iterator[nullable Object]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(self); /* item on <self:Iterator[nullable Object]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var3); /* Direct call array$Array$add on <var_res:Array[nullable Object]>*/
}
{
((void(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(self); /* next on <self:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(self); /* finish on <self:Iterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$Collection$to_a for (self: Collection[nullable Object]): Array[nullable Object] */
val* core__array___Collection___to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
long var2 /* : Int */;
val* var_res /* var res: Array[nullable Object] */;
var1 = NEW_core__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__Collection___35dE]);
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
core___core__Array___with_capacity(var1, var2); /* Direct call array$Array$with_capacity on <var1:Array[nullable Object]>*/
}
var_res = var1;
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_res, self); /* Direct call array$Array$add_all on <var_res:Array[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$NativeArray$new for (self: NativeArray[nullable Object], Int): NativeArray[nullable Object] */
val* core___core__NativeArray___new(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED", "new", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 981);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method array$NativeArray$length for (self: NativeArray[nullable Object]): Int */
long core___core__NativeArray___length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ((struct instance_core__NativeArray*)self)->length;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$NativeArray$[] for (self: NativeArray[nullable Object], Int): nullable Object */
val* core___core__NativeArray____91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = ((struct instance_core__NativeArray*)self)->values[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array$NativeArray$[]= for (self: NativeArray[nullable Object], Int, nullable Object) */
void core___core__NativeArray____91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)self)->values[p0]=p1;
RET_LABEL:;
}
/* method array$NativeArray$copy_to for (self: NativeArray[nullable Object], NativeArray[nullable Object], Int) */
void core___core__NativeArray___copy_to(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (dest) <p0:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 994);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)p0)->values, ((struct instance_core__NativeArray*)self)->values, p1*sizeof(val*));
RET_LABEL:;
}
/* method array$NativeArray$memmove for (self: NativeArray[nullable Object], Int, Int, NativeArray[nullable Object], Int) */
void core___core__NativeArray___memmove(val* self, long p0, long p1, val* p2, long p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 2 (dest) <p2:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p2:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p2->type->table_size) {
var = 0;
} else {
var = p2->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 997);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)p2)->values+p3, ((struct instance_core__NativeArray*)self)->values+p0, p1*sizeof(val*));
RET_LABEL:;
}
