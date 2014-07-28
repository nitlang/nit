#include "range.sep.0.h"
/* method range#Range#first for (self: Range[Discrete]): Discrete */
val* range__Range__first(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#first for (self: Object): nullable Object */
val* VIRTUAL_range__Range__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
{ /* Inline range#Range#first (self) on <self:Object(Range[Discrete])> */
var3 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Object(Range[Discrete])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#first= for (self: Range[Discrete], Discrete) */
void range__Range__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___first].val = p0; /* _first on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#first= for (self: Object, Discrete) */
void VIRTUAL_range__Range__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline range#Range#first= (self,p0) on <self:Object(Range[Discrete])> */
/* Covariant cast for argument 0 (first) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___first].val = p0; /* _first on <self:Object(Range[Discrete])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method range#Range#last for (self: Range[Discrete]): Discrete */
val* range__Range__last(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#last for (self: Object): Discrete */
val* VIRTUAL_range__Range__last(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
{ /* Inline range#Range#last (self) on <self:Object(Range[Discrete])> */
var3 = self->attrs[COLOR_range__Range___last].val; /* _last on <self:Object(Range[Discrete])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#last= for (self: Range[Discrete], Discrete) */
void range__Range__last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (last) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___last].val = p0; /* _last on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#last= for (self: Object, Discrete) */
void VIRTUAL_range__Range__last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline range#Range#last= (self,p0) on <self:Object(Range[Discrete])> */
/* Covariant cast for argument 0 (last) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___last].val = p0; /* _last on <self:Object(Range[Discrete])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method range#Range#after for (self: Range[Discrete]): Discrete */
val* range__Range__after(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#after for (self: Object): Discrete */
val* VIRTUAL_range__Range__after(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
{ /* Inline range#Range#after (self) on <self:Object(Range[Discrete])> */
var3 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Object(Range[Discrete])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#after= for (self: Range[Discrete], Discrete) */
void range__Range__after_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (after) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___after].val = p0; /* _after on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#after= for (self: Object, Discrete) */
void VIRTUAL_range__Range__after_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline range#Range#after= (self,p0) on <self:Object(Range[Discrete])> */
/* Covariant cast for argument 0 (after) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___after].val = p0; /* _after on <self:Object(Range[Discrete])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method range#Range#has for (self: Range[Discrete], Discrete): Bool */
short int range__Range__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Discrete */;
short int var2 /* : Bool */;
val* var3 /* : Discrete */;
val* var5 /* : Discrete */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
val* var7 /* : Discrete */;
val* var9 /* : Discrete */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:Discrete> isa Collection#0 */
/* <p0:Discrete> isa Collection#0 */
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 30);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var5 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((short int (*)(val*, val*))(var_item->class->vft[COLOR_kernel__Comparable___62d_61d]))(var_item, var3) /* >= on <var_item:Discrete>*/;
}
var_ = var6;
if (var6){
{
{ /* Inline range#Range#last (self) on <self:Range[Discrete]> */
var9 = self->attrs[COLOR_range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((short int (*)(val*, val*))(var_item->class->vft[COLOR_kernel__Comparable___60d_61d]))(var_item, var7) /* <= on <var_item:Discrete>*/;
}
var2 = var10;
} else {
var2 = var_;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_range__Range__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = range__Range__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#iterator for (self: Range[Discrete]): Iterator[Discrete] */
val* range__Range__iterator(val* self) {
val* var /* : Iterator[Discrete] */;
val* var1 /* : IteratorRange[Discrete] */;
var1 = NEW_range__IteratorRange(self->type->resolution_table->types[COLOR_range__IteratorRangerange__Range_FT0]);
{
range__IteratorRange__init(var1, self); /* Direct call range#IteratorRange#init on <var1:IteratorRange[Discrete]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_range__Range__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Discrete] */;
var1 = range__Range__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#length for (self: Range[Discrete]): Int */
long range__Range__length(val* self) {
long var /* : Int */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
val* var4 /* : Discrete */;
val* var6 /* : Discrete */;
long var7 /* : Int */;
long var_nb /* var nb: Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var3 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline range#Range#after (self) on <self:Range[Discrete]> */
var6 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((long (*)(val*, val*))(var1->class->vft[COLOR_kernel__Discrete__distance]))(var1, var4) /* distance on <var1:Discrete>*/;
}
var_nb = var7;
var8 = 0;
{
{ /* Inline kernel#Int#> (var_nb,var8) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var12 = var_nb > var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_nb;
goto RET_LABEL;
} else {
var13 = 0;
var = var13;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method range#Range#length for (self: Object): Int */
long VIRTUAL_range__Range__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = range__Range__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#is_empty for (self: Range[Discrete]): Bool */
short int range__Range__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
val* var4 /* : Discrete */;
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var3 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline range#Range#after (self) on <self:Range[Discrete]> */
var6 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Comparable___62d_61d]))(var1, var4) /* >= on <var1:Discrete>*/;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#is_empty for (self: Object): Bool */
short int VIRTUAL_range__Range__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = range__Range__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#init for (self: Range[Discrete], Discrete, Discrete) */
void range__Range__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_from /* var from: Discrete */;
val* var_to /* var to: Discrete */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const struct type* type_struct16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Discrete */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const struct type* type_struct23;
const char* var_class_name24;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const struct type* type_struct29;
const char* var_class_name30;
/* Covariant cast for argument 0 (from) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 57);
show_backtrace(1);
}
/* Covariant cast for argument 1 (to) <p1:Discrete> isa Range#0 */
/* <p1:Discrete> isa Range#0 */
type_struct4 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 57);
show_backtrace(1);
}
var_from = p0;
var_to = p1;
{
{ /* Inline range#Range#first= (self,var_from) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (first) <var_from:Discrete> isa Range#0 */
/* <var_from:Discrete> isa Range#0 */
type_struct10 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= var_from->type->table_size) {
var7 = 0;
} else {
var7 = var_from->type->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name11 = var_from == NULL ? "null" : var_from->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___first].val = var_from; /* _first on <self:Range[Discrete]> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline range#Range#last= (self,var_to) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (last) <var_to:Discrete> isa Range#0 */
/* <var_to:Discrete> isa Range#0 */
type_struct16 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype14 = type_struct16->color;
idtype15 = type_struct16->id;
if(cltype14 >= var_to->type->table_size) {
var13 = 0;
} else {
var13 = var_to->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name17 = var_to == NULL ? "null" : var_to->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___last].val = var_to; /* _last on <self:Range[Discrete]> */
RET_LABEL12:(void)0;
}
}
var18 = 1;
{
var19 = ((val* (*)(val*, long))(var_to->class->vft[COLOR_kernel__Discrete__successor]))(var_to, var18) /* successor on <var_to:Discrete>*/;
}
/* <var19:Discrete> isa Range#0 */
type_struct23 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype21 = type_struct23->color;
idtype22 = type_struct23->id;
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
if (unlikely(!var20)) {
var_class_name24 = var19 == NULL ? "null" : var19->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 63);
show_backtrace(1);
}
{
{ /* Inline range#Range#after= (self,var19) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (after) <var19:Discrete> isa Range#0 */
/* <var19:Discrete> isa Range#0 */
type_struct29 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype27 = type_struct29->color;
idtype28 = type_struct29->id;
if(cltype27 >= var19->type->table_size) {
var26 = 0;
} else {
var26 = var19->type->type_table[cltype27] == idtype28;
}
if (unlikely(!var26)) {
var_class_name30 = var19 == NULL ? "null" : var19->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___after].val = var19; /* _after on <self:Range[Discrete]> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method range#Range#init for (self: Object, Discrete, Discrete) */
void VIRTUAL_range__Range__init(val* self, val* p0, val* p1) {
range__Range__init(self, p0, p1); /* Direct call range#Range#init on <self:Object(Range[Discrete])>*/
RET_LABEL:;
}
/* method range#Range#without_last for (self: Range[Discrete], Discrete, Discrete) */
void range__Range__without_last(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_from /* var from: Discrete */;
val* var_to /* var to: Discrete */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
long var12 /* : Int */;
val* var13 /* : Discrete */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const struct type* type_struct17;
const char* var_class_name18;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const struct type* type_struct23;
const char* var_class_name24;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const struct type* type_struct29;
const char* var_class_name30;
/* Covariant cast for argument 0 (from) <p0:Discrete> isa Range#0 */
/* <p0:Discrete> isa Range#0 */
type_struct = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 66);
show_backtrace(1);
}
/* Covariant cast for argument 1 (to) <p1:Discrete> isa Range#0 */
/* <p1:Discrete> isa Range#0 */
type_struct4 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 66);
show_backtrace(1);
}
var_from = p0;
var_to = p1;
{
{ /* Inline range#Range#first= (self,var_from) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (first) <var_from:Discrete> isa Range#0 */
/* <var_from:Discrete> isa Range#0 */
type_struct10 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= var_from->type->table_size) {
var7 = 0;
} else {
var7 = var_from->type->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name11 = var_from == NULL ? "null" : var_from->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___first].val = var_from; /* _first on <self:Range[Discrete]> */
RET_LABEL6:(void)0;
}
}
var12 = 1;
{
var13 = ((val* (*)(val*, long))(var_to->class->vft[COLOR_kernel__Discrete__predecessor]))(var_to, var12) /* predecessor on <var_to:Discrete>*/;
}
/* <var13:Discrete> isa Range#0 */
type_struct17 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype15 = type_struct17->color;
idtype16 = type_struct17->id;
if(cltype15 >= var13->type->table_size) {
var14 = 0;
} else {
var14 = var13->type->type_table[cltype15] == idtype16;
}
if (unlikely(!var14)) {
var_class_name18 = var13 == NULL ? "null" : var13->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 71);
show_backtrace(1);
}
{
{ /* Inline range#Range#last= (self,var13) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (last) <var13:Discrete> isa Range#0 */
/* <var13:Discrete> isa Range#0 */
type_struct23 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype21 = type_struct23->color;
idtype22 = type_struct23->id;
if(cltype21 >= var13->type->table_size) {
var20 = 0;
} else {
var20 = var13->type->type_table[cltype21] == idtype22;
}
if (unlikely(!var20)) {
var_class_name24 = var13 == NULL ? "null" : var13->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 24);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___last].val = var13; /* _last on <self:Range[Discrete]> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline range#Range#after= (self,var_to) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (after) <var_to:Discrete> isa Range#0 */
/* <var_to:Discrete> isa Range#0 */
type_struct29 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype27 = type_struct29->color;
idtype28 = type_struct29->id;
if(cltype27 >= var_to->type->table_size) {
var26 = 0;
} else {
var26 = var_to->type->type_table[cltype27] == idtype28;
}
if (unlikely(!var26)) {
var_class_name30 = var_to == NULL ? "null" : var_to->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___after].val = var_to; /* _after on <self:Range[Discrete]> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method range#Range#without_last for (self: Object, Discrete, Discrete) */
void VIRTUAL_range__Range__without_last(val* self, val* p0, val* p1) {
range__Range__without_last(self, p0, p1); /* Direct call range#Range#without_last on <self:Object(Range[Discrete])>*/
RET_LABEL:;
}
/* method range#IteratorRange#item for (self: IteratorRange[Discrete]): Discrete */
val* range__IteratorRange__item(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 81);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#item for (self: Object): nullable Object */
val* VIRTUAL_range__IteratorRange__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Discrete */;
var1 = range__IteratorRange__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#is_ok for (self: IteratorRange[Discrete]): Bool */
short int range__IteratorRange__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var2 /* : Range[Discrete] */;
val* var3 /* : Discrete */;
val* var5 /* : Discrete */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 83);
show_backtrace(1);
}
var2 = self->attrs[COLOR_range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 83);
show_backtrace(1);
}
{
{ /* Inline range#Range#after (var2) on <var2:Range[Discrete]> */
var5 = var2->attrs[COLOR_range__Range___after].val; /* _after on <var2:Range[Discrete]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 27);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Comparable___60d]))(var1, var3) /* < on <var1:Discrete>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#is_ok for (self: Object): Bool */
short int VIRTUAL_range__IteratorRange__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = range__IteratorRange__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#next for (self: IteratorRange[Discrete]) */
void range__IteratorRange__next(val* self) {
val* var /* : Discrete */;
long var1 /* : Int */;
val* var2 /* : Discrete */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var = self->attrs[COLOR_range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 85);
show_backtrace(1);
}
var1 = 1;
{
var2 = ((val* (*)(val*, long))(var->class->vft[COLOR_kernel__Discrete__successor]))(var, var1) /* successor on <var:Discrete>*/;
}
/* <var2:Discrete> isa IteratorRange#0 */
type_struct = self->type->resolution_table->types[COLOR_range__IteratorRange_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "IteratorRange#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 85);
show_backtrace(1);
}
self->attrs[COLOR_range__IteratorRange___item].val = var2; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#next for (self: Object) */
void VIRTUAL_range__IteratorRange__next(val* self) {
range__IteratorRange__next(self); /* Direct call range#IteratorRange#next on <self:Object(IteratorRange[Discrete])>*/
RET_LABEL:;
}
/* method range#IteratorRange#init for (self: IteratorRange[Discrete], Range[Discrete]) */
void range__IteratorRange__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_r /* var r: Range[Discrete] */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
/* Covariant cast for argument 0 (r) <p0:Range[Discrete]> isa Range[IteratorRange#0] */
/* <p0:Range[Discrete]> isa Range[IteratorRange#0] */
type_struct = self->type->resolution_table->types[COLOR_range__Rangerange__IteratorRange_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range[IteratorRange#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 87);
show_backtrace(1);
}
var_r = p0;
self->attrs[COLOR_range__IteratorRange___range].val = var_r; /* _range on <self:IteratorRange[Discrete]> */
{
{ /* Inline range#Range#first (var_r) on <var_r:Range[Discrete]> */
var3 = var_r->attrs[COLOR_range__Range___first].val; /* _first on <var_r:Range[Discrete]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/range.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#init for (self: Object, Range[Discrete]) */
void VIRTUAL_range__IteratorRange__init(val* self, val* p0) {
range__IteratorRange__init(self, p0); /* Direct call range#IteratorRange#init on <self:Object(IteratorRange[Discrete])>*/
RET_LABEL:;
}
