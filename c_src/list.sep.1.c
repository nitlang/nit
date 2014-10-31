#include "list.sep.0.h"
/* method list#List#[] for (self: List[nullable Object], Int): nullable Object */
val* list__List___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var_index = p0;
{
var1 = list__List__get_node(self, var_index);
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 24);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_list__List___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#[]= for (self: List[nullable Object], Int, nullable Object) */
void list__List___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
short int is_nullable7;
const char* var_class_name8;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
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
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 26);
show_backtrace(1);
}
var_index = p0;
var_item = p1;
{
var1 = list__List__get_node(self, var_index);
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 26);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item= (var1,var_item) on <var1:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct6 = var1->type->resolution_table->types[COLOR_abstract_collection__Container_FT0];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
is_nullable7 = type_struct6->is_nullable;
if(var_item == NULL) {
var3 = is_nullable7;
} else {
if(cltype4 >= var_item->type->table_size) {
var3 = 0;
} else {
var3 = var_item->type->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
var_class_name8 = var_item == NULL ? "null" : var_item->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var1->attrs[COLOR_abstract_collection__Container___item].val = var_item; /* _item on <var1:nullable ListNode[nullable Object]> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method list#List#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_list__List___91d_93d_61d(val* self, long p0, val* p1) {
list__List___91d_93d_61d(self, p0, p1); /* Direct call list#List#[]= on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#first for (self: List[nullable Object]): nullable Object */
val* list__List__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 29);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#first for (self: Object): nullable Object */
val* VIRTUAL_list__List__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#first= for (self: List[nullable Object], nullable Object) */
void list__List__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
short int is_nullable7;
const char* var_class_name8;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 31);
show_backtrace(1);
}
var_e = p0;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 32);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item= (var1,var_e) on <var1:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (item) <var_e:nullable Object> isa E */
/* <var_e:nullable Object> isa E */
type_struct6 = var1->type->resolution_table->types[COLOR_abstract_collection__Container_FT0];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
is_nullable7 = type_struct6->is_nullable;
if(var_e == NULL) {
var3 = is_nullable7;
} else {
if(cltype4 >= var_e->type->table_size) {
var3 = 0;
} else {
var3 = var_e->type->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
var_class_name8 = var_e == NULL ? "null" : var_e->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var1->attrs[COLOR_abstract_collection__Container___item].val = var_e; /* _item on <var1:nullable ListNode[nullable Object]> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method list#List#first= for (self: Object, nullable Object) */
void VIRTUAL_list__List__first_61d(val* self, val* p0) {
list__List__first_61d(self, p0); /* Direct call list#List#first= on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#last for (self: List[nullable Object]): nullable Object */
val* list__List__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 35);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#last for (self: Object): nullable Object */
val* VIRTUAL_list__List__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#is_empty for (self: List[nullable Object]): Bool */
short int list__List__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var2) on <var1:nullable ListNode[nullable Object]> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
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
/* method list#List#is_empty for (self: Object): Bool */
short int VIRTUAL_list__List__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__List__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#length for (self: List[nullable Object]): Int */
long list__List__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_t /* var t: nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var15 /* : nullable ListNode[nullable Object] */;
val* var17 /* : nullable ListNode[nullable Object] */;
var1 = 0;
var_l = var1;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_t = var2;
for(;;) {
var3 = NULL;
if (var_t == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,var3) on <var_t:nullable ListNode[nullable Object]> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_other) /* == on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var10 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var10) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var14 = var_l + var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_l = var11;
{
{ /* Inline list#ListNode#next (var_t) on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var17 = var_t->attrs[COLOR_list__ListNode___next].val; /* _next on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_t = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#length for (self: Object): Int */
long VIRTUAL_list__List__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = list__List__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#has for (self: List[nullable Object], nullable Object): Bool */
short int list__List__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 57);
show_backtrace(1);
}
var_e = p0;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var3 = list__List__search_node_after(self, var_e, var2);
}
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var3,var4) on <var3:nullable ListNode[nullable Object]> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var_other) /* == on <var3:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_list__List__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__List__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#push for (self: List[nullable Object], nullable Object) */
void list__List__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable ListNode[nullable Object] */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const struct type* type_struct15;
const char* var_class_name16;
val* var17 /* : nullable ListNode[nullable Object] */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const struct type* type_struct22;
const char* var_class_name23;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 95);
show_backtrace(1);
}
var_e = p0;
var1 = NEW_list__ListNode(self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0]);
{
list__ListNode__init(var1, var_e); /* Direct call list#ListNode#init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var3 = NULL;
if (var2 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var2,var3) on <var2:nullable ListNode[nullable Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var2,var_other) on <var2:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var9 = var2 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
self->attrs[COLOR_list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
} else {
var10 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 102);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next= (var10,var_node) on <var10:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct15 = var10->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype13 = type_struct15->color;
idtype14 = type_struct15->id;
if(cltype13 >= var_node->type->table_size) {
var12 = 0;
} else {
var12 = var_node->type->type_table[cltype13] == idtype14;
}
if (unlikely(!var12)) {
var_class_name16 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var10->attrs[COLOR_list__ListNode___next].val = var_node; /* _next on <var10:nullable ListNode[nullable Object]> */
RET_LABEL11:(void)0;
}
}
var17 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#prev= (var_node,var17) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var17:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var17:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct22 = var_node->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype20 = type_struct22->color;
idtype21 = type_struct22->id;
if(var17 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var17->type->table_size) {
var19 = 0;
} else {
var19 = var17->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name23 = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var_node->attrs[COLOR_list__ListNode___prev].val = var17; /* _prev on <var_node:ListNode[nullable Object]> */
RET_LABEL18:(void)0;
}
}
}
self->attrs[COLOR_list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#push for (self: Object, nullable Object) */
void VIRTUAL_list__List__push(val* self, val* p0) {
list__List__push(self, p0); /* Direct call list#List#push on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#unshift for (self: List[nullable Object], nullable Object) */
void list__List__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable ListNode[nullable Object] */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const struct type* type_struct15;
const char* var_class_name16;
val* var17 /* : nullable ListNode[nullable Object] */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const struct type* type_struct22;
const char* var_class_name23;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 108);
show_backtrace(1);
}
var_e = p0;
var1 = NEW_list__ListNode(self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0]);
{
list__ListNode__init(var1, var_e); /* Direct call list#ListNode#init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var3 = NULL;
if (var2 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var2,var3) on <var2:nullable ListNode[nullable Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var2,var_other) on <var2:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var9 = var2 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
self->attrs[COLOR_list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
} else {
var10 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#next= (var_node,var10) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var10:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var10:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct15 = var_node->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype13 = type_struct15->color;
idtype14 = type_struct15->id;
if(var10 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var10->type->table_size) {
var12 = 0;
} else {
var12 = var10->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
var_class_name16 = var10 == NULL ? "null" : var10->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var_node->attrs[COLOR_list__ListNode___next].val = var10; /* _next on <var_node:ListNode[nullable Object]> */
RET_LABEL11:(void)0;
}
}
var17 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 116);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#prev= (var17,var_node) on <var17:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct22 = var17->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype20 = type_struct22->color;
idtype21 = type_struct22->id;
if(cltype20 >= var_node->type->table_size) {
var19 = 0;
} else {
var19 = var_node->type->type_table[cltype20] == idtype21;
}
if (unlikely(!var19)) {
var_class_name23 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var17->attrs[COLOR_list__ListNode___prev].val = var_node; /* _prev on <var17:nullable ListNode[nullable Object]> */
RET_LABEL18:(void)0;
}
}
}
self->attrs[COLOR_list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#unshift for (self: Object, nullable Object) */
void VIRTUAL_list__List__unshift(val* self, val* p0) {
list__List__unshift(self, p0); /* Direct call list#List#unshift on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#insert for (self: List[nullable Object], nullable Object, Int) */
void list__List__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
long var_i /* var i: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ListNode[nullable Object] */;
val* var_nnode /* var nnode: ListNode[nullable Object] */;
val* var10 /* : nullable ListNode[nullable Object] */;
val* var12 /* : nullable ListNode[nullable Object] */;
val* var_next /* var next: nullable ListNode[nullable Object] */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const struct type* type_struct30;
const char* var_class_name31;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const struct type* type_struct36;
const char* var_class_name37;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const struct type* type_struct42;
const char* var_class_name43;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 121);
show_backtrace(1);
}
var_e = p0;
var_i = p1;
{
var1 = list__List__get_node(self, var_i);
}
var_node = var1;
var2 = NULL;
if (var_node == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var2) on <var_node:nullable ListNode[nullable Object]> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var_node == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
list__List__push(self, var_e); /* Direct call list#List#push on <self:List[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var9 = NEW_list__ListNode(self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0]);
{
list__ListNode__init(var9, var_e); /* Direct call list#ListNode#init on <var9:ListNode[nullable Object]>*/
}
var_nnode = var9;
{
{ /* Inline list#ListNode#next (var_node) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var12 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_next = var10;
var13 = NULL;
if (var_next == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_next,var13) on <var_next:nullable ListNode[nullable Object]> */
var_other = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_next,var_other) on <var_next:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var19 = var_next == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
self->attrs[COLOR_list__List___tail].val = var_nnode; /* _tail on <self:List[nullable Object]> */
} else {
{
{ /* Inline list#ListNode#prev= (var_next,var_nnode) on <var_next:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (prev) <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct24 = var_next->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype22 = type_struct24->color;
idtype23 = type_struct24->id;
if(cltype22 >= var_nnode->type->table_size) {
var21 = 0;
} else {
var21 = var_nnode->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name25 = var_nnode == NULL ? "null" : var_nnode->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var_next->attrs[COLOR_list__ListNode___prev].val = var_nnode; /* _prev on <var_next:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL20:(void)0;
}
}
}
{
{ /* Inline list#ListNode#prev= (var_nnode,var_node) on <var_nnode:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> isa nullable ListNode[E] */
/* <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> isa nullable ListNode[E] */
type_struct30 = var_nnode->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype28 = type_struct30->color;
idtype29 = type_struct30->id;
if(cltype28 >= var_node->type->table_size) {
var27 = 0;
} else {
var27 = var_node->type->type_table[cltype28] == idtype29;
}
if (unlikely(!var27)) {
var_class_name31 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var_nnode->attrs[COLOR_list__ListNode___prev].val = var_node; /* _prev on <var_nnode:ListNode[nullable Object]> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline list#ListNode#next= (var_nnode,var_next) on <var_nnode:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var_next:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_next:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct36 = var_nnode->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype34 = type_struct36->color;
idtype35 = type_struct36->id;
if(var_next == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_next->type->table_size) {
var33 = 0;
} else {
var33 = var_next->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
var_class_name37 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var_nnode->attrs[COLOR_list__ListNode___next].val = var_next; /* _next on <var_nnode:ListNode[nullable Object]> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline list#ListNode#next= (var_node,var_nnode) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct42 = var_node->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype40 = type_struct42->color;
idtype41 = type_struct42->id;
if(cltype40 >= var_nnode->type->table_size) {
var39 = 0;
} else {
var39 = var_nnode->type->type_table[cltype40] == idtype41;
}
if (unlikely(!var39)) {
var_class_name43 = var_nnode == NULL ? "null" : var_nnode->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var_node->attrs[COLOR_list__ListNode___next].val = var_nnode; /* _next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL38:(void)0;
}
}
RET_LABEL:;
}
/* method list#List#insert for (self: Object, nullable Object, Int) */
void VIRTUAL_list__List__insert(val* self, val* p0, long p1) {
list__List__insert(self, p0, p1); /* Direct call list#List#insert on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#pop for (self: List[nullable Object]): nullable Object */
val* list__List__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : null */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable ListNode[nullable Object] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : null */;
val* var17 /* : nullable ListNode[nullable Object] */;
val* var18 /* : null */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable Object */;
val* var26 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var_node = var1;
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 162);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#prev (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var4 = var_node->attrs[COLOR_list__ListNode___prev].val; /* _prev on <var_node:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_list__List___tail].val = var2; /* _tail on <self:List[nullable Object]> */
var5 = NULL;
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 163);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#prev= (var_node,var5) on <var_node:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var5:null> isa nullable ListNode[E] */
/* <var5:null> isa nullable ListNode[E] */
var7 = 1; /* easy <var5:null> isa nullable ListNode[E]*/
if (unlikely(!var7)) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var_node->attrs[COLOR_list__ListNode___prev].val = var5; /* _prev on <var_node:nullable ListNode[nullable Object]> */
RET_LABEL6:(void)0;
}
}
var8 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var9 = NULL;
if (var8 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var8,var9) on <var8:nullable ListNode[nullable Object]> */
var_other = var9;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var8 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var16 = NULL;
self->attrs[COLOR_list__List___head].val = var16; /* _head on <self:List[nullable Object]> */
} else {
var17 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var18 = NULL;
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 167);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next= (var17,var18) on <var17:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var18:null> isa nullable ListNode[E] */
/* <var18:null> isa nullable ListNode[E] */
var20 = 1; /* easy <var18:null> isa nullable ListNode[E]*/
if (unlikely(!var20)) {
var_class_name23 = var18 == NULL ? "null" : var18->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var17->attrs[COLOR_list__ListNode___next].val = var18; /* _next on <var17:nullable ListNode[nullable Object]> */
RET_LABEL19:(void)0;
}
}
}
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 169);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var26 = var_node->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var_node:nullable ListNode[nullable Object]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#pop for (self: Object): nullable Object */
val* VIRTUAL_list__List__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#shift for (self: List[nullable Object]): nullable Object */
val* list__List__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : null */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable ListNode[nullable Object] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : null */;
val* var17 /* : nullable ListNode[nullable Object] */;
val* var18 /* : null */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : nullable Object */;
val* var26 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var1;
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 176);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var4 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_list__List___head].val = var2; /* _head on <self:List[nullable Object]> */
var5 = NULL;
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 177);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next= (var_node,var5) on <var_node:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var5:null> isa nullable ListNode[E] */
/* <var5:null> isa nullable ListNode[E] */
var7 = 1; /* easy <var5:null> isa nullable ListNode[E]*/
if (unlikely(!var7)) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var_node->attrs[COLOR_list__ListNode___next].val = var5; /* _next on <var_node:nullable ListNode[nullable Object]> */
RET_LABEL6:(void)0;
}
}
var8 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var9 = NULL;
if (var8 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var8,var9) on <var8:nullable ListNode[nullable Object]> */
var_other = var9;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var8 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var16 = NULL;
self->attrs[COLOR_list__List___tail].val = var16; /* _tail on <self:List[nullable Object]> */
} else {
var17 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var18 = NULL;
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 181);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#prev= (var17,var18) on <var17:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var18:null> isa nullable ListNode[E] */
/* <var18:null> isa nullable ListNode[E] */
var20 = 1; /* easy <var18:null> isa nullable ListNode[E]*/
if (unlikely(!var20)) {
var_class_name23 = var18 == NULL ? "null" : var18->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var17->attrs[COLOR_list__ListNode___prev].val = var18; /* _prev on <var17:nullable ListNode[nullable Object]> */
RET_LABEL19:(void)0;
}
}
}
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 183);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var26 = var_node->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var_node:nullable ListNode[nullable Object]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#shift for (self: Object): nullable Object */
val* VIRTUAL_list__List__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__shift(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#remove for (self: List[nullable Object], nullable Object) */
void list__List__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 186);
show_backtrace(1);
}
var_e = p0;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var2 = list__List__search_node_after(self, var_e, var1);
}
var_node = var2;
var3 = NULL;
if (var_node == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var3) on <var_node:nullable ListNode[nullable Object]> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
list__List__remove_node(self, var_node); /* Direct call list#List#remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list#List#remove for (self: Object, nullable Object) */
void VIRTUAL_list__List__remove(val* self, val* p0) {
list__List__remove(self, p0); /* Direct call list#List#remove on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#remove_at for (self: List[nullable Object], Int) */
void list__List__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_i = p0;
{
var = list__List__get_node(self, var_i);
}
var_node = var;
var1 = NULL;
if (var_node == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var1) on <var_node:nullable ListNode[nullable Object]> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
list__List__remove_node(self, var_node); /* Direct call list#List#remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list#List#remove_at for (self: Object, Int) */
void VIRTUAL_list__List__remove_at(val* self, long p0) {
list__List__remove_at(self, p0); /* Direct call list#List#remove_at on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#clear for (self: List[nullable Object]) */
void list__List__clear(val* self) {
val* var /* : null */;
val* var1 /* : null */;
var = NULL;
self->attrs[COLOR_list__List___head].val = var; /* _head on <self:List[nullable Object]> */
var1 = NULL;
self->attrs[COLOR_list__List___tail].val = var1; /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#clear for (self: Object) */
void VIRTUAL_list__List__clear(val* self) {
list__List__clear(self); /* Direct call list#List#clear on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#List#iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* list__List__iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = NEW_list__ListIterator(self->type->resolution_table->types[COLOR_list__ListIteratorlist__List_FT0]);
{
list__ListIterator__init(var1, self); /* Direct call list#ListIterator#init on <var1:ListIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_list__List__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = list__List__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#init for (self: List[nullable Object]) */
void list__List__init(val* self) {
RET_LABEL:;
}
/* method list#List#init for (self: Object) */
void VIRTUAL_list__List__init(val* self) {
{ /* Inline list#List#init (self) on <self:Object(List[nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method list#List#get_node for (self: List[nullable Object], Int): nullable ListNode[nullable Object] */
val* list__List__get_node(val* self, long p0) {
val* var /* : nullable ListNode[nullable Object] */;
long var_i /* var i: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
val* var24 /* : nullable ListNode[nullable Object] */;
val* var26 /* : nullable ListNode[nullable Object] */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
var_i = p0;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_n = var1;
var2 = 0;
{
{ /* Inline kernel#Int#< (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var6 = var_i < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
}
for(;;) {
var9 = NULL;
if (var_n == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var9) on <var_n:nullable ListNode[nullable Object]> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n->class->vft[COLOR_kernel__Object___61d_61d]))(var_n, var_other) /* == on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
var_ = var10;
if (var10){
var16 = 0;
{
{ /* Inline kernel#Int#> (var_i,var16) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var23 = var_i > var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var8 = var17;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline list#ListNode#next (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var26 = var_n->attrs[COLOR_list__ListNode___next].val; /* _next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_n = var24;
var27 = 1;
{
{ /* Inline kernel#Int#- (var_i,var27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var34 = var_i - var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_i = var28;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#get_node for (self: Object, Int): nullable ListNode[nullable Object] */
val* VIRTUAL_list__List__get_node(val* self, long p0) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = list__List__get_node(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#search_node_after for (self: List[nullable Object], nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* list__List__search_node_after(val* self, val* p0, val* p1) {
val* var /* : nullable ListNode[nullable Object] */;
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
const char* var_class_name6;
val* var_e /* var e: nullable Object */;
val* var_after /* var after: nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : nullable Object */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable ListNode[nullable Object] */;
val* var22 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_list__List_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 234);
show_backtrace(1);
}
/* Covariant cast for argument 1 (after) <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct5 = self->type->resolution_table->types[COLOR_nullable_list__ListNodelist__List_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(p1 == NULL) {
var2 = 1;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 234);
show_backtrace(1);
}
var_e = p0;
var_after = p1;
var_n = var_after;
for(;;) {
var8 = NULL;
if (var_n == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var8) on <var_n:nullable ListNode[nullable Object]> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n->class->vft[COLOR_kernel__Object___61d_61d]))(var_n, var_other) /* == on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
{
{ /* Inline abstract_collection#Container#item (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var17 = var_n->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
var18 = (var_e != NULL);
} else {
var19 = ((short int (*)(val*, val*))(var15->class->vft[COLOR_kernel__Object___33d_61d]))(var15, var_e) /* != on <var15:nullable Object>*/;
var18 = var19;
}
var7 = var18;
} else {
var7 = var_;
}
if (var7){
{
{ /* Inline list#ListNode#next (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var22 = var_n->attrs[COLOR_list__ListNode___next].val; /* _next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_n = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#search_node_after for (self: Object, nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* VIRTUAL_list__List__search_node_after(val* self, val* p0, val* p1) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = list__List__search_node_after(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#remove_node for (self: List[nullable Object], ListNode[nullable Object]) */
void list__List__remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_node /* var node: ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable ListNode[nullable Object] */;
val* var13 /* : nullable ListNode[nullable Object] */;
val* var14 /* : nullable ListNode[nullable Object] */;
val* var16 /* : nullable ListNode[nullable Object] */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : null */;
val* var25 /* : nullable ListNode[nullable Object] */;
val* var27 /* : nullable ListNode[nullable Object] */;
val* var28 /* : null */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
val* var34 /* : nullable ListNode[nullable Object] */;
val* var36 /* : nullable ListNode[nullable Object] */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : nullable ListNode[nullable Object] */;
val* var46 /* : nullable ListNode[nullable Object] */;
val* var47 /* : nullable ListNode[nullable Object] */;
val* var49 /* : nullable ListNode[nullable Object] */;
val* var50 /* : null */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
val* var56 /* : nullable ListNode[nullable Object] */;
val* var58 /* : nullable ListNode[nullable Object] */;
val* var59 /* : nullable ListNode[nullable Object] */;
val* var61 /* : nullable ListNode[nullable Object] */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const struct type* type_struct66;
const char* var_class_name67;
val* var68 /* : nullable ListNode[nullable Object] */;
val* var70 /* : nullable ListNode[nullable Object] */;
val* var71 /* : nullable ListNode[nullable Object] */;
val* var73 /* : nullable ListNode[nullable Object] */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const struct type* type_struct78;
const char* var_class_name79;
/* Covariant cast for argument 0 (node) <p0:ListNode[nullable Object]> isa ListNode[E] */
/* <p0:ListNode[nullable Object]> isa ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 242);
show_backtrace(1);
}
var_node = p0;
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var3 = var_node->attrs[COLOR_list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var4) on <var1:nullable ListNode[nullable Object]> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var10 = var1 == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var13 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_list__List___head].val = var11; /* _head on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var16 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = NULL;
if (var14 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var14,var17) on <var14:nullable ListNode[nullable Object]> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var14,var_other) on <var14:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var23 = var14 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
var24 = NULL;
self->attrs[COLOR_list__List___tail].val = var24; /* _tail on <self:List[nullable Object]> */
} else {
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var27 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = NULL;
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 250);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#prev= (var25,var28) on <var25:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var28:null> isa nullable ListNode[E] */
/* <var28:null> isa nullable ListNode[E] */
var30 = 1; /* easy <var28:null> isa nullable ListNode[E]*/
if (unlikely(!var30)) {
var_class_name33 = var28 == NULL ? "null" : var28->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var25->attrs[COLOR_list__ListNode___prev].val = var28; /* _prev on <var25:nullable ListNode[nullable Object]> */
RET_LABEL29:(void)0;
}
}
}
} else {
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var36 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = NULL;
if (var34 == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var34,var37) on <var34:nullable ListNode[nullable Object]> */
var_other = var37;
{
{ /* Inline kernel#Object#is_same_instance (var34,var_other) on <var34:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var43 = var34 == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var46 = var_node->attrs[COLOR_list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
self->attrs[COLOR_list__List___tail].val = var44; /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var49 = var_node->attrs[COLOR_list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var50 = NULL;
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 254);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next= (var47,var50) on <var47:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var50:null> isa nullable ListNode[E] */
/* <var50:null> isa nullable ListNode[E] */
var52 = 1; /* easy <var50:null> isa nullable ListNode[E]*/
if (unlikely(!var52)) {
var_class_name55 = var50 == NULL ? "null" : var50->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var47->attrs[COLOR_list__ListNode___next].val = var50; /* _next on <var47:nullable ListNode[nullable Object]> */
RET_LABEL51:(void)0;
}
}
} else {
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var58 = var_node->attrs[COLOR_list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var61 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 256);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next= (var56,var59) on <var56:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var59:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var59:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct66 = var56->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype64 = type_struct66->color;
idtype65 = type_struct66->id;
if(var59 == NULL) {
var63 = 1;
} else {
if(cltype64 >= var59->type->table_size) {
var63 = 0;
} else {
var63 = var59->type->type_table[cltype64] == idtype65;
}
}
if (unlikely(!var63)) {
var_class_name67 = var59 == NULL ? "null" : var59->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var56->attrs[COLOR_list__ListNode___next].val = var59; /* _next on <var56:nullable ListNode[nullable Object]> */
RET_LABEL62:(void)0;
}
}
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var70 = var_node->attrs[COLOR_list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var73 = var_node->attrs[COLOR_list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var68 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 257);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#prev= (var68,var71) on <var68:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var71:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var71:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct78 = var68->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype76 = type_struct78->color;
idtype77 = type_struct78->id;
if(var71 == NULL) {
var75 = 1;
} else {
if(cltype76 >= var71->type->table_size) {
var75 = 0;
} else {
var75 = var71->type->type_table[cltype76] == idtype77;
}
}
if (unlikely(!var75)) {
var_class_name79 = var71 == NULL ? "null" : var71->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
var68->attrs[COLOR_list__ListNode___prev].val = var71; /* _prev on <var68:nullable ListNode[nullable Object]> */
RET_LABEL74:(void)0;
}
}
}
}
RET_LABEL:;
}
/* method list#List#remove_node for (self: Object, ListNode[nullable Object]) */
void VIRTUAL_list__List__remove_node(val* self, val* p0) {
list__List__remove_node(self, p0); /* Direct call list#List#remove_node on <self:Object(List[nullable Object])>*/
RET_LABEL:;
}
/* method list#ListIterator#item for (self: ListIterator[nullable Object]): nullable Object */
val* list__ListIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 279);
show_backtrace(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#ListIterator#item for (self: Object): nullable Object */
val* VIRTUAL_list__ListIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__ListIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#is_ok for (self: ListIterator[nullable Object]): Bool */
short int list__ListIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var1 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var2) on <var1:nullable ListNode[nullable Object]> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var9 = !var3;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#ListIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_list__ListIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__ListIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#next for (self: ListIterator[nullable Object]) */
void list__ListIterator__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : ListIterator[nullable Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
var = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 287);
show_backtrace(1);
} else {
{ /* Inline list#ListNode#next (var) on <var:nullable ListNode[nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
var3 = var->attrs[COLOR_list__ListNode___next].val; /* _next on <var:nullable ListNode[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var_ = self;
var4 = var_->attrs[COLOR_list__ListIterator___index].l; /* _index on <var_:ListIterator[nullable Object]> */
var5 = 1;
{
{ /* Inline kernel#Int#+ (var4,var5) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var9 = var4 + var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_->attrs[COLOR_list__ListIterator___index].l = var6; /* _index on <var_:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#next for (self: Object) */
void VIRTUAL_list__ListIterator__next(val* self) {
list__ListIterator__next(self); /* Direct call list#ListIterator#next on <self:Object(ListIterator[nullable Object])>*/
RET_LABEL:;
}
/* method list#ListIterator#init for (self: ListIterator[nullable Object], List[nullable Object]) */
void list__ListIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_list /* var list: List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
long var2 /* : Int */;
/* Covariant cast for argument 0 (list) <p0:List[nullable Object]> isa List[E] */
/* <p0:List[nullable Object]> isa List[E] */
type_struct = self->type->resolution_table->types[COLOR_list__Listlist__ListIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "List[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 291);
show_backtrace(1);
}
var_list = p0;
self->attrs[COLOR_list__ListIterator___list].val = var_list; /* _list on <self:ListIterator[nullable Object]> */
var1 = var_list->attrs[COLOR_list__List___head].val; /* _head on <var_list:List[nullable Object]> */
self->attrs[COLOR_list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var2 = 0;
self->attrs[COLOR_list__ListIterator___index].l = var2; /* _index on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#init for (self: Object, List[nullable Object]) */
void VIRTUAL_list__ListIterator__init(val* self, val* p0) {
list__ListIterator__init(self, p0); /* Direct call list#ListIterator#init on <self:Object(ListIterator[nullable Object])>*/
RET_LABEL:;
}
/* method list#ListIterator#index for (self: ListIterator[nullable Object]): Int */
long list__ListIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_list__ListIterator___index].l; /* _index on <self:ListIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#index for (self: Object): Int */
long VIRTUAL_list__ListIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline list#ListIterator#index (self) on <self:Object(ListIterator[nullable Object])> */
var3 = self->attrs[COLOR_list__ListIterator___index].l; /* _index on <self:Object(ListIterator[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#init for (self: ListNode[nullable Object], nullable Object) */
void list__ListNode__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_i /* var i: nullable Object */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
/* Covariant cast for argument 0 (i) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_list__ListNode_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 341);
show_backtrace(1);
}
{
abstract_collection__Container__init(self, p0); /* Direct call abstract_collection#Container#init on <self:ListNode[nullable Object]>*/
}
var_i = p0;
{
{ /* Inline abstract_collection#Container#item= (self,var_i) on <self:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (item) <var_i:nullable Object> isa E */
/* <var_i:nullable Object> isa E */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Container_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(var_i == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= var_i->type->table_size) {
var2 = 0;
} else {
var2 = var_i->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/abstract_collection.nit", 200);
show_backtrace(1);
}
self->attrs[COLOR_abstract_collection__Container___item].val = var_i; /* _item on <self:ListNode[nullable Object]> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method list#ListNode#init for (self: Object, nullable Object) */
void VIRTUAL_list__ListNode__init(val* self, val* p0) {
list__ListNode__init(self, p0); /* Direct call list#ListNode#init on <self:Object(ListNode[nullable Object])>*/
RET_LABEL:;
}
/* method list#ListNode#next for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* list__ListNode__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_list__ListNode___next].val; /* _next on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#next for (self: Object): nullable ListNode[nullable Object] */
val* VIRTUAL_list__ListNode__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
{ /* Inline list#ListNode#next (self) on <self:Object(ListNode[nullable Object])> */
var3 = self->attrs[COLOR_list__ListNode___next].val; /* _next on <self:Object(ListNode[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#next= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void list__ListNode__next_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
self->attrs[COLOR_list__ListNode___next].val = p0; /* _next on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list#ListNode#next= for (self: Object, nullable ListNode[nullable Object]) */
void VIRTUAL_list__ListNode__next_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline list#ListNode#next= (self,p0) on <self:Object(ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 346);
show_backtrace(1);
}
self->attrs[COLOR_list__ListNode___next].val = p0; /* _next on <self:Object(ListNode[nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method list#ListNode#prev for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* list__ListNode__prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_list__ListNode___prev].val; /* _prev on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#prev for (self: Object): nullable ListNode[nullable Object] */
val* VIRTUAL_list__ListNode__prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
{ /* Inline list#ListNode#prev (self) on <self:Object(ListNode[nullable Object])> */
var3 = self->attrs[COLOR_list__ListNode___prev].val; /* _prev on <self:Object(ListNode[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#prev= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void list__ListNode__prev_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
self->attrs[COLOR_list__ListNode___prev].val = p0; /* _prev on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list#ListNode#prev= for (self: Object, nullable ListNode[nullable Object]) */
void VIRTUAL_list__ListNode__prev_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline list#ListNode#prev= (self,p0) on <self:Object(ListNode[nullable Object])> */
/* Covariant cast for argument 0 (prev) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable_list__ListNodelist__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/list.nit", 349);
show_backtrace(1);
}
self->attrs[COLOR_list__ListNode___prev].val = p0; /* _prev on <self:Object(ListNode[nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
