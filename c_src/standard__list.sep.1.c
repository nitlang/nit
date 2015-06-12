#include "standard__list.sep.0.h"
/* method list#List#[] for (self: List[nullable Object], Int): nullable Object */
val* standard___standard__List___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var_index = p0;
{
var1 = standard___standard__List___get_node(self, var_index);
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 24);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var4 = var1->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#[]= for (self: List[nullable Object], Int, nullable Object) */
void standard___standard__List___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 26);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
var1 = standard___standard__List___get_node(self, var_index);
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 26);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item= (var1,var_item) on <var1:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct6 = var1->type->resolution_table->types[COLOR_standard__Container___35dE];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
is_nullable7 = type_struct6->is_nullable;
if(var_item == NULL) {
var3 = is_nullable7;
} else {
if(cltype4 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
var_class_name8 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var1->attrs[COLOR_standard__abstract_collection__Container___item].val = var_item; /* _item on <var1:nullable ListNode[nullable Object]> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method list#List#first for (self: List[nullable Object]): nullable Object */
val* standard___standard__List___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 29);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var4 = var1->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#first= for (self: List[nullable Object], nullable Object) */
void standard___standard__List___standard__abstract_collection__Sequence__first_61d(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 31);
fatal_exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 32);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item= (var1,var_e) on <var1:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (item) <var_e:nullable Object> isa E */
/* <var_e:nullable Object> isa E */
type_struct6 = var1->type->resolution_table->types[COLOR_standard__Container___35dE];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
is_nullable7 = type_struct6->is_nullable;
if(var_e == NULL) {
var3 = is_nullable7;
} else {
if(cltype4 >= (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
var_class_name8 = var_e == NULL ? "null" : (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var1->attrs[COLOR_standard__abstract_collection__Container___item].val = var_e; /* _item on <var1:nullable ListNode[nullable Object]> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method list#List#last for (self: List[nullable Object]): nullable Object */
val* standard___standard__List___standard__abstract_collection__SequenceRead__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 35);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var4 = var1->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#is_empty for (self: List[nullable Object]): Bool */
short int standard___standard__List___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var7 = var1 == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#length for (self: List[nullable Object]): Int */
long standard___standard__List___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var_l /* var l: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_t /* var t: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
val* var11 /* : nullable ListNode[nullable Object] */;
val* var13 /* : nullable ListNode[nullable Object] */;
var_l = 0l;
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_t = var1;
for(;;) {
if (var_t == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,((val*)NULL)) on <var_t:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var_other); /* == on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var10 = var_l + 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_l = var7;
{
{ /* Inline list#ListNode#next (var_t) on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var13 = var_t->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_t = var11;
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
/* method list#List#has for (self: List[nullable Object], nullable Object): Bool */
short int standard___standard__List___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_e = p0;
/* <var_e:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_e == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = var_e == NULL ? "null" : (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 58);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var3 = standard___standard__List___search_node_after(self, var_e, var2);
}
if (var3 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var3,((val*)NULL)) on <var3:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_other); /* == on <var3:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#push for (self: List[nullable Object], nullable Object) */
void standard___standard__List___standard__abstract_collection__Sequence__push(val* self, val* p0) {
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable ListNode[nullable Object] */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
const char* var_class_name15;
val* var16 /* : nullable ListNode[nullable Object] */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
const char* var_class_name22;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 95);
fatal_exit(1);
}
var_e = p0;
var1 = NEW_standard__list__ListNode(self->type->resolution_table->types[COLOR_standard__list__ListNode__standard__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Container__item_61d]))(var1, var_e); /* item= on <var1:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var2 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var2,((val*)NULL)) on <var2:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var2,var_other) on <var2:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var2 == var_other;
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
self->attrs[COLOR_standard__list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
} else {
var9 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 102);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next= (var9,var_node) on <var9:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct14 = var9->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
if(cltype12 >= var_node->type->table_size) {
var11 = 0;
} else {
var11 = var_node->type->type_table[cltype12] == idtype13;
}
if (unlikely(!var11)) {
var_class_name15 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var9->attrs[COLOR_standard__list__ListNode___next].val = var_node; /* _next on <var9:nullable ListNode[nullable Object]> */
RET_LABEL10:(void)0;
}
}
var16 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#prev= (var_node,var16) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var16:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var16:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct21 = var_node->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
if(var16 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var16->type->table_size) {
var18 = 0;
} else {
var18 = var16->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name22 = var16 == NULL ? "null" : var16->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var_node->attrs[COLOR_standard__list__ListNode___prev].val = var16; /* _prev on <var_node:ListNode[nullable Object]> */
RET_LABEL17:(void)0;
}
}
}
self->attrs[COLOR_standard__list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#unshift for (self: List[nullable Object], nullable Object) */
void standard___standard__List___standard__abstract_collection__Sequence__unshift(val* self, val* p0) {
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable ListNode[nullable Object] */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
const char* var_class_name15;
val* var16 /* : nullable ListNode[nullable Object] */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
const char* var_class_name22;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 108);
fatal_exit(1);
}
var_e = p0;
var1 = NEW_standard__list__ListNode(self->type->resolution_table->types[COLOR_standard__list__ListNode__standard__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__Container__item_61d]))(var1, var_e); /* item= on <var1:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var2 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var2,((val*)NULL)) on <var2:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var2,var_other) on <var2:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var2 == var_other;
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
self->attrs[COLOR_standard__list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
} else {
var9 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#next= (var_node,var9) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var9:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var9:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct14 = var_node->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
if(var9 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var9->type->table_size) {
var11 = 0;
} else {
var11 = var9->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name15 = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var_node->attrs[COLOR_standard__list__ListNode___next].val = var9; /* _next on <var_node:ListNode[nullable Object]> */
RET_LABEL10:(void)0;
}
}
var16 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 116);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#prev= (var16,var_node) on <var16:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct21 = var16->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
if(cltype19 >= var_node->type->table_size) {
var18 = 0;
} else {
var18 = var_node->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
var_class_name22 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var16->attrs[COLOR_standard__list__ListNode___prev].val = var_node; /* _prev on <var16:nullable ListNode[nullable Object]> */
RET_LABEL17:(void)0;
}
}
}
self->attrs[COLOR_standard__list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#insert for (self: List[nullable Object], nullable Object, Int) */
void standard___standard__List___standard__abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
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
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 121);
fatal_exit(1);
}
var_e = p0;
var_i = p1;
{
var1 = standard___standard__List___get_node(self, var_i);
}
var_node = var1;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var7 = var_node == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
standard___standard__List___standard__abstract_collection__Sequence__push(self, var_e); /* Direct call list#List#push on <self:List[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
standard___standard__List___insert_before(self, var_e, var_node); /* Direct call list#List#insert_before on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list#List#pop for (self: List[nullable Object]): nullable Object */
val* standard___standard__List___standard__abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var4 /* : nullable ListNode[nullable Object] */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable ListNode[nullable Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable ListNode[nullable Object] */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var_node = var1;
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 153);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#prev (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var4 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_standard__list__List___tail].val = var2; /* _tail on <self:List[nullable Object]> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 154);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#prev= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var6 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var6)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var_node->attrs[COLOR_standard__list__ListNode___prev].val = ((val*)NULL); /* _prev on <var_node:nullable ListNode[nullable Object]> */
RET_LABEL5:(void)0;
}
}
var7 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var7 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var7,((val*)NULL)) on <var7:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
self->attrs[COLOR_standard__list__List___head].val = ((val*)NULL); /* _head on <self:List[nullable Object]> */
} else {
var14 = self->attrs[COLOR_standard__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 158);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next= (var14,((val*)NULL)) on <var14:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var16 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var16)) {
var_class_name19 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var14->attrs[COLOR_standard__list__ListNode___next].val = ((val*)NULL); /* _next on <var14:nullable ListNode[nullable Object]> */
RET_LABEL15:(void)0;
}
}
}
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 160);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var22 = var_node->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var_node:nullable ListNode[nullable Object]> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#shift for (self: List[nullable Object]): nullable Object */
val* standard___standard__List___standard__abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var4 /* : nullable ListNode[nullable Object] */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable ListNode[nullable Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable ListNode[nullable Object] */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var1;
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 167);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var4 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_standard__list__List___head].val = var2; /* _head on <self:List[nullable Object]> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 168);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var6 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var6)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var_node->attrs[COLOR_standard__list__ListNode___next].val = ((val*)NULL); /* _next on <var_node:nullable ListNode[nullable Object]> */
RET_LABEL5:(void)0;
}
}
var7 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var7 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var7,((val*)NULL)) on <var7:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
self->attrs[COLOR_standard__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
} else {
var14 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 172);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#prev= (var14,((val*)NULL)) on <var14:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var16 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var16)) {
var_class_name19 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var14->attrs[COLOR_standard__list__ListNode___prev].val = ((val*)NULL); /* _prev on <var14:nullable ListNode[nullable Object]> */
RET_LABEL15:(void)0;
}
}
}
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 174);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item (var_node) on <var_node:nullable ListNode[nullable Object]> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var22 = var_node->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var_node:nullable ListNode[nullable Object]> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#remove for (self: List[nullable Object], nullable Object) */
void standard___standard__List___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_e /* var e: nullable Object */;
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_e = p0;
/* <var_e:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_e == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->table_size) {
var = 0;
} else {
var = (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = var_e == NULL ? "null" : (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 179);
fatal_exit(1);
}
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var2 = standard___standard__List___search_node_after(self, var_e, var1);
}
var_node = var2;
if (var_node == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
standard___standard__List___remove_node(self, var_node); /* Direct call list#List#remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list#List#remove_at for (self: List[nullable Object], Int) */
void standard___standard__List___standard__abstract_collection__Sequence__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_i = p0;
{
var = standard___standard__List___get_node(self, var_i);
}
var_node = var;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
standard___standard__List___remove_node(self, var_node); /* Direct call list#List#remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list#List#clear for (self: List[nullable Object]) */
void standard___standard__List___standard__abstract_collection__RemovableCollection__clear(val* self) {
self->attrs[COLOR_standard__list__List___head].val = ((val*)NULL); /* _head on <self:List[nullable Object]> */
self->attrs[COLOR_standard__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* standard___standard__List___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = NEW_standard__ListIterator(self->type->resolution_table->types[COLOR_standard__ListIterator__standard__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__list__ListIterator__list_61d]))(var1, self); /* list= on <var1:ListIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ListIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#init for (self: List[nullable Object]) */
void standard___standard__List___standard__kernel__Object__init(val* self) {
RET_LABEL:;
}
/* method list#List#get_node for (self: List[nullable Object], Int): nullable ListNode[nullable Object] */
val* standard___standard__List___get_node(val* self, long p0) {
val* var /* : nullable ListNode[nullable Object] */;
long var_i /* var i: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : nullable ListNode[nullable Object] */;
val* var21 /* : nullable ListNode[nullable Object] */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
var_i = p0;
var1 = self->attrs[COLOR_standard__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_n = var1;
{
{ /* Inline kernel#Int#< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var5 = var_i < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
for(;;) {
if (var_n == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,((val*)NULL)) on <var_n:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var18 = var_i > 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var6 = var12;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline list#ListNode#next (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var21 = var_n->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_n = var19;
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var28 = var_i - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
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
/* method list#List#search_node_after for (self: List[nullable Object], nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* standard___standard__List___search_node_after(val* self, val* p0, val* p1) {
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
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable ListNode[nullable Object] */;
val* var20 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 225);
fatal_exit(1);
}
/* Covariant cast for argument 1 (after) <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct5 = self->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 225);
fatal_exit(1);
}
var_e = p0;
var_after = p1;
var_n = var_after;
for(;;) {
if (var_n == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,((val*)NULL)) on <var_n:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
{
{ /* Inline abstract_collection#Container#item (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var_n->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
var16 = (var_e != NULL);
} else {
var17 = ((short int(*)(val* self, val* p0))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var13, var_e); /* != on <var13:nullable Object>*/
var16 = var17;
}
var7 = var16;
} else {
var7 = var_;
}
if (var7){
{
{ /* Inline list#ListNode#next (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var20 = var_n->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_n = var18;
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
/* method list#List#remove_node for (self: List[nullable Object], ListNode[nullable Object]) */
void standard___standard__List___remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_node /* var node: ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable ListNode[nullable Object] */;
val* var12 /* : nullable ListNode[nullable Object] */;
val* var13 /* : nullable ListNode[nullable Object] */;
val* var15 /* : nullable ListNode[nullable Object] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable ListNode[nullable Object] */;
val* var24 /* : nullable ListNode[nullable Object] */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable ListNode[nullable Object] */;
val* var32 /* : nullable ListNode[nullable Object] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable ListNode[nullable Object] */;
val* var41 /* : nullable ListNode[nullable Object] */;
val* var42 /* : nullable ListNode[nullable Object] */;
val* var44 /* : nullable ListNode[nullable Object] */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
val* var50 /* : nullable ListNode[nullable Object] */;
val* var52 /* : nullable ListNode[nullable Object] */;
val* var53 /* : nullable ListNode[nullable Object] */;
val* var55 /* : nullable ListNode[nullable Object] */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const struct type* type_struct60;
const char* var_class_name61;
val* var62 /* : nullable ListNode[nullable Object] */;
val* var64 /* : nullable ListNode[nullable Object] */;
val* var65 /* : nullable ListNode[nullable Object] */;
val* var67 /* : nullable ListNode[nullable Object] */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const struct type* type_struct72;
const char* var_class_name73;
/* Covariant cast for argument 0 (node) <p0:ListNode[nullable Object]> isa ListNode[E] */
/* <p0:ListNode[nullable Object]> isa ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__list__ListNode__standard__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 233);
fatal_exit(1);
}
var_node = p0;
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var3 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var9 = var1 == var_other;
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
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var12 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_standard__list__List___head].val = var10; /* _head on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var15 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var13,((val*)NULL)) on <var13:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var21 = var13 == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
self->attrs[COLOR_standard__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
} else {
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var24 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 241);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#prev= (var22,((val*)NULL)) on <var22:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var26 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var26)) {
var_class_name29 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var22->attrs[COLOR_standard__list__ListNode___prev].val = ((val*)NULL); /* _prev on <var22:nullable ListNode[nullable Object]> */
RET_LABEL25:(void)0;
}
}
}
} else {
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var32 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var30,((val*)NULL)) on <var30:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var38 = var30 == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var41 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
self->attrs[COLOR_standard__list__List___tail].val = var39; /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var44 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 245);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next= (var42,((val*)NULL)) on <var42:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var46 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var46)) {
var_class_name49 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var42->attrs[COLOR_standard__list__ListNode___next].val = ((val*)NULL); /* _next on <var42:nullable ListNode[nullable Object]> */
RET_LABEL45:(void)0;
}
}
} else {
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var52 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var55 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var50 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 247);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next= (var50,var53) on <var50:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var53:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var53:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct60 = var50->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype58 = type_struct60->color;
idtype59 = type_struct60->id;
if(var53 == NULL) {
var57 = 1;
} else {
if(cltype58 >= var53->type->table_size) {
var57 = 0;
} else {
var57 = var53->type->type_table[cltype58] == idtype59;
}
}
if (unlikely(!var57)) {
var_class_name61 = var53 == NULL ? "null" : var53->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var50->attrs[COLOR_standard__list__ListNode___next].val = var53; /* _next on <var50:nullable ListNode[nullable Object]> */
RET_LABEL56:(void)0;
}
}
{
{ /* Inline list#ListNode#next (var_node) on <var_node:ListNode[nullable Object]> */
var64 = var_node->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var67 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var62 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 248);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#prev= (var62,var65) on <var62:nullable ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var65:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var65:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct72 = var62->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype70 = type_struct72->color;
idtype71 = type_struct72->id;
if(var65 == NULL) {
var69 = 1;
} else {
if(cltype70 >= var65->type->table_size) {
var69 = 0;
} else {
var69 = var65->type->type_table[cltype70] == idtype71;
}
}
if (unlikely(!var69)) {
var_class_name73 = var65 == NULL ? "null" : var65->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var62->attrs[COLOR_standard__list__ListNode___prev].val = var65; /* _prev on <var62:nullable ListNode[nullable Object]> */
RET_LABEL68:(void)0;
}
}
}
}
RET_LABEL:;
}
/* method list#List#insert_before for (self: List[nullable Object], nullable Object, ListNode[nullable Object]) */
void standard___standard__List___insert_before(val* self, val* p0, val* p1) {
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
const char* var_class_name5;
val* var_element /* var element: nullable Object */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var6 /* : ListNode[nullable Object] */;
val* var_nnode /* var nnode: ListNode[nullable Object] */;
val* var7 /* : nullable ListNode[nullable Object] */;
val* var9 /* : nullable ListNode[nullable Object] */;
val* var_prev /* var prev: nullable ListNode[nullable Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const struct type* type_struct20;
const char* var_class_name21;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const struct type* type_struct26;
const char* var_class_name27;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const struct type* type_struct32;
const char* var_class_name33;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const struct type* type_struct38;
const char* var_class_name39;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 252);
fatal_exit(1);
}
/* Covariant cast for argument 1 (node) <p1:ListNode[nullable Object]> isa ListNode[E] */
/* <p1:ListNode[nullable Object]> isa ListNode[E] */
type_struct4 = self->type->resolution_table->types[COLOR_standard__list__ListNode__standard__List___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ListNode[E]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 252);
fatal_exit(1);
}
var_element = p0;
var_node = p1;
var6 = NEW_standard__list__ListNode(self->type->resolution_table->types[COLOR_standard__list__ListNode__standard__List___35dE]);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__Container__item_61d]))(var6, var_element); /* item= on <var6:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:ListNode[nullable Object]>*/
}
var_nnode = var6;
{
{ /* Inline list#ListNode#prev (var_node) on <var_node:ListNode[nullable Object]> */
var9 = var_node->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_prev = var7;
if (var_prev == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_prev,((val*)NULL)) on <var_prev:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_prev,var_other) on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var_prev == var_other;
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
self->attrs[COLOR_standard__list__List___head].val = var_nnode; /* _head on <self:List[nullable Object]> */
} else {
{
{ /* Inline list#ListNode#next= (var_prev,var_nnode) on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct20 = var_prev->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype18 = type_struct20->color;
idtype19 = type_struct20->id;
if(cltype18 >= var_nnode->type->table_size) {
var17 = 0;
} else {
var17 = var_nnode->type->type_table[cltype18] == idtype19;
}
if (unlikely(!var17)) {
var_class_name21 = var_nnode == NULL ? "null" : var_nnode->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var_prev->attrs[COLOR_standard__list__ListNode___next].val = var_nnode; /* _next on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL16:(void)0;
}
}
}
{
{ /* Inline list#ListNode#prev= (var_nnode,var_prev) on <var_nnode:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_prev:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_prev:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct26 = var_nnode->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype24 = type_struct26->color;
idtype25 = type_struct26->id;
if(var_prev == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_prev->type->table_size) {
var23 = 0;
} else {
var23 = var_prev->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
var_class_name27 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var_nnode->attrs[COLOR_standard__list__ListNode___prev].val = var_prev; /* _prev on <var_nnode:ListNode[nullable Object]> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline list#ListNode#next= (var_nnode,var_node) on <var_nnode:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct32 = var_nnode->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype30 = type_struct32->color;
idtype31 = type_struct32->id;
if(cltype30 >= var_node->type->table_size) {
var29 = 0;
} else {
var29 = var_node->type->type_table[cltype30] == idtype31;
}
if (unlikely(!var29)) {
var_class_name33 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var_nnode->attrs[COLOR_standard__list__ListNode___next].val = var_node; /* _next on <var_nnode:ListNode[nullable Object]> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline list#ListNode#prev= (var_node,var_nnode) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct38 = var_node->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
cltype36 = type_struct38->color;
idtype37 = type_struct38->id;
if(cltype36 >= var_nnode->type->table_size) {
var35 = 0;
} else {
var35 = var_nnode->type->type_table[cltype36] == idtype37;
}
if (unlikely(!var35)) {
var_class_name39 = var_nnode == NULL ? "null" : var_nnode->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
var_node->attrs[COLOR_standard__list__ListNode___prev].val = var_nnode; /* _prev on <var_node:ListNode[nullable Object]> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method list#ListIterator#item for (self: ListIterator[nullable Object]): nullable Object */
val* standard___standard__ListIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 270);
fatal_exit(1);
} else {
{ /* Inline abstract_collection#Container#item (var1) on <var1:nullable ListNode[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__abstract_collection, 309);
fatal_exit(1);
}
var4 = var1->attrs[COLOR_standard__abstract_collection__Container___item].val; /* _item on <var1:nullable ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#ListIterator#is_ok for (self: ListIterator[nullable Object]): Bool */
short int standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = self->attrs[COLOR_standard__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var7 = var1 == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
var8 = !var2;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#ListIterator#next for (self: ListIterator[nullable Object]) */
void standard___standard__ListIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : ListIterator[nullable Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
var = self->attrs[COLOR_standard__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 279);
fatal_exit(1);
} else {
{ /* Inline list#ListNode#next (var) on <var:nullable ListNode[nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
var3 = var->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <var:nullable ListNode[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_standard__list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var_ = self;
var4 = var_->attrs[COLOR_standard__list__ListIterator___index].l; /* _index on <var_:ListIterator[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var8 = var4 + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_->attrs[COLOR_standard__list__ListIterator___index].l = var5; /* _index on <var_:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#init for (self: ListIterator[nullable Object]) */
void standard___standard__ListIterator___standard__kernel__Object__init(val* self) {
val* var /* : List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var = self->attrs[COLOR_standard__list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 286);
fatal_exit(1);
}
var1 = var->attrs[COLOR_standard__list__List___head].val; /* _head on <var:List[nullable Object]> */
self->attrs[COLOR_standard__list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#list= for (self: ListIterator[nullable Object], List[nullable Object]) */
void standard___standard__ListIterator___list_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (list) <p0:List[nullable Object]> isa List[E] */
/* <p0:List[nullable Object]> isa List[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__List__standard__ListIterator___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 289);
fatal_exit(1);
}
self->attrs[COLOR_standard__list__ListIterator___list].val = p0; /* _list on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#index for (self: ListIterator[nullable Object]): Int */
long standard___standard__ListIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__list__ListIterator___index].l; /* _index on <self:ListIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#next for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* standard__list___standard__list__ListNode___next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__list__ListNode___next].val; /* _next on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#next= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void standard__list___standard__list__ListNode___next_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 332);
fatal_exit(1);
}
self->attrs[COLOR_standard__list__ListNode___next].val = p0; /* _next on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list#ListNode#prev for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* standard__list___standard__list__ListNode___prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_standard__list__ListNode___prev].val; /* _prev on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#prev= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void standard__list___standard__list__ListNode___prev_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__list__ListNode__standard__list__ListNode___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__list, 335);
fatal_exit(1);
}
self->attrs[COLOR_standard__list__ListNode___prev].val = p0; /* _prev on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
