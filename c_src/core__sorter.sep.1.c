#include "core__sorter.sep.0.h"
/* method sorter$Comparator$sort for (self: Comparator, Array[nullable Object]) */
void core___core__Comparator___sort(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__sorter, 82);
fatal_exit(1);
}
var_array = p0;
{
{ /* Inline array$AbstractArrayRead$length (var_array) on <var_array:Array[nullable Object]> */
var3 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var10 = var1 - 1l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
core___core__Comparator___sub_sort(self, var_array, 0l, var4); /* Direct call sorter$Comparator$sub_sort on <self:Comparator>*/
}
RET_LABEL:;
}
/* method sorter$Comparator$sub_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void core___core__Comparator___sub_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__sorter, 91);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
{ /* Inline kernel$Int$>= (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var_from >= var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$+ (var_from,7l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <7l:Int> isa OTHER */
/* <7l:Int> isa OTHER */
var10 = 1; /* easy <7l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_from + 7l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var8,var_to) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var17 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var8 < var_to;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
core___core__Comparator___quick_sort(self, var_array, var_from, var_to); /* Direct call sorter$Comparator$quick_sort on <self:Comparator>*/
}
} else {
{
core___core__Comparator___bubble_sort(self, var_array, var_from, var_to); /* Direct call sorter$Comparator$bubble_sort on <self:Comparator>*/
}
}
}
RET_LABEL:;
}
/* method sorter$Comparator$quick_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void core___core__Comparator___quick_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
val* var1 /* : nullable Object */;
val* var_pivot /* var pivot: nullable Object */;
long var_i /* var i: Int */;
long var_j /* var j: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : nullable Object */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_t /* var t: nullable Object */;
val* var67 /* : nullable Object */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
val* var76 /* : nullable Object */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__sorter, 103);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
var1 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_from);
}
var_pivot = var1;
var_i = var_from;
var_j = var_to;
for(;;) {
{
{ /* Inline kernel$Int$> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var8 = var_j > var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_to) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var12 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var16 = var_i <= var_to;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ = var10;
if (var10){
{
var17 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
var18 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__sorter__Comparator__compare]))(self, var17, var_pivot); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel$Int$<= (var18,0l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var21 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var25 = var18 <= 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var9 = var19;
} else {
var9 = var_;
}
if (var9){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var_i + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_i = var26;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
for(;;) {
{
{ /* Inline kernel$Int$> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var36 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var40 = var_j > var_i;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
var42 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_j);
}
{
var43 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__sorter__Comparator__compare]))(self, var42, var_pivot); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel$Int$>= (var43,0l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var50 = var43 >= 0l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var33 = var44;
} else {
var33 = var_41;
}
if (var33){
{
{ /* Inline kernel$Int$- (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var57 = var_j - 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_j = var51;
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
{ /* Inline kernel$Int$> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var61 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var65 = var_j > var_i;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
var66 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
var_t = var66;
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_j);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_array, var_i, var67); /* Direct call array$Array$[]= on <var_array:Array[nullable Object]>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_array, var_j, var_t); /* Direct call array$Array$[]= on <var_array:Array[nullable Object]>*/
}
} else {
}
} else {
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var75 = var_i - 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
var76 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var69);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_array, var_from, var76); /* Direct call array$Array$[]= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var83 = var_i - 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_array, var77, var_pivot); /* Direct call array$Array$[]= on <var_array:Array[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var_i,2l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var86 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var90 = var_i - 2l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
core___core__Comparator___sub_sort(self, var_array, var_from, var84); /* Direct call sorter$Comparator$sub_sort on <self:Comparator>*/
}
{
core___core__Comparator___sub_sort(self, var_array, var_i, var_to); /* Direct call sorter$Comparator$sub_sort on <self:Comparator>*/
}
RET_LABEL:;
}
/* method sorter$Comparator$bubble_sort for (self: Comparator, Array[nullable Object], Int, Int) */
void core___core__Comparator___bubble_sort(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const char* var_class_name6;
short int var7 /* : Bool */;
long var_min /* var min: Int */;
val* var8 /* : nullable Object */;
val* var_min_v /* var min_v: nullable Object */;
long var_j /* var j: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[COMPARED] */
/* <p0:Array[nullable Object]> isa Array[COMPARED] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[COMPARED]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__sorter, 128);
fatal_exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
var_i = var_from;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_to) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var_min = var_i;
{
var8 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
var_min_v = var8;
var_j = var_i;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_j,var_to) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var11 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_j <= var_to;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var16 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_j);
}
{
var17 = ((long(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__sorter__Comparator__compare]))(self, var_min_v, var16); /* compare on <self:Comparator>*/
}
{
{ /* Inline kernel$Int$> (var17,0l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var20 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var24 = var17 > 0l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var_min = var_j;
{
var25 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_j);
}
var_min_v = var25;
} else {
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var_j + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_j = var26;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$!= (var_min,var_i) on <var_min:Int> */
var35 = var_min == var_i;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var37 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_array, var_min, var37); /* Direct call array$Array$[]= on <var_array:Array[nullable Object]>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_array, var_i, var_min_v); /* Direct call array$Array$[]= on <var_array:Array[nullable Object]>*/
}
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
} else {
goto BREAK_label45;
}
}
BREAK_label45: (void)0;
RET_LABEL:;
}
/* method sorter$DefaultComparator$compare for (self: DefaultComparator, Comparable, Comparable): Int */
long core___core__DefaultComparator___Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: Comparable */;
val* var_b /* var b: Comparable */;
long var7 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Comparable> isa COMPARED */
/* <p0:Comparable> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__sorter, 335);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Comparable> isa COMPARED */
/* <p1:Comparable> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__sorter, 335);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((long(*)(val* self, val* p0))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__kernel__Comparable___60d_61d_62d]))(var_a, var_b); /* <=> on <var_a:Comparable>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter$Sys$default_comparator for (self: Sys): DefaultComparator */
val* core__sorter___Sys___default_comparator(val* self) {
val* var /* : DefaultComparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : DefaultComparator */;
val* var2 /* : DefaultComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__DefaultComparator(&type_core__DefaultComparator);
{
{ /* Inline kernel$Object$init (var2) on <var2:DefaultComparator> */
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
