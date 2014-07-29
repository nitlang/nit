#include "hash_collection.sep.0.h"
/* method hash_collection#HashCollection#index_at for (self: HashCollection[Object, HashNode[Object]], Object): Int */
long hash_collection__HashCollection__index_at(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_i /* var i: Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashCollection#0 */
/* <p0:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 35);
show_backtrace(1);
}
var_k = p0;
{
var2 = ((long (*)(val*))(var_k->class->vft[COLOR_kernel__Object__hash]))(var_k) /* hash on <var_k:Object>*/;
}
var3 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{
{ /* Inline kernel#Int#% (var2,var3) on <var2:Int> */
var6 = var2 % var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_i = var4;
var7 = 0;
{
{ /* Inline kernel#Int#< (var_i,var7) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var14 = var_i < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var17 = -var_i;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_i = var15;
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#index_at for (self: Object, Object): Int */
long VIRTUAL_hash_collection__HashCollection__index_at(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashCollection__index_at(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at for (self: HashCollection[Object, HashNode[Object]], Object): nullable HashNode[Object] */
val* hash_collection__HashCollection__node_at(val* self, val* p0) {
val* var /* : nullable HashNode[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable HashNode[Object] */;
long var7 /* : Int */;
val* var8 /* : nullable HashNode[Object] */;
val* var_res /* var res: nullable HashNode[Object] */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashCollection#0 */
/* <p0:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 43);
show_backtrace(1);
}
var_k = p0;
var2 = self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
{
{ /* Inline kernel#Object#is_same_instance (var_k,var2) on <var_k:Object> */
var5 = var_k == var2 || (var2 != NULL && var_k->class == var2->class && ((var_k->class->box_kind == 1 && ((struct instance_kernel__Int*)var_k)->value == ((struct instance_kernel__Int*)var2)->value) || (var_k->class->box_kind == 2 && ((struct instance_kernel__Bool*)var_k)->value == ((struct instance_kernel__Bool*)var2)->value) || (var_k->class->box_kind == 3 && ((struct instance_kernel__Char*)var_k)->value == ((struct instance_kernel__Char*)var2)->value) || (var_k->class->box_kind == 4 && ((struct instance_kernel__Float*)var_k)->value == ((struct instance_kernel__Float*)var2)->value) || (var_k->class->box_kind == 5 && ((struct instance_kernel__Pointer*)var_k)->value == ((struct instance_kernel__Pointer*)var2)->value) || (var_k->class->box_kind == 6 && ((struct instance_kernel__Pointer*)var_k)->value == ((struct instance_kernel__Pointer*)var2)->value)));
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var6 = self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[Object, HashNode[Object]]> */
var = var6;
goto RET_LABEL;
} else {
}
{
var7 = hash_collection__HashCollection__index_at(self, var_k);
}
{
var8 = hash_collection__HashCollection__node_at_idx(self, var7, var_k);
}
var_res = var8;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var_k; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var_res; /* _last_accessed_node on <self:HashCollection[Object, HashNode[Object]]> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at for (self: Object, Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashCollection__node_at(val* self, val* p0) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashCollection__node_at(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at_idx for (self: HashCollection[Object, HashNode[Object]], Int, Object): nullable HashNode[Object] */
val* hash_collection__HashCollection__node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_i /* var i: Int */;
val* var_k /* var k: Object */;
val* var2 /* : nullable NativeArray[nullable HashNode[Object]] */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashNode[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Object */;
val* var_ck /* var ck: Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable HashNode[Object] */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
/* Covariant cast for argument 1 (k) <p1:Object> isa HashCollection#0 */
/* <p1:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 55);
show_backtrace(1);
}
var_i = p0;
var_k = p1;
var2 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 58);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var2,var_i) on <var2:nullable NativeArray[nullable HashNode[Object]]> */
var5 = ((struct instance_array__NativeArray*)var2)->values[var_i];
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
{ /* Inline kernel#Object#!= (var_c,var6) on <var_c:nullable HashNode[Object]> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashNode[Object](HashNode[Object])>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (!var7) break;
var13 = var_c->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashNode[Object](HashNode[Object])> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 60);
show_backtrace(1);
}
var_ck = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_ck,var_k) on <var_ck:Object> */
var17 = var_ck == var_k || (var_ck->class == var_k->class && ((var_ck->class->box_kind == 1 && ((struct instance_kernel__Int*)var_ck)->value == ((struct instance_kernel__Int*)var_k)->value) || (var_ck->class->box_kind == 2 && ((struct instance_kernel__Bool*)var_ck)->value == ((struct instance_kernel__Bool*)var_k)->value) || (var_ck->class->box_kind == 3 && ((struct instance_kernel__Char*)var_ck)->value == ((struct instance_kernel__Char*)var_k)->value) || (var_ck->class->box_kind == 4 && ((struct instance_kernel__Float*)var_ck)->value == ((struct instance_kernel__Float*)var_k)->value) || (var_ck->class->box_kind == 5 && ((struct instance_kernel__Pointer*)var_ck)->value == ((struct instance_kernel__Pointer*)var_k)->value) || (var_ck->class->box_kind == 6 && ((struct instance_kernel__Pointer*)var_ck)->value == ((struct instance_kernel__Pointer*)var_k)->value)));
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_ = var15;
if (var15){
var14 = var_;
} else {
{
var19 = ((short int (*)(val*, val*))(var_ck->class->vft[COLOR_kernel__Object___61d_61d]))(var_ck, var_k) /* == on <var_ck:Object>*/;
var18 = var19;
}
var14 = var18;
}
if (var14){
goto BREAK_label;
} else {
}
var20 = var_c->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashNode[Object](HashNode[Object])> */
/* <var20:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct24 = self->type->resolution_table->types[COLOR_nullable_hash_collection__HashCollection_FT1];
cltype22 = type_struct24->color;
idtype23 = type_struct24->id;
if(var20 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var20->type->table_size) {
var21 = 0;
} else {
var21 = var20->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
var_class_name25 = var20 == NULL ? "null" : var20->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 64);
show_backtrace(1);
}
var_c = var20;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#node_at_idx for (self: Object, Int, Object): nullable HashNode[Object] */
val* VIRTUAL_hash_collection__HashCollection__node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
var1 = hash_collection__HashCollection__node_at_idx(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashCollection#store for (self: HashCollection[Object, HashNode[Object]], Int, HashNode[Object]) */
void hash_collection__HashCollection__store(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_node /* var node: HashNode[Object] */;
val* var1 /* : nullable HashNode[Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashNode[Object] */;
val* var10 /* : nullable HashNode[Object] */;
val* var11 /* : null */;
val* var12 /* : nullable NativeArray[nullable HashNode[Object]] */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable HashNode[Object] */;
val* var_next /* var next: nullable HashNode[Object] */;
val* var16 /* : nullable NativeArray[nullable HashNode[Object]] */;
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
short int var30 /* : Bool */;
val* var31 /* : Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const struct type* type_struct35;
const char* var_class_name36;
long var37 /* : Int */;
long var_l /* var l: Int */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
/* Covariant cast for argument 1 (node) <p1:HashNode[Object]> isa HashCollection#1 */
/* <p1:HashNode[Object]> isa HashCollection#1 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 69);
show_backtrace(1);
}
var_index = p0;
var_node = p1;
var1 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var2) on <var1:nullable HashNode[Object]> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable HashNode[Object](HashNode[Object])> */
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
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var_node; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
} else {
var9 = self->attrs[COLOR_hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 76);
show_backtrace(1);
}
var9->attrs[COLOR_hash_collection__HashNode___next_item].val = var_node; /* _next_item on <var9:nullable HashNode[Object]> */
}
var10 = self->attrs[COLOR_hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
var_node->attrs[COLOR_hash_collection__HashNode___prev_item].val = var10; /* _prev_item on <var_node:HashNode[Object]> */
var11 = NULL;
var_node->attrs[COLOR_hash_collection__HashNode___next_item].val = var11; /* _next_item on <var_node:HashNode[Object]> */
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var_node; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
var12 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 83);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var12,var_index) on <var12:nullable NativeArray[nullable HashNode[Object]]> */
var15 = ((struct instance_array__NativeArray*)var12)->values[var_index];
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_next = var13;
var16 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 84);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var16,var_index,var_node) on <var16:nullable NativeArray[nullable HashNode[Object]]> */
/* Covariant cast for argument 1 (item) <var_node:HashNode[Object]> isa NativeArray#0 */
/* <var_node:HashNode[Object]> isa NativeArray#0 */
type_struct21 = var16->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
if(cltype19 >= var_node->type->table_size) {
var18 = 0;
} else {
var18 = var_node->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
var_class_name22 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 662);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var16)->values[var_index]=var_node;
RET_LABEL17:(void)0;
}
}
var_node->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:HashNode[Object]> */
var23 = NULL;
if (var_next == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var23) on <var_next:nullable HashNode[Object]> */
var_other27 = var23;
{
var29 = ((short int (*)(val*, val*))(var_next->class->vft[COLOR_kernel__Object___61d_61d]))(var_next, var_other27) /* == on <var_next:nullable HashNode[Object](HashNode[Object])>*/;
var28 = var29;
}
var30 = !var28;
var25 = var30;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var_next->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
}
var31 = var_node->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_node:HashNode[Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 88);
show_backtrace(1);
}
/* <var31:Object> isa nullable HashCollection#0 */
type_struct35 = self->type->resolution_table->types[COLOR_nullable_hash_collection__HashCollection_FT0];
cltype33 = type_struct35->color;
idtype34 = type_struct35->id;
if(cltype33 >= var31->type->table_size) {
var32 = 0;
} else {
var32 = var31->type->type_table[cltype33] == idtype34;
}
if (unlikely(!var32)) {
var_class_name36 = var31 == NULL ? "null" : var31->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#0", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 88);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var31; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var_node; /* _last_accessed_node on <self:HashCollection[Object, HashNode[Object]]> */
var37 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var_l = var37;
var38 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var38) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var45 = var_l + var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
self->attrs[COLOR_hash_collection__HashCollection___length].l = var39; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var46 = 5;
{
{ /* Inline kernel#Int#+ (var_l,var46) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var53 = var_l + var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var54 = 3;
{
{ /* Inline kernel#Int#* (var47,var54) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 332);
show_backtrace(1);
}
var61 = var47 * var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var62 = 2;
{
{ /* Inline kernel#Int#/ (var55,var62) on <var55:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var69 = var55 / var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_l = var63;
var70 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{
{ /* Inline kernel#Int#>= (var_l,var70) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var77 = var_l >= var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
var78 = 2;
{
{ /* Inline kernel#Int#* (var_l,var78) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 332);
show_backtrace(1);
}
var85 = var_l * var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
hash_collection__HashCollection__enlarge(self, var79); /* Direct call hash_collection#HashCollection#enlarge on <self:HashCollection[Object, HashNode[Object]]>*/
}
} else {
}
RET_LABEL:;
}
/* method hash_collection#HashCollection#store for (self: Object, Int, HashNode[Object]) */
void VIRTUAL_hash_collection__HashCollection__store(val* self, long p0, val* p1) {
hash_collection__HashCollection__store(self, p0, p1); /* Direct call hash_collection#HashCollection#store on <self:Object(HashCollection[Object, HashNode[Object]])>*/
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: HashCollection[Object, HashNode[Object]], Object) */
void hash_collection__HashCollection__remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[Object] */;
val* var_node /* var node: nullable HashNode[Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable HashNode[Object] */;
val* var_prev /* var prev: nullable HashNode[Object] */;
val* var11 /* : nullable HashNode[Object] */;
val* var_next /* var next: nullable HashNode[Object] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const struct type* type_struct23;
const char* var_class_name24;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const struct type* type_struct35;
const char* var_class_name36;
val* var_ /* var : HashCollection[Object, HashNode[Object]] */;
long var37 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : nullable HashNode[Object] */;
val* var47 /* : nullable HashNode[Object] */;
val* var48 /* : null */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable NativeArray[nullable HashNode[Object]] */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const struct type* type_struct59;
const char* var_class_name60;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const struct type* type_struct65;
short int is_nullable;
const char* var_class_name66;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : null */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashCollection#0 */
/* <p0:Object> isa HashCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 100);
show_backtrace(1);
}
var_k = p0;
{
var1 = hash_collection__HashCollection__index_at(self, var_k);
}
var_i = var1;
{
var2 = hash_collection__HashCollection__node_at_idx(self, var_i, var_k);
}
var_node = var2;
var3 = NULL;
if (var_node == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var3) on <var_node:nullable HashNode[Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable HashNode[Object](HashNode[Object])> */
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
var10 = var_node->attrs[COLOR_hash_collection__HashNode___prev_item].val; /* _prev_item on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_prev = var10;
var11 = var_node->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_next = var11;
var12 = NULL;
if (var_prev == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prev,var12) on <var_prev:nullable HashNode[Object]> */
var_other16 = var12;
{
var18 = ((short int (*)(val*, val*))(var_prev->class->vft[COLOR_kernel__Object___61d_61d]))(var_prev, var_other16) /* == on <var_prev:nullable HashNode[Object](HashNode[Object])>*/;
var17 = var18;
}
var19 = !var17;
var14 = var19;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var_prev->attrs[COLOR_hash_collection__HashNode___next_item].val = var_next; /* _next_item on <var_prev:nullable HashNode[Object](HashNode[Object])> */
} else {
/* <var_next:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct23 = self->type->resolution_table->types[COLOR_nullable_hash_collection__HashCollection_FT1];
cltype21 = type_struct23->color;
idtype22 = type_struct23->id;
if(var_next == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_next->type->table_size) {
var20 = 0;
} else {
var20 = var_next->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
var_class_name24 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 113);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var_next; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
}
var25 = NULL;
if (var_next == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var25) on <var_next:nullable HashNode[Object]> */
var_other16 = var25;
{
var30 = ((short int (*)(val*, val*))(var_next->class->vft[COLOR_kernel__Object___61d_61d]))(var_next, var_other16) /* == on <var_next:nullable HashNode[Object](HashNode[Object])>*/;
var29 = var30;
}
var31 = !var29;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
var_next->attrs[COLOR_hash_collection__HashNode___prev_item].val = var_prev; /* _prev_item on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
/* <var_prev:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct35 = self->type->resolution_table->types[COLOR_nullable_hash_collection__HashCollection_FT1];
cltype33 = type_struct35->color;
idtype34 = type_struct35->id;
if(var_prev == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_prev->type->table_size) {
var32 = 0;
} else {
var32 = var_prev->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
var_class_name36 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 118);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var_prev; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
}
var_ = self;
var37 = var_->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <var_:HashCollection[Object, HashNode[Object]]> */
var38 = 1;
{
{ /* Inline kernel#Int#- (var37,var38) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var45 = var37 - var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_->attrs[COLOR_hash_collection__HashCollection___length].l = var39; /* _length on <var_:HashCollection[Object, HashNode[Object]]> */
var46 = var_node->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_prev = var46;
var47 = var_node->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_next = var47;
var48 = NULL;
if (var_prev == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prev,var48) on <var_prev:nullable HashNode[Object]> */
var_other16 = var48;
{
var53 = ((short int (*)(val*, val*))(var_prev->class->vft[COLOR_kernel__Object___61d_61d]))(var_prev, var_other16) /* == on <var_prev:nullable HashNode[Object](HashNode[Object])>*/;
var52 = var53;
}
var54 = !var52;
var50 = var54;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
var_prev->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_prev:nullable HashNode[Object](HashNode[Object])> */
} else {
var55 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
/* <var_next:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct59 = self->type->resolution_table->types[COLOR_nullable_hash_collection__HashCollection_FT1];
cltype57 = type_struct59->color;
idtype58 = type_struct59->id;
if(var_next == NULL) {
var56 = 1;
} else {
if(cltype57 >= var_next->type->table_size) {
var56 = 0;
} else {
var56 = var_next->type->type_table[cltype57] == idtype58;
}
}
if (unlikely(!var56)) {
var_class_name60 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 128);
show_backtrace(1);
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 128);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var55,var_i,var_next) on <var55:nullable NativeArray[nullable HashNode[Object]]> */
/* Covariant cast for argument 1 (item) <var_next:nullable HashNode[Object]> isa NativeArray#0 */
/* <var_next:nullable HashNode[Object]> isa NativeArray#0 */
type_struct65 = var55->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype63 = type_struct65->color;
idtype64 = type_struct65->id;
is_nullable = type_struct65->is_nullable;
if(var_next == NULL) {
var62 = is_nullable;
} else {
if(cltype63 >= var_next->type->table_size) {
var62 = 0;
} else {
var62 = var_next->type->type_table[cltype63] == idtype64;
}
}
if (unlikely(!var62)) {
var_class_name66 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 662);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var55)->values[var_i]=var_next;
RET_LABEL61:(void)0;
}
}
}
var67 = NULL;
if (var_next == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var67) on <var_next:nullable HashNode[Object]> */
var_other16 = var67;
{
var72 = ((short int (*)(val*, val*))(var_next->class->vft[COLOR_kernel__Object___61d_61d]))(var_next, var_other16) /* == on <var_next:nullable HashNode[Object](HashNode[Object])>*/;
var71 = var72;
}
var73 = !var71;
var69 = var73;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
var_next->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var_prev; /* _prev_in_bucklet on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
}
var74 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var74; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: Object, Object) */
void VIRTUAL_hash_collection__HashCollection__remove_node(val* self, val* p0) {
hash_collection__HashCollection__remove_node(self, p0); /* Direct call hash_collection#HashCollection#remove_node on <self:Object(HashCollection[Object, HashNode[Object]])>*/
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: HashCollection[Object, HashNode[Object]]) */
void hash_collection__HashCollection__raz(val* self) {
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
val* var14 /* : nullable NativeArray[nullable HashNode[Object]] */;
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
var = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
var1 = 1;
{
{ /* Inline kernel#Int#- (var,var1) on <var:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
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
var_class_name12 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var13 = var_i >= var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (!var7) break;
var14 = self->attrs[COLOR_hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
var15 = NULL;
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 142);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[]= (var14,var_i,var15) on <var14:nullable NativeArray[nullable HashNode[Object]]> */
/* Covariant cast for argument 1 (item) <var15:null> isa NativeArray#0 */
/* <var15:null> isa NativeArray#0 */
type_struct = var14->type->resolution_table->types[COLOR_array__NativeArray_FT0];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 662);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var14)->values[var_i]=var15;
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
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var28 = var_i - var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var29 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var29; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var30 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var30; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var31 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var31; /* _last_item on <self:HashCollection[Object, HashNode[Object]]> */
var32 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var32; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: Object) */
void VIRTUAL_hash_collection__HashCollection__raz(val* self) {
hash_collection__HashCollection__raz(self); /* Direct call hash_collection#HashCollection#raz on <self:Object(HashCollection[Object, HashNode[Object]])>*/
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: HashCollection[Object, HashNode[Object]], Int) */
void hash_collection__HashCollection__enlarge(val* self, long p0) {
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
val* var32 /* : NativeArray[nullable Object] */;
val* var34 /* : NativeArray[nullable Object] */;
val* var_new_array /* var new_array: NativeArray[nullable HashNode[Object]] */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var_i /* var i: Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
val* var51 /* : null */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name56;
long var57 /* : Int */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
short int var72 /* : Bool */;
val* var73 /* : nullable HashNode[Object] */;
val* var_node /* var node: nullable HashNode[Object] */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : Object */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const struct type* type_struct85;
const char* var_class_name86;
long var87 /* : Int */;
long var_index /* var index: Int */;
val* var88 /* : nullable Object */;
val* var90 /* : nullable HashNode[Object] */;
val* var_next /* var next: nullable HashNode[Object] */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const struct type* type_struct95;
const char* var_class_name96;
val* var97 /* : null */;
val* var98 /* : null */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : nullable HashNode[Object] */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const struct type* type_struct109;
const char* var_class_name110;
var_cap = p0;
var = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
var_old_cap = var;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var2 = 1;
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
var_class_name12 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var13 = var_cap < var3;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var14 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashCollection[Object, HashNode[Object]]> */
var15 = 1;
{
{ /* Inline kernel#Int#+ (var14,var15) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
var23 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{
{ /* Inline kernel#Int#<= (var_cap,var23) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
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
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var_cap; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
var31 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var31; /* _last_accessed_key on <self:HashCollection[Object, HashNode[Object]]> */
{
{ /* Inline array#ArrayCapable#calloc_array (self,var_cap) on <self:HashCollection[Object, HashNode[Object]]> */
var34 = NEW_array__NativeArray(var_cap, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_new_array = var32;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var_new_array; /* _array on <self:HashCollection[Object, HashNode[Object]]> */
var35 = 1;
{
{ /* Inline kernel#Int#- (var_cap,var35) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var42 = var_cap - var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
for(;;) {
var43 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var43) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var50 = var_i >= var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (!var44) break;
var51 = NULL;
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_i,var51) on <var_new_array:NativeArray[nullable HashNode[Object]]> */
/* Covariant cast for argument 1 (item) <var51:null> isa NativeArray#0 */
/* <var51:null> isa NativeArray#0 */
type_struct = var_new_array->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype54 = type_struct->color;
idtype55 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var51 == NULL) {
var53 = is_nullable;
} else {
if(cltype54 >= var51->type->table_size) {
var53 = 0;
} else {
var53 = var51->type->type_table[cltype54] == idtype55;
}
}
if (unlikely(!var53)) {
var_class_name56 = var51 == NULL ? "null" : var51->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 662);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var_new_array)->values[var_i]=var51;
RET_LABEL52:(void)0;
}
}
var57 = 1;
{
{ /* Inline kernel#Int#- (var_i,var57) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var57:Int> isa OTHER */
/* <var57:Int> isa OTHER */
var60 = 1; /* easy <var57:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var64 = var_i - var57;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_i = var58;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var65 = self->attrs[COLOR_hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[Object, HashNode[Object]]> */
{
{ /* Inline kernel#Int#<= (var65,var_old_cap) on <var65:Int> */
/* Covariant cast for argument 0 (i) <var_old_cap:Int> isa OTHER */
/* <var_old_cap:Int> isa OTHER */
var68 = 1; /* easy <var_old_cap:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var72 = var65 <= var_old_cap;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
goto RET_LABEL;
} else {
}
var73 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[Object, HashNode[Object]]> */
var_node = var73;
for(;;) {
var74 = NULL;
if (var_node == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var74) on <var_node:nullable HashNode[Object]> */
var_other = var74;
{
var79 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable HashNode[Object](HashNode[Object])>*/;
var78 = var79;
}
var80 = !var78;
var76 = var80;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (!var75) break;
var81 = var_node->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_node:nullable HashNode[Object](HashNode[Object])> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 177);
show_backtrace(1);
}
/* <var81:Object> isa HashCollection#0 */
type_struct85 = self->type->resolution_table->types[COLOR_hash_collection__HashCollection_FT0];
cltype83 = type_struct85->color;
idtype84 = type_struct85->id;
if(cltype83 >= var81->type->table_size) {
var82 = 0;
} else {
var82 = var81->type->type_table[cltype83] == idtype84;
}
if (unlikely(!var82)) {
var_class_name86 = var81 == NULL ? "null" : var81->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashCollection#0", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 177);
show_backtrace(1);
}
{
var87 = hash_collection__HashCollection__index_at(self, var81);
}
var_index = var87;
{
{ /* Inline array#NativeArray#[] (var_new_array,var_index) on <var_new_array:NativeArray[nullable HashNode[Object]]> */
var90 = ((struct instance_array__NativeArray*)var_new_array)->values[var_index];
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_next = var88;
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_index,var_node) on <var_new_array:NativeArray[nullable HashNode[Object]]> */
/* Covariant cast for argument 1 (item) <var_node:nullable HashNode[Object](HashNode[Object])> isa NativeArray#0 */
/* <var_node:nullable HashNode[Object](HashNode[Object])> isa NativeArray#0 */
type_struct95 = var_new_array->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype93 = type_struct95->color;
idtype94 = type_struct95->id;
if(cltype93 >= var_node->type->table_size) {
var92 = 0;
} else {
var92 = var_node->type->type_table[cltype93] == idtype94;
}
if (unlikely(!var92)) {
var_class_name96 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 662);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var_new_array)->values[var_index]=var_node;
RET_LABEL91:(void)0;
}
}
var97 = NULL;
var_node->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var97; /* _prev_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var_node->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:nullable HashNode[Object](HashNode[Object])> */
var98 = NULL;
if (var_next == NULL) {
var99 = 0; /* is null */
} else {
var99 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,var98) on <var_next:nullable HashNode[Object]> */
var_other = var98;
{
var103 = ((short int (*)(val*, val*))(var_next->class->vft[COLOR_kernel__Object___61d_61d]))(var_next, var_other) /* == on <var_next:nullable HashNode[Object](HashNode[Object])>*/;
var102 = var103;
}
var104 = !var102;
var100 = var104;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
var_next->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[Object](HashNode[Object])> */
} else {
}
var105 = var_node->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[Object](HashNode[Object])> */
/* <var105:nullable HashNode[Object]> isa nullable HashCollection#1 */
type_struct109 = self->type->resolution_table->types[COLOR_nullable_hash_collection__HashCollection_FT1];
cltype107 = type_struct109->color;
idtype108 = type_struct109->id;
if(var105 == NULL) {
var106 = 1;
} else {
if(cltype107 >= var105->type->table_size) {
var106 = 0;
} else {
var106 = var105->type->type_table[cltype107] == idtype108;
}
}
if (unlikely(!var106)) {
var_class_name110 = var105 == NULL ? "null" : var105->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashCollection#1", var_class_name110);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 184);
show_backtrace(1);
}
var_node = var105;
CONTINUE_label111: (void)0;
}
BREAK_label111: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: Object, Int) */
void VIRTUAL_hash_collection__HashCollection__enlarge(val* self, long p0) {
hash_collection__HashCollection__enlarge(self, p0); /* Direct call hash_collection#HashCollection#enlarge on <self:Object(HashCollection[Object, HashNode[Object]])>*/
RET_LABEL:;
}
/* method hash_collection#HashCollection#init for (self: HashCollection[Object, HashNode[Object]]) */
void hash_collection__HashCollection__init(val* self) {
RET_LABEL:;
}
/* method hash_collection#HashCollection#init for (self: Object) */
void VIRTUAL_hash_collection__HashCollection__init(val* self) {
{ /* Inline hash_collection#HashCollection#init (self) on <self:Object(HashCollection[Object, HashNode[Object]])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: HashNode[Object], Object) */
void hash_collection__HashNode__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashNode#0 */
/* <p0:Object> isa HashNode#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashNode#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 196);
show_backtrace(1);
}
var_k = p0;
self->attrs[COLOR_hash_collection__HashNode___key].val = var_k; /* _key on <self:HashNode[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: Object, Object) */
void VIRTUAL_hash_collection__HashNode__init(val* self, val* p0) {
hash_collection__HashNode__init(self, p0); /* Direct call hash_collection#HashNode#init on <self:Object(HashNode[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMap#[] for (self: HashMap[Object, nullable Object], Object): nullable Object */
val* hash_collection__HashMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var2 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Object */;
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 208);
show_backtrace(1);
}
var_key = p0;
{
var2 = hash_collection__HashCollection__node_at(self, var_key);
}
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_c,var3) on <var_c:nullable HashMapNode[Object, nullable Object]> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
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
var10 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__MapRead__provide_default_value]))(self, var_key) /* provide_default_value on <self:HashMap[Object, nullable Object]>*/;
}
var = var10;
goto RET_LABEL;
} else {
var11 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var = var11;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#[] for (self: Object, Object): nullable Object */
val* VIRTUAL_hash_collection__HashMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = hash_collection__HashMap___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#iterator for (self: HashMap[Object, nullable Object]): HashMapIterator[Object, nullable Object] */
val* hash_collection__HashMap__iterator(val* self) {
val* var /* : HashMapIterator[Object, nullable Object] */;
val* var1 /* : HashMapIterator[Object, nullable Object] */;
var1 = NEW_hash_collection__HashMapIterator(self->type->resolution_table->types[COLOR_hash_collection__HashMapIteratorhash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
{
hash_collection__HashMapIterator__init(var1, self); /* Direct call hash_collection#HashMapIterator#init on <var1:HashMapIterator[Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_hash_collection__HashMap__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : HashMapIterator[Object, nullable Object] */;
var1 = hash_collection__HashMap__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#length for (self: HashMap[Object, nullable Object]): Int */
long hash_collection__HashMap__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashMap[Object, nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashMap__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMap__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#is_empty for (self: HashMap[Object, nullable Object]): Bool */
short int hash_collection__HashMap__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashMap[Object, nullable Object]> */
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
/* method hash_collection#HashMap#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMap__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMap__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#[]= for (self: HashMap[Object, nullable Object], Object, nullable Object) */
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_key /* var key: Object */;
val* var_v /* var v: nullable Object */;
long var6 /* : Int */;
long var_i /* var i: Int */;
val* var7 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : HashMapNode[Object, nullable Object] */;
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 224);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa Map#1 */
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
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map#1", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 224);
show_backtrace(1);
}
var_key = p0;
var_v = p1;
{
var6 = hash_collection__HashCollection__index_at(self, var_key);
}
var_i = var6;
{
var7 = hash_collection__HashCollection__node_at_idx(self, var_i, var_key);
}
var_c = var7;
var8 = NULL;
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var8) on <var_c:nullable HashMapNode[Object, nullable Object]> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var_c->attrs[COLOR_hash_collection__HashNode___key].val = var_key; /* _key on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c->attrs[COLOR_hash_collection__HashMapNode___value].val = var_v; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
} else {
var15 = NEW_hash_collection__HashMapNode(self->type->resolution_table->types[COLOR_hash_collection__HashMapNodehash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
{
hash_collection__HashMapNode__init(var15, var_key, var_v); /* Direct call hash_collection#HashMapNode#init on <var15:HashMapNode[Object, nullable Object]>*/
}
{
hash_collection__HashCollection__store(self, var_i, var15); /* Direct call hash_collection#HashCollection#store on <self:HashMap[Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashMap#[]= for (self: Object, Object, nullable Object) */
void VIRTUAL_hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1) {
hash_collection__HashMap___91d_93d_61d(self, p0, p1); /* Direct call hash_collection#HashMap#[]= on <self:Object(HashMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMap#clear for (self: HashMap[Object, nullable Object]) */
void hash_collection__HashMap__clear(val* self) {
{
hash_collection__HashCollection__raz(self); /* Direct call hash_collection#HashCollection#raz on <self:HashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#clear for (self: Object) */
void VIRTUAL_hash_collection__HashMap__clear(val* self) {
hash_collection__HashMap__clear(self); /* Direct call hash_collection#HashMap#clear on <self:Object(HashMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMap#init for (self: HashMap[Object, nullable Object]) */
void hash_collection__HashMap__init(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline hash_collection#HashCollection#init (self) on <self:HashMap[Object, nullable Object]> */
RET_LABEL1:(void)0;
}
}
var = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var; /* _capacity on <self:HashMap[Object, nullable Object]> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:HashMap[Object, nullable Object]> */
var3 = 0;
{
hash_collection__HashCollection__enlarge(self, var3); /* Direct call hash_collection#HashCollection#enlarge on <self:HashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#init for (self: Object) */
void VIRTUAL_hash_collection__HashMap__init(val* self) {
hash_collection__HashMap__init(self); /* Direct call hash_collection#HashMap#init on <self:Object(HashMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMap#keys for (self: HashMap[Object, nullable Object]): RemovableCollection[Object] */
val* hash_collection__HashMap__keys(val* self) {
val* var /* : RemovableCollection[Object] */;
val* var1 /* : RemovableCollection[Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <self:HashMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#keys for (self: Object): Collection[Object] */
val* VIRTUAL_hash_collection__HashMap__keys(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : RemovableCollection[Object] */;
val* var3 /* : RemovableCollection[Object] */;
{ /* Inline hash_collection#HashMap#keys (self) on <self:Object(HashMap[Object, nullable Object])> */
var3 = self->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <self:Object(HashMap[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values for (self: HashMap[Object, nullable Object]): RemovableCollection[nullable Object] */
val* hash_collection__HashMap__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMap___values].val; /* _values on <self:HashMap[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 246);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values for (self: Object): Collection[nullable Object] */
val* VIRTUAL_hash_collection__HashMap__values(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : RemovableCollection[nullable Object] */;
val* var3 /* : RemovableCollection[nullable Object] */;
{ /* Inline hash_collection#HashMap#values (self) on <self:Object(HashMap[Object, nullable Object])> */
var3 = self->attrs[COLOR_hash_collection__HashMap___values].val; /* _values on <self:Object(HashMap[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 246);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map for (self: HashMapKeys[Object, nullable Object]): HashMap[Object, nullable Object] */
val* hash_collection__HashMapKeys__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#map for (self: Object): HashMap[Object, nullable Object] */
val* VIRTUAL_hash_collection__HashMapKeys__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:Object(HashMapKeys[Object, nullable Object])> */
var3 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:Object(HashMapKeys[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#first for (self: HashMapKeys[Object, nullable Object]): Object */
val* hash_collection__HashMapKeys__first(val* self) {
val* var /* : Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
val* var4 /* : nullable HashNode[Object] */;
val* var5 /* : Object */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 256);
show_backtrace(1);
}
var5 = var4->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var4:nullable HashNode[Object](nullable HashMapNode[Object, nullable Object])> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 256);
show_backtrace(1);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#first for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashMapKeys__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashMapKeys__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#has for (self: HashMapKeys[Object, nullable Object], Object): Bool */
short int hash_collection__HashMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_k /* var k: Object */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var4 /* : HashMap[Object, nullable Object] */;
val* var5 /* : nullable HashNode[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 257);
show_backtrace(1);
}
var_k = p0;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var4 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = hash_collection__HashCollection__node_at(var2, var_k);
}
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var5,var6) on <var5:nullable HashNode[Object](nullable HashMapNode[Object, nullable Object])> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
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
/* method hash_collection#HashMapKeys#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapKeys__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#is_empty for (self: HashMapKeys[Object, nullable Object]): Bool */
short int hash_collection__HashMapKeys__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = hash_collection__HashMap__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMapKeys__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapKeys__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#length for (self: HashMapKeys[Object, nullable Object]): Int */
long hash_collection__HashMapKeys__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = hash_collection__HashMap__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashMapKeys__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMapKeys__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#iterator for (self: HashMapKeys[Object, nullable Object]): Iterator[Object] */
val* hash_collection__HashMapKeys__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : MapKeysIterator[Object, nullable Object] */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var4 /* : HashMap[Object, nullable Object] */;
val* var5 /* : HashMapIterator[Object, nullable Object] */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_abstract_collection__MapKeysIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapKeysIteratorhash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1]);
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var4 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = hash_collection__HashMap__iterator(var2);
}
{
{ /* Inline abstract_collection#MapKeysIterator#init (var1,var5) on <var1:MapKeysIterator[Object, nullable Object]> */
/* Covariant cast for argument 0 (original_iterator) <var5:HashMapIterator[Object, nullable Object]> isa MapIterator[MapKeysIterator#0, MapKeysIterator#1] */
/* <var5:HashMapIterator[Object, nullable Object]> isa MapIterator[MapKeysIterator#0, MapKeysIterator#1] */
type_struct = var1->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapKeysIterator_FT0abstract_collection__MapKeysIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var5->type->table_size) {
var7 = 0;
} else {
var7 = var5->type->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[MapKeysIterator#0, MapKeysIterator#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/abstract_collection.nit", 528);
show_backtrace(1);
}
var1->attrs[COLOR_abstract_collection__MapKeysIterator___original_iterator].val = var5; /* _original_iterator on <var1:MapKeysIterator[Object, nullable Object]> */
RET_LABEL6:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_hash_collection__HashMapKeys__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = hash_collection__HashMapKeys__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapKeys#clear for (self: HashMapKeys[Object, nullable Object]) */
void hash_collection__HashMapKeys__clear(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var2 /* : HashMap[Object, nullable Object] */;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var2 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#clear for (self: Object) */
void VIRTUAL_hash_collection__HashMapKeys__clear(val* self) {
hash_collection__HashMapKeys__clear(self); /* Direct call hash_collection#HashMapKeys#clear on <self:Object(HashMapKeys[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove for (self: HashMapKeys[Object, nullable Object], Object) */
void hash_collection__HashMapKeys__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 266);
show_backtrace(1);
}
var_key = p0;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
hash_collection__HashCollection__remove_node(var1, var_key); /* Direct call hash_collection#HashCollection#remove_node on <var1:HashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#remove for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapKeys__remove(val* self, val* p0) {
hash_collection__HashMapKeys__remove(self, p0); /* Direct call hash_collection#HashMapKeys#remove on <self:Object(HashMapKeys[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: HashMapKeys[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapKeys__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapKeys#0, HashMapKeys#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapKeys___map].val = p0; /* _map on <self:HashMapKeys[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapKeys__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline hash_collection#HashMapKeys#init (self,p0) on <self:Object(HashMapKeys[Object, nullable Object])> */
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapKeys#0, HashMapKeys#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapKeys___map].val = p0; /* _map on <self:Object(HashMapKeys[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method hash_collection#HashMapValues#map for (self: HashMapValues[Object, nullable Object]): HashMap[Object, nullable Object] */
val* hash_collection__HashMapValues__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#map for (self: Object): HashMap[Object, nullable Object] */
val* VIRTUAL_hash_collection__HashMapValues__map(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
{ /* Inline hash_collection#HashMapValues#map (self) on <self:Object(HashMapValues[Object, nullable Object])> */
var3 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:Object(HashMapValues[Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#first for (self: HashMapValues[Object, nullable Object]): nullable Object */
val* hash_collection__HashMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
val* var4 /* : nullable HashNode[Object] */;
val* var5 /* : nullable Object */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 286);
show_backtrace(1);
}
var5 = var4->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var4:nullable HashNode[Object](nullable HashMapNode[Object, nullable Object])> */
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#first for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = hash_collection__HashMapValues__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has for (self: HashMapValues[Object, nullable Object], nullable Object): Bool */
short int hash_collection__HashMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var4 /* : HashMap[Object, nullable Object] */;
val* var5 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable HashNode[Object] */;
short int var18 /* : Bool */;
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 288);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var4 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = var2->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var2:HashMap[Object, nullable Object]> */
var_c = var5;
for(;;) {
var6 = NULL;
if (var_c == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var6) on <var_c:nullable HashMapNode[Object, nullable Object]> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (!var7) break;
var13 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var13 == NULL) {
var14 = (var_item == NULL);
} else {
var15 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_item) /* == on <var13:nullable Object>*/;
var14 = var15;
}
if (var14){
var16 = 1;
var = var16;
goto RET_LABEL;
} else {
}
var17 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var17;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var18 = 0;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapValues__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#is_empty for (self: HashMapValues[Object, nullable Object]): Bool */
short int hash_collection__HashMapValues__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = hash_collection__HashMap__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMapValues__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapValues__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#length for (self: HashMapValues[Object, nullable Object]): Int */
long hash_collection__HashMapValues__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = hash_collection__HashMap__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashMapValues__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashMapValues__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#iterator for (self: HashMapValues[Object, nullable Object]): Iterator[nullable Object] */
val* hash_collection__HashMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[Object, nullable Object] */;
val* var2 /* : HashMap[Object, nullable Object] */;
val* var4 /* : HashMap[Object, nullable Object] */;
val* var5 /* : HashMapIterator[Object, nullable Object] */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_abstract_collection__MapValuesIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapValuesIteratorhash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1]);
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var4 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = hash_collection__HashMap__iterator(var2);
}
{
{ /* Inline abstract_collection#MapValuesIterator#init (var1,var5) on <var1:MapValuesIterator[Object, nullable Object]> */
/* Covariant cast for argument 0 (original_iterator) <var5:HashMapIterator[Object, nullable Object]> isa MapIterator[MapValuesIterator#0, MapValuesIterator#1] */
/* <var5:HashMapIterator[Object, nullable Object]> isa MapIterator[MapValuesIterator#0, MapValuesIterator#1] */
type_struct = var1->type->resolution_table->types[COLOR_abstract_collection__MapIteratorabstract_collection__MapValuesIterator_FT0abstract_collection__MapValuesIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var5->type->table_size) {
var7 = 0;
} else {
var7 = var5->type->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[MapValuesIterator#0, MapValuesIterator#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/abstract_collection.nit", 539);
show_backtrace(1);
}
var1->attrs[COLOR_abstract_collection__MapValuesIterator___original_iterator].val = var5; /* _original_iterator on <var1:MapValuesIterator[Object, nullable Object]> */
RET_LABEL6:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_hash_collection__HashMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = hash_collection__HashMapValues__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapValues#clear for (self: HashMapValues[Object, nullable Object]) */
void hash_collection__HashMapValues__clear(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var2 /* : HashMap[Object, nullable Object] */;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var2 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapValues#clear for (self: Object) */
void VIRTUAL_hash_collection__HashMapValues__clear(val* self) {
hash_collection__HashMapValues__clear(self); /* Direct call hash_collection#HashMapValues#clear on <self:Object(HashMapValues[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove for (self: HashMapValues[Object, nullable Object], nullable Object) */
void hash_collection__HashMapValues__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
val* var_map /* var map: HashMap[Object, nullable Object] */;
val* var4 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashMapNode[Object, nullable Object] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Object */;
val* var16 /* : nullable HashNode[Object] */;
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 315);
show_backtrace(1);
}
var_item = p0;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[Object, nullable Object]> */
var3 = self->attrs[COLOR_hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 273);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_map = var1;
var4 = var_map->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[Object, nullable Object]> */
var_c = var4;
for(;;) {
var5 = NULL;
if (var_c == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var5) on <var_c:nullable HashMapNode[Object, nullable Object]> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (!var6) break;
var12 = var_c->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (var12 == NULL) {
var13 = (var_item == NULL);
} else {
var14 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_item) /* == on <var12:nullable Object>*/;
var13 = var14;
}
if (var13){
var15 = var_c->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 321);
show_backtrace(1);
}
{
hash_collection__HashCollection__remove_node(var_map, var15); /* Direct call hash_collection#HashCollection#remove_node on <var_map:HashMap[Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var16 = var_c->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])> */
var_c = var16;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection#HashMapValues#remove for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapValues__remove(val* self, val* p0) {
hash_collection__HashMapValues__remove(self, p0); /* Direct call hash_collection#HashMapValues#remove on <self:Object(HashMapValues[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMapValues#init for (self: HashMapValues[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapValues__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapValues#0, HashMapValues#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 270);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapValues___map].val = p0; /* _map on <self:HashMapValues[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapValues#init for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapValues__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline hash_collection#HashMapValues#init (self,p0) on <self:Object(HashMapValues[Object, nullable Object])> */
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapValues#0, HashMapValues#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapValues#0, HashMapValues#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 270);
show_backtrace(1);
}
self->attrs[COLOR_hash_collection__HashMapValues___map].val = p0; /* _map on <self:Object(HashMapValues[Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: HashMapNode[Object, nullable Object], Object, nullable Object) */
void hash_collection__HashMapNode__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_k /* var k: Object */;
val* var_v /* var v: nullable Object */;
/* Covariant cast for argument 0 (k) <p0:Object> isa HashMapNode#0 */
/* <p0:Object> isa HashMapNode#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMapNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMapNode#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 346);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa HashMapNode#1 */
/* <p1:nullable Object> isa HashMapNode#1 */
type_struct4 = self->type->resolution_table->types[COLOR_hash_collection__HashMapNode_FT1];
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
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMapNode#1", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 346);
show_backtrace(1);
}
var_k = p0;
var_v = p1;
{
hash_collection__HashNode__init(self, var_k); /* Direct call hash_collection#HashNode#init on <self:HashMapNode[Object, nullable Object]>*/
}
self->attrs[COLOR_hash_collection__HashMapNode___value].val = var_v; /* _value on <self:HashMapNode[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: Object, Object, nullable Object) */
void VIRTUAL_hash_collection__HashMapNode__init(val* self, val* p0, val* p1) {
hash_collection__HashMapNode__init(self, p0, p1); /* Direct call hash_collection#HashMapNode#init on <self:Object(HashMapNode[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#is_ok for (self: HashMapIterator[Object, nullable Object]): Bool */
short int hash_collection__HashMapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[Object, nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable HashMapNode[Object, nullable Object]> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable HashMapNode[Object, nullable Object](HashMapNode[Object, nullable Object])>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
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
/* method hash_collection#HashMapIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashMapIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashMapIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#item for (self: HashMapIterator[Object, nullable Object]): nullable Object */
val* hash_collection__HashMapIterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = hash_collection__HashMapIterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 359);
show_backtrace(1);
}
var2 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 360);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashMapNode[Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#item for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashMapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = hash_collection__HashMapIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#key for (self: HashMapIterator[Object, nullable Object]): Object */
val* hash_collection__HashMapIterator__key(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[Object, nullable Object] */;
val* var3 /* : Object */;
{
var1 = hash_collection__HashMapIterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 371);
show_backtrace(1);
}
var2 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 372);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var2:nullable HashMapNode[Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 372);
show_backtrace(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#key for (self: Object): Object */
val* VIRTUAL_hash_collection__HashMapIterator__key(val* self) {
val* var /* : Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashMapIterator__key(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMapIterator#next for (self: HashMapIterator[Object, nullable Object]) */
void hash_collection__HashMapIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[Object, nullable Object] */;
val* var2 /* : nullable HashNode[Object] */;
{
var = hash_collection__HashMapIterator__is_ok(self);
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 377);
show_backtrace(1);
}
var1 = self->attrs[COLOR_hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 378);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashMapNode[Object, nullable Object]> */
self->attrs[COLOR_hash_collection__HashMapIterator___node].val = var2; /* _node on <self:HashMapIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#next for (self: Object) */
void VIRTUAL_hash_collection__HashMapIterator__next(val* self) {
hash_collection__HashMapIterator__next(self); /* Direct call hash_collection#HashMapIterator#next on <self:Object(HashMapIterator[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#init for (self: HashMapIterator[Object, nullable Object], HashMap[Object, nullable Object]) */
void hash_collection__HashMapIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_map /* var map: HashMap[Object, nullable Object] */;
val* var1 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (map) <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapIterator#0, HashMapIterator#1] */
/* <p0:HashMap[Object, nullable Object]> isa HashMap[HashMapIterator#0, HashMapIterator#1] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapIterator_FT0hash_collection__HashMapIterator_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapIterator#0, HashMapIterator#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 387);
show_backtrace(1);
}
var_map = p0;
self->attrs[COLOR_hash_collection__HashMapIterator___map].val = var_map; /* _map on <self:HashMapIterator[Object, nullable Object]> */
var1 = var_map->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[Object, nullable Object]> */
self->attrs[COLOR_hash_collection__HashMapIterator___node].val = var1; /* _node on <self:HashMapIterator[Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#init for (self: Object, HashMap[Object, nullable Object]) */
void VIRTUAL_hash_collection__HashMapIterator__init(val* self, val* p0) {
hash_collection__HashMapIterator__init(self, p0); /* Direct call hash_collection#HashMapIterator#init on <self:Object(HashMapIterator[Object, nullable Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSet#length for (self: HashSet[Object]): Int */
long hash_collection__HashSet__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashSet[Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#length for (self: Object): Int */
long VIRTUAL_hash_collection__HashSet__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = hash_collection__HashSet__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#is_empty for (self: HashSet[Object]): Bool */
short int hash_collection__HashSet__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashSet[Object]> */
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
/* method hash_collection#HashSet#is_empty for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashSet__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashSet__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#first for (self: HashSet[Object]): Object */
val* hash_collection__HashSet__first(val* self) {
val* var /* : Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : nullable HashNode[Object] */;
val* var8 /* : Object */;
var1 = self->attrs[COLOR_hash_collection__HashCollection___length].l; /* _length on <self:HashSet[Object]> */
var2 = 0;
{
{ /* Inline kernel#Int#> (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 406);
show_backtrace(1);
}
var7 = self->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashSet[Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 407);
show_backtrace(1);
}
var8 = var7->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var7:nullable HashNode[Object](nullable HashSetNode[Object])> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 407);
show_backtrace(1);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#first for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashSet__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashSet__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#has for (self: HashSet[Object], Object): Bool */
short int hash_collection__HashSet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Object */;
val* var2 /* : nullable HashNode[Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 410);
show_backtrace(1);
}
var_item = p0;
{
var2 = hash_collection__HashCollection__node_at(self, var_item);
}
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,var3) on <var2:nullable HashNode[Object](nullable HashSetNode[Object])> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var_other) /* == on <var2:nullable HashSetNode[Object](HashSetNode[Object])>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
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
/* method hash_collection#HashSet#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_hash_collection__HashSet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashSet__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#add for (self: HashSet[Object], Object) */
void hash_collection__HashSet__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_item /* var item: Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
val* var2 /* : nullable HashNode[Object] */;
val* var_c /* var c: nullable HashSetNode[Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : HashSetNode[Object] */;
/* Covariant cast for argument 0 (item) <p0:Object> isa SimpleCollection#0 */
/* <p0:Object> isa SimpleCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 415);
show_backtrace(1);
}
var_item = p0;
{
var1 = hash_collection__HashCollection__index_at(self, var_item);
}
var_i = var1;
{
var2 = hash_collection__HashCollection__node_at_idx(self, var_i, var_item);
}
var_c = var2;
var3 = NULL;
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var3) on <var_c:nullable HashSetNode[Object]> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable HashSetNode[Object](HashSetNode[Object])>*/;
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
var_c->attrs[COLOR_hash_collection__HashNode___key].val = var_item; /* _key on <var_c:nullable HashSetNode[Object](HashSetNode[Object])> */
} else {
var10 = NEW_hash_collection__HashSetNode(self->type->resolution_table->types[COLOR_hash_collection__HashSetNodehash_collection__HashSet_FT0]);
{
hash_collection__HashSetNode__init(var10, var_item); /* Direct call hash_collection#HashSetNode#init on <var10:HashSetNode[Object]>*/
}
{
hash_collection__HashCollection__store(self, var_i, var10); /* Direct call hash_collection#HashCollection#store on <self:HashSet[Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashSet#add for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashSet__add(val* self, val* p0) {
hash_collection__HashSet__add(self, p0); /* Direct call hash_collection#HashSet#add on <self:Object(HashSet[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: HashSet[Object], Object) */
void hash_collection__HashSet__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 426);
show_backtrace(1);
}
var_item = p0;
{
hash_collection__HashCollection__remove_node(self, var_item); /* Direct call hash_collection#HashCollection#remove_node on <self:HashSet[Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: Object, nullable Object) */
void VIRTUAL_hash_collection__HashSet__remove(val* self, val* p0) {
hash_collection__HashSet__remove(self, p0); /* Direct call hash_collection#HashSet#remove on <self:Object(HashSet[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSet#clear for (self: HashSet[Object]) */
void hash_collection__HashSet__clear(val* self) {
{
hash_collection__HashCollection__raz(self); /* Direct call hash_collection#HashCollection#raz on <self:HashSet[Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#clear for (self: Object) */
void VIRTUAL_hash_collection__HashSet__clear(val* self) {
hash_collection__HashSet__clear(self); /* Direct call hash_collection#HashSet#clear on <self:Object(HashSet[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSet#iterator for (self: HashSet[Object]): Iterator[Object] */
val* hash_collection__HashSet__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : HashSetIterator[Object] */;
var1 = NEW_hash_collection__HashSetIterator(self->type->resolution_table->types[COLOR_hash_collection__HashSetIteratorhash_collection__HashSet_FT0]);
{
hash_collection__HashSetIterator__init(var1, self); /* Direct call hash_collection#HashSetIterator#init on <var1:HashSetIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_hash_collection__HashSet__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = hash_collection__HashSet__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#init for (self: HashSet[Object]) */
void hash_collection__HashSet__init(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline hash_collection#HashCollection#init (self) on <self:HashSet[Object]> */
RET_LABEL1:(void)0;
}
}
var = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var; /* _capacity on <self:HashSet[Object]> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:HashSet[Object]> */
var3 = 0;
{
hash_collection__HashCollection__enlarge(self, var3); /* Direct call hash_collection#HashCollection#enlarge on <self:HashSet[Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#init for (self: Object) */
void VIRTUAL_hash_collection__HashSet__init(val* self) {
hash_collection__HashSet__init(self); /* Direct call hash_collection#HashSet#init on <self:Object(HashSet[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSet#from for (self: HashSet[Object], Collection[Object]) */
void hash_collection__HashSet__from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[Object]> isa Collection[HashSet#0] */
/* <p0:Collection[Object]> isa Collection[HashSet#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionhash_collection__HashSet_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[HashSet#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 439);
show_backtrace(1);
}
var_coll = p0;
{
hash_collection__HashSet__init(self); /* Direct call hash_collection#HashSet#init on <self:HashSet[Object]>*/
}
{
abstract_collection__SimpleCollection__add_all(self, var_coll); /* Direct call abstract_collection#SimpleCollection#add_all on <self:HashSet[Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashSet#from for (self: Object, Collection[Object]) */
void VIRTUAL_hash_collection__HashSet__from(val* self, val* p0) {
hash_collection__HashSet__from(self, p0); /* Direct call hash_collection#HashSet#from on <self:Object(HashSet[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSetNode#init for (self: HashSetNode[Object], Object) */
void hash_collection__HashSetNode__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa HashSetNode#0 */
/* <p0:Object> isa HashSetNode#0 */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSetNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSetNode#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 452);
show_backtrace(1);
}
{
hash_collection__HashNode__init(self, p0); /* Direct call hash_collection#HashNode#init on <self:HashSetNode[Object]>*/
}
var_e = p0;
self->attrs[COLOR_hash_collection__HashNode___key].val = var_e; /* _key on <self:HashSetNode[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetNode#init for (self: Object, Object) */
void VIRTUAL_hash_collection__HashSetNode__init(val* self, val* p0) {
hash_collection__HashSetNode__init(self, p0); /* Direct call hash_collection#HashSetNode#init on <self:Object(HashSetNode[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#is_ok for (self: HashSetIterator[Object]): Bool */
short int hash_collection__HashSetIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable HashSetNode[Object]> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable HashSetNode[Object](HashSetNode[Object])>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
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
/* method hash_collection#HashSetIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_hash_collection__HashSetIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = hash_collection__HashSetIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#item for (self: HashSetIterator[Object]): Object */
val* hash_collection__HashSetIterator__item(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashSetNode[Object] */;
val* var3 /* : Object */;
{
var1 = hash_collection__HashSetIterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 464);
show_backtrace(1);
}
var2 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 465);
show_backtrace(1);
}
var3 = var2->attrs[COLOR_hash_collection__HashNode___key].val; /* _key on <var2:nullable HashSetNode[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 465);
show_backtrace(1);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#item for (self: Object): nullable Object */
val* VIRTUAL_hash_collection__HashSetIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = hash_collection__HashSetIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSetIterator#next for (self: HashSetIterator[Object]) */
void hash_collection__HashSetIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[Object] */;
val* var2 /* : nullable HashNode[Object] */;
{
var = hash_collection__HashSetIterator__is_ok(self);
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 470);
show_backtrace(1);
}
var1 = self->attrs[COLOR_hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 471);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashSetNode[Object]> */
self->attrs[COLOR_hash_collection__HashSetIterator___node].val = var2; /* _node on <self:HashSetIterator[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#next for (self: Object) */
void VIRTUAL_hash_collection__HashSetIterator__next(val* self) {
hash_collection__HashSetIterator__next(self); /* Direct call hash_collection#HashSetIterator#next on <self:Object(HashSetIterator[Object])>*/
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#init for (self: HashSetIterator[Object], HashSet[Object]) */
void hash_collection__HashSetIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_set /* var set: HashSet[Object] */;
val* var1 /* : nullable HashNode[Object] */;
/* Covariant cast for argument 0 (set) <p0:HashSet[Object]> isa HashSet[HashSetIterator#0] */
/* <p0:HashSet[Object]> isa HashSet[HashSetIterator#0] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashSethash_collection__HashSetIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashSet[HashSetIterator#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 480);
show_backtrace(1);
}
var_set = p0;
self->attrs[COLOR_hash_collection__HashSetIterator___set].val = var_set; /* _set on <self:HashSetIterator[Object]> */
var1 = var_set->attrs[COLOR_hash_collection__HashCollection___first_item].val; /* _first_item on <var_set:HashSet[Object]> */
self->attrs[COLOR_hash_collection__HashSetIterator___node].val = var1; /* _node on <self:HashSetIterator[Object]> */
RET_LABEL:;
}
/* method hash_collection#HashSetIterator#init for (self: Object, HashSet[Object]) */
void VIRTUAL_hash_collection__HashSetIterator__init(val* self, val* p0) {
hash_collection__HashSetIterator__init(self, p0); /* Direct call hash_collection#HashSetIterator#init on <self:Object(HashSetIterator[Object])>*/
RET_LABEL:;
}
