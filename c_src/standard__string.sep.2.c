#include "standard__string.sep.0.h"
/* method string#Int#fill_buffer for (self: Int, Buffer, Int, Bool) */
void standard__string___Int___fill_buffer(long self, val* p0, long p1, short int p2) {
val* var_s /* var s: Buffer */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_n /* var n: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var_pos /* var pos: Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
long var40 /* : Int */;
uint32_t var41 /* : Char */;
val* var42 /* : nullable Object */;
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
var_s = p0;
var_base = p1;
var_signed = p2;
{
{ /* Inline kernel#Int#< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var3 = self < 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var6 = -self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_n = var4;
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var8 = (val*)((long)('-')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var7, 0l, var8); /* []= on <var7:SequenceRead[Char](Sequence[Char])>*/
}
} else {
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var11 = self == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var13 = (val*)((long)('0')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var12, 0l, var13); /* []= on <var12:SequenceRead[Char](Sequence[Char])>*/
}
goto RET_LABEL;
} else {
var_n = self;
}
}
{
var14 = standard___standard__Int___digit_count(self, var_base);
}
{
{ /* Inline kernel#Int#- (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var21 = var14 - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_pos = var15;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var29 = var_pos >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var36 = var_n > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var37 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#% (var_n,var_base) on <var_n:Int> */
var40 = var_n % var_base;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var41 = standard___standard__Int___to_c(var38);
}
{
var42 = (val*)((long)(var41)<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var37, var_pos, var42); /* []= on <var37:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Int#/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var45 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 542);
fatal_exit(1);
}
var49 = var_n / var_base;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_n = var43;
{
{ /* Inline kernel#Int#- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var56 = var_pos - 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_pos = var50;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#Int#int_to_s_len for (self: Int): Int */
long standard__string___Int___int_to_s_len(long self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = native_int_length_str(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#native_int_to_s for (self: Int, NativeString, Int) */
void standard__string___Int___native_int_to_s(long self, char* p0, long p1) {
native_int_to_s(self, p0, p1);
RET_LABEL:;
}
/* method string#Int#to_s for (self: Int): String */
val* standard__string___Int___Object__to_s(long self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
long var14 /* : Int */;
long var16 /* : Int for extern */;
long var_nslen /* var nslen: Int */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
val* var34 /* : FlatString */;
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var3 = self == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "0";
var6 = standard___standard__NativeString___to_s_with_length(var5, 1l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (self,1l) on <self:Int> */
var9 = self == 1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "1";
var13 = standard___standard__NativeString___to_s_with_length(var12, 1l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#Int#int_to_s_len (self) on <self:Int> */
var16 = native_int_length_str(self);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nslen = var14;
var17 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var21 = var_nslen + 1l;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var17,var18) on <var17:NativeString> */
var24 = (char*)nit_alloc(var18);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_ns = var22;
{
{ /* Inline string#NativeString#[]= (var_ns,var_nslen,'\000') on <var_ns:NativeString> */
var_ns[var_nslen]=(unsigned char)'\000';
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var32 = var_nslen + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#Int#native_int_to_s (self,var_ns,var26) on <self:Int> */
native_int_to_s(self, var_ns, var26);
RET_LABEL33:(void)0;
}
}
{
var34 = standard___standard__NativeString___to_s_with_length(var_ns, var_nslen);
}
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Int___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = standard__string___Int___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_hex for (self: Int): String */
val* standard__string___Int___to_hex(long self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = standard__string___Int___to_base(self, 16l, 0);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_base for (self: Int, Int, Bool): String */
val* standard__string___Int___to_base(long self, long p0, short int p1) {
val* var /* : String */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : FlatBuffer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var_s /* var s: FlatBuffer */;
val* var7 /* : String */;
var_base = p0;
var_signed = p1;
{
var1 = standard___standard__Int___digit_count(self, var_base);
}
var_l = var1;
var2 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = " ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, long p0))(var3->class->vft[COLOR_standard__string__String___42d]))(var3, var_l); /* * on <var3:String>*/
}
{
standard___standard__FlatBuffer___from(var2, var6); /* Direct call string#FlatBuffer#from on <var2:FlatBuffer>*/
}
var_s = var2;
{
standard__string___Int___fill_buffer(self, var_s, var_base, var_signed); /* Direct call string#Int#fill_buffer on <self:Int>*/
}
{
var7 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Float): String */
val* standard__string___Float___Object__to_s(double self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_str /* var str: String */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool for extern */;
long var11 /* : Int */;
long var_len /* var len: Int */;
long var_i /* var i: Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
long var_16 /* var : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
long var_j /* var j: Int */;
val* var38 /* : SequenceRead[Char] */;
val* var39 /* : nullable Object */;
uint32_t var40 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : Text */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var62 /* : Text */;
long var63 /* : Int */;
{
var1 = standard__string___Float___to_precision(self, 3l);
}
var_str = var1;
{
var3 = standard__math___Float___is_inf(self);
}
{
{ /* Inline kernel#Int#!= (var3,0l) on <var3:Int> */
var6 = var3 == 0l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var2 = var_;
} else {
{
{ /* Inline math#Float#is_nan (self) on <self:Float> */
var10 = isnan(self);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var2 = var8;
}
if (var2){
var = var_str;
goto RET_LABEL;
} else {
}
{
var11 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_len = var11;
var_i = 0l;
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var15 = var_len - 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_16 = var12;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_16) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_16:Int> isa OTHER */
/* <var_16:Int> isa OTHER */
var19 = 1; /* easy <var_16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var23 = var_i <= var_16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var30 = var_len - 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var24,var_i) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var33 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var37 = var24 - var_i;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_j = var31;
{
var38 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var39 = ((val*(*)(val* self, long p0))((((long)var38&3)?class_info[((long)var38&3)]:var38->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var38, var_j); /* [] on <var38:SequenceRead[Char]>*/
}
var40 = (uint32_t)((long)(var39)>>2);
var_c = var40;
{
{ /* Inline kernel#Char#== (var_c,'0') on <var_c:Char> */
var43 = var_c == '0';
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
goto BREAK_label;
} else {
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var46 = var_c == '.';
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline kernel#Int#+ (var_j,2l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var49 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var53 = var_j + 2l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var54 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_standard__string__Text__substring]))(var_str, 0l, var47); /* substring on <var_str:String>*/
}
var = var54;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var61 = var_j + 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var62 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_standard__string__Text__substring]))(var_str, 0l, var55); /* substring on <var_str:String>*/
}
var = var62;
goto RET_LABEL;
}
}
BREAK_label: (void)0;
{
var63 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var63;
} else {
goto BREAK_label64;
}
}
BREAK_label64: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Float___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_standard__Float*)self)->value; /* autounbox from Object to Float */;
var1 = standard__string___Float___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Float#to_precision for (self: Float, Int): String */
val* standard__string___Float___to_precision(double self, long p0) {
val* var /* : String */;
long var_decimals /* var decimals: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool for extern */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var_isinf /* var isinf: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
double var_f /* var f: Float */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
double var36 /* : Float */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
double var42 /* : Float */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
double var51 /* : Float */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
double var57 /* : Float */;
double var58 /* : Float */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
double var64 /* : Float */;
long var65 /* : Int */;
long var67 /* : Int */;
long var_i68 /* var i: Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
val* var81 /* : String */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var_s /* var s: String */;
long var84 /* : Int */;
long var_sl /* var sl: Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
val* var99 /* : Text */;
val* var_p1 /* var p1: nullable Object */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
val* var107 /* : Text */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
val* var123 /* : String */;
val* var124 /* : String */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
short int var131 /* : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
val* var141 /* : String */;
val* var142 /* : String */;
var_decimals = p0;
{
{ /* Inline math#Float#is_nan (self) on <self:Float> */
var3 = isnan(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "nan";
var6 = standard___standard__NativeString___to_s_with_length(var5, 3l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var7 = standard__math___Float___is_inf(self);
}
var_isinf = var7;
{
{ /* Inline kernel#Int#== (var_isinf,1l) on <var_isinf:Int> */
var10 = var_isinf == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "inf";
var14 = standard___standard__NativeString___to_s_with_length(var13, 3l);
var12 = var14;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var17 = -1l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_isinf,var15) on <var_isinf:Int> */
var20 = var_isinf == var15;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "-inf";
var24 = standard___standard__NativeString___to_s_with_length(var23, 4l);
var22 = var24;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel#Int#== (var_decimals,0l) on <var_decimals:Int> */
var27 = var_decimals == 0l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline kernel#Float#to_i (self) on <self:Float> */
var30 = (long)self;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var31 = standard__string___Int___Object__to_s(var28);
}
var = var31;
goto RET_LABEL;
} else {
}
var_f = self;
var_i = 0l;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var35 = var_i < var_;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline kernel#Float#* (var_f,10.0) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var38 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 348);
fatal_exit(1);
}
var42 = var_f * 10.0;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_f = var36;
{
var43 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Float#> (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var46 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 343);
fatal_exit(1);
}
var50 = self > 0.0;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline kernel#Float#+ (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var53 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 345);
fatal_exit(1);
}
var57 = var_f + 0.5;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_f = var51;
} else {
{
{ /* Inline kernel#Float#- (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var60 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 347);
fatal_exit(1);
}
var64 = var_f - 0.5;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_f = var58;
}
{
{ /* Inline kernel#Float#to_i (var_f) on <var_f:Float> */
var67 = (long)var_f;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_i68 = var65;
{
{ /* Inline kernel#Int#== (var_i68,0l) on <var_i68:Int> */
var71 = var_i68 == 0l;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "0.";
var75 = standard___standard__NativeString___to_s_with_length(var74, 2l);
var73 = var75;
varonce72 = var73;
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "0";
var79 = standard___standard__NativeString___to_s_with_length(var78, 1l);
var77 = var79;
varonce76 = var77;
}
{
var80 = ((val*(*)(val* self, long p0))(var77->class->vft[COLOR_standard__string__String___42d]))(var77, var_decimals); /* * on <var77:String>*/
}
{
var81 = ((val*(*)(val* self, val* p0))(var73->class->vft[COLOR_standard__string__String___43d]))(var73, var80); /* + on <var73:String>*/
}
var = var81;
goto RET_LABEL;
} else {
}
{
var82 = standard___standard__Int___abs(var_i68);
}
{
var83 = standard__string___Int___Object__to_s(var82);
}
var_s = var83;
{
var84 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_sl = var84;
{
{ /* Inline kernel#Int#> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var87 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var91 = var_sl > var_decimals;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var94 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var98 = var_sl - var_decimals;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
var99 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, 0l, var92); /* substring on <var_s:String>*/
}
var_p1 = var99;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var102 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var106 = var_sl - var_decimals;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
var107 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, var100, var_decimals); /* substring on <var_s:String>*/
}
var_p2 = var107;
} else {
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "0";
var111 = standard___standard__NativeString___to_s_with_length(var110, 1l);
var109 = var111;
varonce108 = var109;
}
var_p1 = var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "0";
var115 = standard___standard__NativeString___to_s_with_length(var114, 1l);
var113 = var115;
varonce112 = var113;
}
{
{ /* Inline kernel#Int#- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var118 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var122 = var_decimals - var_sl;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var123 = ((val*(*)(val* self, long p0))(var113->class->vft[COLOR_standard__string__String___42d]))(var113, var116); /* * on <var113:String>*/
}
{
var124 = ((val*(*)(val* self, val* p0))(var123->class->vft[COLOR_standard__string__String___43d]))(var123, var_s); /* + on <var123:String>*/
}
var_p2 = var124;
}
{
{ /* Inline kernel#Int#< (var_i68,0l) on <var_i68:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var127 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var131 = var_i68 < 0l;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
if (var125){
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "-";
var135 = standard___standard__NativeString___to_s_with_length(var134, 1l);
var133 = var135;
varonce132 = var133;
}
{
var136 = ((val*(*)(val* self, val* p0))(var133->class->vft[COLOR_standard__string__String___43d]))(var133, var_p1); /* + on <var133:String>*/
}
var_p1 = var136;
} else {
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = ".";
var140 = standard___standard__NativeString___to_s_with_length(var139, 1l);
var138 = var140;
varonce137 = var138;
}
{
var141 = ((val*(*)(val* self, val* p0))(var_p1->class->vft[COLOR_standard__string__String___43d]))(var_p1, var138); /* + on <var_p1:nullable Object(String)>*/
}
{
var142 = ((val*(*)(val* self, val* p0))(var141->class->vft[COLOR_standard__string__String___43d]))(var141, var_p2); /* + on <var141:String>*/
}
var = var142;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Char): String */
val* standard__string___Char___Object__to_s(uint32_t self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = standard___standard__Buffer___with_cap(var1, 1l);
}
var_s = var2;
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var4 = (val*)((long)(self)<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var3, 0l, var4); /* []= on <var3:SequenceRead[Char](Sequence[Char])>*/
}
{
var5 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Char___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = standard__string___Char___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#is_numeric for (self: Char): Bool */
short int standard__string___Char___is_numeric(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Char#<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Collection[nullable Object]): String */
val* standard__string___Collection___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__string__Collection__plain_to_s]))(self); /* plain_to_s on <self:Collection[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#plain_to_s for (self: Collection[nullable Object]): String */
val* standard__string___Collection___plain_to_s(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = standard___standard__Buffer___new(var1);
}
var_s = var2;
var_ = self;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[nullable Object]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[nullable Object]>*/
}
var_e = var6;
if (var_e == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var7 = var8;
}
if (var7){
{
var9 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var9); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
{
var10 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Collection[nullable Object], Text): String */
val* standard__string___Collection___join(val* self, val* p0) {
val* var /* : String */;
val* var_sep /* var sep: Text */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var7 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
val* var17 /* : String */;
var_sep = p0;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = standard___standard__NativeString___to_s_with_length(var3, 0l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = NEW_standard__Buffer(&type_standard__Buffer);
{
var6 = standard___standard__Buffer___new(var5);
}
var_s = var6;
{
var7 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
var_i = var7;
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var8;
if (var_e == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var9 = var10;
}
if (var9){
{
var11 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var11); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var12){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var_sep); /* append on <var_s:Buffer>*/
}
{
var13 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var13;
if (var_e == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var14 = var15;
}
if (var14){
{
var16 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_standard__string__Buffer__append]))(var_s, var16); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var17 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Array#plain_to_s for (self: Array[nullable Object]): String */
val* standard__string___Array___Collection__plain_to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : nullable Object */;
val* var21 /* : String */;
val* var22 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: nullable NativeArray[nullable Object] */;
val* var23 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var30 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
val* var40 /* : String */;
val* var_tmp /* var tmp: String */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const struct type* type_struct;
const char* var_class_name53;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
char* var77 /* : NativeString */;
char* var79 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var90 /* : Object */;
val* var_tmp91 /* var tmp: String */;
long var92 /* : Int */;
long var_tpl /* var tpl: Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
char* var96 /* : NativeString */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
long var101 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var110 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var111 /* : Iterator[nullable Object] */;
val* var_112 /* var : Iterator[FlatText] */;
short int var113 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
const char* var_class_name118;
val* var_s /* var s: FlatString */;
long var119 /* : Int */;
long var121 /* : Int */;
long var_slen /* var slen: Int */;
char* var122 /* : NativeString */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
long var135 /* : Int */;
long var137 /* : Int */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
long var143 /* : Int */;
val* var145 /* : FlatString */;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:Array[nullable Object]> */
var3 = self->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_l = var1;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var6 = var_l == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "";
var9 = standard___standard__NativeString___to_s_with_length(var8, 0l);
var7 = var9;
varonce = var7;
}
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_l,1l) on <var_l:Int> */
var12 = var_l == 1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(self, 0l);
}
if (var13 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, ((val*)NULL)); /* == on <var13:nullable Object>*/
var14 = var15;
}
if (var14){
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "";
var19 = standard___standard__NativeString___to_s_with_length(var18, 0l);
var17 = var19;
varonce16 = var17;
}
var = var17;
goto RET_LABEL;
} else {
{
var20 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(self, 0l);
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2297);
fatal_exit(1);
} else {
var21 = ((val*(*)(val* self))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_standard__string__Object__to_s]))(var20); /* to_s on <var20:nullable Object>*/
}
var = var21;
goto RET_LABEL;
}
} else {
}
var22 = self->attrs[COLOR_standard__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var_its = var22;
var23 = NEW_standard__NativeArray(var_l, &type_standard__NativeArray__standard__String);
var_na = var23;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var26 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var27 = var_i < var_l;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (var_its == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2304);
fatal_exit(1);
} else {
{ /* Inline array#NativeArray#[] (var_its,var_i) on <var_its:nullable NativeArray[nullable Object]> */
var30 = ((struct instance_standard__NativeArray*)var_its)->values[var_i];
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_itsi = var28;
if (var_itsi == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var31 = var32;
}
if (var31){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var39 = var_i + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_i = var33;
goto BREAK_label;
} else {
}
{
var40 = ((val*(*)(val* self))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_standard__string__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var40;
{
var41 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__length]))(var_tmp); /* length on <var_tmp:String>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var41) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var48 = var_sl + var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_sl = var42;
{
{ /* Inline array#NativeArray#[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype51 = type_struct->color;
idtype52 = type_struct->id;
if(cltype51 >= var_tmp->type->table_size) {
var50 = 0;
} else {
var50 = var_tmp->type->type_table[cltype51] == idtype52;
}
if (unlikely(!var50)) {
var_class_name53 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 957);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var60 = var_i + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_i = var54;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var67 = var_mypos + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_mypos = var61;
} else {
goto BREAK_label68;
}
BREAK_label: (void)0;
}
BREAK_label68: (void)0;
var69 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var76 = var_sl + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var69,var70) on <var69:NativeString> */
var79 = (char*)nit_alloc(var70);
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_ns = var77;
{
{ /* Inline string#NativeString#[]= (var_ns,var_sl,'\000') on <var_ns:NativeString> */
var_ns[var_sl]=(unsigned char)'\000';
RET_LABEL80:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var83 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var87 = var_i < var_mypos;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (var81){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var90 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_tmp91 = var88;
{
var92 = ((long(*)(val* self))(var_tmp91->class->vft[COLOR_standard__string__Text__length]))(var_tmp91); /* length on <var_tmp91:String>*/
}
var_tpl = var92;
/* <var_tmp91:String> isa FlatString */
cltype94 = type_standard__FlatString.color;
idtype95 = type_standard__FlatString.id;
if(cltype94 >= var_tmp91->type->table_size) {
var93 = 0;
} else {
var93 = var_tmp91->type->type_table[cltype94] == idtype95;
}
if (var93){
{
{ /* Inline string#FlatText#items (var_tmp91) on <var_tmp91:String(FlatString)> */
var98 = var_tmp91->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_tmp91:String(FlatString)> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_tmp91) on <var_tmp91:String(FlatString)> */
var101 = var_tmp91->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_tmp91:String(FlatString)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var96,var_ns,var_tpl,var99,var_off) on <var96:NativeString> */
memmove(var_ns+var_off,var96+var99,var_tpl);
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var105 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var109 = var_off + var_tpl;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_off = var103;
} else {
{
var110 = ((val*(*)(val* self))(var_tmp91->class->vft[COLOR_standard__string__Text__substrings]))(var_tmp91); /* substrings on <var_tmp91:String>*/
}
var_ = var110;
{
var111 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_112 = var111;
for(;;) {
{
var113 = ((short int(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_112); /* is_ok on <var_112:Iterator[FlatText]>*/
}
if (var113){
{
var114 = ((val*(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_112); /* item on <var_112:Iterator[FlatText]>*/
}
var_j = var114;
/* <var_j:FlatText> isa FlatString */
cltype116 = type_standard__FlatString.color;
idtype117 = type_standard__FlatString.id;
if(cltype116 >= var_j->type->table_size) {
var115 = 0;
} else {
var115 = var_j->type->type_table[cltype116] == idtype117;
}
if (unlikely(!var115)) {
var_class_name118 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name118);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2327);
fatal_exit(1);
}
var_s = var_j;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:FlatString> */
var121 = var_s->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_s:FlatString> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_slen = var119;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:FlatString> */
var124 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:FlatString> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:FlatString> */
var127 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:FlatString> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var122,var_ns,var_slen,var125,var_off) on <var122:NativeString> */
memmove(var_ns+var_off,var122+var125,var_slen);
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var131 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var135 = var_off + var_slen;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var_off = var129;
{
((void(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_112); /* next on <var_112:Iterator[FlatText]>*/
}
} else {
goto BREAK_label136;
}
}
BREAK_label136: (void)0;
{
((void(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_112); /* finish on <var_112:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var139 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var143 = var_i + 1l;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
var_i = var137;
} else {
goto BREAK_label144;
}
}
BREAK_label144: (void)0;
{
var145 = standard___standard__NativeString___to_s_with_length(var_ns, var_sl);
}
var = var145;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeArray#native_to_s for (self: NativeArray[nullable Object]): String */
val* standard__string___NativeArray___native_to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
long var2 /* : Int */;
long var4 /* : Int */;
long var_l /* var l: Int */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
char* var44 /* : NativeString */;
char* var46 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var57 /* : Object */;
val* var_tmp /* var tmp: String */;
long var58 /* : Int */;
long var_tpl /* var tpl: Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
char* var62 /* : NativeString */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
val* var76 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var77 /* : Iterator[nullable Object] */;
val* var_78 /* var : Iterator[FlatText] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var_s /* var s: FlatString */;
long var85 /* : Int */;
long var87 /* : Int */;
long var_slen /* var slen: Int */;
char* var88 /* : NativeString */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
long var93 /* : Int */;
long var95 /* : Int */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
long var101 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var111 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_standard__NativeArray__standard__String.color;
idtype = type_standard__NativeArray__standard__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2346);
fatal_exit(1);
}
{
{ /* Inline array#NativeArray#length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
var4 = ((struct instance_standard__NativeArray*)self)->length;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
var_na = self;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var13 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = ((long(*)(val* self))(var11->class->vft[COLOR_standard__string__Text__length]))(var11); /* length on <var11:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var14) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var21 = var_sl + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_sl = var15;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var35 = var_mypos + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_mypos = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var36 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var43 = var_sl + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var36,var37) on <var36:NativeString> */
var46 = (char*)nit_alloc(var37);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_ns = var44;
{
{ /* Inline string#NativeString#[]= (var_ns,var_sl,'\000') on <var_ns:NativeString> */
var_ns[var_sl]=(unsigned char)'\000';
RET_LABEL47:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var50 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var54 = var_i < var_mypos;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var57 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_tmp = var55;
{
var58 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__length]))(var_tmp); /* length on <var_tmp:String>*/
}
var_tpl = var58;
/* <var_tmp:String> isa FlatString */
cltype60 = type_standard__FlatString.color;
idtype61 = type_standard__FlatString.id;
if(cltype60 >= var_tmp->type->table_size) {
var59 = 0;
} else {
var59 = var_tmp->type->type_table[cltype60] == idtype61;
}
if (var59){
{
{ /* Inline string#FlatText#items (var_tmp) on <var_tmp:String(FlatString)> */
var64 = var_tmp->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_tmp:String(FlatString)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_tmp) on <var_tmp:String(FlatString)> */
var67 = var_tmp->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_tmp:String(FlatString)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var62,var_ns,var_tpl,var65,var_off) on <var62:NativeString> */
memmove(var_ns+var_off,var62+var65,var_tpl);
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var71 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var75 = var_off + var_tpl;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_off = var69;
} else {
{
var76 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var76;
{
var77 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_78 = var77;
for(;;) {
{
var79 = ((short int(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_78); /* is_ok on <var_78:Iterator[FlatText]>*/
}
if (var79){
{
var80 = ((val*(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_78); /* item on <var_78:Iterator[FlatText]>*/
}
var_j = var80;
/* <var_j:FlatText> isa FlatString */
cltype82 = type_standard__FlatString.color;
idtype83 = type_standard__FlatString.id;
if(cltype82 >= var_j->type->table_size) {
var81 = 0;
} else {
var81 = var_j->type->type_table[cltype82] == idtype83;
}
if (unlikely(!var81)) {
var_class_name84 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2369);
fatal_exit(1);
}
var_s = var_j;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:FlatString> */
var87 = var_s->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_s:FlatString> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_slen = var85;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:FlatString> */
var90 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:FlatString> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:FlatString> */
var93 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:FlatString> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var88,var_ns,var_slen,var91,var_off) on <var88:NativeString> */
memmove(var_ns+var_off,var88+var91,var_slen);
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var97 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var97)) {
var_class_name100 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var101 = var_off + var_slen;
var95 = var101;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var_off = var95;
{
((void(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_78); /* next on <var_78:Iterator[FlatText]>*/
}
} else {
goto BREAK_label102;
}
}
BREAK_label102: (void)0;
{
((void(*)(val* self))((((long)var_78&3)?class_info[((long)var_78&3)]:var_78->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_78); /* finish on <var_78:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var109 = var_i + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_i = var103;
} else {
goto BREAK_label110;
}
}
BREAK_label110: (void)0;
{
var111 = standard___standard__NativeString___to_s_with_length(var_ns, var_sl);
}
var = var111;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#new for (self: NativeString, Int): NativeString */
char* standard___standard__NativeString___new(char* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = (char*)nit_alloc(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[] for (self: NativeString, Int): Char */
uint32_t standard___standard__NativeString____91d_93d(char* self, long p0) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = (uint32_t)(unsigned char)self[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[]= for (self: NativeString, Int, Char) */
void standard___standard__NativeString____91d_93d_61d(char* self, long p0, uint32_t p1) {
self[p0]=(unsigned char)p1;
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: NativeString, NativeString, Int, Int, Int) */
void standard___standard__NativeString___copy_to(char* self, char* p0, long p1, long p2, long p3) {
memmove(p0+p3,self+p2,p1);
RET_LABEL:;
}
/* method string#NativeString#cstring_length for (self: NativeString): Int */
long standard___standard__NativeString___cstring_length(char* self) {
long var /* : Int */;
long var_l /* var l: Int */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
var_l = 0l;
for(;;) {
{
{ /* Inline string#NativeString#[] (self,var_l) on <self:NativeString> */
var3 = (uint32_t)(unsigned char)self[var_l];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var1,'\000') on <var1:Char> */
var6 = var1 == '\000';
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var11 = var_l + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_l = var8;
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
/* method string#NativeString#atoi for (self: NativeString): Int */
long standard___standard__NativeString___atoi(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = atoi(self);;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atof for (self: NativeString): Float */
double standard___standard__NativeString___atof(char* self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = atof(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: NativeString): String */
val* standard___standard__NativeString___Object__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
{
var1 = standard___standard__NativeString___cstring_length(self);
}
{
var2 = standard___standard__NativeString___to_s_with_length(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: Object): String */
val* VIRTUAL_standard___standard__NativeString___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_standard__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = standard___standard__NativeString___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: NativeString, Int): FlatString */
val* standard___standard__NativeString___to_s_with_length(char* self, long p0) {
val* var /* : FlatString */;
long var_length /* var length: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : FlatString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
val* var_str /* var str: FlatString */;
var_length = p0;
{
{ /* Inline kernel#Int#>= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var4 = var_length >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2461);
fatal_exit(1);
}
var5 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline kernel#Int#- (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var12 = var_length - 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var5, self, var_length, 0l, var6); /* Direct call string#FlatString#with_infos on <var5:FlatString>*/
}
var_str = var5;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: NativeString): FlatString */
val* standard___standard__NativeString___to_s_with_copy(char* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var_length /* var length: Int */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
val* var11 /* : FlatString */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var_str /* var str: FlatString */;
val* var21 /* : nullable NativeString */;
{
var1 = standard___standard__NativeString___cstring_length(self);
}
var_length = var1;
var2 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var6 = var_length + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var2,var3) on <var2:NativeString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_new_self = var7;
{
{ /* Inline string#NativeString#copy_to (self,var_new_self,var_length,0l,0l) on <self:NativeString> */
memmove(var_new_self+0l,self+0l,var_length);
RET_LABEL10:(void)0;
}
}
var11 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline kernel#Int#- (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var18 = var_length - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var11, var_new_self, var_length, 0l, var12); /* Direct call string#FlatString#with_infos on <var11:FlatString>*/
}
var_str = var11;
{
{ /* Inline string#NativeString#[]= (var_new_self,var_length,'\000') on <var_new_self:NativeString> */
var_new_self[var_length]=(unsigned char)'\000';
RET_LABEL19:(void)0;
}
}
{
{ /* Inline string#FlatText#real_items= (var_str,var_new_self) on <var_str:FlatString> */
var21 = BOX_standard__NativeString(var_new_self); /* autobox from NativeString to nullable NativeString */
var_str->attrs[COLOR_standard__string__FlatText___real_items].val = var21; /* _real_items on <var_str:FlatString> */
RET_LABEL20:(void)0;
}
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_args for (self: Sys): Sequence[String] */
val* standard__string___Sys___program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable Sequence[String]>*/
var2 = var3;
}
if (var2){
{
standard__string___Sys___init_args(self); /* Direct call string#Sys#init_args on <self:Sys>*/
}
} else {
}
var4 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2486);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Sys): String */
val* standard__string___Sys___program_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Sys#native_argv (self,0l) on <self:Sys> */
var3 = glob_argv[0l];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__NativeString___Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#init_args for (self: Sys) */
void standard__string___Sys___init_args(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_argc /* var argc: Int */;
val* var3 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
{ /* Inline string#Sys#native_argc (self) on <self:Sys> */
var2 = glob_argc;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_argc = var;
var3 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var3, 0l); /* Direct call array#Array#with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var_i = 1l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var7 = var_i < var_argc;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#Sys#native_argv (self,var_i) on <self:Sys> */
var17 = glob_argv[var_i];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__NativeString___Object__to_s(var15);
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_args, var8, var18); /* Direct call array#Array#[]= on <var_args:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__string__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method string#Sys#native_argc for (self: Sys): Int */
long standard__string___Sys___native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argv for (self: Sys, Int): NativeString */
char* standard__string___Sys___native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#alpha_comparator for (self: Sys): Comparator */
val* standard__string___Sys___alpha_comparator(val* self) {
val* var /* : Comparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : AlphaComparator */;
val* var2 /* : AlphaComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_standard__string__AlphaComparator(&type_standard__string__AlphaComparator);
{
{ /* Inline kernel#Object#init (var2) on <var2:AlphaComparator> */
RET_LABEL3:(void)0;
}
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#args for (self: Sys): Sequence[String] */
val* standard__string___Sys___args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = standard__string___Sys___program_args(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#cache for (self: CachedAlphaComparator): HashMap[Object, String] */
val* standard___standard__CachedAlphaComparator___cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2531);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#do_to_s for (self: CachedAlphaComparator, Object): String */
val* standard___standard__CachedAlphaComparator___do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var_a /* var a: Object */;
val* var1 /* : HashMap[Object, String] */;
val* var3 /* : HashMap[Object, String] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Object, String] */;
val* var7 /* : HashMap[Object, String] */;
val* var8 /* : nullable Object */;
val* var9 /* : String */;
val* var_res /* var res: String */;
val* var10 /* : HashMap[Object, String] */;
val* var12 /* : HashMap[Object, String] */;
var_a = p0;
{
{ /* Inline string#CachedAlphaComparator#cache (self) on <self:CachedAlphaComparator> */
var3 = self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2531);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var1, var_a);
}
if (var4){
{
{ /* Inline string#CachedAlphaComparator#cache (self) on <self:CachedAlphaComparator> */
var7 = self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var5, var_a);
}
var = var8;
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:Object>*/
}
var_res = var9;
{
{ /* Inline string#CachedAlphaComparator#cache (self) on <self:CachedAlphaComparator> */
var12 = self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2531);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var10, var_a, var_res); /* Direct call hash_collection#HashMap#[]= on <var10:HashMap[Object, String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#compare for (self: CachedAlphaComparator, Object, Object): Int */
long standard___standard__CachedAlphaComparator___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa COMPARED */
/* <p0:Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2540);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa COMPARED */
/* <p1:Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2540);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = standard___standard__CachedAlphaComparator___do_to_s(self, var_a);
}
{
var8 = standard___standard__CachedAlphaComparator___do_to_s(self, var_b);
}
{
var9 = standard___standard__Comparable____60d_61d_62d(var7, var8);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AlphaComparator#compare for (self: AlphaComparator, nullable Object, nullable Object): Int */
long standard__string___standard__string__AlphaComparator___standard__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
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
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
val* var8 /* : String */;
val* var9 /* : String */;
long var10 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2548);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_standard__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2548);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
if (var_a == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2548);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:nullable Object>*/
}
if (var_b == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2548);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:nullable Object>*/
}
{
var10 = standard___standard__Comparable____60d_61d_62d(var8, var9);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
