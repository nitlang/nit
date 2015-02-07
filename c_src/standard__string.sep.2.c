#include "standard__string.sep.0.h"
/* method string#Int#fill_buffer for (self: Int, Buffer, Int, Bool) */
void standard__string___Int___fill_buffer(long self, val* p0, long p1, short int p2) {
val* var_s /* var s: Buffer */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_n /* var n: Int */;
val* var8 /* : Sequence[Char] */;
val* var10 /* : Sequence[Char] */;
long var11 /* : Int */;
char var12 /* : Char */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Sequence[Char] */;
val* var20 /* : Sequence[Char] */;
long var21 /* : Int */;
char var22 /* : Char */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_pos /* var pos: Int */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
short int var_ /* var : Bool */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
val* var50 /* : Sequence[Char] */;
val* var52 /* : Sequence[Char] */;
long var53 /* : Int */;
long var55 /* : Int */;
char var56 /* : Char */;
val* var57 /* : nullable Object */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
var_s = p0;
var_base = p1;
var_signed = p2;
var = 0;
{
{ /* Inline kernel#Int#< (self,var) on <self:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var4 = self < var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_n = var5;
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:Buffer> */
var10 = var_s->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_s:Buffer> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 0;
var12 = '-';
{
var13 = BOX_standard__Char(var12); /* autobox from Char to nullable Object */
((void (*)(val* self, long p0, val* p1))(var8->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var8, var11, var13) /* []= on <var8:Sequence[Char]>*/;
}
} else {
var14 = 0;
{
{ /* Inline kernel#Int#== (self,var14) on <self:Int> */
var17 = self == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:Buffer> */
var20 = var_s->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_s:Buffer> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 0;
var22 = '0';
{
var23 = BOX_standard__Char(var22); /* autobox from Char to nullable Object */
((void (*)(val* self, long p0, val* p1))(var18->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var18, var21, var23) /* []= on <var18:Sequence[Char]>*/;
}
goto RET_LABEL;
} else {
var_n = self;
}
}
{
var24 = standard___standard__Int___digit_count(self, var_base);
}
var25 = 1;
{
{ /* Inline kernel#Int#- (var24,var25) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var32 = var24 - var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_pos = var26;
for(;;) {
var34 = 0;
{
{ /* Inline kernel#Int#>= (var_pos,var34) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var41 = var_pos >= var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_ = var35;
if (var35){
var42 = 0;
{
{ /* Inline kernel#Int#> (var_n,var42) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var49 = var_n > var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var33 = var43;
} else {
var33 = var_;
}
if (var33){
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:Buffer> */
var52 = var_s->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_s:Buffer> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#% (var_n,var_base) on <var_n:Int> */
var55 = var_n % var_base;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var56 = standard___standard__Int___to_c(var53);
}
{
var57 = BOX_standard__Char(var56); /* autobox from Char to nullable Object */
((void (*)(val* self, long p0, val* p1))(var50->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var50, var_pos, var57) /* []= on <var50:Sequence[Char]>*/;
}
{
{ /* Inline kernel#Int#/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var60 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 418);
show_backtrace(1);
}
var64 = var_n / var_base;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_n = var58;
var65 = 1;
{
{ /* Inline kernel#Int#- (var_pos,var65) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var72 = var_pos - var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_pos = var66;
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
long var1 /* : Int */;
long var3 /* : Int for extern */;
long var_nslen /* var nslen: Int */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
char var13 /* : Char */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
val* var24 /* : FlatString */;
{
{ /* Inline string#Int#int_to_s_len (self) on <self:Int> */
var3 = native_int_length_str(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
var5 = 1;
{
{ /* Inline kernel#Int#+ (var_nslen,var5) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var9 = var_nslen + var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var4,var6) on <var4:NativeString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
var13 = '\0';
{
{ /* Inline string#NativeString#[]= (var_ns,var_nslen,var13) on <var_ns:NativeString> */
var_ns[var_nslen]=var13;
RET_LABEL14:(void)0;
}
}
var15 = 1;
{
{ /* Inline kernel#Int#+ (var_nslen,var15) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var22 = var_nslen + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#Int#native_int_to_s (self,var_ns,var16) on <self:Int> */
native_int_to_s(self, var_ns, var16);
RET_LABEL23:(void)0;
}
}
{
var24 = standard___standard__NativeString___to_s_with_length(var_ns, var_nslen);
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Int___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = ((struct instance_standard__Int*)self)->value; /* autounbox from Object to Int */;
var1 = standard__string___Int___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_hex for (self: Int): String */
val* standard__string___Int___to_hex(long self) {
val* var /* : String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
val* var3 /* : String */;
var1 = 16;
var2 = 0;
{
var3 = standard__string___Int___to_base(self, var1, var2);
}
var = var3;
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
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var_s /* var s: FlatBuffer */;
val* var8 /* : String */;
var_base = p0;
var_signed = p1;
{
var1 = standard___standard__Int___digit_count(self, var_base);
}
var_l = var1;
var2 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
if (varonce) {
var3 = varonce;
} else {
var4 = " ";
var5 = 1;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = ((val* (*)(val* self, long p0))(var3->class->vft[COLOR_standard__string__String___42d]))(var3, var_l) /* * on <var3:String>*/;
}
{
standard___standard__FlatBuffer___from(var2, var7); /* Direct call string#FlatBuffer#from on <var2:FlatBuffer>*/
}
var_s = var2;
{
standard__string___Int___fill_buffer(self, var_s, var_base, var_signed); /* Direct call string#Int#fill_buffer on <self:Int>*/
}
{
var8 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Float): String */
val* standard__string___Float___Object__to_s(double self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
val* var_str /* var str: String */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool for extern */;
long var13 /* : Int */;
long var_len /* var len: Int */;
long var14 /* : Int */;
long var_i /* var i: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var_20 /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
long var28 /* : Int */;
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
long var_j /* var j: Int */;
val* var43 /* : SequenceRead[Char] */;
val* var44 /* : nullable Object */;
char var45 /* : Char */;
char var_c /* var c: Char */;
char var46 /* : Char */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
char var50 /* : Char */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
val* var63 /* : Text */;
long var64 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
val* var73 /* : Text */;
long var74 /* : Int */;
long var75 /* : Int */;
var1 = 3;
{
var2 = standard__string___Float___to_precision(self, var1);
}
var_str = var2;
{
var4 = standard__math___Float___is_inf(self);
}
var5 = 0;
{
{ /* Inline kernel#Int#!= (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
var3 = var_;
} else {
{
{ /* Inline math#Float#is_nan (self) on <self:Float> */
var12 = isnan(self);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var3 = var10;
}
if (var3){
var = var_str;
goto RET_LABEL;
} else {
}
{
var13 = ((long (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str) /* length on <var_str:String>*/;
}
var_len = var13;
var14 = 0;
var_i = var14;
var15 = 1;
{
{ /* Inline kernel#Int#- (var_len,var15) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var19 = var_len - var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_20 = var16;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_20) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_20:Int> isa OTHER */
/* <var_20:Int> isa OTHER */
var23 = 1; /* easy <var_20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var27 = var_i <= var_20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var28 = 1;
{
{ /* Inline kernel#Int#- (var_len,var28) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var35 = var_len - var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var29,var_i) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var38 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var42 = var29 - var_i;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_j = var36;
{
var43 = ((val* (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str) /* chars on <var_str:String>*/;
}
{
var44 = ((val* (*)(val* self, long p0))(var43->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var43, var_j) /* [] on <var43:SequenceRead[Char]>*/;
}
var45 = ((struct instance_standard__Char*)var44)->value; /* autounbox from nullable Object to Char */;
var_c = var45;
var46 = '0';
{
{ /* Inline kernel#Char#== (var_c,var46) on <var_c:Char> */
var49 = var_c == var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
goto BREAK_label;
} else {
var50 = '.';
{
{ /* Inline kernel#Char#== (var_c,var50) on <var_c:Char> */
var53 = var_c == var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
var54 = 0;
var55 = 2;
{
{ /* Inline kernel#Int#+ (var_j,var55) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var62 = var_j + var55;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
var63 = ((val* (*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_standard__string__Text__substring]))(var_str, var54, var56) /* substring on <var_str:String>*/;
}
var = var63;
goto RET_LABEL;
} else {
var64 = 0;
var65 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var65) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var72 = var_j + var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
var73 = ((val* (*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_standard__string__Text__substring]))(var_str, var64, var66) /* substring on <var_str:String>*/;
}
var = var73;
goto RET_LABEL;
}
}
BREAK_label: (void)0;
var74 = 1;
{
var75 = standard___standard__Int___Discrete__successor(var_i, var74);
}
var_i = var75;
} else {
goto BREAK_label76;
}
}
BREAK_label76: (void)0;
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
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
long var_isinf /* var isinf: Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : String */;
double var_f /* var f: Float */;
long var38 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var42 /* : Bool */;
double var43 /* : Float */;
double var44 /* : Float */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
double var50 /* : Float */;
long var51 /* : Int */;
long var52 /* : Int */;
double var53 /* : Float */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
double var61 /* : Float */;
double var62 /* : Float */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
double var68 /* : Float */;
double var69 /* : Float */;
double var70 /* : Float */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
double var76 /* : Float */;
long var77 /* : Int */;
long var79 /* : Int */;
long var_i80 /* var i: Int */;
long var81 /* : Int */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
val* var95 /* : String */;
val* var96 /* : String */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var_s /* var s: String */;
long var99 /* : Int */;
long var_sl /* var sl: Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
short int var106 /* : Bool */;
long var107 /* : Int */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
long var114 /* : Int */;
val* var115 /* : Text */;
val* var_p1 /* var p1: nullable Object */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
val* var123 /* : Text */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : String */;
long var143 /* : Int */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : String */;
val* var163 /* : String */;
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
if (varonce) {
var4 = varonce;
} else {
var5 = "nan";
var6 = 3;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var8 = standard__math___Float___is_inf(self);
}
var_isinf = var8;
var9 = 1;
{
{ /* Inline kernel#Int#== (var_isinf,var9) on <var_isinf:Int> */
var12 = var_isinf == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (varonce13) {
var14 = varonce13;
} else {
var15 = "inf";
var16 = 3;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
var18 = 1;
{
{ /* Inline kernel#Int#unary - (var18) on <var18:Int> */
var21 = -var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_isinf,var19) on <var_isinf:Int> */
var24 = var_isinf == var19;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (varonce25) {
var26 = varonce25;
} else {
var27 = "-inf";
var28 = 4;
var29 = standard___standard__NativeString___to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var = var26;
goto RET_LABEL;
} else {
}
}
var30 = 0;
{
{ /* Inline kernel#Int#== (var_decimals,var30) on <var_decimals:Int> */
var33 = var_decimals == var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel#Float#to_i (self) on <self:Float> */
var36 = (long)self;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var37 = standard__string___Int___Object__to_s(var34);
}
var = var37;
goto RET_LABEL;
} else {
}
var_f = self;
var38 = 0;
var_i = var38;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var41 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var42 = var_i < var_;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var43 = 10.0;
{
{ /* Inline kernel#Float#* (var_f,var43) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var43:Float> isa OTHER */
/* <var43:Float> isa OTHER */
var46 = 1; /* easy <var43:Float> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 329);
show_backtrace(1);
}
var50 = var_f * var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_f = var44;
var51 = 1;
{
var52 = standard___standard__Int___Discrete__successor(var_i, var51);
}
var_i = var52;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var53 = 0.0;
{
{ /* Inline kernel#Float#> (self,var53) on <self:Float> */
/* Covariant cast for argument 0 (i) <var53:Float> isa OTHER */
/* <var53:Float> isa OTHER */
var56 = 1; /* easy <var53:Float> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 324);
show_backtrace(1);
}
var60 = self > var53;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
var61 = 0.5;
{
{ /* Inline kernel#Float#+ (var_f,var61) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var61:Float> isa OTHER */
/* <var61:Float> isa OTHER */
var64 = 1; /* easy <var61:Float> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 326);
show_backtrace(1);
}
var68 = var_f + var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_f = var62;
} else {
var69 = 0.5;
{
{ /* Inline kernel#Float#- (var_f,var69) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var69:Float> isa OTHER */
/* <var69:Float> isa OTHER */
var72 = 1; /* easy <var69:Float> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 328);
show_backtrace(1);
}
var76 = var_f - var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_f = var70;
}
{
{ /* Inline kernel#Float#to_i (var_f) on <var_f:Float> */
var79 = (long)var_f;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_i80 = var77;
var81 = 0;
{
{ /* Inline kernel#Int#== (var_i80,var81) on <var_i80:Int> */
var84 = var_i80 == var81;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
if (var82){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "0.";
var88 = 2;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = "0";
var93 = 1;
var94 = standard___standard__NativeString___to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
{
var95 = ((val* (*)(val* self, long p0))(var91->class->vft[COLOR_standard__string__String___42d]))(var91, var_decimals) /* * on <var91:String>*/;
}
{
var96 = ((val* (*)(val* self, val* p0))(var86->class->vft[COLOR_standard__string__String___43d]))(var86, var95) /* + on <var86:String>*/;
}
var = var96;
goto RET_LABEL;
} else {
}
{
var97 = standard___standard__Int___abs(var_i80);
}
{
var98 = standard__string___Int___Object__to_s(var97);
}
var_s = var98;
{
var99 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:String>*/;
}
var_sl = var99;
{
{ /* Inline kernel#Int#> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var102 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var106 = var_sl > var_decimals;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
var107 = 0;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var110 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var114 = var_sl - var_decimals;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
var115 = ((val* (*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, var107, var108) /* substring on <var_s:String>*/;
}
var_p1 = var115;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var118 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var122 = var_sl - var_decimals;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var123 = ((val* (*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_standard__string__Text__substring]))(var_s, var116, var_decimals) /* substring on <var_s:String>*/;
}
var_p2 = var123;
} else {
if (varonce124) {
var125 = varonce124;
} else {
var126 = "0";
var127 = 1;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var_p1 = var125;
if (varonce129) {
var130 = varonce129;
} else {
var131 = "0";
var132 = 1;
var133 = standard___standard__NativeString___to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
{ /* Inline kernel#Int#- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var136 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var140 = var_decimals - var_sl;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
var141 = ((val* (*)(val* self, long p0))(var130->class->vft[COLOR_standard__string__String___42d]))(var130, var134) /* * on <var130:String>*/;
}
{
var142 = ((val* (*)(val* self, val* p0))(var141->class->vft[COLOR_standard__string__String___43d]))(var141, var_s) /* + on <var141:String>*/;
}
var_p2 = var142;
}
var143 = 0;
{
{ /* Inline kernel#Int#< (var_i80,var143) on <var_i80:Int> */
/* Covariant cast for argument 0 (i) <var143:Int> isa OTHER */
/* <var143:Int> isa OTHER */
var146 = 1; /* easy <var143:Int> isa OTHER*/
if (unlikely(!var146)) {
var_class_name149 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var150 = var_i80 < var143;
var144 = var150;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
if (var144){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "-";
var154 = 1;
var155 = standard___standard__NativeString___to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
{
var156 = ((val* (*)(val* self, val* p0))(var152->class->vft[COLOR_standard__string__String___43d]))(var152, var_p1) /* + on <var152:String>*/;
}
var_p1 = var156;
} else {
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = ".";
var160 = 1;
var161 = standard___standard__NativeString___to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
var162 = ((val* (*)(val* self, val* p0))(var_p1->class->vft[COLOR_standard__string__String___43d]))(var_p1, var158) /* + on <var_p1:nullable Object(String)>*/;
}
{
var163 = ((val* (*)(val* self, val* p0))(var162->class->vft[COLOR_standard__string__String___43d]))(var162, var_p2) /* + on <var162:String>*/;
}
var = var163;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Char): String */
val* standard__string___Char___Object__to_s(char self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
val* var_s /* var s: FlatBuffer */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : Sequence[Char] */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
val* var8 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
var2 = 1;
{
standard___standard__FlatBuffer___with_capacity(var1, var2); /* Direct call string#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_s = var1;
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:FlatBuffer> */
var5 = var_s->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_s:FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
var7 = BOX_standard__Char(self); /* autobox from Char to nullable Object */
((void (*)(val* self, long p0, val* p1))(var3->class->vft[COLOR_standard__abstract_collection__Sequence___91d_93d_61d]))(var3, var6, var7) /* []= on <var3:Sequence[Char]>*/;
}
{
var8 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Char___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char var2 /* : Char */;
var2 = ((struct instance_standard__Char*)self)->value; /* autounbox from Object to Char */;
var1 = standard__string___Char___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#is_numeric for (self: Char): Bool */
short int standard__string___Char___is_numeric(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = '0';
{
{ /* Inline kernel#Char#>= (self,var2) on <self:Char> */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = '9';
{
{ /* Inline kernel#Char#<= (self,var7) on <self:Char> */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var1 = var8;
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
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var12 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void (*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
RET_LABEL2:(void)0;
}
}
var_s = var1;
var_ = self;
{
var3 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[nullable Object]>*/;
}
if (var5){
{
var6 = ((val* (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[nullable Object]>*/;
}
var_e = var6;
var7 = NULL;
if (var_e == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int (*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, var7) /* != on <var_e:nullable Object>*/;
var8 = var9;
}
if (var8){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2070);
show_backtrace(1);
} else {
var10 = ((val* (*)(val* self))(var_e->class->vft[COLOR_standard__string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_s, var10); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:Iterator[nullable Object]> */
RET_LABEL11:(void)0;
}
}
{
var12 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
var = var12;
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
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var8 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : String */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : String */;
val* var20 /* : String */;
var_sep = p0;
{
var1 = ((short int (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:Collection[nullable Object]>*/;
}
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var6 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var6) on <var6:FlatBuffer> */
{
((void (*)(val* self))(var6->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var6) /* init on <var6:FlatBuffer>*/;
}
RET_LABEL7:(void)0;
}
}
var_s = var6;
{
var8 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
}
var_i = var8;
{
var9 = ((val* (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
}
var_e = var9;
var10 = NULL;
if (var_e == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
var12 = ((short int (*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, var10) /* != on <var_e:nullable Object>*/;
var11 = var12;
}
if (var11){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2087);
show_backtrace(1);
} else {
var13 = ((val* (*)(val* self))(var_e->class->vft[COLOR_standard__string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_s, var13); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
}
for(;;) {
{
var14 = ((short int (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:Iterator[nullable Object]>*/;
}
if (var14){
{
standard___standard__FlatBuffer___Buffer__append(var_s, var_sep); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
{
var15 = ((val* (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
}
var_e = var15;
var16 = NULL;
if (var_e == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
var18 = ((short int (*)(val* self, val* p0))(var_e->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e, var16) /* != on <var_e:nullable Object>*/;
var17 = var18;
}
if (var17){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2094);
show_backtrace(1);
} else {
var19 = ((val* (*)(val* self))(var_e->class->vft[COLOR_standard__string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_s, var19); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val* self))(var_i->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var20 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Array#to_s for (self: Array[nullable Object]): String */
val* standard__string___Array___Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
val* var17 /* : nullable Object */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
val* var28 /* : String */;
val* var29 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: nullable NativeArray[nullable Object] */;
val* var30 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var31 /* : Int */;
long var_i /* var i: Int */;
long var32 /* : Int */;
long var_sl /* var sl: Int */;
long var33 /* : Int */;
long var_mypos /* var mypos: Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var40 /* : nullable Object */;
val* var_itsi /* var itsi: nullable Object */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var52 /* : String */;
val* var_tmp /* var tmp: String */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const struct type* type_struct;
const char* var_class_name65;
long var66 /* : Int */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
char* var92 /* : NativeString */;
char* var94 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
char var95 /* : Char */;
long var97 /* : Int */;
long var98 /* : Int */;
long var_off /* var off: Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var108 /* : String */;
val* var_tmp109 /* var tmp: String */;
long var110 /* : Int */;
long var_tpl /* var tpl: Int */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
char* var114 /* : NativeString */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
long var119 /* : Int */;
long var121 /* : Int */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
long var127 /* : Int */;
val* var128 /* : Iterator[Text] */;
val* var_ /* var : Iterator[String] */;
val* var129 /* : Iterator[nullable Object] */;
val* var_130 /* var : Iterator[String] */;
short int var131 /* : Bool */;
val* var132 /* : nullable Object */;
val* var_j /* var j: String */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
val* var_s /* var s: FlatString */;
long var137 /* : Int */;
long var139 /* : Int */;
long var_slen /* var slen: Int */;
char* var140 /* : NativeString */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
long var145 /* : Int */;
long var147 /* : Int */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
const char* var_class_name152;
long var153 /* : Int */;
long var156 /* : Int */;
long var157 /* : Int */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
const char* var_class_name162;
long var163 /* : Int */;
val* var165 /* : FlatString */;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:Array[nullable Object]> */
var3 = self->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_l = var1;
var4 = 0;
{
{ /* Inline kernel#Int#== (var_l,var4) on <var_l:Int> */
var7 = var_l == var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
if (varonce) {
var8 = varonce;
} else {
var9 = "";
var10 = 0;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
var12 = 1;
{
{ /* Inline kernel#Int#== (var_l,var12) on <var_l:Int> */
var15 = var_l == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var16 = 0;
{
var17 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(self, var16);
}
var18 = NULL;
if (var17 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int (*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var18) /* == on <var17:nullable Object>*/;
var19 = var20;
}
if (var19){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "";
var24 = 0;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
var26 = 0;
{
var27 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(self, var26);
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2108);
show_backtrace(1);
} else {
var28 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:nullable Object>*/;
}
var = var28;
goto RET_LABEL;
}
} else {
}
var29 = self->attrs[COLOR_standard__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var_its = var29;
var30 = NEW_standard__NativeArray(var_l, &type_standard__NativeArray__standard__String);
var_na = var30;
var31 = 0;
var_i = var31;
var32 = 0;
var_sl = var32;
var33 = 0;
var_mypos = var33;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var36 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var37 = var_i < var_l;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
if (var_its == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2115);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var_its,var_i) on <var_its:nullable NativeArray[nullable Object]> */
var40 = ((struct instance_standard__NativeArray*)var_its)->values[var_i];
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_itsi = var38;
var41 = NULL;
if (var_itsi == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
var43 = ((short int (*)(val* self, val* p0))(var_itsi->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_itsi, var41) /* == on <var_itsi:nullable Object>*/;
var42 = var43;
}
if (var42){
var44 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var44) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var51 = var_i + var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_i = var45;
goto BREAK_label;
} else {
}
if (var_itsi == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2120);
show_backtrace(1);
} else {
var52 = ((val* (*)(val* self))(var_itsi->class->vft[COLOR_standard__string__Object__to_s]))(var_itsi) /* to_s on <var_itsi:nullable Object>*/;
}
var_tmp = var52;
{
var53 = ((long (*)(val* self))(var_tmp->class->vft[COLOR_standard__string__Text__length]))(var_tmp) /* length on <var_tmp:String>*/;
}
{
{ /* Inline kernel#Int#+ (var_sl,var53) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var60 = var_sl + var53;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_sl = var54;
{
{ /* Inline array#NativeArray#[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_standard__NativeArray___35dE];
cltype63 = type_struct->color;
idtype64 = type_struct->id;
if(cltype63 >= var_tmp->type->table_size) {
var62 = 0;
} else {
var62 = var_tmp->type->type_table[cltype63] == idtype64;
}
if (unlikely(!var62)) {
var_class_name65 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 808);
show_backtrace(1);
}
((struct instance_standard__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL61:(void)0;
}
}
var66 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var66) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var66:Int> isa OTHER */
/* <var66:Int> isa OTHER */
var69 = 1; /* easy <var66:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var73 = var_i + var66;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_i = var67;
var74 = 1;
{
{ /* Inline kernel#Int#+ (var_mypos,var74) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <var74:Int> isa OTHER */
/* <var74:Int> isa OTHER */
var77 = 1; /* easy <var74:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var81 = var_mypos + var74;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_mypos = var75;
} else {
goto BREAK_label82;
}
BREAK_label: (void)0;
}
BREAK_label82: (void)0;
var83 = NULL/*special!*/;
var84 = 1;
{
{ /* Inline kernel#Int#+ (var_sl,var84) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var84:Int> isa OTHER */
/* <var84:Int> isa OTHER */
var87 = 1; /* easy <var84:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var91 = var_sl + var84;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var83,var85) on <var83:NativeString> */
var94 = (char*)nit_alloc(var85);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_ns = var92;
var95 = '\0';
{
{ /* Inline string#NativeString#[]= (var_ns,var_sl,var95) on <var_ns:NativeString> */
var_ns[var_sl]=var95;
RET_LABEL96:(void)0;
}
}
var97 = 0;
var_i = var97;
var98 = 0;
var_off = var98;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var101 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var105 = var_i < var_mypos;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var108 = ((struct instance_standard__NativeArray*)var_na)->values[var_i];
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var_tmp109 = var106;
{
var110 = ((long (*)(val* self))(var_tmp109->class->vft[COLOR_standard__string__Text__length]))(var_tmp109) /* length on <var_tmp109:String>*/;
}
var_tpl = var110;
/* <var_tmp109:String> isa FlatString */
cltype112 = type_standard__FlatString.color;
idtype113 = type_standard__FlatString.id;
if(cltype112 >= var_tmp109->type->table_size) {
var111 = 0;
} else {
var111 = var_tmp109->type->type_table[cltype112] == idtype113;
}
if (var111){
{
{ /* Inline string#FlatText#items (var_tmp109) on <var_tmp109:String(FlatString)> */
var116 = var_tmp109->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_tmp109:String(FlatString)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_tmp109) on <var_tmp109:String(FlatString)> */
var119 = var_tmp109->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_tmp109:String(FlatString)> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var114,var_ns,var_tpl,var117,var_off) on <var114:NativeString> */
memmove(var_ns+var_off,var114+var117,var_tpl);
RET_LABEL120:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var123 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var127 = var_off + var_tpl;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var_off = var121;
} else {
{
var128 = ((val* (*)(val* self))(var_tmp109->class->vft[COLOR_standard__string__Text__substrings]))(var_tmp109) /* substrings on <var_tmp109:String>*/;
}
var_ = var128;
{
var129 = standard___standard__Iterator___iterator(var_);
}
var_130 = var129;
for(;;) {
{
var131 = ((short int (*)(val* self))(var_130->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_130) /* is_ok on <var_130:Iterator[String]>*/;
}
if (var131){
{
var132 = ((val* (*)(val* self))(var_130->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_130) /* item on <var_130:Iterator[String]>*/;
}
var_j = var132;
/* <var_j:String> isa FlatString */
cltype134 = type_standard__FlatString.color;
idtype135 = type_standard__FlatString.id;
if(cltype134 >= var_j->type->table_size) {
var133 = 0;
} else {
var133 = var_j->type->type_table[cltype134] == idtype135;
}
if (unlikely(!var133)) {
var_class_name136 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2138);
show_backtrace(1);
}
var_s = var_j;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:FlatString> */
var139 = var_s->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_s:FlatString> */
var137 = var139;
RET_LABEL138:(void)0;
}
}
var_slen = var137;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:FlatString> */
var142 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:FlatString> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:FlatString> */
var145 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:FlatString> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var140,var_ns,var_slen,var143,var_off) on <var140:NativeString> */
memmove(var_ns+var_off,var140+var143,var_slen);
RET_LABEL146:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var149 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var149)) {
var_class_name152 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var153 = var_off + var_slen;
var147 = var153;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
var_off = var147;
{
((void (*)(val* self))(var_130->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_130) /* next on <var_130:Iterator[String]>*/;
}
} else {
goto BREAK_label154;
}
}
BREAK_label154: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_130) on <var_130:Iterator[String]> */
RET_LABEL155:(void)0;
}
}
}
var156 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var156) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var156:Int> isa OTHER */
/* <var156:Int> isa OTHER */
var159 = 1; /* easy <var156:Int> isa OTHER*/
if (unlikely(!var159)) {
var_class_name162 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var163 = var_i + var156;
var157 = var163;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
var_i = var157;
} else {
goto BREAK_label164;
}
}
BREAK_label164: (void)0;
{
var165 = standard___standard__NativeString___to_s_with_length(var_ns, var_sl);
}
var = var165;
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
char standard___standard__NativeString____91d_93d(char* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[]= for (self: NativeString, Int, Char) */
void standard___standard__NativeString____91d_93d_61d(char* self, long p0, char p1) {
self[p0]=p1;
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
long var1 /* : Int */;
long var_l /* var l: Int */;
char var2 /* : Char */;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
var1 = 0;
var_l = var1;
for(;;) {
{
{ /* Inline string#NativeString#[] (self,var_l) on <self:NativeString> */
var4 = self[var_l];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var5 = '\0';
{
{ /* Inline kernel#Char#!= (var2,var5) on <var2:Char> */
var8 = var2 == var5;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var10) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var14 = var_l + var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_l = var11;
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
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var_str /* var str: FlatString */;
var_length = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_length,var1) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var5 = var_length >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2224);
show_backtrace(1);
}
var6 = NEW_standard__FlatString(&type_standard__FlatString);
var7 = 0;
var8 = 1;
{
{ /* Inline kernel#Int#- (var_length,var8) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var15 = var_length - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var6, self, var_length, var7, var9); /* Direct call string#FlatString#with_infos on <var6:FlatString>*/
}
var_str = var6;
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
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
long var11 /* : Int */;
long var12 /* : Int */;
val* var14 /* : FlatString */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
val* var_str /* var str: FlatString */;
char var24 /* : Char */;
val* var27 /* : nullable NativeString */;
{
var1 = standard___standard__NativeString___cstring_length(self);
}
var_length = var1;
var2 = NULL/*special!*/;
var3 = 1;
{
{ /* Inline kernel#Int#+ (var_length,var3) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var7 = var_length + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var2,var4) on <var2:NativeString> */
var10 = (char*)nit_alloc(var4);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_new_self = var8;
var11 = 0;
var12 = 0;
{
{ /* Inline string#NativeString#copy_to (self,var_new_self,var_length,var11,var12) on <self:NativeString> */
memmove(var_new_self+var12,self+var11,var_length);
RET_LABEL13:(void)0;
}
}
var14 = NEW_standard__FlatString(&type_standard__FlatString);
var15 = 0;
var16 = 1;
{
{ /* Inline kernel#Int#- (var_length,var16) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var23 = var_length - var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var14, var_new_self, var_length, var15, var17); /* Direct call string#FlatString#with_infos on <var14:FlatString>*/
}
var_str = var14;
var24 = '\0';
{
{ /* Inline string#NativeString#[]= (var_new_self,var_length,var24) on <var_new_self:NativeString> */
var_new_self[var_length]=var24;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#FlatText#real_items= (var_str,var_new_self) on <var_str:FlatString> */
var27 = BOX_standard__NativeString(var_new_self); /* autobox from NativeString to nullable NativeString */
var_str->attrs[COLOR_standard__string__FlatText___real_items].val = var27; /* _real_items on <var_str:FlatString> */
RET_LABEL26:(void)0;
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
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var2) /* == on <var1:nullable Sequence[String]>*/;
var3 = var4;
}
if (var3){
{
standard__string___Sys___init_args(self); /* Direct call string#Sys#init_args on <self:Sys>*/
}
} else {
}
var5 = self->attrs[COLOR_standard__string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 2249);
show_backtrace(1);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Sys): String */
val* standard__string___Sys___program_name(val* self) {
val* var /* : String */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
var1 = 0;
{
{ /* Inline string#Sys#native_argv (self,var1) on <self:Sys> */
var4 = glob_argv[var1];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__NativeString___Object__to_s(var2);
}
var = var5;
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
long var4 /* : Int */;
val* var_args /* var args: Array[String] */;
long var5 /* : Int */;
long var_i /* var i: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
char* var18 /* : NativeString */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
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
var4 = 0;
{
standard___standard__Array___with_capacity(var3, var4); /* Direct call array#Array#with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var5 = 1;
var_i = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var8 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var9 = var_i < var_argc;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 1;
{
{ /* Inline kernel#Int#- (var_i,var10) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var17 = var_i - var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#Sys#native_argv (self,var_i) on <self:Sys> */
var20 = glob_argv[var_i];
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var21 = standard___standard__NativeString___Object__to_s(var18);
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_args, var11, var21); /* Direct call array#Array#[]= on <var_args:Array[String]>*/
}
var22 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var29 = var_i + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
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
