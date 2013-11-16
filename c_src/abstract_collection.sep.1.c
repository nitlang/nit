#include "abstract_collection.sep.0.h"
/* method abstract_collection#Collection#iterator for (self: Collection[nullable Object]): Iterator[nullable Object] */
val* abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 54);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = abstract_collection__Collection__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#iterate for (self: Collection[nullable Object]) */
void abstract_collection__Collection__iterate(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
short int var1 /* : Bool */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
var_i = var;
for(;;) {
var1 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:Iterator[nullable Object]>*/;
if (!var1) break;
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/collection/abstract_collection.nit:63,4--15\n");
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#Collection#iterate for (self: Object) */
void VIRTUAL_abstract_collection__Collection__iterate(val* self) {
abstract_collection__Collection__iterate(self);
RET_LABEL:;
}
/* method abstract_collection#Collection#is_empty for (self: Collection[nullable Object]): Bool */
short int abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#is_empty for (self: Object): Bool */
short int VIRTUAL_abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Collection__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#length for (self: Collection[nullable Object]): Int */
long abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_nb /* var nb: Int */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
var1 = 0;
var_nb = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_i = var4;
var5 = 1;
{ /* Inline kernel#Int#+ (var_nb,var5) */
var8 = var_nb + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_nb = var6;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#length for (self: Object): Int */
long VIRTUAL_abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__Collection__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has for (self: Collection[nullable Object], nullable Object): Bool */
short int abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 86);
exit(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_i = var4;
if (var_i == NULL) {
var5 = (var_item == NULL);
} else {
var5 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___61d_61d]))(var_i, var_item) /* == on <var_i:nullable Object>*/;
}
if (var5){
var6 = 1;
var = var6;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var7 = 0;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Collection__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_only for (self: Collection[nullable Object], nullable Object): Bool */
short int abstract_collection__Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 99);
exit(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_i = var4;
if (var_i == NULL) {
var5 = (var_item != NULL);
} else {
var5 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___33d_61d]))(var_i, var_item) /* != on <var_i:nullable Object>*/;
}
if (var5){
var6 = 0;
var = var6;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var7 = 1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Collection__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#count for (self: Collection[nullable Object], nullable Object): Int */
long abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_nb /* var nb: Int */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 116);
exit(1);
}
var_item = p0;
var2 = 0;
var_nb = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_i = var5;
if (var_i == NULL) {
var6 = (var_item == NULL);
} else {
var6 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___61d_61d]))(var_i, var_item) /* == on <var_i:nullable Object>*/;
}
if (var6){
var7 = 1;
{ /* Inline kernel#Int#+ (var_nb,var7) */
var10 = var_nb + var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_nb = var8;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#count for (self: Object, nullable Object): Int */
long VIRTUAL_abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__Collection__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#first for (self: Collection[nullable Object]): nullable Object */
val* abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
var2 = 0;
{ /* Inline kernel#Int#> (var1,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var6 = var1 > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/collection/abstract_collection.nit", 132);
exit(1);
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#first for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Collection__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_all for (self: Collection[nullable Object], Collection[nullable Object]): Bool */
short int abstract_collection__Collection__has_all(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_other /* var other: Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Collection[nullable Object]> isa Collection[Collection#0] */
/* <p0:Collection[nullable Object]> isa Collection[Collection#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 136);
exit(1);
}
var_other = p0;
var2 = ((val* (*)(val*))(var_other->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_other) /* iterator on <var_other:Collection[nullable Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_x = var4;
var5 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_x) /* has on <self:Collection[nullable Object]>*/;
var6 = !var5;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = 1;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_all for (self: Object, Collection[nullable Object]): Bool */
short int VIRTUAL_abstract_collection__Collection__has_all(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Collection__has_all(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#item for (self: Iterator[nullable Object]): nullable Object */
val* abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 152);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Iterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#next for (self: Iterator[nullable Object]) */
void abstract_collection__Iterator__next(val* self) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 156);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Iterator#next for (self: Object) */
void VIRTUAL_abstract_collection__Iterator__next(val* self) {
abstract_collection__Iterator__next(self);
RET_LABEL:;
}
/* method abstract_collection#Iterator#is_ok for (self: Iterator[nullable Object]): Bool */
short int abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 160);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#is_ok for (self: Object): Bool */
short int VIRTUAL_abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Iterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#first for (self: Container[nullable Object]): nullable Object */
val* abstract_collection__Container__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#first for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Container__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Container__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#is_empty for (self: Container[nullable Object]): Bool */
short int abstract_collection__Container__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#is_empty for (self: Object): Bool */
short int VIRTUAL_abstract_collection__Container__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Container__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#length for (self: Container[nullable Object]): Int */
long abstract_collection__Container__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#length for (self: Object): Int */
long VIRTUAL_abstract_collection__Container__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__Container__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has for (self: Container[nullable Object], nullable Object): Bool */
short int abstract_collection__Container__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 174);
exit(1);
}
var_an_item = p0;
var2 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
if (var2 == NULL) {
var3 = (var_an_item == NULL);
} else {
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var_an_item) /* == on <var2:nullable Object>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__Container__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Container__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has_only for (self: Container[nullable Object], nullable Object): Bool */
short int abstract_collection__Container__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 176);
exit(1);
}
var_an_item = p0;
var2 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
if (var2 == NULL) {
var3 = (var_an_item == NULL);
} else {
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var_an_item) /* == on <var2:nullable Object>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__Container__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Container__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#count for (self: Container[nullable Object], nullable Object): Int */
long abstract_collection__Container__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 178);
exit(1);
}
var_an_item = p0;
var2 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
if (var2 == NULL) {
var3 = (var_an_item == NULL);
} else {
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var_an_item) /* == on <var2:nullable Object>*/;
}
if (var3){
var4 = 1;
var = var4;
goto RET_LABEL;
} else {
var5 = 0;
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#count for (self: Object, nullable Object): Int */
long VIRTUAL_abstract_collection__Container__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__Container__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#iterator for (self: Container[nullable Object]): Iterator[nullable Object] */
val* abstract_collection__Container__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ContainerIterator[nullable Object] */;
var1 = NEW_abstract_collection__ContainerIterator(self->type->resolution_table->types[COLOR_abstract_collection__ContainerIteratorabstract_collection__Container_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__ContainerIterator__init]))(var1, self) /* init on <var1:ContainerIterator[nullable Object]>*/;
CHECK_NEW_abstract_collection__ContainerIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_abstract_collection__Container__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = abstract_collection__Container__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#init for (self: Container[nullable Object], nullable Object) */
void abstract_collection__Container__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Container#0 */
/* <p0:nullable Object> isa Container#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Container_FT0];
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 189);
exit(1);
}
var_e = p0;
self->attrs[COLOR_abstract_collection__Container___item].val = var_e; /* _item on <self:Container[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Container#init for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Container__init(val* self, val* p0) {
abstract_collection__Container__init(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Container#item for (self: Container[nullable Object]): nullable Object */
val* abstract_collection__Container__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Container__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Container__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#item= for (self: Container[nullable Object], nullable Object) */
void abstract_collection__Container__item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Container#0 */
/* <p0:nullable Object> isa Container#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Container_FT0];
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 192);
exit(1);
}
self->attrs[COLOR_abstract_collection__Container___item].val = p0; /* _item on <self:Container[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Container#item= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Container__item_61d(val* self, val* p0) {
abstract_collection__Container__item_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#item for (self: ContainerIterator[nullable Object]): nullable Object */
val* abstract_collection__ContainerIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Container[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__ContainerIterator___container].val; /* _container on <self:ContainerIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _container", "lib/standard/collection/abstract_collection.nit", 199);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Container__item]))(var1) /* item on <var1:Container[nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__ContainerIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__ContainerIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#next for (self: ContainerIterator[nullable Object]) */
void abstract_collection__ContainerIterator__next(val* self) {
short int var /* : Bool */;
var = 0;
self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s = var; /* _is_ok on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__ContainerIterator__next(val* self) {
abstract_collection__ContainerIterator__next(self);
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#init for (self: ContainerIterator[nullable Object], Container[nullable Object]) */
void abstract_collection__ContainerIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_c /* var c: Container[nullable Object] */;
/* Covariant cast for argument 0 (c) <p0:Container[nullable Object]> isa Container[ContainerIterator#0] */
/* <p0:Container[nullable Object]> isa Container[ContainerIterator#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Containerabstract_collection__ContainerIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 203);
exit(1);
}
var_c = p0;
self->attrs[COLOR_abstract_collection__ContainerIterator___container].val = var_c; /* _container on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#init for (self: Object, Container[nullable Object]) */
void VIRTUAL_abstract_collection__ContainerIterator__init(val* self, val* p0) {
abstract_collection__ContainerIterator__init(self, p0);
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#is_ok for (self: ContainerIterator[nullable Object]): Bool */
short int abstract_collection__ContainerIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s; /* _is_ok on <self:ContainerIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_abstract_collection__ContainerIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__ContainerIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#RemovableCollection#clear for (self: RemovableCollection[nullable Object]) */
void abstract_collection__RemovableCollection__clear(val* self) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 213);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#clear for (self: Object) */
void VIRTUAL_abstract_collection__RemovableCollection__clear(val* self) {
abstract_collection__RemovableCollection__clear(self);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove for (self: RemovableCollection[nullable Object], nullable Object) */
void abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
/* <p0:nullable Object> isa RemovableCollection#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 216);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 216);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__RemovableCollection__remove(val* self, val* p0) {
abstract_collection__RemovableCollection__remove(self, p0);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove_all for (self: RemovableCollection[nullable Object], nullable Object) */
void abstract_collection__RemovableCollection__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
/* <p0:nullable Object> isa RemovableCollection#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 219);
exit(1);
}
var_item = p0;
for(;;) {
var1 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_item) /* has on <self:RemovableCollection[nullable Object]>*/;
if (!var1) break;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(self, var_item) /* remove on <self:RemovableCollection[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove_all for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__RemovableCollection__remove_all(val* self, val* p0) {
abstract_collection__RemovableCollection__remove_all(self, p0);
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add for (self: SimpleCollection[nullable Object], nullable Object) */
void abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa SimpleCollection#0 */
/* <p0:nullable Object> isa SimpleCollection#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 226);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 226);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__SimpleCollection__add(val* self, val* p0) {
abstract_collection__SimpleCollection__add(self, p0);
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add_all for (self: SimpleCollection[nullable Object], Collection[nullable Object]) */
void abstract_collection__SimpleCollection__add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_coll /* var coll: Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[SimpleCollection#0] */
/* <p0:Collection[nullable Object]> isa Collection[SimpleCollection#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__SimpleCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 230);
exit(1);
}
var_coll = p0;
var1 = ((val* (*)(val*))(var_coll->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_coll) /* iterator on <var_coll:Collection[nullable Object]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_i = var3;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(self, var_i) /* add on <self:SimpleCollection[nullable Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add_all for (self: Object, Collection[nullable Object]) */
void VIRTUAL_abstract_collection__SimpleCollection__add_all(val* self, val* p0) {
abstract_collection__SimpleCollection__add_all(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Set#has_only for (self: Set[Object], Object): Bool */
short int abstract_collection__Set__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_item /* var item: Object */;
long var2 /* : Int */;
long var_l /* var l: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 246);
exit(1);
}
var_item = p0;
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Set[Object]>*/;
var_l = var2;
var3 = 1;
{ /* Inline kernel#Int#== (var_l,var3) */
var6 = var_l == var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var7 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_item) /* has on <self:Set[Object]>*/;
var = var7;
goto RET_LABEL;
} else {
var8 = 0;
{ /* Inline kernel#Int#== (var_l,var8) */
var11 = var_l == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (var9){
var12 = 1;
var = var12;
goto RET_LABEL;
} else {
var13 = 0;
var = var13;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__Set__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Set__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#count for (self: Set[Object], Object): Int */
long abstract_collection__Set__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_item /* var item: Object */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 258);
exit(1);
}
var_item = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_item) /* has on <self:Set[Object]>*/;
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
/* method abstract_collection#Set#count for (self: Object, nullable Object): Int */
long VIRTUAL_abstract_collection__Set__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__Set__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#remove_all for (self: Set[Object], Object) */
void abstract_collection__Set__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_item /* var item: Object */;
/* Covariant cast for argument 0 (item) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 268);
exit(1);
}
var_item = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(self, var_item) /* remove on <self:Set[Object]>*/;
RET_LABEL:;
}
/* method abstract_collection#Set#remove_all for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Set__remove_all(val* self, val* p0) {
abstract_collection__Set__remove_all(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Set#== for (self: Set[Object], nullable Object): Bool */
short int abstract_collection__Set___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct;
short int var14 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Set[Object] */
cltype = type_abstract_collection__Setkernel__Object.color;
idtype = type_abstract_collection__Setkernel__Object.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var1 = 0;
} else {
var1 = var_other->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((long (*)(val*))(var_other->class->vft[COLOR_abstract_collection__Collection__length]))(var_other) /* length on <var_other:nullable Object(Set[Object])>*/;
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Set[Object]>*/;
{ /* Inline kernel#Int#!= (var4,var5) */
var8 = var4 == var5;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Set[Object])> isa Collection[Set#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__Set_FT0];
cltype12 = type_struct->color;
idtype13 = type_struct->id;
if(cltype12 >= var_other->type->table_size) {
var11 = 0;
} else {
var11 = var_other->type->type_table[cltype12] == idtype13;
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 276);
exit(1);
}
var14 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has_all]))(self, var_other) /* has_all on <self:Set[Object]>*/;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__Set___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__Set___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#hash for (self: Set[Object]): Int */
long abstract_collection__Set__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: Object */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
var1 = 0;
var_res = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Set[Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_e = var4;
var5 = kernel__Int__hash(var_res);
{ /* Inline kernel#Int#+ (var_res,var5) */
var8 = var_res + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_res = var6;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#hash for (self: Object): Int */
long VIRTUAL_abstract_collection__Set__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__Set__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#[] for (self: MapRead[Object, nullable Object], Object): nullable Object */
val* abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 290);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 290);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#[] for (self: Object, Object): nullable Object */
val* VIRTUAL_abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__MapRead___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#get_or_default for (self: MapRead[Object, nullable Object], Object, nullable Object): nullable Object */
val* abstract_collection__MapRead__get_or_default(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable;
val* var_key /* var key: Object */;
val* var_default /* var default: nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 293);
exit(1);
}
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa MapRead#1 */
/* <p1:nullable Object> isa MapRead#1 */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 293);
exit(1);
}
var_key = p0;
var_default = p1;
var6 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead__has_key]))(self, var_key) /* has_key on <self:MapRead[Object, nullable Object]>*/;
if (var6){
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(self, var_key) /* [] on <self:MapRead[Object, nullable Object]>*/;
var = var7;
goto RET_LABEL;
} else {
}
var = var_default;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#get_or_default for (self: Object, Object, nullable Object): nullable Object */
val* VIRTUAL_abstract_collection__MapRead__get_or_default(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__MapRead__get_or_default(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#has_key for (self: MapRead[Object, nullable Object], Object): Bool */
short int abstract_collection__MapRead__has_key(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
val* var2 /* : Collection[Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 300);
exit(1);
}
var_key = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapRead__keys]))(self) /* keys on <self:MapRead[Object, nullable Object]>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_key) /* has on <var2:Collection[Object]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#has_key for (self: Object, Object): Bool */
short int VIRTUAL_abstract_collection__MapRead__has_key(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__MapRead__has_key(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#iterator for (self: MapRead[Object, nullable Object]): MapIterator[Object, nullable Object] */
val* abstract_collection__MapRead__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 303);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_abstract_collection__MapRead__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = abstract_collection__MapRead__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#iterate for (self: MapRead[Object, nullable Object]) */
void abstract_collection__MapRead__iterate(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var_i /* var i: MapIterator[Object, nullable Object] */;
short int var1 /* : Bool */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapRead__iterator]))(self) /* iterator on <self:MapRead[Object, nullable Object]>*/;
var_i = var;
for(;;) {
var1 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_i) /* is_ok on <var_i:MapIterator[Object, nullable Object]>*/;
if (!var1) break;
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/collection/abstract_collection.nit:312,4--22\n");
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_i) /* next on <var_i:MapIterator[Object, nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#MapRead#iterate for (self: Object) */
void VIRTUAL_abstract_collection__MapRead__iterate(val* self) {
abstract_collection__MapRead__iterate(self);
RET_LABEL:;
}
/* method abstract_collection#MapRead#values for (self: MapRead[Object, nullable Object]): Collection[nullable Object] */
val* abstract_collection__MapRead__values(val* self) {
val* var /* : Collection[nullable Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 317);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#values for (self: Object): Collection[nullable Object] */
val* VIRTUAL_abstract_collection__MapRead__values(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : Collection[nullable Object] */;
var1 = abstract_collection__MapRead__values(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#keys for (self: MapRead[Object, nullable Object]): Collection[Object] */
val* abstract_collection__MapRead__keys(val* self) {
val* var /* : Collection[Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 322);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#keys for (self: Object): Collection[Object] */
val* VIRTUAL_abstract_collection__MapRead__keys(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : Collection[Object] */;
var1 = abstract_collection__MapRead__keys(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#is_empty for (self: MapRead[Object, nullable Object]): Bool */
short int abstract_collection__MapRead__is_empty(val* self) {
short int var /* : Bool */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 327);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#is_empty for (self: Object): Bool */
short int VIRTUAL_abstract_collection__MapRead__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__MapRead__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#length for (self: MapRead[Object, nullable Object]): Int */
long abstract_collection__MapRead__length(val* self) {
long var /* : Int */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 330);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#length for (self: Object): Int */
long VIRTUAL_abstract_collection__MapRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__MapRead__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Map#[]= for (self: Map[Object, nullable Object], Object, nullable Object) */
void abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
/* Covariant cast for argument 0 (key) <p0:Object> isa Map#0 */
/* <p0:Object> isa Map#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 360);
exit(1);
}
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa Map#1 */
/* <p1:nullable Object> isa Map#1 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 360);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 360);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Map#[]= for (self: Object, Object, nullable Object) */
void VIRTUAL_abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1) {
abstract_collection__Map___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method abstract_collection#Map#recover_with for (self: Map[Object, nullable Object], Map[Object, nullable Object]) */
void abstract_collection__Map__recover_with(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_map /* var map: Map[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var_i /* var i: MapIterator[Object, nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : Object */;
val* var4 /* : nullable Object */;
/* Covariant cast for argument 0 (map) <p0:Map[Object, nullable Object]> isa Map[Map#0, Map#1] */
/* <p0:Map[Object, nullable Object]> isa Map[Map#0, Map#1] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapabstract_collection__Map_FT0abstract_collection__Map_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 363);
exit(1);
}
var_map = p0;
var1 = ((val* (*)(val*))(var_map->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_map) /* iterator on <var_map:Map[Object, nullable Object]>*/;
var_i = var1;
for(;;) {
var2 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_i) /* is_ok on <var_i:MapIterator[Object, nullable Object]>*/;
if (!var2) break;
var3 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_i) /* key on <var_i:MapIterator[Object, nullable Object]>*/;
var4 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_i) /* item on <var_i:MapIterator[Object, nullable Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(self, var3, var4) /* []= on <self:Map[Object, nullable Object]>*/;
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_i) /* next on <var_i:MapIterator[Object, nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#Map#recover_with for (self: Object, Map[Object, nullable Object]) */
void VIRTUAL_abstract_collection__Map__recover_with(val* self, val* p0) {
abstract_collection__Map__recover_with(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Map#clear for (self: Map[Object, nullable Object]) */
void abstract_collection__Map__clear(val* self) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 374);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Map#clear for (self: Object) */
void VIRTUAL_abstract_collection__Map__clear(val* self) {
abstract_collection__Map__clear(self);
RET_LABEL:;
}
/* method abstract_collection#Map#values for (self: Map[Object, nullable Object]): RemovableCollection[nullable Object] */
val* abstract_collection__Map__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 377);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Map#values for (self: Object): Collection[nullable Object] */
val* VIRTUAL_abstract_collection__Map__values(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
var1 = abstract_collection__Map__values(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Map#keys for (self: Map[Object, nullable Object]): RemovableCollection[Object] */
val* abstract_collection__Map__keys(val* self) {
val* var /* : RemovableCollection[Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 379);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Map#keys for (self: Object): Collection[Object] */
val* VIRTUAL_abstract_collection__Map__keys(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : RemovableCollection[Object] */;
var1 = abstract_collection__Map__keys(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#item for (self: MapIterator[Object, nullable Object]): nullable Object */
val* abstract_collection__MapIterator__item(val* self) {
val* var /* : nullable Object */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 384);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__MapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__MapIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#key for (self: MapIterator[Object, nullable Object]): Object */
val* abstract_collection__MapIterator__key(val* self) {
val* var /* : Object */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 388);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#key for (self: Object): Object */
val* VIRTUAL_abstract_collection__MapIterator__key(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = abstract_collection__MapIterator__key(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#next for (self: MapIterator[Object, nullable Object]) */
void abstract_collection__MapIterator__next(val* self) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 392);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#MapIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__MapIterator__next(val* self) {
abstract_collection__MapIterator__next(self);
RET_LABEL:;
}
/* method abstract_collection#MapIterator#is_ok for (self: MapIterator[Object, nullable Object]): Bool */
short int abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 396);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__MapIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#iterator for (self: MapKeysIterator[Object, nullable Object]): MapIterator[Object, nullable Object] */
val* abstract_collection__MapKeysIterator__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = self->attrs[COLOR_abstract_collection__MapKeysIterator___64diterator].val; /* @iterator on <self:MapKeysIterator[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @iterator", "lib/standard/collection/abstract_collection.nit", 406);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_abstract_collection__MapKeysIterator__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = abstract_collection__MapKeysIterator__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#iterator= for (self: MapKeysIterator[Object, nullable Object], MapIterator[Object, nullable Object]) */
void abstract_collection__MapKeysIterator__iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapKeysIterator#0, MapKeysIterator#1] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapKeysIterator#0, MapKeysIterator#1] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 406);
exit(1);
}
self->attrs[COLOR_abstract_collection__MapKeysIterator___64diterator].val = p0; /* @iterator on <self:MapKeysIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#iterator= for (self: Object, MapIterator[Object, nullable Object]) */
void VIRTUAL_abstract_collection__MapKeysIterator__iterator_61d(val* self, val* p0) {
abstract_collection__MapKeysIterator__iterator_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#is_ok for (self: MapKeysIterator[Object, nullable Object]): Bool */
short int abstract_collection__MapKeysIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[Object, nullable Object] */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapKeysIterator__iterator]))(self) /* iterator on <self:MapKeysIterator[Object, nullable Object]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_abstract_collection__MapKeysIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__MapKeysIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#next for (self: MapKeysIterator[Object, nullable Object]) */
void abstract_collection__MapKeysIterator__next(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapKeysIterator__iterator]))(self) /* iterator on <self:MapKeysIterator[Object, nullable Object]>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__MapKeysIterator__next(val* self) {
abstract_collection__MapKeysIterator__next(self);
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#item for (self: MapKeysIterator[Object, nullable Object]): Object */
val* abstract_collection__MapKeysIterator__item(val* self) {
val* var /* : Object */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var2 /* : Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapKeysIterator__iterator]))(self) /* iterator on <self:MapKeysIterator[Object, nullable Object]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__key]))(var1) /* key on <var1:MapIterator[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__MapKeysIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = abstract_collection__MapKeysIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#init for (self: MapKeysIterator[Object, nullable Object], MapIterator[Object, nullable Object]) */
void abstract_collection__MapKeysIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapKeysIterator#0, MapKeysIterator#1] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapKeysIterator#0, MapKeysIterator#1] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 403);
exit(1);
}
self->attrs[COLOR_abstract_collection__MapKeysIterator___64diterator].val = p0; /* @iterator on <self:MapKeysIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#init for (self: Object, MapIterator[Object, nullable Object]) */
void VIRTUAL_abstract_collection__MapKeysIterator__init(val* self, val* p0) {
abstract_collection__MapKeysIterator__init(self, p0);
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#iterator for (self: MapValuesIterator[Object, nullable Object]): MapIterator[Object, nullable Object] */
val* abstract_collection__MapValuesIterator__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = self->attrs[COLOR_abstract_collection__MapValuesIterator___64diterator].val; /* @iterator on <self:MapValuesIterator[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @iterator", "lib/standard/collection/abstract_collection.nit", 417);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_abstract_collection__MapValuesIterator__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = abstract_collection__MapValuesIterator__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#iterator= for (self: MapValuesIterator[Object, nullable Object], MapIterator[Object, nullable Object]) */
void abstract_collection__MapValuesIterator__iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapValuesIterator#0, MapValuesIterator#1] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapValuesIterator#0, MapValuesIterator#1] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 417);
exit(1);
}
self->attrs[COLOR_abstract_collection__MapValuesIterator___64diterator].val = p0; /* @iterator on <self:MapValuesIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#iterator= for (self: Object, MapIterator[Object, nullable Object]) */
void VIRTUAL_abstract_collection__MapValuesIterator__iterator_61d(val* self, val* p0) {
abstract_collection__MapValuesIterator__iterator_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#is_ok for (self: MapValuesIterator[Object, nullable Object]): Bool */
short int abstract_collection__MapValuesIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[Object, nullable Object] */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapValuesIterator__iterator]))(self) /* iterator on <self:MapValuesIterator[Object, nullable Object]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_abstract_collection__MapValuesIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__MapValuesIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#next for (self: MapValuesIterator[Object, nullable Object]) */
void abstract_collection__MapValuesIterator__next(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapValuesIterator__iterator]))(self) /* iterator on <self:MapValuesIterator[Object, nullable Object]>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__MapValuesIterator__next(val* self) {
abstract_collection__MapValuesIterator__next(self);
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#item for (self: MapValuesIterator[Object, nullable Object]): nullable Object */
val* abstract_collection__MapValuesIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var2 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapValuesIterator__iterator]))(self) /* iterator on <self:MapValuesIterator[Object, nullable Object]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__item]))(var1) /* item on <var1:MapIterator[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__MapValuesIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__MapValuesIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#init for (self: MapValuesIterator[Object, nullable Object], MapIterator[Object, nullable Object]) */
void abstract_collection__MapValuesIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapValuesIterator#0, MapValuesIterator#1] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[MapValuesIterator#0, MapValuesIterator#1] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 414);
exit(1);
}
self->attrs[COLOR_abstract_collection__MapValuesIterator___64diterator].val = p0; /* @iterator on <self:MapValuesIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#init for (self: Object, MapIterator[Object, nullable Object]) */
void VIRTUAL_abstract_collection__MapValuesIterator__init(val* self, val* p0) {
abstract_collection__MapValuesIterator__init(self, p0);
RET_LABEL:;
}
/* method abstract_collection#SequenceRead#first for (self: SequenceRead[nullable Object]): nullable Object */
val* abstract_collection__SequenceRead__first(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:SequenceRead[nullable Object]>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'not_empty\' failed", "lib/standard/collection/abstract_collection.nit", 433);
exit(1);
}
var3 = 0;
var4 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var3) /* [] on <self:SequenceRead[nullable Object]>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#first for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__SequenceRead__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__SequenceRead__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 437);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__SequenceRead___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last for (self: SequenceRead[nullable Object]): nullable Object */
val* abstract_collection__SequenceRead__last(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:SequenceRead[nullable Object]>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'not_empty\' failed", "lib/standard/collection/abstract_collection.nit", 446);
exit(1);
}
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
var4 = 1;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var8 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var5) /* [] on <self:SequenceRead[nullable Object]>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__SequenceRead__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__SequenceRead__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long abstract_collection__SequenceRead__index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var2 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa SequenceRead#0 */
/* <p0:nullable Object> isa SequenceRead#0 */
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
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 450);
exit(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
var_i = var2;
for(;;) {
var3 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:IndexedIterator[nullable Object]>*/;
if (!var3) break;
var4 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:IndexedIterator[nullable Object]>*/;
if (var4 == NULL) {
var5 = (var_item == NULL);
} else {
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var_item) /* == on <var4:nullable Object>*/;
}
if (var5){
var6 = ((long (*)(val*))(var_i->class->vft[COLOR_abstract_collection__IndexedIterator__index]))(var_i) /* index on <var_i:IndexedIterator[nullable Object]>*/;
var = var6;
goto RET_LABEL;
} else {
}
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:IndexedIterator[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var7 = 1;
{ /* Inline kernel#Int#unary - (var7) */
var10 = -var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of for (self: Object, nullable Object): Int */
long VIRTUAL_abstract_collection__SequenceRead__index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__SequenceRead__index_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#iterator for (self: SequenceRead[nullable Object]): IndexedIterator[nullable Object] */
val* abstract_collection__SequenceRead__iterator(val* self) {
val* var /* : IndexedIterator[nullable Object] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 463);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_abstract_collection__SequenceRead__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : IndexedIterator[nullable Object] */;
var1 = abstract_collection__SequenceRead__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#== for (self: SequenceRead[nullable Object], nullable Object): Bool */
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var_l /* var l: Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_i /* var i: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa SequenceRead[nullable Object] */
cltype = type_abstract_collection__SequenceReadnullable_kernel__Object.color;
idtype = type_abstract_collection__SequenceReadnullable_kernel__Object.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var2 = 0;
} else {
var2 = var_o->type->type_table[cltype] == idtype;
}
}
var3 = !var2;
var_ = var3;
if (var3){
var1 = var_;
} else {
var4 = NULL;
var5 = var_o == var4;
var1 = var5;
}
if (var1){
var6 = 0;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
var_l = var7;
var8 = ((long (*)(val*))(var_o->class->vft[COLOR_abstract_collection__Collection__length]))(var_o) /* length on <var_o:nullable Object(SequenceRead[nullable Object])>*/;
{ /* Inline kernel#Int#!= (var8,var_l) */
var11 = var8 == var_l;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (var9){
var13 = 0;
var = var13;
goto RET_LABEL;
} else {
}
var14 = 0;
var_i = var14;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var17 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var20 = var_i < var_l;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
var21 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:SequenceRead[nullable Object]>*/;
var22 = ((val* (*)(val*, long))(var_o->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_o, var_i) /* [] on <var_o:nullable Object(SequenceRead[nullable Object])>*/;
if (var21 == NULL) {
var23 = (var22 != NULL);
} else {
var23 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___33d_61d]))(var21, var22) /* != on <var21:nullable Object>*/;
}
if (var23){
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
var25 = 1;
{ /* Inline kernel#Int#+ (var_i,var25) */
var28 = var_i + var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_i = var26;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var29 = 1;
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_abstract_collection__SequenceRead___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__SequenceRead___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#hash for (self: SequenceRead[nullable Object]): Int */
long abstract_collection__SequenceRead__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
var1 = 0;
var_res = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_e = var4;
var5 = kernel__Int__hash(var_res);
{ /* Inline kernel#Int#+ (var_res,var5) */
var8 = var_res + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_res = var6;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#hash for (self: Object): Int */
long VIRTUAL_abstract_collection__SequenceRead__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__SequenceRead__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#first= for (self: Sequence[nullable Object], nullable Object) */
void abstract_collection__Sequence__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 494);
exit(1);
}
var_item = p0;
var1 = 0;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var1, var_item) /* []= on <self:Sequence[nullable Object]>*/;
RET_LABEL:;
}
/* method abstract_collection#Sequence#first= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__first_61d(val* self, val* p0) {
abstract_collection__Sequence__first_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Sequence#last= for (self: Sequence[nullable Object], nullable Object) */
void abstract_collection__Sequence__last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 499);
exit(1);
}
var_item = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Sequence[nullable Object]>*/;
var_l = var1;
var2 = 0;
{ /* Inline kernel#Int#> (var_l,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var8 = var_l > var2;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var9 = 1;
{ /* Inline kernel#Int#- (var_l,var9) */
var12 = var_l - var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var10, var_item) /* []= on <self:Sequence[nullable Object]>*/;
} else {
var13 = 0;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var13, var_item) /* []= on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#last= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__last_61d(val* self, val* p0) {
abstract_collection__Sequence__last_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Sequence#add for (self: Sequence[nullable Object], nullable Object) */
void abstract_collection__Sequence__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa SimpleCollection#0 */
/* <p0:nullable Object> isa SimpleCollection#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 511);
exit(1);
}
var_e = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Sequence__push]))(self, var_e) /* push on <self:Sequence[nullable Object]>*/;
RET_LABEL:;
}
/* method abstract_collection#Sequence#add for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__add(val* self, val* p0) {
abstract_collection__Sequence__add(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Sequence#push for (self: Sequence[nullable Object], nullable Object) */
void abstract_collection__Sequence__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 514);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 514);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#push for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__push(val* self, val* p0) {
abstract_collection__Sequence__push(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Sequence#append for (self: Sequence[nullable Object], Collection[nullable Object]) */
void abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_coll /* var coll: Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[Sequence#0] */
/* <p0:Collection[nullable Object]> isa Collection[Sequence#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 517);
exit(1);
}
var_coll = p0;
var1 = ((val* (*)(val*))(var_coll->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_coll) /* iterator on <var_coll:Collection[nullable Object]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_i = var3;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Sequence__push]))(self, var_i) /* push on <self:Sequence[nullable Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection#Sequence#append for (self: Object, Collection[nullable Object]) */
void VIRTUAL_abstract_collection__Sequence__append(val* self, val* p0) {
abstract_collection__Sequence__append(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Sequence#pop for (self: Sequence[nullable Object]): nullable Object */
val* abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 520);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#pop for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Sequence__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#unshift for (self: Sequence[nullable Object], nullable Object) */
void abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 523);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 523);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#unshift for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__unshift(val* self, val* p0) {
abstract_collection__Sequence__unshift(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Sequence#shift for (self: Sequence[nullable Object]): nullable Object */
val* abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 526);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#shift for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Sequence__shift(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa Sequence#0 */
/* <p1:nullable Object> isa Sequence#0 */
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 530);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 530);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
abstract_collection__Sequence___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#remove_at for (self: Sequence[nullable Object], Int) */
void abstract_collection__Sequence__remove_at(val* self, long p0) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 533);
exit(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#remove_at for (self: Object, Int) */
void VIRTUAL_abstract_collection__Sequence__remove_at(val* self, long p0) {
abstract_collection__Sequence__remove_at(self, p0);
RET_LABEL:;
}
/* method abstract_collection#IndexedIterator#index for (self: IndexedIterator[nullable Object]): Int */
long abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 540);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#IndexedIterator#index for (self: Object): Int */
long VIRTUAL_abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__IndexedIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#couple_at for (self: CoupleMap[Object, nullable Object], Object): nullable Couple[Object, nullable Object] */
val* abstract_collection__CoupleMap__couple_at(val* self, val* p0) {
val* var /* : nullable Couple[Object, nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (key) <p0:Object> isa CoupleMap#0 */
/* <p0:Object> isa CoupleMap#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__CoupleMap_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 547);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/abstract_collection.nit", 547);
exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#couple_at for (self: Object, Object): nullable Couple[Object, nullable Object] */
val* VIRTUAL_abstract_collection__CoupleMap__couple_at(val* self, val* p0) {
val* var /* : nullable Couple[Object, nullable Object] */;
val* var1 /* : nullable Couple[Object, nullable Object] */;
var1 = abstract_collection__CoupleMap__couple_at(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#[] for (self: CoupleMap[Object, nullable Object], Object): nullable Object */
val* abstract_collection__CoupleMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
val* var2 /* : nullable Couple[Object, nullable Object] */;
val* var_c /* var c: nullable Couple[Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 551);
exit(1);
}
var_key = p0;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__CoupleMap__couple_at]))(self, var_key) /* couple_at on <self:CoupleMap[Object, nullable Object]>*/;
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "lib/standard/collection/abstract_collection.nit", 555);
exit(1);
} else {
var5 = ((val* (*)(val*))(var_c->class->vft[COLOR_abstract_collection__Couple__second]))(var_c) /* second on <var_c:nullable Couple[Object, nullable Object](Couple[Object, nullable Object])>*/;
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#[] for (self: Object, Object): nullable Object */
val* VIRTUAL_abstract_collection__CoupleMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__CoupleMap___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#item for (self: CoupleMapIterator[Object, nullable Object]): nullable Object */
val* abstract_collection__CoupleMapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/abstract_collection.nit", 567);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[Couple[Object, nullable Object]]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Couple__second]))(var2) /* second on <var2:nullable Object(Couple[Object, nullable Object])>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#item for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__CoupleMapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__CoupleMapIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#key for (self: CoupleMapIterator[Object, nullable Object]): Object */
val* abstract_collection__CoupleMapIterator__key(val* self) {
val* var /* : Object */;
val* var1 /* : Iterator[Couple[Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/abstract_collection.nit", 571);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[Couple[Object, nullable Object]]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Couple__first]))(var2) /* first on <var2:nullable Object(Couple[Object, nullable Object])>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#key for (self: Object): Object */
val* VIRTUAL_abstract_collection__CoupleMapIterator__key(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = abstract_collection__CoupleMapIterator__key(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#is_ok for (self: CoupleMapIterator[Object, nullable Object]): Bool */
short int abstract_collection__CoupleMapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Iterator[Couple[Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/abstract_collection.nit", 573);
exit(1);
}
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[Couple[Object, nullable Object]]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_abstract_collection__CoupleMapIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_collection__CoupleMapIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#next for (self: CoupleMapIterator[Object, nullable Object]) */
void abstract_collection__CoupleMapIterator__next(val* self) {
val* var /* : Iterator[Couple[Object, nullable Object]] */;
var = self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/abstract_collection.nit", 577);
exit(1);
}
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[Couple[Object, nullable Object]]>*/;
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__CoupleMapIterator__next(val* self) {
abstract_collection__CoupleMapIterator__next(self);
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#init for (self: CoupleMapIterator[Object, nullable Object], Iterator[Couple[Object, nullable Object]]) */
void abstract_collection__CoupleMapIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_i /* var i: Iterator[Couple[Object, nullable Object]] */;
/* Covariant cast for argument 0 (i) <p0:Iterator[Couple[Object, nullable Object]]> isa Iterator[Couple[CoupleMapIterator#0, CoupleMapIterator#1]] */
/* <p0:Iterator[Couple[Object, nullable Object]]> isa Iterator[Couple[CoupleMapIterator#0, CoupleMapIterator#1]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Iteratorabstract_collection__Coupleabstract_collection__CoupleMapIterator_FT0abstract_collection__CoupleMapIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 582);
exit(1);
}
var_i = p0;
self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val = var_i; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#init for (self: Object, Iterator[Couple[Object, nullable Object]]) */
void VIRTUAL_abstract_collection__CoupleMapIterator__init(val* self, val* p0) {
abstract_collection__CoupleMapIterator__init(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Couple#first for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* abstract_collection__Couple__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__Couple___first].val; /* _first on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#first for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Couple__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Couple__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#first= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void abstract_collection__Couple__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (first) <p0:nullable Object> isa Couple#0 */
/* <p0:nullable Object> isa Couple#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Couple_FT0];
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 590);
exit(1);
}
self->attrs[COLOR_abstract_collection__Couple___first].val = p0; /* _first on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#first= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Couple__first_61d(val* self, val* p0) {
abstract_collection__Couple__first_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Couple#second for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* abstract_collection__Couple__second(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#second for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Couple__second(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__Couple__second(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#second= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void abstract_collection__Couple__second_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 0 (second) <p0:nullable Object> isa Couple#1 */
/* <p0:nullable Object> isa Couple#1 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Couple_FT1];
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 593);
exit(1);
}
self->attrs[COLOR_abstract_collection__Couple___second].val = p0; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#second= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Couple__second_61d(val* self, val* p0) {
abstract_collection__Couple__second_61d(self, p0);
RET_LABEL:;
}
/* method abstract_collection#Couple#init for (self: Couple[nullable Object, nullable Object], nullable Object, nullable Object) */
void abstract_collection__Couple__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
val* var_f /* var f: nullable Object */;
val* var_s /* var s: nullable Object */;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa Couple#0 */
/* <p0:nullable Object> isa Couple#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Couple_FT0];
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
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 596);
exit(1);
}
/* Covariant cast for argument 1 (s) <p1:nullable Object> isa Couple#1 */
/* <p1:nullable Object> isa Couple#1 */
type_struct4 = self->type->resolution_table->types[COLOR_abstract_collection__Couple_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/abstract_collection.nit", 596);
exit(1);
}
var_f = p0;
var_s = p1;
self->attrs[COLOR_abstract_collection__Couple___first].val = var_f; /* _first on <self:Couple[nullable Object, nullable Object]> */
self->attrs[COLOR_abstract_collection__Couple___second].val = var_s; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#init for (self: Object, nullable Object, nullable Object) */
void VIRTUAL_abstract_collection__Couple__init(val* self, val* p0, val* p1) {
abstract_collection__Couple__init(self, p0, p1);
RET_LABEL:;
}
