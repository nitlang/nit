#include "core__circular_array.sep.0.h"
/* method circular_array$CircularArray$native for (self: CircularArray[nullable Object]): NativeArray[nullable Object] */
val* core___core__CircularArray___native(val* self) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
var1 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$native= for (self: CircularArray[nullable Object], NativeArray[nullable Object]) */
void core___core__CircularArray___native_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (native) <p0:NativeArray[nullable Object]> isa NativeArray[E] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
self->attrs[COLOR_core__circular_array__CircularArray___native].val = p0; /* _native on <self:CircularArray[nullable Object]> */
RET_LABEL:;
}
/* method circular_array$CircularArray$head for (self: CircularArray[nullable Object]): Int */
long core___core__CircularArray___head(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$head= for (self: CircularArray[nullable Object], Int) */
void core___core__CircularArray___head_61d(val* self, long p0) {
self->attrs[COLOR_core__circular_array__CircularArray___head].l = p0; /* _head on <self:CircularArray[nullable Object]> */
RET_LABEL:;
}
/* method circular_array$CircularArray$tail for (self: CircularArray[nullable Object]): Int */
long core___core__CircularArray___tail(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__circular_array__CircularArray___tail].l; /* _tail on <self:CircularArray[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$tail= for (self: CircularArray[nullable Object], Int) */
void core___core__CircularArray___tail_61d(val* self, long p0) {
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = p0; /* _tail on <self:CircularArray[nullable Object]> */
RET_LABEL:;
}
/* method circular_array$CircularArray$length for (self: CircularArray[nullable Object]): Int */
long core___core__CircularArray___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$length= for (self: CircularArray[nullable Object], Int) */
void core___core__CircularArray___length_61d(val* self, long p0) {
self->attrs[COLOR_core__circular_array__CircularArray___length].l = p0; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL:;
}
/* method circular_array$CircularArray$offset for (self: CircularArray[nullable Object], Int): Int */
long core___core__CircularArray___offset(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var_head /* var head: Int */;
long var6 /* : Int */;
long var_tail /* var tail: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var_offset /* var offset: Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
val* var21 /* : NativeArray[nullable Object] */;
val* var23 /* : NativeArray[nullable Object] */;
long var24 /* : Int */;
long var26 /* : Int */;
long var_capacity /* var capacity: Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
var_index = p0;
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 71);
fatal_exit(1);
}
var5 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var_head = var5;
var6 = self->attrs[COLOR_core__circular_array__CircularArray___tail].l; /* _tail on <self:CircularArray[nullable Object]> */
var_tail = var6;
{
{ /* Inline kernel$Int$+ (var_head,var_index) on <var_head:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var9 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_head + var_index;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_offset = var7;
{
{ /* Inline kernel$Int$> (var_head,var_tail) on <var_head:Int> */
/* Covariant cast for argument 0 (i) <var_tail:Int> isa OTHER */
/* <var_tail:Int> isa OTHER */
var16 = 1; /* easy <var_tail:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var20 = var_head > var_tail;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var23 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline array$NativeArray$length (var21) on <var21:NativeArray[nullable Object]> */
var26 = ((struct instance_core__NativeArray*)var21)->length;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_capacity = var24;
{
{ /* Inline kernel$Int$< (var_offset,var_capacity) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_capacity:Int> isa OTHER */
/* <var_capacity:Int> isa OTHER */
var29 = 1; /* easy <var_capacity:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var33 = var_offset < var_capacity;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var = var_offset;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_offset,var_capacity) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_capacity:Int> isa OTHER */
/* <var_capacity:Int> isa OTHER */
var36 = 1; /* easy <var_capacity:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_offset - var_capacity;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_offset = var34;
} else {
}
{
{ /* Inline kernel$Int$<= (var_offset,var_tail) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_tail:Int> isa OTHER */
/* <var_tail:Int> isa OTHER */
var43 = 1; /* easy <var_tail:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var47 = var_offset <= var_tail;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (unlikely(!var41)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 85);
fatal_exit(1);
}
var = var_offset;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$[] for (self: CircularArray[nullable Object], Int): nullable Object */
val* core___core__CircularArray___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
val* var1 /* : NativeArray[nullable Object] */;
val* var3 /* : NativeArray[nullable Object] */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
val* var7 /* : Object */;
var_index = p0;
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__CircularArray___offset(self, var_index);
}
{
{ /* Inline array$NativeArray$[] (var1,var4) on <var1:NativeArray[nullable Object]> */
var7 = ((struct instance_core__NativeArray*)var1)->values[var4];
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$[]= for (self: CircularArray[nullable Object], Int, nullable Object) */
void core___core__CircularArray___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : NativeArray[nullable Object] */;
val* var9 /* : NativeArray[nullable Object] */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const struct type* type_struct15;
short int is_nullable16;
const char* var_class_name17;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__CircularArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 91);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_l = var1;
{
{ /* Inline kernel$Int$== (var_index,var_l) on <var_index:Int> */
var6 = var_index == var_l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
core___core__CircularArray___core__abstract_collection__Sequence__push(self, var_item); /* Direct call circular_array$CircularArray$push on <self:CircularArray[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var9 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = core___core__CircularArray___offset(self, var_index);
}
{
{ /* Inline array$NativeArray$[]= (var7,var10,var_item) on <var7:NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct15 = var7->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype13 = type_struct15->color;
idtype14 = type_struct15->id;
is_nullable16 = type_struct15->is_nullable;
if(var_item == NULL) {
var12 = is_nullable16;
} else {
if(cltype13 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
var_class_name17 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var7)->values[var10]=var_item;
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArray$push for (self: CircularArray[nullable Object], nullable Object) */
void core___core__CircularArray___core__abstract_collection__Sequence__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
long var_l /* var l: Int */;
val* var12 /* : NativeArray[nullable Object] */;
val* var_native /* var native: NativeArray[nullable Object] */;
long var13 /* : Int */;
long var15 /* : Int */;
long var_cap /* var cap: Int */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var_t /* var t: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const struct type* type_struct44;
short int is_nullable45;
const char* var_class_name46;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__CircularArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 100);
fatal_exit(1);
}
var_item = p0;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var1 + 1l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_l = var4;
{
core___core__CircularArray___enlarge(self, var_l); /* Direct call circular_array$CircularArray$enlarge on <self:CircularArray[nullable Object]>*/
}
{
{ /* Inline circular_array$CircularArray$length= (self,var_l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = var_l; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL11:(void)0;
}
}
var12 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 105);
fatal_exit(1);
}
var_native = var12;
{
{ /* Inline array$NativeArray$length (var_native) on <var_native:NativeArray[nullable Object]> */
var15 = ((struct instance_core__NativeArray*)var_native)->length;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_cap = var13;
{
{ /* Inline circular_array$CircularArray$tail (self) on <self:CircularArray[nullable Object]> */
var18 = self->attrs[COLOR_core__circular_array__CircularArray___tail].l; /* _tail on <self:CircularArray[nullable Object]> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var16 + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_t = var19;
{
{ /* Inline kernel$Int$>= (var_t,var_cap) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var28 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var32 = var_t >= var_cap;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline kernel$Int$- (var_t,var_cap) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var35 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var39 = var_t - var_cap;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_t = var33;
} else {
}
{
{ /* Inline array$NativeArray$[]= (var_native,var_t,var_item) on <var_native:NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct44 = var_native->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype42 = type_struct44->color;
idtype43 = type_struct44->id;
is_nullable45 = type_struct44->is_nullable;
if(var_item == NULL) {
var41 = is_nullable45;
} else {
if(cltype42 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var41 = 0;
} else {
var41 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
var_class_name46 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_native)->values[var_t]=var_item;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$tail= (self,var_t) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = var_t; /* _tail on <self:CircularArray[nullable Object]> */
RET_LABEL47:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArray$add_all for (self: CircularArray[nullable Object], Collection[nullable Object]) */
void core___core__CircularArray___core__abstract_collection__SimpleCollection__add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_items /* var items: Collection[nullable Object] */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
/* Covariant cast for argument 0 (items) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Collection__core__CircularArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 114);
fatal_exit(1);
}
var_items = p0;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_items); /* length on <var_items:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var1 + var4;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
core___core__CircularArray___enlarge(self, var5); /* Direct call circular_array$CircularArray$enlarge on <self:CircularArray[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__CircularArray___core__abstract_collection__SimpleCollection__add_all]))(self, p0); /* add_all on <self:CircularArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method circular_array$CircularArray$pop for (self: CircularArray[nullable Object]): nullable Object */
val* core___core__CircularArray___core__abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_l /* var l: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var16 /* : NativeArray[nullable Object] */;
val* var_native /* var native: NativeArray[nullable Object] */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_t /* var t: Int */;
val* var20 /* : nullable Object */;
val* var22 /* : Object */;
val* var_res /* var res: nullable Object */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var1 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_l = var4;
{
{ /* Inline kernel$Int$>= (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var14 = var_l >= 0l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 121);
fatal_exit(1);
}
{
{ /* Inline circular_array$CircularArray$length= (self,var_l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = var_l; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL15:(void)0;
}
}
var16 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 124);
fatal_exit(1);
}
var_native = var16;
{
{ /* Inline circular_array$CircularArray$tail (self) on <self:CircularArray[nullable Object]> */
var19 = self->attrs[COLOR_core__circular_array__CircularArray___tail].l; /* _tail on <self:CircularArray[nullable Object]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_t = var17;
{
{ /* Inline array$NativeArray$[] (var_native,var_t) on <var_native:NativeArray[nullable Object]> */
var22 = ((struct instance_core__NativeArray*)var_native)->values[var_t];
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_res = var20;
{
{ /* Inline kernel$Int$- (var_t,1l) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var_t - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_t = var23;
{
{ /* Inline kernel$Int$< (var_t,0l) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var36 = var_t < 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline array$NativeArray$length (var_native) on <var_native:NativeArray[nullable Object]> */
var39 = ((struct instance_core__NativeArray*)var_native)->length;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_t,var37) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var42 = 1; /* easy <var37:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_t + var37;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_t = var40;
} else {
}
{
{ /* Inline circular_array$CircularArray$tail= (self,var_t) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = var_t; /* _tail on <self:CircularArray[nullable Object]> */
RET_LABEL47:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$unshift for (self: CircularArray[nullable Object], nullable Object) */
void core___core__CircularArray___core__abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
long var_l /* var l: Int */;
val* var12 /* : NativeArray[nullable Object] */;
val* var_native /* var native: NativeArray[nullable Object] */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_h /* var h: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const struct type* type_struct44;
short int is_nullable45;
const char* var_class_name46;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__CircularArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 135);
fatal_exit(1);
}
var_item = p0;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var1 + 1l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_l = var4;
{
core___core__CircularArray___enlarge(self, var_l); /* Direct call circular_array$CircularArray$enlarge on <self:CircularArray[nullable Object]>*/
}
{
{ /* Inline circular_array$CircularArray$length= (self,var_l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = var_l; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL11:(void)0;
}
}
var12 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 140);
fatal_exit(1);
}
var_native = var12;
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var15 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var13 - 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_h = var16;
{
{ /* Inline kernel$Int$< (var_h,0l) on <var_h:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var_h < 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline array$NativeArray$length (var_native) on <var_native:NativeArray[nullable Object]> */
var32 = ((struct instance_core__NativeArray*)var_native)->length;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_h,var30) on <var_h:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var35 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_h + var30;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_h = var33;
} else {
}
{
{ /* Inline array$NativeArray$[]= (var_native,var_h,var_item) on <var_native:NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct44 = var_native->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype42 = type_struct44->color;
idtype43 = type_struct44->id;
is_nullable45 = type_struct44->is_nullable;
if(var_item == NULL) {
var41 = is_nullable45;
} else {
if(cltype42 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var41 = 0;
} else {
var41 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
var_class_name46 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_native)->values[var_h]=var_item;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head= (self,var_h) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___head].l = var_h; /* _head on <self:CircularArray[nullable Object]> */
RET_LABEL47:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArray$shift for (self: CircularArray[nullable Object]): nullable Object */
val* core___core__CircularArray___core__abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_l /* var l: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var16 /* : NativeArray[nullable Object] */;
val* var_native /* var native: NativeArray[nullable Object] */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_h /* var h: Int */;
val* var20 /* : nullable Object */;
val* var22 /* : Object */;
val* var_res /* var res: nullable Object */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var_cap /* var cap: Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var1 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_l = var4;
{
{ /* Inline kernel$Int$>= (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var14 = var_l >= 0l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 150);
fatal_exit(1);
}
{
{ /* Inline circular_array$CircularArray$length= (self,var_l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = var_l; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL15:(void)0;
}
}
var16 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 153);
fatal_exit(1);
}
var_native = var16;
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var19 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_h = var17;
{
{ /* Inline array$NativeArray$[] (var_native,var_h) on <var_native:NativeArray[nullable Object]> */
var22 = ((struct instance_core__NativeArray*)var_native)->values[var_h];
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_res = var20;
{
{ /* Inline kernel$Int$+ (var_h,1l) on <var_h:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var_h + 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_h = var23;
{
{ /* Inline array$NativeArray$length (var_native) on <var_native:NativeArray[nullable Object]> */
var32 = ((struct instance_core__NativeArray*)var_native)->length;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_cap = var30;
{
{ /* Inline kernel$Int$>= (var_h,var_cap) on <var_h:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var35 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var39 = var_h >= var_cap;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel$Int$- (var_h,var_cap) on <var_h:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var42 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var46 = var_h - var_cap;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_h = var40;
} else {
}
{
{ /* Inline circular_array$CircularArray$head= (self,var_h) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___head].l = var_h; /* _head on <self:CircularArray[nullable Object]> */
RET_LABEL47:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArray$enlarge for (self: CircularArray[nullable Object], Int) */
void core___core__CircularArray___enlarge(val* self, long p0) {
long var_capacity /* var capacity: Int */;
short int var /* : Bool */;
short int var1 /* : Bool */;
long var_new_c /* var new_c: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
val* var13 /* : NativeArray[nullable Object] */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const struct type* type_struct;
const char* var_class_name18;
val* var19 /* : NativeArray[nullable Object] */;
val* var21 /* : NativeArray[nullable Object] */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_c /* var c: Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
long var_new_c32 /* var new_c: Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
val* var48 /* : NativeArray[nullable Object] */;
val* var_new_native /* var new_native: NativeArray[nullable Object] */;
long var49 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var62 /* : NativeArray[nullable Object] */;
val* var64 /* : NativeArray[nullable Object] */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const struct type* type_struct82;
const char* var_class_name83;
val* var84 /* : NativeArray[nullable Object] */;
val* var86 /* : NativeArray[nullable Object] */;
long var87 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
long var97 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const struct type* type_struct111;
const char* var_class_name112;
val* var113 /* : NativeArray[nullable Object] */;
val* var115 /* : NativeArray[nullable Object] */;
long var116 /* : Int */;
long var118 /* : Int */;
long var119 /* : Int */;
long var121 /* : Int */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const struct type* type_struct126;
const char* var_class_name127;
long var129 /* : Int */;
long var131 /* : Int */;
long var132 /* : Int */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
long var138 /* : Int */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
const struct type* type_struct144;
const char* var_class_name145;
var_capacity = p0;
var = self->attrs[COLOR_core__circular_array__CircularArray___native].val != NULL; /* _native on <self:CircularArray[nullable Object]> */
var1 = !var;
if (var1){
var_new_c = 8l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_new_c,var_capacity) on <var_new_c:Int> */
/* Covariant cast for argument 0 (i) <var_capacity:Int> isa OTHER */
/* <var_capacity:Int> isa OTHER */
var4 = 1; /* easy <var_capacity:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_new_c < var_capacity;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel$Int$* (var_new_c,2l) on <var_new_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var8 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var12 = var_new_c * 2l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_new_c = var6;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var13 = NEW_core__NativeArray((int)var_new_c, self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE]);
{
{ /* Inline circular_array$CircularArray$native= (self,var13) on <self:CircularArray[nullable Object]> */
/* Covariant cast for argument 0 (native) <var13:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var13:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE];
cltype16 = type_struct->color;
idtype17 = type_struct->id;
if(cltype16 >= var13->type->table_size) {
var15 = 0;
} else {
var15 = var13->type->type_table[cltype16] == idtype17;
}
if (unlikely(!var15)) {
var_class_name18 = var13 == NULL ? "null" : var13->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
self->attrs[COLOR_core__circular_array__CircularArray___native].val = var13; /* _native on <self:CircularArray[nullable Object]> */
RET_LABEL14:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var21 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline array$NativeArray$length (var19) on <var19:NativeArray[nullable Object]> */
var24 = ((struct instance_core__NativeArray*)var19)->length;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_c = var22;
{
{ /* Inline kernel$Int$<= (var_capacity,var_c) on <var_capacity:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var27 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var31 = var_capacity <= var_c;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
goto RET_LABEL;
} else {
}
var_new_c32 = var_c;
for(;;) {
{
{ /* Inline kernel$Int$< (var_new_c32,var_capacity) on <var_new_c32:Int> */
/* Covariant cast for argument 0 (i) <var_capacity:Int> isa OTHER */
/* <var_capacity:Int> isa OTHER */
var35 = 1; /* easy <var_capacity:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var39 = var_new_c32 < var_capacity;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel$Int$* (var_new_c32,2l) on <var_new_c32:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var42 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var46 = var_new_c32 * 2l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_new_c32 = var40;
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
var48 = NEW_core__NativeArray((int)var_new_c32, self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE]);
var_new_native = var48;
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var51 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$tail (self) on <self:CircularArray[nullable Object]> */
var54 = self->attrs[COLOR_core__circular_array__CircularArray___tail].l; /* _tail on <self:CircularArray[nullable Object]> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var49,var52) on <var49:Int> */
/* Covariant cast for argument 0 (i) <var52:Int> isa OTHER */
/* <var52:Int> isa OTHER */
var57 = 1; /* easy <var52:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var61 = var49 > var52;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var64 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var67 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var70 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_c,var68) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var73 = 1; /* easy <var68:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var77 = var_c - var68;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline array$NativeArray$memmove (var62,var65,var71,var_new_native,0l) on <var62:NativeArray[nullable Object]> */
/* Covariant cast for argument 2 (dest) <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct82 = var62->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
cltype80 = type_struct82->color;
idtype81 = type_struct82->id;
if(cltype80 >= var_new_native->type->table_size) {
var79 = 0;
} else {
var79 = var_new_native->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name83 = var_new_native == NULL ? "null" : var_new_native->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 997);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)var_new_native)->values+0l, ((struct instance_core__NativeArray*)var62)->values+var65, var71*sizeof(val*));
RET_LABEL78:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var86 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$tail (self) on <self:CircularArray[nullable Object]> */
var89 = self->attrs[COLOR_core__circular_array__CircularArray___tail].l; /* _tail on <self:CircularArray[nullable Object]> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var87,1l) on <var87:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var92 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var96 = var87 + 1l;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var99 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_c,var97) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var97:Int> isa OTHER */
/* <var97:Int> isa OTHER */
var102 = 1; /* easy <var97:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var106 = var_c - var97;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline array$NativeArray$memmove (var84,0l,var90,var_new_native,var100) on <var84:NativeArray[nullable Object]> */
/* Covariant cast for argument 2 (dest) <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct111 = var84->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
cltype109 = type_struct111->color;
idtype110 = type_struct111->id;
if(cltype109 >= var_new_native->type->table_size) {
var108 = 0;
} else {
var108 = var_new_native->type->type_table[cltype109] == idtype110;
}
if (unlikely(!var108)) {
var_class_name112 = var_new_native == NULL ? "null" : var_new_native->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 997);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)var_new_native)->values+var100, ((struct instance_core__NativeArray*)var84)->values+0l, var90*sizeof(val*));
RET_LABEL107:(void)0;
}
}
} else {
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var115 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head (self) on <self:CircularArray[nullable Object]> */
var118 = self->attrs[COLOR_core__circular_array__CircularArray___head].l; /* _head on <self:CircularArray[nullable Object]> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var121 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline array$NativeArray$memmove (var113,var116,var119,var_new_native,0l) on <var113:NativeArray[nullable Object]> */
/* Covariant cast for argument 2 (dest) <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct126 = var113->type->resolution_table->types[COLOR_core__NativeArray__core__NativeArray___35dE];
cltype124 = type_struct126->color;
idtype125 = type_struct126->id;
if(cltype124 >= var_new_native->type->table_size) {
var123 = 0;
} else {
var123 = var_new_native->type->type_table[cltype124] == idtype125;
}
if (unlikely(!var123)) {
var_class_name127 = var_new_native == NULL ? "null" : var_new_native->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 997);
fatal_exit(1);
}
memmove(((struct instance_core__NativeArray*)var_new_native)->values+0l, ((struct instance_core__NativeArray*)var113)->values+var116, var119*sizeof(val*));
RET_LABEL122:(void)0;
}
}
}
{
{ /* Inline circular_array$CircularArray$head= (self,0l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___head].l = 0l; /* _head on <self:CircularArray[nullable Object]> */
RET_LABEL128:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var131 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var129,1l) on <var129:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var134 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var138 = var129 - 1l;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$tail= (self,var132) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = var132; /* _tail on <self:CircularArray[nullable Object]> */
RET_LABEL139:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$native= (self,var_new_native) on <self:CircularArray[nullable Object]> */
/* Covariant cast for argument 0 (native) <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct144 = self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE];
cltype142 = type_struct144->color;
idtype143 = type_struct144->id;
if(cltype142 >= var_new_native->type->table_size) {
var141 = 0;
} else {
var141 = var_new_native->type->type_table[cltype142] == idtype143;
}
if (unlikely(!var141)) {
var_class_name145 = var_new_native == NULL ? "null" : var_new_native->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
self->attrs[COLOR_core__circular_array__CircularArray___native].val = var_new_native; /* _native on <self:CircularArray[nullable Object]> */
RET_LABEL140:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArray$insert for (self: CircularArray[nullable Object], nullable Object, Int) */
void core___core__CircularArray___core__abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var_new_len /* var new_len: Int */;
val* var34 /* : NativeArray[nullable Object] */;
val* var36 /* : NativeArray[nullable Object] */;
long var37 /* : Int */;
long var39 /* : Int */;
long var_c /* var c: Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : NativeArray[nullable Object] */;
val* var_new_native /* var new_native: NativeArray[nullable Object] */;
long var_i /* var i: Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const struct type* type_struct67;
short int is_nullable68;
const char* var_class_name69;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const struct type* type_struct82;
short int is_nullable83;
const char* var_class_name84;
long var85 /* : Int */;
long var87 /* : Int */;
long var_l /* var l: Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
short int var94 /* : Bool */;
long var95 /* : Int */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
long var101 /* : Int */;
val* var102 /* : nullable Object */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const struct type* type_struct107;
short int is_nullable108;
const char* var_class_name109;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
long var116 /* : Int */;
long var120 /* : Int */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
long var126 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const struct type* type_struct132;
const char* var_class_name133;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__CircularArray___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 200);
fatal_exit(1);
}
var_item = p0;
var_index = p1;
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var6 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var10 = var_index >= var1;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var13 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_index,var11) on <var_index:Int> */
var16 = var_index == var11;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 204);
fatal_exit(1);
}
{
core___core__CircularArray___core__abstract_collection__Sequence__push(self, var_item); /* Direct call circular_array$CircularArray$push on <self:CircularArray[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var19 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var23 = var_index >= 0l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 208);
fatal_exit(1);
}
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var26 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var24,1l) on <var24:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var24 + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_new_len = var27;
{
{ /* Inline circular_array$CircularArray$native (self) on <self:CircularArray[nullable Object]> */
var36 = self->attrs[COLOR_core__circular_array__CircularArray___native].val; /* _native on <self:CircularArray[nullable Object]> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline array$NativeArray$length (var34) on <var34:NativeArray[nullable Object]> */
var39 = ((struct instance_core__NativeArray*)var34)->length;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_c = var37;
for(;;) {
{
{ /* Inline kernel$Int$< (var_c,var_new_len) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_new_len:Int> isa OTHER */
/* <var_new_len:Int> isa OTHER */
var42 = 1; /* easy <var_new_len:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var46 = var_c < var_new_len;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
{ /* Inline kernel$Int$* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var49 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var53 = var_c * 2l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_c = var47;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var54 = NEW_core__NativeArray((int)var_c, self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE]);
var_new_native = var54;
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_index) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var57 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var61 = var_i < var_index;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
var62 = core___core__CircularArray___core__abstract_collection__SequenceRead___91d_93d(self, var_i);
}
{
{ /* Inline array$NativeArray$[]= (var_new_native,var_i,var62) on <var_new_native:NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var62:nullable Object> isa E */
/* <var62:nullable Object> isa E */
type_struct67 = var_new_native->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype65 = type_struct67->color;
idtype66 = type_struct67->id;
is_nullable68 = type_struct67->is_nullable;
if(var62 == NULL) {
var64 = is_nullable68;
} else {
if(cltype65 >= (((long)var62&3)?type_info[((long)var62&3)]:var62->type)->table_size) {
var64 = 0;
} else {
var64 = (((long)var62&3)?type_info[((long)var62&3)]:var62->type)->type_table[cltype65] == idtype66;
}
}
if (unlikely(!var64)) {
var_class_name69 = var62 == NULL ? "null" : (((long)var62&3)?type_info[((long)var62&3)]:var62->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_new_native)->values[var_i]=var62;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_i + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_i = var70;
} else {
goto BREAK_label77;
}
}
BREAK_label77: (void)0;
{
{ /* Inline array$NativeArray$[]= (var_new_native,var_index,var_item) on <var_new_native:NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var_item:nullable Object> isa E */
/* <var_item:nullable Object> isa E */
type_struct82 = var_new_native->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype80 = type_struct82->color;
idtype81 = type_struct82->id;
is_nullable83 = type_struct82->is_nullable;
if(var_item == NULL) {
var79 = is_nullable83;
} else {
if(cltype80 >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var79 = 0;
} else {
var79 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype80] == idtype81;
}
}
if (unlikely(!var79)) {
var_class_name84 = var_item == NULL ? "null" : (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_new_native)->values[var_index]=var_item;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$length (self) on <self:CircularArray[nullable Object]> */
var87 = self->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <self:CircularArray[nullable Object]> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_l = var85;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var90 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var94 = var_i < var_l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var97 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var97)) {
var_class_name100 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var101 = var_i + 1l;
var95 = var101;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
{
var102 = core___core__CircularArray___core__abstract_collection__SequenceRead___91d_93d(self, var_i);
}
{
{ /* Inline array$NativeArray$[]= (var_new_native,var95,var102) on <var_new_native:NativeArray[nullable Object]> */
/* Covariant cast for argument 1 (item) <var102:nullable Object> isa E */
/* <var102:nullable Object> isa E */
type_struct107 = var_new_native->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype105 = type_struct107->color;
idtype106 = type_struct107->id;
is_nullable108 = type_struct107->is_nullable;
if(var102 == NULL) {
var104 = is_nullable108;
} else {
if(cltype105 >= (((long)var102&3)?type_info[((long)var102&3)]:var102->type)->table_size) {
var104 = 0;
} else {
var104 = (((long)var102&3)?type_info[((long)var102&3)]:var102->type)->type_table[cltype105] == idtype106;
}
}
if (unlikely(!var104)) {
var_class_name109 = var102 == NULL ? "null" : (((long)var102&3)?type_info[((long)var102&3)]:var102->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_new_native)->values[var95]=var102;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var112 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var116 = var_i + 1l;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var_i = var110;
} else {
goto BREAK_label117;
}
}
BREAK_label117: (void)0;
{
{ /* Inline circular_array$CircularArray$length= (self,var_new_len) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = var_new_len; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL118:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head= (self,0l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___head].l = 0l; /* _head on <self:CircularArray[nullable Object]> */
RET_LABEL119:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_new_len,1l) on <var_new_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var122 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var126 = var_new_len - 1l;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$tail= (self,var120) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = var120; /* _tail on <self:CircularArray[nullable Object]> */
RET_LABEL127:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$native= (self,var_new_native) on <self:CircularArray[nullable Object]> */
/* Covariant cast for argument 0 (native) <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
/* <var_new_native:NativeArray[nullable Object]> isa NativeArray[E] */
type_struct132 = self->type->resolution_table->types[COLOR_core__NativeArray__core__CircularArray___35dE];
cltype130 = type_struct132->color;
idtype131 = type_struct132->id;
if(cltype130 >= var_new_native->type->table_size) {
var129 = 0;
} else {
var129 = var_new_native->type->type_table[cltype130] == idtype131;
}
if (unlikely(!var129)) {
var_class_name133 = var_new_native == NULL ? "null" : var_new_native->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[E]", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 30);
fatal_exit(1);
}
self->attrs[COLOR_core__circular_array__CircularArray___native].val = var_new_native; /* _native on <self:CircularArray[nullable Object]> */
RET_LABEL128:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArray$clear for (self: CircularArray[nullable Object]) */
void core___core__CircularArray___core__abstract_collection__RemovableCollection__clear(val* self) {
long var /* : Int */;
long var4 /* : Int */;
{
{ /* Inline circular_array$CircularArray$length= (self,0l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = 0l; /* _length on <self:CircularArray[nullable Object]> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$head= (self,0l) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___head].l = 0l; /* _head on <self:CircularArray[nullable Object]> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var4 = -1l;
var = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$tail= (self,var) on <self:CircularArray[nullable Object]> */
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = var; /* _tail on <self:CircularArray[nullable Object]> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArray$iterator for (self: CircularArray[nullable Object]): Iterator[nullable Object] */
val* core___core__CircularArray___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : CircularArrayIterator[nullable Object] */;
var1 = NEW_core__circular_array__CircularArrayIterator(self->type->resolution_table->types[COLOR_core__circular_array__CircularArrayIterator__core__CircularArray___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__circular_array__CircularArrayIterator__array_61d]))(var1, self); /* array= on <var1:CircularArrayIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:CircularArrayIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArrayIterator$array for (self: CircularArrayIterator[nullable Object]): CircularArray[nullable Object] */
val* core__circular_array___core__circular_array__CircularArrayIterator___array(val* self) {
val* var /* : CircularArray[nullable Object] */;
val* var1 /* : CircularArray[nullable Object] */;
var1 = self->attrs[COLOR_core__circular_array__CircularArrayIterator___array].val; /* _array on <self:CircularArrayIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 252);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArrayIterator$array= for (self: CircularArrayIterator[nullable Object], CircularArray[nullable Object]) */
void core__circular_array___core__circular_array__CircularArrayIterator___array_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (array) <p0:CircularArray[nullable Object]> isa CircularArray[E] */
/* <p0:CircularArray[nullable Object]> isa CircularArray[E] */
type_struct = self->type->resolution_table->types[COLOR_core__CircularArray__core__circular_array__CircularArrayIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "CircularArray[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 252);
fatal_exit(1);
}
self->attrs[COLOR_core__circular_array__CircularArrayIterator___array].val = p0; /* _array on <self:CircularArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method circular_array$CircularArrayIterator$index for (self: CircularArrayIterator[nullable Object]): Int */
long core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l; /* _index on <self:CircularArrayIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArrayIterator$index= for (self: CircularArrayIterator[nullable Object], Int) */
void core__circular_array___core__circular_array__CircularArrayIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l = p0; /* _index on <self:CircularArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method circular_array$CircularArrayIterator$is_ok for (self: CircularArrayIterator[nullable Object]): Bool */
short int core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : CircularArray[nullable Object] */;
val* var6 /* : CircularArray[nullable Object] */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
{
{ /* Inline circular_array$CircularArrayIterator$index (self) on <self:CircularArrayIterator[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l; /* _index on <self:CircularArrayIterator[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline circular_array$CircularArrayIterator$array (self) on <self:CircularArrayIterator[nullable Object]> */
var6 = self->attrs[COLOR_core__circular_array__CircularArrayIterator___array].val; /* _array on <self:CircularArrayIterator[nullable Object]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 252);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline circular_array$CircularArray$length (var4) on <var4:CircularArray[nullable Object]> */
var9 = var4->attrs[COLOR_core__circular_array__CircularArray___length].l; /* _length on <var4:CircularArray[nullable Object]> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var1 < var7;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArrayIterator$item for (self: CircularArrayIterator[nullable Object]): nullable Object */
val* core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : CircularArray[nullable Object] */;
val* var3 /* : CircularArray[nullable Object] */;
long var4 /* : Int */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
{
{ /* Inline circular_array$CircularArrayIterator$array (self) on <self:CircularArrayIterator[nullable Object]> */
var3 = self->attrs[COLOR_core__circular_array__CircularArrayIterator___array].val; /* _array on <self:CircularArrayIterator[nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_core__circular_array, 252);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline circular_array$CircularArrayIterator$index (self) on <self:CircularArrayIterator[nullable Object]> */
var6 = self->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l; /* _index on <self:CircularArrayIterator[nullable Object]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__CircularArray___core__abstract_collection__SequenceRead___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method circular_array$CircularArrayIterator$next for (self: CircularArrayIterator[nullable Object]) */
void core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : CircularArrayIterator[nullable Object] */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
var_ = self;
{
{ /* Inline circular_array$CircularArrayIterator$index (var_) on <var_:CircularArrayIterator[nullable Object]> */
var2 = var_->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l; /* _index on <var_:CircularArrayIterator[nullable Object]> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline circular_array$CircularArrayIterator$index= (var_,var3) on <var_:CircularArrayIterator[nullable Object]> */
var_->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l = var3; /* _index on <var_:CircularArrayIterator[nullable Object]> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method circular_array$CircularArrayIterator$init for (self: CircularArrayIterator[nullable Object]) */
void core__circular_array___core__circular_array__CircularArrayIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__circular_array___core__circular_array__CircularArrayIterator___core__kernel__Object__init]))(self); /* init on <self:CircularArrayIterator[nullable Object]>*/
}
RET_LABEL:;
}
