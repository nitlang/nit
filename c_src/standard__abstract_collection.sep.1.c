#include "standard__abstract_collection.sep.0.h"
/* method abstract_collection#Collection#is_empty for (self: Collection[nullable Object]): Bool */
short int standard___standard__Collection___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
{
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
}
var2 = 0;
{
{ /* Inline kernel#Int#== (var1,var2) on <var1:Int> */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#length for (self: Collection[nullable Object]): Int */
long standard___standard__Collection___length(val* self) {
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
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_i = var5;
var6 = 1;
{
{ /* Inline kernel#Int#+ (var_nb,var6) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
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
/* method abstract_collection#Collection#has for (self: Collection[nullable Object], nullable Object): Bool */
short int standard___standard__Collection___has(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__Collection___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 80);
show_backtrace(1);
}
var_item = p0;
var_ = self;
{
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_i = var5;
if (var_i == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int (*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var_item) /* == on <var_i:nullable Object>*/;
var6 = var7;
}
if (var6){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
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
/* method abstract_collection#Collection#first for (self: Collection[nullable Object]): nullable Object */
val* standard___standard__Collection___first(val* self) {
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
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:Collection[nullable Object]>*/;
}
var2 = 0;
{
{ /* Inline kernel#Int#> (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 126);
show_backtrace(1);
}
{
var7 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
}
{
var8 = ((val* (*)(val* self))(var7->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Collection#has_all for (self: Collection[nullable Object], Collection[nullable Object]): Bool */
short int standard___standard__Collection___has_all(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__Collection___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 130);
show_backtrace(1);
}
var_other = p0;
var_ = var_other;
{
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_x = var5;
{
var6 = ((short int (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__Collection__has]))(self, var_x) /* has on <self:Collection[nullable Object]>*/;
}
var7 = !var6;
if (var7){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
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
/* method abstract_collection#Iterator#iterator for (self: Iterator[nullable Object]): Iterator[nullable Object] */
val* standard___standard__Iterator___iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Iterator#finish for (self: Iterator[nullable Object]) */
void standard___standard__Iterator___finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection#Container#first for (self: Container[nullable Object]): nullable Object */
val* standard___standard__Container___Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{
{ /* Inline abstract_collection#Container#item (self) on <self:Container[nullable Object]> */
var3 = self->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#is_empty for (self: Container[nullable Object]): Bool */
short int standard___standard__Container___Collection__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#length for (self: Container[nullable Object]): Int */
long standard___standard__Container___Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#has for (self: Container[nullable Object], nullable Object): Bool */
short int standard___standard__Container___Collection__has(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__Container___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 217);
show_backtrace(1);
}
var_an_item = p0;
{
{ /* Inline abstract_collection#Container#item (self) on <self:Container[nullable Object]> */
var4 = self->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = (var_an_item == NULL);
} else {
var6 = ((short int (*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_an_item) /* == on <var2:nullable Object>*/;
var5 = var6;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#iterator for (self: Container[nullable Object]): Iterator[nullable Object] */
val* standard___standard__Container___Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ContainerIterator[nullable Object] */;
var1 = NEW_standard__abstract_collection__ContainerIterator(self->type->resolution_table->types[COLOR_standard__abstract_collection__ContainerIterator__standard__Container___35dE]);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__ContainerIterator__container_61d]))(var1, self) /* container= on <var1:ContainerIterator[nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:ContainerIterator[nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#item for (self: Container[nullable Object]): nullable Object */
val* standard___standard__Container___item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <self:Container[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Container#item= for (self: Container[nullable Object], nullable Object) */
void standard___standard__Container___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Container___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 232);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__Container___item].val = p0; /* _item on <self:Container[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Container#init for (self: Container[nullable Object]) */
void standard___standard__Container___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__Container___standard__kernel__Object__init]))(self) /* init on <self:Container[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#item for (self: ContainerIterator[nullable Object]): nullable Object */
val* standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Container[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__ContainerIterator___container].val; /* _container on <self:ContainerIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _container");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 239);
show_backtrace(1);
}
{
{ /* Inline abstract_collection#Container#item (var1) on <var1:Container[nullable Object]> */
var4 = var1->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var1:Container[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#next for (self: ContainerIterator[nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__next(val* self) {
short int var /* : Bool */;
var = 0;
{
{ /* Inline abstract_collection#ContainerIterator#is_ok= (self,var) on <self:ContainerIterator[nullable Object]> */
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s = var; /* _is_ok on <self:ContainerIterator[nullable Object]> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#is_ok for (self: ContainerIterator[nullable Object]): Bool */
short int standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s; /* _is_ok on <self:ContainerIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#ContainerIterator#is_ok= for (self: ContainerIterator[nullable Object], Bool) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___is_ok_61d(val* self, short int p0) {
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s = p0; /* _is_ok on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#container= for (self: ContainerIterator[nullable Object], Container[nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___container_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (container) <p0:Container[nullable Object]> isa Container[E] */
/* <p0:Container[nullable Object]> isa Container[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Container__standard__abstract_collection__ContainerIterator___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 245);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___container].val = p0; /* _container on <self:ContainerIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#ContainerIterator#init for (self: ContainerIterator[nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__ContainerIterator___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection___standard__abstract_collection__ContainerIterator___standard__kernel__Object__init]))(self) /* init on <self:ContainerIterator[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#clear for (self: RemovableCollection[nullable Object]) */
void standard___standard__RemovableCollection___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 252);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#RemovableCollection#remove for (self: RemovableCollection[nullable Object], nullable Object) */
void standard___standard__RemovableCollection___remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name1;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__RemovableCollection___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 261);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove", var_class_name1);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 261);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#SimpleCollection#add_all for (self: SimpleCollection[nullable Object], Collection[nullable Object]) */
void standard___standard__SimpleCollection___add_all(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__SimpleCollection___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 290);
show_backtrace(1);
}
var_coll = p0;
var_ = var_coll;
{
var1 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_2 = var1;
for(;;) {
{
var3 = ((short int (*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2) /* is_ok on <var_2:Iterator[nullable Object]>*/;
}
if (var3){
{
var4 = ((val* (*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2) /* item on <var_2:Iterator[nullable Object]>*/;
}
var_i = var4;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(self, var_i) /* add on <self:SimpleCollection[nullable Object]>*/;
}
{
((void (*)(val* self))(var_2->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2) /* next on <var_2:Iterator[nullable Object]>*/;
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
/* method abstract_collection#Set#== for (self: Set[nullable Object], nullable Object): Bool */
short int standard___standard__Set___standard__kernel__Object___61d_61d(val* self, val* p0) {
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
const char* var_class_name;
short int var14 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Set[Object] */
cltype = type_standard__Set__standard__Object.color;
idtype = type_standard__Set__standard__Object.id;
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
var4 = ((long (*)(val* self))(var_other->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_other) /* length on <var_other:nullable Object(Set[Object])>*/;
}
{
var5 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:Set[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#!= (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Set[Object])> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__Set___35dE];
cltype12 = type_struct->color;
idtype13 = type_struct->id;
if(cltype12 >= var_other->type->table_size) {
var11 = 0;
} else {
var11 = var_other->type->type_table[cltype12] == idtype13;
}
if (unlikely(!var11)) {
var_class_name = var_other == NULL ? "null" : var_other->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 341);
show_backtrace(1);
}
{
var14 = standard___standard__Collection___has_all(self, var_other);
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#Set#hash for (self: Set[nullable Object]): Int */
long standard___standard__Set___standard__kernel__Object__hash(val* self) {
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
val* var_ /* var : Set[nullable Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[nullable Object] */;
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
var1 = 23;
{
var2 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:Set[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var7 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[nullable Object]>*/;
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:Iterator[nullable Object]>*/;
}
if (var9){
{
var10 = ((val* (*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8) /* item on <var_8:Iterator[nullable Object]>*/;
}
var_e = var10;
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 351);
show_backtrace(1);
} else {
var11 = ((long (*)(val* self))(var_e->class->vft[COLOR_standard__kernel__Object__hash]))(var_e) /* hash on <var_e:nullable Object>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var11) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
((void (*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8) /* next on <var_8:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:Iterator[nullable Object]> */
RET_LABEL19:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#get_or_null for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__MapRead___get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : null */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__MapRead___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 392);
show_backtrace(1);
}
var_key = p0;
{
var2 = standard___standard__MapRead___has_key(self, var_key);
}
if (var2){
{
var3 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(self, var_key) /* [] on <self:MapRead[nullable Object, nullable Object]>*/;
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
/* method abstract_collection#MapRead#has_key for (self: MapRead[nullable Object, nullable Object], nullable Object): Bool */
short int standard___standard__MapRead___has_key(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : Collection[nullable Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__MapRead___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 419);
show_backtrace(1);
}
var_key = p0;
{
var2 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__MapRead__keys]))(self) /* keys on <self:MapRead[nullable Object, nullable Object]>*/;
}
{
var3 = ((short int (*)(val* self, val* p0))(var2->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var2, var_key) /* has on <var2:Collection[nullable Object]>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapRead#provide_default_value for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__MapRead___provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__MapRead___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 463);
show_backtrace(1);
}
var_key = p0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 468);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#MapIterator#finish for (self: MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapIterator___finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#original_iterator for (self: MapKeysIterator[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__MapKeysIterator___original_iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 588);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#original_iterator= for (self: MapKeysIterator[nullable Object, nullable Object], MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapKeysIterator___original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__MapIterator__standard__MapKeysIterator___35dK__standard__MapKeysIterator___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 588);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val = p0; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#is_ok for (self: MapKeysIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__MapKeysIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:MapKeysIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 588);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[nullable Object, nullable Object]>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#next for (self: MapKeysIterator[nullable Object, nullable Object]) */
void standard___standard__MapKeysIterator___Iterator__next(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
{
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:MapKeysIterator[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 588);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapKeysIterator#item for (self: MapKeysIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__MapKeysIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline abstract_collection#MapKeysIterator#original_iterator (self) on <self:MapKeysIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 588);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var1) /* key on <var1:MapIterator[nullable Object, nullable Object]>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapKeysIterator#init for (self: MapKeysIterator[nullable Object, nullable Object]) */
void standard___standard__MapKeysIterator___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__MapKeysIterator___standard__kernel__Object__init]))(self) /* init on <self:MapKeysIterator[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#original_iterator for (self: MapValuesIterator[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__MapValuesIterator___original_iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 599);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#original_iterator= for (self: MapValuesIterator[nullable Object, nullable Object], MapIterator[nullable Object, nullable Object]) */
void standard___standard__MapValuesIterator___original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__MapIterator__standard__MapValuesIterator___35dK__standard__MapValuesIterator___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 599);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val = p0; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#is_ok for (self: MapValuesIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__MapValuesIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:MapValuesIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 599);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[nullable Object, nullable Object]>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#next for (self: MapValuesIterator[nullable Object, nullable Object]) */
void standard___standard__MapValuesIterator___Iterator__next(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
{
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:MapValuesIterator[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 599);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#MapValuesIterator#item for (self: MapValuesIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__MapValuesIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline abstract_collection#MapValuesIterator#original_iterator (self) on <self:MapValuesIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 599);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var1) /* item on <var1:MapIterator[nullable Object, nullable Object]>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#MapValuesIterator#init for (self: MapValuesIterator[nullable Object, nullable Object]) */
void standard___standard__MapValuesIterator___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__MapValuesIterator___standard__kernel__Object__init]))(self) /* init on <self:MapValuesIterator[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#SequenceRead#first for (self: SequenceRead[nullable Object]): nullable Object */
val* standard___standard__SequenceRead___Collection__first(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
{
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:SequenceRead[nullable Object]>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 624);
show_backtrace(1);
}
var3 = 0;
{
var4 = ((val* (*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var3) /* [] on <self:SequenceRead[nullable Object]>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last for (self: SequenceRead[nullable Object]): nullable Object */
val* standard___standard__SequenceRead___last(val* self) {
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
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:SequenceRead[nullable Object]>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 649);
show_backtrace(1);
}
{
var3 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
var4 = 1;
{
{ /* Inline kernel#Int#- (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var8 = var3 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val* (*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var5) /* [] on <self:SequenceRead[nullable Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long standard___standard__SequenceRead___index_of(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__SequenceRead___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 653);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
{
var3 = ((long (*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead__index_of_from]))(self, var_item, var2) /* index_of_from on <self:SequenceRead[nullable Object]>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#last_index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long standard___standard__SequenceRead___last_index_of(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__SequenceRead___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 662);
show_backtrace(1);
}
var_item = p0;
{
var2 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
var3 = 1;
{
{ /* Inline kernel#Int#- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var10 = var2 - var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var11 = ((long (*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(self, var_item, var4) /* last_index_of_from on <self:SequenceRead[nullable Object]>*/;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long standard___standard__SequenceRead___index_of_from(val* self, val* p0, long p1) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__SequenceRead___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 671);
show_backtrace(1);
}
var_item = p0;
var_pos = p1;
var2 = 0;
var_p = var2;
{
var3 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
}
var_i = var3;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var4){
{
{ /* Inline kernel#Int#>= (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var8 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
var13 = ((val* (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i) /* item on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var13 == NULL) {
var14 = (var_item == NULL);
} else {
var15 = ((short int (*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var_item) /* == on <var13:nullable Object>*/;
var14 = var15;
}
var5 = var14;
} else {
var5 = var_;
}
if (var5){
{
var16 = ((long (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var_i) /* index on <var_i:IndexedIterator[nullable Object]>*/;
}
var = var16;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i) /* next on <var_i:IndexedIterator[nullable Object]>*/;
}
var17 = 1;
{
{ /* Inline kernel#Int#+ (var_p,var17) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
/* method abstract_collection#SequenceRead#last_index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long standard___standard__SequenceRead___last_index_of_from(val* self, val* p0, long p1) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__SequenceRead___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 691);
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
var7 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
}
var_i = var7;
for(;;) {
{
var8 = ((short int (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var8){
{
{ /* Inline kernel#Int#> (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var11 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
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
var16 = ((val* (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i) /* item on <var_i:IndexedIterator[nullable Object]>*/;
}
if (var16 == NULL) {
var17 = (var_item == NULL);
} else {
var18 = ((short int (*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_item) /* == on <var16:nullable Object>*/;
var17 = var18;
}
if (var17){
var_res = var_p;
} else {
}
{
((void (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i) /* next on <var_i:IndexedIterator[nullable Object]>*/;
}
var19 = 1;
{
{ /* Inline kernel#Int#+ (var_p,var19) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
/* method abstract_collection#SequenceRead#== for (self: SequenceRead[nullable Object], nullable Object): Bool */
short int standard___standard__SequenceRead___standard__kernel__Object___61d_61d(val* self, val* p0) {
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
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var_i /* var i: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa SequenceRead[nullable Object] */
cltype = type_standard__SequenceRead__nullable__standard__Object.color;
idtype = type_standard__SequenceRead__nullable__standard__Object.id;
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
var4 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
var_l = var4;
{
var5 = ((long (*)(val* self))(var_o->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_o) /* length on <var_o:nullable Object(SequenceRead[nullable Object])>*/;
}
{
{ /* Inline kernel#Int#!= (var5,var_l) on <var5:Int> */
var8 = var5 == var_l;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = 0;
var_i = var11;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var14 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var17 = var_i < var_l;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var18 = ((val* (*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:SequenceRead[nullable Object]>*/;
}
{
var19 = ((val* (*)(val* self, long p0))(var_o->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var_o, var_i) /* [] on <var_o:nullable Object(SequenceRead[nullable Object])>*/;
}
if (var18 == NULL) {
var20 = (var19 != NULL);
} else {
var21 = ((short int (*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var18, var19) /* != on <var18:nullable Object>*/;
var20 = var21;
}
if (var20){
var22 = 0;
var = var22;
goto RET_LABEL;
} else {
}
var23 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var30 = var_i + var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_i = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var31 = 1;
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#SequenceRead#hash for (self: SequenceRead[nullable Object]): Int */
long standard___standard__SequenceRead___standard__kernel__Object__hash(val* self) {
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
var2 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:SequenceRead[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var7 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:SequenceRead[nullable Object]>*/;
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:IndexedIterator[nullable Object]>*/;
}
if (var9){
{
var10 = ((val* (*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8) /* item on <var_8:IndexedIterator[nullable Object]>*/;
}
var_e = var10;
var11 = 3;
{
{ /* Inline kernel#Int#* (var_res,var11) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
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
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 418);
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
var29 = ((short int (*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, var27) /* != on <var_e:nullable Object>*/;
var28 = var29;
}
if (var28){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 743);
show_backtrace(1);
} else {
var30 = ((long (*)(val* self))(var_e->class->vft[COLOR_standard__kernel__Object__hash]))(var_e) /* hash on <var_e:nullable Object>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var30) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
((void (*)(val* self))(var_8->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8) /* next on <var_8:IndexedIterator[nullable Object]>*/;
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
/* method abstract_collection#SequenceRead#iterator_from for (self: SequenceRead[nullable Object], Int): IndexedIterator[nullable Object] */
val* standard___standard__SequenceRead___iterator_from(val* self, long p0) {
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
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self) /* iterator on <self:SequenceRead[nullable Object]>*/;
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
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
var8 = ((short int (*)(val* self))(var_res->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_res) /* is_ok on <var_res:IndexedIterator[nullable Object]>*/;
}
var2 = var8;
} else {
var2 = var_;
}
if (var2){
{
((void (*)(val* self))(var_res->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_res) /* next on <var_res:IndexedIterator[nullable Object]>*/;
}
var9 = 1;
{
{ /* Inline kernel#Int#- (var_pos,var9) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
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
/* method abstract_collection#Sequence#first= for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___first_61d(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 791);
show_backtrace(1);
}
var_item = p0;
var1 = 0;
{
((void (*)(val* self, long p0, val* p1))(self->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(self, var1, var_item) /* []= on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#add for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 822);
show_backtrace(1);
}
var_e = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(self, var_e) /* push on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#append for (self: Sequence[nullable Object], Collection[nullable Object]) */
void standard___standard__Sequence___append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 833);
show_backtrace(1);
}
var_coll = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(self, var_coll) /* add_all on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#pop for (self: Sequence[nullable Object]): nullable Object */
val* standard___standard__Sequence___pop(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "pop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 842);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#unshift for (self: Sequence[nullable Object], nullable Object) */
void standard___standard__Sequence___unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name1;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 852);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "unshift", var_class_name1);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 852);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#prepend for (self: Sequence[nullable Object], Collection[nullable Object]) */
void standard___standard__Sequence___prepend(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 860);
show_backtrace(1);
}
var_coll = p0;
var1 = 0;
{
((void (*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__abstract_collection__Sequence__insert_all]))(self, var_coll, var1) /* insert_all on <self:Sequence[nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#shift for (self: Sequence[nullable Object]): nullable Object */
val* standard___standard__Sequence___shift(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "shift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 869);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_collection#Sequence#insert for (self: Sequence[nullable Object], nullable Object, Int) */
void standard___standard__Sequence___insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
const char* var_class_name1;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 895);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert", var_class_name1);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 895);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#Sequence#insert_all for (self: Sequence[nullable Object], Collection[nullable Object], Int) */
void standard___standard__Sequence___insert_all(val* self, val* p0, long p1) {
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
short int var21 /* : Bool */;
val* var_22 /* var : Collection[nullable Object] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : Iterator[nullable Object] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_c /* var c: nullable Object */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__Sequence___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 905);
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
var_class_name8 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
var10 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:Sequence[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#< (var_index,var10) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 915);
show_backtrace(1);
}
{
var18 = ((long (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__length]))(self) /* length on <self:Sequence[nullable Object]>*/;
}
{
{ /* Inline kernel#Int#== (var_index,var18) on <var_index:Int> */
var21 = var_index == var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add_all]))(self, var_coll) /* add_all on <self:Sequence[nullable Object]>*/;
}
} else {
}
var_22 = var_coll;
{
var23 = ((val* (*)(val* self))(var_22->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_22) /* iterator on <var_22:Collection[nullable Object]>*/;
}
var_24 = var23;
for(;;) {
{
var25 = ((short int (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_24) /* is_ok on <var_24:Iterator[nullable Object]>*/;
}
if (var25){
{
var26 = ((val* (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_24) /* item on <var_24:Iterator[nullable Object]>*/;
}
var_c = var26;
{
((void (*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__abstract_collection__Sequence__insert]))(self, var_c, var_index) /* insert on <self:Sequence[nullable Object]>*/;
}
var27 = 1;
{
{ /* Inline kernel#Int#+ (var_index,var27) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var34 = var_index + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_index = var28;
{
((void (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_24) /* next on <var_24:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:Iterator[nullable Object]> */
RET_LABEL35:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection#Sequence#remove_at for (self: Sequence[nullable Object], Int) */
void standard___standard__Sequence___remove_at(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 925);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_collection#CoupleMap#iterator for (self: CoupleMap[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* standard___standard__CoupleMap___MapRead__iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : CoupleMapIterator[nullable Object, nullable Object] */;
val* var2 /* : Iterator[Couple[nullable Object, nullable Object]] */;
var1 = NEW_standard__abstract_collection__CoupleMapIterator(self->type->resolution_table->types[COLOR_standard__abstract_collection__CoupleMapIterator__standard__CoupleMap___35dK__standard__CoupleMap___35dV]);
{
var2 = standard___standard__ArrayMap___standard__abstract_collection__CoupleMap__couple_iterator(self);
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__CoupleMapIterator__iter_61d]))(var1, var2) /* iter= on <var1:CoupleMapIterator[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:CoupleMapIterator[nullable Object, nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#item for (self: CoupleMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 973);
show_backtrace(1);
}
{
var2 = ((val* (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/;
}
{
{ /* Inline abstract_collection#Couple#second (var2) on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var5 = var2->attrs[COLOR_standard__abstract_collection__Couple___second].val; /* _second on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#key for (self: CoupleMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__key(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 977);
show_backtrace(1);
}
{
var2 = ((val* (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/;
}
{
{ /* Inline abstract_collection#Couple#first (var2) on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var5 = var2->attrs[COLOR_standard__abstract_collection__Couple___first].val; /* _first on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#is_ok for (self: CoupleMapIterator[nullable Object, nullable Object]): Bool */
short int standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 979);
show_backtrace(1);
}
{
var2 = ((short int (*)(val* self))(var1->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection#CoupleMapIterator#next for (self: CoupleMapIterator[nullable Object, nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__next(val* self) {
val* var /* : Iterator[Couple[nullable Object, nullable Object]] */;
var = self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 983);
show_backtrace(1);
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[Couple[nullable Object, nullable Object]]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#iter= for (self: CoupleMapIterator[nullable Object, nullable Object], Iterator[Couple[nullable Object, nullable Object]]) */
void standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___iter_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (iter) <p0:Iterator[Couple[nullable Object, nullable Object]]> isa Iterator[Couple[K, V]] */
/* <p0:Iterator[Couple[nullable Object, nullable Object]]> isa Iterator[Couple[K, V]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Iterator__standard__Couple__standard__abstract_collection__CoupleMapIterator___35dK__standard__abstract_collection__CoupleMapIterator___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 986);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__CoupleMapIterator___iter].val = p0; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#CoupleMapIterator#init for (self: CoupleMapIterator[nullable Object, nullable Object]) */
void standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___standard__kernel__Object__init]))(self) /* init on <self:CoupleMapIterator[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method abstract_collection#Couple#first for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* standard___standard__Couple___first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__Couple___first].val; /* _first on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#first= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void standard___standard__Couple___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:nullable Object> isa F */
/* <p0:nullable Object> isa F */
type_struct = self->type->resolution_table->types[COLOR_standard__Couple___35dF];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 994);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__Couple___first].val = p0; /* _first on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#second for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* standard___standard__Couple___second(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__abstract_collection__Couple___second].val; /* _second on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection#Couple#second= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void standard___standard__Couple___second_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (second) <p0:nullable Object> isa S */
/* <p0:nullable Object> isa S */
type_struct = self->type->resolution_table->types[COLOR_standard__Couple___35dS];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 997);
show_backtrace(1);
}
self->attrs[COLOR_standard__abstract_collection__Couple___second].val = p0; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection#Couple#init for (self: Couple[nullable Object, nullable Object]) */
void standard___standard__Couple___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__Couple___standard__kernel__Object__init]))(self) /* init on <self:Couple[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
