#include "standard__bytes.sep.0.h"
/* method bytes#Bytes#items for (self: Bytes): NativeString */
char* standard___standard__Bytes___items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#items= for (self: Bytes, NativeString) */
void standard___standard__Bytes___items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__bytes__Bytes___items].str = p0; /* _items on <self:Bytes> */
RET_LABEL:;
}
/* method bytes#Bytes#length for (self: Bytes): Int */
long standard___standard__Bytes___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#length= for (self: Bytes, Int) */
void standard___standard__Bytes___standard__array__AbstractArrayRead__length_61d(val* self, long p0) {
self->attrs[COLOR_standard__bytes__Bytes___length].l = p0; /* _length on <self:Bytes> */
RET_LABEL:;
}
/* method bytes#Bytes#capacity for (self: Bytes): Int */
long standard___standard__Bytes___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#capacity= for (self: Bytes, Int) */
void standard___standard__Bytes___capacity_61d(val* self, long p0) {
self->attrs[COLOR_standard__bytes__Bytes___capacity].l = p0; /* _capacity on <self:Bytes> */
RET_LABEL:;
}
/* method bytes#Bytes#persisted for (self: Bytes): Bool */
short int standard___standard__Bytes___persisted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#persisted= for (self: Bytes, Bool) */
void standard___standard__Bytes___persisted_61d(val* self, short int p0) {
self->attrs[COLOR_standard__bytes__Bytes___persisted].s = p0; /* _persisted on <self:Bytes> */
RET_LABEL:;
}
/* method bytes#Bytes#empty for (self: Bytes) */
void standard___standard__Bytes___empty(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
var = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var,0l) on <var:NativeString> */
var3 = (char*)nit_alloc(0l);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ns = var1;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__bytes__Bytes__items_61d]))(self, var_ns); /* items= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__array__AbstractArrayRead__length_61d]))(self, 0l); /* length= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__bytes__Bytes__capacity_61d]))(self, 0l); /* capacity= on <self:Bytes>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:Bytes>*/
}
RET_LABEL:;
}
/* method bytes#Bytes#with_capacity for (self: Bytes, Int) */
void standard___standard__Bytes___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
var_cap = p0;
var = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var,var_cap) on <var:NativeString> */
var3 = (char*)nit_alloc(var_cap);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ns = var1;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__bytes__Bytes__items_61d]))(self, var_ns); /* items= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__array__AbstractArrayRead__length_61d]))(self, 0l); /* length= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__bytes__Bytes__capacity_61d]))(self, var_cap); /* capacity= on <self:Bytes>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:Bytes>*/
}
RET_LABEL:;
}
/* method bytes#Bytes#is_empty for (self: Bytes): Bool */
short int standard___standard__Bytes___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var3 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#[] for (self: Bytes, Int): Int */
long standard___standard__Bytes___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
long var /* : Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
uint32_t var18 /* : Char */;
uint32_t var20 /* : Char */;
long var21 /* : Int */;
long var23 /* : Int */;
var_i = p0;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 62);
fatal_exit(1);
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var7 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var5) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var14 = var_i < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 63);
fatal_exit(1);
}
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var17 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var15,var_i) on <var15:NativeString> */
var20 = (uint32_t)(unsigned char)var15[var_i];
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var18) on <var18:Char> */
var23 = (long)var18;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard___standard__Bytes___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = standard___standard__Bytes___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)(var1<<2|1);
var = var2;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#[]= for (self: Bytes, Int, Int) */
void standard___standard__Bytes___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
long var_v /* var v: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
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
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
char* var27 /* : NativeString */;
char* var29 /* : NativeString */;
uint32_t var30 /* : Char */;
uint32_t var32 /* : Char */;
/* Covariant cast for argument 1 (v) <p1:Int> isa Int */
/* <p1:Int> isa Int */
var = 1; /* easy <p1:Int> isa Int*/
if (unlikely(!var)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 67);
fatal_exit(1);
}
var_i = p0;
var_v = p1;
{
{ /* Inline bytes#Bytes#persisted (self) on <self:Bytes> */
var3 = self->attrs[COLOR_standard__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
standard___standard__Bytes___regen(self); /* Direct call bytes#Bytes#regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var10 = var_i >= 0l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 72);
fatal_exit(1);
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var13 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var_i,var11) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var16 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var20 = var_i <= var11;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 73);
fatal_exit(1);
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var23 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var21) on <var_i:Int> */
var26 = var_i == var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add(self, var_v); /* Direct call bytes#Bytes#add on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var29 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var_v) on <var_v:Int> */
var32 = (uint32_t)var_v;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var27,var_i,var30) on <var27:NativeString> */
var27[var_i]=(unsigned char)var30;
RET_LABEL33:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_standard___standard__Bytes___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
long var /* : Int */;
var = (long)(p1)>>2;
standard___standard__Bytes___standard__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call bytes#Bytes#[]= on <self:Sequence[nullable Object](Bytes)>*/
RET_LABEL:;
}
/* method bytes#Bytes#add for (self: Bytes, Int) */
void standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add(val* self, long p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_c /* var c: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
long var25 /* : Int */;
uint32_t var26 /* : Char */;
uint32_t var28 /* : Char */;
val* var_ /* var : Bytes */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Int> isa Int */
/* <p0:Int> isa Int */
var = 1; /* easy <p0:Int> isa Int*/
if (unlikely(!var)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 78);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline bytes#Bytes#persisted (self) on <self:Bytes> */
var3 = self->attrs[COLOR_standard__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
standard___standard__Bytes___regen(self); /* Direct call bytes#Bytes#regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var6 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var9 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var16 = var4 >= var7;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var19 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
standard___standard__Bytes___standard__array__AbstractArray__enlarge(self, var17); /* Direct call bytes#Bytes#enlarge on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var22 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var25 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#ascii (var_c) on <var_c:Int> */
var28 = (uint32_t)var_c;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var20,var23,var26) on <var20:NativeString> */
var20[var23]=(unsigned char)var26;
RET_LABEL29:(void)0;
}
}
var_ = self;
{
{ /* Inline bytes#Bytes#length (var_) on <var_:Bytes> */
var32 = var_->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var30,1l) on <var30:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var39 = var30 + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length= (var_,var33) on <var_:Bytes> */
var_->attrs[COLOR_standard__bytes__Bytes___length].l = var33; /* _length on <var_:Bytes> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
long var /* : Int */;
var = (long)(p0)>>2;
standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add(self, var); /* Direct call bytes#Bytes#add on <self:SimpleCollection[nullable Object](Bytes)>*/
RET_LABEL:;
}
/* method bytes#Bytes#append for (self: Bytes, Collection[Int]) */
void standard___standard__Bytes___standard__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_arr /* var arr: Collection[Int] */;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var_ /* var : Collection[Int] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Int] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var_i /* var i: Int */;
/* Covariant cast for argument 0 (arr) <p0:Collection[Int]> isa Collection[Int] */
/* <p0:Collection[Int]> isa Collection[Int] */
var = 1; /* easy <p0:Collection[Int]> isa Collection[Int]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Int]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__bytes, 90);
fatal_exit(1);
}
var_arr = p0;
/* <var_arr:Collection[Int]> isa Bytes */
cltype2 = type_standard__Bytes.color;
idtype3 = type_standard__Bytes.id;
if(cltype2 >= (((long)var_arr&3)?type_info[((long)var_arr&3)]:var_arr->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_arr&3)?type_info[((long)var_arr&3)]:var_arr->type)->type_table[cltype2] == idtype3;
}
if (var1){
{
{ /* Inline bytes#Bytes#items (var_arr) on <var_arr:Collection[Int](Bytes)> */
var6 = var_arr->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <var_arr:Collection[Int](Bytes)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (var_arr) on <var_arr:Collection[Int](Bytes)> */
var9 = var_arr->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <var_arr:Collection[Int](Bytes)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
standard___standard__Bytes___append_ns(self, var4, var7); /* Direct call bytes#Bytes#append_ns on <self:Bytes>*/
}
} else {
var_ = var_arr;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Int]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Int]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Int]>*/
}
var14 = (long)(var13)>>2;
var_i = var14;
{
standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add(self, var_i); /* Direct call bytes#Bytes#add on <self:Bytes>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Int]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Int]>*/
}
}
RET_LABEL:;
}
/* method bytes#Bytes#clear for (self: Bytes) */
void standard___standard__Bytes___standard__abstract_collection__RemovableCollection__clear(val* self) {
{
{ /* Inline bytes#Bytes#length= (self,0l) on <self:Bytes> */
self->attrs[COLOR_standard__bytes__Bytes___length].l = 0l; /* _length on <self:Bytes> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#regen for (self: Bytes) */
void standard___standard__Bytes___regen(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
long var3 /* : Int */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
long var12 /* : Int */;
var = NULL/*special!*/;
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var3 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var,var1) on <var:NativeString> */
var6 = (char*)nit_alloc(var1);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nns = var4;
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var9 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var12 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var7,var_nns,var10,0l,0l) on <var7:NativeString> */
memmove(var_nns+0l,var7+0l,var10);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline bytes#Bytes#persisted= (self,0) on <self:Bytes> */
self->attrs[COLOR_standard__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#append_ns for (self: Bytes, NativeString, Int) */
void standard___standard__Bytes___append_ns(val* self, char* p0, long p1) {
char* var_ns /* var ns: NativeString */;
long var_ln /* var ln: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_nlen /* var nlen: Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var_ /* var : Bytes */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
var_ns = p0;
var_ln = p1;
{
{ /* Inline bytes#Bytes#persisted (self) on <self:Bytes> */
var2 = self->attrs[COLOR_standard__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
standard___standard__Bytes___regen(self); /* Direct call bytes#Bytes#regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var5 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var3,var_ln) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var8 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var9 = var3 + var_ln;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_nlen = var6;
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var12 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_nlen,var10) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var15 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var19 = var_nlen > var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
standard___standard__Bytes___standard__array__AbstractArray__enlarge(self, var_nlen); /* Direct call bytes#Bytes#enlarge on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var22 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var25 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_ns,var20,var_ln,0l,var23) on <var_ns:NativeString> */
memmove(var20+var23,var_ns+0l,var_ln);
RET_LABEL26:(void)0;
}
}
var_ = self;
{
{ /* Inline bytes#Bytes#length (var_) on <var_:Bytes> */
var29 = var_->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var_ln) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var32 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var36 = var27 + var_ln;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length= (var_,var30) on <var_:Bytes> */
var_->attrs[COLOR_standard__bytes__Bytes___length].l = var30; /* _length on <var_:Bytes> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#append_ns_from for (self: Bytes, NativeString, Int, Int) */
void standard___standard__Bytes___append_ns_from(val* self, char* p0, long p1, long p2) {
char* var_ns /* var ns: NativeString */;
long var_ln /* var ln: Int */;
long var_from /* var from: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_nlen /* var nlen: Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var_ /* var : Bytes */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
var_ns = p0;
var_ln = p1;
var_from = p2;
{
{ /* Inline bytes#Bytes#persisted (self) on <self:Bytes> */
var2 = self->attrs[COLOR_standard__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
standard___standard__Bytes___regen(self); /* Direct call bytes#Bytes#regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var5 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var3,var_ln) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var8 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var9 = var3 + var_ln;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_nlen = var6;
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var12 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_nlen,var10) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var15 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var19 = var_nlen > var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
standard___standard__Bytes___standard__array__AbstractArray__enlarge(self, var_nlen); /* Direct call bytes#Bytes#enlarge on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var22 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var25 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_ns,var20,var_ln,var_from,var23) on <var_ns:NativeString> */
memmove(var20+var23,var_ns+var_from,var_ln);
RET_LABEL26:(void)0;
}
}
var_ = self;
{
{ /* Inline bytes#Bytes#length (var_) on <var_:Bytes> */
var29 = var_->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var_ln) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var32 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var36 = var27 + var_ln;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length= (var_,var30) on <var_:Bytes> */
var_->attrs[COLOR_standard__bytes__Bytes___length].l = var30; /* _length on <var_:Bytes> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#enlarge for (self: Bytes, Int) */
void standard___standard__Bytes___standard__array__AbstractArray__enlarge(val* self, long p0) {
long var_sz /* var sz: Int */;
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
long var39 /* : Int */;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
char* var43 /* : NativeString */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
long var48 /* : Int */;
var_sz = p0;
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var2 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var,var_sz) on <var:Int> */
/* Covariant cast for argument 0 (i) <var_sz:Int> isa OTHER */
/* <var_sz:Int> isa OTHER */
var5 = 1; /* easy <var_sz:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var6 = var >= var_sz;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline bytes#Bytes#persisted= (self,0) on <self:Bytes> */
self->attrs[COLOR_standard__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes> */
RET_LABEL7:(void)0;
}
}
for(;;) {
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var10 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var8,var_sz) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_sz:Int> isa OTHER */
/* <var_sz:Int> isa OTHER */
var13 = 1; /* easy <var_sz:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var17 = var8 < var_sz;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var20 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var18,2l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var23 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var27 = var18 * 2l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var21,2l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var30 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var34 = var21 + 2l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline bytes#Bytes#capacity= (self,var28) on <self:Bytes> */
self->attrs[COLOR_standard__bytes__Bytes___capacity].l = var28; /* _capacity on <self:Bytes> */
RET_LABEL35:(void)0;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var36 = NULL/*special!*/;
{
{ /* Inline bytes#Bytes#capacity (self) on <self:Bytes> */
var39 = self->attrs[COLOR_standard__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var36,var37) on <var36:NativeString> */
var42 = (char*)nit_alloc(var37);
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_ns = var40;
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var45 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var48 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var43,var_ns,var46,0l,0l) on <var43:NativeString> */
memmove(var_ns+0l,var43+0l,var46);
RET_LABEL49:(void)0;
}
}
{
{ /* Inline bytes#Bytes#items= (self,var_ns) on <self:Bytes> */
self->attrs[COLOR_standard__bytes__Bytes___items].str = var_ns; /* _items on <self:Bytes> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#Bytes#to_s for (self: Bytes): String */
val* standard___standard__Bytes___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var2 /* : FlatString */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
{
{ /* Inline bytes#Bytes#persisted= (self,1) on <self:Bytes> */
self->attrs[COLOR_standard__bytes__Bytes___persisted].s = 1; /* _persisted on <self:Bytes> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline bytes#Bytes#items (self) on <self:Bytes> */
var5 = self->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var8 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (self) on <self:Bytes> */
var11 = self->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var15 = var9 - 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var2, var3, var6, 0l, var12); /* Direct call string#FlatString#with_infos on <var2:FlatString>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#iterator for (self: Bytes): Iterator[Int] */
val* standard___standard__Bytes___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Int] */;
val* var1 /* : BytesIterator */;
var1 = NEW_standard__bytes__BytesIterator(&type_standard__bytes__BytesIterator);
{
standard__bytes___standard__bytes__BytesIterator___with_buffer(var1, self); /* Direct call bytes#BytesIterator#with_buffer on <var1:BytesIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes#Bytes#init for (self: Bytes) */
void standard___standard__Bytes___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Bytes___standard__kernel__Object__init]))(self); /* init on <self:Bytes>*/
}
RET_LABEL:;
}
/* method bytes#BytesIterator#tgt for (self: BytesIterator): NativeString */
char* standard__bytes___standard__bytes__BytesIterator___tgt(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__bytes__BytesIterator___tgt].str; /* _tgt on <self:BytesIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#BytesIterator#tgt= for (self: BytesIterator, NativeString) */
void standard__bytes___standard__bytes__BytesIterator___tgt_61d(val* self, char* p0) {
self->attrs[COLOR_standard__bytes__BytesIterator___tgt].str = p0; /* _tgt on <self:BytesIterator> */
RET_LABEL:;
}
/* method bytes#BytesIterator#index for (self: BytesIterator): Int */
long standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__bytes__BytesIterator___index].l; /* _index on <self:BytesIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#BytesIterator#index= for (self: BytesIterator, Int) */
void standard__bytes___standard__bytes__BytesIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_standard__bytes__BytesIterator___index].l = p0; /* _index on <self:BytesIterator> */
RET_LABEL:;
}
/* method bytes#BytesIterator#max for (self: BytesIterator): Int */
long standard__bytes___standard__bytes__BytesIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__bytes__BytesIterator___max].l; /* _max on <self:BytesIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes#BytesIterator#max= for (self: BytesIterator, Int) */
void standard__bytes___standard__bytes__BytesIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_standard__bytes__BytesIterator___max].l = p0; /* _max on <self:BytesIterator> */
RET_LABEL:;
}
/* method bytes#BytesIterator#with_buffer for (self: BytesIterator, Bytes) */
void standard__bytes___standard__bytes__BytesIterator___with_buffer(val* self, val* p0) {
val* var_b /* var b: Bytes */;
char* var /* : NativeString */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
var_b = p0;
{
{ /* Inline bytes#Bytes#items (var_b) on <var_b:Bytes> */
var2 = var_b->attrs[COLOR_standard__bytes__Bytes___items].str; /* _items on <var_b:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (var_b) on <var_b:Bytes> */
var5 = var_b->attrs[COLOR_standard__bytes__Bytes___length].l; /* _length on <var_b:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var9 = var3 - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_standard__bytes__BytesIterator__tgt_61d]))(self, var); /* tgt= on <self:BytesIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__bytes__BytesIterator__index_61d]))(self, 0l); /* index= on <self:BytesIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_standard__bytes__BytesIterator__max_61d]))(self, var6); /* max= on <self:BytesIterator>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:BytesIterator>*/
}
RET_LABEL:;
}
/* method bytes#BytesIterator#is_ok for (self: BytesIterator): Bool */
short int standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
{
{ /* Inline bytes#BytesIterator#index (self) on <self:BytesIterator> */
var3 = self->attrs[COLOR_standard__bytes__BytesIterator___index].l; /* _index on <self:BytesIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline bytes#BytesIterator#max (self) on <self:BytesIterator> */
var6 = self->attrs[COLOR_standard__bytes__BytesIterator___max].l; /* _max on <self:BytesIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var10 = var1 < var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes#BytesIterator#next for (self: BytesIterator) */
void standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : BytesIterator */;
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
{ /* Inline bytes#BytesIterator#index (var_) on <var_:BytesIterator> */
var2 = var_->attrs[COLOR_standard__bytes__BytesIterator___index].l; /* _index on <var_:BytesIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline bytes#BytesIterator#index= (var_,var3) on <var_:BytesIterator> */
var_->attrs[COLOR_standard__bytes__BytesIterator___index].l = var3; /* _index on <var_:BytesIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method bytes#BytesIterator#item for (self: BytesIterator): Int */
long standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__item(val* self) {
long var /* : Int */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
uint32_t var9 /* : Char */;
long var10 /* : Int */;
long var12 /* : Int */;
{
{ /* Inline bytes#BytesIterator#tgt (self) on <self:BytesIterator> */
var3 = self->attrs[COLOR_standard__bytes__BytesIterator___tgt].str; /* _tgt on <self:BytesIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline bytes#BytesIterator#index (self) on <self:BytesIterator> */
var6 = self->attrs[COLOR_standard__bytes__BytesIterator___index].l; /* _index on <self:BytesIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = (uint32_t)(unsigned char)var1[var4];
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var7) on <var7:Char> */
var12 = (long)var7;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes#BytesIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)(var1<<2|1);
var = var2;
RET_LABEL:;
return var;
}
/* method bytes#BytesIterator#init for (self: BytesIterator) */
void standard__bytes___standard__bytes__BytesIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__bytes___standard__bytes__BytesIterator___standard__kernel__Object__init]))(self); /* init on <self:BytesIterator>*/
}
RET_LABEL:;
}
