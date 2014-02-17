#include "range.sep.0.h"
/* method range#Range#first for (self: Range[Discrete]): Discrete */
val* range__Range__first(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _first");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 22);
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
var1 = range__Range__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#last for (self: Range[Discrete]): Discrete */
val* range__Range__last(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _last");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 24);
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
var1 = range__Range__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#after for (self: Range[Discrete]): Discrete */
val* range__Range__after(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _after");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 27);
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
var1 = range__Range__after(self);
var = var1;
RET_LABEL:;
return var;
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
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : Discrete */;
short int var6 /* : Bool */;
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
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 30);
show_backtrace(1);
}
var_item = p0;
var3 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _first");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 30);
show_backtrace(1);
}
var4 = ((short int (*)(val*, val*))(var_item->class->vft[COLOR_kernel__Comparable___62d_61d]))(var_item, var3) /* >= on <var_item:Discrete>*/;
var_ = var4;
if (var4){
var5 = self->attrs[COLOR_range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _last");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 30);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var_item->class->vft[COLOR_kernel__Comparable___60d_61d]))(var_item, var5) /* <= on <var_item:Discrete>*/;
var2 = var6;
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
/* method range#Range#has_only for (self: Range[Discrete], Discrete): Bool */
short int range__Range__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Discrete */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Discrete */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
short int var9 /* : Bool */;
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
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 32);
show_backtrace(1);
}
var_item = p0;
var4 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _first");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 32);
show_backtrace(1);
}
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var_item) /* == on <var4:Discrete>*/;
var_ = var5;
if (var5){
var6 = self->attrs[COLOR_range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _last");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 32);
show_backtrace(1);
}
var7 = ((short int (*)(val*, val*))(var_item->class->vft[COLOR_kernel__Object___61d_61d]))(var_item, var6) /* == on <var_item:Discrete>*/;
var3 = var7;
} else {
var3 = var_;
}
var_8 = var3;
if (var3){
var2 = var_8;
} else {
var9 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:Range[Discrete]>*/;
var2 = var9;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_range__Range__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = range__Range__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#count for (self: Range[Discrete], Discrete): Int */
long range__Range__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Discrete */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
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
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 34);
show_backtrace(1);
}
var_item = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_item) /* has on <self:Range[Discrete]>*/;
if (var2){
var3 = 1;
var = var3;
goto RET_LABEL;
} else {
var4 = 0;
var = var4;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method range#Range#count for (self: Object, nullable Object): Int */
long VIRTUAL_range__Range__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = range__Range__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#iterator for (self: Range[Discrete]): Iterator[Discrete] */
val* range__Range__iterator(val* self) {
val* var /* : Iterator[Discrete] */;
val* var1 /* : IteratorRange[Discrete] */;
var1 = NEW_range__IteratorRange(self->type->resolution_table->types[COLOR_range__IteratorRangerange__Range_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_range__IteratorRange__init]))(var1, self) /* init on <var1:IteratorRange[Discrete]>*/;
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
val* var2 /* : Discrete */;
long var3 /* : Int */;
long var_nb /* var nb: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
var1 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _first");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 47);
show_backtrace(1);
}
var2 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _after");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 47);
show_backtrace(1);
}
var3 = ((long (*)(val*, val*))(var1->class->vft[COLOR_kernel__Discrete__distance]))(var1, var2) /* distance on <var1:Discrete>*/;
var_nb = var3;
var4 = 0;
{ /* Inline kernel#Int#> (var_nb,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (!var7) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var8 = var_nb > var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var = var_nb;
goto RET_LABEL;
} else {
var9 = 0;
var = var9;
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
val* var2 /* : Discrete */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _first");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 55);
show_backtrace(1);
}
var2 = self->attrs[COLOR_range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _after");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 55);
show_backtrace(1);
}
var3 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Comparable___62d_61d]))(var1, var2) /* >= on <var1:Discrete>*/;
var = var3;
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
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 57);
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
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 57);
show_backtrace(1);
}
var_from = p0;
var_to = p1;
self->attrs[COLOR_range__Range___first].val = var_from; /* _first on <self:Range[Discrete]> */
self->attrs[COLOR_range__Range___last].val = var_to; /* _last on <self:Range[Discrete]> */
var6 = ((val* (*)(val*))(var_to->class->vft[COLOR_kernel__Discrete__succ]))(var_to) /* succ on <var_to:Discrete>*/;
/* <var6:Discrete> isa Range#0 */
type_struct10 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype8] == idtype9;
}
if (!var7) {
var_class_name11 = var6 == NULL ? "null" : var6->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 63);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___after].val = var6; /* _after on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#init for (self: Object, Discrete, Discrete) */
void VIRTUAL_range__Range__init(val* self, val* p0, val* p1) {
range__Range__init(self, p0, p1);
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
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 66);
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
if (!var1) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 66);
show_backtrace(1);
}
var_from = p0;
var_to = p1;
self->attrs[COLOR_range__Range___first].val = var_from; /* _first on <self:Range[Discrete]> */
var6 = ((val* (*)(val*))(var_to->class->vft[COLOR_kernel__Discrete__prec]))(var_to) /* prec on <var_to:Discrete>*/;
/* <var6:Discrete> isa Range#0 */
type_struct10 = self->type->resolution_table->types[COLOR_range__Range_FT0];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype8] == idtype9;
}
if (!var7) {
var_class_name11 = var6 == NULL ? "null" : var6->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range#0", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 71);
show_backtrace(1);
}
self->attrs[COLOR_range__Range___last].val = var6; /* _last on <self:Range[Discrete]> */
self->attrs[COLOR_range__Range___after].val = var_to; /* _after on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#without_last for (self: Object, Discrete, Discrete) */
void VIRTUAL_range__Range__without_last(val* self, val* p0, val* p1) {
range__Range__without_last(self, p0, p1);
RET_LABEL:;
}
/* method range#IteratorRange#item for (self: IteratorRange[Discrete]): Discrete */
val* range__IteratorRange__item(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _item");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 80);
show_backtrace(1);
}
var = var1;
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
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _item");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 82);
show_backtrace(1);
}
var2 = self->attrs[COLOR_range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _range");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 82);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_range__Range__after]))(var2) /* after on <var2:Range[Discrete]>*/;
var4 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Comparable___60d]))(var1, var3) /* < on <var1:Discrete>*/;
var = var4;
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
val* var1 /* : Discrete */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var = self->attrs[COLOR_range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _item");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 84);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_kernel__Discrete__succ]))(var) /* succ on <var:Discrete>*/;
/* <var1:Discrete> isa IteratorRange#0 */
type_struct = self->type->resolution_table->types[COLOR_range__IteratorRange_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "IteratorRange#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 84);
show_backtrace(1);
}
self->attrs[COLOR_range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#next for (self: Object) */
void VIRTUAL_range__IteratorRange__next(val* self) {
range__IteratorRange__next(self);
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
val* var1 /* : nullable Object */;
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
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Range[IteratorRange#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/range.nit", 86);
show_backtrace(1);
}
var_r = p0;
self->attrs[COLOR_range__IteratorRange___range].val = var_r; /* _range on <self:IteratorRange[Discrete]> */
var1 = ((val* (*)(val*))(var_r->class->vft[COLOR_abstract_collection__Collection__first]))(var_r) /* first on <var_r:Range[Discrete]>*/;
self->attrs[COLOR_range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#init for (self: Object, Range[Discrete]) */
void VIRTUAL_range__IteratorRange__init(val* self, val* p0) {
range__IteratorRange__init(self, p0);
RET_LABEL:;
}
/* method range#Int#times for (self: Int): Range[Int] */
val* range__Int__times(long self) {
val* var /* : Range[Int] */;
val* var1 /* : Range[Int] */;
long var2 /* : Int */;
val* var3 /* : Discrete */;
val* var4 /* : Discrete */;
var1 = NEW_range__Range(&type_range__Rangekernel__Int);
var2 = 0;
var3 = BOX_kernel__Int(var2); /* autobox from Int to Discrete */
var4 = BOX_kernel__Int(self); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_range__Range__without_last]))(var1, var3, var4) /* without_last on <var1:Range[Int]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Int#times for (self: Object): Range[Int] */
val* VIRTUAL_range__Int__times(val* self) {
val* var /* : Range[Int] */;
val* var1 /* : Range[Int] */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = range__Int__times(var2);
var = var1;
RET_LABEL:;
return var;
}
