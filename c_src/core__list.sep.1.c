#include "core__list.sep.0.h"
/* method list$List$[] for (self: List[nullable Object], Int): nullable Object */
val* core___core__List___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var_index = p0;
{
var1 = core___core__List___get_node(self, var_index);
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 24);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item (var1) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var4 = var1->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$[]= for (self: List[nullable Object], Int, nullable Object) */
void core___core__List___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 26);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
var1 = core___core__List___get_node(self, var_index);
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 26);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item= (var1,var_item) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct6 = var1->type->resolution_table->types[COLOR_core__Ref___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 340);
fatal_exit(1);
}
var1->attrs[COLOR_core__abstract_collection__Ref___item].val = var_item; /* _item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method list$List$first for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 29);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item (var1) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var4 = var1->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$first= for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__first_61d(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 31);
fatal_exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 32);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item= (var1,var_e) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (item) <var_e:nullable Object> isa E */
/* <var_e:nullable Object> isa E */
type_struct6 = var1->type->resolution_table->types[COLOR_core__Ref___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 340);
fatal_exit(1);
}
var1->attrs[COLOR_core__abstract_collection__Ref___item].val = var_e; /* _item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method list$List$last for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__SequenceRead__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 35);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item (var1) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var4 = var1->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$is_empty for (self: List[nullable Object]): Bool */
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
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
/* method list$List$length for (self: List[nullable Object]): Int */
long core___core__List___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__list__List___length].l; /* _length on <self:List[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$List$length= for (self: List[nullable Object], Int) */
void core___core__List___length_61d(val* self, long p0) {
self->attrs[COLOR_core__list__List___length].l = p0; /* _length on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list$List$has for (self: List[nullable Object], nullable Object): Bool */
short int core___core__List___core__abstract_collection__Collection__has(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 49);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var3 = core___core__List___search_node_after(self, var_e, var2);
}
if (var3 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var3,((val*)NULL)) on <var3:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var_other); /* == on <var3:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
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
/* method list$List$count for (self: List[nullable Object], nullable Object): Int */
long core___core__List___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_e /* var e: nullable Object */;
long var_nb /* var nb: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
val* var16 /* : nullable ListNode[nullable Object] */;
val* var18 /* : nullable ListNode[nullable Object] */;
var_e = p0;
var_nb = 0l;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var1;
for(;;) {
if (var_node == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
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
{ /* Inline abstract_collection$Ref$item (var_node) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var9 = var_node->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
var10 = (var_e != NULL);
} else {
var11 = ((short int(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var7, var_e); /* != on <var7:nullable Object>*/
var10 = var11;
}
if (var10){
{
{ /* Inline kernel$Int$+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_nb + 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_nb = var12;
} else {
}
{
{ /* Inline list$ListNode$next (var_node) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var18 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_node = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$push for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__push(val* self, val* p0) {
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
val* var_tail /* var tail: nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const struct type* type_struct13;
const char* var_class_name14;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
const char* var_class_name20;
val* var_ /* var : List[nullable Object] */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 86);
fatal_exit(1);
}
var_e = p0;
var1 = NEW_core__list__ListNode(self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var_tail = var2;
if (var_tail == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_tail,((val*)NULL)) on <var_tail:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_tail,var_other) on <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var_tail == var_other;
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
self->attrs[COLOR_core__list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
} else {
{
{ /* Inline list$ListNode$next= (var_tail,var_node) on <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct13 = var_tail->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype11 = type_struct13->color;
idtype12 = type_struct13->id;
if(cltype11 >= var_node->type->table_size) {
var10 = 0;
} else {
var10 = var_node->type->type_table[cltype11] == idtype12;
}
if (unlikely(!var10)) {
var_class_name14 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var_tail->attrs[COLOR_core__list__ListNode___next].val = var_node; /* _next on <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline list$ListNode$prev= (var_node,var_tail) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])> isa nullable ListNode[E] */
/* <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])> isa nullable ListNode[E] */
type_struct19 = var_node->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(cltype17 >= var_tail->type->table_size) {
var16 = 0;
} else {
var16 = var_tail->type->type_table[cltype17] == idtype18;
}
if (unlikely(!var16)) {
var_class_name20 = var_tail == NULL ? "null" : var_tail->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var_node->attrs[COLOR_core__list__ListNode___prev].val = var_tail; /* _prev on <var_node:ListNode[nullable Object]> */
RET_LABEL15:(void)0;
}
}
}
self->attrs[COLOR_core__list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
var_ = self;
{
{ /* Inline list$List$length (var_) on <var_:List[nullable Object]> */
var23 = var_->attrs[COLOR_core__list__List___length].l; /* _length on <var_:List[nullable Object]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var21 + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline list$List$length= (var_,var24) on <var_:List[nullable Object]> */
var_->attrs[COLOR_core__list__List___length].l = var24; /* _length on <var_:List[nullable Object]> */
RET_LABEL31:(void)0;
}
}
RET_LABEL:;
}
/* method list$List$unshift for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__unshift(val* self, val* p0) {
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
val* var_head /* var head: nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const struct type* type_struct13;
const char* var_class_name14;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
const char* var_class_name20;
val* var_ /* var : List[nullable Object] */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 101);
fatal_exit(1);
}
var_e = p0;
var1 = NEW_core__list__ListNode(self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_head = var2;
if (var_head == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_head,((val*)NULL)) on <var_head:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_head,var_other) on <var_head:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var8 = var_head == var_other;
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
self->attrs[COLOR_core__list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
} else {
{
{ /* Inline list$ListNode$next= (var_node,var_head) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var_head:nullable ListNode[nullable Object](ListNode[nullable Object])> isa nullable ListNode[E] */
/* <var_head:nullable ListNode[nullable Object](ListNode[nullable Object])> isa nullable ListNode[E] */
type_struct13 = var_node->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype11 = type_struct13->color;
idtype12 = type_struct13->id;
if(cltype11 >= var_head->type->table_size) {
var10 = 0;
} else {
var10 = var_head->type->type_table[cltype11] == idtype12;
}
if (unlikely(!var10)) {
var_class_name14 = var_head == NULL ? "null" : var_head->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var_node->attrs[COLOR_core__list__ListNode___next].val = var_head; /* _next on <var_node:ListNode[nullable Object]> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline list$ListNode$prev= (var_head,var_node) on <var_head:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (prev) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct19 = var_head->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(cltype17 >= var_node->type->table_size) {
var16 = 0;
} else {
var16 = var_node->type->type_table[cltype17] == idtype18;
}
if (unlikely(!var16)) {
var_class_name20 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var_head->attrs[COLOR_core__list__ListNode___prev].val = var_node; /* _prev on <var_head:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL15:(void)0;
}
}
}
self->attrs[COLOR_core__list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
var_ = self;
{
{ /* Inline list$List$length (var_) on <var_:List[nullable Object]> */
var23 = var_->attrs[COLOR_core__list__List___length].l; /* _length on <var_:List[nullable Object]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var21 + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline list$List$length= (var_,var24) on <var_:List[nullable Object]> */
var_->attrs[COLOR_core__list__List___length].l = var24; /* _length on <var_:List[nullable Object]> */
RET_LABEL31:(void)0;
}
}
RET_LABEL:;
}
/* method list$List$insert for (self: List[nullable Object], nullable Object, Int) */
void core___core__List___core__abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
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
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 116);
fatal_exit(1);
}
var_e = p0;
var_i = p1;
{
var1 = core___core__List___get_node(self, var_i);
}
var_node = var1;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])> */
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
core___core__List___core__abstract_collection__Sequence__push(self, var_e); /* Direct call list$List$push on <self:List[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
core___core__List___insert_before(self, var_e, var_node); /* Direct call list$List$insert_before on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$pop for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
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
val* var_ /* var : List[nullable Object] */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var31 /* : nullable Object */;
val* var33 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 149);
fatal_exit(1);
}
var_node = var1;
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var4 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__list__List___tail].val = var2; /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list$ListNode$prev= (var_node,((val*)NULL)) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var6 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var6)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var_node->attrs[COLOR_core__list__ListNode___prev].val = ((val*)NULL); /* _prev on <var_node:ListNode[nullable Object]> */
RET_LABEL5:(void)0;
}
}
var7 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var7 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var7,((val*)NULL)) on <var7:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable ListNode[nullable Object](ListNode[nullable Object])> */
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
self->attrs[COLOR_core__list__List___head].val = ((val*)NULL); /* _head on <self:List[nullable Object]> */
} else {
var14 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 155);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$next= (var14,((val*)NULL)) on <var14:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var16 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var16)) {
var_class_name19 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var14->attrs[COLOR_core__list__ListNode___next].val = ((val*)NULL); /* _next on <var14:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL15:(void)0;
}
}
}
var_ = self;
{
{ /* Inline list$List$length (var_) on <var_:List[nullable Object]> */
var22 = var_->attrs[COLOR_core__list__List___length].l; /* _length on <var_:List[nullable Object]> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var20 - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline list$List$length= (var_,var23) on <var_:List[nullable Object]> */
var_->attrs[COLOR_core__list__List___length].l = var23; /* _length on <var_:List[nullable Object]> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_collection$Ref$item (var_node) on <var_node:ListNode[nullable Object]> */
var33 = var_node->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var_node:ListNode[nullable Object]> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$shift for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
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
val* var_ /* var : List[nullable Object] */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var31 /* : nullable Object */;
val* var33 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 164);
fatal_exit(1);
}
var_node = var1;
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var4 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__list__List___head].val = var2; /* _head on <self:List[nullable Object]> */
{
{ /* Inline list$ListNode$next= (var_node,((val*)NULL)) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var6 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var6)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var_node->attrs[COLOR_core__list__ListNode___next].val = ((val*)NULL); /* _next on <var_node:ListNode[nullable Object]> */
RET_LABEL5:(void)0;
}
}
var7 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var7 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var7,((val*)NULL)) on <var7:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable ListNode[nullable Object](ListNode[nullable Object])> */
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
self->attrs[COLOR_core__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
} else {
var14 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 170);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$prev= (var14,((val*)NULL)) on <var14:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (prev) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var16 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var16)) {
var_class_name19 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var14->attrs[COLOR_core__list__ListNode___prev].val = ((val*)NULL); /* _prev on <var14:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL15:(void)0;
}
}
}
var_ = self;
{
{ /* Inline list$List$length (var_) on <var_:List[nullable Object]> */
var22 = var_->attrs[COLOR_core__list__List___length].l; /* _length on <var_:List[nullable Object]> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var20 - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline list$List$length= (var_,var23) on <var_:List[nullable Object]> */
var_->attrs[COLOR_core__list__List___length].l = var23; /* _length on <var_:List[nullable Object]> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_collection$Ref$item (var_node) on <var_node:ListNode[nullable Object]> */
var33 = var_node->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var_node:ListNode[nullable Object]> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$remove for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 178);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var2 = core___core__List___search_node_after(self, var_e, var1);
}
var_node = var2;
if (var_node == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
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
core___core__List___remove_node(self, var_node); /* Direct call list$List$remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list$List$remove_at for (self: List[nullable Object], Int) */
void core___core__List___core__abstract_collection__Sequence__remove_at(val* self, long p0) {
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
var = core___core__List___get_node(self, var_i);
}
var_node = var;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
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
core___core__List___remove_node(self, var_node); /* Direct call list$List$remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list$List$clear for (self: List[nullable Object]) */
void core___core__List___core__abstract_collection__RemovableCollection__clear(val* self) {
self->attrs[COLOR_core__list__List___head].val = ((val*)NULL); /* _head on <self:List[nullable Object]> */
self->attrs[COLOR_core__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list$List$length= (self,0l) on <self:List[nullable Object]> */
self->attrs[COLOR_core__list__List___length].l = 0l; /* _length on <self:List[nullable Object]> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method list$List$iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* core___core__List___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = NEW_core__ListIterator(self->type->resolution_table->types[COLOR_core__ListIterator__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__list__ListIterator__list_61d]))(var1, self); /* list= on <var1:ListIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$reverse_iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* core___core__List___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListReverseIterator[nullable Object] */;
var1 = NEW_core__list__ListReverseIterator(self->type->resolution_table->types[COLOR_core__list__ListReverseIterator__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__list__ListIterator__list_61d]))(var1, self); /* list= on <var1:ListReverseIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListReverseIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$init for (self: List[nullable Object]) */
void core___core__List___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(self); /* init on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$get_node for (self: List[nullable Object], Int): nullable ListNode[nullable Object] */
val* core___core__List___get_node(val* self, long p0) {
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
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_n = var1;
{
{ /* Inline kernel$Int$< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
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
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline list$ListNode$next (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var21 = var_n->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_n = var19;
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
/* method list$List$search_node_after for (self: List[nullable Object], nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* core___core__List___search_node_after(val* self, val* p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 225);
fatal_exit(1);
}
/* Covariant cast for argument 1 (after) <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct5 = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 225);
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
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
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
{ /* Inline abstract_collection$Ref$item (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var15 = var_n->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
var16 = (var_e != NULL);
} else {
var17 = ((short int(*)(val* self, val* p0))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var13, var_e); /* != on <var13:nullable Object>*/
var16 = var17;
}
var7 = var16;
} else {
var7 = var_;
}
if (var7){
{
{ /* Inline list$ListNode$next (var_n) on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var20 = var_n->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])> */
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
/* method list$List$remove_node for (self: List[nullable Object], ListNode[nullable Object]) */
void core___core__List___remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_node /* var node: ListNode[nullable Object] */;
val* var_ /* var : List[nullable Object] */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
val* var12 /* : nullable ListNode[nullable Object] */;
val* var14 /* : nullable ListNode[nullable Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable ListNode[nullable Object] */;
val* var23 /* : nullable ListNode[nullable Object] */;
val* var24 /* : nullable ListNode[nullable Object] */;
val* var26 /* : nullable ListNode[nullable Object] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable ListNode[nullable Object] */;
val* var35 /* : nullable ListNode[nullable Object] */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable ListNode[nullable Object] */;
val* var43 /* : nullable ListNode[nullable Object] */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable ListNode[nullable Object] */;
val* var52 /* : nullable ListNode[nullable Object] */;
val* var53 /* : nullable ListNode[nullable Object] */;
val* var55 /* : nullable ListNode[nullable Object] */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
val* var61 /* : nullable ListNode[nullable Object] */;
val* var63 /* : nullable ListNode[nullable Object] */;
val* var64 /* : nullable ListNode[nullable Object] */;
val* var66 /* : nullable ListNode[nullable Object] */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const struct type* type_struct71;
const char* var_class_name72;
val* var73 /* : nullable ListNode[nullable Object] */;
val* var75 /* : nullable ListNode[nullable Object] */;
val* var76 /* : nullable ListNode[nullable Object] */;
val* var78 /* : nullable ListNode[nullable Object] */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const struct type* type_struct83;
const char* var_class_name84;
/* Covariant cast for argument 0 (node) <p0:ListNode[nullable Object]> isa ListNode[E] */
/* <p0:ListNode[nullable Object]> isa ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 233);
fatal_exit(1);
}
var_node = p0;
var_ = self;
{
{ /* Inline list$List$length (var_) on <var_:List[nullable Object]> */
var3 = var_->attrs[COLOR_core__list__List___length].l; /* _length on <var_:List[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var10 = var1 - 1l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline list$List$length= (var_,var4) on <var_:List[nullable Object]> */
var_->attrs[COLOR_core__list__List___length].l = var4; /* _length on <var_:List[nullable Object]> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var14 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var12,((val*)NULL)) on <var12:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var12,var_other) on <var12:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var20 = var12 == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var23 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
self->attrs[COLOR_core__list__List___head].val = var21; /* _head on <self:List[nullable Object]> */
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var26 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var24,((val*)NULL)) on <var24:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var24,var_other) on <var24:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var32 = var24 == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
self->attrs[COLOR_core__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
} else {
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var35 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 242);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$prev= (var33,((val*)NULL)) on <var33:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (prev) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var37 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var37)) {
var_class_name40 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var33->attrs[COLOR_core__list__ListNode___prev].val = ((val*)NULL); /* _prev on <var33:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL36:(void)0;
}
}
}
} else {
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var43 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var41 == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var41,((val*)NULL)) on <var41:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var41,var_other) on <var41:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var49 = var41 == var_other;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var52 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
self->attrs[COLOR_core__list__List___tail].val = var50; /* _tail on <self:List[nullable Object]> */
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var55 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 246);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$next= (var53,((val*)NULL)) on <var53:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <((val*)NULL):null> isa nullable ListNode[E] */
/* <((val*)NULL):null> isa nullable ListNode[E] */
var57 = 1; /* easy <((val*)NULL):null> isa nullable ListNode[E]*/
if (unlikely(!var57)) {
var_class_name60 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var53->attrs[COLOR_core__list__ListNode___next].val = ((val*)NULL); /* _next on <var53:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL56:(void)0;
}
}
} else {
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var63 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 248);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var66 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline list$ListNode$next= (var61,var64) on <var61:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <var64:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var64:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct71 = var61->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype69 = type_struct71->color;
idtype70 = type_struct71->id;
if(var64 == NULL) {
var68 = 1;
} else {
if(cltype69 >= var64->type->table_size) {
var68 = 0;
} else {
var68 = var64->type->type_table[cltype69] == idtype70;
}
}
if (unlikely(!var68)) {
var_class_name72 = var64 == NULL ? "null" : var64->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var61->attrs[COLOR_core__list__ListNode___next].val = var64; /* _next on <var61:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL67:(void)0;
}
}
{
{ /* Inline list$ListNode$next (var_node) on <var_node:ListNode[nullable Object]> */
var75 = var_node->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var_node:ListNode[nullable Object]> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 249);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var78 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline list$ListNode$prev= (var73,var76) on <var73:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (prev) <var76:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var76:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct83 = var73->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype81 = type_struct83->color;
idtype82 = type_struct83->id;
if(var76 == NULL) {
var80 = 1;
} else {
if(cltype81 >= var76->type->table_size) {
var80 = 0;
} else {
var80 = var76->type->type_table[cltype81] == idtype82;
}
}
if (unlikely(!var80)) {
var_class_name84 = var76 == NULL ? "null" : var76->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var73->attrs[COLOR_core__list__ListNode___prev].val = var76; /* _prev on <var73:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL79:(void)0;
}
}
}
}
RET_LABEL:;
}
/* method list$List$insert_before for (self: List[nullable Object], nullable Object, ListNode[nullable Object]) */
void core___core__List___insert_before(val* self, val* p0, val* p1) {
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
val* var_ /* var : List[nullable Object] */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var17 /* : ListNode[nullable Object] */;
val* var_nnode /* var nnode: ListNode[nullable Object] */;
val* var18 /* : nullable ListNode[nullable Object] */;
val* var20 /* : nullable ListNode[nullable Object] */;
val* var_prev /* var prev: nullable ListNode[nullable Object] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const struct type* type_struct31;
const char* var_class_name32;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const struct type* type_struct37;
const char* var_class_name38;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const struct type* type_struct43;
const char* var_class_name44;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const struct type* type_struct49;
const char* var_class_name50;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 253);
fatal_exit(1);
}
/* Covariant cast for argument 1 (node) <p1:ListNode[nullable Object]> isa ListNode[E] */
/* <p1:ListNode[nullable Object]> isa ListNode[E] */
type_struct4 = self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 253);
fatal_exit(1);
}
var_element = p0;
var_node = p1;
var_ = self;
{
{ /* Inline list$List$length (var_) on <var_:List[nullable Object]> */
var8 = var_->attrs[COLOR_core__list__List___length].l; /* _length on <var_:List[nullable Object]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var6 + 1l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline list$List$length= (var_,var9) on <var_:List[nullable Object]> */
var_->attrs[COLOR_core__list__List___length].l = var9; /* _length on <var_:List[nullable Object]> */
RET_LABEL16:(void)0;
}
}
var17 = NEW_core__list__ListNode(self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var17, var_element); /* item= on <var17:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_core__kernel__Object__init]))(var17); /* init on <var17:ListNode[nullable Object]>*/
}
var_nnode = var17;
{
{ /* Inline list$ListNode$prev (var_node) on <var_node:ListNode[nullable Object]> */
var20 = var_node->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var_node:ListNode[nullable Object]> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_prev = var18;
if (var_prev == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_prev,((val*)NULL)) on <var_prev:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_prev,var_other) on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var26 = var_prev == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
self->attrs[COLOR_core__list__List___head].val = var_nnode; /* _head on <self:List[nullable Object]> */
} else {
{
{ /* Inline list$ListNode$next= (var_prev,var_nnode) on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])> */
/* Covariant cast for argument 0 (next) <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct31 = var_prev->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype29 = type_struct31->color;
idtype30 = type_struct31->id;
if(cltype29 >= var_nnode->type->table_size) {
var28 = 0;
} else {
var28 = var_nnode->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name32 = var_nnode == NULL ? "null" : var_nnode->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var_prev->attrs[COLOR_core__list__ListNode___next].val = var_nnode; /* _next on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])> */
RET_LABEL27:(void)0;
}
}
}
{
{ /* Inline list$ListNode$prev= (var_nnode,var_prev) on <var_nnode:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_prev:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_prev:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct37 = var_nnode->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype35 = type_struct37->color;
idtype36 = type_struct37->id;
if(var_prev == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_prev->type->table_size) {
var34 = 0;
} else {
var34 = var_prev->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
var_class_name38 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var_nnode->attrs[COLOR_core__list__ListNode___prev].val = var_prev; /* _prev on <var_nnode:ListNode[nullable Object]> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline list$ListNode$next= (var_nnode,var_node) on <var_nnode:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (next) <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_node:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct43 = var_nnode->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype41 = type_struct43->color;
idtype42 = type_struct43->id;
if(cltype41 >= var_node->type->table_size) {
var40 = 0;
} else {
var40 = var_node->type->type_table[cltype41] == idtype42;
}
if (unlikely(!var40)) {
var_class_name44 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
var_nnode->attrs[COLOR_core__list__ListNode___next].val = var_node; /* _next on <var_nnode:ListNode[nullable Object]> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline list$ListNode$prev= (var_node,var_nnode) on <var_node:ListNode[nullable Object]> */
/* Covariant cast for argument 0 (prev) <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
/* <var_nnode:ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct49 = var_node->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype47 = type_struct49->color;
idtype48 = type_struct49->id;
if(cltype47 >= var_nnode->type->table_size) {
var46 = 0;
} else {
var46 = var_nnode->type->type_table[cltype47] == idtype48;
}
if (unlikely(!var46)) {
var_class_name50 = var_nnode == NULL ? "null" : var_nnode->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
var_node->attrs[COLOR_core__list__ListNode___prev].val = var_nnode; /* _prev on <var_node:ListNode[nullable Object]> */
RET_LABEL45:(void)0;
}
}
RET_LABEL:;
}
/* method list$ListIterator$item for (self: ListIterator[nullable Object]): nullable Object */
val* core___core__ListIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 272);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item (var1) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var4 = var1->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$ListIterator$is_ok for (self: ListIterator[nullable Object]): Bool */
short int core___core__ListIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable ListNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])> */
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
/* method list$ListIterator$next for (self: ListIterator[nullable Object]) */
void core___core__ListIterator___core__abstract_collection__Iterator__next(val* self) {
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
var = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 281);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$next (var) on <var:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var3 = var->attrs[COLOR_core__list__ListNode___next].val; /* _next on <var:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var_ = self;
var4 = var_->attrs[COLOR_core__list__ListIterator___index].l; /* _index on <var_:ListIterator[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var4 + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_->attrs[COLOR_core__list__ListIterator___index].l = var5; /* _index on <var_:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$init for (self: ListIterator[nullable Object]) */
void core___core__ListIterator___core__kernel__Object__init(val* self) {
val* var /* : List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__ListIterator___core__kernel__Object__init]))(self); /* init on <self:ListIterator[nullable Object]>*/
}
var = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 288);
fatal_exit(1);
}
var1 = var->attrs[COLOR_core__list__List___head].val; /* _head on <var:List[nullable Object]> */
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$list= for (self: ListIterator[nullable Object], List[nullable Object]) */
void core___core__ListIterator___list_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (list) <p0:List[nullable Object]> isa List[E] */
/* <p0:List[nullable Object]> isa List[E] */
type_struct = self->type->resolution_table->types[COLOR_core__List__core__ListIterator___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 291);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListIterator___list].val = p0; /* _list on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$index for (self: ListIterator[nullable Object]): Int */
long core___core__ListIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__list__ListIterator___index].l; /* _index on <self:ListIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListReverseIterator$next for (self: ListReverseIterator[nullable Object]) */
void core__list___core__list__ListReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : ListReverseIterator[nullable Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
var = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListReverseIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 318);
fatal_exit(1);
}
{
{ /* Inline list$ListNode$prev (var) on <var:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var3 = var->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <var:nullable ListNode[nullable Object](ListNode[nullable Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListReverseIterator[nullable Object]> */
var_ = self;
var4 = var_->attrs[COLOR_core__list__ListIterator___index].l; /* _index on <var_:ListReverseIterator[nullable Object]> */
{
{ /* Inline kernel$Int$- (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var4 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_->attrs[COLOR_core__list__ListIterator___index].l = var5; /* _index on <var_:ListReverseIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListReverseIterator$init for (self: ListReverseIterator[nullable Object]) */
void core__list___core__list__ListReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : List[nullable Object] */;
val* var_list /* var list: List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
long var2 /* : Int */;
long var4 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__list___core__list__ListReverseIterator___core__kernel__Object__init]))(self); /* init on <self:ListReverseIterator[nullable Object]>*/
}
var = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListReverseIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 324);
fatal_exit(1);
}
var_list = var;
var1 = var_list->attrs[COLOR_core__list__List___tail].val; /* _tail on <var_list:List[nullable Object]> */
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListReverseIterator[nullable Object]> */
{
{ /* Inline list$List$length (var_list) on <var_list:List[nullable Object]> */
var4 = var_list->attrs[COLOR_core__list__List___length].l; /* _length on <var_list:List[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__list__ListIterator___index].l = var2; /* _index on <self:ListReverseIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListNode$next for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* core__list___core__list__ListNode___next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__ListNode___next].val; /* _next on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListNode$next= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void core__list___core__list__ListNode___next_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListNode___next].val = p0; /* _next on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list$ListNode$prev for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* core__list___core__list__ListNode___prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListNode$prev= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void core__list___core__list__ListNode___prev_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListNode___prev].val = p0; /* _prev on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
