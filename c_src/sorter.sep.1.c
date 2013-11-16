#include "sorter.sep.0.h"
/* method sorter#AbstractSorter#compare for (self: AbstractSorter[nullable Object], nullable Object, nullable Object): Int */
long sorter__AbstractSorter__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 23);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 23);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/sorter.nit", 23);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 30);
exit(1);
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
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 33);
exit(1);
}
var_array = p0;
var_from = p1;
var_to = p2;
{ /* Inline kernel#Int#>= (var_from,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var3 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var6 = var_from >= var_to;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (var1){
goto RET_LABEL;
} else {
var7 = 7;
{ /* Inline kernel#Int#+ (var_from,var7) */
var10 = var_from + var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
{ /* Inline kernel#Int#< (var8,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var13 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var16 = var8 < var_to;
var11 = var16;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (var11){
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
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : nullable Object */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
val* var36 /* : nullable Object */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_t /* var t: nullable Object */;
val* var57 /* : nullable Object */;
long var59 /* : Int */;
long var60 /* : Int */;
long var62 /* : Int */;
val* var63 /* : nullable Object */;
long var64 /* : Int */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
long var71 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 45);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var7 = var_j > var_i;
var2 = var7;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
for(;;) {
{ /* Inline kernel#Int#<= (var_i,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var11 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var14 = var_i <= var_to;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_ = var9;
if (var9){
var15 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
var16 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__AbstractSorter__compare]))(self, var15, var_pivot) /* compare on <self:AbstractSorter[nullable Object]>*/;
var17 = 0;
{ /* Inline kernel#Int#<= (var16,var17) */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var23 = var16 <= var17;
var18 = var23;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var8 = var18;
} else {
var8 = var_;
}
if (!var8) break;
var24 = 1;
{ /* Inline kernel#Int#+ (var_i,var24) */
var27 = var_i + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_i = var25;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
for(;;) {
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var31 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var34 = var_j > var_i;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_35 = var29;
if (var29){
var36 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
var37 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__AbstractSorter__compare]))(self, var36, var_pivot) /* compare on <self:AbstractSorter[nullable Object]>*/;
var38 = 0;
{ /* Inline kernel#Int#>= (var37,var38) */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var44 = var37 >= var38;
var39 = var44;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var28 = var39;
} else {
var28 = var_35;
}
if (!var28) break;
var45 = 1;
{ /* Inline kernel#Int#- (var_j,var45) */
var48 = var_j - var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_j = var46;
CONTINUE_label49: (void)0;
}
BREAK_label49: (void)0;
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var52 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var52) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var55 = var_j > var_i;
var50 = var55;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
if (var50){
var56 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
var_t = var56;
var57 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_i, var57) /* []= on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_j, var_t) /* []= on <var_array:Array[nullable Object]>*/;
} else {
}
CONTINUE_label58: (void)0;
}
BREAK_label58: (void)0;
var59 = 1;
{ /* Inline kernel#Int#- (var_i,var59) */
var62 = var_i - var59;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var63 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var60) /* [] on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_from, var63) /* []= on <var_array:Array[nullable Object]>*/;
var64 = 1;
{ /* Inline kernel#Int#- (var_i,var64) */
var67 = var_i - var64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var65, var_pivot) /* []= on <var_array:Array[nullable Object]>*/;
var68 = 2;
{ /* Inline kernel#Int#- (var_i,var68) */
var71 = var_i - var68;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
((void (*)(val*, val*, long, long))(self->class->vft[COLOR_sorter__AbstractSorter__sub_sort]))(self, var_array, var_from, var69) /* sub_sort on <self:AbstractSorter[nullable Object]>*/;
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
val* var_array /* var array: Array[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
long var_min /* var min: Int */;
val* var7 /* : nullable Object */;
val* var_min_v /* var min_v: nullable Object */;
long var_j /* var j: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 66);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var6 = var_i < var_to;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) break;
var_min = var_i;
var7 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
var_min_v = var7;
var_j = var_i;
for(;;) {
{ /* Inline kernel#Int#<= (var_j,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var10 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var13 = var_j <= var_to;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (!var8) break;
var14 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
var15 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_sorter__AbstractSorter__compare]))(self, var_min_v, var14) /* compare on <self:AbstractSorter[nullable Object]>*/;
var16 = 0;
{ /* Inline kernel#Int#> (var15,var16) */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var22 = var15 > var16;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var_min = var_j;
var23 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_j) /* [] on <var_array:Array[nullable Object]>*/;
var_min_v = var23;
} else {
}
var24 = 1;
{ /* Inline kernel#Int#+ (var_j,var24) */
var27 = var_j + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_j = var25;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#!= (var_min,var_i) */
var30 = var_min == var_i;
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (var28){
var32 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_min, var32) /* []= on <var_array:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(var_array->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_array, var_i, var_min_v) /* []= on <var_array:Array[nullable Object]>*/;
} else {
}
var33 = 1;
{ /* Inline kernel#Int#+ (var_i,var33) */
var36 = var_i + var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var_i = var34;
CONTINUE_label37: (void)0;
}
BREAK_label37: (void)0;
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_a /* var a: Comparable */;
val* var_b /* var b: Comparable */;
long var6 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 94);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/sorter.nit", 94);
exit(1);
}
var_a = p0;
var_b = p1;
var6 = ((long (*)(val*, val*))(var_a->class->vft[COLOR_kernel__Comparable___60d_61d_62d]))(var_a, var_b) /* <=> on <var_a:Comparable>*/;
var = var6;
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
