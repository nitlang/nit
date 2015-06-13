#include "standard__ropes.sep.0.h"
/* method ropes#RopeString#chars for (self: RopeString): SequenceRead[Char] */
val* standard__ropes___standard__ropes__RopeString___standard__string__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
val* var5 /* : RopeChars */;
var1 = self->attrs[COLOR_standard__ropes__RopeString___chars].val != NULL; /* _chars on <self:RopeString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__ropes__RopeString___chars].val; /* _chars on <self:RopeString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 70);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__ropes__RopeChars(&type_standard__ropes__RopeChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:RopeChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__ropes__RopeString___chars].val = var3; /* _chars on <self:RopeString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#length for (self: Concat): Int */
long standard__ropes___standard__ropes__Concat___standard__string__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#length= for (self: Concat, Int) */
void standard__ropes___standard__ropes__Concat___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__Concat___length].l = p0; /* _length on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#substrings for (self: Concat): Iterator[FlatText] */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeSubstrings */;
var1 = NEW_standard__ropes__RopeSubstrings(&type_standard__ropes__RopeSubstrings);
{
standard__ropes___standard__ropes__RopeSubstrings___init(var1, self); /* Direct call ropes#RopeSubstrings#init on <var1:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#empty for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_cstring for (self: Concat): NativeString */
char* standard__ropes___standard__ropes__Concat___standard__string__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_len /* var len: Int */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
val* var17 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[FlatText] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_i /* var i: FlatText */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_ilen /* var ilen: Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
char* var29 /* : NativeString */;
char* var31 /* : NativeString */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var38 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__Concat__lazy_32d_to_cstring].s; /* lazy _to_cstring on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__ropes__Concat___to_cstring].str; /* _to_cstring on <self:Concat> */
} else {
{
{
{ /* Inline ropes#Concat#length (self) on <self:Concat> */
var7 = self->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <self:Concat> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_len = var5;
var8 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var12 = var_len + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var8,var9) on <var8:NativeString> */
var15 = (char*)nit_alloc(var9);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_ns = var13;
{
{ /* Inline string#NativeString#[]= (var_ns,var_len,'\000') on <var_ns:NativeString> */
var_ns[var_len]=(unsigned char)'\000';
RET_LABEL16:(void)0;
}
}
var_off = 0l;
{
var17 = standard__ropes___standard__ropes__Concat___standard__string__Text__substrings(self);
}
var_ = var17;
{
var18 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[FlatText]>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[FlatText]>*/
}
var_i = var21;
{
{ /* Inline string#FlatText#length (var_i) on <var_i:FlatText> */
var24 = var_i->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_i:FlatText> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ilen = var22;
/* <var_i:FlatText> isa FlatString */
cltype26 = type_standard__FlatString.color;
idtype27 = type_standard__FlatString.id;
if(cltype26 >= var_i->type->table_size) {
var25 = 0;
} else {
var25 = var_i->type->type_table[cltype26] == idtype27;
}
if (unlikely(!var25)) {
var_class_name28 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 90);
fatal_exit(1);
}
{
{ /* Inline string#FlatText#items (var_i) on <var_i:FlatText(FlatString)> */
var31 = var_i->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
/* <var_i:FlatText> isa FlatString */
cltype33 = type_standard__FlatString.color;
idtype34 = type_standard__FlatString.id;
if(cltype33 >= var_i->type->table_size) {
var32 = 0;
} else {
var32 = var_i->type->type_table[cltype33] == idtype34;
}
if (unlikely(!var32)) {
var_class_name35 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 90);
fatal_exit(1);
}
{
{ /* Inline string#FlatString#index_from (var_i) on <var_i:FlatText(FlatString)> */
var38 = var_i->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_i:FlatText(FlatString)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var29,var_ns,var_ilen,var36,var_off) on <var29:NativeString> */
memmove(var_ns+var_off,var29+var36,var_ilen);
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var42 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var46 = var_off + var_ilen;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_off = var40;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[FlatText]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[FlatText]>*/
}
var3 = var_ns;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__ropes__Concat___to_cstring].str = var3; /* _to_cstring on <self:Concat> */
var2 = var3;
self->attrs[COLOR_standard__ropes__Concat__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:Concat> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#left for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___left(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#left= for (self: Concat, String) */
void standard__ropes___standard__ropes__Concat___left_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__Concat___left].val = p0; /* _left on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#right for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___right(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#right= for (self: Concat, String) */
void standard__ropes___standard__ropes__Concat___right_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__Concat___right].val = p0; /* _right on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#init for (self: Concat) */
void standard__ropes___standard__ropes__Concat___standard__kernel__Object__init(val* self) {
val* var /* : String */;
val* var2 /* : String */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var6 /* : String */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes___standard__ropes__Concat___standard__kernel__Object__init]))(self); /* init on <self:Concat>*/
}
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var2 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((long(*)(val* self))(var->class->vft[COLOR_standard__string__Text__length]))(var); /* length on <var:String>*/
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var6 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((long(*)(val* self))(var4->class->vft[COLOR_standard__string__Text__length]))(var4); /* length on <var4:String>*/
}
{
{ /* Inline kernel#Int#+ (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var11 = var3 + var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ropes#Concat#length= (self,var8) on <self:Concat> */
self->attrs[COLOR_standard__ropes__Concat___length].l = var8; /* _length on <self:Concat> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#Concat#* for (self: Concat, Int): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var_x /* var x: String */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : String */;
long var6 /* : Int */;
var_i = p0;
var_x = self;
var_j = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var4 = var_j < var_;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((val*(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__string__String___43d]))(var_x, self); /* + on <var_x:String>*/
}
var_x = var5;
{
var6 = standard___standard__Int___Discrete__successor(var_j, 1l);
}
var_j = var6;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_x;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#[] for (self: Concat, Int): Char */
uint32_t standard__ropes___standard__ropes__Concat___standard__string__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var_llen /* var llen: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
uint32_t var19 /* : Char */;
val* var20 /* : String */;
val* var22 /* : String */;
uint32_t var23 /* : Char */;
var_i = p0;
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var3 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
var_llen = var4;
{
{ /* Inline kernel#Int#>= (var_i,var_llen) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var7 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var8 = var_i >= var_llen;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var11 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,var_llen) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var14 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var18 = var_i - var_llen;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((uint32_t(*)(val* self, long p0))(var9->class->vft[COLOR_standard__string__Text___91d_93d]))(var9, var12); /* [] on <var9:String>*/
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var22 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((uint32_t(*)(val* self, long p0))(var20->class->vft[COLOR_standard__string__Text___91d_93d]))(var20, var_i); /* [] on <var20:String>*/
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#substring for (self: Concat, Int, Int): String */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_len /* var len: Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var_llen /* var llen: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : Text */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var_lsublen /* var lsublen: Int */;
val* var34 /* : String */;
val* var36 /* : String */;
val* var37 /* : Text */;
val* var38 /* : String */;
val* var40 /* : String */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
val* var48 /* : Text */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var52 /* : String */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var60 /* : Text */;
var_from = p0;
var_len = p1;
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var3 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
var_llen = var4;
{
{ /* Inline kernel#Int#< (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var7 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var8 = var_from < var_llen;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#+ (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var11 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var15 = var_from + var_len;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var9,var_llen) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var18 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var22 = var9 < var_llen;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var25 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self, long p0, long p1))(var23->class->vft[COLOR_standard__string__Text__substring]))(var23, var_from, var_len); /* substring on <var23:String>*/
}
var = var26;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#- (var_llen,var_from) on <var_llen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var29 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var33 = var_llen - var_from;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_lsublen = var27;
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var36 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = standard___standard__Text___substring_from(var34, var_from);
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var40 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_len,var_lsublen) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var43 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var47 = var_len - var_lsublen;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var48 = ((val*(*)(val* self, long p0, long p1))(var38->class->vft[COLOR_standard__string__Text__substring]))(var38, 0l, var41); /* substring on <var38:String>*/
}
{
var49 = ((val*(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__string__String___43d]))(var37, var48); /* + on <var37:Text(String)>*/
}
var = var49;
goto RET_LABEL;
} else {
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var52 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var55 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var59 = var_from - var_llen;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var60 = ((val*(*)(val* self, long p0, long p1))(var50->class->vft[COLOR_standard__string__Text__substring]))(var50, var53, var_len); /* substring on <var50:String>*/
}
var = var60;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_upper for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
var1 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var4 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__String__to_upper]))(var2); /* to_upper on <var2:String>*/
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var8 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__String__to_upper]))(var6); /* to_upper on <var6:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var5); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var9); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_lower for (self: Concat): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
var1 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var4 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__String__to_lower]))(var2); /* to_lower on <var2:String>*/
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var8 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__String__to_lower]))(var6); /* to_lower on <var6:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var5); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var9); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#+ for (self: Concat, Text): String */
val* standard__ropes___standard__ropes__Concat___standard__string__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Concat */;
val* var5 /* : String */;
val* var7 /* : String */;
val* var_r /* var r: String */;
long var8 /* : Int */;
long var_rlen /* var rlen: Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name;
long var14 /* : Int */;
val* var15 /* : Sys */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
val* var24 /* : Concat */;
val* var25 /* : Concat */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_standard__string__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_slen = var2;
/* <var_s:String> isa Concat */
cltype = type_standard__ropes__Concat.color;
idtype = type_standard__ropes__Concat.id;
if(cltype >= var_s->type->table_size) {
var3 = 0;
} else {
var3 = var_s->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var4, self); /* left= on <var4:Concat>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var4, var_s); /* right= on <var4:Concat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Concat>*/
}
var = var4;
goto RET_LABEL;
} else {
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var7 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_r = var5;
{
var8 = ((long(*)(val* self))(var_r->class->vft[COLOR_standard__string__Text__length]))(var_r); /* length on <var_r:String>*/
}
var_rlen = var8;
{
{ /* Inline kernel#Int#+ (var_rlen,var_slen) on <var_rlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var11 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var14 = var_rlen + var_slen;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var15 = glob_sys;
{
var16 = standard__ropes___Sys___maxlen(var15);
}
{
{ /* Inline kernel#Int#> (var9,var16) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var23 = var9 > var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var24 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var24, self); /* left= on <var24:Concat>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var24, var_s); /* right= on <var24:Concat>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24); /* init on <var24:Concat>*/
}
var = var24;
goto RET_LABEL;
} else {
}
var25 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var28 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = ((val*(*)(val* self, val* p0))(var_r->class->vft[COLOR_standard__string__String___43d]))(var_r, var_s); /* + on <var_r:String>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var25, var26); /* left= on <var25:Concat>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var25, var29); /* right= on <var25:Concat>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_standard__kernel__Object__init]))(var25); /* init on <var25:Concat>*/
}
var = var25;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#chars for (self: RopeBuffer): Sequence[Char] */
val* standard___standard__RopeBuffer___standard__string__Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : RopeBufferChars */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val != NULL; /* _chars on <self:RopeBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val; /* _chars on <self:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 200);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__RopeBufferChars(&type_standard__RopeBufferChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeBufferChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:RopeBufferChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_standard__ropes__RopeBuffer___chars].val = var3; /* _chars on <self:RopeBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#str for (self: RopeBuffer): String */
val* standard___standard__RopeBuffer___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#str= for (self: RopeBuffer, String) */
void standard___standard__RopeBuffer___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___str].val = p0; /* _str on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#ns for (self: RopeBuffer): NativeString */
char* standard___standard__RopeBuffer___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#ns= for (self: RopeBuffer, NativeString) */
void standard___standard__RopeBuffer___ns_61d(val* self, char* p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str = p0; /* _ns on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#rpos for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___rpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#rpos= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___rpos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = p0; /* _rpos on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#dumped for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___dumped(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#dumped= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___dumped_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l = p0; /* _dumped on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#length for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___standard__string__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#length= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___length].l = p0; /* _length on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#buf_size for (self: RopeBuffer): Int */
long standard___standard__RopeBuffer___buf_size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#buf_size= for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___buf_size_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l = p0; /* _buf_size on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#substrings for (self: RopeBuffer): Iterator[FlatText] */
val* standard___standard__RopeBuffer___standard__string__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeBufSubstringIterator */;
var1 = NEW_standard__ropes__RopeBufSubstringIterator(&type_standard__ropes__RopeBufSubstringIterator);
{
standard__ropes___standard__ropes__RopeBufSubstringIterator___init(var1, self); /* Direct call ropes#RopeBufSubstringIterator#init on <var1:RopeBufSubstringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#init for (self: RopeBuffer) */
void standard___standard__RopeBuffer___standard__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
char* var4 /* : NativeString */;
val* var5 /* : Sys */;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
val* var11 /* : Sys */;
long var12 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__RopeBuffer___standard__kernel__Object__init]))(self); /* init on <self:RopeBuffer>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = standard___standard__NativeString___to_s_with_length(var1, 0l);
var = var2;
varonce = var;
}
{
{ /* Inline ropes#RopeBuffer#str= (self,var) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___str].val = var; /* _str on <self:RopeBuffer> */
RET_LABEL3:(void)0;
}
}
var4 = NULL/*special!*/;
var5 = glob_sys;
{
var6 = standard__ropes___Sys___maxlen(var5);
}
{
{ /* Inline string#NativeString#new (var4,var6) on <var4:NativeString> */
var9 = (char*)nit_alloc(var6);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var7) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str = var7; /* _ns on <self:RopeBuffer> */
RET_LABEL10:(void)0;
}
}
var11 = glob_sys;
{
var12 = standard__ropes___Sys___maxlen(var11);
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (self,var12) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l = var12; /* _buf_size on <self:RopeBuffer> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l = 0l; /* _dumped on <self:RopeBuffer> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#from for (self: RopeBuffer, String) */
void standard___standard__RopeBuffer___from(val* self, val* p0) {
val* var_str /* var str: String */;
char* var /* : NativeString */;
val* var2 /* : Sys */;
long var3 /* : Int */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
val* var8 /* : Sys */;
long var9 /* : Int */;
long var11 /* : Int */;
{
standard___standard__RopeBuffer___standard__kernel__Object__init(self); /* Direct call ropes#RopeBuffer#init on <self:RopeBuffer>*/
}
var_str = p0;
{
{ /* Inline ropes#RopeBuffer#str= (self,var_str) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___str].val = var_str; /* _str on <self:RopeBuffer> */
RET_LABEL1:(void)0;
}
}
var = NULL/*special!*/;
var2 = glob_sys;
{
var3 = standard__ropes___Sys___maxlen(var2);
}
{
{ /* Inline string#NativeString#new (var,var3) on <var:NativeString> */
var6 = (char*)nit_alloc(var3);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var4) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str = var4; /* _ns on <self:RopeBuffer> */
RET_LABEL7:(void)0;
}
}
var8 = glob_sys;
{
var9 = standard__ropes___Sys___maxlen(var8);
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (self,var9) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l = var9; /* _buf_size on <self:RopeBuffer> */
RET_LABEL10:(void)0;
}
}
{
var11 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline ropes#RopeBuffer#length= (self,var11) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___length].l = var11; /* _length on <self:RopeBuffer> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l = 0l; /* _dumped on <self:RopeBuffer> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#empty for (self: RopeBuffer): Buffer */
val* standard___standard__RopeBuffer___standard__string__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : RopeBuffer */;
var1 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
standard___standard__RopeBuffer___standard__kernel__Object__init(var1); /* Direct call ropes#RopeBuffer#init on <var1:RopeBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#substring for (self: RopeBuffer, Int, Int): Buffer */
val* standard___standard__RopeBuffer___standard__string__Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var_strlen /* var strlen: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Buffer */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
long var_subpos /* var subpos: Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
val* var68 /* : RopeBuffer */;
val* var69 /* : String */;
val* var71 /* : String */;
val* var72 /* : Text */;
val* var73 /* : String */;
val* var75 /* : String */;
val* var76 /* : Text */;
val* var_l /* var l: String */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var_rem /* var rem: Int */;
char* var84 /* : NativeString */;
char* var85 /* : NativeString */;
char* var87 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var88 /* : NativeString */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
long var93 /* : Int */;
val* var95 /* : RopeBuffer */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
char* var98 /* : NativeString */;
char* var99 /* : NativeString */;
char* var101 /* : NativeString */;
char* var_nns102 /* var nns: NativeString */;
char* var103 /* : NativeString */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
long var108 /* : Int */;
val* var110 /* : RopeBuffer */;
val* var111 /* : FlatString */;
var_from = p0;
var_count = p1;
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var3 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
var_strlen = var4;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var8 = var_from < 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var11 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var15 = var_count + var_from;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_count = var9;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var22 = var_count < 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var_count = 0l;
} else {
}
var_from = 0l;
} else {
}
{
{ /* Inline ropes#RopeBuffer#length (self) on <self:RopeBuffer> */
var25 = self->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <self:RopeBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_count,var23) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var28 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var32 = var_count > var23;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline ropes#RopeBuffer#length (self) on <self:RopeBuffer> */
var35 = self->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <self:RopeBuffer> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var33,var_from) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var38 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var42 = var33 - var_from;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_count = var36;
} else {
}
{
{ /* Inline kernel#Int#== (var_count,0l) on <var_count:Int> */
var45 = var_count == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
var46 = standard___standard__RopeBuffer___standard__string__Text__empty(self);
}
var = var46;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_strlen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_strlen:Int> isa OTHER */
/* <var_strlen:Int> isa OTHER */
var49 = 1; /* easy <var_strlen:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var53 = var_from < var_strlen;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline kernel#Int#- (var_strlen,var_from) on <var_strlen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var56 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var60 = var_strlen - var_from;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_subpos = var54;
{
{ /* Inline kernel#Int#<= (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var63 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var67 = var_count <= var_subpos;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
var68 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var71 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = ((val*(*)(val* self, long p0, long p1))(var69->class->vft[COLOR_standard__string__Text__substring]))(var69, var_from, var_count); /* substring on <var69:String>*/
}
{
standard___standard__RopeBuffer___from(var68, var72); /* Direct call ropes#RopeBuffer#from on <var68:RopeBuffer>*/
}
var = var68;
goto RET_LABEL;
} else {
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var75 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = standard___standard__Text___substring_from(var73, var_from);
}
var_l = var76;
{
{ /* Inline kernel#Int#- (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var79 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var83 = var_count - var_subpos;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_rem = var77;
var84 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var84,var_rem) on <var84:NativeString> */
var87 = (char*)nit_alloc(var_rem);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_nns = var85;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var90 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var93 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var88,var_nns,var_rem,var91,0l) on <var88:NativeString> */
memmove(var_nns+0l,var88+var91,var_rem);
RET_LABEL94:(void)0;
}
}
var95 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
var96 = standard___standard__NativeString___to_s_with_length(var_nns, var_rem);
}
{
var97 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__string__String___43d]))(var_l, var96); /* + on <var_l:String>*/
}
{
standard___standard__RopeBuffer___from(var95, var97); /* Direct call ropes#RopeBuffer#from on <var95:RopeBuffer>*/
}
var = var95;
goto RET_LABEL;
}
} else {
var98 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var98,var_count) on <var98:NativeString> */
var101 = (char*)nit_alloc(var_count);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_nns102 = var99;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var105 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var108 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var103,var_nns102,var_count,var106,0l) on <var103:NativeString> */
memmove(var_nns102+0l,var103+var106,var_count);
RET_LABEL109:(void)0;
}
}
var110 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
var111 = standard___standard__NativeString___to_s_with_length(var_nns102, var_count);
}
{
standard___standard__RopeBuffer___from(var110, var111); /* Direct call ropes#RopeBuffer#from on <var110:RopeBuffer>*/
}
var = var110;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#append for (self: RopeBuffer, Text) */
void standard___standard__RopeBuffer___standard__string__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var_slen /* var slen: Int */;
val* var_ /* var : RopeBuffer */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var_rp /* var rp: Int */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var_16 /* var : Bool */;
val* var17 /* : Sys */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var_42 /* var : RopeBuffer */;
val* var43 /* : String */;
val* var45 /* : String */;
val* var46 /* : FlatString */;
char* var47 /* : NativeString */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : String */;
val* var73 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
long var78 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
long var91 /* : Int */;
long var93 /* : Int */;
long var_begin /* var begin: Int */;
char* var94 /* : NativeString */;
char* var96 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
char* var100 /* : NativeString */;
char* var102 /* : NativeString */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
val* var110 /* : SequenceRead[Char] */;
val* var_111 /* var : SequenceRead[Char] */;
val* var112 /* : Iterator[nullable Object] */;
val* var_113 /* var : IndexedIterator[Char] */;
short int var114 /* : Bool */;
val* var115 /* : nullable Object */;
uint32_t var116 /* : Char */;
uint32_t var_i /* var i: Char */;
char* var117 /* : NativeString */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
long var122 /* : Int */;
val* var_124 /* var : RopeBuffer */;
long var125 /* : Int */;
long var127 /* : Int */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
long var_spos /* var spos: Int */;
long var_i136 /* var i: Int */;
long var_137 /* var : Int */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
short int var144 /* : Bool */;
char* var145 /* : NativeString */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
long var150 /* : Int */;
uint32_t var151 /* : Char */;
val* var_153 /* var : RopeBuffer */;
long var154 /* : Int */;
long var156 /* : Int */;
long var157 /* : Int */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
const char* var_class_name162;
long var163 /* : Int */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
long var172 /* : Int */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
const char* var_class_name179;
short int var180 /* : Bool */;
char* var181 /* : NativeString */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
long var186 /* : Int */;
uint32_t var187 /* : Char */;
long var189 /* : Int */;
short int var191 /* : Bool */;
int cltype192;
int idtype193;
const char* var_class_name194;
long var195 /* : Int */;
val* var_196 /* var : RopeBuffer */;
long var197 /* : Int */;
long var199 /* : Int */;
long var200 /* : Int */;
short int var202 /* : Bool */;
int cltype203;
int idtype204;
const char* var_class_name205;
long var206 /* : Int */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
const char* var_class_name214;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
int cltype219;
int idtype220;
const char* var_class_name221;
short int var222 /* : Bool */;
char* var224 /* : NativeString */;
char* var226 /* : NativeString */;
val* var_228 /* var : RopeBuffer */;
long var229 /* : Int */;
long var231 /* : Int */;
long var232 /* : Int */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
const char* var_class_name237;
long var238 /* : Int */;
char* var240 /* : NativeString */;
char* var242 /* : NativeString */;
long var244 /* : Int */;
long var246 /* : Int */;
long var248 /* : Int */;
short int var250 /* : Bool */;
int cltype251;
int idtype252;
const char* var_class_name253;
long var254 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var255 /* : NativeString */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
short int var260 /* : Bool */;
int cltype261;
int idtype262;
const char* var_class_name263;
long var264 /* : Int */;
var_s = p0;
{
var = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_slen = var;
var_ = self;
{
{ /* Inline ropes#RopeBuffer#length (var_) on <var_:RopeBuffer> */
var3 = var_->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <var_:RopeBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var1,var_slen) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var6 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var7 = var1 + var_slen;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#length= (var_,var4) on <var_:RopeBuffer> */
var_->attrs[COLOR_standard__ropes__RopeBuffer___length].l = var4; /* _length on <var_:RopeBuffer> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var11 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_rp = var9;
/* <var_s:Text> isa Rope */
cltype14 = type_standard__ropes__Rope.color;
idtype15 = type_standard__ropes__Rope.id;
if(cltype14 >= var_s->type->table_size) {
var13 = 0;
} else {
var13 = var_s->type->type_table[cltype14] == idtype15;
}
var_16 = var13;
if (var13){
var12 = var_16;
} else {
var17 = glob_sys;
{
var18 = standard__ropes___Sys___maxlen(var17);
}
{
{ /* Inline kernel#Int#> (var_slen,var18) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var25 = var_slen > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var12 = var19;
}
if (var12){
{
{ /* Inline kernel#Int#> (var_rp,0l) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var29 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var33 = var_rp > 0l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_34 = var27;
if (var27){
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var37 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var35,var_rp) on <var35:Int> */
var40 = var35 == var_rp;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var26 = var38;
} else {
var26 = var_34;
}
if (var26){
var_42 = self;
{
{ /* Inline ropes#RopeBuffer#str (var_42) on <var_42:RopeBuffer> */
var45 = var_42->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var_42:RopeBuffer> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var49 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var52 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_rp,var50) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var55 = 1; /* easy <var50:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var59 = var_rp - var50;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var62 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_rp,1l) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var69 = var_rp - 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var46, var47, var53, var60, var63); /* Direct call string#FlatString#with_infos on <var46:FlatString>*/
}
{
var70 = ((val*(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__string__String___43d]))(var43, var46); /* + on <var43:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (var_42,var70) on <var_42:RopeBuffer> */
var_42->attrs[COLOR_standard__ropes__RopeBuffer___str].val = var70; /* _str on <var_42:RopeBuffer> */
RET_LABEL71:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,var_rp) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l = var_rp; /* _dumped on <self:RopeBuffer> */
RET_LABEL72:(void)0;
}
}
} else {
}
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var75 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = ((val*(*)(val* self, val* p0))(var73->class->vft[COLOR_standard__string__String___43d]))(var73, var_s); /* + on <var73:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (self,var76) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___str].val = var76; /* _str on <self:RopeBuffer> */
RET_LABEL77:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var80 = self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var78,var_rp) on <var78:Int> */
/* Covariant cast for argument 0 (i) <var_rp:Int> isa OTHER */
/* <var_rp:Int> isa OTHER */
var83 = 1; /* easy <var_rp:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var87 = var78 - var_rp;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_remsp = var81;
/* <var_s:Text> isa FlatString */
cltype89 = type_standard__FlatString.color;
idtype90 = type_standard__FlatString.id;
if(cltype89 >= var_s->type->table_size) {
var88 = 0;
} else {
var88 = var_s->type->type_table[cltype89] == idtype90;
}
if (var88){
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var93 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_begin = var91;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var96 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_sits = var94;
} else {
/* <var_s:Text> isa FlatBuffer */
cltype98 = type_standard__FlatBuffer.color;
idtype99 = type_standard__FlatBuffer.id;
if(cltype98 >= var_s->type->table_size) {
var97 = 0;
} else {
var97 = var_s->type->type_table[cltype98] == idtype99;
}
if (var97){
var_begin = 0l;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var102 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_sits = var100;
} else {
{
{ /* Inline kernel#Int#<= (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var105 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var109 = var_slen <= var_remsp;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
var110 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Text>*/
}
var_111 = var110;
{
var112 = ((val*(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_111); /* iterator on <var_111:SequenceRead[Char]>*/
}
var_113 = var112;
for(;;) {
{
var114 = ((short int(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_113); /* is_ok on <var_113:IndexedIterator[Char]>*/
}
if (var114){
{
var115 = ((val*(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_113); /* item on <var_113:IndexedIterator[Char]>*/
}
var116 = (uint32_t)((long)(var115)>>2);
var_i = var116;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var119 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var122 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var117,var120,var_i) on <var117:NativeString> */
var117[var120]=(unsigned char)var_i;
RET_LABEL123:(void)0;
}
}
var_124 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_124) on <var_124:RopeBuffer> */
var127 = var_124->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <var_124:RopeBuffer> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var125,1l) on <var125:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var130 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var134 = var125 + 1l;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_124,var128) on <var_124:RopeBuffer> */
var_124->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var128; /* _rpos on <var_124:RopeBuffer> */
RET_LABEL135:(void)0;
}
}
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_113); /* next on <var_113:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_113); /* finish on <var_113:IndexedIterator[Char]>*/
}
} else {
var_spos = 0l;
var_i136 = 0l;
var_137 = var_remsp;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i136,var_137) on <var_i136:Int> */
/* Covariant cast for argument 0 (i) <var_137:Int> isa OTHER */
/* <var_137:Int> isa OTHER */
var140 = 1; /* easy <var_137:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var144 = var_i136 < var_137;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
if (var138){
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var147 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var150 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
var151 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Text___91d_93d]))(var_s, var_spos); /* [] on <var_s:Text>*/
}
{
{ /* Inline string#NativeString#[]= (var145,var148,var151) on <var145:NativeString> */
var145[var148]=(unsigned char)var151;
RET_LABEL152:(void)0;
}
}
var_153 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_153) on <var_153:RopeBuffer> */
var156 = var_153->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <var_153:RopeBuffer> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var154,1l) on <var154:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var159 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var159)) {
var_class_name162 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var163 = var154 + 1l;
var157 = var163;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_153,var157) on <var_153:RopeBuffer> */
var_153->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var157; /* _rpos on <var_153:RopeBuffer> */
RET_LABEL164:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_spos,1l) on <var_spos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var167 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var171 = var_spos + 1l;
var165 = var171;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var_spos = var165;
{
var172 = standard___standard__Int___Discrete__successor(var_i136, 1l);
}
var_i136 = var172;
} else {
goto BREAK_label173;
}
}
BREAK_label173: (void)0;
{
standard___standard__RopeBuffer___dump_buffer(self); /* Direct call ropes#RopeBuffer#dump_buffer on <self:RopeBuffer>*/
}
for(;;) {
{
{ /* Inline kernel#Int#< (var_spos,var_slen) on <var_spos:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var176 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var176)) {
var_class_name179 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name179);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var180 = var_spos < var_slen;
var174 = var180;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
if (var174){
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var183 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var186 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Text___91d_93d]))(var_s, var_spos); /* [] on <var_s:Text>*/
}
{
{ /* Inline string#NativeString#[]= (var181,var184,var187) on <var181:NativeString> */
var181[var184]=(unsigned char)var187;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_spos,1l) on <var_spos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var191 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var191)) {
var_class_name194 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name194);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var195 = var_spos + 1l;
var189 = var195;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
var_spos = var189;
var_196 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_196) on <var_196:RopeBuffer> */
var199 = var_196->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <var_196:RopeBuffer> */
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var197,1l) on <var197:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var202 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var202)) {
var_class_name205 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name205);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var206 = var197 + 1l;
var200 = var206;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_196,var200) on <var_196:RopeBuffer> */
var_196->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var200; /* _rpos on <var_196:RopeBuffer> */
RET_LABEL207:(void)0;
}
}
} else {
goto BREAK_label208;
}
}
BREAK_label208: (void)0;
}
goto RET_LABEL;
}
}
{
{ /* Inline kernel#Int#<= (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var211 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var211)) {
var_class_name214 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name214);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var215 = var_slen <= var_remsp;
var209 = var215;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
}
if (var209){
{
{ /* Inline kernel#Int#<= (var_remsp,0l) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var218 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var218)) {
var_class_name221 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name221);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var222 = var_remsp <= 0l;
var216 = var222;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
if (var216){
{
standard___standard__RopeBuffer___dump_buffer(self); /* Direct call ropes#RopeBuffer#dump_buffer on <self:RopeBuffer>*/
}
{
{ /* Inline ropes#RopeBuffer#rpos= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = 0l; /* _rpos on <self:RopeBuffer> */
RET_LABEL223:(void)0;
}
}
} else {
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var226 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var224,var_slen,var_begin,var_rp) on <var_sits:NativeString> */
memmove(var224+var_rp,var_sits+var_begin,var_slen);
RET_LABEL227:(void)0;
}
}
var_228 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_228) on <var_228:RopeBuffer> */
var231 = var_228->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <var_228:RopeBuffer> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var229,var_slen) on <var229:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var234 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var234)) {
var_class_name237 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name237);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var238 = var229 + var_slen;
var232 = var238;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_228,var232) on <var_228:RopeBuffer> */
var_228->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var232; /* _rpos on <var_228:RopeBuffer> */
RET_LABEL239:(void)0;
}
}
}
} else {
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var242 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var240,var_remsp,var_begin,var_rp) on <var_sits:NativeString> */
memmove(var240+var_rp,var_sits+var_begin,var_remsp);
RET_LABEL243:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var246 = self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (self,var244) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var244; /* _rpos on <self:RopeBuffer> */
RET_LABEL247:(void)0;
}
}
{
standard___standard__RopeBuffer___dump_buffer(self); /* Direct call ropes#RopeBuffer#dump_buffer on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var250 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var250)) {
var_class_name253 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name253);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var254 = var_slen - var_remsp;
var248 = var254;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
}
var_nlen = var248;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var257 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_begin,var_remsp) on <var_begin:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var260 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var260)) {
var_class_name263 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name263);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var264 = var_begin + var_remsp;
var258 = var264;
goto RET_LABEL259;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var255,var_nlen,var258,0l) on <var_sits:NativeString> */
memmove(var255+0l,var_sits+var258,var_nlen);
RET_LABEL265:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (self,var_nlen) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var_nlen; /* _rpos on <self:RopeBuffer> */
RET_LABEL266:(void)0;
}
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#add for (self: RopeBuffer, Char) */
void standard___standard__RopeBuffer___standard__string__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var2 /* : Int */;
long var_rp /* var rp: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var_ /* var : RopeBuffer */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
var_c = p0;
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var2 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_rp = var;
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var5 = self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var_rp,var3) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var8 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var9 = var_rp >= var3;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
standard___standard__RopeBuffer___dump_buffer(self); /* Direct call ropes#RopeBuffer#dump_buffer on <self:RopeBuffer>*/
}
var_rp = 0l;
} else {
}
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var12 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var10,var_rp,var_c) on <var10:NativeString> */
var10[var_rp]=(unsigned char)var_c;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_rp,1l) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var20 = var_rp + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_rp = var14;
var_ = self;
{
{ /* Inline ropes#RopeBuffer#length (var_) on <var_:RopeBuffer> */
var23 = var_->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <var_:RopeBuffer> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var30 = var21 + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#length= (var_,var24) on <var_:RopeBuffer> */
var_->attrs[COLOR_standard__ropes__RopeBuffer___length].l = var24; /* _length on <var_:RopeBuffer> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (self,var_rp) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = var_rp; /* _rpos on <self:RopeBuffer> */
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#dump_buffer for (self: RopeBuffer) */
void standard___standard__RopeBuffer___dump_buffer(val* self) {
val* var /* : FlatString */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var_nstr /* var nstr: FlatString */;
val* var_ /* var : RopeBuffer */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
long var33 /* : Int */;
long var35 /* : Int */;
long var_bs /* var bs: Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
char* var43 /* : NativeString */;
char* var44 /* : NativeString */;
char* var46 /* : NativeString */;
{
{ /* Inline string#Buffer#written= (self,0) on <self:RopeBuffer> */
self->attrs[COLOR_standard__string__Buffer___written].s = 0; /* _written on <self:RopeBuffer> */
RET_LABEL1:(void)0;
}
}
var = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var4 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var7 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var10 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var14 = var5 - var8;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var17 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var20 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var27 = var18 - 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var, var2, var11, var15, var21); /* Direct call string#FlatString#with_infos on <var:FlatString>*/
}
var_nstr = var;
var_ = self;
{
{ /* Inline ropes#RopeBuffer#str (var_) on <var_:RopeBuffer> */
var30 = var_->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var_:RopeBuffer> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = ((val*(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__string__String___43d]))(var28, var_nstr); /* + on <var28:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (var_,var31) on <var_:RopeBuffer> */
var_->attrs[COLOR_standard__ropes__RopeBuffer___str].val = var31; /* _str on <var_:RopeBuffer> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var35 = self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_bs = var33;
{
{ /* Inline kernel#Int#* (var_bs,2l) on <var_bs:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var38 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var42 = var_bs * 2l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_bs = var36;
var43 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var43,var_bs) on <var43:NativeString> */
var46 = (char*)nit_alloc(var_bs);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var44) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str = var44; /* _ns on <self:RopeBuffer> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (self,var_bs) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___buf_size].l = var_bs; /* _buf_size on <self:RopeBuffer> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l = 0l; /* _dumped on <self:RopeBuffer> */
RET_LABEL49:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#enlarge for (self: RopeBuffer, Int) */
void standard___standard__RopeBuffer___standard__string__Buffer__enlarge(val* self, long p0) {
long var_i /* var i: Int */;
var_i = p0;
RET_LABEL:;
}
/* method ropes#RopeBuffer#to_s for (self: RopeBuffer): String */
val* standard___standard__RopeBuffer___standard__string__Object__to_s(val* self) {
val* var /* : String */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
long var_nnslen /* var nnslen: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : FlatString */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var51 /* : String */;
{
{ /* Inline string#Buffer#written= (self,1) on <self:RopeBuffer> */
self->attrs[COLOR_standard__string__Buffer___written].s = 1; /* _written on <self:RopeBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var4 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var7 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var11 = var2 - var5;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_nnslen = var8;
{
{ /* Inline kernel#Int#== (var_nnslen,0l) on <var_nnslen:Int> */
var14 = var_nnslen == 0l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var17 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var20 = self->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var24 = self->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var27 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var30 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var25,var28) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var33 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var37 = var25 - var28;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var40 = self->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var43 = self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var41,1l) on <var41:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var50 = var41 - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var21, var22, var31, var38, var44); /* Direct call string#FlatString#with_infos on <var21:FlatString>*/
}
{
var51 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__string__String___43d]))(var18, var21); /* + on <var18:String>*/
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#FlatString#+ for (self: FlatString, Text): String */
val* standard__ropes___FlatString___standard__string__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_mlen /* var mlen: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
long var_nlen /* var nlen: Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Sys */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : Concat */;
char* var29 /* : NativeString */;
char* var31 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var32 /* : Int */;
long var34 /* : Int */;
long var_sifrom /* var sifrom: Int */;
long var35 /* : Int */;
long var37 /* : Int */;
long var_mifrom /* var mifrom: Int */;
char* var38 /* : NativeString */;
char* var40 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
char* var49 /* : NativeString */;
char* var51 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
val* var54 /* : FlatString */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
val* var58 /* : String */;
val* var60 /* : String */;
val* var_sl /* var sl: String */;
long var61 /* : Int */;
long var_sllen /* var sllen: Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
val* var69 /* : Sys */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
val* var78 /* : Concat */;
val* var79 /* : Concat */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var83 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_standard__string__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_slen = var2;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var5 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mlen = var3;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var8 = var_slen == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_mlen,0l) on <var_mlen:Int> */
var11 = var_mlen == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var14 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var15 = var_slen + var_mlen;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_nlen = var12;
/* <var_s:String> isa FlatString */
cltype17 = type_standard__FlatString.color;
idtype18 = type_standard__FlatString.id;
if(cltype17 >= var_s->type->table_size) {
var16 = 0;
} else {
var16 = var_s->type->type_table[cltype17] == idtype18;
}
if (var16){
var19 = glob_sys;
{
var20 = standard__ropes___Sys___maxlen(var19);
}
{
{ /* Inline kernel#Int#> (var_nlen,var20) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var27 = var_nlen > var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var28 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var28, self); /* left= on <var28:Concat>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var28, var_s); /* right= on <var28:Concat>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_standard__kernel__Object__init]))(var28); /* init on <var28:Concat>*/
}
var = var28;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var31 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_mits = var29;
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:String(FlatString)> */
var34 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:String(FlatString)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_sifrom = var32;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var37 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_mifrom = var35;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:String(FlatString)> */
var40 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:String(FlatString)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_sits = var38;
var41 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var48 = var_nlen + 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var41,var42) on <var41:NativeString> */
var51 = (char*)nit_alloc(var42);
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_ns = var49;
{
{ /* Inline string#NativeString#copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:NativeString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL52:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL53:(void)0;
}
}
{
var54 = standard___standard__NativeString___to_s_with_length(var_ns, var_nlen);
}
var = var54;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype56 = type_standard__ropes__Concat.color;
idtype57 = type_standard__ropes__Concat.id;
if(cltype56 >= var_s->type->table_size) {
var55 = 0;
} else {
var55 = var_s->type->type_table[cltype56] == idtype57;
}
if (var55){
{
{ /* Inline ropes#Concat#left (var_s) on <var_s:String(Concat)> */
var60 = var_s->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_sl = var58;
{
var61 = ((long(*)(val* self))(var_sl->class->vft[COLOR_standard__string__Text__length]))(var_sl); /* length on <var_sl:String>*/
}
var_sllen = var61;
{
{ /* Inline kernel#Int#+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var64 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var68 = var_sllen + var_mlen;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var69 = glob_sys;
{
var70 = standard__ropes___Sys___maxlen(var69);
}
{
{ /* Inline kernel#Int#> (var62,var70) on <var62:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var77 = var62 > var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
var78 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void(*)(val* self, val* p0))(var78->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var78, self); /* left= on <var78:Concat>*/
}
{
((void(*)(val* self, val* p0))(var78->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var78, var_s); /* right= on <var78:Concat>*/
}
{
((void(*)(val* self))(var78->class->vft[COLOR_standard__kernel__Object__init]))(var78); /* init on <var78:Concat>*/
}
var = var78;
goto RET_LABEL;
} else {
}
var79 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var80 = standard__ropes___FlatString___standard__string__String___43d(self, var_sl);
}
{
{ /* Inline ropes#Concat#right (var_s) on <var_s:String(Concat)> */
var83 = var_s->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var79->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var79, var80); /* left= on <var79:Concat>*/
}
{
((void(*)(val* self, val* p0))(var79->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var79, var81); /* right= on <var79:Concat>*/
}
{
((void(*)(val* self))(var79->class->vft[COLOR_standard__kernel__Object__init]))(var79); /* init on <var79:Concat>*/
}
var = var79;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 471);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#node for (self: RopeIterPiece): String */
val* standard__ropes___standard__ropes__RopeIterPiece___node(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___node].val; /* _node on <self:RopeIterPiece> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 478);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#node= for (self: RopeIterPiece, String) */
void standard__ropes___standard__ropes__RopeIterPiece___node_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___node].val = p0; /* _node on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#ldone for (self: RopeIterPiece): Bool */
short int standard__ropes___standard__ropes__RopeIterPiece___ldone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s; /* _ldone on <self:RopeIterPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#ldone= for (self: RopeIterPiece, Bool) */
void standard__ropes___standard__ropes__RopeIterPiece___ldone_61d(val* self, short int p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s = p0; /* _ldone on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#rdone for (self: RopeIterPiece): Bool */
short int standard__ropes___standard__ropes__RopeIterPiece___rdone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s; /* _rdone on <self:RopeIterPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#rdone= for (self: RopeIterPiece, Bool) */
void standard__ropes___standard__ropes__RopeIterPiece___rdone_61d(val* self, short int p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = p0; /* _rdone on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#prev for (self: RopeIterPiece): nullable RopeIterPiece */
val* standard__ropes___standard__ropes__RopeIterPiece___prev(val* self) {
val* var /* : nullable RopeIterPiece */;
val* var1 /* : nullable RopeIterPiece */;
var1 = self->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val; /* _prev on <self:RopeIterPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIterPiece#prev= for (self: RopeIterPiece, nullable RopeIterPiece) */
void standard__ropes___standard__ropes__RopeIterPiece___prev_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val = p0; /* _prev on <self:RopeIterPiece> */
RET_LABEL:;
}
/* method ropes#RopeIterPiece#init for (self: RopeIterPiece) */
void standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init]))(self); /* init on <self:RopeIterPiece>*/
}
RET_LABEL:;
}
/* method ropes#RopeIter#pns for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <self:RopeIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#pns= for (self: RopeIter, Int) */
void standard__ropes___standard__ropes__RopeIter___pns_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeIter___pns].l = p0; /* _pns on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#str for (self: RopeIter): String */
val* standard__ropes___standard__ropes__RopeIter___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___str].val; /* _str on <self:RopeIter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 540);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#str= for (self: RopeIter, String) */
void standard__ropes___standard__ropes__RopeIter___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIter___str].val = p0; /* _str on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#subs for (self: RopeIter): IndexedIterator[String] */
val* standard__ropes___standard__ropes__RopeIter___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#subs= for (self: RopeIter, IndexedIterator[String]) */
void standard__ropes___standard__ropes__RopeIter___subs_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeIter___subs].val = p0; /* _subs on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#max for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___max].l; /* _max on <self:RopeIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#max= for (self: RopeIter, Int) */
void standard__ropes___standard__ropes__RopeIter___max_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeIter___max].l = p0; /* _max on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#pos for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeIter___pos].l; /* _pos on <self:RopeIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#pos= for (self: RopeIter, Int) */
void standard__ropes___standard__ropes__RopeIter___pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeIter___pos].l = p0; /* _pos on <self:RopeIter> */
RET_LABEL:;
}
/* method ropes#RopeIter#from for (self: RopeIter, RopeString, Int) */
void standard__ropes___standard__ropes__RopeIter___from(val* self, val* p0, long p1) {
val* var_root /* var root: RopeString */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var2 /* : IndexedIterator[String] */;
val* var4 /* : IndexedIterator[String] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
val* var12 /* : IndexedIterator[String] */;
val* var14 /* : IndexedIterator[String] */;
val* var15 /* : nullable Object */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
var_root = p0;
var_pos = p1;
var = NEW_standard__ropes__RopeSubstrings(&type_standard__ropes__RopeSubstrings);
{
standard__ropes___standard__ropes__RopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes#RopeSubstrings#from on <var:RopeSubstrings>*/
}
{
{ /* Inline ropes#RopeIter#subs= (self,var) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___subs].val = var; /* _subs on <self:RopeIter> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var4 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((long(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var2); /* index on <var2:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var9 = var_pos - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pns= (self,var6) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___pns].l = var6; /* _pns on <self:RopeIter> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pos= (self,var_pos) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___pos].l = var_pos; /* _pos on <self:RopeIter> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var14 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var12); /* item on <var12:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeIter#str= (self,var15) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___str].val = var15; /* _str on <self:RopeIter> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:RopeString> */
var19 = var_root->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <var_root:RopeString> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var26 = var17 - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#max= (self,var20) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___max].l = var20; /* _max on <self:RopeIter> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeIter#item for (self: RopeIter): Char */
uint32_t standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline ropes#RopeIter#str (self) on <self:RopeIter> */
var3 = self->attrs[COLOR_standard__ropes__RopeIter___str].val; /* _str on <self:RopeIter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 540);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pns (self) on <self:RopeIter> */
var6 = self->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <self:RopeIter> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__Text___91d_93d]))(var1, var4); /* [] on <var1:String>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#is_ok for (self: RopeIter): Bool */
short int standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeIter#pos (self) on <self:RopeIter> */
var3 = self->attrs[COLOR_standard__ropes__RopeIter___pos].l; /* _pos on <self:RopeIter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#max (self) on <self:RopeIter> */
var6 = self->attrs[COLOR_standard__ropes__RopeIter___max].l; /* _max on <self:RopeIter> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var10 = var1 <= var4;
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
/* method ropes#RopeIter#index for (self: RopeIter): Int */
long standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeIter#pos (self) on <self:RopeIter> */
var3 = self->attrs[COLOR_standard__ropes__RopeIter___pos].l; /* _pos on <self:RopeIter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#next for (self: RopeIter) */
void standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeIter */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_8 /* var : RopeIter */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
val* var23 /* : IndexedIterator[String] */;
val* var25 /* : IndexedIterator[String] */;
val* var26 /* : nullable Object */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : IndexedIterator[String] */;
val* var37 /* : IndexedIterator[String] */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : IndexedIterator[String] */;
val* var42 /* : IndexedIterator[String] */;
val* var43 /* : IndexedIterator[String] */;
val* var45 /* : IndexedIterator[String] */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : IndexedIterator[String] */;
val* var50 /* : IndexedIterator[String] */;
val* var51 /* : nullable Object */;
var_ = self;
{
{ /* Inline ropes#RopeIter#pns (var_) on <var_:RopeIter> */
var2 = var_->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <var_:RopeIter> */
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
{ /* Inline ropes#RopeIter#pns= (var_,var3) on <var_:RopeIter> */
var_->attrs[COLOR_standard__ropes__RopeIter___pns].l = var3; /* _pns on <var_:RopeIter> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes#RopeIter#pos (var_8) on <var_8:RopeIter> */
var11 = var_8->attrs[COLOR_standard__ropes__RopeIter___pos].l; /* _pos on <var_8:RopeIter> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var18 = var9 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pos= (var_8,var12) on <var_8:RopeIter> */
var_8->attrs[COLOR_standard__ropes__RopeIter___pos].l = var12; /* _pos on <var_8:RopeIter> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pns (self) on <self:RopeIter> */
var22 = self->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <self:RopeIter> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var25 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var23); /* item on <var23:IndexedIterator[String]>*/
}
{
var27 = ((long(*)(val* self))(var26->class->vft[COLOR_standard__string__Text__length]))(var26); /* length on <var26:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#< (var20,var27) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var34 = var20 < var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var37 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((short int(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var35); /* is_ok on <var35:IndexedIterator[String]>*/
}
var39 = !var38;
if (var39){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var42 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
((void(*)(val* self))((((long)var40&3)?class_info[((long)var40&3)]:var40->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var40); /* next on <var40:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var45 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((short int(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var43); /* is_ok on <var43:IndexedIterator[String]>*/
}
var47 = !var46;
if (var47){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var50 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 542);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val*(*)(val* self))((((long)var48&3)?class_info[((long)var48&3)]:var48->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var48); /* item on <var48:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeIter#str= (self,var51) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___str].val = var51; /* _str on <self:RopeIter> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pns= (self,0l) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___pns].l = 0l; /* _pns on <self:RopeIter> */
RET_LABEL53:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#iter for (self: RopeBufSubstringIterator): Iterator[FlatText] */
val* standard__ropes___standard__ropes__RopeBufSubstringIterator___iter(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : Iterator[FlatText] */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 673);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#iter= for (self: RopeBufSubstringIterator, Iterator[FlatText]) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___iter_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val = p0; /* _iter on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr for (self: RopeBufSubstringIterator): FlatString */
val* standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr].val; /* _nsstr on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nsstr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 675);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr= for (self: RopeBufSubstringIterator, FlatString) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr].val = p0; /* _nsstr on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done for (self: RopeBufSubstringIterator): Bool */
short int standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s; /* _nsstr_done on <self:RopeBufSubstringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done= for (self: RopeBufSubstringIterator, Bool) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_done_61d(val* self, short int p0) {
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s = p0; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#init for (self: RopeBufSubstringIterator, RopeBuffer) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___init(val* self, val* p0) {
val* var_str /* var str: RopeBuffer */;
val* var /* : String */;
val* var2 /* : String */;
val* var3 /* : Iterator[FlatText] */;
val* var5 /* : FlatString */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
var_str = p0;
{
{ /* Inline ropes#RopeBuffer#str (var_str) on <var_str:RopeBuffer> */
var2 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var_str:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__Text__substrings]))(var); /* substrings on <var:String>*/
}
{
{ /* Inline ropes#RopeBufSubstringIterator#iter= (self,var3) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val = var3; /* _iter on <self:RopeBufSubstringIterator> */
RET_LABEL4:(void)0;
}
}
var5 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (var_str) on <var_str:RopeBuffer> */
var8 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <var_str:RopeBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (var_str) on <var_str:RopeBuffer> */
var11 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <var_str:RopeBuffer> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (var_str) on <var_str:RopeBuffer> */
var14 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <var_str:RopeBuffer> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var9,var12) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var17 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var18 = var9 - var12;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (var_str) on <var_str:RopeBuffer> */
var21 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___dumped].l; /* _dumped on <var_str:RopeBuffer> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (var_str) on <var_str:RopeBuffer> */
var24 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l; /* _rpos on <var_str:RopeBuffer> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var22,1l) on <var22:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var31 = var22 - 1l;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var5, var6, var15, var19, var25); /* Direct call string#FlatString#with_infos on <var5:FlatString>*/
}
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr= (self,var5) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr].val = var5; /* _nsstr on <self:RopeBufSubstringIterator> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#length (var_str) on <var_str:RopeBuffer> */
var35 = var_str->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <var_str:RopeBuffer> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var33,0l) on <var33:Int> */
var38 = var33 == 0l;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr_done= (self,1) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s = 1; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL39:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#is_ok for (self: RopeBufSubstringIterator): Bool */
short int standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[FlatText] */;
val* var4 /* : Iterator[FlatText] */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var4 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 673);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[FlatText]>*/
}
var_ = var5;
if (var5){
var1 = var_;
} else {
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr_done (self) on <self:RopeBufSubstringIterator> */
var8 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s; /* _nsstr_done on <self:RopeBufSubstringIterator> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = !var6;
var1 = var9;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#item for (self: RopeBufSubstringIterator): FlatText */
val* standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[FlatText] */;
val* var4 /* : Iterator[FlatText] */;
short int var5 /* : Bool */;
val* var6 /* : Iterator[FlatText] */;
val* var8 /* : Iterator[FlatText] */;
val* var9 /* : nullable Object */;
val* var10 /* : FlatString */;
val* var12 /* : FlatString */;
{
var1 = standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 689);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var4 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 673);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[FlatText]>*/
}
if (var5){
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var8 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 673);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var6); /* item on <var6:Iterator[FlatText]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr (self) on <self:RopeBufSubstringIterator> */
var12 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr].val; /* _nsstr on <self:RopeBufSubstringIterator> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nsstr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 675);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#next for (self: RopeBufSubstringIterator) */
void standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var /* : Iterator[FlatText] */;
val* var2 /* : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[FlatText] */;
val* var6 /* : Iterator[FlatText] */;
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var2 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 673);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var); /* is_ok on <var:Iterator[FlatText]>*/
}
if (var3){
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var6 = self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 673);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var4); /* next on <var4:Iterator[FlatText]>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr_done= (self,1) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s = 1; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeSubstrings#iter for (self: RopeSubstrings): RopeIterPiece */
val* standard__ropes___standard__ropes__RopeSubstrings___iter(val* self) {
val* var /* : RopeIterPiece */;
val* var1 /* : RopeIterPiece */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 707);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#iter= for (self: RopeSubstrings, RopeIterPiece) */
void standard__ropes___standard__ropes__RopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = p0; /* _iter on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#pos for (self: RopeSubstrings): Int */
long standard__ropes___standard__ropes__RopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#pos= for (self: RopeSubstrings, Int) */
void standard__ropes___standard__ropes__RopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = p0; /* _pos on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#max for (self: RopeSubstrings): Int */
long standard__ropes___standard__ropes__RopeSubstrings___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#max= for (self: RopeSubstrings, Int) */
void standard__ropes___standard__ropes__RopeSubstrings___max_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l = p0; /* _max on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#str for (self: RopeSubstrings): FlatString */
val* standard__ropes___standard__ropes__RopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 714);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#str= for (self: RopeSubstrings, FlatString) */
void standard__ropes___standard__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#init for (self: RopeSubstrings, RopeString) */
void standard__ropes___standard__ropes__RopeSubstrings___init(val* self, val* p0) {
val* var_root /* var root: RopeString */;
val* var /* : RopeIterPiece */;
val* var_r /* var r: RopeIterPiece */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var_rnod /* var rnod: String */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : String */;
val* var15 /* : String */;
val* var16 /* : RopeIterPiece */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
var_root = p0;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root); /* node= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:RopeIterPiece>*/
}
var_r = var;
{
{ /* Inline ropes#RopeSubstrings#pos= (self,0l) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = 0l; /* _pos on <self:RopeSubstrings> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:RopeString> */
var4 = var_root->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <var_root:RopeString> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var8 = var2 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max= (self,var5) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l = var5; /* _max on <self:RopeSubstrings> */
RET_LABEL9:(void)0;
}
}
var_rnod = var_root;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype11 = type_standard__ropes__Concat.color;
idtype12 = type_standard__ropes__Concat.id;
if(cltype11 >= var_rnod->type->table_size) {
var10 = 0;
} else {
var10 = var_rnod->type->type_table[cltype11] == idtype12;
}
if (var10){
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var15 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_rnod = var13;
var16 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var16, var_rnod); /* node= on <var16:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var16->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var16, 1); /* ldone= on <var16:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var16->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var16, 0); /* rdone= on <var16:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var16, var_r); /* prev= on <var16:RopeIterPiece>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__init]))(var16); /* init on <var16:RopeIterPiece>*/
}
var_r = var16;
} else {
/* <var_rnod:String> isa FlatString */
cltype18 = type_standard__FlatString.color;
idtype19 = type_standard__FlatString.id;
if(cltype18 >= var_rnod->type->table_size) {
var17 = 0;
} else {
var17 = var_rnod->type->type_table[cltype18] == idtype19;
}
if (unlikely(!var17)) {
var_class_name20 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 727);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeIterPiece#rdone= (var_r,1) on <var_r:RopeIterPiece> */
var_r->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = 1; /* _rdone on <var_r:RopeIterPiece> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_r) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = var_r; /* _iter on <self:RopeSubstrings> */
RET_LABEL23:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#from for (self: RopeSubstrings, RopeString, Int) */
void standard__ropes___standard__ropes__RopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: RopeString */;
long var_pos /* var pos: Int */;
val* var /* : RopeIterPiece */;
val* var_r /* var r: RopeIterPiece */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : String */;
val* var14 /* : String */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var24 /* : String */;
val* var26 /* : String */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
val* var35 /* : String */;
val* var37 /* : String */;
val* var38 /* : RopeIterPiece */;
val* var39 /* : String */;
val* var41 /* : String */;
val* var42 /* : RopeIterPiece */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
var_root = p0;
var_pos = p1;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root); /* node= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeIterPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:RopeIterPiece>*/
}
var_r = var;
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:RopeString> */
var3 = var_root->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <var_root:RopeString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var7 = var1 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max= (self,var4) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l = var4; /* _max on <self:RopeSubstrings> */
RET_LABEL8:(void)0;
}
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype10 = type_standard__ropes__Concat.color;
idtype11 = type_standard__ropes__Concat.id;
if(cltype10 >= var_rnod->type->table_size) {
var9 = 0;
} else {
var9 = var_rnod->type->type_table[cltype10] == idtype11;
}
if (var9){
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var14 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((long(*)(val* self))(var12->class->vft[COLOR_standard__string__Text__length]))(var12); /* length on <var12:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var15) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var22 = var_off >= var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline ropes#RopeIterPiece#rdone= (var_r,1) on <var_r:RopeIterPiece> */
var_r->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = 1; /* _rdone on <var_r:RopeIterPiece> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var26 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_standard__string__Text__length]))(var24); /* length on <var24:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var27) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var34 = var_off - var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_off = var28;
{
{ /* Inline ropes#Concat#right (var_rnod) on <var_rnod:String(Concat)> */
var37 = var_rnod->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_rnod = var35;
var38 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var38, var_rnod); /* node= on <var38:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var38->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var38, 1); /* ldone= on <var38:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var38->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var38, 0); /* rdone= on <var38:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var38, var_r); /* prev= on <var38:RopeIterPiece>*/
}
{
((void(*)(val* self))(var38->class->vft[COLOR_standard__kernel__Object__init]))(var38); /* init on <var38:RopeIterPiece>*/
}
var_r = var38;
} else {
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var41 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_rnod = var39;
var42 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var42, var_rnod); /* node= on <var42:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var42->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var42, 1); /* ldone= on <var42:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var42->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var42, 0); /* rdone= on <var42:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var42, var_r); /* prev= on <var42:RopeIterPiece>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_standard__kernel__Object__init]))(var42); /* init on <var42:RopeIterPiece>*/
}
var_r = var42;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype44 = type_standard__FlatString.color;
idtype45 = type_standard__FlatString.id;
if(cltype44 >= var_rnod->type->table_size) {
var43 = 0;
} else {
var43 = var_rnod->type->type_table[cltype44] == idtype45;
}
if (unlikely(!var43)) {
var_class_name46 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 752);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline ropes#RopeIterPiece#rdone= (var_r,1) on <var_r:RopeIterPiece> */
var_r->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = 1; /* _rdone on <var_r:RopeIterPiece> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_r) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = var_r; /* _iter on <self:RopeSubstrings> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var52 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var56 = var_pos - var_off;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos= (self,var50) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = var50; /* _pos on <self:RopeSubstrings> */
RET_LABEL57:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#item for (self: RopeSubstrings): FlatString */
val* standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
{
{ /* Inline ropes#RopeSubstrings#str (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 714);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#is_ok for (self: RopeSubstrings): Bool */
short int standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeSubstrings#pos (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max (self) on <self:RopeSubstrings> */
var6 = self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var10 = var1 <= var4;
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
/* method ropes#RopeSubstrings#index for (self: RopeSubstrings): Int */
long standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeSubstrings#pos (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#next for (self: RopeSubstrings) */
void standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeSubstrings */;
long var /* : Int */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var5 /* : FlatString */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
val* var27 /* : RopeIterPiece */;
val* var29 /* : RopeIterPiece */;
val* var30 /* : nullable RopeIterPiece */;
val* var32 /* : nullable RopeIterPiece */;
val* var_it /* var it: nullable RopeIterPiece */;
val* var33 /* : String */;
val* var35 /* : String */;
val* var_rnod /* var rnod: String */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
short int var39 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : String */;
val* var54 /* : String */;
val* var56 /* : RopeIterPiece */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : String */;
val* var64 /* : String */;
val* var65 /* : RopeIterPiece */;
val* var66 /* : nullable RopeIterPiece */;
val* var68 /* : nullable RopeIterPiece */;
val* var69 /* : String */;
val* var71 /* : String */;
var_ = self;
{
{ /* Inline ropes#RopeSubstrings#pos (var_) on <var_:RopeSubstrings> */
var2 = var_->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <var_:RopeSubstrings> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#str (self) on <self:RopeSubstrings> */
var5 = self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 714);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var3) on <var3:FlatString> */
var8 = var3->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var3:FlatString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var,var6) on <var:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var12 = var + var6;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos= (var_,var9) on <var_:RopeSubstrings> */
var_->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = var9; /* _pos on <var_:RopeSubstrings> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos (self) on <self:RopeSubstrings> */
var16 = self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max (self) on <self:RopeSubstrings> */
var19 = self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var26 = var14 > var17;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeSubstrings#iter (self) on <self:RopeSubstrings> */
var29 = self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 707);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline ropes#RopeIterPiece#prev (var27) on <var27:RopeIterPiece> */
var32 = var27->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val; /* _prev on <var27:RopeIterPiece> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_it = var30;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 771);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#node (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 478);
fatal_exit(1);
}
var35 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___node].val; /* _node on <var_it:nullable RopeIterPiece> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 478);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_rnod = var33;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype37 = type_standard__ropes__Concat.color;
idtype38 = type_standard__ropes__Concat.id;
if(cltype37 >= var_rnod->type->table_size) {
var36 = 0;
} else {
var36 = var_rnod->type->type_table[cltype37] == idtype38;
}
var39 = !var36;
if (var39){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 774);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#ldone= (var_it,1) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 480);
fatal_exit(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s = 1; /* _ldone on <var_it:nullable RopeIterPiece> */
RET_LABEL40:(void)0;
}
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 775);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#rdone= (var_it,1) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 482);
fatal_exit(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = 1; /* _rdone on <var_it:nullable RopeIterPiece> */
RET_LABEL41:(void)0;
}
}
/* <var_rnod:String> isa FlatString */
cltype43 = type_standard__FlatString.color;
idtype44 = type_standard__FlatString.id;
if(cltype43 >= var_rnod->type->table_size) {
var42 = 0;
} else {
var42 = var_rnod->type->type_table[cltype43] == idtype44;
}
if (unlikely(!var42)) {
var_class_name45 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 776);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL46:(void)0;
}
}
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 777);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_it) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = var_it; /* _iter on <self:RopeSubstrings> */
RET_LABEL47:(void)0;
}
}
goto BREAK_label;
} else {
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 780);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#ldone (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 480);
fatal_exit(1);
}
var50 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s; /* _ldone on <var_it:nullable RopeIterPiece> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = !var48;
if (var51){
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var54 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_rnod = var52;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 782);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#ldone= (var_it,1) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 480);
fatal_exit(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s = 1; /* _ldone on <var_it:nullable RopeIterPiece> */
RET_LABEL55:(void)0;
}
}
var56 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var56, var_rnod); /* node= on <var56:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var56->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var56, 0); /* ldone= on <var56:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var56->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var56, 0); /* rdone= on <var56:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var56, var_it); /* prev= on <var56:RopeIterPiece>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_standard__kernel__Object__init]))(var56); /* init on <var56:RopeIterPiece>*/
}
var_it = var56;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 784);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#rdone (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 482);
fatal_exit(1);
}
var59 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s; /* _rdone on <var_it:nullable RopeIterPiece> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var60 = !var57;
if (var60){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 785);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#rdone= (var_it,1) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 482);
fatal_exit(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = 1; /* _rdone on <var_it:nullable RopeIterPiece> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline ropes#Concat#right (var_rnod) on <var_rnod:String(Concat)> */
var64 = var_rnod->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_rnod = var62;
var65 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
{
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var65, var_rnod); /* node= on <var65:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var65, 0); /* ldone= on <var65:RopeIterPiece>*/
}
{
((void(*)(val* self, short int p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var65, 0); /* rdone= on <var65:RopeIterPiece>*/
}
{
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var65, var_it); /* prev= on <var65:RopeIterPiece>*/
}
{
((void(*)(val* self))(var65->class->vft[COLOR_standard__kernel__Object__init]))(var65); /* init on <var65:RopeIterPiece>*/
}
var_it = var65;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 789);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#prev (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 484);
fatal_exit(1);
}
var68 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val; /* _prev on <var_it:nullable RopeIterPiece> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_it = var66;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 790);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeIterPiece#node (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 478);
fatal_exit(1);
}
var71 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___node].val; /* _node on <var_it:nullable RopeIterPiece> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 478);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_rnod = var69;
goto BREAK_label72;
}
}
BREAK_label72: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeChars#[] for (self: RopeChars, Int): Char */
uint32_t standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_i = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeChars> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard__ropes___standard__ropes__Concat___standard__string__Text___91d_93d(var1, var_i);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeIter */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_standard__ropes__RopeIter(&type_standard__ropes__RopeIter);
{
{ /* Inline string#StringCharView#target (self) on <self:RopeChars> */
var4 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard__ropes___standard__ropes__RopeIter___from(var1, var2, var_i); /* Direct call ropes#RopeIter#from on <var1:RopeIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#sit for (self: RopeBufferIter): IndexedIterator[Char] */
val* standard___standard__RopeBufferIter___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val; /* _sit on <self:RopeBufferIter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 817);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#sit= for (self: RopeBufferIter, IndexedIterator[Char]) */
void standard___standard__RopeBufferIter___sit_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val = p0; /* _sit on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#ns for (self: RopeBufferIter): NativeString */
char* standard___standard__RopeBufferIter___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___ns].str; /* _ns on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#ns= for (self: RopeBufferIter, NativeString) */
void standard___standard__RopeBufferIter___ns_61d(val* self, char* p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___ns].str = p0; /* _ns on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#pns for (self: RopeBufferIter): Int */
long standard___standard__RopeBufferIter___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l; /* _pns on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#pns= for (self: RopeBufferIter, Int) */
void standard___standard__RopeBufferIter___pns_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l = p0; /* _pns on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#maxpos for (self: RopeBufferIter): Int */
long standard___standard__RopeBufferIter___maxpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___maxpos].l; /* _maxpos on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#maxpos= for (self: RopeBufferIter, Int) */
void standard___standard__RopeBufferIter___maxpos_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___maxpos].l = p0; /* _maxpos on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#index for (self: RopeBufferIter): Int */
long standard___standard__RopeBufferIter___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__ropes__RopeBufferIter___index].l; /* _index on <self:RopeBufferIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#index= for (self: RopeBufferIter, Int) */
void standard___standard__RopeBufferIter___index_61d(val* self, long p0) {
self->attrs[COLOR_standard__ropes__RopeBufferIter___index].l = p0; /* _index on <self:RopeBufferIter> */
RET_LABEL:;
}
/* method ropes#RopeBufferIter#from for (self: RopeBufferIter, RopeBuffer, Int) */
void standard___standard__RopeBufferIter___from(val* self, val* p0, long p1) {
val* var_t /* var t: RopeBuffer */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
char* var2 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
val* var8 /* : String */;
val* var10 /* : String */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var14 /* : String */;
val* var16 /* : String */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
var_t = p0;
var_pos = p1;
{
{ /* Inline ropes#RopeBuffer#ns (var_t) on <var_t:RopeBuffer> */
var2 = var_t->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <var_t:RopeBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#ns= (self,var) on <self:RopeBufferIter> */
self->attrs[COLOR_standard__ropes__RopeBufferIter___ns].str = var; /* _ns on <self:RopeBufferIter> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#length (var_t) on <var_t:RopeBuffer> */
var6 = var_t->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <var_t:RopeBuffer> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#maxpos= (self,var4) on <self:RopeBufferIter> */
self->attrs[COLOR_standard__ropes__RopeBufferIter___maxpos].l = var4; /* _maxpos on <self:RopeBufferIter> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var_t) on <var_t:RopeBuffer> */
var10 = var_t->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var_t:RopeBuffer> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__chars]))(var8); /* chars on <var8:String>*/
}
{
var12 = ((val*(*)(val* self, long p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(var11, var_pos); /* iterator_from on <var11:SequenceRead[Char]>*/
}
{
{ /* Inline ropes#RopeBufferIter#sit= (self,var12) on <self:RopeBufferIter> */
self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val = var12; /* _sit on <self:RopeBufferIter> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var_t) on <var_t:RopeBuffer> */
var16 = var_t->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var_t:RopeBuffer> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((long(*)(val* self))(var14->class->vft[COLOR_standard__string__Text__length]))(var14); /* length on <var14:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var17) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var21 = var_pos - var17;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#pns= (self,var18) on <self:RopeBufferIter> */
self->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l = var18; /* _pns on <self:RopeBufferIter> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#index= (self,var_pos) on <self:RopeBufferIter> */
self->attrs[COLOR_standard__ropes__RopeBufferIter___index].l = var_pos; /* _index on <self:RopeBufferIter> */
RET_LABEL23:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferIter#is_ok for (self: RopeBufferIter): Bool */
short int standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeBufferIter#index (self) on <self:RopeBufferIter> */
var3 = self->attrs[COLOR_standard__ropes__RopeBufferIter___index].l; /* _index on <self:RopeBufferIter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#maxpos (self) on <self:RopeBufferIter> */
var6 = self->attrs[COLOR_standard__ropes__RopeBufferIter___maxpos].l; /* _maxpos on <self:RopeBufferIter> */
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
/* method ropes#RopeBufferIter#item for (self: RopeBufferIter): Char */
uint32_t standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : IndexedIterator[Char] */;
val* var3 /* : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : IndexedIterator[Char] */;
val* var7 /* : IndexedIterator[Char] */;
val* var8 /* : nullable Object */;
uint32_t var9 /* : Char */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
long var15 /* : Int */;
uint32_t var16 /* : Char */;
uint32_t var18 /* : Char */;
{
{ /* Inline ropes#RopeBufferIter#sit (self) on <self:RopeBufferIter> */
var3 = self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val; /* _sit on <self:RopeBufferIter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 817);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Char]>*/
}
if (var4){
{
{ /* Inline ropes#RopeBufferIter#sit (self) on <self:RopeBufferIter> */
var7 = self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val; /* _sit on <self:RopeBufferIter> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 817);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var5); /* item on <var5:IndexedIterator[Char]>*/
}
var9 = (uint32_t)((long)(var8)>>2);
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufferIter#ns (self) on <self:RopeBufferIter> */
var12 = self->attrs[COLOR_standard__ropes__RopeBufferIter___ns].str; /* _ns on <self:RopeBufferIter> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#pns (self) on <self:RopeBufferIter> */
var15 = self->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l; /* _pns on <self:RopeBufferIter> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var10,var13) on <var10:NativeString> */
var18 = (uint32_t)(unsigned char)var10[var13];
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferIter#next for (self: RopeBufferIter) */
void standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferIter */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var8 /* : IndexedIterator[Char] */;
val* var10 /* : IndexedIterator[Char] */;
short int var11 /* : Bool */;
val* var12 /* : IndexedIterator[Char] */;
val* var14 /* : IndexedIterator[Char] */;
val* var_15 /* var : RopeBufferIter */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
var_ = self;
{
{ /* Inline ropes#RopeBufferIter#index (var_) on <var_:RopeBufferIter> */
var2 = var_->attrs[COLOR_standard__ropes__RopeBufferIter___index].l; /* _index on <var_:RopeBufferIter> */
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
{ /* Inline ropes#RopeBufferIter#index= (var_,var3) on <var_:RopeBufferIter> */
var_->attrs[COLOR_standard__ropes__RopeBufferIter___index].l = var3; /* _index on <var_:RopeBufferIter> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#sit (self) on <self:RopeBufferIter> */
var10 = self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val; /* _sit on <self:RopeBufferIter> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 817);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var8); /* is_ok on <var8:IndexedIterator[Char]>*/
}
if (var11){
{
{ /* Inline ropes#RopeBufferIter#sit (self) on <self:RopeBufferIter> */
var14 = self->attrs[COLOR_standard__ropes__RopeBufferIter___sit].val; /* _sit on <self:RopeBufferIter> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 817);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var12); /* next on <var12:IndexedIterator[Char]>*/
}
} else {
var_15 = self;
{
{ /* Inline ropes#RopeBufferIter#pns (var_15) on <var_15:RopeBufferIter> */
var18 = var_15->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l; /* _pns on <var_15:RopeBufferIter> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var25 = var16 + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferIter#pns= (var_15,var19) on <var_15:RopeBufferIter> */
var_15->attrs[COLOR_standard__ropes__RopeBufferIter___pns].l = var19; /* _pns on <var_15:RopeBufferIter> */
RET_LABEL26:(void)0;
}
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[] for (self: RopeBufferChars, Int): Char */
uint32_t standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var6 /* : String */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : Text */;
val* var14 /* : Text */;
val* var15 /* : String */;
val* var17 /* : String */;
uint32_t var18 /* : Char */;
val* var19 /* : Text */;
val* var21 /* : Text */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
val* var25 /* : Text */;
val* var27 /* : Text */;
val* var28 /* : String */;
val* var30 /* : String */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
uint32_t var39 /* : Char */;
uint32_t var41 /* : Char */;
var_i = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var1) on <var1:Text(RopeBuffer)> */
var6 = var1->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var1:Text(RopeBuffer)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((long(*)(val* self))(var4->class->vft[COLOR_standard__string__Text__length]))(var4); /* length on <var4:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var7) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var11 = var_i < var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var14 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var12) on <var12:Text(RopeBuffer)> */
var17 = var12->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var12:Text(RopeBuffer)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((uint32_t(*)(val* self, long p0))(var15->class->vft[COLOR_standard__string__Text___91d_93d]))(var15, var_i); /* [] on <var15:String>*/
}
var = var18;
goto RET_LABEL;
} else {
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var21 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns (var19) on <var19:Text(RopeBuffer)> */
var24 = var19->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <var19:Text(RopeBuffer)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var27 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var25) on <var25:Text(RopeBuffer)> */
var30 = var25->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var25:Text(RopeBuffer)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = ((long(*)(val* self))(var28->class->vft[COLOR_standard__string__Text__length]))(var28); /* length on <var28:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var31) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var38 = var_i - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var22,var32) on <var22:NativeString> */
var41 = (uint32_t)(unsigned char)var22[var32];
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var = var39;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[]= for (self: RopeBufferChars, Int, Char) */
void standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Text */;
val* var12 /* : Text */;
val* var13 /* : Text */;
val* var15 /* : Text */;
val* var16 /* : String */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
val* var27 /* : Text */;
val* var29 /* : Text */;
val* var30 /* : String */;
val* var32 /* : String */;
val* var_s /* var s: String */;
val* var33 /* : Text */;
val* var_l /* var l: String */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
val* var41 /* : Text */;
val* var_r /* var r: String */;
val* var42 /* : Text */;
val* var44 /* : Text */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var49 /* : Text */;
val* var51 /* : Text */;
char* var52 /* : NativeString */;
char* var54 /* : NativeString */;
val* var55 /* : Text */;
val* var57 /* : Text */;
val* var58 /* : String */;
val* var60 /* : String */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
/* Covariant cast for argument 1 (c) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 928);
fatal_exit(1);
}
var_i = p0;
var_c = p1;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#length (var1) on <var1:Text(RopeBuffer)> */
var6 = var1->attrs[COLOR_standard__ropes__RopeBuffer___length].l; /* _length on <var1:Text(RopeBuffer)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var4) on <var_i:Int> */
var9 = var_i == var4;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var12 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__RopeBuffer___standard__string__Buffer__add(var10, var_c); /* Direct call ropes#RopeBuffer#add on <var10:Text(RopeBuffer)>*/
}
} else {
}
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var15 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var13) on <var13:Text(RopeBuffer)> */
var18 = var13->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var13:Text(RopeBuffer)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long(*)(val* self))(var16->class->vft[COLOR_standard__string__Text__length]))(var16); /* length on <var16:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var19) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var26 = var_i < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var29 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var27) on <var27:Text(RopeBuffer)> */
var32 = var27->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var27:Text(RopeBuffer)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_s = var30;
{
var33 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, 0l, var_i); /* substring on <var_s:String>*/
}
var_l = var33;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var40 = var_i + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = standard___standard__Text___substring_from(var_s, var34);
}
var_r = var41;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var44 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = standard__string___Char___Object__to_s(var_c);
}
{
var46 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__string__String___43d]))(var_l, var45); /* + on <var_l:String>*/
}
{
var47 = ((val*(*)(val* self, val* p0))(var46->class->vft[COLOR_standard__string__String___43d]))(var46, var_r); /* + on <var46:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (var42,var47) on <var42:Text(RopeBuffer)> */
var42->attrs[COLOR_standard__ropes__RopeBuffer___str].val = var47; /* _str on <var42:Text(RopeBuffer)> */
RET_LABEL48:(void)0;
}
}
} else {
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var51 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns (var49) on <var49:Text(RopeBuffer)> */
var54 = var49->attrs[COLOR_standard__ropes__RopeBuffer___ns].str; /* _ns on <var49:Text(RopeBuffer)> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var57 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var55) on <var55:Text(RopeBuffer)> */
var60 = var55->attrs[COLOR_standard__ropes__RopeBuffer___str].val; /* _str on <var55:Text(RopeBuffer)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 202);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = ((long(*)(val* self))(var58->class->vft[COLOR_standard__string__Text__length]))(var58); /* length on <var58:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var61) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var68 = var_i - var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var52,var62,var_c) on <var52:NativeString> */
var52[var62]=(unsigned char)var_c;
RET_LABEL69:(void)0;
}
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call ropes#RopeBufferChars#[]= on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: RopeBufferChars, Char) */
void standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 940);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__RopeBuffer___standard__string__Buffer__add(var1, var_c); /* Direct call ropes#RopeBuffer#add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add(self, var); /* Direct call ropes#RopeBufferChars#add on <self:SimpleCollection[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: RopeBufferChars, Char) */
void standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 942);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__RopeBuffer___standard__string__Buffer__add(var1, var_c); /* Direct call ropes#RopeBuffer#add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push(self, var); /* Direct call ropes#RopeBufferChars#push on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferIter */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_standard__RopeBufferIter(&type_standard__RopeBufferIter);
{
{ /* Inline string#StringCharView#target (self) on <self:RopeBufferChars> */
var4 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__RopeBufferIter___from(var1, var2, var_i); /* Direct call ropes#RopeBufferIter#from on <var1:RopeBufferIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Sys#maxlen for (self: Sys): Int */
long standard__ropes___Sys___maxlen(val* self) {
long var /* : Int */;
var = 64l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
