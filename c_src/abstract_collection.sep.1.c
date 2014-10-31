#include "abstract_collection.sep.0.h"
/* method abstract_collection#Collection#is_empty for (self: Collection[nullable Object]): Bool */
short int abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
{
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
}
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
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
var1 = 0;
var_nb = var1;
var_ = self;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_i = var5;
var6 = 1;
{
{ /* Inline kernel#Int#+ (var_nb,var6) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var10 = var_nb + var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_nb = var7;
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[nullable Object]> */
RET_LABEL11:(void)0;
}
}
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 76);
show_backtrace(1);
}
var_item = p0;
var_ = self;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_i = var5;
if (var_i == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___61d_61d]))(var_i, var_item) /* == on <var_i:nullable Object>*/;
var6 = var7;
}
if (var6){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[nullable Object]> */
RET_LABEL9:(void)0;
}
}
var10 = 0;
var = var10;
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
/* method abstract_collection#Collection#first for (self: Collection[nullable Object]): nullable Object */
val* abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
{
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
}
var2 = 0;
{
{ /* Inline kernel#Int#> (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var6 = var1 > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 122);
show_backtrace(1);
}
{
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
}
{
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
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
const char* var_class_name;
val* var_other /* var other: Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 126);
show_backtrace(1);
}
var_other = p0;
var_ = var_other;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_x = var5;
{
var6 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_x) /* has on <self:Collection[nullable Object]>*/;
}
var7 = !var6;
if (var7){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[nullable Object]> */
RET_LABEL9:(void)0;
}
}
var10 = 1;
var = var10;
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
/* method abstract_collection#Iterator#iterator for (self: Iterator[nullable Object]): Iterator[nullable Object] */
val* abstract_collection__Iterator__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_abstract_collection__Iterator__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = abstract_collection__Iterator__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#finish for (self: Iterator[nullable Object]) */
void abstract_collection__Iterator__finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection#Iterator#finish for (self: Object) */
void VIRTUAL_abstract_collection__Iterator__finish(val* self) {
{ /* Inline abstract_collection#Iterator#finish (self) on <self:Object(Iterator[nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#Container#first for (self: Container[nullable Object]): nullable Object */
val* abstract_collection__Container__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{
{ /* Inline abstract_collection#Container#item (self) on <self:Container[nullable Object]> */
var3 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
const char* var_class_name;
val* var_an_item /* var an_item: nullable Object */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
/* Covariant cast for argument 0 (an_item) <p0:nullable Object> isa E */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 182);
show_backtrace(1);
}
var_an_item = p0;
{
{ /* Inline abstract_collection#Container#item (self) on <self:Container[nullable Object]> */
var4 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = (var_an_item == NULL);
} else {
var6 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var_an_item) /* == on <var2:nullable Object>*/;
var5 = var6;
}
var = var5;
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
/* method abstract_collection#Container#iterator for (self: Container[nullable Object]): Iterator[nullable Object] */
val* abstract_collection__Container__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ContainerIterator[nullable Object] */;
var1 = NEW_abstract_collection__ContainerIterator(self->type->resolution_table->types[COLOR_abstract_collection__ContainerIteratorabstract_collection__Container_FT0]);
{
abstract_collection__ContainerIterator__init(var1, self); /* Direct call abstract_collection#ContainerIterator#init on <var1:ContainerIterator[nullable Object]>*/
}
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
const char* var_class_name;
val* var_e /* var e: nullable Object */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 197);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline abstract_collection#Container#item= (self,var_e) on <self:Container[nullable Object]> */
/* Covariant cast for argument 0 (item) <var_e:nullable Object> isa E */
/* <var_e:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Container_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(var_e == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= var_e->type->table_size) {
var2 = 0;
} else {
var2 = var_e->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = var_e == NULL ? "null" : var_e->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Container___item].val = var_e; /* _item on <self:Container[nullable Object]> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#Container#init for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Container__init(val* self, val* p0) {
abstract_collection__Container__init(self, p0); /* Direct call abstract_collection#Container#init on <self:Object(Container[nullable Object])>*/
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
val* var3 /* : nullable Object */;
{ /* Inline abstract_collection#Container#item (self) on <self:Object(Container[nullable Object])> */
var3 = self->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <self:Object(Container[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
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
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Container___item].val = p0; /* _item on <self:Container[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Container#item= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Container__item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{ /* Inline abstract_collection#Container#item= (self,p0) on <self:Object(Container[nullable Object])> */
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Container___item].val = p0; /* _item on <self:Object(Container[nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#item for (self: ContainerIterator[nullable Object]): nullable Object */
val* abstract_collection__ContainerIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Container[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__ContainerIterator___container].val; /* _container on <self:ContainerIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _container");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 207);
show_backtrace(1);
}
{
{ /* Inline abstract_collection#Container#item (var1) on <var1:Container[nullable Object]> */
var4 = var1->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var1:Container[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
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
{
{ /* Inline abstract_collection#ContainerIterator#is_ok= (self,var) on <self:ContainerIterator[nullable Object]> */
self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s = var; /* _is_ok on <self:ContainerIterator[nullable Object]> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__ContainerIterator__next(val* self) {
abstract_collection__ContainerIterator__next(self); /* Direct call abstract_collection#ContainerIterator#next on <self:Object(ContainerIterator[nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#init for (self: ContainerIterator[nullable Object], Container[nullable Object]) */
void abstract_collection__ContainerIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_c /* var c: Container[nullable Object] */;
/* Covariant cast for argument 0 (c) <p0:Container[nullable Object]> isa Container[E] */
/* <p0:Container[nullable Object]> isa Container[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Containerabstract_collection__ContainerIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Container[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 211);
show_backtrace(1);
}
var_c = p0;
self->attrs[COLOR_abstract_collection__ContainerIterator___container].val = var_c; /* _container on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#init for (self: Object, Container[nullable Object]) */
void VIRTUAL_abstract_collection__ContainerIterator__init(val* self, val* p0) {
abstract_collection__ContainerIterator__init(self, p0); /* Direct call abstract_collection#ContainerIterator#init on <self:Object(ContainerIterator[nullable Object])>*/
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
short int var3 /* : Bool */;
{ /* Inline abstract_collection#ContainerIterator#is_ok (self) on <self:Object(ContainerIterator[nullable Object])> */
var3 = self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s; /* _is_ok on <self:Object(ContainerIterator[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#is_ok= for (self: ContainerIterator[nullable Object], Bool) */
void abstract_collection__ContainerIterator__is_ok_61d(val* self, short int p0) {
self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s = p0; /* _is_ok on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#is_ok= for (self: Object, Bool) */
void VIRTUAL_abstract_collection__ContainerIterator__is_ok_61d(val* self, short int p0) {
{ /* Inline abstract_collection#ContainerIterator#is_ok= (self,p0) on <self:Object(ContainerIterator[nullable Object])> */
self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s = p0; /* _is_ok on <self:Object(ContainerIterator[nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#clear for (self: RemovableCollection[nullable Object]) */
void abstract_collection__RemovableCollection__clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 222);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#clear for (self: Object) */
void VIRTUAL_abstract_collection__RemovableCollection__clear(val* self) {
const char* var_class_name;
{ /* Inline abstract_collection#RemovableCollection#clear (self) on <self:Object(RemovableCollection[nullable Object])> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 222);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove for (self: RemovableCollection[nullable Object], nullable Object) */
void abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name1;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 231);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove", var_class_name1);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 231);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name2;
{ /* Inline abstract_collection#RemovableCollection#remove (self,p0) on <self:Object(RemovableCollection[nullable Object])> */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 231);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove", var_class_name2);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 231);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add_all for (self: SimpleCollection[nullable Object], Collection[nullable Object]) */
void abstract_collection__SimpleCollection__add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__SimpleCollection_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 260);
show_backtrace(1);
}
var_coll = p0;
var_ = var_coll;
{
var1 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_2 = var1;
for(;;) {
{
var3 = ((short int (*)(val*))(var_2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_2) /* is_ok on <var_2:Iterator[nullable Object]>*/;
}
if (var3){
{
var4 = ((val* (*)(val*))(var_2->class->vft[COLOR_abstract_collection__Iterator__item]))(var_2) /* item on <var_2:Iterator[nullable Object]>*/;
}
var_i = var4;
{
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(self, var_i) /* add on <self:SimpleCollection[nullable Object]>*/;
}
{
((void (*)(val*))(var_2->class->vft[COLOR_abstract_collection__Iterator__next]))(var_2) /* next on <var_2:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_2) on <var_2:Iterator[nullable Object]> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add_all for (self: Object, Collection[nullable Object]) */
void VIRTUAL_abstract_collection__SimpleCollection__add_all(val* self, val* p0) {
abstract_collection__SimpleCollection__add_all(self, p0); /* Direct call abstract_collection#SimpleCollection#add_all on <self:Object(SimpleCollection[nullable Object])>*/
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
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const struct type* type_struct;
const char* var_class_name;
short int var15 /* : Bool */;
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
{
var4 = ((long (*)(val*))(var_other->class->vft[COLOR_abstract_collection__Collection__length]))(var_other) /* length on <var_other:nullable Object(Set[Object])>*/;
}
{
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Set[Object]>*/;
}
{
{ /* Inline kernel#Int#!= (var4,var5) on <var4:Int> */
var9 = var4 == var5;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Set[Object])> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionabstract_collection__Set_FT0];
cltype13 = type_struct->color;
idtype14 = type_struct->id;
if(cltype13 >= var_other->type->table_size) {
var12 = 0;
} else {
var12 = var_other->type->type_table[cltype13] == idtype14;
}
if (unlikely(!var12)) {
var_class_name = var_other == NULL ? "null" : var_other->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 311);
show_backtrace(1);
}
{
var15 = abstract_collection__Collection__has_all(self, var_other);
}
var = var15;
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
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : Set[Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_e /* var e: Object */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
var1 = 23;
{
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Set[Object]>*/;
}
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var6 = var1 + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_res = var3;
var_ = self;
{
var7 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[Object]>*/;
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:Iterator[Object]>*/;
}
if (var9){
{
var10 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__item]))(var_8) /* item on <var_8:Iterator[Object]>*/;
}
var_e = var10;
{
var11 = ((long (*)(val*))(var_e->class->vft[COLOR_kernel__Object__hash]))(var_e) /* hash on <var_e:Object>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var11) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var18 = var_res + var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_res = var12;
{
((void (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__next]))(var_8) /* next on <var_8:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:Iterator[Object]> */
RET_LABEL19:(void)0;
}
}
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
/* method abstract_collection#MapRead#get_or_null for (self: MapRead[Object, nullable Object], Object): nullable Object */
val* abstract_collection__MapRead__get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : null */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 358);
show_backtrace(1);
}
var_key = p0;
{
var2 = abstract_collection__MapRead__has_key(self, var_key);
}
if (var2){
{
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(self, var_key) /* [] on <self:MapRead[Object, nullable Object]>*/;
}
var = var3;
goto RET_LABEL;
} else {
}
var4 = NULL;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#get_or_null for (self: Object, Object): nullable Object */
val* VIRTUAL_abstract_collection__MapRead__get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__MapRead__get_or_null(self, p0);
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
const char* var_class_name;
val* var_key /* var key: Object */;
val* var2 /* : Collection[Object] */;
short int var3 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 385);
show_backtrace(1);
}
var_key = p0;
{
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapRead__keys]))(self) /* keys on <self:MapRead[Object, nullable Object]>*/;
}
{
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_key) /* has on <var2:Collection[Object]>*/;
}
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
/* method abstract_collection#MapRead#provide_default_value for (self: MapRead[Object, nullable Object], Object): nullable Object */
val* abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 429);
show_backtrace(1);
}
var_key = p0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 434);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#provide_default_value for (self: Object, Object): nullable Object */
val* VIRTUAL_abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = abstract_collection__MapRead__provide_default_value(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#finish for (self: MapIterator[Object, nullable Object]) */
void abstract_collection__MapIterator__finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection#MapIterator#finish for (self: Object) */
void VIRTUAL_abstract_collection__MapIterator__finish(val* self) {
{ /* Inline abstract_collection#MapIterator#finish (self) on <self:Object(MapIterator[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#original_iterator for (self: MapKeysIterator[Object, nullable Object]): MapIterator[Object, nullable Object] */
val* abstract_collection__MapKeysIterator__original_iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#original_iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_abstract_collection__MapKeysIterator__original_iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:Object(MapKeysIterator[Object, nullable Object])> */
var3 = self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:Object(MapKeysIterator[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#original_iterator= for (self: MapKeysIterator[Object, nullable Object], MapIterator[Object, nullable Object]) */
void abstract_collection__MapKeysIterator__original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val = p0; /* _original_iterator on <self:MapKeysIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#original_iterator= for (self: Object, MapIterator[Object, nullable Object]) */
void VIRTUAL_abstract_collection__MapKeysIterator__original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline abstract_collection#MapKeysIterator#original_iterator= (self,p0) on <self:Object(MapKeysIterator[Object, nullable Object])> */
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val = p0; /* _original_iterator on <self:Object(MapKeysIterator[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#is_ok for (self: MapKeysIterator[Object, nullable Object]): Bool */
short int abstract_collection__MapKeysIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:MapKeysIterator[Object, nullable Object]> */
var3 = self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[Object, nullable Object]>*/;
}
var = var4;
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
val* var2 /* : MapIterator[Object, nullable Object] */;
{
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:MapKeysIterator[Object, nullable Object]> */
var2 = self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__MapKeysIterator__next(val* self) {
abstract_collection__MapKeysIterator__next(self); /* Direct call abstract_collection#MapKeysIterator#next on <self:Object(MapKeysIterator[Object, nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#item for (self: MapKeysIterator[Object, nullable Object]): Object */
val* abstract_collection__MapKeysIterator__item(val* self) {
val* var /* : Object */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
val* var4 /* : Object */;
{
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:MapKeysIterator[Object, nullable Object]> */
var3 = self->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 554);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__key]))(var1) /* key on <var1:MapIterator[Object, nullable Object]>*/;
}
var = var4;
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
/* method abstract_collection#MapKeysIterator#init for (self: MapKeysIterator[Object, nullable Object]) */
void abstract_collection__MapKeysIterator__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_abstract_collection__MapKeysIterator__init]))(self) /* init on <self:MapKeysIterator[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#init for (self: Object) */
void VIRTUAL_abstract_collection__MapKeysIterator__init(val* self) {
{ /* Inline abstract_collection#MapKeysIterator#init (self) on <self:Object(MapKeysIterator[Object, nullable Object])> */
{
((void (*)(val*))(self->class->vft[COLOR_abstract_collection__MapKeysIterator__init]))(self) /* init on <self:Object(MapKeysIterator[Object, nullable Object])>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#original_iterator for (self: MapValuesIterator[Object, nullable Object]): MapIterator[Object, nullable Object] */
val* abstract_collection__MapValuesIterator__original_iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#original_iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_abstract_collection__MapValuesIterator__original_iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:Object(MapValuesIterator[Object, nullable Object])> */
var3 = self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:Object(MapValuesIterator[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#original_iterator= for (self: MapValuesIterator[Object, nullable Object], MapIterator[Object, nullable Object]) */
void abstract_collection__MapValuesIterator__original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val = p0; /* _original_iterator on <self:MapValuesIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#original_iterator= for (self: Object, MapIterator[Object, nullable Object]) */
void VIRTUAL_abstract_collection__MapValuesIterator__original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline abstract_collection#MapValuesIterator#original_iterator= (self,p0) on <self:Object(MapValuesIterator[Object, nullable Object])> */
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val = p0; /* _original_iterator on <self:Object(MapValuesIterator[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#is_ok for (self: MapValuesIterator[Object, nullable Object]): Bool */
short int abstract_collection__MapValuesIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:MapValuesIterator[Object, nullable Object]> */
var3 = self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[Object, nullable Object]>*/;
}
var = var4;
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
val* var2 /* : MapIterator[Object, nullable Object] */;
{
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:MapValuesIterator[Object, nullable Object]> */
var2 = self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__MapValuesIterator__next(val* self) {
abstract_collection__MapValuesIterator__next(self); /* Direct call abstract_collection#MapValuesIterator#next on <self:Object(MapValuesIterator[Object, nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#item for (self: MapValuesIterator[Object, nullable Object]): nullable Object */
val* abstract_collection__MapValuesIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:MapValuesIterator[Object, nullable Object]> */
var3 = self->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__item]))(var1) /* item on <var1:MapIterator[Object, nullable Object]>*/;
}
var = var4;
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
/* method abstract_collection#MapValuesIterator#init for (self: MapValuesIterator[Object, nullable Object]) */
void abstract_collection__MapValuesIterator__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_abstract_collection__MapValuesIterator__init]))(self) /* init on <self:MapValuesIterator[Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#init for (self: Object) */
void VIRTUAL_abstract_collection__MapValuesIterator__init(val* self) {
{ /* Inline abstract_collection#MapValuesIterator#init (self) on <self:Object(MapValuesIterator[Object, nullable Object])> */
{
((void (*)(val*))(self->class->vft[COLOR_abstract_collection__MapValuesIterator__init]))(self) /* init on <self:Object(MapValuesIterator[Object, nullable Object])>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#SequenceRead#first for (self: SequenceRead[nullable Object]): nullable Object */
val* abstract_collection__SequenceRead__first(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:SequenceRead[nullable Object]>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 590);
show_backtrace(1);
}
var3 = 0;
{
var4 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var3) /* [] on <self:SequenceRead[nullable Object]>*/;
}
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
/* method abstract_collection#SequenceRead#last for (self: SequenceRead[nullable Object]): nullable Object */
val* abstract_collection__SequenceRead__last(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:SequenceRead[nullable Object]>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 615);
show_backtrace(1);
}
{
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
var4 = 1;
{
{ /* Inline kernel#Int#- (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var8 = var3 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var5) /* [] on <self:SequenceRead[nullable Object]>*/;
}
var = var9;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 619);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
{
var3 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead__index_of_from]))(self, var_item, var2) /* index_of_from on <self:SequenceRead[nullable Object]>*/;
}
var = var3;
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
/* method abstract_collection#SequenceRead#last_index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long abstract_collection__SequenceRead__last_index_of(val* self, val* p0) {
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
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 628);
show_backtrace(1);
}
var_item = p0;
{
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var10 = var2 - var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var11 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead__last_index_of_from]))(self, var_item, var4) /* last_index_of_from on <self:SequenceRead[nullable Object]>*/;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last_index_of for (self: Object, nullable Object): Int */
long VIRTUAL_abstract_collection__SequenceRead__last_index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__SequenceRead__last_index_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long abstract_collection__SequenceRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
long var_p /* var p: Int */;
val* var3 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 637);
show_backtrace(1);
}
var_item = p0;
var_pos = p1;
var2 = 0;
var_p = var2;
{
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
}
var_i = var3;
for(;;) {
{
var4 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var4){
{
{ /* Inline kernel#Int#>= (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var8 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var12 = var_p >= var_pos;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
{
var13 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var13 == NULL) {
var14 = (var_item == NULL);
} else {
var15 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_item) /* == on <var13:nullable Object>*/;
var14 = var15;
}
var5 = var14;
} else {
var5 = var_;
}
if (var5){
{
var16 = ((long (*)(val*))(var_i->class->vft[COLOR_abstract_collection__IndexedIterator__index]))(var_i) /* index on <var_i:IndexedIterator[nullable Object]>*/;
}
var = var16;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:IndexedIterator[nullable Object]>*/;
}
var17 = 1;
{
{ /* Inline kernel#Int#+ (var_p,var17) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var24 = var_p + var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_p = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var25 = 1;
{
{ /* Inline kernel#Int#unary - (var25) on <var25:Int> */
var28 = -var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of_from for (self: Object, nullable Object, Int): Int */
long VIRTUAL_abstract_collection__SequenceRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__SequenceRead__index_of_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last_index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long abstract_collection__SequenceRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_res /* var res: Int */;
long var6 /* : Int */;
long var_p /* var p: Int */;
val* var7 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 657);
show_backtrace(1);
}
var_item = p0;
var_pos = p1;
var2 = 1;
{
{ /* Inline kernel#Int#unary - (var2) on <var2:Int> */
var5 = -var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_res = var3;
var6 = 0;
var_p = var6;
{
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
}
var_i = var7;
for(;;) {
{
var8 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var8){
{
{ /* Inline kernel#Int#> (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var11 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var15 = var_p > var_pos;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
goto BREAK_label;
} else {
}
{
var16 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var16 == NULL) {
var17 = (var_item == NULL);
} else {
var18 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_item) /* == on <var16:nullable Object>*/;
var17 = var18;
}
if (var17){
var_res = var_p;
} else {
}
{
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:IndexedIterator[nullable Object]>*/;
}
var19 = 1;
{
{ /* Inline kernel#Int#+ (var_p,var19) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var26 = var_p + var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_p = var20;
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
/* method abstract_collection#SequenceRead#last_index_of_from for (self: Object, nullable Object, Int): Int */
long VIRTUAL_abstract_collection__SequenceRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_collection__SequenceRead__last_index_of_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#== for (self: SequenceRead[nullable Object], nullable Object): Bool */
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_l /* var l: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var_i /* var i: Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
short int var32 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa SequenceRead[nullable Object] */
cltype = type_abstract_collection__SequenceReadnullable_kernel__Object.color;
idtype = type_abstract_collection__SequenceReadnullable_kernel__Object.id;
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
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
var_l = var4;
{
var5 = ((long (*)(val*))(var_o->class->vft[COLOR_abstract_collection__Collection__length]))(var_o) /* length on <var_o:nullable Object(SequenceRead[nullable Object])>*/;
}
{
{ /* Inline kernel#Int#!= (var5,var_l) on <var5:Int> */
var9 = var5 == var_l;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
var12 = 0;
var_i = var12;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var15 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var18 = var_i < var_l;
var13 = var18;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
var19 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:SequenceRead[nullable Object]>*/;
}
{
var20 = ((val* (*)(val*, long))(var_o->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_o, var_i) /* [] on <var_o:nullable Object(SequenceRead[nullable Object])>*/;
}
if (var19 == NULL) {
var21 = (var20 != NULL);
} else {
var22 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___33d_61d]))(var19, var20) /* != on <var19:nullable Object>*/;
var21 = var22;
}
if (var21){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
var24 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var31 = var_i + var24;
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
var32 = 1;
var = var32;
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
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : SequenceRead[nullable Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
var1 = 17;
{
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var6 = var1 + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_res = var3;
var_ = self;
{
var7 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:SequenceRead[nullable Object]>*/;
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:IndexedIterator[nullable Object]>*/;
}
if (var9){
{
var10 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__item]))(var_8) /* item on <var_8:IndexedIterator[nullable Object]>*/;
}
var_e = var10;
var11 = 3;
{
{ /* Inline kernel#Int#* (var_res,var11) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var18 = var_res * var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var19 = 2;
{
{ /* Inline kernel#Int#/ (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 379);
show_backtrace(1);
}
var26 = var12 / var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_res = var20;
var27 = NULL;
if (var_e == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
var29 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var27) /* != on <var_e:nullable Object>*/;
var28 = var29;
}
if (var28){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 709);
show_backtrace(1);
} else {
var30 = ((long (*)(val*))(var_e->class->vft[COLOR_kernel__Object__hash]))(var_e) /* hash on <var_e:nullable Object>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var30) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var37 = var_res + var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_res = var31;
} else {
}
{
((void (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__next]))(var_8) /* next on <var_8:IndexedIterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:IndexedIterator[nullable Object]> */
RET_LABEL38:(void)0;
}
}
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
/* method abstract_collection#SequenceRead#iterator_from for (self: SequenceRead[nullable Object], Int): IndexedIterator[nullable Object] */
val* abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
long var_pos /* var pos: Int */;
val* var1 /* : Iterator[nullable Object] */;
val* var_res /* var res: IndexedIterator[nullable Object] */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_pos = p0;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
}
var_res = var1;
for(;;) {
var3 = 0;
{
{ /* Inline kernel#Int#> (var_pos,var3) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var7 = var_pos > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
var8 = ((short int (*)(val*))(var_res->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_res) /* is_ok on <var_res:IndexedIterator[nullable Object]>*/;
}
var2 = var8;
} else {
var2 = var_;
}
if (var2){
{
((void (*)(val*))(var_res->class->vft[COLOR_abstract_collection__Iterator__next]))(var_res) /* next on <var_res:IndexedIterator[nullable Object]>*/;
}
var9 = 1;
{
{ /* Inline kernel#Int#- (var_pos,var9) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var16 = var_pos - var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_pos = var10;
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
/* method abstract_collection#SequenceRead#iterator_from for (self: Object, Int): IndexedIterator[nullable Object] */
val* VIRTUAL_abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
val* var1 /* : IndexedIterator[nullable Object] */;
var1 = abstract_collection__SequenceRead__iterator_from(self, p0);
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 757);
show_backtrace(1);
}
var_item = p0;
var1 = 0;
{
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var1, var_item) /* []= on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#first= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__first_61d(val* self, val* p0) {
abstract_collection__Sequence__first_61d(self, p0); /* Direct call abstract_collection#Sequence#first= on <self:Object(Sequence[nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#Sequence#add for (self: Sequence[nullable Object], nullable Object) */
void abstract_collection__Sequence__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 788);
show_backtrace(1);
}
var_e = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Sequence__push]))(self, var_e) /* push on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#add for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__add(val* self, val* p0) {
abstract_collection__Sequence__add(self, p0); /* Direct call abstract_collection#Sequence#add on <self:Object(Sequence[nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#Sequence#append for (self: Sequence[nullable Object], Collection[nullable Object]) */
void abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 799);
show_backtrace(1);
}
var_coll = p0;
{
abstract_collection__SimpleCollection__add_all(self, var_coll); /* Direct call abstract_collection#SimpleCollection#add_all on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#append for (self: Object, Collection[nullable Object]) */
void VIRTUAL_abstract_collection__Sequence__append(val* self, val* p0) {
abstract_collection__Sequence__append(self, p0); /* Direct call abstract_collection#Sequence#append on <self:Object(Sequence[nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#Sequence#pop for (self: Sequence[nullable Object]): nullable Object */
val* abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "pop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 808);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#pop for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
const char* var_class_name;
{ /* Inline abstract_collection#Sequence#pop (self) on <self:Object(Sequence[nullable Object])> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "pop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 808);
show_backtrace(1);
RET_LABEL2:(void)0;
}
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
const char* var_class_name;
const char* var_class_name1;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 818);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "unshift", var_class_name1);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 818);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#unshift for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name2;
{ /* Inline abstract_collection#Sequence#unshift (self,p0) on <self:Object(Sequence[nullable Object])> */
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 818);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "unshift", var_class_name2);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 818);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#prepend for (self: Sequence[nullable Object], Collection[nullable Object]) */
void abstract_collection__Sequence__prepend(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var1 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 826);
show_backtrace(1);
}
var_coll = p0;
var1 = 0;
{
((void (*)(val*, val*, long))(self->class->vft[COLOR_abstract_collection__Sequence__insert_all]))(self, var_coll, var1) /* insert_all on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#prepend for (self: Object, Collection[nullable Object]) */
void VIRTUAL_abstract_collection__Sequence__prepend(val* self, val* p0) {
abstract_collection__Sequence__prepend(self, p0); /* Direct call abstract_collection#Sequence#prepend on <self:Object(Sequence[nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#Sequence#shift for (self: Sequence[nullable Object]): nullable Object */
val* abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "shift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 835);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#shift for (self: Object): nullable Object */
val* VIRTUAL_abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
const char* var_class_name;
{ /* Inline abstract_collection#Sequence#shift (self) on <self:Object(Sequence[nullable Object])> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "shift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 835);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#insert for (self: Sequence[nullable Object], nullable Object, Int) */
void abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name1;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 861);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert", var_class_name1);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 861);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#insert for (self: Object, nullable Object, Int) */
void VIRTUAL_abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name2;
{ /* Inline abstract_collection#Sequence#insert (self,p0,p1) on <self:Object(Sequence[nullable Object])> */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 861);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert", var_class_name2);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 861);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#insert_all for (self: Sequence[nullable Object], Collection[nullable Object], Int) */
void abstract_collection__Sequence__insert_all(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var_index /* var index: Int */;
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
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var_23 /* var : Collection[nullable Object] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_c /* var c: nullable Object */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 871);
show_backtrace(1);
}
var_coll = p0;
var_index = p1;
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
{
var10 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Sequence[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#< (var_index,var10) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var17 = var_index < var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 881);
show_backtrace(1);
}
{
var18 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Sequence[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#== (var_index,var18) on <var_index:Int> */
var22 = var_index == var18;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
abstract_collection__SimpleCollection__add_all(self, var_coll); /* Direct call abstract_collection#SimpleCollection#add_all on <self:Sequence[nullable Object]>*/
}
} else {
}
var_23 = var_coll;
{
var24 = ((val* (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_23) /* iterator on <var_23:Collection[nullable Object]>*/;
}
var_25 = var24;
for(;;) {
{
var26 = ((short int (*)(val*))(var_25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_25) /* is_ok on <var_25:Iterator[nullable Object]>*/;
}
if (var26){
{
var27 = ((val* (*)(val*))(var_25->class->vft[COLOR_abstract_collection__Iterator__item]))(var_25) /* item on <var_25:Iterator[nullable Object]>*/;
}
var_c = var27;
{
((void (*)(val*, val*, long))(self->class->vft[COLOR_abstract_collection__Sequence__insert]))(self, var_c, var_index) /* insert on <self:Sequence[nullable Object]>*/;
}
var28 = 1;
{
{ /* Inline kernel#Int#+ (var_index,var28) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var35 = var_index + var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_index = var29;
{
((void (*)(val*))(var_25->class->vft[COLOR_abstract_collection__Iterator__next]))(var_25) /* next on <var_25:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_25) on <var_25:Iterator[nullable Object]> */
RET_LABEL36:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#insert_all for (self: Object, Collection[nullable Object], Int) */
void VIRTUAL_abstract_collection__Sequence__insert_all(val* self, val* p0, long p1) {
abstract_collection__Sequence__insert_all(self, p0, p1); /* Direct call abstract_collection#Sequence#insert_all on <self:Object(Sequence[nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#Sequence#remove_at for (self: Sequence[nullable Object], Int) */
void abstract_collection__Sequence__remove_at(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 891);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#remove_at for (self: Object, Int) */
void VIRTUAL_abstract_collection__Sequence__remove_at(val* self, long p0) {
const char* var_class_name;
{ /* Inline abstract_collection#Sequence#remove_at (self,p0) on <self:Object(Sequence[nullable Object])> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 891);
show_backtrace(1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#CoupleMap#iterator for (self: CoupleMap[Object, nullable Object]): MapIterator[Object, nullable Object] */
val* abstract_collection__CoupleMap__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : CoupleMapIterator[Object, nullable Object] */;
val* var2 /* : Iterator[Couple[Object, nullable Object]] */;
var1 = NEW_abstract_collection__CoupleMapIterator(self->type->resolution_table->types[COLOR_abstract_collection__CoupleMapIteratorabstract_collection__CoupleMap_FT0abstract_collection__CoupleMap_FT1]);
{
var2 = array__ArrayMap__couple_iterator(self);
}
{
abstract_collection__CoupleMapIterator__init(var1, var2); /* Direct call abstract_collection#CoupleMapIterator#init on <var1:CoupleMapIterator[Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMap#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_abstract_collection__CoupleMap__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
var1 = abstract_collection__CoupleMap__iterator(self);
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
val* var5 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 939);
show_backtrace(1);
}
{
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[Couple[Object, nullable Object]]>*/;
}
{
{ /* Inline abstract_collection#Couple#second (var2) on <var2:nullable Object(Couple[Object, nullable Object])> */
var5 = var2->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <var2:nullable Object(Couple[Object, nullable Object])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
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
val* var5 /* : nullable Object */;
var1 = self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 943);
show_backtrace(1);
}
{
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[Couple[Object, nullable Object]]>*/;
}
{
{ /* Inline abstract_collection#Couple#first (var2) on <var2:nullable Object(Couple[Object, nullable Object])> */
var5 = var2->attrs[COLOR_abstract_collection__Couple___first].val; /* _first on <var2:nullable Object(Couple[Object, nullable Object])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
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
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 945);
show_backtrace(1);
}
{
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[Couple[Object, nullable Object]]>*/;
}
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
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 949);
show_backtrace(1);
}
{
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[Couple[Object, nullable Object]]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#next for (self: Object) */
void VIRTUAL_abstract_collection__CoupleMapIterator__next(val* self) {
abstract_collection__CoupleMapIterator__next(self); /* Direct call abstract_collection#CoupleMapIterator#next on <self:Object(CoupleMapIterator[Object, nullable Object])>*/
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#init for (self: CoupleMapIterator[Object, nullable Object], Iterator[Couple[Object, nullable Object]]) */
void abstract_collection__CoupleMapIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_i /* var i: Iterator[Couple[Object, nullable Object]] */;
/* Covariant cast for argument 0 (i) <p0:Iterator[Couple[Object, nullable Object]]> isa Iterator[Couple[K, V]] */
/* <p0:Iterator[Couple[Object, nullable Object]]> isa Iterator[Couple[K, V]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Iteratorabstract_collection__Coupleabstract_collection__CoupleMapIterator_FT0abstract_collection__CoupleMapIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Iterator[Couple[K, V]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 954);
show_backtrace(1);
}
var_i = p0;
self->attrs[COLOR_abstract_collection__CoupleMapIterator___iter].val = var_i; /* _iter on <self:CoupleMapIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#init for (self: Object, Iterator[Couple[Object, nullable Object]]) */
void VIRTUAL_abstract_collection__CoupleMapIterator__init(val* self, val* p0) {
abstract_collection__CoupleMapIterator__init(self, p0); /* Direct call abstract_collection#CoupleMapIterator#init on <self:Object(CoupleMapIterator[Object, nullable Object])>*/
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
val* var3 /* : nullable Object */;
{ /* Inline abstract_collection#Couple#first (self) on <self:Object(Couple[nullable Object, nullable Object])> */
var3 = self->attrs[COLOR_abstract_collection__Couple___first].val; /* _first on <self:Object(Couple[nullable Object, nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
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
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:nullable Object> isa F */
/* <p0:nullable Object> isa F */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "F", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 962);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Couple___first].val = p0; /* _first on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#first= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Couple__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{ /* Inline abstract_collection#Couple#first= (self,p0) on <self:Object(Couple[nullable Object, nullable Object])> */
/* Covariant cast for argument 0 (first) <p0:nullable Object> isa F */
/* <p0:nullable Object> isa F */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "F", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 962);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Couple___first].val = p0; /* _first on <self:Object(Couple[nullable Object, nullable Object])> */
RET_LABEL1:(void)0;
}
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
val* var3 /* : nullable Object */;
{ /* Inline abstract_collection#Couple#second (self) on <self:Object(Couple[nullable Object, nullable Object])> */
var3 = self->attrs[COLOR_abstract_collection__Couple___second].val; /* _second on <self:Object(Couple[nullable Object, nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
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
const char* var_class_name;
/* Covariant cast for argument 0 (second) <p0:nullable Object> isa S */
/* <p0:nullable Object> isa S */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 965);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Couple___second].val = p0; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#second= for (self: Object, nullable Object) */
void VIRTUAL_abstract_collection__Couple__second_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{ /* Inline abstract_collection#Couple#second= (self,p0) on <self:Object(Couple[nullable Object, nullable Object])> */
/* Covariant cast for argument 0 (second) <p0:nullable Object> isa S */
/* <p0:nullable Object> isa S */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 965);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Couple___second].val = p0; /* _second on <self:Object(Couple[nullable Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_collection#Couple#init for (self: Couple[nullable Object, nullable Object], nullable Object, nullable Object) */
void abstract_collection__Couple__init(val* self, val* p0, val* p1) {
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
val* var_f /* var f: nullable Object */;
val* var_s /* var s: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const struct type* type_struct11;
short int is_nullable12;
const char* var_class_name13;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const struct type* type_struct18;
short int is_nullable19;
const char* var_class_name20;
/* Covariant cast for argument 0 (f) <p0:nullable Object> isa F */
/* <p0:nullable Object> isa F */
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "F", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 968);
show_backtrace(1);
}
/* Covariant cast for argument 1 (s) <p1:nullable Object> isa S */
/* <p1:nullable Object> isa S */
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
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 968);
show_backtrace(1);
}
var_f = p0;
var_s = p1;
{
{ /* Inline abstract_collection#Couple#first= (self,var_f) on <self:Couple[nullable Object, nullable Object]> */
/* Covariant cast for argument 0 (first) <var_f:nullable Object> isa F */
/* <var_f:nullable Object> isa F */
type_struct11 = self->type->resolution_table->types[COLOR_abstract_collection__Couple_FT0];
cltype9 = type_struct11->color;
idtype10 = type_struct11->id;
is_nullable12 = type_struct11->is_nullable;
if(var_f == NULL) {
var8 = is_nullable12;
} else {
if(cltype9 >= var_f->type->table_size) {
var8 = 0;
} else {
var8 = var_f->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name13 = var_f == NULL ? "null" : var_f->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "F", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 962);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Couple___first].val = var_f; /* _first on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_collection#Couple#second= (self,var_s) on <self:Couple[nullable Object, nullable Object]> */
/* Covariant cast for argument 0 (second) <var_s:nullable Object> isa S */
/* <var_s:nullable Object> isa S */
type_struct18 = self->type->resolution_table->types[COLOR_abstract_collection__Couple_FT1];
cltype16 = type_struct18->color;
idtype17 = type_struct18->id;
is_nullable19 = type_struct18->is_nullable;
if(var_s == NULL) {
var15 = is_nullable19;
} else {
if(cltype16 >= var_s->type->table_size) {
var15 = 0;
} else {
var15 = var_s->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name20 = var_s == NULL ? "null" : var_s->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 965);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Couple___second].val = var_s; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#Couple#init for (self: Object, nullable Object, nullable Object) */
void VIRTUAL_abstract_collection__Couple__init(val* self, val* p0, val* p1) {
abstract_collection__Couple__init(self, p0, p1); /* Direct call abstract_collection#Couple#init on <self:Object(Couple[nullable Object, nullable Object])>*/
RET_LABEL:;
}
