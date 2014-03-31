#include "sorter.sep.0.h"
/* method sorter#AbstractSorter#compare for (self: AbstractSorter[nullable Object], nullable Object, nullable Object): Int */
long sorter__AbstractSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
const char* var_class_name8;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa AbstractSorter#0 */
/* <p0:nullable Object> isa AbstractSorter#0 */
type_struct = self->type->resolution_table->types[COLOR_sorter__AbstractSorter_FT0];
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
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 23);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa AbstractSorter#0 */
/* <p1:nullable Object> isa AbstractSorter#0 */
type_struct5 = self->type->resolution_table->types[COLOR_sorter__AbstractSorter_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (!var2) {
var_class_name7 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 23);
show_backtrace(1);
}
var_class_name8 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compare", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 23);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method sorter#AbstractSorter#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_sorter__AbstractSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = sorter__AbstractSorter__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method sorter#AbstractSorter#sort for (self: AbstractSorter[nullable Object], Array[nullable Object]) */
void sorter__AbstractSorter__sort(val* self, val* p0) {
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
long var6 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
/* <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__AbstractSorter_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[AbstractSorter#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 30);
show_backtrace(1);
}
var_array = p0;
var1 = 0;
var2 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[nullable Object]>*/;
var3 = 1;
{ /* Inline kernel#Int#- (var2,var3) */
var6 = var2 - var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
((void (*)(val*, val*, long, long))(self->class->vft[COLOR_sorter__AbstractSorter__sub_sort]))(self, var_array, var1, var4) /* sub_sort on <self:AbstractSorter[nullable Object]>*/;
RET_LABEL:;
}
/* method sorter#AbstractSorter#sort for (self: Object, Array[nullable Object]) */
void VIRTUAL_sorter__AbstractSorter__sort(val* self, val* p0) {
sorter__AbstractSorter__sort(self, p0);
RET_LABEL:;
}
/* method sorter#AbstractSorter#sub_sort for (self: AbstractSorter[nullable Object], Array[nullable Object], Int, Int) */
void sorter__AbstractSorter__sub_sort(val* self, val* p0, long p1, long p2) {
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
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
/* <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__AbstractSorter_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[AbstractSorter#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 33);
show_backtrace(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{ /* Inline kernel#Int#>= (var_from,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var3) {
var_class_name6 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var7 = var_from >= var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (var1){
goto RET_LABEL;
} else {
var8 = 7;
{ /* Inline kernel#Int#+ (var_from,var8) */
var11 = var_from + var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
{ /* Inline kernel#Int#< (var9,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var14 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var14) {
var_class_name17 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var18 = var9 < var_to;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
((void (*)(val*, val*, long, long))(self->class->vft[COLOR_sorter__AbstractSorter__quick_sort]))(self, var_array, var_from, var_to) /* quick_sort on <self:AbstractSorter[nullable Object]>*/;
} else {
((void (*)(val*, val*, long, long))(self->class->vft[COLOR_sorter__AbstractSorter__bubble_sort]))(self, var_array, var_from, var_to) /* bubble_sort on <self:AbstractSorter[nullable Object]>*/;
}
}
RET_LABEL:;
}
/* method sorter#AbstractSorter#sub_sort for (self: Object, Array[nullable Object], Int, Int) */
void VIRTUAL_sorter__AbstractSorter__sub_sort(val* self, val* p0, long p1, long p2) {
sorter__AbstractSorter__sub_sort(self, p0, p1, p2);
RET_LABEL:;
}
/* method sorter#AbstractSorter#quick_sort for (self: AbstractSorter[nullable Object], Array[nullable Object], Int, Int) */
void sorter__AbstractSorter__quick_sort(val* self, val* p0, long p1, long p2) {
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
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : nullable Object */;
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
long var53 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_t /* var t: nullable Object */;
val* var63 /* : nullable Object */;
long var65 /* : Int */;
long var66 /* : Int */;
long var68 /* : Int */;
val* var69 /* : nullable Object */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var77 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
/* <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__AbstractSorter_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[AbstractSorter#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 45);
show_backtrace(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
var1 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_from) /* [] on <var_array:Array[nullable Object]>*/;
var_pivot = var1;
var_i = var_from;
var_j = var_to;
for(;;) {
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var4) {
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var8 = var_j > var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
for(;;) {
{ /* Inline kernel#Int#<= (var_i,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var12 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var12) {
var_class_name15 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var16 = var_i <= var_to;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var_ = var10;
if (var10){
var17 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
var18 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__AbstractSorter__compare]))(self, var17, var_pivot) /* compare on <self:AbstractSorter[nullable Object]>*/;
var19 = 0;
{ /* Inline kernel#Int#<= (var18,var19) */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (!var22) {
var_class_name25 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var26 = var18 <= var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var9 = var20;
} else {
var9 = var_;
}
if (!var9) break;
var27 = 1;
{ /* Inline kernel#Int#+ (var_i,var27) */
var30 = var_i + var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_i = var28;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
for(;;) {
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var34 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var34) {
var_class_name37 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var38 = var_j > var_i;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var_39 = var32;
if (var32){
var40 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
var41 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__AbstractSorter__compare]))(self, var40, var_pivot) /* compare on <self:AbstractSorter[nullable Object]>*/;
var42 = 0;
{ /* Inline kernel#Int#>= (var41,var42) */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (!var45) {
var_class_name48 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var49 = var41 >= var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var31 = var43;
} else {
var31 = var_39;
}
if (!var31) break;
var50 = 1;
{ /* Inline kernel#Int#- (var_j,var50) */
var53 = var_j - var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var_j = var51;
CONTINUE_label54: (void)0;
}
BREAK_label54: (void)0;
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var57 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var57) {
var_class_name60 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var61 = var_j > var_i;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
if (var55){
var62 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
var_t = var62;
var63 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_i, var63) /* []= on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_j, var_t) /* []= on <var_array:Array[nullable Object]>*/;
} else {
}
CONTINUE_label64: (void)0;
}
BREAK_label64: (void)0;
var65 = 1;
{ /* Inline kernel#Int#- (var_i,var65) */
var68 = var_i - var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var69 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var66) /* [] on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_from, var69) /* []= on <var_array:Array[nullable Object]>*/;
var70 = 1;
{ /* Inline kernel#Int#- (var_i,var70) */
var73 = var_i - var70;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var71, var_pivot) /* []= on <var_array:Array[nullable Object]>*/;
var74 = 2;
{ /* Inline kernel#Int#- (var_i,var74) */
var77 = var_i - var74;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
((void (*)(val*, val*, long, long))(self->class->vft[COLOR_sorter__AbstractSorter__sub_sort]))(self, var_array, var_from, var75) /* sub_sort on <self:AbstractSorter[nullable Object]>*/;
((void (*)(val*, val*, long, long))(self->class->vft[COLOR_sorter__AbstractSorter__sub_sort]))(self, var_array, var_i, var_to) /* sub_sort on <self:AbstractSorter[nullable Object]>*/;
RET_LABEL:;
}
/* method sorter#AbstractSorter#quick_sort for (self: Object, Array[nullable Object], Int, Int) */
void VIRTUAL_sorter__AbstractSorter__quick_sort(val* self, val* p0, long p1, long p2) {
sorter__AbstractSorter__quick_sort(self, p0, p1, p2);
RET_LABEL:;
}
/* method sorter#AbstractSorter#bubble_sort for (self: AbstractSorter[nullable Object], Array[nullable Object], Int, Int) */
void sorter__AbstractSorter__bubble_sort(val* self, val* p0, long p1, long p2) {
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
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
/* Covariant cast for argument 0 (array) <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
/* <p0:Array[nullable Object]> isa Array[AbstractSorter#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraysorter__AbstractSorter_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[AbstractSorter#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 66);
show_backtrace(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
var_i = var_from;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var3) {
var_class_name6 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var7 = var_i < var_to;
var1 = var7;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) break;
var_min = var_i;
var8 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
var_min_v = var8;
var_j = var_i;
for(;;) {
{ /* Inline kernel#Int#<= (var_j,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var11 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var11) {
var_class_name14 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var15 = var_j <= var_to;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) break;
var16 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
var17 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__AbstractSorter__compare]))(self, var_min_v, var16) /* compare on <self:AbstractSorter[nullable Object]>*/;
var18 = 0;
{ /* Inline kernel#Int#> (var17,var18) */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (!var21) {
var_class_name24 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var25 = var17 > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
var_min = var_j;
var26 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
var_min_v = var26;
} else {
}
var27 = 1;
{ /* Inline kernel#Int#+ (var_j,var27) */
var30 = var_j + var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_j = var28;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#!= (var_min,var_i) */
var33 = var_min == var_i;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
var35 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_min, var35) /* []= on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_i, var_min_v) /* []= on <var_array:Array[nullable Object]>*/;
} else {
}
var36 = 1;
{ /* Inline kernel#Int#+ (var_i,var36) */
var39 = var_i + var36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var_i = var37;
CONTINUE_label40: (void)0;
}
BREAK_label40: (void)0;
RET_LABEL:;
}
/* method sorter#AbstractSorter#bubble_sort for (self: Object, Array[nullable Object], Int, Int) */
void VIRTUAL_sorter__AbstractSorter__bubble_sort(val* self, val* p0, long p1, long p2) {
sorter__AbstractSorter__bubble_sort(self, p0, p1, p2);
RET_LABEL:;
}
/* method sorter#ComparableSorter#compare for (self: ComparableSorter[Comparable], Comparable, Comparable): Int */
long sorter__ComparableSorter__compare(val* self, val* p0, val* p1) {
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
/* Covariant cast for argument 0 (a) <p0:Comparable> isa AbstractSorter#0 */
/* <p0:Comparable> isa AbstractSorter#0 */
type_struct = self->type->resolution_table->types[COLOR_sorter__AbstractSorter_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 94);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:Comparable> isa AbstractSorter#0 */
/* <p1:Comparable> isa AbstractSorter#0 */
type_struct5 = self->type->resolution_table->types[COLOR_sorter__AbstractSorter_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/sorter.nit", 94);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
var7 = ((long (*)(val*, val*))(var_a->class->vft[COLOR_kernel__Comparable___60d_61d_62d]))(var_a, var_b) /* <=> on <var_a:Comparable>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sorter#ComparableSorter#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_sorter__ComparableSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = sorter__ComparableSorter__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method sorter#ComparableSorter#init for (self: ComparableSorter[Comparable]) */
void sorter__ComparableSorter__init(val* self) {
RET_LABEL:;
}
/* method sorter#ComparableSorter#init for (self: Object) */
void VIRTUAL_sorter__ComparableSorter__init(val* self) {
sorter__ComparableSorter__init(self);
RET_LABEL:;
}
