#include "standard__hash_collection.sep.0.h"
/* method hash_collection#HashCollection#index_at for (self: HashCollection[nullable Object], nullable Object): Int */
long standard__hash_collection___standard__hash_collection__HashCollection___index_at(val* self, val* p0) {
long var /* : Int */;
val* var_k /* var k: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_i /* var i: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
var_k = p0;
if (var_k == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_k, ((val*)NULL)); /* == on <var_k:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_standard__kernel__Object__hash]))(var_k); /* hash on <var_k:nullable Object(Object)>*/
}
var4 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#% (var3,var4) on <var3:Int> */
var7 = var3 % var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_i = var5;
{
{ /* Inline kernel#Int#< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var11 = var_i < 0l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var14 = -var_i;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
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
val* var_k /* var k: nullable Object */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable HashNode[nullable Object] */;
long var7 /* : Int */;
val* var8 /* : nullable HashNode[nullable Object] */;
val* var_res /* var res: nullable HashNode[nullable Object] */;
var_k = p0;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
if (var_k == NULL) {
var2 = (var1 == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var_k,var1) on <var_k:nullable Object> */
var5 = var_k == var1 || (var_k != NULL && var1 != NULL && (!((long)var_k&3)) && (!((long)var1&3)) && var_k->class == var1->class && ((var_k->class->box_kind == 3 && ((struct instance_standard__Byte*)var_k)->value == ((struct instance_standard__Byte*)var1)->value) || (var_k->class->box_kind == 5 && ((struct instance_standard__Float*)var_k)->value == ((struct instance_standard__Float*)var1)->value) || (var_k->class->box_kind == 6 && ((struct instance_standard__NativeString*)var_k)->value == ((struct instance_standard__NativeString*)var1)->value) || (var_k->class->box_kind == 7 && ((struct instance_standard__Pointer*)var_k)->value == ((struct instance_standard__Pointer*)var1)->value)));
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var6 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var6;
goto RET_LABEL;
} else {
}
{
var7 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var_k);
}
{
var8 = standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(self, var7, var_k);
}
var_res = var8;
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
long var_i /* var i: Int */;
val* var_k /* var k: nullable Object */;
val* var1 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var2 /* : nullable Object */;
val* var4 /* : Object */;
val* var_c /* var c: nullable HashNode[nullable Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_ck /* var ck: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable HashNode[nullable Object] */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_i = p0;
var_k = p1;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 65);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[] (var1,var_i) on <var1:nullable NativeArray[nullable HashNode[nullable Object]]> */
var4 = ((struct instance_standard__NativeArray*)var1)->values[var_i];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_c = var2;
for(;;) {
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_ck = var10;
if (var_ck == NULL) {
var12 = (var_k == NULL);
} else {
{ /* Inline kernel#Object#is_same_instance (var_ck,var_k) on <var_ck:nullable Object> */
var15 = var_ck == var_k || (var_ck != NULL && var_k != NULL && (!((long)var_ck&3)) && (!((long)var_k&3)) && var_ck->class == var_k->class && ((var_ck->class->box_kind == 3 && ((struct instance_standard__Byte*)var_ck)->value == ((struct instance_standard__Byte*)var_k)->value) || (var_ck->class->box_kind == 5 && ((struct instance_standard__Float*)var_ck)->value == ((struct instance_standard__Float*)var_k)->value) || (var_ck->class->box_kind == 6 && ((struct instance_standard__NativeString*)var_ck)->value == ((struct instance_standard__NativeString*)var_k)->value) || (var_ck->class->box_kind == 7 && ((struct instance_standard__Pointer*)var_ck)->value == ((struct instance_standard__Pointer*)var_k)->value)));
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
var11 = var_;
} else {
if (var_ck == NULL) {
var16 = (var_k == NULL);
} else {
var17 = ((short int(*)(val* self, val* p0))((((long)var_ck&3)?class_info[((long)var_ck&3)]:var_ck->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ck, var_k); /* == on <var_ck:nullable Object>*/
var16 = var17;
}
var11 = var16;
}
if (var11){
goto BREAK_label;
} else {
}
var18 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_c = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_c:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(var_c == NULL) {
var19 = 1;
} else {
if(cltype >= var_c->type->table_size) {
var19 = 0;
} else {
var19 = var_c->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var19)) {
var_class_name = var_c == NULL ? "null" : var_c->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 73);
fatal_exit(1);
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
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable HashNode[nullable Object] */;
val* var9 /* : nullable HashNode[nullable Object] */;
val* var10 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
val* var14 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var_l /* var l: Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var57 /* : Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
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
fatal_exit(1);
}
var_index = p0;
var_node = p1;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable HashNode[nullable Object](HashNode[nullable Object])> */
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
if (var2){
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var_node; /* _first_item on <self:HashCollection[nullable Object]> */
} else {
var8 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 83);
fatal_exit(1);
}
var8->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var_node; /* _next_item on <var8:nullable HashNode[nullable Object]> */
}
var9 = self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var9; /* _prev_item on <var_node:HashNode[nullable Object]> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = ((val*)NULL); /* _next_item on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var_node; /* _last_item on <self:HashCollection[nullable Object]> */
var10 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 90);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[] (var10,var_index) on <var10:nullable NativeArray[nullable HashNode[nullable Object]]> */
var13 = ((struct instance_standard__NativeArray*)var10)->values[var_index];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_next = var11;
var14 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 91);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[]= (var14,var_index,var_node) on <var14:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:HashNode[nullable Object]> isa E */
/* <var_node:HashNode[nullable Object]> isa E */
type_struct19 = var14->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(cltype17 >= var_node->type->table_size) {
var16 = 0;
} else {
var16 = var_node->type->type_table[cltype17] == idtype18;
}
if (unlikely(!var16)) {
var_class_name20 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 957);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var14)->values[var_index]=var_node;
RET_LABEL15:(void)0;
}
}
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:HashNode[nullable Object]> */
if (var_next == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other24); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var27 = var_node->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var27; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var_node; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var28 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var_l = var28;
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var35 = var_l + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var29; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var_l,5l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var38 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var42 = var_l + 5l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var36,2l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var45 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var49 = var36 * 2l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var56 = var43 + 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_l = var50;
var57 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#>= (var_l,var57) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var57:Int> isa OTHER */
/* <var57:Int> isa OTHER */
var60 = 1; /* easy <var57:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var64 = var_l >= var57;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
{ /* Inline kernel#Int#* (var_l,3l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var67 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var71 = var_l * 3l;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var65,2l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var74 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 542);
fatal_exit(1);
}
var78 = var65 / 2l;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var72,1l) on <var72:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var85 = var72 + 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
standard__hash_collection___standard__hash_collection__HashCollection___enlarge(self, var79); /* Direct call hash_collection#HashCollection#enlarge on <self:HashCollection[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method hash_collection#HashCollection#remove_node for (self: HashCollection[nullable Object], nullable Object) */
void standard__hash_collection___standard__hash_collection__HashCollection___remove_node(val* self, val* p0) {
val* var_k /* var k: nullable Object */;
long var /* : Int */;
long var_i /* var i: Int */;
val* var1 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable HashNode[nullable Object] */;
val* var_prev /* var prev: nullable HashNode[nullable Object] */;
val* var9 /* : nullable HashNode[nullable Object] */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const struct type* type_struct25;
const char* var_class_name26;
val* var_ /* var : HashCollection[nullable Object] */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
val* var35 /* : nullable HashNode[nullable Object] */;
val* var36 /* : nullable HashNode[nullable Object] */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const struct type* type_struct47;
short int is_nullable;
const char* var_class_name48;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
var_k = p0;
{
var = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var_k);
}
var_i = var;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx(self, var_i, var_k);
}
var_node = var1;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
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
goto RET_LABEL;
} else {
}
var8 = var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val; /* _prev_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var8;
var9 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var9;
if (var_prev == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prev,((val*)NULL)) on <var_prev:nullable HashNode[nullable Object]> */
var_other13 = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prev, var_other13); /* == on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var_prev->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var_next; /* _next_item on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_next:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(var_next == NULL) {
var16 = 1;
} else {
if(cltype >= var_next->type->table_size) {
var16 = 0;
} else {
var16 = var_next->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var16)) {
var_class_name = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 124);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var_next; /* _first_item on <self:HashCollection[nullable Object]> */
}
if (var_next == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other13 = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other13); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var_prev; /* _prev_item on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_prev:nullable HashNode[nullable Object]> isa nullable N */
type_struct25 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype23 = type_struct25->color;
idtype24 = type_struct25->id;
if(var_prev == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_prev->type->table_size) {
var22 = 0;
} else {
var22 = var_prev->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
var_class_name26 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 129);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var_prev; /* _last_item on <self:HashCollection[nullable Object]> */
}
var_ = self;
var27 = var_->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <var_:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#- (var27,1l) on <var27:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var34 = var27 - 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var28; /* _the_length on <var_:HashCollection[nullable Object]> */
var35 = var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var35;
var36 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var36;
if (var_prev == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prev,((val*)NULL)) on <var_prev:nullable HashNode[nullable Object]> */
var_other13 = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prev, var_other13); /* == on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
var_prev->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
var42 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 139);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[]= (var42,var_i,var_next) on <var42:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_next:nullable HashNode[nullable Object]> isa E */
/* <var_next:nullable HashNode[nullable Object]> isa E */
type_struct47 = var42->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype45 = type_struct47->color;
idtype46 = type_struct47->id;
is_nullable = type_struct47->is_nullable;
if(var_next == NULL) {
var44 = is_nullable;
} else {
if(cltype45 >= var_next->type->table_size) {
var44 = 0;
} else {
var44 = var_next->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
var_class_name48 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 957);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var42)->values[var_i]=var_next;
RET_LABEL43:(void)0;
}
}
}
if (var_next == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other13 = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other13); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_prev; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#raz for (self: HashCollection[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashCollection___raz(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var_i /* var i: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : nullable NativeArray[nullable HashNode[nullable Object]] */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name17;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
var = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var11 = var_i >= 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var12 = self->attrs[COLOR_standard__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 153);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[]= (var12,var_i,((val*)NULL)) on <var12:nullable NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <((val*)NULL):null> isa E */
/* <((val*)NULL):null> isa E */
type_struct = var12->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype15 = type_struct->color;
idtype16 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var14 = is_nullable;
} else {
if(cltype15 >= ((val*)NULL)->type->table_size) {
var14 = 0;
} else {
var14 = ((val*)NULL)->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
var_class_name17 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 957);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var12)->values[var_i]=((val*)NULL);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var24 = var_i - 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_i = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = ((val*)NULL); /* _first_item on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = ((val*)NULL); /* _last_item on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashCollection#enlarge for (self: HashCollection[nullable Object], Int) */
void standard__hash_collection___standard__hash_collection__HashCollection___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_old_cap /* var old_cap: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var_new_array /* var new_array: NativeArray[nullable HashNode[nullable Object]] */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var_i /* var i: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name48;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
long var71 /* : Int */;
long var_index /* var index: Int */;
val* var72 /* : nullable Object */;
val* var74 /* : Object */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const struct type* type_struct79;
const char* var_class_name80;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : nullable HashNode[nullable Object] */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const struct type* type_struct90;
const char* var_class_name91;
var_cap = p0;
var = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
var_old_cap = var;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var5 = var1 + 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_cap,var2) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var8 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var12 = var_cap < var2;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var13 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#+ (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var20 = var13 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_cap = var14;
} else {
}
var21 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var_cap,var21) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var28 = var_cap <= var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
goto RET_LABEL;
} else {
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var_cap; /* _capacity on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
var29 = NEW_standard__NativeArray(var_cap, self->type->resolution_table->types[COLOR_standard__NativeArray__nullable__standard__hash_collection__HashCollection__N]);
var_new_array = var29;
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = var_new_array; /* _array on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#- (var_cap,1l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var36 = var_cap - 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_i = var30;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var39 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var43 = var_i >= 0l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_i,((val*)NULL)) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <((val*)NULL):null> isa E */
/* <((val*)NULL):null> isa E */
type_struct = var_new_array->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype46 = type_struct->color;
idtype47 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var45 = is_nullable;
} else {
if(cltype46 >= ((val*)NULL)->type->table_size) {
var45 = 0;
} else {
var45 = ((val*)NULL)->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
var_class_name48 = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 957);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var_new_array)->values[var_i]=((val*)NULL);
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var55 = var_i - 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_i = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var56 = self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel#Int#<= (var56,var_old_cap) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var_old_cap:Int> isa OTHER */
/* <var_old_cap:Int> isa OTHER */
var59 = 1; /* easy <var_old_cap:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var63 = var56 <= var_old_cap;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
goto RET_LABEL;
} else {
}
var64 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
var_node = var64;
for(;;) {
if (var_node == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
var68 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
var70 = var_node->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
{
var71 = standard__hash_collection___standard__hash_collection__HashCollection___index_at(self, var70);
}
var_index = var71;
{
{ /* Inline array#NativeArray#[] (var_new_array,var_index) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
var74 = ((struct instance_standard__NativeArray*)var_new_array)->values[var_index];
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var_next = var72;
{
{ /* Inline array#NativeArray#[]= (var_new_array,var_index,var_node) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
/* <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
type_struct79 = var_new_array->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype77 = type_struct79->color;
idtype78 = type_struct79->id;
if(cltype77 >= var_node->type->table_size) {
var76 = 0;
} else {
var76 = var_node->type->type_table[cltype77] == idtype78;
}
if (unlikely(!var76)) {
var_class_name80 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 957);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var_new_array)->values[var_index]=var_node;
RET_LABEL75:(void)0;
}
}
var_node->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = ((val*)NULL); /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_node->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
if (var_next == NULL) {
var81 = 0; /* is null */
} else {
var81 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
var84 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next, var_other); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var85 = !var84;
var82 = var85;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var81 = var82;
}
if (var81){
var_next->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var86 = var_node->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
/* <var86:nullable HashNode[nullable Object]> isa nullable N */
type_struct90 = self->type->resolution_table->types[COLOR_nullable__standard__hash_collection__HashCollection__N];
cltype88 = type_struct90->color;
idtype89 = type_struct90->id;
if(var86 == NULL) {
var87 = 1;
} else {
if(cltype88 >= var86->type->table_size) {
var87 = 0;
} else {
var87 = var86->type->type_table[cltype88] == idtype89;
}
}
if (unlikely(!var87)) {
var_class_name91 = var86 == NULL ? "null" : var86->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 195);
fatal_exit(1);
}
var_node = var86;
} else {
goto BREAK_label92;
}
}
BREAK_label92: (void)0;
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 201);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashNode___key].val = p0; /* _key on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashNode#init for (self: HashNode[nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init]))(self); /* init on <self:HashNode[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#[] for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_key /* var key: nullable Object */;
val* var1 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable Object */;
var_key = p0;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_key);
}
var_c = var1;
if (var_c == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var7 = var_c == var_other;
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
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_standard__abstract_collection__MapRead__provide_default_value]))(self, var_key); /* provide_default_value on <self:HashMap[nullable Object, nullable Object]>*/
}
var = var8;
goto RET_LABEL;
} else {
var9 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var9;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#get_or_null for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_key /* var key: nullable Object */;
val* var1 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
var_key = p0;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_key);
}
var_c = var1;
if (var_c == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var7 = var_c == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
var8 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var8;
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
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashMapIterator__map_61d]))(var1, self); /* map= on <var1:HashMapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashMapIterator[nullable Object, nullable Object]>*/
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
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
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
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : HashMapNode[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_standard__HashMap___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 254);
fatal_exit(1);
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
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 254);
fatal_exit(1);
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
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val = var_key; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val = var_v; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
} else {
var14 = NEW_standard__hash_collection__HashMapNode(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapNode__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__hash_collection__HashNode__key_61d]))(var14, var_key); /* key= on <var14:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__hash_collection__HashMapNode__value_61d]))(var14, var_v); /* value= on <var14:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:HashMapNode[nullable Object, nullable Object]>*/
}
{
standard__hash_collection___standard__hash_collection__HashCollection___store(self, var_i, var14); /* Direct call hash_collection#HashCollection#store on <self:HashMap[nullable Object, nullable Object]>*/
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
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__HashMap___standard__kernel__Object__init]))(self); /* init on <self:HashMap[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashMap[nullable Object, nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
{
standard__hash_collection___standard__hash_collection__HashCollection___enlarge(self, 0l); /* Direct call hash_collection#HashCollection#enlarge on <self:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMap#keys for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__keys(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : HashMapKeys[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMap___keys].val != NULL; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
fatal_exit(1);
}
} else {
var3 = NEW_standard__hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__hash_collection__HashMapKeys__map_61d]))(var3, self); /* map= on <var3:HashMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMapKeys[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashMap___keys].val = var3; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#values for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* standard___standard__HashMap___standard__abstract_collection__MapRead__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : HashMapValues[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMap___values].val != NULL; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__hash_collection__HashMap___values].val; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 276);
fatal_exit(1);
}
} else {
var3 = NEW_standard__hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__hash_collection__HashMapValues__map_61d]))(var3, self); /* map= on <var3:HashMapValues[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:HashMapValues[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashMap___values].val = var3; /* _values on <self:HashMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method hash_collection#HashMap#has_key for (self: HashMap[nullable Object, nullable Object], nullable Object): Bool */
short int standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(val* self, val* p0) {
short int var /* : Bool */;
val* var_k /* var k: nullable Object */;
val* var1 /* : nullable HashNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_k = p0;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_k);
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var6 = !var5;
var3 = var6;
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
/* method hash_collection#HashMapKeys#map for (self: HashMapKeys[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* standard__hash_collection___standard__hash_collection__HashMapKeys___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 287);
fatal_exit(1);
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
val* var_k /* var k: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_k = p0;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(var1, var_k);
}
if (var4 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var4,((val*)NULL)) on <var4:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_other); /* == on <var4:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var9 = !var8;
var6 = var9;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapKeysIterator__original_iterator_61d]))(var1, var5); /* original_iterator= on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
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
val* var_key /* var key: nullable Object */;
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
var_key = p0;
{
{ /* Inline hash_collection#HashMapKeys#map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 283);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard__hash_collection___standard__hash_collection__HashCollection___remove_node(var, var_key); /* Direct call hash_collection#HashCollection#remove_node on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapKeys#init for (self: HashMapKeys[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init]))(self); /* init on <self:HashMapKeys[nullable Object, nullable Object]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 317);
fatal_exit(1);
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
val* var_item /* var item: nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable HashNode[nullable Object] */;
var_item = p0;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
var_c = var4;
for(;;) {
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var12 = ((short int(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_item); /* == on <var10:nullable Object>*/
var11 = var12;
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
var13 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__MapValuesIterator__original_iterator_61d]))(var1, var5); /* original_iterator= on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
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
val* var_item /* var item: nullable Object */;
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var_map /* var map: HashMap[nullable Object, nullable Object] */;
val* var3 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var13 /* : nullable HashNode[nullable Object] */;
var_item = p0;
{
{ /* Inline hash_collection#HashMapValues#map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_standard__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 304);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_map = var;
var3 = var_map->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[nullable Object, nullable Object]> */
var_c = var3;
for(;;) {
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = var_c->attrs[COLOR_standard__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var9 == NULL) {
var10 = (var_item == NULL);
} else {
var11 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var_item); /* == on <var9:nullable Object>*/
var10 = var11;
}
if (var10){
var12 = var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
{
standard__hash_collection___standard__hash_collection__HashCollection___remove_node(var_map, var12); /* Direct call hash_collection#HashCollection#remove_node on <var_map:HashMap[nullable Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var13 = var_c->attrs[COLOR_standard__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var13;
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
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init]))(self); /* init on <self:HashMapValues[nullable Object, nullable Object]>*/
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 375);
fatal_exit(1);
}
self->attrs[COLOR_standard__hash_collection__HashMapNode___value].val = p0; /* _value on <self:HashMapNode[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection#HashMapNode#init for (self: HashMapNode[nullable Object, nullable Object]) */
void standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init]))(self); /* init on <self:HashMapNode[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection#HashMapIterator#is_ok for (self: HashMapIterator[nullable Object, nullable Object]): Bool */
short int standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var6 = !var5;
var3 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 385);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 386);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 397);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 398);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 403);
fatal_exit(1);
}
var1 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 404);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 407);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 407);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 407);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val = var; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_standard__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 416);
fatal_exit(1);
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
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#first for (self: HashSet[nullable Object]): nullable Object */
val* standard___standard__HashSet___standard__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : nullable HashNode[nullable Object] */;
val* var7 /* : nullable Object */;
var1 = self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel#Int#> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var5 = var1 > 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 434);
fatal_exit(1);
}
var6 = self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashSet[nullable Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 435);
fatal_exit(1);
}
var7 = var6->attrs[COLOR_standard__hash_collection__HashNode___key].val; /* _key on <var6:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#has for (self: HashSet[nullable Object], nullable Object): Bool */
short int standard___standard__HashSet___standard__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
val* var1 /* : nullable HashNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_item = p0;
{
var1 = standard__hash_collection___standard__hash_collection__HashCollection___node_at(self, var_item);
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/
}
var6 = !var5;
var3 = var6;
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : HashSetNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_standard__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 443);
fatal_exit(1);
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
if (var_c == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable HashSetNode[nullable Object]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var_c->attrs[COLOR_standard__hash_collection__HashNode___key].val = var_item; /* _key on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])> */
} else {
var8 = NEW_standard__hash_collection__HashSetNode(self->type->resolution_table->types[COLOR_standard__hash_collection__HashSetNode__standard__HashSet___35dE]);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__hash_collection__HashNode__key_61d]))(var8, var_item); /* key= on <var8:HashSetNode[nullable Object]>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8); /* init on <var8:HashSetNode[nullable Object]>*/
}
{
standard__hash_collection___standard__hash_collection__HashCollection___store(self, var_i, var8); /* Direct call hash_collection#HashCollection#store on <self:HashSet[nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection#HashSet#remove for (self: HashSet[nullable Object], nullable Object) */
void standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_item /* var item: nullable Object */;
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
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__hash_collection__HashSetIterator__set_61d]))(var1, self); /* set= on <var1:HashSetIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:HashSetIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection#HashSet#init for (self: HashSet[nullable Object]) */
void standard___standard__HashSet___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__HashSet___standard__kernel__Object__init]))(self); /* init on <self:HashSet[nullable Object]>*/
}
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashSet[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashSet[nullable Object]> */
{
standard__hash_collection___standard__hash_collection__HashCollection___enlarge(self, 0l); /* Direct call hash_collection#HashCollection#enlarge on <self:HashSet[nullable Object]>*/
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 467);
fatal_exit(1);
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
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable HashSetNode[nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/
}
var6 = !var5;
var3 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 487);
fatal_exit(1);
}
var2 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 488);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 493);
fatal_exit(1);
}
var1 = self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 494);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 497);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 505);
fatal_exit(1);
}
var1 = var->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val; /* _first_item on <var:HashSet[nullable Object]> */
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = var1; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
