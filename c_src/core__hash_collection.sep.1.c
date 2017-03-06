#include "core__hash_collection.sep.0.h"
/* method hash_collection$Set$new for (self: Set[nullable Object]): Set[nullable Object] */
val* core__hash_collection___Set___new(val* self) {
val* var /* : Set[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = NEW_core__HashSet((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__HashSet__core__Set___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashCollection$index_at for (self: HashCollection[nullable Object], nullable Object): Int */
long core__hash_collection___core__hash_collection__HashCollection___index_at(val* self, val* p0) {
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
var2 = ((short int(*)(val* self, val* p0))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_k, ((val*)NULL)); /* == on <var_k:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_core__kernel__Object__hash]))(var_k); /* hash on <var_k:nullable Object(Object)>*/
}
var4 = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$% (var3,var4) on <var3:Int> */
var7 = var3 % var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_i = var5;
{
{ /* Inline kernel$Int$< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline kernel$Int$unary - (var_i) on <var_i:Int> */
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
/* method hash_collection$HashCollection$node_at for (self: HashCollection[nullable Object], nullable Object): nullable HashNode[nullable Object] */
val* core__hash_collection___core__hash_collection__HashCollection___node_at(val* self, val* p0) {
val* var /* : nullable HashNode[nullable Object] */;
val* var_k /* var k: nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable HashNode[nullable Object] */;
long var11 /* : Int */;
val* var12 /* : nullable HashNode[nullable Object] */;
val* var_res /* var res: nullable HashNode[nullable Object] */;
var_k = p0;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_key].val; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
if (var_k == NULL) {
var6 = (var5 == NULL);
} else {
{ /* Inline kernel$Object$is_same_instance (var_k,var5) on <var_k:nullable Object> */
var9 = var_k == var5 || (var_k != NULL && var5 != NULL && (!((long)var_k&3)) && (!((long)var5&3)) && var_k->class == var5->class && ((var_k->class->box_kind == 3 && ((struct instance_core__Byte*)var_k)->value == ((struct instance_core__Byte*)var5)->value) || (var_k->class->box_kind == 5 && ((struct instance_core__Float*)var_k)->value == ((struct instance_core__Float*)var5)->value) || (var_k->class->box_kind == 6 && ((struct instance_core__CString*)var_k)->value == ((struct instance_core__CString*)var5)->value) || (var_k->class->box_kind == 7 && ((struct instance_core__Pointer*)var_k)->value == ((struct instance_core__Pointer*)var5)->value) || (var_k->class->box_kind == 8 && ((struct instance_core__Int8*)var_k)->value == ((struct instance_core__Int8*)var5)->value) || (var_k->class->box_kind == 9 && ((struct instance_core__Int16*)var_k)->value == ((struct instance_core__Int16*)var5)->value) || (var_k->class->box_kind == 10 && ((struct instance_core__UInt16*)var_k)->value == ((struct instance_core__UInt16*)var5)->value) || (var_k->class->box_kind == 11 && ((struct instance_core__Int32*)var_k)->value == ((struct instance_core__Int32*)var5)->value) || (var_k->class->box_kind == 12 && ((struct instance_core__UInt32*)var_k)->value == ((struct instance_core__UInt32*)var5)->value)));
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var10 = self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_node].val; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = core__hash_collection___core__hash_collection__HashCollection___index_at(self, var_k);
}
{
var12 = core__hash_collection___core__hash_collection__HashCollection___node_at_idx(self, var11, var_k);
}
var_res = var12;
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_key].val = var_k; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_node].val = var_res; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashCollection$node_at_idx for (self: HashCollection[nullable Object], Int, nullable Object): nullable HashNode[nullable Object] */
val* core__hash_collection___core__hash_collection__HashCollection___node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashNode[nullable Object] */;
long var_i /* var i: Int */;
val* var_k /* var k: nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var6 /* : nullable Object */;
val* var8 /* : Object */;
val* var_c /* var c: nullable HashNode[nullable Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_ck /* var ck: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable HashNode[nullable Object] */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_i = p0;
var_k = p1;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_core__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 72);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[] (var5,var_i) on <var5:NativeArray[nullable HashNode[nullable Object]]> */
var8 = ((struct instance_core__NativeArray*)var5)->values[var_i];
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_c = var6;
for(;;) {
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var14 = var_c->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_ck = var14;
if (var_ck == NULL) {
var16 = (var_k == NULL);
} else {
{ /* Inline kernel$Object$is_same_instance (var_ck,var_k) on <var_ck:nullable Object> */
var19 = var_ck == var_k || (var_ck != NULL && var_k != NULL && (!((long)var_ck&3)) && (!((long)var_k&3)) && var_ck->class == var_k->class && ((var_ck->class->box_kind == 3 && ((struct instance_core__Byte*)var_ck)->value == ((struct instance_core__Byte*)var_k)->value) || (var_ck->class->box_kind == 5 && ((struct instance_core__Float*)var_ck)->value == ((struct instance_core__Float*)var_k)->value) || (var_ck->class->box_kind == 6 && ((struct instance_core__CString*)var_ck)->value == ((struct instance_core__CString*)var_k)->value) || (var_ck->class->box_kind == 7 && ((struct instance_core__Pointer*)var_ck)->value == ((struct instance_core__Pointer*)var_k)->value) || (var_ck->class->box_kind == 8 && ((struct instance_core__Int8*)var_ck)->value == ((struct instance_core__Int8*)var_k)->value) || (var_ck->class->box_kind == 9 && ((struct instance_core__Int16*)var_ck)->value == ((struct instance_core__Int16*)var_k)->value) || (var_ck->class->box_kind == 10 && ((struct instance_core__UInt16*)var_ck)->value == ((struct instance_core__UInt16*)var_k)->value) || (var_ck->class->box_kind == 11 && ((struct instance_core__Int32*)var_ck)->value == ((struct instance_core__Int32*)var_k)->value) || (var_ck->class->box_kind == 12 && ((struct instance_core__UInt32*)var_ck)->value == ((struct instance_core__UInt32*)var_k)->value)));
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var_ = var16;
if (var16){
var15 = var_;
} else {
if (var_ck == NULL) {
var20 = (var_k == NULL);
} else {
var21 = ((short int(*)(val* self, val* p0))((((long)var_ck&3)?class_info[((long)var_ck&3)]:var_ck->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_ck, var_k); /* == on <var_ck:nullable Object>*/
var20 = var21;
}
var15 = var20;
}
if (var15){
goto BREAK_label;
} else {
}
var22 = var_c->attrs[COLOR_core__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashNode[nullable Object](HashNode[nullable Object])> */
/* <var22:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(var22 == NULL) {
var23 = 1;
} else {
if(cltype >= var22->type->table_size) {
var23 = 0;
} else {
var23 = var22->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var23)) {
var_class_name = var22 == NULL ? "null" : var22->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 78);
fatal_exit(1);
}
var_c = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashCollection$store for (self: HashCollection[nullable Object], Int, HashNode[nullable Object]) */
void core__hash_collection___core__hash_collection__HashCollection___store(val* self, long p0, val* p1) {
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
val* var10 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
val* var14 /* : NativeArray[nullable HashNode[nullable Object]] */;
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
type_struct = self->type->resolution_table->types[COLOR_core__hash_collection__HashCollection__N];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 83);
fatal_exit(1);
}
var_index = p0;
var_node = p1;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable HashNode[nullable Object](HashNode[nullable Object])> */
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
self->attrs[COLOR_core__hash_collection__HashCollection___first_item].val = var_node; /* _first_item on <self:HashCollection[nullable Object]> */
} else {
var8 = self->attrs[COLOR_core__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 90);
fatal_exit(1);
}
var8->attrs[COLOR_core__hash_collection__HashNode___next_item].val = var_node; /* _next_item on <var8:nullable HashNode[nullable Object]> */
}
var9 = self->attrs[COLOR_core__hash_collection__HashCollection___last_item].val; /* _last_item on <self:HashCollection[nullable Object]> */
var_node->attrs[COLOR_core__hash_collection__HashNode___prev_item].val = var9; /* _prev_item on <var_node:HashNode[nullable Object]> */
var_node->attrs[COLOR_core__hash_collection__HashNode___next_item].val = ((val*)NULL); /* _next_item on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_item].val = var_node; /* _last_item on <self:HashCollection[nullable Object]> */
var10 = self->attrs[COLOR_core__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 97);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[] (var10,var_index) on <var10:NativeArray[nullable HashNode[nullable Object]]> */
var13 = ((struct instance_core__NativeArray*)var10)->values[var_index];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_next = var11;
var14 = self->attrs[COLOR_core__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 98);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[]= (var14,var_index,var_node) on <var14:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:HashNode[nullable Object]> isa E */
/* <var_node:HashNode[nullable Object]> isa E */
type_struct19 = var14->type->resolution_table->types[COLOR_core__NativeArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var14)->values[var_index]=var_node;
RET_LABEL15:(void)0;
}
}
var_node->attrs[COLOR_core__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:HashNode[nullable Object]> */
if (var_next == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next, var_other24); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
var_next->attrs[COLOR_core__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var27 = var_node->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var_node:HashNode[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_key].val = var27; /* _last_accessed_key on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_node].val = var_node; /* _last_accessed_node on <self:HashCollection[nullable Object]> */
var28 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
var_l = var28;
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_l + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = var29; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var_l,5l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var38 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_l + 5l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel$Int$* (var36,2l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var45 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var49 = var36 * 2l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var43 + 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_l = var50;
var57 = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$>= (var_l,var57) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var57:Int> isa OTHER */
/* <var57:Int> isa OTHER */
var60 = 1; /* easy <var57:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
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
{ /* Inline kernel$Int$* (var_l,3l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var67 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var71 = var_l * 3l;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel$Int$/ (var65,2l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var74 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var78 = var65 / 2l;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var72,1l) on <var72:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var85 = var72 + 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
core__hash_collection___core__hash_collection__HashCollection___enlarge(self, var79); /* Direct call hash_collection$HashCollection$enlarge on <self:HashCollection[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method hash_collection$HashCollection$remove_node for (self: HashCollection[nullable Object], nullable Object) */
void core__hash_collection___core__hash_collection__HashCollection___remove_node(val* self, val* p0) {
val* var_k /* var k: nullable Object */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_i /* var i: Int */;
val* var5 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable HashNode[nullable Object] */;
val* var_prev /* var prev: nullable HashNode[nullable Object] */;
val* var13 /* : nullable HashNode[nullable Object] */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const struct type* type_struct29;
const char* var_class_name30;
val* var_ /* var : HashCollection[nullable Object] */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var39 /* : nullable HashNode[nullable Object] */;
val* var40 /* : nullable HashNode[nullable Object] */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : NativeArray[nullable HashNode[nullable Object]] */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const struct type* type_struct50;
const char* var_class_name51;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const struct type* type_struct56;
short int is_nullable;
const char* var_class_name57;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
var_k = p0;
var = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$== (var,0l) on <var:Int> */
var3 = var == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
var4 = core__hash_collection___core__hash_collection__HashCollection___index_at(self, var_k);
}
var_i = var4;
{
var5 = core__hash_collection___core__hash_collection__HashCollection___node_at_idx(self, var_i, var_k);
}
var_node = var5;
if (var_node == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var11 = var_node == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
var12 = var_node->attrs[COLOR_core__hash_collection__HashNode___prev_item].val; /* _prev_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var12;
var13 = var_node->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var13;
if (var_prev == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_prev,((val*)NULL)) on <var_prev:nullable HashNode[nullable Object]> */
var_other17 = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prev, var_other17); /* == on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var19 = !var18;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var_prev->attrs[COLOR_core__hash_collection__HashNode___next_item].val = var_next; /* _next_item on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_next:nullable HashNode[nullable Object]> isa nullable N */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__hash_collection__HashCollection__N];
cltype = type_struct->color;
idtype = type_struct->id;
if(var_next == NULL) {
var20 = 1;
} else {
if(cltype >= var_next->type->table_size) {
var20 = 0;
} else {
var20 = var_next->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var20)) {
var_class_name = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 132);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashCollection___first_item].val = var_next; /* _first_item on <self:HashCollection[nullable Object]> */
}
if (var_next == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other17 = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next, var_other17); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
var_next->attrs[COLOR_core__hash_collection__HashNode___prev_item].val = var_prev; /* _prev_item on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
/* <var_prev:nullable HashNode[nullable Object]> isa nullable N */
type_struct29 = self->type->resolution_table->types[COLOR_nullable__core__hash_collection__HashCollection__N];
cltype27 = type_struct29->color;
idtype28 = type_struct29->id;
if(var_prev == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_prev->type->table_size) {
var26 = 0;
} else {
var26 = var_prev->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name30 = var_prev == NULL ? "null" : var_prev->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 137);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashCollection___last_item].val = var_prev; /* _last_item on <self:HashCollection[nullable Object]> */
}
var_ = self;
var31 = var_->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <var_:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$- (var31,1l) on <var31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var31 - 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = var32; /* _the_length on <var_:HashCollection[nullable Object]> */
var39 = var_node->attrs[COLOR_core__hash_collection__HashNode___prev_in_bucklet].val; /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_prev = var39;
var40 = var_node->attrs[COLOR_core__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_next = var40;
if (var_prev == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_prev,((val*)NULL)) on <var_prev:nullable HashNode[nullable Object]> */
var_other17 = ((val*)NULL);
{
var44 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prev, var_other17); /* == on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
var_prev->attrs[COLOR_core__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_prev:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
var46 = self->attrs[COLOR_core__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 147);
fatal_exit(1);
}
/* <var_next:nullable HashNode[nullable Object]> isa nullable N */
type_struct50 = self->type->resolution_table->types[COLOR_nullable__core__hash_collection__HashCollection__N];
cltype48 = type_struct50->color;
idtype49 = type_struct50->id;
if(var_next == NULL) {
var47 = 1;
} else {
if(cltype48 >= var_next->type->table_size) {
var47 = 0;
} else {
var47 = var_next->type->type_table[cltype48] == idtype49;
}
}
if (unlikely(!var47)) {
var_class_name51 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 147);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[]= (var46,var_i,var_next) on <var46:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_next:nullable HashNode[nullable Object]> isa E */
/* <var_next:nullable HashNode[nullable Object]> isa E */
type_struct56 = var46->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype54 = type_struct56->color;
idtype55 = type_struct56->id;
is_nullable = type_struct56->is_nullable;
if(var_next == NULL) {
var53 = is_nullable;
} else {
if(cltype54 >= var_next->type->table_size) {
var53 = 0;
} else {
var53 = var_next->type->type_table[cltype54] == idtype55;
}
}
if (unlikely(!var53)) {
var_class_name57 = var_next == NULL ? "null" : var_next->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var46)->values[var_i]=var_next;
RET_LABEL52:(void)0;
}
}
}
if (var_next == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other17 = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next, var_other17); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
var_next->attrs[COLOR_core__hash_collection__HashNode___prev_in_bucklet].val = var_prev; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashCollection$raz for (self: HashCollection[nullable Object]) */
void core__hash_collection___core__hash_collection__HashCollection___raz(val* self) {
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
val* var12 /* : NativeArray[nullable HashNode[nullable Object]] */;
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
var = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_i >= 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var12 = self->attrs[COLOR_core__hash_collection__HashCollection___array].val; /* _array on <self:HashCollection[nullable Object]> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 161);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$[]= (var12,var_i,((val*)NULL)) on <var12:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <((val*)NULL):null> isa E */
/* <((val*)NULL):null> isa E */
type_struct = var12->type->resolution_table->types[COLOR_core__NativeArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var12)->values[var_i]=((val*)NULL);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___first_item].val = ((val*)NULL); /* _first_item on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_item].val = ((val*)NULL); /* _last_item on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashCollection$enlarge for (self: HashCollection[nullable Object], Int) */
void core__hash_collection___core__hash_collection__HashCollection___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var_new_array /* var new_array: NativeArray[nullable HashNode[nullable Object]] */;
val* var29 /* : nullable HashNode[nullable Object] */;
val* var_node /* var node: nullable HashNode[nullable Object] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
long var_index /* var index: Int */;
val* var37 /* : nullable Object */;
val* var39 /* : Object */;
val* var_next /* var next: nullable HashNode[nullable Object] */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const struct type* type_struct;
const char* var_class_name44;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable HashNode[nullable Object] */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const struct type* type_struct54;
const char* var_class_name55;
var_cap = p0;
var = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_cap,var1) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var7 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var11 = var_cap < var1;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var12 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var12 + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_cap = var13;
} else {
}
var20 = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashCollection[nullable Object]> */
{
{ /* Inline kernel$Int$<= (var_cap,var20) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var27 = var_cap <= var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
goto RET_LABEL;
} else {
}
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = var_cap; /* _capacity on <self:HashCollection[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___last_accessed_key].val = ((val*)NULL); /* _last_accessed_key on <self:HashCollection[nullable Object]> */
var28 = NEW_core__NativeArray((int)var_cap, self->type->resolution_table->types[COLOR_core__NativeArray__nullable__core__hash_collection__HashCollection__N]);
var_new_array = var28;
self->attrs[COLOR_core__hash_collection__HashCollection___array].val = var_new_array; /* _array on <self:HashCollection[nullable Object]> */
var29 = self->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashCollection[nullable Object]> */
var_node = var29;
for(;;) {
if (var_node == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
var33 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var35 = var_node->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
{
var36 = core__hash_collection___core__hash_collection__HashCollection___index_at(self, var35);
}
var_index = var36;
{
{ /* Inline array$NativeArray$[] (var_new_array,var_index) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
var39 = ((struct instance_core__NativeArray*)var_new_array)->values[var_index];
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_next = var37;
{
{ /* Inline array$NativeArray$[]= (var_new_array,var_index,var_node) on <var_new_array:NativeArray[nullable HashNode[nullable Object]]> */
/* Covariant cast for argument 1 (item) <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
/* <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> isa E */
type_struct = var_new_array->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype42 = type_struct->color;
idtype43 = type_struct->id;
if(cltype42 >= var_node->type->table_size) {
var41 = 0;
} else {
var41 = var_node->type->type_table[cltype42] == idtype43;
}
if (unlikely(!var41)) {
var_class_name44 = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_new_array)->values[var_index]=var_node;
RET_LABEL40:(void)0;
}
}
var_node->attrs[COLOR_core__hash_collection__HashNode___prev_in_bucklet].val = ((val*)NULL); /* _prev_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
var_node->attrs[COLOR_core__hash_collection__HashNode___next_in_bucklet].val = var_next; /* _next_in_bucklet on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
if (var_next == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_next,((val*)NULL)) on <var_next:nullable HashNode[nullable Object]> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next, var_other); /* == on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
var_next->attrs[COLOR_core__hash_collection__HashNode___prev_in_bucklet].val = var_node; /* _prev_in_bucklet on <var_next:nullable HashNode[nullable Object](HashNode[nullable Object])> */
} else {
}
var50 = var_node->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var_node:nullable HashNode[nullable Object](HashNode[nullable Object])> */
/* <var50:nullable HashNode[nullable Object]> isa nullable N */
type_struct54 = self->type->resolution_table->types[COLOR_nullable__core__hash_collection__HashCollection__N];
cltype52 = type_struct54->color;
idtype53 = type_struct54->id;
if(var50 == NULL) {
var51 = 1;
} else {
if(cltype52 >= var50->type->table_size) {
var51 = 0;
} else {
var51 = var50->type->type_table[cltype52] == idtype53;
}
}
if (unlikely(!var51)) {
var_class_name55 = var50 == NULL ? "null" : var50->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable N", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 193);
fatal_exit(1);
}
var_node = var50;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection$HashNode$key= for (self: HashNode[nullable Object], nullable Object) */
void core__hash_collection___core__hash_collection__HashNode___key_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__hash_collection__HashNode___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 199);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashNode___key].val = p0; /* _key on <self:HashNode[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashNode$init for (self: HashNode[nullable Object]) */
void core__hash_collection___core__hash_collection__HashNode___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__hash_collection___core__hash_collection__HashNode___core__kernel__Object__init]))(self); /* init on <self:HashNode[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMap$[] for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
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
var1 = core__hash_collection___core__hash_collection__HashCollection___node_at(self, var_key);
}
var_c = var1;
if (var_c == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
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
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__MapRead__provide_default_value]))(self, var_key); /* provide_default_value on <self:HashMap[nullable Object, nullable Object]>*/
}
var = var8;
goto RET_LABEL;
} else {
var9 = var_c->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var9;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection$HashMap$get_or_null for (self: HashMap[nullable Object, nullable Object], nullable Object): nullable Object */
val* core___core__HashMap___core__abstract_collection__MapRead__get_or_null(val* self, val* p0) {
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
var1 = core__hash_collection___core__hash_collection__HashCollection___node_at(self, var_key);
}
var_c = var1;
if (var_c == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_c,var_other) on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
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
var8 = var_c->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection$HashMap$iterator for (self: HashMap[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* core___core__HashMap___core__abstract_collection__MapRead__iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : HashMapIterator[nullable Object, nullable Object] */;
var1 = NEW_core__hash_collection__HashMapIterator(self->type->resolution_table->types[COLOR_core__hash_collection__HashMapIterator__core__HashMap___35dK__core__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__hash_collection__HashMapIterator__map_61d]))(var1, self); /* map= on <var1:HashMapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:HashMapIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMap$length for (self: HashMap[nullable Object, nullable Object]): Int */
long core___core__HashMap___core__abstract_collection__MapRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMap$is_empty for (self: HashMap[nullable Object, nullable Object]): Bool */
short int core___core__HashMap___core__abstract_collection__MapRead__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
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
/* method hash_collection$HashMap$[]= for (self: HashMap[nullable Object, nullable Object], nullable Object, nullable Object) */
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1) {
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
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var_i /* var i: Int */;
val* var12 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : HashMapNode[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_core__HashMap___35dK];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 252);
fatal_exit(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct4 = self->type->resolution_table->types[COLOR_core__HashMap___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 252);
fatal_exit(1);
}
var_key = p0;
var_v = p1;
var7 = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashMap[nullable Object, nullable Object]> */
{
{ /* Inline kernel$Int$== (var7,0l) on <var7:Int> */
var10 = var7 == 0l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
core__hash_collection___core__hash_collection__HashCollection___enlarge(self, 17l); /* Direct call hash_collection$HashCollection$enlarge on <self:HashMap[nullable Object, nullable Object]>*/
}
} else {
}
{
var11 = core__hash_collection___core__hash_collection__HashCollection___index_at(self, var_key);
}
var_i = var11;
{
var12 = core__hash_collection___core__hash_collection__HashCollection___node_at_idx(self, var_i, var_key);
}
var_c = var12;
if (var_c == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var_c->attrs[COLOR_core__hash_collection__HashNode___key].val = var_key; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c->attrs[COLOR_core__hash_collection__HashMapNode___value].val = var_v; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
} else {
var18 = NEW_core__hash_collection__HashMapNode(self->type->resolution_table->types[COLOR_core__hash_collection__HashMapNode__core__HashMap___35dK__core__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_core__hash_collection__HashNode__key_61d]))(var18, var_key); /* key= on <var18:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_core__hash_collection__HashMapNode__value_61d]))(var18, var_v); /* value= on <var18:HashMapNode[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:HashMapNode[nullable Object, nullable Object]>*/
}
{
core__hash_collection___core__hash_collection__HashCollection___store(self, var_i, var18); /* Direct call hash_collection$HashCollection$store on <self:HashMap[nullable Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection$HashMap$clear for (self: HashMap[nullable Object, nullable Object]) */
void core___core__HashMap___core__abstract_collection__Map__clear(val* self) {
{
core__hash_collection___core__hash_collection__HashCollection___raz(self); /* Direct call hash_collection$HashCollection$raz on <self:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMap$init for (self: HashMap[nullable Object, nullable Object]) */
void core___core__HashMap___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__HashMap___core__kernel__Object__init]))(self); /* init on <self:HashMap[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashMap[nullable Object, nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashMap[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashMap$keys for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* core___core__HashMap___core__abstract_collection__MapRead__keys(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : HashMapKeys[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__hash_collection__HashMap___keys].val != NULL; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__hash_collection__HashMap___keys].val; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 279);
fatal_exit(1);
}
} else {
var3 = NEW_core__hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_core__hash_collection__HashMapKeys__core__HashMap___35dK__core__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__hash_collection__HashMapKeys__map_61d]))(var3, self); /* map= on <var3:HashMapKeys[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:HashMapKeys[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_core__hash_collection__HashMap___keys].val = var3; /* _keys on <self:HashMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMap$values for (self: HashMap[nullable Object, nullable Object]): RemovableCollection[nullable Object] */
val* core___core__HashMap___core__abstract_collection__MapRead__values(val* self) {
val* var /* : RemovableCollection[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : RemovableCollection[nullable Object] */;
val* var3 /* : HashMapValues[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__hash_collection__HashMap___values].val != NULL; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__hash_collection__HashMap___values].val; /* _values on <self:HashMap[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 280);
fatal_exit(1);
}
} else {
var3 = NEW_core__hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_core__hash_collection__HashMapValues__core__HashMap___35dK__core__HashMap___35dV]);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__hash_collection__HashMapValues__map_61d]))(var3, self); /* map= on <var3:HashMapValues[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:HashMapValues[nullable Object, nullable Object]>*/
}
self->attrs[COLOR_core__hash_collection__HashMap___values].val = var3; /* _values on <self:HashMap[nullable Object, nullable Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMap$has_key for (self: HashMap[nullable Object, nullable Object], nullable Object): Bool */
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0) {
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
var1 = core__hash_collection___core__hash_collection__HashCollection___node_at(self, var_k);
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashNode[nullable Object](HashMapNode[nullable Object, nullable Object])>*/
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
/* method hash_collection$HashMapKeys$map for (self: HashMapKeys[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* core__hash_collection___core__hash_collection__HashMapKeys___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapKeys$map= for (self: HashMapKeys[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapKeys___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_core__HashMap__core__hash_collection__HashMapKeys___35dK__core__hash_collection__HashMapKeys___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val = p0; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashMapKeys$count for (self: HashMapKeys[nullable Object, nullable Object], nullable Object): Int */
long core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_k /* var k: nullable Object */;
short int var1 /* : Bool */;
var_k = p0;
{
var1 = core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__has(self, var_k);
}
if (var1){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapKeys$first for (self: HashMapKeys[nullable Object, nullable Object]): nullable Object */
val* core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var5 /* : nullable Object */;
{
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 291);
fatal_exit(1);
}
var5 = var4->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var4:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapKeys$has for (self: HashMapKeys[nullable Object, nullable Object], nullable Object): Bool */
short int core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__has(val* self, val* p0) {
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
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__hash_collection___core__hash_collection__HashCollection___node_at(var1, var_k);
}
if (var4 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var4,((val*)NULL)) on <var4:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var_other); /* == on <var4:nullable HashNode[nullable Object](HashMapNode[nullable Object, nullable Object])>*/
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
/* method hash_collection$HashMapKeys$is_empty for (self: HashMapKeys[nullable Object, nullable Object]): Bool */
short int core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapKeys$length for (self: HashMapKeys[nullable Object, nullable Object]): Int */
long core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapKeys$iterator for (self: HashMapKeys[nullable Object, nullable Object]): Iterator[nullable Object] */
val* core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapKeysIterator[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : HashMap[nullable Object, nullable Object] */;
val* var5 /* : MapIterator[nullable Object, nullable Object] */;
var1 = NEW_core__MapKeysIterator(self->type->resolution_table->types[COLOR_core__MapKeysIterator__core__hash_collection__HashMapKeys___35dK__core__hash_collection__HashMapKeys___35dV]);
{
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__HashMap___core__abstract_collection__MapRead__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapKeysIterator__original_iterator_61d]))(var1, var5); /* original_iterator= on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MapKeysIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapKeys$clear for (self: HashMapKeys[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
{
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map__clear(var); /* Direct call hash_collection$HashMap$clear on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMapKeys$remove for (self: HashMapKeys[nullable Object, nullable Object], nullable Object) */
void core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_key /* var key: nullable Object */;
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
var_key = p0;
{
{ /* Inline hash_collection$HashMapKeys$map (self) on <self:HashMapKeys[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__hash_collection__HashMapKeys___map].val; /* _map on <self:HashMapKeys[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 287);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core__hash_collection___core__hash_collection__HashCollection___remove_node(var, var_key); /* Direct call hash_collection$HashCollection$remove_node on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMapKeys$init for (self: HashMapKeys[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapKeys___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__hash_collection___core__hash_collection__HashMapKeys___core__kernel__Object__init]))(self); /* init on <self:HashMapKeys[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMapValues$map for (self: HashMapValues[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* core__hash_collection___core__hash_collection__HashMapValues___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapValues$map= for (self: HashMapValues[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapValues___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_core__HashMap__core__hash_collection__HashMapValues___35dK__core__hash_collection__HashMapValues___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashMapValues___map].val = p0; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashMapValues$count for (self: HashMapValues[nullable Object, nullable Object], nullable Object): Int */
long core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_nb /* var nb: Int */;
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
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
val* var17 /* : nullable HashNode[nullable Object] */;
var_item = p0;
var_nb = 0l;
{
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
var_c = var4;
for(;;) {
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = var_c->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var12 = ((short int(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_item); /* == on <var10:nullable Object>*/
var11 = var12;
}
if (var11){
{
{ /* Inline kernel$Int$+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_nb + 1l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_nb = var13;
} else {
}
var17 = var_c->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var17;
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
/* method hash_collection$HashMapValues$first for (self: HashMapValues[nullable Object, nullable Object]): nullable Object */
val* core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
val* var5 /* : nullable Object */;
{
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 321);
fatal_exit(1);
}
var5 = var4->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var4:nullable HashNode[nullable Object](nullable HashMapNode[nullable Object, nullable Object])> */
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapValues$has for (self: HashMapValues[nullable Object, nullable Object], nullable Object): Bool */
short int core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__has(val* self, val* p0) {
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
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var1:HashMap[nullable Object, nullable Object]> */
var_c = var4;
for(;;) {
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = var_c->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var12 = ((short int(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_item); /* == on <var10:nullable Object>*/
var11 = var12;
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
var13 = var_c->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
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
/* method hash_collection$HashMapValues$is_empty for (self: HashMapValues[nullable Object, nullable Object]): Bool */
short int core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapValues$length for (self: HashMapValues[nullable Object, nullable Object]): Int */
long core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapValues$iterator for (self: HashMapValues[nullable Object, nullable Object]): Iterator[nullable Object] */
val* core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : HashMap[nullable Object, nullable Object] */;
val* var5 /* : MapIterator[nullable Object, nullable Object] */;
var1 = NEW_core__MapValuesIterator(self->type->resolution_table->types[COLOR_core__MapValuesIterator__core__hash_collection__HashMapValues___35dK__core__hash_collection__HashMapValues___35dV]);
{
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var4 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__HashMap___core__abstract_collection__MapRead__iterator(var2);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapValuesIterator__original_iterator_61d]))(var1, var5); /* original_iterator= on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MapValuesIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapValues$clear for (self: HashMapValues[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__RemovableCollection__clear(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
{
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map__clear(var); /* Direct call hash_collection$HashMap$clear on <var:HashMap[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMapValues$remove for (self: HashMapValues[nullable Object, nullable Object], nullable Object) */
void core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
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
{ /* Inline hash_collection$HashMapValues$map (self) on <self:HashMapValues[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__hash_collection__HashMapValues___map].val; /* _map on <self:HashMapValues[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 308);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_map = var;
var3 = var_map->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var_map:HashMap[nullable Object, nullable Object]> */
var_c = var3;
for(;;) {
if (var_c == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = var_c->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
if (var9 == NULL) {
var10 = (var_item == NULL);
} else {
var11 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var_item); /* == on <var9:nullable Object>*/
var10 = var11;
}
if (var10){
var12 = var_c->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
{
core__hash_collection___core__hash_collection__HashCollection___remove_node(var_map, var12); /* Direct call hash_collection$HashCollection$remove_node on <var_map:HashMap[nullable Object, nullable Object]>*/
}
goto RET_LABEL;
} else {
}
var13 = var_c->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method hash_collection$HashMapValues$init for (self: HashMapValues[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapValues___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__hash_collection___core__hash_collection__HashMapValues___core__kernel__Object__init]))(self); /* init on <self:HashMapValues[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMapNode$value= for (self: HashMapNode[nullable Object, nullable Object], nullable Object) */
void core__hash_collection___core__hash_collection__HashMapNode___value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa V */
/* <p0:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_core__hash_collection__HashMapNode___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 379);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashMapNode___value].val = p0; /* _value on <self:HashMapNode[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashMapNode$init for (self: HashMapNode[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapNode___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__hash_collection___core__hash_collection__HashMapNode___core__kernel__Object__init]))(self); /* init on <self:HashMapNode[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashMapIterator$is_ok for (self: HashMapIterator[nullable Object, nullable Object]): Bool */
short int core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_core__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
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
/* method hash_collection$HashMapIterator$item for (self: HashMapIterator[nullable Object, nullable Object]): nullable Object */
val* core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__is_ok(self);
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 389);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 390);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_core__hash_collection__HashMapNode___value].val; /* _value on <var2:nullable HashMapNode[nullable Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapIterator$key for (self: HashMapIterator[nullable Object, nullable Object]): nullable Object */
val* core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__key(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__is_ok(self);
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 401);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 402);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashMapNode[nullable Object, nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapIterator$next for (self: HashMapIterator[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashMapNode[nullable Object, nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__is_ok(self);
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 407);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__hash_collection__HashMapIterator___node].val; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 408);
fatal_exit(1);
}
var2 = var1->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashMapNode[nullable Object, nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashMapIterator___node].val = var2; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashMapIterator$map for (self: HashMapIterator[nullable Object, nullable Object]): HashMap[nullable Object, nullable Object] */
val* core__hash_collection___core__hash_collection__HashMapIterator___map(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var1 /* : HashMap[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 411);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method hash_collection$HashMapIterator$map= for (self: HashMapIterator[nullable Object, nullable Object], HashMap[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapIterator___map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (map) <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
/* <p0:HashMap[nullable Object, nullable Object]> isa HashMap[K, V] */
type_struct = self->type->resolution_table->types[COLOR_core__HashMap__core__hash_collection__HashMapIterator___35dK__core__hash_collection__HashMapIterator___35dV];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 411);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashMapIterator___map].val = p0; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashMapIterator$init for (self: HashMapIterator[nullable Object, nullable Object]) */
void core__hash_collection___core__hash_collection__HashMapIterator___core__kernel__Object__init(val* self) {
val* var /* : HashMap[nullable Object, nullable Object] */;
val* var2 /* : HashMap[nullable Object, nullable Object] */;
val* var3 /* : HashMap[nullable Object, nullable Object] */;
val* var4 /* : nullable HashNode[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__hash_collection___core__hash_collection__HashMapIterator___core__kernel__Object__init]))(self); /* init on <self:HashMapIterator[nullable Object, nullable Object]>*/
}
{
{ /* Inline hash_collection$HashMapIterator$map (self) on <self:HashMapIterator[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 411);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_core__hash_collection__HashMapIterator___map].val = var; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__hash_collection__HashMapIterator___map].val; /* _map on <self:HashMapIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 420);
fatal_exit(1);
}
var4 = var3->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var3:HashMap[nullable Object, nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashMapIterator___node].val = var4; /* _node on <self:HashMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashSet$length for (self: HashSet[nullable Object]): Int */
long core___core__HashSet___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashSet$is_empty for (self: HashSet[nullable Object]): Bool */
short int core___core__HashSet___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
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
/* method hash_collection$HashSet$first for (self: HashSet[nullable Object]): nullable Object */
val* core___core__HashSet___core__abstract_collection__Collection__first(val* self) {
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
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l; /* _the_length on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel$Int$> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var5 = var1 > 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 438);
fatal_exit(1);
}
var6 = self->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <self:HashSet[nullable Object]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 439);
fatal_exit(1);
}
var7 = var6->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var6:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashSet$has for (self: HashSet[nullable Object], nullable Object): Bool */
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0) {
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
var1 = core__hash_collection___core__hash_collection__HashCollection___node_at(self, var_item);
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable HashNode[nullable Object](nullable HashSetNode[nullable Object])> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashNode[nullable Object](HashSetNode[nullable Object])>*/
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
/* method hash_collection$HashSet$add for (self: HashSet[nullable Object], nullable Object) */
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var_i /* var i: Int */;
val* var6 /* : nullable HashNode[nullable Object] */;
val* var_c /* var c: nullable HashSetNode[nullable Object] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashSetNode[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 447);
fatal_exit(1);
}
var_item = p0;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:HashSet[nullable Object]> */
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
core__hash_collection___core__hash_collection__HashCollection___enlarge(self, 17l); /* Direct call hash_collection$HashCollection$enlarge on <self:HashSet[nullable Object]>*/
}
} else {
}
{
var5 = core__hash_collection___core__hash_collection__HashCollection___index_at(self, var_item);
}
var_i = var5;
{
var6 = core__hash_collection___core__hash_collection__HashCollection___node_at_idx(self, var_i, var_item);
}
var_c = var6;
if (var_c == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_c,((val*)NULL)) on <var_c:nullable HashSetNode[nullable Object]> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var_c->attrs[COLOR_core__hash_collection__HashNode___key].val = var_item; /* _key on <var_c:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])> */
} else {
var12 = NEW_core__hash_collection__HashSetNode(self->type->resolution_table->types[COLOR_core__hash_collection__HashSetNode__core__HashSet___35dE]);
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__hash_collection__HashNode__key_61d]))(var12, var_item); /* key= on <var12:HashSetNode[nullable Object]>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:HashSetNode[nullable Object]>*/
}
{
core__hash_collection___core__hash_collection__HashCollection___store(self, var_i, var12); /* Direct call hash_collection$HashCollection$store on <self:HashSet[nullable Object]>*/
}
}
RET_LABEL:;
}
/* method hash_collection$HashSet$remove for (self: HashSet[nullable Object], nullable Object) */
void core___core__HashSet___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_item /* var item: nullable Object */;
var_item = p0;
{
core__hash_collection___core__hash_collection__HashCollection___remove_node(self, var_item); /* Direct call hash_collection$HashCollection$remove_node on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashSet$clear for (self: HashSet[nullable Object]) */
void core___core__HashSet___core__abstract_collection__RemovableCollection__clear(val* self) {
{
core__hash_collection___core__hash_collection__HashCollection___raz(self); /* Direct call hash_collection$HashCollection$raz on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashSet$iterator for (self: HashSet[nullable Object]): Iterator[nullable Object] */
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : HashSetIterator[nullable Object] */;
var1 = NEW_core__hash_collection__HashSetIterator(self->type->resolution_table->types[COLOR_core__hash_collection__HashSetIterator__core__HashSet___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__hash_collection__HashSetIterator__set_61d]))(var1, self); /* set= on <var1:HashSetIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:HashSetIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashSet$init for (self: HashSet[nullable Object]) */
void core___core__HashSet___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__HashSet___core__kernel__Object__init]))(self); /* init on <self:HashSet[nullable Object]>*/
}
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashSet[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashSet[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashSet$from for (self: HashSet[nullable Object], Collection[nullable Object]) */
void core___core__HashSet___from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Collection__core__HashSet___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 471);
fatal_exit(1);
}
var_coll = p0;
{
core___core__HashSet___core__kernel__Object__init(self); /* Direct call hash_collection$HashSet$init on <self:HashSet[nullable Object]>*/
}
{
core___core__SimpleCollection___add_all(self, var_coll); /* Direct call abstract_collection$SimpleCollection$add_all on <self:HashSet[nullable Object]>*/
}
RET_LABEL:;
}
/* method hash_collection$HashSet$new_set for (self: HashSet[nullable Object]): Set[nullable Object] */
val* core___core__HashSet___core__abstract_collection__Set__new_set(val* self) {
val* var /* : Set[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__core__HashSet___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashSetIterator$is_ok for (self: HashSetIterator[nullable Object]): Bool */
short int core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_core__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable HashSetNode[nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable HashSetNode[nullable Object](HashSetNode[nullable Object])>*/
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
/* method hash_collection$HashSetIterator$item for (self: HashSetIterator[nullable Object]): nullable Object */
val* core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable HashSetNode[nullable Object] */;
val* var3 /* : nullable Object */;
{
var1 = core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 491);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 492);
fatal_exit(1);
}
var3 = var2->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var2:nullable HashSetNode[nullable Object]> */
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method hash_collection$HashSetIterator$next for (self: HashSetIterator[nullable Object]) */
void core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable HashSetNode[nullable Object] */;
val* var2 /* : nullable HashNode[nullable Object] */;
{
var = core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 497);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__hash_collection__HashSetIterator___node].val; /* _node on <self:HashSetIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 498);
fatal_exit(1);
}
var2 = var1->attrs[COLOR_core__hash_collection__HashNode___next_item].val; /* _next_item on <var1:nullable HashSetNode[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashSetIterator___node].val = var2; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashSetIterator$set= for (self: HashSetIterator[nullable Object], HashSet[nullable Object]) */
void core__hash_collection___core__hash_collection__HashSetIterator___set_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (set) <p0:HashSet[nullable Object]> isa HashSet[E] */
/* <p0:HashSet[nullable Object]> isa HashSet[E] */
type_struct = self->type->resolution_table->types[COLOR_core__HashSet__core__hash_collection__HashSetIterator___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 501);
fatal_exit(1);
}
self->attrs[COLOR_core__hash_collection__HashSetIterator___set].val = p0; /* _set on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
/* method hash_collection$HashSetIterator$init for (self: HashSetIterator[nullable Object]) */
void core__hash_collection___core__hash_collection__HashSetIterator___core__kernel__Object__init(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : nullable HashNode[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__hash_collection___core__hash_collection__HashSetIterator___core__kernel__Object__init]))(self); /* init on <self:HashSetIterator[nullable Object]>*/
}
var = self->attrs[COLOR_core__hash_collection__HashSetIterator___set].val; /* _set on <self:HashSetIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _set");
PRINT_ERROR(" (%s:%d)\n", FILE_core__hash_collection, 509);
fatal_exit(1);
}
var1 = var->attrs[COLOR_core__hash_collection__HashCollection___first_item].val; /* _first_item on <var:HashSet[nullable Object]> */
self->attrs[COLOR_core__hash_collection__HashSetIterator___node].val = var1; /* _node on <self:HashSetIterator[nullable Object]> */
RET_LABEL:;
}
