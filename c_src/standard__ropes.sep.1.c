#include "standard__ropes.sep.0.h"
/* method ropes#Object#maxlen for (self: Object): Int */
long standard__ropes___Object___maxlen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 64;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeString#chars for (self: RopeString): SequenceRead[Char] */
val* standard__ropes___standard__ropes__RopeString___standard__string__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : nullable SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
val* var_res /* var res: SequenceRead[Char] */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__RopeString___64dchars_60dis_cached_62d].s; /* @chars<is_cached> on <self:RopeString> */
if (var1){
var2 = self->attrs[COLOR_standard__ropes__RopeString___64dchars_60dcache_62d].val; /* @chars<cache> on <self:RopeString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR("\n");
show_backtrace(1);
}
var = var2;
goto RET_LABEL;
} else {
}
{
var3 = standard__ropes___standard__ropes__RopeString___chars_60dreal_62d(self);
}
var_res = var3;
self->attrs[COLOR_standard__ropes__RopeString___64dchars_60dcache_62d].val = var_res; /* @chars<cache> on <self:RopeString> */
var4 = 1;
self->attrs[COLOR_standard__ropes__RopeString___64dchars_60dis_cached_62d].s = var4; /* @chars<is_cached> on <self:RopeString> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeString#chars<real> for (self: RopeString): SequenceRead[Char] */
val* standard__ropes___standard__ropes__RopeString___chars_60dreal_62d(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : RopeChars */;
var1 = NEW_standard__ropes__RopeChars(&type_standard__ropes__RopeChars);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var1, self) /* target= on <var1:RopeChars>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:RopeChars>*/;
}
var = var1;
goto RET_LABEL;
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
/* method ropes#Concat#substrings for (self: Concat): Iterator[Text] */
val* standard__ropes___standard__ropes__Concat___standard__string__Text__substrings(val* self) {
val* var /* : Iterator[Text] */;
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
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
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
val* var2 /* : nullable NativeString */;
char* var3 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_res /* var res: NativeString */;
val* var5 /* : nullable NativeString */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_standard__ropes__Concat___64dto_cstring_60dis_cached_62d].s; /* @to_cstring<is_cached> on <self:Concat> */
if (var1){
var2 = self->attrs[COLOR_standard__ropes__Concat___64dto_cstring_60dcache_62d].val; /* @to_cstring<cache> on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR("\n");
show_backtrace(1);
}
var3 = ((struct instance_standard__NativeString*)var2)->value; /* autounbox from nullable NativeString to NativeString */;
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = standard__ropes___standard__ropes__Concat___to_cstring_60dreal_62d(self);
}
var_res = var4;
var5 = BOX_standard__NativeString(var_res); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_standard__ropes__Concat___64dto_cstring_60dcache_62d].val = var5; /* @to_cstring<cache> on <self:Concat> */
var6 = 1;
self->attrs[COLOR_standard__ropes__Concat___64dto_cstring_60dis_cached_62d].s = var6; /* @to_cstring<is_cached> on <self:Concat> */
var = var_res;
goto RET_LABEL;
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
show_backtrace(1);
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
show_backtrace(1);
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
((void (*)(val* self))(self->class->vft[COLOR_standard__ropes___standard__ropes__Concat___standard__kernel__Object__init]))(self) /* init on <self:Concat>*/;
}
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var2 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((long (*)(val* self))(var->class->vft[COLOR_standard__string__Text__length]))(var) /* length on <var:String>*/;
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var6 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((long (*)(val* self))(var4->class->vft[COLOR_standard__string__Text__length]))(var4) /* length on <var4:String>*/;
}
{
{ /* Inline kernel#Int#+ (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
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
long var1 /* : Int */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : String */;
long var7 /* : Int */;
long var8 /* : Int */;
var_i = p0;
var_x = self;
var1 = 1;
var_j = var1;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var5 = var_j < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val* (*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__string__String___43d]))(var_x, self) /* + on <var_x:String>*/;
}
var_x = var6;
var7 = 1;
{
var8 = standard___standard__Int___Discrete__successor(var_j, var7);
}
var_j = var8;
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
char standard__ropes___standard__ropes__Concat___standard__string__Text___91d_93d(val* self, long p0) {
char var /* : Char */;
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
char var19 /* : Char */;
val* var20 /* : String */;
val* var22 /* : String */;
char var23 /* : Char */;
var_i = p0;
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var3 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1) /* length on <var1:String>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
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
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var18 = var_i - var_llen;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((char (*)(val* self, long p0))(var9->class->vft[COLOR_standard__string__Text___91d_93d]))(var9, var12) /* [] on <var9:String>*/;
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
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((char (*)(val* self, long p0))(var20->class->vft[COLOR_standard__string__Text___91d_93d]))(var20, var_i) /* [] on <var20:String>*/;
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
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
val* var49 /* : Text */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var53 /* : String */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : Text */;
var_from = p0;
var_len = p1;
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var3 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1) /* length on <var1:String>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
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
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val* (*)(val* self, long p0, long p1))(var23->class->vft[COLOR_standard__string__Text__substring]))(var23, var_from, var_len) /* substring on <var23:String>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = 0;
{
{ /* Inline kernel#Int#- (var_len,var_lsublen) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var44 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var48 = var_len - var_lsublen;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
var49 = ((val* (*)(val* self, long p0, long p1))(var38->class->vft[COLOR_standard__string__Text__substring]))(var38, var41, var42) /* substring on <var38:String>*/;
}
{
var50 = ((val* (*)(val* self, val* p0))(var37->class->vft[COLOR_standard__string__String___43d]))(var37, var49) /* + on <var37:Text(String)>*/;
}
var = var50;
goto RET_LABEL;
} else {
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var53 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var56 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var60 = var_from - var_llen;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = ((val* (*)(val* self, long p0, long p1))(var51->class->vft[COLOR_standard__string__Text__substring]))(var51, var54, var_len) /* substring on <var51:String>*/;
}
var = var61;
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
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val* self))(var2->class->vft[COLOR_standard__string__String__to_upper]))(var2) /* to_upper on <var2:String>*/;
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var8 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__String__to_upper]))(var6) /* to_upper on <var6:String>*/;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var5) /* left= on <var1:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var9) /* right= on <var1:Concat>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:Concat>*/;
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
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val* self))(var2->class->vft[COLOR_standard__string__String__to_lower]))(var2) /* to_lower on <var2:String>*/;
}
{
{ /* Inline ropes#Concat#right (self) on <self:Concat> */
var8 = self->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__String__to_lower]))(var6) /* to_lower on <var6:String>*/;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var1, var5) /* left= on <var1:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var1, var9) /* right= on <var1:Concat>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:Concat>*/;
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
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : Concat */;
val* var24 /* : Concat */;
val* var25 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
var_o = p0;
{
var1 = ((val* (*)(val* self))(var_o->class->vft[COLOR_standard__string__Object__to_s]))(var_o) /* to_s on <var_o:Text>*/;
}
var_s = var1;
{
var2 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:String>*/;
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
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var4, self) /* left= on <var4:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var4, var_s) /* right= on <var4:Concat>*/;
}
{
((void (*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4) /* init on <var4:Concat>*/;
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
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_r = var5;
{
var8 = ((long (*)(val* self))(var_r->class->vft[COLOR_standard__string__Text__length]))(var_r) /* length on <var_r:String>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var14 = var_rlen + var_slen;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var15 = standard__ropes___Object___maxlen(self);
}
{
{ /* Inline kernel#Int#> (var9,var15) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var22 = var9 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var23 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var23, self) /* left= on <var23:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var23, var_s) /* right= on <var23:Concat>*/;
}
{
((void (*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23) /* init on <var23:Concat>*/;
}
var = var23;
goto RET_LABEL;
} else {
}
var24 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
{ /* Inline ropes#Concat#left (self) on <self:Concat> */
var27 = self->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val* (*)(val* self, val* p0))(var_r->class->vft[COLOR_standard__string__String___43d]))(var_r, var_s) /* + on <var_r:String>*/;
}
{
((void (*)(val* self, val* p0))(var24->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var24, var25) /* left= on <var24:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var24->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var24, var28) /* right= on <var24:Concat>*/;
}
{
((void (*)(val* self))(var24->class->vft[COLOR_standard__kernel__Object__init]))(var24) /* init on <var24:Concat>*/;
}
var = var24;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_cstring<real> for (self: Concat): NativeString */
char* standard__ropes___standard__ropes__Concat___to_cstring_60dreal_62d(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_len /* var len: Int */;
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
long var_off /* var off: Int */;
val* var16 /* : Iterator[Text] */;
val* var_ /* var : Iterator[Text] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[Text] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_i /* var i: Text */;
long var21 /* : Int */;
long var_ilen /* var ilen: Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
{
{ /* Inline ropes#Concat#length (self) on <self:Concat> */
var3 = self->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <self:Concat> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_len = var1;
var4 = NULL/*special!*/;
var5 = 1;
{
{ /* Inline kernel#Int#+ (var_len,var5) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var9 = var_len + var5;
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
{ /* Inline string#NativeString#[]= (var_ns,var_len,var13) on <var_ns:NativeString> */
var_ns[var_len]=var13;
RET_LABEL14:(void)0;
}
}
var15 = 0;
var_off = var15;
{
var16 = standard__ropes___standard__ropes__Concat___standard__string__Text__substrings(self);
}
var_ = var16;
{
var17 = standard___standard__Iterator___iterator(var_);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18) /* is_ok on <var_18:Iterator[Text]>*/;
}
if (var19){
{
var20 = ((val* (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18) /* item on <var_18:Iterator[Text]>*/;
}
var_i = var20;
{
var21 = ((long (*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__length]))(var_i) /* length on <var_i:Text>*/;
}
var_ilen = var21;
/* <var_i:Text> isa FlatString */
cltype23 = type_standard__FlatString.color;
idtype24 = type_standard__FlatString.id;
if(cltype23 >= var_i->type->table_size) {
var22 = 0;
} else {
var22 = var_i->type->type_table[cltype23] == idtype24;
}
if (unlikely(!var22)) {
var_class_name25 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 90);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (var_i) on <var_i:Text(FlatString)> */
var28 = var_i->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_i:Text(FlatString)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
/* <var_i:Text> isa FlatString */
cltype30 = type_standard__FlatString.color;
idtype31 = type_standard__FlatString.id;
if(cltype30 >= var_i->type->table_size) {
var29 = 0;
} else {
var29 = var_i->type->type_table[cltype30] == idtype31;
}
if (unlikely(!var29)) {
var_class_name32 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 90);
show_backtrace(1);
}
{
{ /* Inline string#FlatString#index_from (var_i) on <var_i:Text(FlatString)> */
var35 = var_i->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_i:Text(FlatString)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var26,var_ns,var_ilen,var33,var_off) on <var26:NativeString> */
memmove(var_ns+var_off,var26+var33,var_ilen);
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var39 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var43 = var_off + var_ilen;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_off = var37;
{
((void (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18) /* next on <var_18:Iterator[Text]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_18) on <var_18:Iterator[Text]> */
RET_LABEL44:(void)0;
}
}
var = var_ns;
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
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
long var_nlen /* var nlen: Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : Concat */;
char* var30 /* : NativeString */;
char* var32 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var33 /* : Int */;
long var35 /* : Int */;
long var_sifrom /* var sifrom: Int */;
long var36 /* : Int */;
long var38 /* : Int */;
long var_mifrom /* var mifrom: Int */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
char* var51 /* : NativeString */;
char* var53 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var54 /* : Int */;
val* var57 /* : FlatString */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
val* var61 /* : String */;
val* var63 /* : String */;
val* var_sl /* var sl: String */;
long var64 /* : Int */;
long var_sllen /* var sllen: Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
long var72 /* : Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
short int var79 /* : Bool */;
val* var80 /* : Concat */;
val* var81 /* : Concat */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var85 /* : String */;
var_o = p0;
{
var1 = ((val* (*)(val* self))(var_o->class->vft[COLOR_standard__string__Object__to_s]))(var_o) /* to_s on <var_o:Text>*/;
}
var_s = var1;
{
var2 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:String>*/;
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
var6 = 0;
{
{ /* Inline kernel#Int#== (var_slen,var6) on <var_slen:Int> */
var9 = var_slen == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = self;
goto RET_LABEL;
} else {
}
var10 = 0;
{
{ /* Inline kernel#Int#== (var_mlen,var10) on <var_mlen:Int> */
var13 = var_mlen == var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var16 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var17 = var_slen + var_mlen;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nlen = var14;
/* <var_s:String> isa FlatString */
cltype19 = type_standard__FlatString.color;
idtype20 = type_standard__FlatString.id;
if(cltype19 >= var_s->type->table_size) {
var18 = 0;
} else {
var18 = var_s->type->type_table[cltype19] == idtype20;
}
if (var18){
{
var21 = standard__ropes___Object___maxlen(self);
}
{
{ /* Inline kernel#Int#> (var_nlen,var21) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var28 = var_nlen > var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var29 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var29, self) /* left= on <var29:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var29->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var29, var_s) /* right= on <var29:Concat>*/;
}
{
((void (*)(val* self))(var29->class->vft[COLOR_standard__kernel__Object__init]))(var29) /* init on <var29:Concat>*/;
}
var = var29;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var32 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_mits = var30;
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:String(FlatString)> */
var35 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:String(FlatString)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_sifrom = var33;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var38 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_mifrom = var36;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:String(FlatString)> */
var41 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:String(FlatString)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_sits = var39;
var42 = NULL/*special!*/;
var43 = 1;
{
{ /* Inline kernel#Int#+ (var_nlen,var43) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var50 = var_nlen + var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var42,var44) on <var42:NativeString> */
var53 = (char*)nit_alloc(var44);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_ns = var51;
var54 = 0;
{
{ /* Inline string#NativeString#copy_to (var_mits,var_ns,var_mlen,var_mifrom,var54) on <var_mits:NativeString> */
memmove(var_ns+var54,var_mits+var_mifrom,var_mlen);
RET_LABEL55:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL56:(void)0;
}
}
{
var57 = standard___standard__NativeString___to_s_with_length(var_ns, var_nlen);
}
var = var57;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype59 = type_standard__ropes__Concat.color;
idtype60 = type_standard__ropes__Concat.id;
if(cltype59 >= var_s->type->table_size) {
var58 = 0;
} else {
var58 = var_s->type->type_table[cltype59] == idtype60;
}
if (var58){
{
{ /* Inline ropes#Concat#left (var_s) on <var_s:String(Concat)> */
var63 = var_s->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_sl = var61;
{
var64 = ((long (*)(val* self))(var_sl->class->vft[COLOR_standard__string__Text__length]))(var_sl) /* length on <var_sl:String>*/;
}
var_sllen = var64;
{
{ /* Inline kernel#Int#+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var67 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var71 = var_sllen + var_mlen;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
var72 = standard__ropes___Object___maxlen(self);
}
{
{ /* Inline kernel#Int#> (var65,var72) on <var65:Int> */
/* Covariant cast for argument 0 (i) <var72:Int> isa OTHER */
/* <var72:Int> isa OTHER */
var75 = 1; /* easy <var72:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var79 = var65 > var72;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
var80 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
((void (*)(val* self, val* p0))(var80->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var80, self) /* left= on <var80:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var80->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var80, var_s) /* right= on <var80:Concat>*/;
}
{
((void (*)(val* self))(var80->class->vft[COLOR_standard__kernel__Object__init]))(var80) /* init on <var80:Concat>*/;
}
var = var80;
goto RET_LABEL;
} else {
}
var81 = NEW_standard__ropes__Concat(&type_standard__ropes__Concat);
{
var82 = standard__ropes___FlatString___standard__string__String___43d(self, var_sl);
}
{
{ /* Inline ropes#Concat#right (var_s) on <var_s:String(Concat)> */
var85 = var_s->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var81->class->vft[COLOR_standard__ropes__Concat__left_61d]))(var81, var82) /* left= on <var81:Concat>*/;
}
{
((void (*)(val* self, val* p0))(var81->class->vft[COLOR_standard__ropes__Concat__right_61d]))(var81, var83) /* right= on <var81:Concat>*/;
}
{
((void (*)(val* self))(var81->class->vft[COLOR_standard__kernel__Object__init]))(var81) /* init on <var81:Concat>*/;
}
var = var81;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 451);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 458);
show_backtrace(1);
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
((void (*)(val* self))(self->class->vft[COLOR_standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init]))(self) /* init on <self:RopeIterPiece>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 520);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
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
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((long (*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__IndexedIterator__index]))(var2) /* index on <var2:IndexedIterator[String]>*/;
}
{
{ /* Inline kernel#Int#- (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val* (*)(val* self))(var12->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var12) /* item on <var12:IndexedIterator[String]>*/;
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
var20 = 1;
{
{ /* Inline kernel#Int#- (var17,var20) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var27 = var17 - var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#max= (self,var21) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___max].l = var21; /* _max on <self:RopeIter> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeIter#item for (self: RopeIter): Char */
char standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
char var7 /* : Char */;
{
{ /* Inline ropes#RopeIter#str (self) on <self:RopeIter> */
var3 = self->attrs[COLOR_standard__ropes__RopeIter___str].val; /* _str on <self:RopeIter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 520);
show_backtrace(1);
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
var7 = ((char (*)(val* self, long p0))(var1->class->vft[COLOR_standard__string__Text___91d_93d]))(var1, var4) /* [] on <var1:String>*/;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeIter#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item(self);
var2 = BOX_standard__Char(var1); /* autobox from Char to nullable Object */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
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
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var_9 /* var : RopeIter */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
val* var25 /* : IndexedIterator[String] */;
val* var27 /* : IndexedIterator[String] */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : IndexedIterator[String] */;
val* var39 /* : IndexedIterator[String] */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : IndexedIterator[String] */;
val* var44 /* : IndexedIterator[String] */;
val* var45 /* : IndexedIterator[String] */;
val* var47 /* : IndexedIterator[String] */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : IndexedIterator[String] */;
val* var52 /* : IndexedIterator[String] */;
val* var53 /* : nullable Object */;
long var55 /* : Int */;
var_ = self;
{
{ /* Inline ropes#RopeIter#pns (var_) on <var_:RopeIter> */
var2 = var_->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <var_:RopeIter> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
{ /* Inline kernel#Int#+ (var,var3) on <var:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var7 = var + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pns= (var_,var4) on <var_:RopeIter> */
var_->attrs[COLOR_standard__ropes__RopeIter___pns].l = var4; /* _pns on <var_:RopeIter> */
RET_LABEL8:(void)0;
}
}
var_9 = self;
{
{ /* Inline ropes#RopeIter#pos (var_9) on <var_9:RopeIter> */
var12 = var_9->attrs[COLOR_standard__ropes__RopeIter___pos].l; /* _pos on <var_9:RopeIter> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = 1;
{
{ /* Inline kernel#Int#+ (var10,var13) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var20 = var10 + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pos= (var_9,var14) on <var_9:RopeIter> */
var_9->attrs[COLOR_standard__ropes__RopeIter___pos].l = var14; /* _pos on <var_9:RopeIter> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#pns (self) on <self:RopeIter> */
var24 = self->attrs[COLOR_standard__ropes__RopeIter___pns].l; /* _pns on <self:RopeIter> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var27 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val* (*)(val* self))(var25->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var25) /* item on <var25:IndexedIterator[String]>*/;
}
{
var29 = ((long (*)(val* self))(var28->class->vft[COLOR_standard__string__Text__length]))(var28) /* length on <var28:nullable Object(String)>*/;
}
{
{ /* Inline kernel#Int#< (var22,var29) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var36 = var22 < var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var39 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = ((short int (*)(val* self))(var37->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var37) /* is_ok on <var37:IndexedIterator[String]>*/;
}
var41 = !var40;
if (var41){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var44 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
((void (*)(val* self))(var42->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var42) /* next on <var42:IndexedIterator[String]>*/;
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var47 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = ((short int (*)(val* self))(var45->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var45) /* is_ok on <var45:IndexedIterator[String]>*/;
}
var49 = !var48;
if (var49){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeIter#subs (self) on <self:RopeIter> */
var52 = self->attrs[COLOR_standard__ropes__RopeIter___subs].val; /* _subs on <self:RopeIter> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 522);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var50) /* item on <var50:IndexedIterator[String]>*/;
}
{
{ /* Inline ropes#RopeIter#str= (self,var53) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___str].val = var53; /* _str on <self:RopeIter> */
RET_LABEL54:(void)0;
}
}
var55 = 0;
{
{ /* Inline ropes#RopeIter#pns= (self,var55) on <self:RopeIter> */
self->attrs[COLOR_standard__ropes__RopeIter___pns].l = var55; /* _pns on <self:RopeIter> */
RET_LABEL56:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 687);
show_backtrace(1);
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
/* method ropes#RopeSubstrings#str for (self: RopeSubstrings): String */
val* standard__ropes___standard__ropes__RopeSubstrings___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 694);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#str= for (self: RopeSubstrings, String) */
void standard__ropes___standard__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#init for (self: RopeSubstrings, RopeString) */
void standard__ropes___standard__ropes__RopeSubstrings___init(val* self, val* p0) {
val* var_root /* var root: RopeString */;
val* var /* : RopeIterPiece */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var_r /* var r: RopeIterPiece */;
long var4 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var_rnod /* var rnod: String */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : RopeIterPiece */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
var_root = p0;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var1 = 1;
var2 = 0;
var3 = NULL;
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root) /* node= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, var1) /* ldone= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, var2) /* rdone= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, var3) /* prev= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:RopeIterPiece>*/;
}
var_r = var;
var4 = 0;
{
{ /* Inline ropes#RopeSubstrings#pos= (self,var4) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = var4; /* _pos on <self:RopeSubstrings> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:RopeString> */
var8 = var_root->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <var_root:RopeString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = 1;
{
{ /* Inline kernel#Int#- (var6,var9) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var13 = var6 - var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max= (self,var10) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l = var10; /* _max on <self:RopeSubstrings> */
RET_LABEL14:(void)0;
}
}
var_rnod = var_root;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype16 = type_standard__ropes__Concat.color;
idtype17 = type_standard__ropes__Concat.id;
if(cltype16 >= var_rnod->type->table_size) {
var15 = 0;
} else {
var15 = var_rnod->type->type_table[cltype16] == idtype17;
}
if (var15){
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var20 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_rnod = var18;
var21 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var22 = 1;
var23 = 0;
{
((void (*)(val* self, val* p0))(var21->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var21, var_rnod) /* node= on <var21:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var21->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var21, var22) /* ldone= on <var21:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var21->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var21, var23) /* rdone= on <var21:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var21->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var21, var_r) /* prev= on <var21:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var21->class->vft[COLOR_standard__kernel__Object__init]))(var21) /* init on <var21:RopeIterPiece>*/;
}
var_r = var21;
} else {
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL24:(void)0;
}
}
var25 = 1;
{
{ /* Inline ropes#RopeIterPiece#rdone= (var_r,var25) on <var_r:RopeIterPiece> */
var_r->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = var25; /* _rdone on <var_r:RopeIterPiece> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_r) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = var_r; /* _iter on <self:RopeSubstrings> */
RET_LABEL27:(void)0;
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
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var_r /* var r: RopeIterPiece */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : String */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
val* var40 /* : String */;
val* var42 /* : String */;
val* var43 /* : RopeIterPiece */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : String */;
val* var48 /* : String */;
val* var49 /* : RopeIterPiece */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
var_root = p0;
var_pos = p1;
var = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var1 = 1;
var2 = 0;
var3 = NULL;
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var, var_root) /* node= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var, var1) /* ldone= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var, var2) /* rdone= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var, var3) /* prev= on <var:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:RopeIterPiece>*/;
}
var_r = var;
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:RopeString> */
var6 = var_root->attrs[COLOR_standard__ropes__Concat___length].l; /* _length on <var_root:RopeString> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = 1;
{
{ /* Inline kernel#Int#- (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var11 = var4 - var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max= (self,var8) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l = var8; /* _max on <self:RopeSubstrings> */
RET_LABEL12:(void)0;
}
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype14 = type_standard__ropes__Concat.color;
idtype15 = type_standard__ropes__Concat.id;
if(cltype14 >= var_rnod->type->table_size) {
var13 = 0;
} else {
var13 = var_rnod->type->type_table[cltype14] == idtype15;
}
if (var13){
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var18 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long (*)(val* self))(var16->class->vft[COLOR_standard__string__Text__length]))(var16) /* length on <var16:String>*/;
}
{
{ /* Inline kernel#Int#>= (var_off,var19) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var26 = var_off >= var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = 1;
{
{ /* Inline ropes#RopeIterPiece#rdone= (var_r,var27) on <var_r:RopeIterPiece> */
var_r->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = var27; /* _rdone on <var_r:RopeIterPiece> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var31 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((long (*)(val* self))(var29->class->vft[COLOR_standard__string__Text__length]))(var29) /* length on <var29:String>*/;
}
{
{ /* Inline kernel#Int#- (var_off,var32) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var39 = var_off - var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_off = var33;
{
{ /* Inline ropes#Concat#right (var_rnod) on <var_rnod:String(Concat)> */
var42 = var_rnod->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_rnod = var40;
var43 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var44 = 1;
var45 = 0;
{
((void (*)(val* self, val* p0))(var43->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var43, var_rnod) /* node= on <var43:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var43->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var43, var44) /* ldone= on <var43:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var43->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var43, var45) /* rdone= on <var43:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var43->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var43, var_r) /* prev= on <var43:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var43->class->vft[COLOR_standard__kernel__Object__init]))(var43) /* init on <var43:RopeIterPiece>*/;
}
var_r = var43;
} else {
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var48 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_rnod = var46;
var49 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var50 = 1;
var51 = 0;
{
((void (*)(val* self, val* p0))(var49->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var49, var_rnod) /* node= on <var49:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var49->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var49, var50) /* ldone= on <var49:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var49->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var49, var51) /* rdone= on <var49:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var49->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var49, var_r) /* prev= on <var49:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var49->class->vft[COLOR_standard__kernel__Object__init]))(var49) /* init on <var49:RopeIterPiece>*/;
}
var_r = var49;
}
} else {
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL52:(void)0;
}
}
var53 = 1;
{
{ /* Inline ropes#RopeIterPiece#rdone= (var_r,var53) on <var_r:RopeIterPiece> */
var_r->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = var53; /* _rdone on <var_r:RopeIterPiece> */
RET_LABEL54:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_r) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = var_r; /* _iter on <self:RopeSubstrings> */
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var58 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var62 = var_pos - var_off;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos= (self,var56) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = var56; /* _pos on <self:RopeSubstrings> */
RET_LABEL63:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#item for (self: RopeSubstrings): String */
val* standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline ropes#RopeSubstrings#str (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 694);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
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
val* var3 /* : String */;
val* var5 /* : String */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : RopeIterPiece */;
val* var27 /* : RopeIterPiece */;
val* var28 /* : nullable RopeIterPiece */;
val* var30 /* : nullable RopeIterPiece */;
val* var_it /* var it: nullable RopeIterPiece */;
val* var31 /* : String */;
val* var33 /* : String */;
val* var_rnod /* var rnod: String */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : String */;
val* var50 /* : String */;
short int var51 /* : Bool */;
val* var53 /* : RopeIterPiece */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : String */;
val* var64 /* : String */;
val* var65 /* : RopeIterPiece */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : nullable RopeIterPiece */;
val* var70 /* : nullable RopeIterPiece */;
val* var71 /* : String */;
val* var73 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 694);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((long (*)(val* self))(var3->class->vft[COLOR_standard__string__Text__length]))(var3) /* length on <var3:String>*/;
}
{
{ /* Inline kernel#Int#+ (var,var6) on <var:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var10 = var + var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos= (var_,var7) on <var_:RopeSubstrings> */
var_->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l = var7; /* _pos on <var_:RopeSubstrings> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos (self) on <self:RopeSubstrings> */
var14 = self->attrs[COLOR_standard__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max (self) on <self:RopeSubstrings> */
var17 = self->attrs[COLOR_standard__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var12,var15) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var24 = var12 > var15;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeSubstrings#iter (self) on <self:RopeSubstrings> */
var27 = self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 687);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline ropes#RopeIterPiece#prev (var25) on <var25:RopeIterPiece> */
var30 = var25->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val; /* _prev on <var25:RopeIterPiece> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_it = var28;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 751);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#node (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 458);
show_backtrace(1);
}
var33 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___node].val; /* _node on <var_it:nullable RopeIterPiece> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 458);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_rnod = var31;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype35 = type_standard__ropes__Concat.color;
idtype36 = type_standard__ropes__Concat.id;
if(cltype35 >= var_rnod->type->table_size) {
var34 = 0;
} else {
var34 = var_rnod->type->type_table[cltype35] == idtype36;
}
var37 = !var34;
if (var37){
var38 = 1;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 754);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#ldone= (var_it,var38) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 460);
show_backtrace(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s = var38; /* _ldone on <var_it:nullable RopeIterPiece> */
RET_LABEL39:(void)0;
}
}
var40 = 1;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 755);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#rdone= (var_it,var40) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 462);
show_backtrace(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = var40; /* _rdone on <var_it:nullable RopeIterPiece> */
RET_LABEL41:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL42:(void)0;
}
}
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 757);
show_backtrace(1);
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_it) on <self:RopeSubstrings> */
self->attrs[COLOR_standard__ropes__RopeSubstrings___iter].val = var_it; /* _iter on <self:RopeSubstrings> */
RET_LABEL43:(void)0;
}
}
goto BREAK_label;
} else {
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 760);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#ldone (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 460);
show_backtrace(1);
}
var46 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s; /* _ldone on <var_it:nullable RopeIterPiece> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = !var44;
if (var47){
{
{ /* Inline ropes#Concat#left (var_rnod) on <var_rnod:String(Concat)> */
var50 = var_rnod->attrs[COLOR_standard__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 96);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_rnod = var48;
var51 = 1;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 762);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#ldone= (var_it,var51) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 460);
show_backtrace(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___ldone].s = var51; /* _ldone on <var_it:nullable RopeIterPiece> */
RET_LABEL52:(void)0;
}
}
var53 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var54 = 0;
var55 = 0;
{
((void (*)(val* self, val* p0))(var53->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var53, var_rnod) /* node= on <var53:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var53->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var53, var54) /* ldone= on <var53:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var53->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var53, var55) /* rdone= on <var53:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var53->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var53, var_it) /* prev= on <var53:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var53->class->vft[COLOR_standard__kernel__Object__init]))(var53) /* init on <var53:RopeIterPiece>*/;
}
var_it = var53;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 764);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#rdone (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 462);
show_backtrace(1);
}
var58 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s; /* _rdone on <var_it:nullable RopeIterPiece> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
var59 = !var56;
if (var59){
var60 = 1;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 765);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#rdone= (var_it,var60) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 462);
show_backtrace(1);
}
var_it->attrs[COLOR_standard__ropes__RopeIterPiece___rdone].s = var60; /* _rdone on <var_it:nullable RopeIterPiece> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline ropes#Concat#right (var_rnod) on <var_rnod:String(Concat)> */
var64 = var_rnod->attrs[COLOR_standard__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 98);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_rnod = var62;
var65 = NEW_standard__ropes__RopeIterPiece(&type_standard__ropes__RopeIterPiece);
var66 = 0;
var67 = 0;
{
((void (*)(val* self, val* p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__node_61d]))(var65, var_rnod) /* node= on <var65:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__ldone_61d]))(var65, var66) /* ldone= on <var65:RopeIterPiece>*/;
}
{
((void (*)(val* self, short int p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__rdone_61d]))(var65, var67) /* rdone= on <var65:RopeIterPiece>*/;
}
{
((void (*)(val* self, val* p0))(var65->class->vft[COLOR_standard__ropes__RopeIterPiece__prev_61d]))(var65, var_it) /* prev= on <var65:RopeIterPiece>*/;
}
{
((void (*)(val* self))(var65->class->vft[COLOR_standard__kernel__Object__init]))(var65) /* init on <var65:RopeIterPiece>*/;
}
var_it = var65;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 769);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#prev (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 464);
show_backtrace(1);
}
var70 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___prev].val; /* _prev on <var_it:nullable RopeIterPiece> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_it = var68;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 770);
show_backtrace(1);
} else {
{ /* Inline ropes#RopeIterPiece#node (var_it) on <var_it:nullable RopeIterPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 458);
show_backtrace(1);
}
var73 = var_it->attrs[COLOR_standard__ropes__RopeIterPiece___node].val; /* _node on <var_it:nullable RopeIterPiece> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__ropes, 458);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_rnod = var71;
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeChars#[] for (self: RopeChars, Int): Char */
char standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
char var4 /* : Char */;
var_i = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:RopeChars> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_standard__Char(var1); /* autobox from Char to nullable Object */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
