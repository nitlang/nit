#include "core__flat.sep.0.h"
/* method flat#FlatSubstringsIter#tgt for (self: FlatSubstringsIter): nullable FlatText */
val* core__flat___core__flat__FlatSubstringsIter___tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void core__flat___core__flat__FlatSubstringsIter___tgt_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method flat#FlatSubstringsIter#item for (self: FlatSubstringsIter): FlatText */
val* core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
val* var4 /* : nullable FlatText */;
{
var1 = core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 28);
fatal_exit(1);
}
{
{ /* Inline flat#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var4 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 29);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#is_ok for (self: FlatSubstringsIter): Bool */
short int core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
val* var3 /* : nullable FlatText */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline flat#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var3 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable FlatText> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable FlatText(FlatText)>*/
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
/* method flat#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__next(val* self) {
{
{ /* Inline flat#FlatSubstringsIter#tgt= (self,((val*)NULL)) on <self:FlatSubstringsIter> */
self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val = ((val*)NULL); /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatSubstringsIter#init for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init]))(self); /* init on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method flat#FlatText#first_byte for (self: FlatText): Int */
long core__flat___FlatText___first_byte(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#last_byte for (self: FlatText): Int */
long core__flat___FlatText___last_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var1 + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var13 = var3 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#char_to_byte_index for (self: FlatText, Int): Int */
long core__flat___FlatText___char_to_byte_index(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_dpos /* var dpos: Int */;
long var6 /* : Int */;
long var_b /* var b: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var_ln /* var ln: Int */;
long var38 /* : Int */;
long var_pos /* var pos: Int */;
long var_delta_begin /* var delta_begin: Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var_delta_end /* var delta_end: Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var_delta_cache /* var delta_cache: Int */;
long var_min /* var min: Int */;
char* var61 /* : NativeString */;
char* var_its /* var its: NativeString */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
long var79 /* : Int */;
long var_ns_i /* var ns_i: Int */;
long var_my_i /* var my_i: Int */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
long var83 /* : Int */;
long var84 /* : Int */;
long var85 /* : Int */;
long var86 /* : Int */;
long var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
long var93 /* : Int */;
long var94 /* : Int */;
var_index = p0;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var5 = var_index - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_dpos = var2;
var6 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_b = var6;
{
{ /* Inline kernel#Int#== (var_dpos,0l) on <var_dpos:Int> */
var9 = var_dpos == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_dpos,1l) on <var_dpos:Int> */
var12 = var_dpos == 1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var13 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
{
var14 = core___core__NativeString___length_of_char_at(var13, var_b);
}
{
{ /* Inline kernel#Int#+ (var_b,var14) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var_b + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_b = var15;
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var24 = -1l;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_dpos,var22) on <var_dpos:Int> */
var27 = var_dpos == var22;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var28 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var35 = var_b - 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var36 = core___core__NativeString___find_beginning_of_char_at(var28, var29);
}
var_b = var36;
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var_ln = var37;
var38 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
var_pos = var38;
var_delta_begin = var_index;
{
{ /* Inline kernel#Int#- (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var45 = var_ln - 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var39,var_index) on <var39:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var48 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var52 = var39 - var_index;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_delta_end = var46;
{
{ /* Inline kernel#Int#- (var_pos,var_index) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var55 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var59 = var_pos - var_index;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var60 = core___core__Int___abs(var53);
}
var_delta_cache = var60;
var_min = var_delta_begin;
var61 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var61;
{
{ /* Inline kernel#Int#< (var_delta_cache,var_min) on <var_delta_cache:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var64 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var68 = var_delta_cache < var_min;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
if (var62){
var_min = var_delta_cache;
} else {
}
{
{ /* Inline kernel#Int#< (var_delta_end,var_min) on <var_delta_end:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var71 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var75 = var_delta_end < var_min;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
var_min = var_delta_end;
} else {
}
{
{ /* Inline kernel#Int#== (var_min,var_delta_cache) on <var_min:Int> */
var78 = var_min == var_delta_cache;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
var79 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_ns_i = var79;
var_my_i = var_pos;
} else {
{
{ /* Inline kernel#Int#== (var_min,var_delta_begin) on <var_min:Int> */
var82 = var_min == var_delta_begin;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
if (var80){
{
var83 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_ns_i = var83;
var_my_i = 0l;
} else {
{
var84 = core__flat___FlatText___last_byte(self);
}
{
var85 = core___core__NativeString___find_beginning_of_char_at(var_its, var84);
}
var_ns_i = var85;
var86 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var86,1l) on <var86:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var89 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var93 = var86 - 1l;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var_my_i = var87;
}
}
{
var94 = core___core__NativeString___char_to_byte_index_cached(var_its, var_index, var_my_i, var_ns_i);
}
var_ns_i = var94;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_ns_i; /* _bytepos on <self:FlatText> */
var = var_ns_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#chars_to_escape_to_c for (self: FlatText): Int */
long core__flat___FlatText___chars_to_escape_to_c(val* self) {
long var /* : Int */;
char* var1 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var2 /* : Int */;
long var_max /* var max: Int */;
long var3 /* : Int */;
long var_pos /* var pos: Int */;
long var_req_esc /* var req_esc: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
unsigned char var8 /* : Byte */;
unsigned char var10 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var1;
{
var2 = core__flat___FlatText___last_byte(self);
}
var_max = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var3;
var_req_esc = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var6 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var7 = var_pos <= var_max;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline native#NativeString#[] (var_its,var_pos) on <var_its:NativeString> */
var10 = (unsigned char)((int)var_its[var_pos]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_c = var8;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var13 = var_c == ((unsigned char)0x0a);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var20 = var_req_esc + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_req_esc = var14;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var23 = var_c == ((unsigned char)0x09);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var30 = var_req_esc + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_req_esc = var24;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var33 = var_c == ((unsigned char)0x22);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_req_esc + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_req_esc = var34;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var43 = var_c == ((unsigned char)0x27);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var_req_esc + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_req_esc = var44;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var53 = var_c == ((unsigned char)0x5c);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var_req_esc + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_req_esc = var54;
} else {
{
{ /* Inline kernel#Byte#< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var63 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var67 = var_c < ((unsigned char)0x20);
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel#Int#+ (var_req_esc,3l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var70 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var74 = var_req_esc + 3l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_req_esc = var68;
} else {
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var77 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var81 = var_pos + 1l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_pos = var75;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_req_esc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#escape_to_c for (self: FlatText): String */
val* core__flat___FlatText___core__abstract_text__Text__escape_to_c(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_ln_extra /* var ln_extra: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
char* var6 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var7 /* : Int */;
long var_max /* var max: Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var13 /* : NativeString */;
char* var14 /* : NativeString */;
char* var16 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
long var17 /* : Int */;
long var_pos /* var pos: Int */;
long var_opos /* var opos: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
long var114 /* : Int */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
short int var129 /* : Bool */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
long var139 /* : Int */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
const char* var_class_name144;
long var145 /* : Int */;
unsigned char var146 /* : Byte */;
unsigned char var148 /* : Byte */;
unsigned char var149 /* : Byte */;
unsigned char var151 /* : Byte */;
unsigned char var152 /* : Byte */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
unsigned char var158 /* : Byte */;
long var160 /* : Int */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
long var166 /* : Int */;
unsigned char var167 /* : Byte */;
unsigned char var169 /* : Byte */;
unsigned char var170 /* : Byte */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
unsigned char var176 /* : Byte */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
long var193 /* : Int */;
short int var195 /* : Bool */;
int cltype196;
int idtype197;
const char* var_class_name198;
long var199 /* : Int */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
{
var1 = core__flat___FlatText___chars_to_escape_to_c(self);
}
var_ln_extra = var1;
{
{ /* Inline kernel#Int#== (var_ln_extra,0l) on <var_ln_extra:Int> */
var4 = var_ln_extra == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:FlatText>*/
}
var = var5;
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var6;
{
var7 = core__flat___FlatText___last_byte(self);
}
var_max = var7;
var8 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var8,var_ln_extra) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_ln_extra:Int> isa OTHER */
/* <var_ln_extra:Int> isa OTHER */
var11 = 1; /* easy <var_ln_extra:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var8 + var_ln_extra;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_nlen = var9;
var13 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var13,var_nlen) on <var13:NativeString> */
var16 = (char*)nit_alloc(var_nlen);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nns = var14;
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var17;
var_opos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var20 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var24 = var_pos <= var_max;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline native#NativeString#[] (var_its,var_pos) on <var_its:NativeString> */
var27 = (unsigned char)((int)var_its[var_pos]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_c = var25;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var30 = var_c == ((unsigned char)0x09);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_opos + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var32,((unsigned char)0x74)) on <var_nns:NativeString> */
var_nns[var32]=(unsigned char)((unsigned char)0x74);
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var42 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var46 = var_opos + 2l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_opos = var40;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var49 = var_c == ((unsigned char)0x0a);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var57 = var_opos + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var51,((unsigned char)0x6e)) on <var_nns:NativeString> */
var_nns[var51]=(unsigned char)((unsigned char)0x6e);
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var61 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var65 = var_opos + 2l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_opos = var59;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var68 = var_c == ((unsigned char)0x22);
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var76 = var_opos + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var70,((unsigned char)0x22)) on <var_nns:NativeString> */
var_nns[var70]=(unsigned char)((unsigned char)0x22);
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var80 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var84 = var_opos + 2l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_opos = var78;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var87 = var_c == ((unsigned char)0x27);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var95 = var_opos + 1l;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var89,((unsigned char)0x27)) on <var_nns:NativeString> */
var_nns[var89]=(unsigned char)((unsigned char)0x27);
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var99 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var103 = var_opos + 2l;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var_opos = var97;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var106 = var_c == ((unsigned char)0x5c);
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
if (var104){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var110 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var114 = var_opos + 1l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var108,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var108]=(unsigned char)((unsigned char)0x5c);
RET_LABEL115:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var118 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var122 = var_opos + 2l;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var_opos = var116;
} else {
{
{ /* Inline kernel#Byte#< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var125 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var129 = var_c < ((unsigned char)0x20);
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL130:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var137 = var_opos + 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var131,((unsigned char)0x30)) on <var_nns:NativeString> */
var_nns[var131]=(unsigned char)((unsigned char)0x30);
RET_LABEL138:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var141 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var141)) {
var_class_name144 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name144);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var145 = var_opos + 2l;
var139 = var145;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x38)) on <var_c:Byte> */
var148 = var_c & ((unsigned char)0x38);
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Byte#>> (var146,3l) on <var146:Byte> */
var151 = var146 >> 3l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline kernel#Byte#+ (var149,((unsigned char)0x30)) on <var149:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var154 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var158 = var149 + ((unsigned char)0x30);
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var139,var152) on <var_nns:NativeString> */
var_nns[var139]=(unsigned char)var152;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,3l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var162 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var166 = var_opos + 3l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x07)) on <var_c:Byte> */
var169 = var_c & ((unsigned char)0x07);
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline kernel#Byte#+ (var167,((unsigned char)0x30)) on <var167:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var172 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var176 = var167 + ((unsigned char)0x30);
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var160,var170) on <var_nns:NativeString> */
var_nns[var160]=(unsigned char)var170;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,4l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var180 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var184 = var_opos + 4l;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var_opos = var178;
} else {
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,var_c) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)var_c;
RET_LABEL185:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var188 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var192 = var_opos + 1l;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
var_opos = var186;
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var195 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var195)) {
var_class_name198 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name198);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var199 = var_pos + 1l;
var193 = var199;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
}
var_pos = var193;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var201 = (val*)(var_nlen<<2|1);
var200 = core__flat___NativeString___to_s_unsafe(var_nns, var201);
}
var = var200;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#[] for (self: FlatText, Int): Char */
uint32_t core__flat___FlatText___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
uint32_t var14 /* : Char */;
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var5 = var_index >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var6 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
{
{ /* Inline kernel#Int#< (var_index,var6) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_index < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 295);
fatal_exit(1);
}
{
var14 = core__flat___FlatText___fetch_char_at(self, var_index);
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#fetch_char_at for (self: FlatText, Int): Char */
uint32_t core__flat___FlatText___fetch_char_at(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_i /* var i: Int */;
char* var2 /* : NativeString */;
char* var_items /* var items: NativeString */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var6 /* : Byte */;
unsigned char var8 /* : Byte */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
uint32_t var12 /* : Char */;
uint32_t var14 /* : Char */;
uint32_t var15 /* : Char */;
var_index = p0;
{
var1 = core__flat___FlatText___char_to_byte_index(self, var_index);
}
var_i = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_items = var2;
{
{ /* Inline native#NativeString#[] (var_items,var_i) on <var_items:NativeString> */
var5 = (unsigned char)((int)var_items[var_i]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_b = var3;
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var8 = var_b & ((unsigned char)0x80);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var6,((unsigned char)0x00)) on <var6:Byte> */
var11 = var6 == ((unsigned char)0x00);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Byte#ascii (var_b) on <var_b:Byte> */
var14 = (uint32_t)var_b;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
}
{
var15 = core___core__NativeString___char_at(var_items, var_i);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#to_hex for (self: FlatText, nullable Int, nullable Int): Int */
long core__flat___FlatText___core__abstract_text__Text__to_hex(val* self, val* p0, val* p1) {
long var /* : Int */;
val* var_pos /* var pos: nullable Int */;
val* var_ln /* var ln: nullable Int */;
long var_res /* var res: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
long var17 /* : Int */;
val* var18 /* : nullable Int */;
long var19 /* : Int */;
long var20 /* : Int */;
val* var21 /* : nullable Int */;
char* var22 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var_max /* var max: Int */;
long var32 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var40 /* : Int */;
long var42 /* : Int */;
unsigned char var43 /* : Byte */;
unsigned char var45 /* : Byte */;
uint32_t var46 /* : Char */;
uint32_t var48 /* : Char */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var57 /* : Int */;
var_pos = p0;
var_ln = p1;
var_res = 0l;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = (val*)(0l<<2|1);
var_pos = var5;
} else {
}
if (var_ln == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_ln,((val*)NULL)) on <var_ln:nullable Int> */
var9 = 0; /* incompatible types Int vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatText> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:nullable Int(Int)> isa OTHER */
/* <var_pos:nullable Int(Int)> isa OTHER */
var15 = 1; /* easy <var_pos:nullable Int(Int)> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = var_pos == NULL ? "null" : (((long)var_pos&3)?type_info[((long)var_pos&3)]:var_pos->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var16 = (long)(var_pos)>>2;
var17 = var10 - var16;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var18 = (val*)(var13<<2|1);
var_ln = var18;
} else {
}
{
var20 = (long)(var_pos)>>2;
var19 = core__flat___FlatText___char_to_byte_index(self, var20);
}
var21 = (val*)(var19<<2|1);
var_pos = var21;
var22 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var22;
{
{ /* Inline kernel#Int#+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var25 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = var_ln == NULL ? "null" : (((long)var_ln&3)?type_info[((long)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = (long)(var_pos)>>2;
var30 = (long)(var_ln)>>2;
var31 = var29 + var30;
var23 = var31;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_max = var23;
var32 = (long)(var_pos)>>2;
var_i = var32;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var35 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_i < var_;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#<< (var_res,4l) on <var_res:Int> */
var42 = var_res << 4l;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_res = var40;
{
{ /* Inline native#NativeString#[] (var_its,var_i) on <var_its:NativeString> */
var45 = (unsigned char)((int)var_its[var_i]);
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Byte#ascii (var43) on <var43:Byte> */
var48 = (uint32_t)var43;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var49 = core__abstract_text___Char___from_hex(var46);
}
{
{ /* Inline kernel#Int#+ (var_res,var49) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_res + var49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_res = var50;
{
var57 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var57;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#first_byte for (self: FlatString): Int */
long core___core__FlatString___FlatText__first_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatString#chars for (self: FlatString): SequenceRead[Char] */
val* core___core__FlatString___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : FlatStringCharView */;
var1 = self->attrs[COLOR_core__flat__FlatString___chars].val != NULL; /* _chars on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatString___chars].val; /* _chars on <self:FlatString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 336);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatStringCharView(&type_core__flat__FlatStringCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatStringCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatStringCharView>*/
}
self->attrs[COLOR_core__flat__FlatString___chars].val = var3; /* _chars on <self:FlatString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatString#bytes for (self: FlatString): SequenceRead[Byte] */
val* core___core__FlatString___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : FlatStringByteView */;
var1 = self->attrs[COLOR_core__flat__FlatString___bytes].val != NULL; /* _bytes on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatString___bytes].val; /* _bytes on <self:FlatString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 338);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatStringByteView(&type_core__flat__FlatStringByteView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var3, self); /* target= on <var3:FlatStringByteView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatStringByteView>*/
}
self->attrs[COLOR_core__flat__FlatString___bytes].val = var3; /* _bytes on <self:FlatString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_cstring for (self: FlatString): NativeString */
char* core___core__FlatString___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
long var_blen /* var blen: Int */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_new_items /* var new_items: NativeString */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatString__lazy_32d_to_cstring].s; /* lazy _to_cstring on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatString___to_cstring].str; /* _to_cstring on <self:FlatString> */
} else {
{
var5 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_blen = var5;
var6 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_blen,1l) on <var_blen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var10 = var_blen + 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var6,var7) on <var6:NativeString> */
var13 = (char*)nit_alloc(var7);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_new_items = var11;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native#NativeString#copy_to (var14,var_new_items,var_blen,var15,0l) on <var14:NativeString> */
memmove(var_new_items+0l,var14+var15,var_blen);
RET_LABEL16:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_new_items,var_blen,((unsigned char)0x00)) on <var_new_items:NativeString> */
var_new_items[var_blen]=(unsigned char)((unsigned char)0x00);
RET_LABEL17:(void)0;
}
}
var3 = var_new_items;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__flat__FlatString___to_cstring].str = var3; /* _to_cstring on <self:FlatString> */
var2 = var3;
self->attrs[COLOR_core__flat__FlatString__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:FlatString> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_cstring= for (self: FlatString, NativeString) */
void core___core__FlatString___to_cstring_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatString___to_cstring].str = p0; /* _to_cstring on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatString__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#substring_from for (self: FlatString, Int): String */
val* core___core__FlatString___core__abstract_text__Text__substring_from(val* self, long p0) {
val* var /* : String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_c /* var c: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_st /* var st: Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_fln /* var fln: Int */;
val* var33 /* : FlatString */;
char* var34 /* : NativeString */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
var_from = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = core___core__FlatString___core__abstract_text__Text__empty(self);
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var13 = var_from <= 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = self;
goto RET_LABEL;
} else {
}
{
var14 = core__flat___FlatText___char_to_byte_index(self, var_from);
}
var_c = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline kernel#Int#- (var_c,var15) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var22 = var_c - var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_st = var16;
{
{ /* Inline abstract_text#FlatText#bytelen (self) on <self:FlatString> */
var25 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var23,var_st) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var28 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var32 = var23 - var_st;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_fln = var26;
var33 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline abstract_text#FlatText#items (self) on <self:FlatString> */
var36 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
{ /* Inline kernel#Int#- (var37,var_from) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var40 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var44 = var37 - var_from;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
core___core__FlatString___full(var33, var34, var_fln, var_c, var38); /* Direct call flat#FlatString#full on <var33:FlatString>*/
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substring for (self: FlatString, Int, Int): String */
val* core___core__FlatString___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
long var29 /* : Int */;
long var_ln /* var ln: Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
long var_end_index /* var end_index: Int */;
val* var76 /* : String */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var4 = var_count >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 373);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_from < 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var14 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var_count + var_from;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_count = var12;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var21 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_count < 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "";
var28 = core__flat___NativeString___to_s_full(var27, 0l, 0l);
var26 = var28;
varonce = var26;
}
var = var26;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var29 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_ln = var29;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var32 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var36 = var_count + var_from;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var30,var_ln) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var39 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var43 = var30 > var_ln;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline kernel#Int#- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var46 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var50 = var_ln - var_from;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_count = var44;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var53 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var57 = var_count <= 0l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "";
var61 = core__flat___NativeString___to_s_full(var60, 0l, 0l);
var59 = var61;
varonce58 = var59;
}
var = var59;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var64 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var68 = var_from + var_count;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var62,1l) on <var62:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var75 = var62 - 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_end_index = var69;
{
var76 = core___core__FlatString___substring_impl(self, var_from, var_count, var_end_index);
}
var = var76;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substring_impl for (self: FlatString, Int, Int, Int): String */
val* core___core__FlatString___substring_impl(val* self, long p0, long p1, long p2) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var_end_index /* var end_index: Int */;
long var1 /* : Int */;
long var_cache /* var cache: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
long var_dfrom /* var dfrom: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
long var_dend /* var dend: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
long var23 /* : Int */;
long var_byteto /* var byteto: Int */;
long var24 /* : Int */;
long var25 /* : Int */;
char* var26 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : FlatString */;
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
val* var_s /* var s: FlatString */;
var_from = p0;
var_count = p1;
var_end_index = p2;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatString> */
var_cache = var1;
{
{ /* Inline kernel#Int#- (var_cache,var_from) on <var_cache:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var4 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var5 = var_cache - var_from;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = core___core__Int___abs(var2);
}
var_dfrom = var6;
{
{ /* Inline kernel#Int#- (var_end_index,var_from) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var9 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var13 = var_end_index - var_from;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
var14 = core___core__Int___abs(var7);
}
var_dend = var14;
{
{ /* Inline kernel#Int#< (var_dfrom,var_dend) on <var_dfrom:Int> */
/* Covariant cast for argument 0 (i) <var_dend:Int> isa OTHER */
/* <var_dend:Int> isa OTHER */
var17 = 1; /* easy <var_dend:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_dfrom < var_dend;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = core__flat___FlatText___char_to_byte_index(self, var_from);
}
var_bytefrom = var22;
{
var23 = core__flat___FlatText___char_to_byte_index(self, var_end_index);
}
var_byteto = var23;
} else {
{
var24 = core__flat___FlatText___char_to_byte_index(self, var_end_index);
}
var_byteto = var24;
{
var25 = core__flat___FlatText___char_to_byte_index(self, var_from);
}
var_bytefrom = var25;
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var26;
{
var27 = core___core__NativeString___length_of_char_at(var_its, var_byteto);
}
{
{ /* Inline kernel#Int#- (var27,1l) on <var27:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var34 = var27 - 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_byteto,var28) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var37 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var_byteto + var28;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_byteto = var35;
var42 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var45 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var49 = var_byteto - var_bytefrom;
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
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var43 + 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
core___core__FlatString___full(var42, var_its, var50, var_bytefrom, var_count); /* Direct call flat#FlatString#full on <var42:FlatString>*/
}
var_s = var42;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#empty for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__flat___NativeString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 410);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_upper for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_outstr /* var outstr: FlatBuffer */;
long var7 /* : Int */;
long var_mylen /* var mylen: Int */;
long var_pos /* var pos: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
val* var16 /* : nullable Object */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
core___core__FlatBuffer___with_capacity(var1, var3); /* Direct call flat#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_mylen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_mylen:Int> isa OTHER */
/* <var_mylen:Int> isa OTHER */
var10 = 1; /* easy <var_mylen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_pos < var_mylen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = core___core__FlatString___core__abstract_text__Text__chars(self);
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
{
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_upper(var18);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_outstr, var17); /* Direct call flat#FlatBuffer#add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var25 = var_pos + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_pos = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var26 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_outstr);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_lower for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_outstr /* var outstr: FlatBuffer */;
long var7 /* : Int */;
long var_mylen /* var mylen: Int */;
long var_pos /* var pos: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
val* var16 /* : nullable Object */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
core___core__FlatBuffer___with_capacity(var1, var3); /* Direct call flat#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_mylen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_mylen:Int> isa OTHER */
/* <var_mylen:Int> isa OTHER */
var10 = 1; /* easy <var_mylen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_pos < var_mylen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = core___core__FlatString___core__abstract_text__Text__chars(self);
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
{
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_lower(var18);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_outstr, var17); /* Direct call flat#FlatBuffer#add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var25 = var_pos + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_pos = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var26 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_outstr);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#with_infos for (self: FlatString, NativeString, Int, Int) */
void core___core__FlatString___with_infos(val* self, char* p0, long p1, long p2) {
char* var_items /* var items: NativeString */;
long var_bytelen /* var bytelen: Int */;
long var_from /* var from: Int */;
char* var /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_from5 /* var from: Int */;
long var_bytelen6 /* var bytelen: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_i /* var i: Int */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
long var53 /* : Int */;
long var_cln /* var cln: Int */;
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
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:FlatString> */
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_bytelen = p1;
var_from = p2;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_bytelen; /* _bytelen on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatString___first_byte].l = var_from; /* _first_byte on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_from; /* _bytepos on <self:FlatString> */
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var2 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native#NativeString#utf8_length (var,var2,var_bytelen) on <var:NativeString> */
var_from5 = var2;
var_bytelen6 = var_bytelen;
var_st = var_from5;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_bytelen6,0l) on <var_bytelen6:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var10 = var_bytelen6 > 0l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_bytelen6,4l) on <var_bytelen6:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var13 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var17 = var_bytelen6 >= 4l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline native#NativeString#fetch_4_chars (var,var_st) on <var:NativeString> */
var20 = (long)*((uint32_t*)(var + var_st));
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_i = var18;
{
{ /* Inline math#Int#& (var_i,2155905152l) on <var_i:Int> */
var23 = var_i & 2155905152l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var21,0l) on <var21:Int> */
var26 = var21 == 0l;
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#- (var_bytelen6,4l) on <var_bytelen6:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var30 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var34 = var_bytelen6 - 4l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_bytelen6 = var28;
{
{ /* Inline kernel#Int#+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var37 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var_st + 4l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_st = var35;
{
{ /* Inline kernel#Int#+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var44 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var_ln + 4l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_ln = var42;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_bytelen6,0l) on <var_bytelen6:Int> */
var51 = var_bytelen6 == 0l;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
goto BREAK_label52;
} else {
}
{
var53 = core___core__NativeString___length_of_char_at(var, var_st);
}
var_cln = var53;
{
{ /* Inline kernel#Int#+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var56 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var_st + var_cln;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_st = var54;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var67 = var_ln + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_ln = var61;
{
{ /* Inline kernel#Int#- (var_bytelen6,var_cln) on <var_bytelen6:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var70 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var74 = var_bytelen6 - var_cln;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_bytelen6 = var68;
} else {
goto BREAK_label52;
}
}
BREAK_label52: (void)0;
var3 = var_ln;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var3; /* _length on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#full for (self: FlatString, NativeString, Int, Int, Int) */
void core___core__FlatString___full(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_bytelen /* var bytelen: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
{
{ /* Inline kernel#Object#init (self) on <self:FlatString> */
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_bytelen = p1;
var_from = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:FlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_bytelen; /* _bytelen on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatString___first_byte].l = var_from; /* _first_byte on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_from; /* _bytepos on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#== for (self: FlatString, nullable Object): Bool */
short int core___core__FlatString___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var_my_length /* var my_length: Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var_my_index /* var my_index: Int */;
long var20 /* : Int */;
long var_its_index /* var its_index: Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name;
long var26 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var27 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
char* var28 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
unsigned char var36 /* : Byte */;
unsigned char var38 /* : Byte */;
unsigned char var39 /* : Byte */;
unsigned char var41 /* : Byte */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
var_other = p0;
/* <var_other:nullable Object> isa FlatText */
cltype = type_core__FlatText.color;
idtype = type_core__FlatText.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__FlatString___core__kernel__Object___61d_61d]))(self, p0); /* == on <self:FlatString>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#object_id (self) on <self:FlatString> */
var6 = (long)self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Object#object_id (var_other) on <var_other:nullable Object(FlatText)> */
var9 = (long)var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var4,var7) on <var4:Int> */
var12 = var4 == var7;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 1;
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_my_length = var13;
var14 = var_other->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_other:nullable Object(FlatText)> */
{
{ /* Inline kernel#Int#!= (var14,var_my_length) on <var14:Int> */
var17 = var14 == var_my_length;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = 0;
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_my_index = var19;
{
var20 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:nullable Object(FlatText)>*/
}
var_its_index = var20;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var23 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var26 = var_my_index + var_my_length;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_last_iteration = var21;
var27 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:nullable Object(FlatText)> */
var_its_items = var27;
var28 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var28;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var31 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_my_index < var_last_iteration;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline native#NativeString#[] (var_my_items,var_my_index) on <var_my_items:NativeString> */
var38 = (unsigned char)((int)var_my_items[var_my_index]);
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var_its_items,var_its_index) on <var_its_items:NativeString> */
var41 = (unsigned char)((int)var_its_items[var_its_index]);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var36,var39) on <var36:Byte> */
var44 = var36 == var39;
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_my_index,1l) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var52 = var_my_index + 1l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_my_index = var46;
{
{ /* Inline kernel#Int#+ (var_its_index,1l) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var59 = var_its_index + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_its_index = var53;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#< for (self: FlatString, Text): Bool */
short int core___core__FlatString___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
char* var16 /* : NativeString */;
char* var_myits /* var myits: NativeString */;
char* var17 /* : NativeString */;
char* var_itsits /* var itsits: NativeString */;
long var18 /* : Int */;
long var_mbt /* var mbt: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_obt /* var obt: Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
long var_minln /* var minln: Int */;
long var30 /* : Int */;
long var_mst /* var mst: Int */;
long var31 /* : Int */;
long var_ost /* var ost: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
unsigned char var39 /* : Byte */;
unsigned char var41 /* : Byte */;
unsigned char var_my_curr_char /* var my_curr_char: Byte */;
unsigned char var42 /* : Byte */;
unsigned char var44 /* : Byte */;
unsigned char var_its_curr_char /* var its_curr_char: Byte */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 504);
fatal_exit(1);
}
var_other = p0;
/* <var_other:Text> isa FlatText */
cltype3 = type_core__FlatText.color;
idtype4 = type_core__FlatText.id;
if(cltype3 >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype3] == idtype4;
}
var5 = !var2;
if (var5){
{
var6 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__FlatString___core__kernel__Comparable___60d]))(self, p0); /* < on <self:FlatString>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#object_id (self) on <self:FlatString> */
var9 = (long)self;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Object#object_id (var_other) on <var_other:Text(FlatText)> */
var12 = (long)var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var7,var10) on <var7:Int> */
var15 = var7 == var10;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_myits = var16;
var17 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:Text(FlatText)> */
var_itsits = var17;
var18 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_mbt = var18;
{
{ /* Inline abstract_text#FlatText#bytelen (var_other) on <var_other:Text(FlatText)> */
var21 = var_other->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_other:Text(FlatText)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_obt = var19;
{
{ /* Inline kernel#Int#< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var25 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var_mbt < var_obt;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var22 = var_mbt;
} else {
var22 = var_obt;
}
var_minln = var22;
var30 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mst = var30;
{
var31 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:Text(FlatText)>*/
}
var_ost = var31;
var_i = 0l;
var_ = var_minln;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var_i < var_;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
} else {
goto BREAK_label;
}
{
{ /* Inline native#NativeString#[] (var_myits,var_mst) on <var_myits:NativeString> */
var41 = (unsigned char)((int)var_myits[var_mst]);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_my_curr_char = var39;
{
{ /* Inline native#NativeString#[] (var_itsits,var_ost) on <var_itsits:NativeString> */
var44 = (unsigned char)((int)var_itsits[var_ost]);
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_its_curr_char = var42;
{
{ /* Inline kernel#Byte#> (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var47 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 621);
fatal_exit(1);
}
var51 = var_my_curr_char > var_its_curr_char;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Byte#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var54 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var58 = var_my_curr_char < var_its_curr_char;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_mst,1l) on <var_mst:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var65 = var_mst + 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_mst = var59;
{
{ /* Inline kernel#Int#+ (var_ost,1l) on <var_ost:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var68 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var72 = var_ost + 1l;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_ost = var66;
{
var73 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var73;
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var76 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var80 = var_mbt < var_obt;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#* for (self: FlatString, Int): String */
val* core___core__FlatString___core__abstract_text__String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_mybtlen /* var mybtlen: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_new_bytelen /* var new_bytelen: Int */;
long var6 /* : Int */;
long var_mylen /* var mylen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var_newlen /* var newlen: Int */;
char* var14 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var15 /* : Int */;
long var_fb /* var fb: Int */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
char* var24 /* : NativeString */;
char* var26 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_offset /* var offset: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
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
val* var50 /* : FlatString */;
var_i = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_mybtlen = var1;
{
{ /* Inline kernel#Int#* (var_mybtlen,var_i) on <var_mybtlen:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 735);
fatal_exit(1);
}
var5 = var_mybtlen * var_i;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_new_bytelen = var2;
var6 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var6;
{
{ /* Inline kernel#Int#* (var_mylen,var_i) on <var_mylen:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var9 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 735);
fatal_exit(1);
}
var13 = var_mylen * var_i;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_newlen = var7;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_fb = var15;
var16 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_new_bytelen,1l) on <var_new_bytelen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var_new_bytelen + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var16,var17) on <var16:NativeString> */
var26 = (char*)nit_alloc(var17);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ns = var24;
{
{ /* Inline native#NativeString#[]= (var_ns,var_new_bytelen,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_new_bytelen]=(unsigned char)((unsigned char)0x00);
RET_LABEL27:(void)0;
}
}
var_offset = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var30 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var34 = var_i > 0l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#NativeString#copy_to (var_its,var_ns,var_mybtlen,var_fb,var_offset) on <var_its:NativeString> */
memmove(var_ns+var_offset,var_its+var_fb,var_mybtlen);
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_offset,var_mybtlen) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_mybtlen:Int> isa OTHER */
/* <var_mybtlen:Int> isa OTHER */
var38 = 1; /* easy <var_mybtlen:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_offset + var_mybtlen;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_offset = var36;
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var49 = var_i - 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_i = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var50 = NEW_core__FlatString(&type_core__FlatString);
{
core___core__FlatString___full(var50, var_ns, var_new_bytelen, 0l, var_newlen); /* Direct call flat#FlatString#full on <var50:FlatString>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#hash for (self: FlatString): Int */
long core___core__FlatString___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var_h /* var h: Int */;
long var8 /* : Int */;
long var_i /* var i: Int */;
char* var9 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
long var10 /* : Int */;
long var_max /* var max: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var49 /* : nullable Int */;
long var50 /* : Int */;
{
{ /* Inline abstract_text#Text#hash_cache (self) on <self:FlatString> */
var3 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,((val*)NULL)) on <var1:nullable Int> */
var7 = 0; /* incompatible types Int vs. null; cannot be NULL */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var_h = 5381l;
var8 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_i = var8;
var9 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var9;
{
var10 = core__flat___FlatText___last_byte(self);
}
var_max = var10;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_max) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var13 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var14 = var_i <= var_max;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#<< (var_h,5l) on <var_h:Int> */
var17 = var_h << 5l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var15,var_h) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var20 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var24 = var15 + var_h;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var_my_items,var_i) on <var_my_items:NativeString> */
var27 = (unsigned char)((int)var_my_items[var_i]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Byte#to_i (var25) on <var25:Byte> */
var30 = (long)var25;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var18,var28) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var33 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var37 = var18 + var28;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_h = var31;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_text#Text#hash_cache= (self,var_h) on <self:FlatString> */
var46 = (val*)(var_h<<2|1);
self->attrs[COLOR_core__abstract_text__Text___hash_cache].val = var46; /* _hash_cache on <self:FlatString> */
RET_LABEL45:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_text#Text#hash_cache (self) on <self:FlatString> */
var49 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 590);
fatal_exit(1);
}
var50 = (long)(var47)>>2;
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substrings for (self: FlatString): Iterator[FlatText] */
val* core___core__FlatString___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_core__flat__FlatSubstringsIter(&type_core__flat__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#target for (self: FlatStringCharReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringCharReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val; /* _target on <self:FlatStringCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 599);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#target= for (self: FlatStringCharReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val = p0; /* _target on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#curr_pos for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#curr_pos= for (self: FlatStringCharReverseIterator, Int) */
void core__flat___core__flat__FlatStringCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#is_ok for (self: FlatStringCharReverseIterator): Bool */
short int core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (self) on <self:FlatStringCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var7 = var1 >= 0l;
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
/* method flat#FlatStringCharReverseIterator#item for (self: FlatStringCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatStringCharReverseIterator#target (self) on <self:FlatStringCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val; /* _target on <self:FlatStringCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 599);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (self) on <self:FlatStringCharReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#next for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharReverseIterator */;
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
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (var_) on <var_:FlatStringCharReverseIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringCharReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos= (var_,var3) on <var_:FlatStringCharReverseIterator> */
var_->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringCharReverseIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#index for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (self) on <self:FlatStringCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#init for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#target for (self: FlatStringCharIterator): FlatString */
val* core__flat___core__flat__FlatStringCharIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 616);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#target= for (self: FlatStringCharIterator, FlatString) */
void core__flat___core__flat__FlatStringCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val = p0; /* _target on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#max for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l; /* _max on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#max= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l = p0; /* _max on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#curr_pos for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#curr_pos= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#init for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharIterator>*/
}
{
{ /* Inline flat#FlatStringCharIterator#target (self) on <self:FlatStringCharIterator> */
var2 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 616);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatString> */
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharIterator#max= (self,var4) on <self:FlatStringCharIterator> */
self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l = var4; /* _max on <self:FlatStringCharIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#is_ok for (self: FlatStringCharIterator): Bool */
short int core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline flat#FlatStringCharIterator#curr_pos (self) on <self:FlatStringCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharIterator#max (self) on <self:FlatStringCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l; /* _max on <self:FlatStringCharIterator> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
/* method flat#FlatStringCharIterator#item for (self: FlatStringCharIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatStringCharIterator#target (self) on <self:FlatStringCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 616);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharIterator#curr_pos (self) on <self:FlatStringCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#next for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharIterator */;
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
{ /* Inline flat#FlatStringCharIterator#curr_pos (var_) on <var_:FlatStringCharIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringCharIterator> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharIterator#curr_pos= (var_,var3) on <var_:FlatStringCharIterator> */
var_->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringCharIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#index for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatStringCharIterator#curr_pos (self) on <self:FlatStringCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
uint32_t core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_index = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatStringCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var_index);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharIterator(&type_core__flat__FlatStringCharIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatStringCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringCharIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringCharIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringCharIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#reverse_iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharReverseIterator(&type_core__flat__FlatStringCharReverseIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatStringCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringCharReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringCharReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#target for (self: FlatStringByteReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringByteReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val; /* _target on <self:FlatStringByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 650);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#target= for (self: FlatStringByteReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringByteReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val = p0; /* _target on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#target_items for (self: FlatStringByteReverseIterator): NativeString */
char* core__flat___core__flat__FlatStringByteReverseIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str; /* _target_items on <self:FlatStringByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#target_items= for (self: FlatStringByteReverseIterator, NativeString) */
void core__flat___core__flat__FlatStringByteReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str = p0; /* _target_items on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#curr_pos for (self: FlatStringByteReverseIterator): Int */
long core__flat___core__flat__FlatStringByteReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#curr_pos= for (self: FlatStringByteReverseIterator, Int) */
void core__flat___core__flat__FlatStringByteReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#init for (self: FlatStringByteReverseIterator) */
void core__flat___core__flat__FlatStringByteReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var2 /* : FlatString */;
val* var_tgt /* var tgt: FlatString */;
char* var3 /* : NativeString */;
val* var_ /* var : FlatStringByteReverseIterator */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringByteReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringByteReverseIterator>*/
}
{
{ /* Inline flat#FlatStringByteReverseIterator#target (self) on <self:FlatStringByteReverseIterator> */
var2 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val; /* _target on <self:FlatStringByteReverseIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 650);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_tgt = var;
var3 = var_tgt->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tgt:FlatString> */
{
{ /* Inline flat#FlatStringByteReverseIterator#target_items= (self,var3) on <self:FlatStringByteReverseIterator> */
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str = var3; /* _target_items on <self:FlatStringByteReverseIterator> */
RET_LABEL4:(void)0;
}
}
var_ = self;
{
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos (var_) on <var_:FlatStringByteReverseIterator> */
var7 = var_->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringByteReverseIterator> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = var_tgt->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tgt:FlatString> */
{
{ /* Inline kernel#Int#+ (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var5 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos= (var_,var9) on <var_:FlatStringByteReverseIterator> */
var_->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l = var9; /* _curr_pos on <var_:FlatStringByteReverseIterator> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#is_ok for (self: FlatStringByteReverseIterator): Bool */
short int core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
{
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos (self) on <self:FlatStringByteReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteReverseIterator#target (self) on <self:FlatStringByteReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val; /* _target on <self:FlatStringByteReverseIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 650);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = var4->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var4:FlatString> */
{
{ /* Inline kernel#Int#>= (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var11 = var1 >= var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#item for (self: FlatStringByteReverseIterator): Byte */
unsigned char core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline flat#FlatStringByteReverseIterator#target_items (self) on <self:FlatStringByteReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str; /* _target_items on <self:FlatStringByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos (self) on <self:FlatStringByteReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = (unsigned char)((int)var1[var4]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#next for (self: FlatStringByteReverseIterator) */
void core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringByteReverseIterator */;
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
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos (var_) on <var_:FlatStringByteReverseIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringByteReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos= (var_,var3) on <var_:FlatStringByteReverseIterator> */
var_->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringByteReverseIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#index for (self: FlatStringByteReverseIterator): Int */
long core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
{
{ /* Inline flat#FlatStringByteReverseIterator#curr_pos (self) on <self:FlatStringByteReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteReverseIterator#target (self) on <self:FlatStringByteReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val; /* _target on <self:FlatStringByteReverseIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 650);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = var4->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var4:FlatString> */
{
{ /* Inline kernel#Int#- (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var11 = var1 - var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#target for (self: FlatStringByteIterator): FlatString */
val* core__flat___core__flat__FlatStringByteIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val; /* _target on <self:FlatStringByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 676);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#target= for (self: FlatStringByteIterator, FlatString) */
void core__flat___core__flat__FlatStringByteIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val = p0; /* _target on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#target_items for (self: FlatStringByteIterator): NativeString */
char* core__flat___core__flat__FlatStringByteIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str; /* _target_items on <self:FlatStringByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#target_items= for (self: FlatStringByteIterator, NativeString) */
void core__flat___core__flat__FlatStringByteIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str = p0; /* _target_items on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#curr_pos for (self: FlatStringByteIterator): Int */
long core__flat___core__flat__FlatStringByteIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#curr_pos= for (self: FlatStringByteIterator, Int) */
void core__flat___core__flat__FlatStringByteIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#init for (self: FlatStringByteIterator) */
void core__flat___core__flat__FlatStringByteIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var2 /* : FlatString */;
val* var_tgt /* var tgt: FlatString */;
char* var3 /* : NativeString */;
val* var_ /* var : FlatStringByteIterator */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringByteIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringByteIterator>*/
}
{
{ /* Inline flat#FlatStringByteIterator#target (self) on <self:FlatStringByteIterator> */
var2 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val; /* _target on <self:FlatStringByteIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 676);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_tgt = var;
var3 = var_tgt->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tgt:FlatString> */
{
{ /* Inline flat#FlatStringByteIterator#target_items= (self,var3) on <self:FlatStringByteIterator> */
self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str = var3; /* _target_items on <self:FlatStringByteIterator> */
RET_LABEL4:(void)0;
}
}
var_ = self;
{
{ /* Inline flat#FlatStringByteIterator#curr_pos (var_) on <var_:FlatStringByteIterator> */
var7 = var_->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringByteIterator> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = var_tgt->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tgt:FlatString> */
{
{ /* Inline kernel#Int#+ (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var5 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteIterator#curr_pos= (var_,var9) on <var_:FlatStringByteIterator> */
var_->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l = var9; /* _curr_pos on <var_:FlatStringByteIterator> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#is_ok for (self: FlatStringByteIterator): Bool */
short int core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
{
{ /* Inline flat#FlatStringByteIterator#curr_pos (self) on <self:FlatStringByteIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteIterator#target (self) on <self:FlatStringByteIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val; /* _target on <self:FlatStringByteIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 676);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___last_byte(var4);
}
{
{ /* Inline kernel#Int#<= (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var11 = var1 <= var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#item for (self: FlatStringByteIterator): Byte */
unsigned char core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline flat#FlatStringByteIterator#target_items (self) on <self:FlatStringByteIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str; /* _target_items on <self:FlatStringByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteIterator#curr_pos (self) on <self:FlatStringByteIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = (unsigned char)((int)var1[var4]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#next for (self: FlatStringByteIterator) */
void core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringByteIterator */;
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
{ /* Inline flat#FlatStringByteIterator#curr_pos (var_) on <var_:FlatStringByteIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringByteIterator> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteIterator#curr_pos= (var_,var3) on <var_:FlatStringByteIterator> */
var_->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringByteIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#index for (self: FlatStringByteIterator): Int */
long core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
{
{ /* Inline flat#FlatStringByteIterator#curr_pos (self) on <self:FlatStringByteIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringByteIterator#target (self) on <self:FlatStringByteIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val; /* _target on <self:FlatStringByteIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 676);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = var4->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var4:FlatString> */
{
{ /* Inline kernel#Int#- (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var11 = var1 - var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#[] for (self: FlatStringByteView, Int): Byte */
unsigned char core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var_target /* var target: FlatString */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_ind /* var ind: Int */;
char* var23 /* : NativeString */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
var_index = p0;
var1 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatStringByteView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 708);
fatal_exit(1);
}
var_target = var1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var6 = var_index >= 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = var_target->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_target:FlatString> */
{
{ /* Inline kernel#Int#< (var_index,var7) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_index < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var2 = var8;
} else {
var2 = var_;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 709);
fatal_exit(1);
}
var15 = var_target->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_target:FlatString> */
{
{ /* Inline kernel#Int#+ (var_index,var15) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var_index + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ind = var16;
var23 = var_target->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_target:FlatString> */
{
{ /* Inline native#NativeString#[] (var23,var_ind) on <var23:NativeString> */
var26 = (unsigned char)((int)var23[var_ind]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#iterator_from for (self: FlatStringByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringByteIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringByteIterator(&type_core__flat__FlatStringByteIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:FlatStringByteView> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatStringByteView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringByteIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringByteIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringByteIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#reverse_iterator_from for (self: FlatStringByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringByteReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringByteReverseIterator(&type_core__flat__FlatStringByteReverseIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:FlatStringByteView> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatStringByteView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringByteReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Buffer#new for (self: Buffer): Buffer */
val* core__flat___Buffer___new(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void(*)(val* self))(var1->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Buffer#with_cap for (self: Buffer, Int): Buffer */
val* core__flat___Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
long var_i /* var i: Int */;
val* var1 /* : FlatBuffer */;
var_i = p0;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
core___core__FlatBuffer___with_capacity(var1, var_i); /* Direct call flat#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#chars for (self: FlatBuffer): Sequence[Char] */
val* core___core__FlatBuffer___core__abstract_text__Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : FlatBufferCharView */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___chars].val != NULL; /* _chars on <self:FlatBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatBuffer___chars].val; /* _chars on <self:FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 731);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatBufferCharView(&type_core__flat__FlatBufferCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatBufferCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatBufferCharView>*/
}
self->attrs[COLOR_core__flat__FlatBuffer___chars].val = var3; /* _chars on <self:FlatBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#bytes for (self: FlatBuffer): SequenceRead[Byte] */
val* core___core__FlatBuffer___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : FlatBufferByteView */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___bytes].val != NULL; /* _bytes on <self:FlatBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatBuffer___bytes].val; /* _bytes on <self:FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 733);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatBufferByteView(&type_core__flat__FlatBufferByteView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var3, self); /* target= on <var3:FlatBufferByteView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatBufferByteView>*/
}
self->attrs[COLOR_core__flat__FlatBuffer___bytes].val = var3; /* _bytes on <self:FlatBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#capacity for (self: FlatBuffer): Int */
long core___core__FlatBuffer___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#capacity= for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#real_items for (self: FlatBuffer): NativeString */
char* core___core__FlatBuffer___real_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___real_items].str; /* _real_items on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#real_items= for (self: FlatBuffer, NativeString) */
void core___core__FlatBuffer___real_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBuffer___real_items].str = p0; /* _real_items on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#substrings for (self: FlatBuffer): Iterator[FlatText] */
val* core___core__FlatBuffer___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_core__flat__FlatSubstringsIter(&type_core__flat__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#reset for (self: FlatBuffer) */
void core___core__FlatBuffer___reset(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
long var3 /* : Int */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
var = NULL/*special!*/;
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var,var1) on <var:NativeString> */
var6 = (char*)nit_alloc(var1);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nns = var4;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#!= (var7,0l) on <var7:Int> */
var10 = var7 == 0l;
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var12 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var13 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#copy_to (var12,var_nns,var13,0l,0l) on <var12:NativeString> */
memmove(var_nns+0l,var12+0l,var13);
RET_LABEL14:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_nns; /* _items on <self:FlatBuffer> */
{
{ /* Inline abstract_text#Buffer#written= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:FlatBuffer> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#rshift_bytes for (self: FlatBuffer, Int, Int) */
void core___core__FlatBuffer___rshift_bytes(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_len /* var len: Int */;
char* var /* : NativeString */;
char* var_oit /* var oit: NativeString */;
char* var1 /* : NativeString */;
char* var_nit /* var nit: NativeString */;
long var2 /* : Int */;
long var_bt /* var bt: Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
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
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
long var38 /* : Int */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
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
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_oit = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_nit = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bt = var2;
{
{ /* Inline kernel#Int#+ (var_bt,var_len) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var5 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var_bt + var_len;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var9 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var16 = var3 > var7;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var19 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var17,2l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var22 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 735);
fatal_exit(1);
}
var26 = var17 * 2l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var20,2l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var29 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var33 = var20 + 2l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline flat#FlatBuffer#capacity= (self,var27) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var27; /* _capacity on <self:FlatBuffer> */
RET_LABEL34:(void)0;
}
}
var35 = NULL/*special!*/;
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var38 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var35,var36) on <var35:NativeString> */
var41 = (char*)nit_alloc(var36);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_nit = var39;
{
{ /* Inline native#NativeString#copy_to (var_oit,var_nit,0l,0l,var_from) on <var_oit:NativeString> */
memmove(var_nit+var_from,var_oit+0l,0l);
RET_LABEL42:(void)0;
}
}
} else {
}
{
{ /* Inline kernel#Int#- (var_bt,var_from) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var45 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var49 = var_bt - var_from;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var52 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_from + var_len;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_oit,var_nit,var43,var_from,var50) on <var_oit:NativeString> */
memmove(var_nit+var50,var_oit+var_from,var43);
RET_LABEL57:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#lshift_bytes for (self: FlatBuffer, Int, Int) */
void core___core__FlatBuffer___lshift_bytes(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_len /* var len: Int */;
char* var /* : NativeString */;
char* var_it /* var it: NativeString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var1,var_from) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var4 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var5 = var1 - var_from;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var8 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var12 = var_from - var_len;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_it,var_it,var2,var_from,var6) on <var_it:NativeString> */
memmove(var_it+var6,var_it+var_from,var2);
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#[]= for (self: FlatBuffer, Int, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(val* self, long p0, uint32_t p1) {
long var_index /* var index: Int */;
uint32_t var_item /* var item: Char */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
char* var21 /* : NativeString */;
char* var_it /* var it: NativeString */;
long var22 /* : Int */;
long var_ip /* var ip: Int */;
uint32_t var23 /* : Char */;
uint32_t var_c /* var c: Char */;
long var24 /* : Int */;
long var_clen /* var clen: Int */;
long var25 /* : Int */;
long var_itemlen /* var itemlen: Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_size_diff /* var size_diff: Int */;
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
long var61 /* : Int */;
long var63 /* : Int */;
val* var_64 /* var : FlatBuffer */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
var5 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#<= (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var12 = var_index <= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
} else {
var = var_;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 784);
fatal_exit(1);
}
{
{ /* Inline abstract_text#Buffer#written (self) on <self:FlatBuffer> */
var15 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:FlatBuffer> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
{
core___core__FlatBuffer___reset(self); /* Direct call flat#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
{
{ /* Inline abstract_text#Buffer#is_dirty= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s = 1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
var17 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(self, var_item); /* Direct call flat#FlatBuffer#add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var21;
{
var22 = core___core__NativeString___char_to_byte_index(var_it, var_index);
}
var_ip = var22;
{
var23 = core___core__NativeString___char_at(var_it, var_ip);
}
var_c = var23;
{
var24 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var24;
{
var25 = core__abstract_text___Char___u8char_len(var_item);
}
var_itemlen = var25;
{
{ /* Inline kernel#Int#- (var_itemlen,var_clen) on <var_itemlen:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var28 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var32 = var_itemlen - var_clen;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_size_diff = var26;
{
{ /* Inline kernel#Int#> (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var35 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var39 = var_size_diff > 0l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel#Int#+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var42 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var46 = var_ip + var_clen;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
core___core__FlatBuffer___rshift_bytes(self, var40, var_size_diff); /* Direct call flat#FlatBuffer#rshift_bytes on <self:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Int#< (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var49 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_size_diff < 0l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline kernel#Int#+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var56 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var_ip + var_clen;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#unary - (var_size_diff) on <var_size_diff:Int> */
var63 = -var_size_diff;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
core___core__FlatBuffer___lshift_bytes(self, var54, var61); /* Direct call flat#FlatBuffer#lshift_bytes on <self:FlatBuffer>*/
}
} else {
}
}
var_64 = self;
var65 = var_64->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_64:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var65,var_size_diff) on <var65:Int> */
/* Covariant cast for argument 0 (i) <var_size_diff:Int> isa OTHER */
/* <var_size_diff:Int> isa OTHER */
var68 = 1; /* easy <var_size_diff:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var72 = var65 + var_size_diff;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_64->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var66; /* _bytelen on <var_64:FlatBuffer> */
{
core__flat___NativeString___set_char_at(var_it, var_ip, var_item); /* Direct call flat#NativeString#set_char_at on <var_it:NativeString>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#add for (self: FlatBuffer, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var4 /* : Int */;
long var_clen /* var clen: Int */;
long var5 /* : Int */;
long var_bt /* var bt: Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : NativeString */;
val* var_ /* var : FlatBuffer */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var_19 /* var : FlatBuffer */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
var_c = p0;
{
{ /* Inline abstract_text#Buffer#written (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:FlatBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__FlatBuffer___reset(self); /* Direct call flat#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
{
{ /* Inline abstract_text#Buffer#is_dirty= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s = 1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL3:(void)0;
}
}
{
var4 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var4;
var5 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bt = var5;
{
{ /* Inline kernel#Int#+ (var_bt,var_clen) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var8 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var_bt + var_clen;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(self, var6); /* Direct call flat#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
var10 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
core__flat___NativeString___set_char_at(var10, var_bt, var_c); /* Direct call flat#NativeString#set_char_at on <var10:NativeString>*/
}
var_ = self;
var11 = var_->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var11,var_clen) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var14 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var11 + var_clen;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var12; /* _bytelen on <var_:FlatBuffer> */
var_19 = self;
var20 = var_19->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_19:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var27 = var20 + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_19->attrs[COLOR_core__abstract_text__FlatText___length].l = var21; /* _length on <var_19:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#empty for (self: FlatBuffer): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = core__flat___Buffer___new(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#enlarge for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var2 /* : Int */;
long var_c /* var c: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var29 /* : Int */;
long var_bln /* var bln: Int */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
char* var38 /* : NativeString */;
char* var40 /* : NativeString */;
char* var_a /* var a: NativeString */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
char* var48 /* : NativeString */;
char* var_it /* var it: NativeString */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
var_cap = p0;
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_c = var;
{
{ /* Inline kernel#Int#<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var5 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var_cap <= var_c;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline kernel#Int#<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var9 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var13 = var_c <= var_cap;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline kernel#Int#* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var16 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 735);
fatal_exit(1);
}
var20 = var_c * 2l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,2l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var23 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var27 = var14 + 2l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_c = var21;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_text#Buffer#written= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:FlatBuffer> */
RET_LABEL28:(void)0;
}
}
var29 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var29;
var30 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_c,1l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var37 = var_c + 1l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var30,var31) on <var30:NativeString> */
var40 = (char*)nit_alloc(var31);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_a = var38;
{
{ /* Inline kernel#Int#> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var43 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var47 = var_bln > 0l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
var48 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var48;
{
{ /* Inline kernel#Int#> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var51 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var55 = var_bln > 0l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline native#NativeString#copy_to (var_it,var_a,var_bln,0l,0l) on <var_it:NativeString> */
memmove(var_a+0l,var_it+0l,var_bln);
RET_LABEL56:(void)0;
}
}
} else {
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
{
{ /* Inline flat#FlatBuffer#capacity= (self,var_c) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var_c; /* _capacity on <self:FlatBuffer> */
RET_LABEL57:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#to_s for (self: FlatBuffer): String */
val* core___core__FlatBuffer___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
long var2 /* : Int */;
long var_bln /* var bln: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
{
{ /* Inline abstract_text#Buffer#written= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 1; /* _written on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var2;
{
{ /* Inline kernel#Int#== (var_bln,0l) on <var_bln:Int> */
var5 = var_bln == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var6 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var6,1l) on <var6:NativeString> */
var9 = (char*)nit_alloc(1l);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var7; /* _items on <self:FlatBuffer> */
} else {
}
var10 = NEW_core__FlatString(&type_core__FlatString);
var11 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
core___core__FlatString___full(var10, var11, var_bln, 0l, var12); /* Direct call flat#FlatString#full on <var10:FlatString>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#to_cstring for (self: FlatBuffer): NativeString */
char* core___core__FlatBuffer___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_bln /* var bln: Int */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
char* var_new_native /* var new_native: NativeString */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
char* var22 /* : NativeString */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
{
{ /* Inline abstract_text#Buffer#is_dirty (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s; /* _is_dirty on <self:FlatBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var4;
var5 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_bln,1l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var_bln + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var5,var6) on <var5:NativeString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_new_native = var10;
{
{ /* Inline native#NativeString#[]= (var_new_native,var_bln,((unsigned char)0x00)) on <var_new_native:NativeString> */
var_new_native[var_bln]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
var14 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#> (var14,0l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var21 = var14 > 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#copy_to (var22,var_new_native,var_bln,0l,0l) on <var22:NativeString> */
memmove(var_new_native+0l,var22+0l,var_bln);
RET_LABEL23:(void)0;
}
}
} else {
}
{
{ /* Inline flat#FlatBuffer#real_items= (self,var_new_native) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___real_items].str = var_new_native; /* _real_items on <self:FlatBuffer> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_text#Buffer#is_dirty= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s = 0; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL25:(void)0;
}
}
} else {
}
{
{ /* Inline flat#FlatBuffer#real_items (self) on <self:FlatBuffer> */
var28 = self->attrs[COLOR_core__flat__FlatBuffer___real_items].str; /* _real_items on <self:FlatBuffer> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#init for (self: FlatBuffer) */
void core___core__FlatBuffer___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#with_infos for (self: FlatBuffer, NativeString, Int, Int, Int) */
void core___core__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_capacity /* var capacity: Int */;
long var_bytelen /* var bytelen: Int */;
long var_length /* var length: Int */;
{
{ /* Inline flat#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_capacity = p1;
var_bytelen = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatBuffer> */
{
{ /* Inline flat#FlatBuffer#capacity= (self,var_capacity) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var_capacity; /* _capacity on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_bytelen; /* _bytelen on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#from for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
char* var /* : NativeString */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
short int var6 /* : Bool */;
int cltype;
int idtype;
char* var7 /* : NativeString */;
val* var8 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : Iterator[FlatText] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_i /* var i: FlatText */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name;
char* var16 /* : NativeString */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
{
{ /* Inline flat#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_s = p0;
var = NULL/*special!*/;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
{
{ /* Inline native#NativeString#new (var,var2) on <var:NativeString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var3; /* _items on <self:FlatBuffer> */
/* <var_s:Text> isa FlatText */
cltype = type_core__FlatText.color;
idtype = type_core__FlatText.id;
if(cltype >= var_s->type->table_size) {
var6 = 0;
} else {
var6 = var_s->type->type_table[cltype] == idtype;
}
if (var6){
var7 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var7; /* _items on <self:FlatBuffer> */
} else {
{
var8 = core___core__FlatBuffer___core__abstract_text__Text__substrings(self);
}
var_ = var8;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:Iterator[FlatText]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:Iterator[FlatText]>*/
}
var_i = var12;
/* <var_i:FlatText> isa FlatString */
cltype14 = type_core__FlatString.color;
idtype15 = type_core__FlatString.id;
if(cltype14 >= var_i->type->table_size) {
var13 = 0;
} else {
var13 = var_i->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 891);
fatal_exit(1);
}
var16 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
var17 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var18 = var_i->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_i:FlatText> */
{
{ /* Inline native#NativeString#copy_to (var16,var17,var18,0l,0l) on <var16:NativeString> */
memmove(var17+0l,var16+0l,var18);
RET_LABEL19:(void)0;
}
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:Iterator[FlatText]>*/
}
}
{
var20 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var20; /* _bytelen on <self:FlatBuffer> */
{
var21 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var21; /* _length on <self:FlatBuffer> */
var22 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var22; /* _capacity on <self:FlatBuffer> */
{
{ /* Inline abstract_text#Buffer#written= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 1; /* _written on <self:FlatBuffer> */
RET_LABEL23:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#with_capacity for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
short int var /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
{
{ /* Inline flat#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_cap = p0;
{
{ /* Inline kernel#Int#>= (var_cap,0l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var4 = var_cap >= 0l;
var = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 902);
fatal_exit(1);
}
var5 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_cap,1l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var_cap + 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var5,var6) on <var5:NativeString> */
var15 = (char*)nit_alloc(var6);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var13; /* _items on <self:FlatBuffer> */
{
{ /* Inline flat#FlatBuffer#capacity= (self,var_cap) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var_cap; /* _capacity on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = 0l; /* _bytelen on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#append for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___core__abstract_text__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
long var2 /* : Int */;
long var_sl /* var sl: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_nln /* var nln: Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
char* var11 /* : NativeString */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
long var14 /* : Int */;
val* var16 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[FlatText] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_i /* var i: FlatText */;
val* var_21 /* var : FlatBuffer */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
var_s = p0;
{
var = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_s); /* is_empty on <var_s:Text>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text#Buffer#is_dirty= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s = 1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
var_sl = var2;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var3,var_sl) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var6 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 + var_sl;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nln = var4;
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(self, var_nln); /* Direct call flat#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
/* <var_s:Text> isa FlatText */
cltype9 = type_core__FlatText.color;
idtype10 = type_core__FlatText.id;
if(cltype9 >= var_s->type->table_size) {
var8 = 0;
} else {
var8 = var_s->type->type_table[cltype9] == idtype10;
}
if (var8){
var11 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
var13 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:Text(FlatText)>*/
}
var14 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#copy_to (var11,var12,var_sl,var13,var14) on <var11:NativeString> */
memmove(var12+var14,var11+var13,var_sl);
RET_LABEL15:(void)0;
}
}
} else {
{
var16 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_ = var16;
{
var17 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[FlatText]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[FlatText]>*/
}
var_i = var20;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(self, var_i); /* Direct call flat#FlatBuffer#append on <self:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[FlatText]>*/
}
goto RET_LABEL;
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_nln; /* _bytelen on <self:FlatBuffer> */
var_21 = self;
var22 = var_21->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_21:FlatBuffer> */
{
{ /* Inline abstract_text#FlatText#length (var_s) on <var_s:Text(FlatText)> */
var25 = var_s->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_s:Text(FlatText)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var22,var23) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var28 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var22 + var23;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_21->attrs[COLOR_core__abstract_text__FlatText___length].l = var26; /* _length on <var_21:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#substring for (self: FlatBuffer, Int, Int): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : Buffer */;
val* var43 /* : Buffer */;
char* var44 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var45 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var_byteto /* var byteto: Int */;
uint32_t var61 /* : Char */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var_byte_length /* var byte_length: Int */;
char* var91 /* : NativeString */;
char* var92 /* : NativeString */;
char* var94 /* : NativeString */;
char* var_r_items /* var r_items: NativeString */;
val* var96 /* : FlatBuffer */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var4 = var_count >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 937);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_from < 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var_from = 0l;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var14 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var_from + var_count;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var19 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#> (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var26 = var12 > var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var27,var_from) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var30 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var34 = var27 - var_from;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_count = var28;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var41 = var_count <= 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = NEW_core__Buffer(&type_core__Buffer);
{
var43 = core__flat___Buffer___new(var42);
}
var = var43;
goto RET_LABEL;
} else {
}
var44 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_its = var44;
{
var45 = core___core__NativeString___char_to_byte_index(var_its, var_from);
}
var_bytefrom = var45;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var48 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var52 = var_count + var_from;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var46,1l) on <var46:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var59 = var46 - 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var60 = core___core__NativeString___char_to_byte_index(var_its, var53);
}
var_byteto = var60;
{
var61 = core___core__NativeString___char_at(var_its, var_byteto);
}
{
var62 = core__abstract_text___Char___u8char_len(var61);
}
{
{ /* Inline kernel#Int#- (var62,1l) on <var62:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var69 = var62 - 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_byteto,var63) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var72 = 1; /* easy <var63:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var76 = var_byteto + var63;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_byteto = var70;
{
{ /* Inline kernel#Int#- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var79 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var83 = var_byteto - var_bytefrom;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var77,1l) on <var77:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var86 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var90 = var77 + 1l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_byte_length = var84;
var91 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var91,var_byte_length) on <var91:NativeString> */
var94 = (char*)nit_alloc(var_byte_length);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_r_items = var92;
{
{ /* Inline native#NativeString#copy_to (var_its,var_r_items,var_byte_length,var_bytefrom,0l) on <var_its:NativeString> */
memmove(var_r_items+0l,var_its+var_bytefrom,var_byte_length);
RET_LABEL95:(void)0;
}
}
var96 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
core___core__FlatBuffer___with_infos(var96, var_r_items, var_byte_length, var_byte_length, var_count); /* Direct call flat#FlatBuffer#with_infos on <var96:FlatBuffer>*/
}
var = var96;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#target for (self: FlatBufferByteReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferByteReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val; /* _target on <self:FlatBufferByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 984);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#target= for (self: FlatBufferByteReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferByteReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val = p0; /* _target on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#target_items for (self: FlatBufferByteReverseIterator): NativeString */
char* core__flat___core__flat__FlatBufferByteReverseIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str; /* _target_items on <self:FlatBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#target_items= for (self: FlatBufferByteReverseIterator, NativeString) */
void core__flat___core__flat__FlatBufferByteReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str = p0; /* _target_items on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#curr_pos for (self: FlatBufferByteReverseIterator): Int */
long core__flat___core__flat__FlatBufferByteReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#curr_pos= for (self: FlatBufferByteReverseIterator, Int) */
void core__flat___core__flat__FlatBufferByteReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#init for (self: FlatBufferByteReverseIterator) */
void core__flat___core__flat__FlatBufferByteReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
val* var2 /* : FlatBuffer */;
char* var3 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferByteReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferByteReverseIterator>*/
}
{
{ /* Inline flat#FlatBufferByteReverseIterator#target (self) on <self:FlatBufferByteReverseIterator> */
var2 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val; /* _target on <self:FlatBufferByteReverseIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 984);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var:FlatBuffer> */
{
{ /* Inline flat#FlatBufferByteReverseIterator#target_items= (self,var3) on <self:FlatBufferByteReverseIterator> */
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str = var3; /* _target_items on <self:FlatBufferByteReverseIterator> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#index for (self: FlatBufferByteReverseIterator): Int */
long core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatBufferByteReverseIterator#curr_pos (self) on <self:FlatBufferByteReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#is_ok for (self: FlatBufferByteReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline flat#FlatBufferByteReverseIterator#curr_pos (self) on <self:FlatBufferByteReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var7 = var1 >= 0l;
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
/* method flat#FlatBufferByteReverseIterator#item for (self: FlatBufferByteReverseIterator): Byte */
unsigned char core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline flat#FlatBufferByteReverseIterator#target_items (self) on <self:FlatBufferByteReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str; /* _target_items on <self:FlatBufferByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferByteReverseIterator#curr_pos (self) on <self:FlatBufferByteReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = (unsigned char)((int)var1[var4]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#next for (self: FlatBufferByteReverseIterator) */
void core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferByteReverseIterator */;
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
{ /* Inline flat#FlatBufferByteReverseIterator#curr_pos (var_) on <var_:FlatBufferByteReverseIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferByteReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBufferByteReverseIterator#curr_pos= (var_,var3) on <var_:FlatBufferByteReverseIterator> */
var_->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferByteReverseIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferByteView#[] for (self: FlatBufferByteView, Int): Byte */
unsigned char core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
char* var4 /* : NativeString */;
unsigned char var5 /* : Byte */;
unsigned char var7 /* : Byte */;
var_index = p0;
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:FlatBufferByteView> */
var3 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatBufferByteView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = var1->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
{
{ /* Inline native#NativeString#[] (var4,var_index) on <var4:NativeString> */
var7 = (unsigned char)((int)var4[var_index]);
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
/* method flat#FlatBufferByteView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteView#iterator_from for (self: FlatBufferByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferByteIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferByteIterator(&type_core__flat__FlatBufferByteIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:FlatBufferByteView> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatBufferByteView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferByteIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferByteIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteView#reverse_iterator_from for (self: FlatBufferByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferByteReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferByteReverseIterator(&type_core__flat__FlatBufferByteReverseIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:FlatBufferByteView> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatBufferByteView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferByteReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#target for (self: FlatBufferByteIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferByteIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val; /* _target on <self:FlatBufferByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1018);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#target= for (self: FlatBufferByteIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferByteIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val = p0; /* _target on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#target_items for (self: FlatBufferByteIterator): NativeString */
char* core__flat___core__flat__FlatBufferByteIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str; /* _target_items on <self:FlatBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#target_items= for (self: FlatBufferByteIterator, NativeString) */
void core__flat___core__flat__FlatBufferByteIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str = p0; /* _target_items on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#curr_pos for (self: FlatBufferByteIterator): Int */
long core__flat___core__flat__FlatBufferByteIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#curr_pos= for (self: FlatBufferByteIterator, Int) */
void core__flat___core__flat__FlatBufferByteIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#init for (self: FlatBufferByteIterator) */
void core__flat___core__flat__FlatBufferByteIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
val* var2 /* : FlatBuffer */;
char* var3 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferByteIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferByteIterator>*/
}
{
{ /* Inline flat#FlatBufferByteIterator#target (self) on <self:FlatBufferByteIterator> */
var2 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val; /* _target on <self:FlatBufferByteIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1018);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var:FlatBuffer> */
{
{ /* Inline flat#FlatBufferByteIterator#target_items= (self,var3) on <self:FlatBufferByteIterator> */
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str = var3; /* _target_items on <self:FlatBufferByteIterator> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#index for (self: FlatBufferByteIterator): Int */
long core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatBufferByteIterator#curr_pos (self) on <self:FlatBufferByteIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#is_ok for (self: FlatBufferByteIterator): Bool */
short int core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatBuffer */;
val* var6 /* : FlatBuffer */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
{
{ /* Inline flat#FlatBufferByteIterator#curr_pos (self) on <self:FlatBufferByteIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferByteIterator#target (self) on <self:FlatBufferByteIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val; /* _target on <self:FlatBufferByteIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1018);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = var4->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var4:FlatBuffer> */
{
{ /* Inline kernel#Int#< (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var1 < var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#item for (self: FlatBufferByteIterator): Byte */
unsigned char core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline flat#FlatBufferByteIterator#target_items (self) on <self:FlatBufferByteIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str; /* _target_items on <self:FlatBufferByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferByteIterator#curr_pos (self) on <self:FlatBufferByteIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = (unsigned char)((int)var1[var4]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#next for (self: FlatBufferByteIterator) */
void core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferByteIterator */;
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
{ /* Inline flat#FlatBufferByteIterator#curr_pos (var_) on <var_:FlatBufferByteIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferByteIterator> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBufferByteIterator#curr_pos= (var_,var3) on <var_:FlatBufferByteIterator> */
var_->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferByteIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#target for (self: FlatBufferCharReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val; /* _target on <self:FlatBufferCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1039);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#target= for (self: FlatBufferCharReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val = p0; /* _target on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#curr_pos for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#curr_pos= for (self: FlatBufferCharReverseIterator, Int) */
void core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#index for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (self) on <self:FlatBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#is_ok for (self: FlatBufferCharReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (self) on <self:FlatBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var7 = var1 >= 0l;
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
/* method flat#FlatBufferCharReverseIterator#item for (self: FlatBufferCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatBufferCharReverseIterator#target (self) on <self:FlatBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val; /* _target on <self:FlatBufferCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1039);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (self) on <self:FlatBufferCharReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#next for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharReverseIterator */;
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
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (var_) on <var_:FlatBufferCharReverseIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferCharReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos= (var_,var3) on <var_:FlatBufferCharReverseIterator> */
var_->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferCharReverseIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#init for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
uint32_t core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_index = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var_index);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_index /* var index: Int */;
uint32_t var_item /* var item: Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Text */;
val* var23 /* : Text */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1060);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var9 = core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#<= (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var16 = var_index <= var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1062);
fatal_exit(1);
}
{
var17 = core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(self, var_item); /* Direct call flat#FlatBufferCharView#add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var23 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(var21, var_index, var_item); /* Direct call flat#FlatBuffer#[]= on <var21:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call flat#FlatBufferCharView#[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, uint32_t p0) {
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
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1070);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var1, var_c); /* Direct call flat#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(self, var); /* Direct call flat#FlatBufferCharView#push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
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
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1075);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var1, var_c); /* Direct call flat#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call flat#FlatBufferCharView#add on <self:SimpleCollection[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void core__flat___core__flat__FlatBufferCharView___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
val* var2 /* : Text */;
var_cap = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var2 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(var, var_cap); /* Direct call flat#FlatBuffer#enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
long var1 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var2 /* : Text */;
val* var4 /* : Text */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Text */;
val* var18 /* : Text */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var_ /* var : Collection[Char] */;
val* var27 /* : Iterator[nullable Object] */;
val* var_28 /* var : Iterator[Char] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
uint32_t var31 /* : Char */;
uint32_t var_i /* var i: Char */;
val* var32 /* : Text */;
val* var34 /* : Text */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Char] */
/* <p0:Collection[Char]> isa Collection[Char] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Char]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Char]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1085);
fatal_exit(1);
}
var_s = p0;
{
var1 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
var_s_length = var1;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline flat#FlatBuffer#capacity (var2) on <var2:Text(FlatBuffer)> */
var7 = var2->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <var2:Text(FlatBuffer)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
{
{ /* Inline kernel#Int#< (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var5 < var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var18 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = var16->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var16:Text(FlatBuffer)> */
{
{ /* Inline kernel#Int#+ (var_s_length,var19) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var26 = var_s_length + var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
core__flat___core__flat__FlatBufferCharView___enlarge(self, var20); /* Direct call flat#FlatBufferCharView#enlarge on <self:FlatBufferCharView>*/
}
} else {
}
var_ = var_s;
{
var27 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Char]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[Char]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[Char]>*/
}
var31 = (uint32_t)((long)(var30)>>2);
var_i = var31;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var34 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var32, var_i); /* Direct call flat#FlatBuffer#add on <var32:Text(FlatBuffer)>*/
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[Char]>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharIterator(&type_core__flat__FlatBufferCharIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferCharIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferCharIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#reverse_iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharReverseIterator(&type_core__flat__FlatBufferCharReverseIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferCharReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferCharReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#target for (self: FlatBufferCharIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1101);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#target= for (self: FlatBufferCharIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val = p0; /* _target on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#max for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#max= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = p0; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#curr_pos for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#curr_pos= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#init for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharIterator>*/
}
{
{ /* Inline flat#FlatBufferCharIterator#target (self) on <self:FlatBufferCharIterator> */
var2 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1101);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#max= (self,var4) on <self:FlatBufferCharIterator> */
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = var4; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#index for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#is_ok for (self: FlatBufferCharIterator): Bool */
short int core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline flat#FlatBufferCharIterator#curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#max (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
/* method flat#FlatBufferCharIterator#item for (self: FlatBufferCharIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatBufferCharIterator#target (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1101);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#next for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharIterator */;
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
{ /* Inline flat#FlatBufferCharIterator#curr_pos (var_) on <var_:FlatBufferCharIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferCharIterator> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos= (var_,var3) on <var_:FlatBufferCharIterator> */
var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferCharIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#NativeString#to_s for (self: NativeString): String */
val* core__flat___NativeString___core__abstract_text__Object__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
{
var1 = core___core__NativeString___cstring_length(self);
}
{
var2 = core__flat___NativeString___to_s_with_length(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s for (self: Object): String */
val* VIRTUAL_core__flat___NativeString___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_core__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = core__flat___NativeString___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_with_length for (self: NativeString, Int): FlatString */
val* core__flat___NativeString___to_s_with_length(char* self, long p0) {
val* var /* : FlatString */;
long var_length /* var length: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : FlatString */;
var_length = p0;
{
{ /* Inline kernel#Int#>= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1128);
fatal_exit(1);
}
{
var5 = core__flat___NativeString___clean_utf8(self, var_length);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_full for (self: NativeString, Int, Int): String */
val* core__flat___NativeString___to_s_full(char* self, long p0, long p1) {
val* var /* : String */;
long var_bytelen /* var bytelen: Int */;
long var_unilen /* var unilen: Int */;
val* var1 /* : FlatString */;
var_bytelen = p0;
var_unilen = p1;
var1 = NEW_core__FlatString(&type_core__FlatString);
{
core___core__FlatString___full(var1, self, var_bytelen, 0l, var_unilen); /* Direct call flat#FlatString#full on <var1:FlatString>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_unsafe for (self: NativeString, nullable Int): String */
val* core__flat___NativeString___to_s_unsafe(char* self, val* p0) {
val* var /* : String */;
val* var_len /* var len: nullable Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
val* var6 /* : nullable Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
var_len = p0;
if (var_len == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_len,((val*)NULL)) on <var_len:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
var5 = core___core__NativeString___cstring_length(self);
}
var6 = (val*)(var5<<2|1);
var_len = var6;
} else {
}
var7 = NEW_core__FlatString(&type_core__FlatString);
{
var8 = (long)(var_len)>>2;
core___core__FlatString___with_infos(var7, self, var8, 0l); /* Direct call flat#FlatString#with_infos on <var7:FlatString>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_with_copy for (self: NativeString): FlatString */
val* core__flat___NativeString___to_s_with_copy(char* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var_length /* var length: Int */;
val* var2 /* : FlatString */;
val* var_r /* var r: FlatString */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
val* var19 /* : FlatString */;
val* var_str /* var str: FlatString */;
{
var1 = core___core__NativeString___cstring_length(self);
}
var_length = var1;
{
var2 = core__flat___NativeString___clean_utf8(self, var_length);
}
var_r = var2;
{
{ /* Inline abstract_text#FlatText#items (var_r) on <var_r:FlatString> */
var5 = var_r->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_r:FlatString> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline native#NativeString#!= (var3,self) on <var3:NativeString> */
var8 = var3 == self;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = var_r;
goto RET_LABEL;
} else {
}
var10 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_length + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var10,var11) on <var10:NativeString> */
var17 = (char*)nit_alloc(var11);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_new_self = var15;
{
{ /* Inline native#NativeString#copy_to (self,var_new_self,var_length,0l,0l) on <self:NativeString> */
memmove(var_new_self+0l,self+0l,var_length);
RET_LABEL18:(void)0;
}
}
var19 = NEW_core__FlatString(&type_core__FlatString);
{
core___core__FlatString___with_infos(var19, var_new_self, var_length, 0l); /* Direct call flat#FlatString#with_infos on <var19:FlatString>*/
}
var_str = var19;
{
{ /* Inline native#NativeString#[]= (var_new_self,var_length,((unsigned char)0x00)) on <var_new_self:NativeString> */
var_new_self[var_length]=(unsigned char)((unsigned char)0x00);
RET_LABEL20:(void)0;
}
}
{
core___core__FlatString___to_cstring_61d(var_str, var_new_self); /* Direct call flat#FlatString#to_cstring= on <var_str:FlatString>*/
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
