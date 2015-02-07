#include "standard__hash_collection.sep.0.h"
/* method hash_collection#HashCollection#index_at for (self: HashCollection[nullable Object], nullable Object): Int */
long standard__hash_collection___standard__hash_collection__HashCollection___index_at(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_i /* var i: Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 40);
show_backtrace(1);
}
var_k = p0;
var2 = NULL;
if (var_k == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int (*)(val* self, val* p0))(var_k->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_k, var2) /* == on <var_k:nullable Object>*/;
var3 = var4;
}
if (var3){
var5 = 0;
var = var5;
goto RET_LABEL;
} else {
}
if (var_k == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 45);
show_backtrace(1);
} else {
var6 = ((long (*)(val* self))(var_k->class->vft[COLOR_standard__kernel__Object__hash]))(var_k) /* hash on <var_k:nullable Object>*/;
}
var7 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#% (var6,var7) on <var6:Int> */
var10 = var6 % var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
var11 = 0;
{
{ /* Inline kernel#Int#< (var_i,var11) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var18 = var_i < var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var21 = -var_i;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at for (self: HashCollection[nullable Object], nullable Object): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___node_at(val* self, val* p0) {
val* var /* : nullable HashNode[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable HashNode[nullable Object] */;
long var8 /* : Int */;
val* var9 /* : nullable HashNode[nullable Object] */;
val* var_res /* var res: nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 50);
show_backtrace(1);
}
var_k = p0;
var2 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
if (var_k == NULL) {
var3 = (var2 == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var_k,var2) on <var_k:nullable Object> */
var6 = var_k == var2 || (var_k != NULL && var2 != NULL && var_k->class == var2->class && ((var_k->class->box_kind == 1 && ((struct instance_standard__Int*)var_k)->value == ((struct instance_standard__Int*)var2)->value) || (var_k->class->box_kind == 2 && ((struct instance_standard__Bool*)var_k)->value == ((struct instance_standard__Bool*)var2)->value) || (var_k->class->box_kind == 3 && ((struct instance_standard__Char*)var_k)->value == ((struct instance_standard__Char*)var2)->value) || (var_k->class->box_kind == 4 && ((struct instance_standard__Float*)var_k)->value == ((struct instance_standard__Float*)var2)->value) || (var_k->class->box_kind == 5 && ((struct instance_standard__NativeString*)var_k)->value == ((struct instance_standard__NativeString*)var2)->value) || (var_k->class->box_kind == 6 && ((struct instance_standard__Pointer*)var_k)->value == ((struct instance_standard__Pointer*)var2)->value)));
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var7 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var_k);
}
{
var9 = standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(self, var8, var_k);
}
var_res = var9;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var_k; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var_res; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at_idx for (self: HashCollection[nullable Object], Int, nullable Object): nullable HashNode[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_i /* var i: Int */;
val* var_k /* var k: nullable Object */;
val* var2 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashNode[nullable Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_ck /* var ck: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable HashNode[nullable Object] */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
/* Covariant cast for argument 1 (k) <p1:nullable Object> isa K */
/* <p1:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 62);
show_backtrace(1);
}
var_i = p0;
var_k = p1;
var2 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 65);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var2,var_i) on <var2:nullable NativeArray[nullable HashNode[nullable Object]]> */
var5 = ((struct instance_standard__NativeArray*)var2)->values[var_i];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_c = var3;
for(;;) {
var6 = NULL;
if (var_c == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var6) on <var_c:nullable HashNode[nullable Object]> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var12 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_ck = var12;
if (var_ck == NULL) {
var14 = (var_k == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var_ck,var_k) on <var_ck:nullable Object> */
var17 = var_ck == var_k || (var_ck != NULL && var_k != NULL && var_ck->class == var_k->class && ((var_ck->class->box_kind == 1 && ((struct instance_standard__Int*)var_ck)->value == ((struct instance_standard__Int*)var_k)->value) || (var_ck->class->box_kind == 2 && ((struct instance_standard__Bool*)var_ck)->value == ((struct instance_standard__Bool*)var_k)->value) || (var_ck->class->box_kind == 3 && ((struct instance_standard__Char*)var_ck)->value == ((struct instance_standard__Char*)var_k)->value) || (var_ck->class->box_kind == 4 && ((struct instance_standard__Float*)var_ck)->value == ((struct instance_standard__Float*)var_k)->value) || (var_ck->class->box_kind == 5 && ((struct instance_standard__NativeString*)var_ck)->value == ((struct instance_standard__NativeString*)var_k)->value) || (var_ck->class->box_kind == 6 && ((struct instance_standard__Pointer*)var_ck)->value == ((struct instance_standard__Pointer*)var_k)->value)));
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var_ = var14;
if (var14){
var13 = var_;
} else {
if (var_ck == NULL) {
var18 = (var_k == NULL);
} else {
var19 = ((short int (*)(val* self, val* p0))(var_ck->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ck, var_k) /* == on <var_ck:nullable Object>*/;
var18 = var19;
}
var13 = var18;
}
if (var13){
goto BREAK_label;
} else {
}
var20 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_c = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_c:nullable HashNode[nullable Object]> isa nullable N */
type_struct24 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype22 = type_struct24->color;
idtype23 = type_struct24->id;
if(var_c == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_c->type->table_size) {
var21 = 0;
} else {
var21 = var_c->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
var_class_name25 = var_c == NULL ? "null" : var_c->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 73);
show_backtrace(1);
}
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#store for (self: HashCollection[nullable Object], Int, HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___store(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_node /* var node: HashNode[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashNode[nullable Object] */;
val* var10 /* : nullable HashNode[nullable Object] */;
val* var11 /* : null */;
val* var12 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable HashNode[nullable Object] */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
val* var16 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
const char* var_class_name22;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
long var31 /* : Int */;
long var_l /* var l: Int */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
/* Covariant cast for argument 1 (node) <p1:HashNode[nullable Object]> isa N */
/* <p1:HashNode[nullable Object]> isa N */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 76);
show_backtrace(1);
}
var_index = p0;
var_node = p1;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var2) on <var1:nullable HashNode[nullable Object]> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable HashNode[nullable Object](HashNode[nullable Object])> */
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
if (var3){
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var_node; /* _first_item on <self:HashCollection[nullable Object]> */
} else {
var9 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 83);
show_backtrace(1);
}
var9->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var_node; /* _next_item on <var9:nullable HashNode[nullable Object]> */
}
var10 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var10; /* _prev_item on <var_node:HashNode[nullable Object]> */
var11 = NULL;
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var11; /* _next_item on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var_node; /* _last_item on <self:HashCollection[nullable Object]> */
var12 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 90);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var12,var_index) on <var12:nullable NativeArray[nullable HashNode[nullable Object]]> */
var15 = ((struct instance_standard__NativeArray*)var12)->values[var_index];
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_next = var13;
var16 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 91);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var16,var_index,var_node) on <var16:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:HashNode[nullable Object]> isa E */
/* <var_node:HashNode[nullable Object]> isa E */
type_struct21 = var16->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
if(cltype19 >= var_node->type->table_size) {
var18 = 0;
} else {
var18 = var_node->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
var_class_name22 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 808);
show_backtrace(1);
}
((struct instance_standard__NativeArray*)var16)->values[var_index]=var_node;
RET_LABEL17:(void)0;
}
}
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:HashNode[nullable Object]> */
var23 = NULL;
if (var_next == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var23) on <var_next:nullable HashNode[nullable Object]> */
var_other27 = var23;
{
var28 = ((short int (*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other27) /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var30 = var_node->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var30; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var_node; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var31 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var_l = var31;
var32 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var32) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var39 = var_l + var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var33; /* _the_length on <self:HashCollection[nullable Object]> */
var40 = 5;
{
{ /* Inline kernel#Int#+ (var_l,var40) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var47 = var_l + var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var48 = 2;
{
{ /* Inline kernel#Int#* (var41,var48) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
show_backtrace(1);
}
var55 = var41 * var48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var56 = 1;
{
{ /* Inline kernel#Int#+ (var49,var56) on <var49:Int> */
/* Covariant cast for argument 0 (i) <var56:Int> isa OTHER */
/* <var56:Int> isa OTHER */
var59 = 1; /* easy <var56:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var63 = var49 + var56;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_l = var57;
var64 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#>= (var_l,var64) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var71 = var_l >= var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
var72 = 3;
{
{ /* Inline kernel#Int#* (var_l,var72) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var72:Int> isa OTHER */
/* <var72:Int> isa OTHER */
var75 = 1; /* easy <var72:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
show_backtrace(1);
}
var79 = var_l * var72;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var80 = 2;
{
{ /* Inline kernel#Int#/ (var73,var80) on <var73:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 418);
show_backtrace(1);
}
var87 = var73 / var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var88 = 1;
{
{ /* Inline kernel#Int#+ (var81,var88) on <var81:Int> */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var91 = 1; /* easy <var88:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var95 = var81 + var88;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
standard__hash_collection___standard__hash_collection__HashCollection___enlarge(self, var89); /* Direct call hash_collection#HashCollection#enlarge on <self:HashCollection[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: HashCollection[nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashCollection___remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable HashNode[nullable Object] */;
val* var_prev /* var prev: nullable HashNode[nullable Object] */;
val* var11 /* : nullable HashNode[nullable Object] */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const struct type* type_struct22;
const char* var_class_name23;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const struct type* type_struct33;
const char* var_class_name34;
val* var_ /* var : HashCollection[nullable Object] */;
long var35 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
val* var44 /* : nullable HashNode[nullable Object] */;
val* var45 /* : nullable HashNode[nullable Object] */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const struct type* type_struct57;
short int is_nullable58;
const char* var_class_name59;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : null */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashCollection___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 111);
show_backtrace(1);
}
var_k = p0;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var_k);
}
var_i = var1;
{
var2 = standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(self, var_i, var_k);
}
var_node = var2;
var3 = NULL;
if (var_node == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var3) on <var_node:nullable HashNode[nullable Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var9 = var_node == var_other;
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
goto RET_LABEL;
} else {
}
var10 = var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val; /* _prev_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var10;
var11 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var11;
var12 = NULL;
if (var_prev == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prev,var12) on <var_prev:nullable HashNode[nullable Object]> */
var_other16 = var12;
{
var17 = ((short int (*)(val* self, val* p0))(var_prev->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prev, var_other16) /* == on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var18 = !var17;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var_prev->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var_next; /* _next_item on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_next:nullable HashNode[nullable Object]> isa nullable N */
type_struct22 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype20 = type_struct22->color;
idtype21 = type_struct22->id;
if(var_next == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_next->type->table_size) {
var19 = 0;
} else {
var19 = var_next->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name23 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 124);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var_next; /* _first_item on <self:HashCollection[nullable Object]> */
}
var24 = NULL;
if (var_next == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var24) on <var_next:nullable HashNode[nullable Object]> */
var_other16 = var24;
{
var28 = ((short int (*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other16) /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var_prev; /* _prev_item on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_prev:nullable HashNode[nullable Object]> isa nullable N */
type_struct33 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype31 = type_struct33->color;
idtype32 = type_struct33->id;
if(var_prev == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_prev->type->table_size) {
var30 = 0;
} else {
var30 = var_prev->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
var_class_name34 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 129);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var_prev; /* _last_item on <self:HashCollection[nullable Object]> */
}
var_ = self;
var35 = var_->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <var_:HashCollection[nullable Object]> */
var36 = 1;
{
{ /* Inline kernel#Int#- (var35,var36) on <var35:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var39 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var43 = var35 - var36;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var37; /* _the_length on <var_:HashCollection[nullable Object]> */
var44 = var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var44;
var45 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var45;
var46 = NULL;
if (var_prev == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prev,var46) on <var_prev:nullable HashNode[nullable Object]> */
var_other16 = var46;
{
var50 = ((short int (*)(val* self, val* p0))(var_prev->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prev, var_other16) /* == on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var51 = !var50;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
var_prev->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
var52 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var52 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 139);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var52,var_i,var_next) on <var52:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_next:nullable HashNode[nullable Object]> isa E */
/* <var_next:nullable HashNode[nullable Object]> isa E */
type_struct57 = var52->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype55 = type_struct57->color;
idtype56 = type_struct57->id;
is_nullable58 = type_struct57->is_nullable;
if(var_next == NULL) {
var54 = is_nullable58;
} else {
if(cltype55 >= var_next->type->table_size) {
var54 = 0;
} else {
var54 = var_next->type->type_table[cltype55] == idtype56;
}
}
if (unlikely(!var54)) {
var_class_name59 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 808);
show_backtrace(1);
}
((struct instance_standard__NativeArray*)var52)->values[var_i]=var_next;
RET_LABEL53:(void)0;
}
}
}
var60 = NULL;
if (var_next == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var60) on <var_next:nullable HashNode[nullable Object]> */
var_other16 = var60;
{
var64 = ((short int (*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other16) /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_prev; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var66 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var66; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: HashCollection[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___raz(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var15 /* : null */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
var = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
var1 = 1;
{
{ /* Inline kernel#Int#- (var,var1) on <var:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var5 = var - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_i = var2;
for(;;) {
var6 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var6) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var13 = var_i >= var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var14 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
var15 = NULL;
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 153);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var14,var_i,var15) on <var14:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var15:null> isa E */
/* <var15:null> isa E */
type_struct = var14->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype18 = type_struct->color;
idtype19 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var15 == NULL) {
var17 = is_nullable;
} else {
if(cltype18 >= var15->type->table_size) {
var17 = 0;
} else {
var17 = var15->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name20 = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 808);
show_backtrace(1);
}
((struct instance_standard__NativeArray*)var14)->values[var_i]=var15;
RET_LABEL16:(void)0;
}
}
var21 = 1;
{
{ /* Inline kernel#Int#- (var_i,var21) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var28 = var_i - var21;
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
var29 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var29; /* _the_length on <self:HashCollection[nullable Object]> */
var30 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var30; /* _first_item on <self:HashCollection[nullable Object]> */
var31 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var31; /* _last_item on <self:HashCollection[nullable Object]> */
var32 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var32; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: HashCollection[nullable Object], Int) */
void standard__hash_collection___standard__hash_collection__HashCollection___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_old_cap /* var old_cap: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
val* var31 /* : null */;
val* var32 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var_new_array /* var new_array: NativeArray[nullable HashNode[nullable Object]] */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var_i /* var i: Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
val* var49 /* : null */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
val* var71 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
val* var72 /* : null */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
long var79 /* : Int */;
long var_index /* var index: Int */;
val* var80 /* : nullable Object */;
val* var82 /* : nullable HashNode[nullable Object] */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const struct type* type_struct87;
const char* var_class_name88;
val* var89 /* : null */;
val* var90 /* : null */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : nullable HashNode[nullable Object] */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const struct type* type_struct100;
const char* var_class_name101;
var_cap = p0;
var = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
var_old_cap = var;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var2 = 1;
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
{
{ /* Inline kernel#Int#< (var_cap,var3) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var9 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var13 = var_cap < var3;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var14 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var15 = 1;
{
{ /* Inline kernel#Int#+ (var14,var15) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var22 = var14 + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_cap = var16;
} else {
}
var23 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var_cap,var23) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var30 = var_cap <= var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
goto RET_LABEL;
} else {
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var_cap; /* _capacity on <self:HashCollection[nullable Object]> */
var31 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var31; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
var32 = NEW_standard__NativeArray(var_cap, self->type->resolution_table->types[COLOR_standard__NativeArray__nullable__standard__hash_collection__HashCollection__N]);
var_new_array = var32;
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = var_new_array; /* _array on <self:HashCollection[nullable Object]> */
var33 = 1;
{
{ /* Inline kernel#Int#- (var_cap,var33) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var40 = var_cap - var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_i = var34;
for(;;) {
var41 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var41) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var48 = var_i >= var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
var49 = NULL;
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_i,var49) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var49:null> isa E */
/* <var49:null> isa E */
type_struct = var_new_array->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype52 = type_struct->color;
idtype53 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var49 == NULL) {
var51 = is_nullable;
} else {
if(cltype52 >= var49->type->table_size) {
var51 = 0;
} else {
var51 = var49->type->type_table[cltype52] == idtype53;
}
}
if (unlikely(!var51)) {
var_class_name54 = var49 == NULL ? "null" : var49->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 808);
show_backtrace(1);
}
((struct instance_standard__NativeArray*)var_new_array)->values[var_i]=var49;
RET_LABEL50:(void)0;
}
}
var55 = 1;
{
{ /* Inline kernel#Int#- (var_i,var55) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var62 = var_i - var55;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_i = var56;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var63 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var63,var_old_cap) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var_old_cap:Int> isa OTHER */
/* <var_old_cap:Int> isa OTHER */
var66 = 1; /* easy <var_old_cap:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var70 = var63 <= var_old_cap;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
goto RET_LABEL;
} else {
}
var71 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
var_node = var71;
for(;;) {
var72 = NULL;
if (var_node == NULL) {
var73 = 0; /* is null */
} else {
var73 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var72) on <var_node:nullable HashNode[nullable Object]> */
var_other = var72;
{
var76 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
var78 = var_node->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
{
var79 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var78);
}
var_index = var79;
{
{ /* Inline array#NativeArray#[] (var_new_array,var_index) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
var82 = ((struct instance_standard__NativeArray*)var_new_array)->values[var_index];
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var_next = var80;
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_index,var_node) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
/* <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
type_struct87 = var_new_array->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype85 = type_struct87->color;
idtype86 = type_struct87->id;
if(cltype85 >= var_node->type->table_size) {
var84 = 0;
} else {
var84 = var_node->type->type_table[cltype85] == idtype86;
}
if (unlikely(!var84)) {
var_class_name88 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 808);
show_backtrace(1);
}
((struct instance_standard__NativeArray*)var_new_array)->values[var_index]=var_node;
RET_LABEL83:(void)0;
}
}
var89 = NULL;
var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var89; /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var90 = NULL;
if (var_next == NULL) {
var91 = 0; /* is null */
} else {
var91 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var90) on <var_next:nullable HashNode[nullable Object]> */
var_other = var90;
{
var94 = ((short int (*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other) /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/;
}
var95 = !var94;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var96 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
/* <var96:nullable HashNode[nullable Object]> isa nullable N */
type_struct100 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype98 = type_struct100->color;
idtype99 = type_struct100->id;
if(var96 == NULL) {
var97 = 1;
} else {
if(cltype98 >= var96->type->table_size) {
var97 = 0;
} else {
var97 = var96->type->type_table[cltype98] == idtype99;
}
}
if (unlikely(!var97)) {
var_class_name101 = var96 == NULL ? "null" : var96->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 195);
show_backtrace(1);
}
var_node = var96;
} else {
goto BREAK_label102;
}
}
BREAK_label102: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashNode#key= for (self: HashNode[nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashNode___key_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashNode___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 201);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___key].val = p0; /* _key on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init]))(self) /* init on <self:HashNode[nullable Object]>*/;
}
RET_LABEL:;
}
/* method hash_collection#HashMap#[] for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 228);
show_backtrace(1);
}
var_key = p0;
{
var2 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_key);
}
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_c,var3) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var9 = var_c == var_other;
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
var10 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__MapRead__provide_default_value]))(self, var_key) /* provide_default_value on <self:HashMap[nullable Object, nullable Object]>*/;
}
var = var10;
goto RET_LABEL;
} else {
var11 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var11;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#get_or_null for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : null */;
val* var11 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 238);
show_backtrace(1);
}
var_key = p0;
{
var2 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_key);
}
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_c,var3) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var9 = var_c == var_other;
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
var10 = NULL;
var = var10;
goto RET_LABEL;
} else {
var11 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var11;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#iterator for (self: HashMap[nullable Object, nullable Object]): HashMapIterator[nullable Object, nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(val* self) {
val* var /* : HashMapIterator[nullable Object, nullable Object] */;
val* var1 /* : HashMapIterator[nullable Object, nullable Object] */;
var1 = NEW_standard__HashMapIterator(self->type->resolution_table->types[COLOR_standard__HashMapIterator__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashMapIterator__map_61d]))(var1, self) /* map= on <var1:HashMapIterator[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:HashMapIterator[nullable Object, nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#length for (self: HashMap[nullable Object, nullable Object]): Int */
long standard___standard__HashMap___standard__abstract_collection__MapRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#is_empty for (self: HashMap[nullable Object, nullable Object]): Bool */
short int standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
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
/* method hash_collection#HashMap#[]= for (self: HashMap[nullable Object, nullable Object], nullable Object, nullable Object) */
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1) {
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
val* var_key /* var key: nullable Object */;
val* var_v /* var v: nullable Object */;
long var7 /* : Int */;
long var_i /* var i: Int */;
val* var8 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : HashMapNode[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 254);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct4 = self->type->resolution_table->types[COLOR_standard__HashMap___35dV];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 254);
show_backtrace(1);
}
var_key = p0;
var_v = p1;
{
var7 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var_key);
}
var_i = var7;
{
var8 = standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(self, var_i, var_key);
}
var_c = var8;
var9 = NULL;
if (var_c == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var9) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = var9;
{
var13 = ((short int (*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/;
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val = var_key; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val = var_v; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
} else {
var15 = NEW_standard__hash_collection__HashMapNode(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapNode__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void (*)(val* self, val* p0))(var15->class->vft[COLOR_standard__hash_collection__HashNode__key_61d]))(var15, var_key) /* key= on <var15:HashMapNode[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self, val* p0))(var15->class->vft[COLOR_standard__hash_collection__HashMapNode__value_61d]))(var15, var_v) /* value= on <var15:HashMapNode[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15) /* init on <var15:HashMapNode[nullable Object, nullable Object]>*/;
}
{
standard__hash_collection___standard__hash_collection__HashCollection___store(self, var_i, var15); /* Direct call hash_collection#HashCollection#store on <self:HashMap[nullable Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashMap#clear for (self: HashMap[nullable Object, nullable Object]) */
void standard___standard__HashMap___standard__abstract_collection__Map__clear(val* self) {
{
standard__hash_collection___standard__hash_collection__HashCollection___raz(self); /* Direct call hash_collection#HashCollection#raz on <self:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#init for (self: HashMap[nullable Object, nullable Object]) */
void standard___standard__HashMap___standard__kernel__Object__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__HashMap___standard__kernel__Object__init]))(self) /* init on <self:HashMap[nullable Object, nullable Object]>*/;
}
var = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var; /* _capacity on <self:HashMap[nullable Object, nullable Object]> */
var1 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var1; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
var2 = 0;
{
standard__hash_collection___standard__hash_collection__HashCollection___enlarge(self, var2); /* Direct call hash_collection#HashCollection#enlarge on <self:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#keys for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__keys(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMap___values].val; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 276);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map for (self: HashMapKeys[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map= for (self: HashMapKeys[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__hash_collection__HashMapKeys___35dK__standard__hash_collection__HashMapKeys___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val = p0; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#first for (self: HashMapKeys[nullable Object, nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var5 /* : nullable Object */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 286);
show_backtrace(1);
}
var5 = var4->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var4:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has for (self: HashMapKeys[nullable Object, nullable Object], nullable Object): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_k /* var k: nullable Object */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : HashMap[nullable Object, nullable Object] */;
val* var5 /* : nullable HashNode[nullable Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 287);
show_backtrace(1);
}
var_k = p0;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(var2, var_k);
}
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var5,var6) on <var5:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#is_empty for (self: HashMapKeys[nullable Object, nullable Object]): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#length for (self: HashMapKeys[nullable Object, nullable Object]): Int */
long standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#iterator for (self: HashMapKeys[nullable Object, nullable Object]): Iterator[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapKeysIterator[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : HashMap[nullable Object, nullable Object] */;
val* var5 /* : HashMapIterator[nullable Object, nullable Object] */;
var1 = NEW_standard__MapKeysIterator(self->type->resolution_table->types[COLOR_standard__MapKeysIterator__standard__hash_collection__HashMapKeys___35dK__standard__hash_collection__HashMapKeys___35dV]);
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(var2);
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapKeysIterator__original_iterator_61d]))(var1, var5) /* original_iterator= on <var1:MapKeysIterator[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:MapKeysIterator[nullable Object, nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#clear for (self: HashMapKeys[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove for (self: HashMapKeys[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 296);
show_backtrace(1);
}
var_key = p0;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard__hash_collection___standard__hash_collection__HashCollection___remove_node(var1, var_key); /* Direct call hash_collection#HashCollection#remove_node on <var1:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: HashMapKeys[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init]))(self) /* init on <self:HashMapKeys[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method hash_collection#HashMapValues#map for (self: HashMapValues[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapValues___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#map= for (self: HashMapValues[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapValues___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__hash_collection__HashMapValues___35dK__standard__hash_collection__HashMapValues___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val = p0; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapValues#first for (self: HashMapValues[nullable Object, nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var5 /* : nullable Object */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 316);
show_backtrace(1);
}
var5 = var4->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var4:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has for (self: HashMapValues[nullable Object, nullable Object], nullable Object): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : HashMap[nullable Object, nullable Object] */;
val* var5 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable HashNode[nullable Object] */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 318);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[nullable Object, nullable Object]> */
var_c = var5;
for(;;) {
var6 = NULL;
if (var_c == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var6) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var12 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var12 == NULL) {
var13 = (var_item == NULL);
} else {
var14 = ((short int (*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var_item) /* == on <var12:nullable Object>*/;
var13 = var14;
}
if (var13){
var15 = 1;
var = var15;
goto RET_LABEL;
} else {
}
var16 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var17 = 0;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#is_empty for (self: HashMapValues[nullable Object, nullable Object]): Bool */
short int standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#length for (self: HashMapValues[nullable Object, nullable Object]): Int */
long standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#iterator for (self: HashMapValues[nullable Object, nullable Object]): Iterator[nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : HashMap[nullable Object, nullable Object] */;
val* var5 /* : HashMapIterator[nullable Object, nullable Object] */;
var1 = NEW_standard__MapValuesIterator(self->type->resolution_table->types[COLOR_standard__MapValuesIterator__standard__hash_collection__HashMapValues___35dK__standard__hash_collection__HashMapValues___35dV]);
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(var2);
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapValuesIterator__original_iterator_61d]))(var1, var5) /* original_iterator= on <var1:MapValuesIterator[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:MapValuesIterator[nullable Object, nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#clear for (self: HashMapValues[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove for (self: HashMapValues[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var_map /* var map: HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable HashNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues___35dV];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 345);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 303);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_map = var1;
var4 = var_map->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[nullable Object, nullable Object]> */
var_c = var4;
for(;;) {
var5 = NULL;
if (var_c == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var5) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = var5;
{
var9 = ((short int (*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var11 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var11 == NULL) {
var12 = (var_item == NULL);
} else {
var13 = ((short int (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var11, var_item) /* == on <var11:nullable Object>*/;
var12 = var13;
}
if (var12){
var14 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
{
standard__hash_collection___standard__hash_collection__HashCollection___remove_node(var_map, var14); /* Direct call hash_collection#HashCollection#remove_node on <var_map:HashMap[nullable Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var15 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#init for (self: HashMapValues[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init]))(self) /* init on <self:HashMapValues[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method hash_collection#HashMapNode#value= for (self: HashMapNode[nullable Object, nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashMapNode___value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapNode___35dV];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 374);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapNode___value].val = p0; /* _value on <self:HashMapNode[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: HashMapNode[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init]))(self) /* init on <self:HashMapNode[nullable Object, nullable Object]>*/;
}
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#is_ok for (self: HashMapIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = var2;
{
var6 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/;
}
var7 = !var6;
var4 = var7;
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
/* method hash_collection#HashMapIterator#item for (self: HashMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 384);
show_backtrace(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 385);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashMapNode[nullable Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#key for (self: HashMapIterator[nullable Object, nullable Object]): nullable Object */
val* standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 396);
show_backtrace(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 397);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashMapNode[nullable Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#next for (self: HashMapIterator[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(self);
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 402);
show_backtrace(1);
}
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 403);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashMapNode[nullable Object, nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val = var2; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#map for (self: HashMapIterator[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard___standard__HashMapIterator___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 406);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#map= for (self: HashMapIterator[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap__standard__HashMapIterator___35dK__standard__HashMapIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 406);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val = p0; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#init for (self: HashMapIterator[nullable Object, nullable Object]) */
void standard___standard__HashMapIterator___standard__kernel__Object__init(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
{
{ /* Inline hash_collection#HashMapIterator#map (self) on <self:HashMapIterator[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 406);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val = var; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 415);
show_backtrace(1);
}
var4 = var3->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var3:HashMap[nullable Object, nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val = var4; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSet#length for (self: HashSet[nullable Object]): Int */
long standard___standard__HashSet___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#is_empty for (self: HashSet[nullable Object]): Bool */
short int standard___standard__HashSet___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
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
/* method hash_collection#HashSet#first for (self: HashSet[nullable Object]): nullable Object */
val* standard___standard__HashSet___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : nullable HashNode[nullable Object] */;
val* var8 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 433);
show_backtrace(1);
}
var7 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashSet[nullable Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 434);
show_backtrace(1);
}
var8 = var7->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var7:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#has for (self: HashSet[nullable Object], nullable Object): Bool */
short int standard___standard__HashSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 437);
show_backtrace(1);
}
var_item = p0;
{
var2 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_item);
}
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,var3) on <var2:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_other) /* == on <var2:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/;
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
/* method hash_collection#HashSet#add for (self: HashSet[nullable Object], nullable Object) */
void standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashSetNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : HashSetNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 442);
show_backtrace(1);
}
var_item = p0;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var_item);
}
var_i = var1;
{
var2 = standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(self, var_i, var_item);
}
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var3) on <var_c:nullable HashSetNode[nullable Object]> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val = var_item; /* _key on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])> */
} else {
var9 = NEW_standard__hash_collection__HashSetNode(self->type->resolution_table->types[COLOR_standard__hash_collection__HashSetNode__standard__HashSet___35dE]);
{
((void (*)(val* self, val* p0))(var9->class->vft[COLOR_standard__hash_collection__HashNode__key_61d]))(var9, var_item) /* key= on <var9:HashSetNode[nullable Object]>*/;
}
{
((void (*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9) /* init on <var9:HashSetNode[nullable Object]>*/;
}
{
standard__hash_collection___standard__hash_collection__HashCollection___store(self, var_i, var9); /* Direct call hash_collection#HashCollection#store on <self:HashSet[nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: HashSet[nullable Object], nullable Object) */
void standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 453);
show_backtrace(1);
}
var_item = p0;
{
standard__hash_collection___standard__hash_collection__HashCollection___remove_node(self, var_item); /* Direct call hash_collection#HashCollection#remove_node on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#clear for (self: HashSet[nullable Object]) */
void standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear(val* self) {
{
standard__hash_collection___standard__hash_collection__HashCollection___raz(self); /* Direct call hash_collection#HashCollection#raz on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#iterator for (self: HashSet[nullable Object]): Iterator[nullable Object] */
val* standard___standard__HashSet___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashSetIterator[nullable Object] */;
var1 = NEW_standard__hash_collection__HashSetIterator(self->type->resolution_table->types[COLOR_standard__hash_collection__HashSetIterator__standard__HashSet___35dE]);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashSetIterator__set_61d]))(var1, self) /* set= on <var1:HashSetIterator[nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:HashSetIterator[nullable Object]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#init for (self: HashSet[nullable Object]) */
void standard___standard__HashSet___standard__kernel__Object__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__HashSet___standard__kernel__Object__init]))(self) /* init on <self:HashSet[nullable Object]>*/;
}
var = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var; /* _capacity on <self:HashSet[nullable Object]> */
var1 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var1; /* _the_length on <self:HashSet[nullable Object]> */
var2 = 0;
{
standard__hash_collection___standard__hash_collection__HashCollection___enlarge(self, var2); /* Direct call hash_collection#HashCollection#enlarge on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#from for (self: HashSet[nullable Object], Collection[nullable Object]) */
void standard___standard__HashSet___from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__standard__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 466);
show_backtrace(1);
}
var_coll = p0;
{
standard___standard__HashSet___standard__kernel__Object__init(self); /* Direct call hash_collection#HashSet#init on <self:HashSet[nullable Object]>*/
}
{
standard___standard__SimpleCollection___add_all(self, var_coll); /* Direct call abstract_collection#SimpleCollection#add_all on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#is_ok for (self: HashSetIterator[nullable Object]): Bool */
short int standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable HashSetNode[nullable Object]> */
var_other = var2;
{
var6 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/;
}
var7 = !var6;
var4 = var7;
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
/* method hash_collection#HashSetIterator#item for (self: HashSetIterator[nullable Object]): nullable Object */
val* standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashSetNode[nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 486);
show_backtrace(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 487);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashSetNode[nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#next for (self: HashSetIterator[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 492);
show_backtrace(1);
}
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 493);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashSetNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = var2; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#set= for (self: HashSetIterator[nullable Object], HashSet[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___set_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (set) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet__standard__hash_collection__HashSetIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 496);
show_backtrace(1);
}
self->attrs[COLOR_standard__hash_collection__HashSetIterator___set].val = p0; /* _set on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#init for (self: HashSetIterator[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashSetIterator___standard__kernel__Object__init(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
var = self->attrs[COLOR_standard__hash_collection__HashSetIterator___set].val; /* _set on <self:HashSetIterator[nullable Object]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 504);
show_backtrace(1);
}
var1 = var->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var:HashSet[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = var1; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
