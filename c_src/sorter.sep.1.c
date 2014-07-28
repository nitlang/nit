#include "sorter.sep.0.h"
/* method sorter#Comparator#sort for (self: Comparator[nullable Object], Array[nullable Object]) */
void sorter__Comparator__sort(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_array /* var array: Array[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[Comparator#0] */
/* <p0:Array[nullable Object]> isa Array[Comparator#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__Comparator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Comparator#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/sorter.nit", 30);
show_backtrace(1);
}
var_array = p0;
var1 = 0;
{
var2 = array__AbstractArrayRead__length(var_array);
}
var3 = 1;
{
{ /* Inline kernel#Int#- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var10 = var2 - var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
sorter__Comparator__sub_sort(self, var_array, var1, var4); /* Direct call sorter#Comparator#sub_sort on <self:Comparator[nullable Object]>*/
}
RET_LABEL:;
}
/* method sorter#Comparator#sort for (self: Object, Array[nullable Object]) */
void VIRTUAL_sorter__Comparator__sort(val* self, val* p0) {
sorter__Comparator__sort(self, p0); /* Direct call sorter#Comparator#sort on <self:Object(Comparator[nullable Object])>*/
RET_LABEL:;
}
/* method sorter#Comparator#sub_sort for (self: Comparator[nullable Object], Array[nullable Object], Int, Int) */
void sorter__Comparator__sub_sort(val* self, val* p0, long p1, long p2) {
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
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[Comparator#0] */
/* <p0:Array[nullable Object]> isa Array[Comparator#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__Comparator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Comparator#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/sorter.nit", 38);
show_backtrace(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
{ /* Inline kernel#Int#>= (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
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
var8 = 7;
{
{ /* Inline kernel#Int#+ (var_from,var8) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var15 = var_from + var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var9,var_to) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var18 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var22 = var9 < var_to;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
sorter__Comparator__quick_sort(self, var_array, var_from, var_to); /* Direct call sorter#Comparator#quick_sort on <self:Comparator[nullable Object]>*/
}
} else {
{
sorter__Comparator__bubble_sort(self, var_array, var_from, var_to); /* Direct call sorter#Comparator#bubble_sort on <self:Comparator[nullable Object]>*/
}
}
}
RET_LABEL:;
}
/* method sorter#Comparator#sub_sort for (self: Object, Array[nullable Object], Int, Int) */
void VIRTUAL_sorter__Comparator__sub_sort(val* self, val* p0, long p1, long p2) {
sorter__Comparator__sub_sort(self, p0, p1, p2); /* Direct call sorter#Comparator#sub_sort on <self:Object(Comparator[nullable Object])>*/
RET_LABEL:;
}
/* method sorter#Comparator#quick_sort for (self: Comparator[nullable Object], Array[nullable Object], Int, Int) */
void sorter__Comparator__quick_sort(val* self, val* p0, long p1, long p2) {
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
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_43 /* var : Bool */;
val* var44 /* : nullable Object */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_t /* var t: nullable Object */;
val* var71 /* : nullable Object */;
long var73 /* : Int */;
long var74 /* : Int */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
long var80 /* : Int */;
val* var81 /* : nullable Object */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[Comparator#0] */
/* <p0:Array[nullable Object]> isa Array[Comparator#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__Comparator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Comparator#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/sorter.nit", 50);
show_backtrace(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{
var1 = array__Array___91d_93d(var_array, var_from);
}
var_pivot = var1;
var_i = var_from;
var_j = var_to;
for(;;) {
{
{ /* Inline kernel#Int#> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var8 = var_j > var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (!var2) break;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_to) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var12 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
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
var17 = array__Array___91d_93d(var_array, var_i);
}
{
var18 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__Comparator__compare]))(self, var17, var_pivot) /* compare on <self:Comparator[nullable Object]>*/;
}
var19 = 0;
{
{ /* Inline kernel#Int#<= (var18,var19) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var26 = var18 <= var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var9 = var20;
} else {
var9 = var_;
}
if (!var9) break;
var27 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var34 = var_i + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_i = var28;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
for(;;) {
{
{ /* Inline kernel#Int#> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var38 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var42 = var_j > var_i;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_43 = var36;
if (var36){
{
var44 = array__Array___91d_93d(var_array, var_j);
}
{
var45 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__Comparator__compare]))(self, var44, var_pivot) /* compare on <self:Comparator[nullable Object]>*/;
}
var46 = 0;
{
{ /* Inline kernel#Int#>= (var45,var46) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var53 = var45 >= var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var35 = var47;
} else {
var35 = var_43;
}
if (!var35) break;
var54 = 1;
{
{ /* Inline kernel#Int#- (var_j,var54) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var61 = var_j - var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_j = var55;
CONTINUE_label62: (void)0;
}
BREAK_label62: (void)0;
{
{ /* Inline kernel#Int#> (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var65 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var69 = var_j > var_i;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
{
var70 = array__Array___91d_93d(var_array, var_i);
}
var_t = var70;
{
var71 = array__Array___91d_93d(var_array, var_j);
}
{
array__Array___91d_93d_61d(var_array, var_i, var71); /* Direct call array#Array#[]= on <var_array:Array[nullable Object]>*/
}
{
array__Array___91d_93d_61d(var_array, var_j, var_t); /* Direct call array#Array#[]= on <var_array:Array[nullable Object]>*/
}
} else {
}
CONTINUE_label72: (void)0;
}
BREAK_label72: (void)0;
var73 = 1;
{
{ /* Inline kernel#Int#- (var_i,var73) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var73:Int> isa OTHER */
/* <var73:Int> isa OTHER */
var76 = 1; /* easy <var73:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var80 = var_i - var73;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
var81 = array__Array___91d_93d(var_array, var74);
}
{
array__Array___91d_93d_61d(var_array, var_from, var81); /* Direct call array#Array#[]= on <var_array:Array[nullable Object]>*/
}
var82 = 1;
{
{ /* Inline kernel#Int#- (var_i,var82) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var82:Int> isa OTHER */
/* <var82:Int> isa OTHER */
var85 = 1; /* easy <var82:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var89 = var_i - var82;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
array__Array___91d_93d_61d(var_array, var83, var_pivot); /* Direct call array#Array#[]= on <var_array:Array[nullable Object]>*/
}
var90 = 2;
{
{ /* Inline kernel#Int#- (var_i,var90) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var90:Int> isa OTHER */
/* <var90:Int> isa OTHER */
var93 = 1; /* easy <var90:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var97 = var_i - var90;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
sorter__Comparator__sub_sort(self, var_array, var_from, var91); /* Direct call sorter#Comparator#sub_sort on <self:Comparator[nullable Object]>*/
}
{
sorter__Comparator__sub_sort(self, var_array, var_i, var_to); /* Direct call sorter#Comparator#sub_sort on <self:Comparator[nullable Object]>*/
}
RET_LABEL:;
}
/* method sorter#Comparator#quick_sort for (self: Object, Array[nullable Object], Int, Int) */
void VIRTUAL_sorter__Comparator__quick_sort(val* self, val* p0, long p1, long p2) {
sorter__Comparator__quick_sort(self, p0, p1, p2); /* Direct call sorter#Comparator#quick_sort on <self:Object(Comparator[nullable Object])>*/
RET_LABEL:;
}
/* method sorter#Comparator#bubble_sort for (self: Comparator[nullable Object], Array[nullable Object], Int, Int) */
void sorter__Comparator__bubble_sort(val* self, val* p0, long p1, long p2) {
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
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[Comparator#0] */
/* <p0:Array[nullable Object]> isa Array[Comparator#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__Comparator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Comparator#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/sorter.nit", 76);
show_backtrace(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
var_i = var_from;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_to) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name6 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var7 = var_i < var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (!var1) break;
var_min = var_i;
{
var8 = array__Array___91d_93d(var_array, var_i);
}
var_min_v = var8;
var_j = var_i;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_to) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var11 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var15 = var_j <= var_to;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (!var9) break;
{
var16 = array__Array___91d_93d(var_array, var_j);
}
{
var17 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__Comparator__compare]))(self, var_min_v, var16) /* compare on <self:Comparator[nullable Object]>*/;
}
var18 = 0;
{
{ /* Inline kernel#Int#> (var17,var18) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var25 = var17 > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var_min = var_j;
{
var26 = array__Array___91d_93d(var_array, var_j);
}
var_min_v = var26;
} else {
}
var27 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var27) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var34 = var_j + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_j = var28;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#!= (var_min,var_i) on <var_min:Int> */
var38 = var_min == var_i;
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
var40 = array__Array___91d_93d(var_array, var_i);
}
{
array__Array___91d_93d_61d(var_array, var_min, var40); /* Direct call array#Array#[]= on <var_array:Array[nullable Object]>*/
}
{
array__Array___91d_93d_61d(var_array, var_i, var_min_v); /* Direct call array#Array#[]= on <var_array:Array[nullable Object]>*/
}
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var48 = var_i + var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_i = var42;
CONTINUE_label49: (void)0;
}
BREAK_label49: (void)0;
RET_LABEL:;
}
/* method sorter#Comparator#bubble_sort for (self: Object, Array[nullable Object], Int, Int) */
void VIRTUAL_sorter__Comparator__bubble_sort(val* self, val* p0, long p1, long p2) {
sorter__Comparator__bubble_sort(self, p0, p1, p2); /* Direct call sorter#Comparator#bubble_sort on <self:Object(Comparator[nullable Object])>*/
RET_LABEL:;
}
/* method sorter#DefaultComparator#compare for (self: DefaultComparator[Comparable], Comparable, Comparable): Int */
long sorter__DefaultComparator__compare(val* self, val* p0, val* p1) {
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
/* Covariant cast for argument 0 (a) <p0:Comparable> isa Comparator#0 */
/* <p0:Comparable> isa Comparator#0 */
type_struct = self->type->resolution_table->types[COLOR_sorter__Comparator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Comparator#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/sorter.nit", 217);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:Comparable> isa Comparator#0 */
/* <p1:Comparable> isa Comparator#0 */
type_struct5 = self->type->resolution_table->types[COLOR_sorter__Comparator_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Comparator#0", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/sorter.nit", 217);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((long (*)(val*, val*))(var_a->class->vft[COLOR_kernel__Comparable___60d_61d_62d]))(var_a, var_b) /* <=> on <var_a:Comparable>*/;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#DefaultComparator#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_sorter__DefaultComparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = sorter__DefaultComparator__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method sorter#DefaultComparator#init for (self: DefaultComparator[Comparable]) */
void sorter__DefaultComparator__init(val* self) {
RET_LABEL:;
}
/* method sorter#DefaultComparator#init for (self: Object) */
void VIRTUAL_sorter__DefaultComparator__init(val* self) {
{ /* Inline sorter#DefaultComparator#init (self) on <self:Object(DefaultComparator[Comparable])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
