#include "core__ropes.sep.0.h"
/* method ropes#Concat#chars for (self: Concat): SequenceRead[Char] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
val* var5 /* : RopeChars */;
var1 = self->attrs[COLOR_core__ropes__Concat___chars].val != NULL; /* _chars on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__Concat___chars].val; /* _chars on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 73);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__ropes__RopeChars(&type_core__ropes__RopeChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__Concat___chars].val = var3; /* _chars on <self:Concat> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#bytes for (self: Concat): SequenceRead[Byte] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : SequenceRead[Byte] */;
val* var5 /* : RopeBytes */;
var1 = self->attrs[COLOR_core__ropes__Concat___bytes].val != NULL; /* _bytes on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__Concat___bytes].val; /* _bytes on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 75);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__ropes__RopeBytes(&type_core__ropes__RopeBytes);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var5, self); /* target= on <var5:RopeBytes>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeBytes>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__Concat___bytes].val = var3; /* _bytes on <self:Concat> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#length for (self: Concat): Int */
long core__ropes___core__ropes__Concat___core__abstract_text__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#length= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___length_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___length].l = p0; /* _length on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#bytelen for (self: Concat): Int */
long core__ropes___core__ropes__Concat___core__abstract_text__Text__bytelen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___bytelen].l; /* _bytelen on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#substrings for (self: Concat): Iterator[FlatText] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeSubstrings */;
var1 = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
core__ropes___core__ropes__RopeSubstrings___from(var1, self, 0l); /* Direct call ropes#RopeSubstrings#from on <var1:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#empty for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__flat___NativeString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_cstring for (self: Concat): NativeString */
char* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
long var_len /* var len: Int */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
val* var15 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[FlatText] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_i /* var i: FlatText */;
long var20 /* : Int */;
long var_ilen /* var ilen: Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
char* var25 /* : NativeString */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat__lazy_32d_to_cstring].s; /* lazy _to_cstring on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__Concat___to_cstring].str; /* _to_cstring on <self:Concat> */
} else {
{
var5 = self->attrs[COLOR_core__ropes__Concat___bytelen].l; /* _bytelen on <self:Concat> */
var_len = var5;
var6 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var10 = var_len + 1l;
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
var_ns = var11;
{
{ /* Inline native#NativeString#[]= (var_ns,var_len,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_len]=(unsigned char)((unsigned char)0x00);
RET_LABEL14:(void)0;
}
}
var_off = 0l;
{
var15 = core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings(self);
}
var_ = var15;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[FlatText]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[FlatText]>*/
}
var_i = var19;
var20 = var_i->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_i:FlatText> */
var_ilen = var20;
/* <var_i:FlatText> isa FlatString */
cltype22 = type_core__FlatString.color;
idtype23 = type_core__FlatString.id;
if(cltype22 >= var_i->type->table_size) {
var21 = 0;
} else {
var21 = var_i->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name24 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 100);
fatal_exit(1);
}
var25 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
/* <var_i:FlatText> isa FlatString */
cltype27 = type_core__FlatString.color;
idtype28 = type_core__FlatString.id;
if(cltype27 >= var_i->type->table_size) {
var26 = 0;
} else {
var26 = var_i->type->type_table[cltype27] == idtype28;
}
if (unlikely(!var26)) {
var_class_name29 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 100);
fatal_exit(1);
}
var30 = var_i->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_i:FlatText(FlatString)> */
{
{ /* Inline native#NativeString#copy_to (var25,var_ns,var_ilen,var30,var_off) on <var25:NativeString> */
memmove(var_ns+var_off,var25+var30,var_ilen);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var34 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_off + var_ilen;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_off = var32;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[FlatText]>*/
}
var3 = var_ns;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__Concat___to_cstring].str = var3; /* _to_cstring on <self:Concat> */
var2 = var3;
self->attrs[COLOR_core__ropes__Concat__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:Concat> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#left= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___left_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___left].val = p0; /* _left on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#right= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___right_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___right].val = p0; /* _right on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#init for (self: Concat) */
void core__ropes___core__ropes__Concat___core__kernel__Object__init(val* self) {
val* var /* : String */;
val* var_l /* var l: String */;
val* var1 /* : String */;
val* var_r /* var r: String */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__Concat___core__kernel__Object__init]))(self); /* init on <self:Concat>*/
}
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 112);
fatal_exit(1);
}
var_l = var;
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 113);
fatal_exit(1);
}
var_r = var1;
{
var2 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__length]))(var_l); /* length on <var_l:String>*/
}
{
var3 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__length]))(var_r); /* length on <var_r:String>*/
}
{
{ /* Inline kernel#Int#+ (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var2 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#Concat#length= (self,var4) on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___length].l = var4; /* _length on <self:Concat> */
RET_LABEL8:(void)0;
}
}
{
var9 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_l); /* bytelen on <var_l:String>*/
}
{
var10 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_r); /* bytelen on <var_r:String>*/
}
{
{ /* Inline kernel#Int#+ (var9,var10) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var17 = var9 + var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___bytelen].l = var11; /* _bytelen on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#is_empty for (self: Concat): Bool */
short int core__ropes___core__ropes__Concat___core__abstract_text__Text__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__Concat___bytelen].l; /* _bytelen on <self:Concat> */
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
/* method ropes#Concat#* for (self: Concat, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String___42d(val* self, long p0) {
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var_j < var_;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__abstract_text__String___43d]))(var_x, self); /* + on <var_x:String>*/
}
var_x = var5;
{
var6 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var6;
}
BREAK_label: (void)0;
var = var_x;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#[] for (self: Concat, Int): Char */
uint32_t core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
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
long var14 /* : Int */;
long var_flps /* var flps: Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var41 /* : FlatString */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
uint32_t var49 /* : Char */;
val* var50 /* : FlatString */;
val* var_lf /* var lf: FlatString */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
uint32_t var59 /* : Char */;
var_i = p0;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var6 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_i,var6) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var13 = var_i <= var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 134);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var14;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_flps,var17) on <var_flps:Int> */
var22 = var_flps == var17;
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_24 = var20;
if (var20){
{
{ /* Inline kernel#Int#>= (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var27 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var31 = var_i >= var_flps;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var16 = var25;
} else {
var16 = var_24;
}
var_32 = var16;
if (var16){
var33 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_i,var33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var40 = var_i <= var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var15 = var34;
} else {
var15 = var_32;
}
if (var15){
var41 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 137);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var44 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var48 = var_i - var_flps;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
var49 = core__flat___FlatText___fetch_char_at(var41, var42);
}
var = var49;
goto RET_LABEL;
} else {
}
{
var50 = core__ropes___core__ropes__Concat___get_leaf_at(self, var_i);
}
var_lf = var50;
var51 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
{
{ /* Inline kernel#Int#- (var_i,var51) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var58 = var_i - var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
var59 = core__flat___FlatText___fetch_char_at(var_lf, var52);
}
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#get_leaf_at for (self: Concat, Int): FlatString */
val* core__ropes___core__ropes__Concat___get_leaf_at(val* self, long p0) {
val* var /* : FlatString */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var_flps /* var flps: Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
val* var24 /* : FlatString */;
val* var_s /* var s: String */;
long var_st /* var st: Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var32 /* : String */;
val* var_lft /* var lft: String */;
long var33 /* : Int */;
long var_llen /* var llen: Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var41 /* : String */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
var_pos = p0;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var1;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var6 = -1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_flps,var4) on <var_flps:Int> */
var9 = var_flps == var4;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
{ /* Inline kernel#Int#>= (var_pos,var_flps) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var13 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var14 = var_pos >= var_flps;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var3 = var11;
} else {
var3 = var_;
}
var_15 = var3;
if (var3){
var16 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_pos,var16) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var23 = var_pos <= var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var2 = var17;
} else {
var2 = var_15;
}
if (var2){
var24 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 146);
fatal_exit(1);
}
var = var24;
goto RET_LABEL;
} else {
}
var_s = self;
var_st = var_pos;
for(;;) {
/* <var_s:String> isa FlatString */
cltype26 = type_core__FlatString.color;
idtype27 = type_core__FlatString.id;
if(cltype26 >= var_s->type->table_size) {
var25 = 0;
} else {
var25 = var_s->type->type_table[cltype26] == idtype27;
}
if (var25){
goto BREAK_label;
} else {
}
/* <var_s:String> isa Concat */
cltype29 = type_core__ropes__Concat.color;
idtype30 = type_core__ropes__Concat.id;
if(cltype29 >= var_s->type->table_size) {
var28 = 0;
} else {
var28 = var_s->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name31 = var_s == NULL ? "null" : var_s->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Concat", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 152);
fatal_exit(1);
}
var_s = var_s;
var32 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 153);
fatal_exit(1);
}
var_lft = var32;
{
var33 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var33;
{
{ /* Inline kernel#Int#>= (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var36 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var40 = var_pos >= var_llen;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var41 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 156);
fatal_exit(1);
}
var_s = var41;
{
{ /* Inline kernel#Int#- (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var44 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var48 = var_pos - var_llen;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_pos = var42;
} else {
var_s = var_lft;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var51 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var55 = var_st - var_pos;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = var49; /* _flat_last_pos_start on <self:Concat> */
{
{ /* Inline kernel#Int#- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var58 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var62 = var_st - var_pos;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#length (var_s) on <var_s:String(FlatString)> */
var65 = var_s->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_s:String(FlatString)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var56,var63) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var68 = 1; /* easy <var63:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var72 = var56 + var63;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var66,1l) on <var66:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var79 = var66 - 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l = var73; /* _flat_last_pos_end on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___flat_cache].val = var_s; /* _flat_cache on <self:Concat> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#substring for (self: Concat, Int, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_ln /* var ln: Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : String */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var_end_index /* var end_index: Int */;
long var71 /* : Int */;
long var_flps /* var flps: Int */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var_ /* var : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
long var89 /* : Int */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
short int var96 /* : Bool */;
val* var97 /* : FlatString */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
long var105 /* : Int */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
const char* var_class_name110;
long var111 /* : Int */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var_lft /* var lft: String */;
long var114 /* : Int */;
long var_llen /* var llen: Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
short int var121 /* : Bool */;
long var122 /* : Int */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
long var128 /* : Int */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
short int var135 /* : Bool */;
val* var136 /* : Text */;
long var137 /* : Int */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
long var143 /* : Int */;
long var_lsublen /* var lsublen: Int */;
val* var144 /* : Text */;
val* var145 /* : String */;
long var146 /* : Int */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
long var152 /* : Int */;
val* var153 /* : Text */;
val* var154 /* : String */;
val* var155 /* : String */;
long var156 /* : Int */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
const char* var_class_name161;
long var162 /* : Int */;
val* var163 /* : Text */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var_from < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var11 = var_count + var_from;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_count = var5;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_count < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "";
var21 = core__flat___NativeString___to_s_full(var20, 0l, 0l);
var19 = var21;
varonce = var19;
}
var = var19;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
{
{ /* Inline ropes#Concat#length (self) on <self:Concat> */
var24 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ln = var22;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var27 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_count + var_from;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var25,var_ln) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var34 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var38 = var25 > var_ln;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline kernel#Int#- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var41 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var45 = var_ln - var_from;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_count = var39;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var48 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var52 = var_count <= 0l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "";
var56 = core__flat___NativeString___to_s_full(var55, 0l, 0l);
var54 = var56;
varonce53 = var54;
}
var = var54;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var59 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var63 = var_from + var_count;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var57,1l) on <var57:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var66 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var70 = var57 - 1l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_end_index = var64;
var71 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var71;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var76 = -1l;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_flps,var74) on <var_flps:Int> */
var79 = var_flps == var74;
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_ = var77;
if (var77){
{
{ /* Inline kernel#Int#>= (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var83 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var87 = var_from >= var_flps;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var73 = var81;
} else {
var73 = var_;
}
var_88 = var73;
if (var73){
var89 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_end_index,var89) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var89:Int> isa OTHER */
/* <var89:Int> isa OTHER */
var92 = 1; /* easy <var89:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var96 = var_end_index <= var89;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var72 = var90;
} else {
var72 = var_88;
}
if (var72){
var97 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 182);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var100 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var104 = var_from - var_flps;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_end_index,var_flps) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var107 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var107)) {
var_class_name110 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name110);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var111 = var_end_index - var_flps;
var105 = var111;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
{
var112 = core___core__FlatString___substring_impl(var97, var98, var_count, var105);
}
var = var112;
goto RET_LABEL;
} else {
}
var113 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 185);
fatal_exit(1);
}
var_lft = var113;
{
var114 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var114;
{
{ /* Inline kernel#Int#< (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var117 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var121 = var_from < var_llen;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (var115){
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var124 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var128 = var_from + var_count;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var122,var_llen) on <var122:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var131 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var135 = var122 < var_llen;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
if (var129){
{
var136 = ((val*(*)(val* self, long p0, long p1))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring]))(var_lft, var_from, var_count); /* substring on <var_lft:String>*/
}
var = var136;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#- (var_llen,var_from) on <var_llen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var139 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var143 = var_llen - var_from;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
var_lsublen = var137;
{
var144 = ((val*(*)(val* self, long p0))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_lft, var_from); /* substring_from on <var_lft:String>*/
}
var145 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 190);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_count,var_lsublen) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var148 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name151 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var152 = var_count - var_lsublen;
var146 = var152;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
{
var153 = ((val*(*)(val* self, long p0, long p1))(var145->class->vft[COLOR_core__abstract_text__Text__substring]))(var145, 0l, var146); /* substring on <var145:String>*/
}
{
var154 = ((val*(*)(val* self, val* p0))(var144->class->vft[COLOR_core__abstract_text__String___43d]))(var144, var153); /* + on <var144:Text(String)>*/
}
var = var154;
goto RET_LABEL;
} else {
var155 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 192);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var158 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var158)) {
var_class_name161 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name161);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var162 = var_from - var_llen;
var156 = var162;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
{
var163 = ((val*(*)(val* self, long p0, long p1))(var155->class->vft[COLOR_core__abstract_text__Text__substring]))(var155, var156, var_count); /* substring on <var155:String>*/
}
var = var163;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_upper for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 206);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__String__to_upper]))(var2); /* to_upper on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 206);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__String__to_upper]))(var4); /* to_upper on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_lower for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 208);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__String__to_lower]))(var2); /* to_lower on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 208);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__String__to_lower]))(var4); /* to_lower on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#+ for (self: Concat, Text): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String___43d(val* self, val* p0) {
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
val* var_r /* var r: String */;
long var6 /* : Int */;
long var_rlen /* var rlen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Sys */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : Concat */;
val* var23 /* : Concat */;
val* var24 /* : String */;
val* var25 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:String>*/
}
var_slen = var2;
/* <var_s:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_s->type->table_size) {
var3 = 0;
} else {
var3 = var_s->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__left_61d]))(var4, self); /* left= on <var4:Concat>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__right_61d]))(var4, var_s); /* right= on <var4:Concat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Concat>*/
}
var = var4;
goto RET_LABEL;
} else {
var5 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 216);
fatal_exit(1);
}
var_r = var5;
{
var6 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_r); /* bytelen on <var_r:String>*/
}
var_rlen = var6;
{
{ /* Inline kernel#Int#+ (var_rlen,var_slen) on <var_rlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var9 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var_rlen + var_slen;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var13 = glob_sys;
{
var14 = core__ropes___Sys___maxlen(var13);
}
{
{ /* Inline kernel#Int#> (var7,var14) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var21 = var7 > var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__left_61d]))(var22, self); /* left= on <var22:Concat>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__right_61d]))(var22, var_s); /* right= on <var22:Concat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:Concat>*/
}
var = var22;
goto RET_LABEL;
} else {
}
var23 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var24 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 219);
fatal_exit(1);
}
{
var25 = ((val*(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__abstract_text__String___43d]))(var_r, var_s); /* + on <var_r:String>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__left_61d]))(var23, var24); /* left= on <var23:Concat>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__right_61d]))(var23, var25); /* right= on <var23:Concat>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:Concat>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#balance for (self: Concat): String */
val* core__ropes___core__ropes__Concat___balance(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var_children /* var children: Array[String] */;
val* var2 /* : RopeCharIteratorPiece */;
val* var_iter /* var iter: nullable RopeCharIteratorPiece */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
val* var_rnod /* var rnod: String */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
val* var14 /* : nullable RopeCharIteratorPiece */;
val* var16 /* : nullable RopeCharIteratorPiece */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : RopeCharIteratorPiece */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var30 /* : RopeCharIteratorPiece */;
val* var31 /* : String */;
val* var32 /* : nullable RopeCharIteratorPiece */;
val* var34 /* : nullable RopeCharIteratorPiece */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_children = var1;
var2 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var2, self); /* node= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var2, 0); /* ldone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var2, 0); /* rdone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var2, ((val*)NULL)); /* prev= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RopeCharIteratorPiece>*/
}
var_iter = var2;
for(;;) {
if (var_iter == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_iter,((val*)NULL)) on <var_iter:nullable RopeCharIteratorPiece> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_iter,var_other) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var8 = var_iter == var_other;
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
goto BREAK_label;
} else {
}
{
{ /* Inline ropes#RopeCharIteratorPiece#node (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var11 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_rnod = var9;
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var12 = 0;
} else {
var12 = var_rnod->type->type_table[cltype] == idtype;
}
var13 = !var12;
if (var13){
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_children, var_rnod); /* Direct call array#AbstractArray#push on <var_children:Array[String]>*/
}
{
{ /* Inline ropes#RopeCharIteratorPiece#prev (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var16 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_iter = var14;
goto BREAK_label17;
} else {
}
{
{ /* Inline ropes#RopeCharIteratorPiece#ldone (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var20 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = !var18;
if (var21){
{
{ /* Inline ropes#RopeCharIteratorPiece#ldone= (var_iter,1) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL22:(void)0;
}
}
var23 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var24 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 258);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var23, var24); /* node= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var23, 0); /* ldone= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var23, 0); /* rdone= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var23, var_iter); /* prev= on <var23:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RopeCharIteratorPiece>*/
}
var_iter = var23;
} else {
{
{ /* Inline ropes#RopeCharIteratorPiece#rdone (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var27 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = !var25;
if (var28){
{
{ /* Inline ropes#RopeCharIteratorPiece#rdone= (var_iter,1) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL29:(void)0;
}
}
var30 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var31 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 261);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var30, var31); /* node= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var30, 0); /* ldone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var30, var_iter); /* prev= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:RopeCharIteratorPiece>*/
}
var_iter = var30;
} else {
{
{ /* Inline ropes#RopeCharIteratorPiece#prev (var_iter) on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var34 = var_iter->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_iter = var32;
}
}
BREAK_label17: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_children) on <var_children:Array[String]> */
var37 = var_children->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_children:Array[String]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core__ropes___core__ropes__Concat___recurse_balance(self, var_children, var35);
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#recurse_balance for (self: Concat, Array[String], Int): String */
val* core__ropes___core__ropes__Concat___recurse_balance(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_nodes /* var nodes: Array[String] */;
long var_len /* var len: Int */;
long var_finpos /* var finpos: Int */;
long var_stpos /* var stpos: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : Concat */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
var_nodes = p0;
var_len = p1;
var_finpos = 0l;
var_stpos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_stpos,var_len) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var3 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var_stpos < var_len;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#- (var_len,var_stpos) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_stpos:Int> isa OTHER */
/* <var_stpos:Int> isa OTHER */
var7 = 1; /* easy <var_stpos:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var11 = var_len - var_stpos;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var18 = var5 > 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var19 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var20 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, var_stpos);
}
{
{ /* Inline kernel#Int#+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var27 = var_stpos + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, var21);
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__left_61d]))(var19, var20); /* left= on <var19:Concat>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__right_61d]))(var19, var28); /* right= on <var19:Concat>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:Concat>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_nodes, var_finpos, var19); /* Direct call array#Array#[]= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_stpos,2l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var31 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var_stpos + 2l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_stpos = var29;
} else {
{
var36 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, var_stpos);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_nodes, var_finpos, var36); /* Direct call array#Array#[]= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var43 = var_stpos + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_stpos = var37;
}
{
{ /* Inline kernel#Int#+ (var_finpos,1l) on <var_finpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var_finpos + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_finpos = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_finpos,1l) on <var_finpos:Int> */
var53 = var_finpos == 1l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
var54 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_nodes, 0l);
}
var = var54;
goto RET_LABEL;
} else {
}
{
var55 = core__ropes___core__ropes__Concat___recurse_balance(self, var_nodes, var_finpos);
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#chars for (self: RopeBuffer): Sequence[Char] */
val* core___core__RopeBuffer___core__abstract_text__Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : RopeBufferChars */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___chars].val != NULL; /* _chars on <self:RopeBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__RopeBuffer___chars].val; /* _chars on <self:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 306);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__RopeBufferChars(&type_core__RopeBufferChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeBufferChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeBufferChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__RopeBuffer___chars].val = var3; /* _chars on <self:RopeBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#bytes for (self: RopeBuffer): SequenceRead[Byte] */
val* core___core__RopeBuffer___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : SequenceRead[Byte] */;
val* var5 /* : RopeBufferBytes */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val != NULL; /* _bytes on <self:RopeBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val; /* _bytes on <self:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 308);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__RopeBufferBytes(&type_core__RopeBufferBytes);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var5, self); /* target= on <var5:RopeBufferBytes>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeBufferBytes>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val = var3; /* _bytes on <self:RopeBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#str for (self: RopeBuffer): String */
val* core___core__RopeBuffer___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#str= for (self: RopeBuffer, String) */
void core___core__RopeBuffer___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___str].val = p0; /* _str on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#ns for (self: RopeBuffer): NativeString */
char* core___core__RopeBuffer___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#ns= for (self: RopeBuffer, NativeString) */
void core___core__RopeBuffer___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___ns].str = p0; /* _ns on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#rpos for (self: RopeBuffer): Int */
long core___core__RopeBuffer___rpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#rpos= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___rpos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = p0; /* _rpos on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#dumped for (self: RopeBuffer): Int */
long core___core__RopeBuffer___dumped(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#dumped= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___dumped_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l = p0; /* _dumped on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#length for (self: RopeBuffer): Int */
long core___core__RopeBuffer___core__abstract_text__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_st /* var st: Int */;
val* var4 /* : String */;
val* var6 /* : String */;
long var7 /* : Int */;
long var_len /* var len: Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
unsigned char var18 /* : Byte */;
unsigned char var20 /* : Byte */;
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
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var3 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_st = var1;
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var6 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((long(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__length]))(var4); /* length on <var4:String>*/
}
var_len = var7;
for(;;) {
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var10 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_st,var8) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_st < var8;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var17 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var15,var_st) on <var15:NativeString> */
var20 = (unsigned char)((int)var15[var_st]);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var21 = core__native___Byte___u8len(var18);
}
{
{ /* Inline kernel#Int#+ (var_st,var21) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var_st + var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_st = var22;
{
{ /* Inline kernel#Int#+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var_len + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_len = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_len;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#bytelen for (self: RopeBuffer): Int */
long core___core__RopeBuffer___core__abstract_text__Text__bytelen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#buf_size for (self: RopeBuffer): Int */
long core___core__RopeBuffer___buf_size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#buf_size= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___buf_size_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l = p0; /* _buf_size on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#substrings for (self: RopeBuffer): Iterator[FlatText] */
val* core___core__RopeBuffer___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeBufSubstringIterator */;
var1 = NEW_core__ropes__RopeBufSubstringIterator(&type_core__ropes__RopeBufSubstringIterator);
{
core__ropes___core__ropes__RopeBufSubstringIterator___from(var1, self); /* Direct call ropes#RopeBufSubstringIterator#from on <var1:RopeBufSubstringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#init for (self: RopeBuffer) */
void core___core__RopeBuffer___core__kernel__Object__init(val* self) {
char* var /* : NativeString */;
val* var1 /* : Sys */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
val* var7 /* : Sys */;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__RopeBuffer___core__kernel__Object__init]))(self); /* init on <self:RopeBuffer>*/
}
var = NULL/*special!*/;
var1 = glob_sys;
{
var2 = core__ropes___Sys___maxlen(var1);
}
{
{ /* Inline native#NativeString#new (var,var2) on <var:NativeString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var3) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___ns].str = var3; /* _ns on <self:RopeBuffer> */
RET_LABEL6:(void)0;
}
}
var7 = glob_sys;
{
var8 = core__ropes___Sys___maxlen(var7);
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (self,var8) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l = var8; /* _buf_size on <self:RopeBuffer> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l = 0l; /* _dumped on <self:RopeBuffer> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#from for (self: RopeBuffer, String) */
void core___core__RopeBuffer___from(val* self, val* p0) {
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
core___core__RopeBuffer___core__kernel__Object__init(self); /* Direct call ropes#RopeBuffer#init on <self:RopeBuffer>*/
}
var_str = p0;
{
{ /* Inline ropes#RopeBuffer#str= (self,var_str) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___str].val = var_str; /* _str on <self:RopeBuffer> */
RET_LABEL1:(void)0;
}
}
var = NULL/*special!*/;
var2 = glob_sys;
{
var3 = core__ropes___Sys___maxlen(var2);
}
{
{ /* Inline native#NativeString#new (var,var3) on <var:NativeString> */
var6 = (char*)nit_alloc(var3);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var4) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___ns].str = var4; /* _ns on <self:RopeBuffer> */
RET_LABEL7:(void)0;
}
}
var8 = glob_sys;
{
var9 = core__ropes___Sys___maxlen(var8);
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (self,var9) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l = var9; /* _buf_size on <self:RopeBuffer> */
RET_LABEL10:(void)0;
}
}
{
var11 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
self->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var11; /* _bytelen on <self:RopeBuffer> */
{
{ /* Inline ropes#RopeBuffer#dumped= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l = 0l; /* _dumped on <self:RopeBuffer> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#[] for (self: RopeBuffer, Int): Char */
uint32_t core___core__RopeBuffer___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
uint32_t var12 /* : Char */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var18 /* : String */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var_index /* var index: Int */;
char* var31 /* : NativeString */;
char* var33 /* : NativeString */;
uint32_t var34 /* : Char */;
var_i = p0;
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var3 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var4) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_i < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var11 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((uint32_t(*)(val* self, long p0))(var9->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var9, var_i); /* [] on <var9:String>*/
}
var = var12;
goto RET_LABEL;
} else {
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var15 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var18 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__Text__length]))(var16); /* length on <var16:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var19) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var26 = var_i - var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var29 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = core___core__NativeString___char_to_byte_index_cached(var13, var20, 0l, var27);
}
var_index = var30;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var33 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = core___core__NativeString___char_at(var31, var_index);
}
var = var34;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#[]= for (self: RopeBuffer, Int, Char) */
void core___core__RopeBuffer___core__abstract_text__Buffer___91d_93d_61d(val* self, long p0, uint32_t p1) {
long var_i /* var i: Int */;
uint32_t var_c /* var c: Char */;
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
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var19 /* : String */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var_28 /* var : RopeBuffer */;
long var29 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var33 /* : String */;
uint32_t var34 /* : Char */;
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
val* var50 /* : String */;
val* var52 /* : String */;
val* var_s /* var s: String */;
val* var53 /* : Text */;
val* var_l /* var l: String */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : Text */;
val* var_r /* var r: String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var66 /* : String */;
val* var68 /* : String */;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var_reali /* var reali: Int */;
char* var77 /* : NativeString */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
long var82 /* : Int */;
long var83 /* : Int */;
long var_index /* var index: Int */;
char* var84 /* : NativeString */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
long var93 /* : Int */;
long var94 /* : Int */;
long var_st_nxt /* var st_nxt: Int */;
char* var95 /* : NativeString */;
char* var97 /* : NativeString */;
uint32_t var98 /* : Char */;
uint32_t var_loc_c /* var loc_c: Char */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
long var105 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
long var_delta /* var delta: Int */;
long var114 /* : Int */;
long var116 /* : Int */;
long var117 /* : Int */;
long var119 /* : Int */;
long var120 /* : Int */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
long var126 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
short int var133 /* : Bool */;
val* var_134 /* var : RopeBuffer */;
long var135 /* : Int */;
long var137 /* : Int */;
long var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
long var144 /* : Int */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
long var149 /* : Int */;
char* var150 /* : NativeString */;
char* var152 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var153 /* : NativeString */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
long var158 /* : Int */;
long var159 /* : Int */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
long var165 /* : Int */;
long var166 /* : Int */;
long var168 /* : Int */;
char* var170 /* : NativeString */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
long var175 /* : Int */;
long var176 /* : Int */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
const char* var_class_name181;
long var182 /* : Int */;
long var183 /* : Int */;
long var184 /* : Int */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
const char* var_class_name189;
long var190 /* : Int */;
long var191 /* : Int */;
long var192 /* : Int */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
const char* var_class_name197;
long var198 /* : Int */;
long var199 /* : Int */;
long var201 /* : Int */;
long var202 /* : Int */;
short int var204 /* : Bool */;
int cltype205;
int idtype206;
const char* var_class_name207;
long var208 /* : Int */;
long var209 /* : Int */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
const char* var_class_name214;
long var215 /* : Int */;
long var218 /* : Int */;
long var220 /* : Int */;
long var221 /* : Int */;
short int var223 /* : Bool */;
int cltype224;
int idtype225;
const char* var_class_name226;
long var227 /* : Int */;
char* var228 /* : NativeString */;
char* var230 /* : NativeString */;
char* var231 /* : NativeString */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
long var236 /* : Int */;
long var237 /* : Int */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
long var243 /* : Int */;
long var244 /* : Int */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
const char* var_class_name249;
long var250 /* : Int */;
val* var_252 /* var : RopeBuffer */;
long var253 /* : Int */;
long var254 /* : Int */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
const char* var_class_name259;
long var260 /* : Int */;
val* var_261 /* var : RopeBuffer */;
long var262 /* : Int */;
long var264 /* : Int */;
long var265 /* : Int */;
short int var267 /* : Bool */;
int cltype268;
int idtype269;
const char* var_class_name270;
long var271 /* : Int */;
char* var273 /* : NativeString */;
char* var275 /* : NativeString */;
var_i = p0;
var_c = p1;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
var5 = core___core__RopeBuffer___core__abstract_text__Text__length(self);
}
{
{ /* Inline kernel#Int#<= (var_i,var5) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var12 = var_i <= var5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 391);
fatal_exit(1);
}
{
var13 = core___core__RopeBuffer___core__abstract_text__Text__length(self);
}
{
{ /* Inline kernel#Int#== (var_i,var13) on <var_i:Int> */
var16 = var_i == var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
core___core__RopeBuffer___core__abstract_text__Buffer__add(self, var_c); /* Direct call ropes#RopeBuffer#add on <self:RopeBuffer>*/
}
} else {
}
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var19 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((long(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__Text__length]))(var17); /* length on <var17:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var20) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var27 = var_i < var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var_28 = self;
var29 = var_28->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_28:RopeBuffer> */
{
var30 = core__abstract_text___Char___u8char_len(var_c);
}
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var33 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = ((uint32_t(*)(val* self, long p0))(var31->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var31, var_i); /* [] on <var31:String>*/
}
{
var35 = core__abstract_text___Char___u8char_len(var34);
}
{
{ /* Inline kernel#Int#- (var30,var35) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var42 = var30 - var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var29,var36) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var45 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var29 + var36;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_28->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var43; /* _bytelen on <var_28:RopeBuffer> */
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var52 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_s = var50;
{
var53 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, 0l, var_i); /* substring on <var_s:String>*/
}
var_l = var53;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var_i + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var54); /* substring_from on <var_s:String>*/
}
var_r = var61;
{
var62 = core__abstract_text___Char___Object__to_s(var_c);
}
{
var63 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__abstract_text__String___43d]))(var_l, var62); /* + on <var_l:String>*/
}
{
var64 = ((val*(*)(val* self, val* p0))(var63->class->vft[COLOR_core__abstract_text__String___43d]))(var63, var_r); /* + on <var63:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (self,var64) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___str].val = var64; /* _str on <self:RopeBuffer> */
RET_LABEL65:(void)0;
}
}
} else {
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var68 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = ((long(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__Text__length]))(var66); /* length on <var66:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var69) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var69:Int> isa OTHER */
/* <var69:Int> isa OTHER */
var72 = 1; /* easy <var69:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var76 = var_i - var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_reali = var70;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var79 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var82 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = core___core__NativeString___char_to_byte_index_cached(var77, var_reali, 0l, var80);
}
var_index = var83;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var86 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_reali,1l) on <var_reali:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var89 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var93 = var_reali + 1l;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
{
var94 = core___core__NativeString___char_to_byte_index_cached(var84, var87, var_reali, var_index);
}
var_st_nxt = var94;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var97 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = core___core__NativeString___char_at(var95, var_index);
}
var_loc_c = var98;
{
var99 = core__abstract_text___Char___u8char_len(var_loc_c);
}
{
var100 = core__abstract_text___Char___u8char_len(var_c);
}
{
{ /* Inline kernel#Int#!= (var99,var100) on <var99:Int> */
var103 = var99 == var100;
var104 = !var103;
var101 = var104;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
if (var101){
{
var105 = core__abstract_text___Char___u8char_len(var_c);
}
{
var106 = core__abstract_text___Char___u8char_len(var_loc_c);
}
{
{ /* Inline kernel#Int#- (var105,var106) on <var105:Int> */
/* Covariant cast for argument 0 (i) <var106:Int> isa OTHER */
/* <var106:Int> isa OTHER */
var109 = 1; /* easy <var106:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var113 = var105 - var106;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var_delta = var107;
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var116 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var119 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var114,var117) on <var114:Int> */
/* Covariant cast for argument 0 (i) <var117:Int> isa OTHER */
/* <var117:Int> isa OTHER */
var122 = 1; /* easy <var117:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var126 = var114 - var117;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var_remsp = var120;
{
{ /* Inline kernel#Int#< (var_remsp,var_delta) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var129 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var133 = var_remsp < var_delta;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
if (var127){
var_134 = self;
{
{ /* Inline ropes#RopeBuffer#buf_size (var_134) on <var_134:RopeBuffer> */
var137 = var_134->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <var_134:RopeBuffer> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var135,2l) on <var135:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var140 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 735);
fatal_exit(1);
}
var144 = var135 * 2l;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (var_134,var138) on <var_134:RopeBuffer> */
var_134->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l = var138; /* _buf_size on <var_134:RopeBuffer> */
RET_LABEL145:(void)0;
}
}
var146 = NULL/*special!*/;
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var149 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var146,var147) on <var146:NativeString> */
var152 = (char*)nit_alloc(var147);
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var_nns = var150;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var155 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var158 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_index,var156) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var156:Int> isa OTHER */
/* <var156:Int> isa OTHER */
var161 = 1; /* easy <var156:Int> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var165 = var_index - var156;
var159 = var165;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var168 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var153,var_nns,var159,var166,0l) on <var153:NativeString> */
memmove(var_nns+0l,var153+var166,var159);
RET_LABEL169:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var172 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var175 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var173,var_index) on <var173:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var178 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var178)) {
var_class_name181 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name181);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var182 = var173 - var_index;
var176 = var182;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
{
var183 = core__abstract_text___Char___u8char_len(var_loc_c);
}
{
{ /* Inline kernel#Int#- (var176,var183) on <var176:Int> */
/* Covariant cast for argument 0 (i) <var183:Int> isa OTHER */
/* <var183:Int> isa OTHER */
var186 = 1; /* easy <var183:Int> isa OTHER*/
if (unlikely(!var186)) {
var_class_name189 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name189);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var190 = var176 - var183;
var184 = var190;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
{
var191 = core__abstract_text___Char___u8char_len(var_loc_c);
}
{
{ /* Inline kernel#Int#+ (var_index,var191) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var191:Int> isa OTHER */
/* <var191:Int> isa OTHER */
var194 = 1; /* easy <var191:Int> isa OTHER*/
if (unlikely(!var194)) {
var_class_name197 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name197);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var198 = var_index + var191;
var192 = var198;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var201 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_index,var199) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var199:Int> isa OTHER */
/* <var199:Int> isa OTHER */
var204 = 1; /* easy <var199:Int> isa OTHER*/
if (unlikely(!var204)) {
var_class_name207 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name207);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var208 = var_index - var199;
var202 = var208;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var202,var_delta) on <var202:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var211 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var211)) {
var_class_name214 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name214);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var215 = var202 + var_delta;
var209 = var215;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var170,var_nns,var184,var192,var209) on <var170:NativeString> */
memmove(var_nns+var209,var170+var192,var184);
RET_LABEL216:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var_nns) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___ns].str = var_nns; /* _ns on <self:RopeBuffer> */
RET_LABEL217:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var220 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_index,var218) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var218:Int> isa OTHER */
/* <var218:Int> isa OTHER */
var223 = 1; /* easy <var218:Int> isa OTHER*/
if (unlikely(!var223)) {
var_class_name226 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name226);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var227 = var_index - var218;
var221 = var227;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
var_index = var221;
} else {
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var230 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var233 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var236 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var234,var_st_nxt) on <var234:Int> */
/* Covariant cast for argument 0 (i) <var_st_nxt:Int> isa OTHER */
/* <var_st_nxt:Int> isa OTHER */
var239 = 1; /* easy <var_st_nxt:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var243 = var234 - var_st_nxt;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_st_nxt,var_delta) on <var_st_nxt:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var246 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var246)) {
var_class_name249 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name249);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var250 = var_st_nxt + var_delta;
var244 = var250;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var228,var231,var237,var_st_nxt,var244) on <var228:NativeString> */
memmove(var231+var244,var228+var_st_nxt,var237);
RET_LABEL251:(void)0;
}
}
}
var_252 = self;
var253 = var_252->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_252:RopeBuffer> */
{
{ /* Inline kernel#Int#+ (var253,var_delta) on <var253:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var256 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var260 = var253 + var_delta;
var254 = var260;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
var_252->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var254; /* _bytelen on <var_252:RopeBuffer> */
var_261 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_261) on <var_261:RopeBuffer> */
var264 = var_261->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <var_261:RopeBuffer> */
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var262,var_delta) on <var262:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var267 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var267)) {
var_class_name270 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name270);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var271 = var262 + var_delta;
var265 = var271;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_261,var265) on <var_261:RopeBuffer> */
var_261->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = var265; /* _rpos on <var_261:RopeBuffer> */
RET_LABEL272:(void)0;
}
}
} else {
}
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var275 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
core__flat___NativeString___set_char_at(var273, var_index, var_c); /* Direct call flat#NativeString#set_char_at on <var273:NativeString>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#empty for (self: RopeBuffer): Buffer */
val* core___core__RopeBuffer___core__abstract_text__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : RopeBuffer */;
var1 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
{
core___core__RopeBuffer___core__kernel__Object__init(var1); /* Direct call ropes#RopeBuffer#init on <var1:RopeBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#substring for (self: RopeBuffer, Int, Int): Buffer */
val* core___core__RopeBuffer___core__abstract_text__Text__substring(val* self, long p0, long p1) {
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
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : Buffer */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var_subpos /* var subpos: Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : RopeBuffer */;
val* var65 /* : String */;
val* var67 /* : String */;
val* var68 /* : Text */;
val* var69 /* : String */;
val* var71 /* : String */;
val* var72 /* : Text */;
val* var_l /* var l: String */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var_rem /* var rem: Int */;
char* var80 /* : NativeString */;
char* var81 /* : NativeString */;
char* var83 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var84 /* : NativeString */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
long var89 /* : Int */;
val* var91 /* : RopeBuffer */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : String */;
char* var95 /* : NativeString */;
char* var96 /* : NativeString */;
char* var98 /* : NativeString */;
char* var_nns99 /* var nns: NativeString */;
char* var100 /* : NativeString */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
long var105 /* : Int */;
val* var107 /* : RopeBuffer */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
var_from = p0;
var_count = p1;
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var3 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
var_strlen = var4;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
var23 = core___core__RopeBuffer___core__abstract_text__Text__length(self);
}
{
{ /* Inline kernel#Int#> (var_count,var23) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var30 = var_count > var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
var31 = core___core__RopeBuffer___core__abstract_text__Text__length(self);
}
{
{ /* Inline kernel#Int#- (var31,var_from) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var34 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var38 = var31 - var_from;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_count = var32;
} else {
}
{
{ /* Inline kernel#Int#== (var_count,0l) on <var_count:Int> */
var41 = var_count == 0l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
var42 = core___core__RopeBuffer___core__abstract_text__Text__empty(self);
}
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_strlen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_strlen:Int> isa OTHER */
/* <var_strlen:Int> isa OTHER */
var45 = 1; /* easy <var_strlen:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var_from < var_strlen;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel#Int#- (var_strlen,var_from) on <var_strlen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var52 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var56 = var_strlen - var_from;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_subpos = var50;
{
{ /* Inline kernel#Int#<= (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var59 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var63 = var_count <= var_subpos;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
var64 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var67 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = ((val*(*)(val* self, long p0, long p1))(var65->class->vft[COLOR_core__abstract_text__Text__substring]))(var65, var_from, var_count); /* substring on <var65:String>*/
}
{
core___core__RopeBuffer___from(var64, var68); /* Direct call ropes#RopeBuffer#from on <var64:RopeBuffer>*/
}
var = var64;
goto RET_LABEL;
} else {
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var71 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = ((val*(*)(val* self, long p0))(var69->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var69, var_from); /* substring_from on <var69:String>*/
}
var_l = var72;
{
{ /* Inline kernel#Int#- (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var75 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var79 = var_count - var_subpos;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_rem = var73;
var80 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var80,var_rem) on <var80:NativeString> */
var83 = (char*)nit_alloc(var_rem);
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_nns = var81;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var86 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var89 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var84,var_nns,var_rem,var87,0l) on <var84:NativeString> */
memmove(var_nns+0l,var84+var87,var_rem);
RET_LABEL90:(void)0;
}
}
var91 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
{
var93 = (val*)(var_rem<<2|1);
var92 = core__flat___NativeString___to_s_unsafe(var_nns, var93);
}
{
var94 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__abstract_text__String___43d]))(var_l, var92); /* + on <var_l:String>*/
}
{
core___core__RopeBuffer___from(var91, var94); /* Direct call ropes#RopeBuffer#from on <var91:RopeBuffer>*/
}
var = var91;
goto RET_LABEL;
}
} else {
var95 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var95,var_count) on <var95:NativeString> */
var98 = (char*)nit_alloc(var_count);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_nns99 = var96;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var102 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var105 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var100,var_nns99,var_count,var103,0l) on <var100:NativeString> */
memmove(var_nns99+0l,var100+var103,var_count);
RET_LABEL106:(void)0;
}
}
var107 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
{
var109 = (val*)(var_count<<2|1);
var108 = core__flat___NativeString___to_s_unsafe(var_nns99, var109);
}
{
core___core__RopeBuffer___from(var107, var108); /* Direct call ropes#RopeBuffer#from on <var107:RopeBuffer>*/
}
var = var107;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#append for (self: RopeBuffer, Text) */
void core___core__RopeBuffer___core__abstract_text__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var_slen /* var slen: Int */;
val* var1 /* : Sys */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var_ /* var : RopeBuffer */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
char* var16 /* : NativeString */;
char* var_oits /* var oits: NativeString */;
long var17 /* : Int */;
long var_from /* var from: Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
char* var38 /* : NativeString */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
long var43 /* : Int */;
val* var_45 /* var : RopeBuffer */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
long var_brk /* var brk: Int */;
char* var65 /* : NativeString */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
long var70 /* : Int */;
val* var_72 /* var : RopeBuffer */;
long var73 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
char* var84 /* : NativeString */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
long var93 /* : Int */;
long var95 /* : Int */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
long var101 /* : Int */;
val* var103 /* : Iterator[FlatText] */;
val* var_104 /* var : Iterator[FlatText] */;
val* var105 /* : Iterator[nullable Object] */;
val* var_106 /* var : Iterator[FlatText] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_i /* var i: FlatText */;
var_s = p0;
{
var = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
var_slen = var;
var1 = glob_sys;
{
var2 = core__ropes___Sys___maxlen(var1);
}
{
{ /* Inline kernel#Int#>= (var_slen,var2) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var6 = var_slen >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
core___core__RopeBuffer___persist_buffer(self); /* Direct call ropes#RopeBuffer#persist_buffer on <self:RopeBuffer>*/
}
var_ = self;
{
{ /* Inline ropes#RopeBuffer#str (var_) on <var_:RopeBuffer> */
var9 = var_->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_:RopeBuffer> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
var11 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_core__abstract_text__String___43d]))(var7, var10); /* + on <var7:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (var_,var11) on <var_:RopeBuffer> */
var_->attrs[COLOR_core__ropes__RopeBuffer___str].val = var11; /* _str on <var_:RopeBuffer> */
RET_LABEL12:(void)0;
}
}
goto RET_LABEL;
} else {
}
/* <var_s:Text> isa FlatText */
cltype14 = type_core__FlatText.color;
idtype15 = type_core__FlatText.id;
if(cltype14 >= var_s->type->table_size) {
var13 = 0;
} else {
var13 = var_s->type->type_table[cltype14] == idtype15;
}
if (var13){
var16 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
var_oits = var16;
{
var17 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:Text(FlatText)>*/
}
var_from = var17;
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var20 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var23 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var18,var21) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var26 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var30 = var18 - var21;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_remsp = var24;
{
{ /* Inline kernel#Int#<= (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var33 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var37 = var_slen <= var_remsp;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var40 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var43 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_oits,var38,var_slen,var_from,var41) on <var_oits:NativeString> */
memmove(var38+var41,var_oits+var_from,var_slen);
RET_LABEL44:(void)0;
}
}
var_45 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_45) on <var_45:RopeBuffer> */
var48 = var_45->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <var_45:RopeBuffer> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var46,var_slen) on <var46:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var51 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var55 = var46 + var_slen;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_45,var49) on <var_45:RopeBuffer> */
var_45->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = var49; /* _rpos on <var_45:RopeBuffer> */
RET_LABEL56:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_remsp) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var59 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var63 = var_from + var_remsp;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
var64 = core___core__NativeString___find_beginning_of_char_at(var_oits, var57);
}
var_brk = var64;
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var67 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var70 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_oits,var65,var_brk,var_from,var68) on <var_oits:NativeString> */
memmove(var65+var68,var_oits+var_from,var_brk);
RET_LABEL71:(void)0;
}
}
var_72 = self;
{
{ /* Inline ropes#RopeBuffer#rpos (var_72) on <var_72:RopeBuffer> */
var75 = var_72->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <var_72:RopeBuffer> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var73,var_brk) on <var73:Int> */
/* Covariant cast for argument 0 (i) <var_brk:Int> isa OTHER */
/* <var_brk:Int> isa OTHER */
var78 = 1; /* easy <var_brk:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var82 = var73 + var_brk;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (var_72,var76) on <var_72:RopeBuffer> */
var_72->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = var76; /* _rpos on <var_72:RopeBuffer> */
RET_LABEL83:(void)0;
}
}
{
core___core__RopeBuffer___dump_buffer(self); /* Direct call ropes#RopeBuffer#dump_buffer on <self:RopeBuffer>*/
}
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var86 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var89 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var93 = var_slen - var_remsp;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_oits,var84,var87,var_brk,0l) on <var_oits:NativeString> */
memmove(var84+0l,var_oits+var_brk,var87);
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var97 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var97)) {
var_class_name100 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var101 = var_slen - var_remsp;
var95 = var101;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (self,var95) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = var95; /* _rpos on <self:RopeBuffer> */
RET_LABEL102:(void)0;
}
}
} else {
{
var103 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_104 = var103;
{
var105 = ((val*(*)(val* self))((((long)var_104&3)?class_info[((long)var_104&3)]:var_104->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_104); /* iterator on <var_104:Iterator[FlatText]>*/
}
var_106 = var105;
for(;;) {
{
var107 = ((short int(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_106); /* is_ok on <var_106:Iterator[FlatText]>*/
}
if (var107){
} else {
goto BREAK_label;
}
{
var108 = ((val*(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_106); /* item on <var_106:Iterator[FlatText]>*/
}
var_i = var108;
{
core___core__RopeBuffer___core__abstract_text__Buffer__append(self, var_i); /* Direct call ropes#RopeBuffer#append on <self:RopeBuffer>*/
}
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_106); /* next on <var_106:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_106); /* finish on <var_106:Iterator[FlatText]>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#add for (self: RopeBuffer, Char) */
void core___core__RopeBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var2 /* : Int */;
long var_rp /* var rp: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_remsp /* var remsp: Int */;
long var10 /* : Int */;
long var_cln /* var cln: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
char* var18 /* : NativeString */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var_ /* var : RopeBuffer */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
var_c = p0;
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var2 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_rp = var;
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var5 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var3,var_rp) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_rp:Int> isa OTHER */
/* <var_rp:Int> isa OTHER */
var8 = 1; /* easy <var_rp:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var9 = var3 - var_rp;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_remsp = var6;
{
var10 = core__abstract_text___Char___u8char_len(var_c);
}
var_cln = var10;
{
{ /* Inline kernel#Int#> (var_cln,var_remsp) on <var_cln:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var13 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var17 = var_cln > var_remsp;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
core___core__RopeBuffer___dump_buffer(self); /* Direct call ropes#RopeBuffer#dump_buffer on <self:RopeBuffer>*/
}
var_rp = 0l;
} else {
}
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var20 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
core__flat___NativeString___set_char_at(var18, var_rp, var_c); /* Direct call flat#NativeString#set_char_at on <var18:NativeString>*/
}
{
{ /* Inline kernel#Int#+ (var_rp,var_cln) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var23 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var27 = var_rp + var_cln;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_rp = var21;
var_ = self;
var28 = var_->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_:RopeBuffer> */
{
{ /* Inline kernel#Int#+ (var28,var_cln) on <var28:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var31 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var28 + var_cln;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var29; /* _bytelen on <var_:RopeBuffer> */
{
{ /* Inline ropes#RopeBuffer#rpos= (self,var_rp) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = var_rp; /* _rpos on <self:RopeBuffer> */
RET_LABEL36:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#dump_buffer for (self: RopeBuffer) */
void core___core__RopeBuffer___dump_buffer(val* self) {
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
val* var_nstr /* var nstr: FlatString */;
val* var_ /* var : RopeBuffer */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_bs /* var bs: Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
char* var33 /* : NativeString */;
char* var34 /* : NativeString */;
char* var36 /* : NativeString */;
{
{ /* Inline abstract_text#Buffer#written= (self,0) on <self:RopeBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:RopeBuffer> */
RET_LABEL1:(void)0;
}
}
var = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var4 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var7 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var10 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
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
var17 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__FlatString___with_infos(var, var2, var11, var15); /* Direct call flat#FlatString#with_infos on <var:FlatString>*/
}
var_nstr = var;
var_ = self;
{
{ /* Inline ropes#RopeBuffer#str (var_) on <var_:RopeBuffer> */
var20 = var_->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_:RopeBuffer> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_core__abstract_text__String___43d]))(var18, var_nstr); /* + on <var18:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (var_,var21) on <var_:RopeBuffer> */
var_->attrs[COLOR_core__ropes__RopeBuffer___str].val = var21; /* _str on <var_:RopeBuffer> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#buf_size (self) on <self:RopeBuffer> */
var25 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_bs = var23;
{
{ /* Inline kernel#Int#* (var_bs,2l) on <var_bs:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var28 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 735);
fatal_exit(1);
}
var32 = var_bs * 2l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_bs = var26;
var33 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var33,var_bs) on <var33:NativeString> */
var36 = (char*)nit_alloc(var_bs);
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns= (self,var34) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___ns].str = var34; /* _ns on <self:RopeBuffer> */
RET_LABEL37:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#buf_size= (self,var_bs) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l = var_bs; /* _buf_size on <self:RopeBuffer> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l = 0l; /* _dumped on <self:RopeBuffer> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos= (self,0l) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = 0l; /* _rpos on <self:RopeBuffer> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#persist_buffer for (self: RopeBuffer) */
void core___core__RopeBuffer___persist_buffer(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : FlatString */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var_nstr /* var nstr: FlatString */;
val* var_ /* var : RopeBuffer */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
long var31 /* : Int */;
long var33 /* : Int */;
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var2 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var5 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var,var3) on <var:Int> */
var8 = var == var3;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
goto RET_LABEL;
} else {
}
var9 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (self) on <self:RopeBuffer> */
var12 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var15 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var18 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var13,var16) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var22 = var13 - var16;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (self) on <self:RopeBuffer> */
var25 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__FlatString___with_infos(var9, var10, var19, var23); /* Direct call flat#FlatString#with_infos on <var9:FlatString>*/
}
var_nstr = var9;
var_ = self;
{
{ /* Inline ropes#RopeBuffer#str (var_) on <var_:RopeBuffer> */
var28 = var_->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_:RopeBuffer> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = ((val*(*)(val* self, val* p0))(var26->class->vft[COLOR_core__abstract_text__String___43d]))(var26, var_nstr); /* + on <var26:String>*/
}
{
{ /* Inline ropes#RopeBuffer#str= (var_,var29) on <var_:RopeBuffer> */
var_->attrs[COLOR_core__ropes__RopeBuffer___str].val = var29; /* _str on <var_:RopeBuffer> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (self) on <self:RopeBuffer> */
var33 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped= (self,var31) on <self:RopeBuffer> */
self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l = var31; /* _dumped on <self:RopeBuffer> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#enlarge for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___core__abstract_text__Buffer__enlarge(val* self, long p0) {
long var_i /* var i: Int */;
var_i = p0;
RET_LABEL:;
}
/* method ropes#RopeBuffer#to_s for (self: RopeBuffer): String */
val* core___core__RopeBuffer___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var2 /* : String */;
val* var4 /* : String */;
{
core___core__RopeBuffer___persist_buffer(self); /* Direct call ropes#RopeBuffer#persist_buffer on <self:RopeBuffer>*/
}
{
{ /* Inline abstract_text#Buffer#written= (self,1) on <self:RopeBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 1; /* _written on <self:RopeBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (self) on <self:RopeBuffer> */
var4 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#FlatString#+ for (self: FlatString, Text): String */
val* core__ropes___FlatString___core__abstract_text__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_mlen /* var mlen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_nlen /* var nlen: Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Sys */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Concat */;
char* var27 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var28 /* : Int */;
long var_sifrom /* var sifrom: Int */;
long var29 /* : Int */;
long var_mifrom /* var mifrom: Int */;
char* var30 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
val* var44 /* : FlatString */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
val* var61 /* : String */;
val* var_sl /* var sl: String */;
long var62 /* : Int */;
long var_sllen /* var sllen: Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : Sys */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
short int var78 /* : Bool */;
val* var79 /* : Concat */;
val* var80 /* : Concat */;
val* var81 /* : String */;
val* var82 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:String>*/
}
var_slen = var2;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_mlen = var3;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var6 = var_slen == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_mlen,0l) on <var_mlen:Int> */
var9 = var_mlen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var12 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var_slen + var_mlen;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
/* <var_s:String> isa FlatString */
cltype15 = type_core__FlatString.color;
idtype16 = type_core__FlatString.id;
if(cltype15 >= var_s->type->table_size) {
var14 = 0;
} else {
var14 = var_s->type->type_table[cltype15] == idtype16;
}
if (var14){
var17 = glob_sys;
{
var18 = core__ropes___Sys___maxlen(var17);
}
{
{ /* Inline kernel#Int#> (var_nlen,var18) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var25 = var_nlen > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var26 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__left_61d]))(var26, self); /* left= on <var26:Concat>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__right_61d]))(var26, var_s); /* right= on <var26:Concat>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:Concat>*/
}
var = var26;
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_mits = var27;
var28 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:String(FlatString)> */
var_sifrom = var28;
var29 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mifrom = var29;
var30 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:String(FlatString)> */
var_sits = var30;
var31 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_nlen + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var31,var32) on <var31:NativeString> */
var41 = (char*)nit_alloc(var32);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_ns = var39;
{
{ /* Inline native#NativeString#copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:NativeString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL43:(void)0;
}
}
var44 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatString> */
var47 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#length (var_s) on <var_s:String(FlatString)> */
var50 = var_s->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_s:String(FlatString)> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var45,var48) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var53 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var57 = var45 + var48;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
core___core__FlatString___full(var44, var_ns, var_nlen, 0l, var51); /* Direct call flat#FlatString#full on <var44:FlatString>*/
}
var = var44;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype59 = type_core__ropes__Concat.color;
idtype60 = type_core__ropes__Concat.id;
if(cltype59 >= var_s->type->table_size) {
var58 = 0;
} else {
var58 = var_s->type->type_table[cltype59] == idtype60;
}
if (var58){
var61 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 600);
fatal_exit(1);
}
var_sl = var61;
{
var62 = ((long(*)(val* self))(var_sl->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_sl); /* bytelen on <var_sl:String>*/
}
var_sllen = var62;
{
{ /* Inline kernel#Int#+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var65 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var69 = var_sllen + var_mlen;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var70 = glob_sys;
{
var71 = core__ropes___Sys___maxlen(var70);
}
{
{ /* Inline kernel#Int#> (var63,var71) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var78 = var63 > var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
var79 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var79->class->vft[COLOR_core__ropes__Concat__left_61d]))(var79, self); /* left= on <var79:Concat>*/
}
{
((void(*)(val* self, val* p0))(var79->class->vft[COLOR_core__ropes__Concat__right_61d]))(var79, var_s); /* right= on <var79:Concat>*/
}
{
((void(*)(val* self))(var79->class->vft[COLOR_core__kernel__Object__init]))(var79); /* init on <var79:Concat>*/
}
var = var79;
goto RET_LABEL;
} else {
}
var80 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var81 = core__ropes___FlatString___core__abstract_text__String___43d(self, var_sl);
}
var82 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 603);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_core__ropes__Concat__left_61d]))(var80, var81); /* left= on <var80:Concat>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_core__ropes__Concat__right_61d]))(var80, var82); /* right= on <var80:Concat>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_core__kernel__Object__init]))(var80); /* init on <var80:Concat>*/
}
var = var80;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 605);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#node for (self: RopeCharIteratorPiece): String */
val* core__ropes___core__ropes__RopeCharIteratorPiece___node(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <self:RopeCharIteratorPiece> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#node= for (self: RopeCharIteratorPiece, String) */
void core__ropes___core__ropes__RopeCharIteratorPiece___node_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val = p0; /* _node on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#ldone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___ldone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#ldone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___ldone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = p0; /* _ldone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#rdone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___rdone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#rdone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___rdone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = p0; /* _rdone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#prev for (self: RopeCharIteratorPiece): nullable RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeCharIteratorPiece___prev(val* self) {
val* var /* : nullable RopeCharIteratorPiece */;
val* var1 /* : nullable RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#prev= for (self: RopeCharIteratorPiece, nullable RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___prev_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val = p0; /* _prev on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#init for (self: RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init]))(self); /* init on <self:RopeCharIteratorPiece>*/
}
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#ns for (self: RopeByteReverseIterator): NativeString */
char* core__ropes___core__ropes__RopeByteReverseIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str; /* _ns on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#ns= for (self: RopeByteReverseIterator, NativeString) */
void core__ropes___core__ropes__RopeByteReverseIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str = p0; /* _ns on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#pns for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l; /* _pns on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#pns= for (self: RopeByteReverseIterator, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l = p0; /* _pns on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#pos for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l; /* _pos on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#pos= for (self: RopeByteReverseIterator, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l = p0; /* _pos on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#subs for (self: RopeByteReverseIterator): IndexedIterator[FlatString] */
val* core__ropes___core__ropes__RopeByteReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[FlatString] */;
val* var1 /* : IndexedIterator[FlatString] */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#subs= for (self: RopeByteReverseIterator, IndexedIterator[FlatString]) */
void core__ropes___core__ropes__RopeByteReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val = p0; /* _subs on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#from for (self: RopeByteReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var4 /* : IndexedIterator[FlatString] */;
val* var6 /* : IndexedIterator[FlatString] */;
val* var7 /* : nullable Object */;
val* var_s /* var s: FlatString */;
char* var8 /* : NativeString */;
val* var10 /* : IndexedIterator[FlatString] */;
val* var12 /* : IndexedIterator[FlatString] */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeByteReverseIterator> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
{
{ /* Inline ropes#RopeByteReverseIterator#pos= (self,var_pos) on <self:RopeByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l = var_pos; /* _pos on <self:RopeByteReverseIterator> */
RET_LABEL2:(void)0;
}
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
core__ropes___core__ropes__ReverseRopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes#ReverseRopeSubstrings#from on <var:ReverseRopeSubstrings>*/
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs= (self,var) on <self:RopeByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val = var; /* _subs on <self:RopeByteReverseIterator> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs (self) on <self:RopeByteReverseIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var4); /* item on <var4:IndexedIterator[FlatString]>*/
}
var_s = var7;
var8 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
{
{ /* Inline ropes#RopeByteReverseIterator#ns= (self,var8) on <self:RopeByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str = var8; /* _ns on <self:RopeByteReverseIterator> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs (self) on <self:RopeByteReverseIterator> */
var12 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((long(*)(val* self))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var10); /* index on <var10:IndexedIterator[FlatString]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var13) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var17 = var_pos - var13;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline ropes#RopeByteReverseIterator#pns= (self,var14) on <self:RopeByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l = var14; /* _pns on <self:RopeByteReverseIterator> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#index for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeByteReverseIterator#pos (self) on <self:RopeByteReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l; /* _pos on <self:RopeByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#is_ok for (self: RopeByteReverseIterator): Bool */
short int core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeByteReverseIterator#pos (self) on <self:RopeByteReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l; /* _pos on <self:RopeByteReverseIterator> */
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
/* method ropes#RopeByteReverseIterator#item for (self: RopeByteReverseIterator): Byte */
unsigned char core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline ropes#RopeByteReverseIterator#ns (self) on <self:RopeByteReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str; /* _ns on <self:RopeByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeByteReverseIterator#pns (self) on <self:RopeByteReverseIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l; /* _pns on <self:RopeByteReverseIterator> */
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
/* method ropes#RopeByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#next for (self: RopeByteReverseIterator) */
void core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeByteReverseIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_8 /* var : RopeByteReverseIterator */;
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
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : IndexedIterator[FlatString] */;
val* var32 /* : IndexedIterator[FlatString] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : IndexedIterator[FlatString] */;
val* var37 /* : IndexedIterator[FlatString] */;
val* var38 /* : IndexedIterator[FlatString] */;
val* var40 /* : IndexedIterator[FlatString] */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : IndexedIterator[FlatString] */;
val* var45 /* : IndexedIterator[FlatString] */;
val* var46 /* : nullable Object */;
val* var_s /* var s: FlatString */;
char* var47 /* : NativeString */;
long var49 /* : Int */;
var_ = self;
{
{ /* Inline ropes#RopeByteReverseIterator#pns (var_) on <var_:RopeByteReverseIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l; /* _pns on <var_:RopeByteReverseIterator> */
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
{ /* Inline ropes#RopeByteReverseIterator#pns= (var_,var3) on <var_:RopeByteReverseIterator> */
var_->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l = var3; /* _pns on <var_:RopeByteReverseIterator> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes#RopeByteReverseIterator#pos (var_8) on <var_8:RopeByteReverseIterator> */
var11 = var_8->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l; /* _pos on <var_8:RopeByteReverseIterator> */
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
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var18 = var9 - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeByteReverseIterator#pos= (var_8,var12) on <var_8:RopeByteReverseIterator> */
var_8->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l = var12; /* _pos on <var_8:RopeByteReverseIterator> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeByteReverseIterator#pns (self) on <self:RopeByteReverseIterator> */
var22 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l; /* _pns on <self:RopeByteReverseIterator> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var20,0l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var29 = var20 >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs (self) on <self:RopeByteReverseIterator> */
var32 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((short int(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var30); /* is_ok on <var30:IndexedIterator[FlatString]>*/
}
var34 = !var33;
if (var34){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs (self) on <self:RopeByteReverseIterator> */
var37 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
((void(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var35); /* next on <var35:IndexedIterator[FlatString]>*/
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs (self) on <self:RopeByteReverseIterator> */
var40 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = ((short int(*)(val* self))((((long)var38&3)?class_info[((long)var38&3)]:var38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var38); /* is_ok on <var38:IndexedIterator[FlatString]>*/
}
var42 = !var41;
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeByteReverseIterator#subs (self) on <self:RopeByteReverseIterator> */
var45 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var43); /* item on <var43:IndexedIterator[FlatString]>*/
}
var_s = var46;
var47 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
{
{ /* Inline ropes#RopeByteReverseIterator#ns= (self,var47) on <self:RopeByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str = var47; /* _ns on <self:RopeByteReverseIterator> */
RET_LABEL48:(void)0;
}
}
{
var49 = core__flat___FlatText___last_byte(var_s);
}
{
{ /* Inline ropes#RopeByteReverseIterator#pns= (self,var49) on <self:RopeByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l = var49; /* _pns on <self:RopeByteReverseIterator> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeByteIterator#pns for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l; /* _pns on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#pns= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l = p0; /* _pns on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#ns for (self: RopeByteIterator): NativeString */
char* core__ropes___core__ropes__RopeByteIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str; /* _ns on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#ns= for (self: RopeByteIterator, NativeString) */
void core__ropes___core__ropes__RopeByteIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str = p0; /* _ns on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#subs for (self: RopeByteIterator): IndexedIterator[FlatString] */
val* core__ropes___core__ropes__RopeByteIterator___subs(val* self) {
val* var /* : IndexedIterator[FlatString] */;
val* var1 /* : IndexedIterator[FlatString] */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#subs= for (self: RopeByteIterator, IndexedIterator[FlatString]) */
void core__ropes___core__ropes__RopeByteIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val = p0; /* _subs on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#max for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___max].l; /* _max on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#max= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___max].l = p0; /* _max on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#pos for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l; /* _pos on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#pos= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l = p0; /* _pos on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#from for (self: RopeByteIterator, Concat, Int) */
void core__ropes___core__ropes__RopeByteIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var3 /* : IndexedIterator[FlatString] */;
val* var5 /* : IndexedIterator[FlatString] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
val* var13 /* : IndexedIterator[FlatString] */;
val* var15 /* : IndexedIterator[FlatString] */;
val* var16 /* : nullable Object */;
char* var17 /* : NativeString */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeByteIterator> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
core__ropes___core__ropes__RopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes#RopeSubstrings#from on <var:RopeSubstrings>*/
}
{
{ /* Inline ropes#RopeByteIterator#subs= (self,var) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val = var; /* _subs on <self:RopeByteIterator> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var5 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((long(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var3); /* index on <var3:IndexedIterator[FlatString]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var10 = var_pos - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#pns= (self,var7) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l = var7; /* _pns on <self:RopeByteIterator> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#pos= (self,var_pos) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l = var_pos; /* _pos on <self:RopeByteIterator> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var15 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val*(*)(val* self))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var13); /* item on <var13:IndexedIterator[FlatString]>*/
}
var17 = var16->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var16:nullable Object(FlatString)> */
{
{ /* Inline ropes#RopeByteIterator#ns= (self,var17) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str = var17; /* _ns on <self:RopeByteIterator> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:Concat> */
var21 = var_root->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <var_root:Concat> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var19,1l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var28 = var19 - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#max= (self,var22) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___max].l = var22; /* _max on <self:RopeByteIterator> */
RET_LABEL29:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeByteIterator#item for (self: RopeByteIterator): Byte */
unsigned char core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline ropes#RopeByteIterator#ns (self) on <self:RopeByteIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str; /* _ns on <self:RopeByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#pns (self) on <self:RopeByteIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l; /* _pns on <self:RopeByteIterator> */
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
/* method ropes#RopeByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#is_ok for (self: RopeByteIterator): Bool */
short int core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeByteIterator#pos (self) on <self:RopeByteIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l; /* _pos on <self:RopeByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#max (self) on <self:RopeByteIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeByteIterator___max].l; /* _max on <self:RopeByteIterator> */
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
/* method ropes#RopeByteIterator#index for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeByteIterator#pos (self) on <self:RopeByteIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l; /* _pos on <self:RopeByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#next for (self: RopeByteIterator) */
void core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeByteIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_8 /* var : RopeByteIterator */;
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
val* var23 /* : IndexedIterator[FlatString] */;
val* var25 /* : IndexedIterator[FlatString] */;
val* var26 /* : nullable Object */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : IndexedIterator[FlatString] */;
val* var37 /* : IndexedIterator[FlatString] */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : IndexedIterator[FlatString] */;
val* var42 /* : IndexedIterator[FlatString] */;
val* var43 /* : IndexedIterator[FlatString] */;
val* var45 /* : IndexedIterator[FlatString] */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : IndexedIterator[FlatString] */;
val* var50 /* : IndexedIterator[FlatString] */;
val* var51 /* : nullable Object */;
char* var52 /* : NativeString */;
var_ = self;
{
{ /* Inline ropes#RopeByteIterator#pns (var_) on <var_:RopeByteIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeByteIterator___pns].l; /* _pns on <var_:RopeByteIterator> */
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
{ /* Inline ropes#RopeByteIterator#pns= (var_,var3) on <var_:RopeByteIterator> */
var_->attrs[COLOR_core__ropes__RopeByteIterator___pns].l = var3; /* _pns on <var_:RopeByteIterator> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes#RopeByteIterator#pos (var_8) on <var_8:RopeByteIterator> */
var11 = var_8->attrs[COLOR_core__ropes__RopeByteIterator___pos].l; /* _pos on <var_8:RopeByteIterator> */
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
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var9 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#pos= (var_8,var12) on <var_8:RopeByteIterator> */
var_8->attrs[COLOR_core__ropes__RopeByteIterator___pos].l = var12; /* _pos on <var_8:RopeByteIterator> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#pns (self) on <self:RopeByteIterator> */
var22 = self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l; /* _pns on <self:RopeByteIterator> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var25 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var23); /* item on <var23:IndexedIterator[FlatString]>*/
}
var27 = var26->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var26:nullable Object(FlatString)> */
{
{ /* Inline kernel#Int#< (var20,var27) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var37 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((short int(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var35); /* is_ok on <var35:IndexedIterator[FlatString]>*/
}
var39 = !var38;
if (var39){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var42 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
((void(*)(val* self))((((long)var40&3)?class_info[((long)var40&3)]:var40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var40); /* next on <var40:IndexedIterator[FlatString]>*/
}
{
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var45 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((short int(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var43); /* is_ok on <var43:IndexedIterator[FlatString]>*/
}
var47 = !var46;
if (var47){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeByteIterator#subs (self) on <self:RopeByteIterator> */
var50 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val*(*)(val* self))((((long)var48&3)?class_info[((long)var48&3)]:var48->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var48); /* item on <var48:IndexedIterator[FlatString]>*/
}
var52 = var51->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var51:nullable Object(FlatString)> */
{
{ /* Inline ropes#RopeByteIterator#ns= (self,var52) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str = var52; /* _ns on <self:RopeByteIterator> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline ropes#RopeByteIterator#pns= (self,0l) on <self:RopeByteIterator> */
self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l = 0l; /* _pns on <self:RopeByteIterator> */
RET_LABEL54:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#ns for (self: RopeCharReverseIterator): String */
val* core__ropes___core__ropes__RopeCharReverseIterator___ns(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 709);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#ns= for (self: RopeCharReverseIterator, String) */
void core__ropes___core__ropes__RopeCharReverseIterator___ns_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = p0; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#pns for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#pns= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = p0; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#pos for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#pos= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = p0; /* _pos on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#subs for (self: RopeCharReverseIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#subs= for (self: RopeCharReverseIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val = p0; /* _subs on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#from for (self: RopeCharReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var4 /* : IndexedIterator[String] */;
val* var6 /* : IndexedIterator[String] */;
val* var7 /* : nullable Object */;
val* var9 /* : IndexedIterator[String] */;
val* var11 /* : IndexedIterator[String] */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeCharReverseIterator> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
{
{ /* Inline ropes#RopeCharReverseIterator#pos= (self,var_pos) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = var_pos; /* _pos on <self:RopeCharReverseIterator> */
RET_LABEL2:(void)0;
}
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
core__ropes___core__ropes__ReverseRopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes#ReverseRopeSubstrings#from on <var:ReverseRopeSubstrings>*/
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs= (self,var) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val = var; /* _subs on <self:RopeCharReverseIterator> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs (self) on <self:RopeCharReverseIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var4); /* item on <var4:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeCharReverseIterator#ns= (self,var7) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = var7; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs (self) on <self:RopeCharReverseIterator> */
var11 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((long(*)(val* self))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var9); /* index on <var9:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var12) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var16 = var_pos - var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#pns= (self,var13) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = var13; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL17:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#index for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeCharReverseIterator#pos (self) on <self:RopeCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#is_ok for (self: RopeCharReverseIterator): Bool */
short int core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeCharReverseIterator#pos (self) on <self:RopeCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
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
/* method ropes#RopeCharReverseIterator#item for (self: RopeCharReverseIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline ropes#RopeCharReverseIterator#ns (self) on <self:RopeCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 709);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#pns (self) on <self:RopeCharReverseIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var4); /* [] on <var1:String>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#next for (self: RopeCharReverseIterator) */
void core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharReverseIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_8 /* var : RopeCharReverseIterator */;
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
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : IndexedIterator[String] */;
val* var32 /* : IndexedIterator[String] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : IndexedIterator[String] */;
val* var37 /* : IndexedIterator[String] */;
val* var38 /* : IndexedIterator[String] */;
val* var40 /* : IndexedIterator[String] */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : IndexedIterator[String] */;
val* var45 /* : IndexedIterator[String] */;
val* var46 /* : nullable Object */;
val* var48 /* : String */;
val* var50 /* : String */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
var_ = self;
{
{ /* Inline ropes#RopeCharReverseIterator#pns (var_) on <var_:RopeCharReverseIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <var_:RopeCharReverseIterator> */
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
{ /* Inline ropes#RopeCharReverseIterator#pns= (var_,var3) on <var_:RopeCharReverseIterator> */
var_->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = var3; /* _pns on <var_:RopeCharReverseIterator> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes#RopeCharReverseIterator#pos (var_8) on <var_8:RopeCharReverseIterator> */
var11 = var_8->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <var_8:RopeCharReverseIterator> */
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
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var18 = var9 - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#pos= (var_8,var12) on <var_8:RopeCharReverseIterator> */
var_8->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = var12; /* _pos on <var_8:RopeCharReverseIterator> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#pns (self) on <self:RopeCharReverseIterator> */
var22 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var20,0l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var29 = var20 >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs (self) on <self:RopeCharReverseIterator> */
var32 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((short int(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var30); /* is_ok on <var30:IndexedIterator[String]>*/
}
var34 = !var33;
if (var34){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs (self) on <self:RopeCharReverseIterator> */
var37 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
((void(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var35); /* next on <var35:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs (self) on <self:RopeCharReverseIterator> */
var40 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = ((short int(*)(val* self))((((long)var38&3)?class_info[((long)var38&3)]:var38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var38); /* is_ok on <var38:IndexedIterator[String]>*/
}
var42 = !var41;
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeCharReverseIterator#subs (self) on <self:RopeCharReverseIterator> */
var45 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var43); /* item on <var43:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeCharReverseIterator#ns= (self,var46) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = var46; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#ns (self) on <self:RopeCharReverseIterator> */
var50 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 709);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((long(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__Text__length]))(var48); /* length on <var48:String>*/
}
{
{ /* Inline kernel#Int#- (var51,1l) on <var51:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var54 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var58 = var51 - 1l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline ropes#RopeCharReverseIterator#pns= (self,var52) on <self:RopeCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = var52; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL59:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeCharIterator#pns for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#pns= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = p0; /* _pns on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#str for (self: RopeCharIterator): String */
val* core__ropes___core__ropes__RopeCharIterator___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___str].val; /* _str on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 750);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#str= for (self: RopeCharIterator, String) */
void core__ropes___core__ropes__RopeCharIterator___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = p0; /* _str on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#subs for (self: RopeCharIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#subs= for (self: RopeCharIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val = p0; /* _subs on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#max for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___max].l; /* _max on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#max= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___max].l = p0; /* _max on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#pos for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#pos= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = p0; /* _pos on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#from for (self: RopeCharIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var3 /* : IndexedIterator[String] */;
val* var5 /* : IndexedIterator[String] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
val* var13 /* : IndexedIterator[String] */;
val* var15 /* : IndexedIterator[String] */;
val* var16 /* : nullable Object */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeCharIterator> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
core__ropes___core__ropes__RopeSubstrings___from(var, var_root, var_pos); /* Direct call ropes#RopeSubstrings#from on <var:RopeSubstrings>*/
}
{
{ /* Inline ropes#RopeCharIterator#subs= (self,var) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val = var; /* _subs on <self:RopeCharIterator> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var5 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((long(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var3); /* index on <var3:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var10 = var_pos - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#pns= (self,var7) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = var7; /* _pns on <self:RopeCharIterator> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#pos= (self,var_pos) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = var_pos; /* _pos on <self:RopeCharIterator> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var15 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val*(*)(val* self))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var13); /* item on <var13:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeCharIterator#str= (self,var16) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = var16; /* _str on <self:RopeCharIterator> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:Concat> */
var20 = var_root->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <var_root:Concat> */
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
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var27 = var18 - 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#max= (self,var21) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___max].l = var21; /* _max on <self:RopeCharIterator> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeCharIterator#item for (self: RopeCharIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline ropes#RopeCharIterator#str (self) on <self:RopeCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharIterator___str].val; /* _str on <self:RopeCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 750);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#pns (self) on <self:RopeCharIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var4); /* [] on <var1:String>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#is_ok for (self: RopeCharIterator): Bool */
short int core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeCharIterator#pos (self) on <self:RopeCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#max (self) on <self:RopeCharIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeCharIterator___max].l; /* _max on <self:RopeCharIterator> */
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
/* method ropes#RopeCharIterator#index for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeCharIterator#pos (self) on <self:RopeCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#next for (self: RopeCharIterator) */
void core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_8 /* var : RopeCharIterator */;
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
{ /* Inline ropes#RopeCharIterator#pns (var_) on <var_:RopeCharIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <var_:RopeCharIterator> */
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
{ /* Inline ropes#RopeCharIterator#pns= (var_,var3) on <var_:RopeCharIterator> */
var_->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = var3; /* _pns on <var_:RopeCharIterator> */
RET_LABEL7:(void)0;
}
}
var_8 = self;
{
{ /* Inline ropes#RopeCharIterator#pos (var_8) on <var_8:RopeCharIterator> */
var11 = var_8->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <var_8:RopeCharIterator> */
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
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var9 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#pos= (var_8,var12) on <var_8:RopeCharIterator> */
var_8->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = var12; /* _pos on <var_8:RopeCharIterator> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#pns (self) on <self:RopeCharIterator> */
var22 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var25 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var23); /* item on <var23:IndexedIterator[String]>*/
}
{
var27 = ((long(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__Text__length]))(var26); /* length on <var26:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#< (var20,var27) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var37 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((short int(*)(val* self))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var35); /* is_ok on <var35:IndexedIterator[String]>*/
}
var39 = !var38;
if (var39){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var42 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
((void(*)(val* self))((((long)var40&3)?class_info[((long)var40&3)]:var40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var40); /* next on <var40:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var45 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((short int(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var43); /* is_ok on <var43:IndexedIterator[String]>*/
}
var47 = !var46;
if (var47){
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeCharIterator#subs (self) on <self:RopeCharIterator> */
var50 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val*(*)(val* self))((((long)var48&3)?class_info[((long)var48&3)]:var48->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var48); /* item on <var48:IndexedIterator[String]>*/
}
{
{ /* Inline ropes#RopeCharIterator#str= (self,var51) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = var51; /* _str on <self:RopeCharIterator> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIterator#pns= (self,0l) on <self:RopeCharIterator> */
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = 0l; /* _pns on <self:RopeCharIterator> */
RET_LABEL53:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#iter for (self: ReverseRopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__ReverseRopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 789);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#iter= for (self: ReverseRopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__ReverseRopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = p0; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#pos for (self: ReverseRopeSubstrings): Int */
long core__ropes___core__ropes__ReverseRopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#pos= for (self: ReverseRopeSubstrings, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = p0; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#str for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 794);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#str= for (self: ReverseRopeSubstrings, FlatString) */
void core__ropes___core__ropes__ReverseRopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = p0; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#from for (self: ReverseRopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : String */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : String */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : RopeCharIteratorPiece */;
val* var23 /* : String */;
val* var24 /* : RopeCharIteratorPiece */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:ReverseRopeSubstrings> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 0); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 1); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var2 = 0;
} else {
var2 = var_rnod->type->type_table[cltype] == idtype;
}
if (var2){
var3 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 803);
fatal_exit(1);
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__length]))(var3); /* length on <var3:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var4) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var10 = var_off >= var4;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var11 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 804);
fatal_exit(1);
}
{
var12 = ((long(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__length]))(var11); /* length on <var11:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var12) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var19 = var_off - var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_off = var13;
var20 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 805);
fatal_exit(1);
}
var_rnod = var20;
var21 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var21, var_rnod); /* node= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var21, 0); /* ldone= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var21, 1); /* rdone= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var21, var_r); /* prev= on <var21:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_core__kernel__Object__init]))(var21); /* init on <var21:RopeCharIteratorPiece>*/
}
var_r = var21;
} else {
{
{ /* Inline ropes#RopeCharIteratorPiece#ldone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_r:RopeCharIteratorPiece> */
RET_LABEL22:(void)0;
}
}
var23 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 809);
fatal_exit(1);
}
var_rnod = var23;
var24 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var24, var_rnod); /* node= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var24, 0); /* ldone= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var24, 1); /* rdone= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var24, var_r); /* prev= on <var24:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:RopeCharIteratorPiece>*/
}
var_r = var24;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype26 = type_core__FlatString.color;
idtype27 = type_core__FlatString.id;
if(cltype26 >= var_rnod->type->table_size) {
var25 = 0;
} else {
var25 = var_rnod->type->type_table[cltype26] == idtype27;
}
if (unlikely(!var25)) {
var_class_name28 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 813);
fatal_exit(1);
}
{
{ /* Inline ropes#ReverseRopeSubstrings#str= (self,var_rnod) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = var_rnod; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIteratorPiece#ldone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_r:RopeCharIteratorPiece> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline ropes#ReverseRopeSubstrings#iter= (self,var_r) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = var_r; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var34 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var38 = var_pos - var_off;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline ropes#ReverseRopeSubstrings#pos= (self,var32) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = var32; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL39:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#item for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
{
{ /* Inline ropes#ReverseRopeSubstrings#str (self) on <self:ReverseRopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 794);
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
/* method ropes#ReverseRopeSubstrings#index for (self: ReverseRopeSubstrings): Int */
long core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#ReverseRopeSubstrings#pos (self) on <self:ReverseRopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#is_ok for (self: ReverseRopeSubstrings): Bool */
short int core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#ReverseRopeSubstrings#pos (self) on <self:ReverseRopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
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
/* method ropes#ReverseRopeSubstrings#next for (self: ReverseRopeSubstrings) */
void core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : RopeCharIteratorPiece */;
val* var9 /* : RopeCharIteratorPiece */;
val* var10 /* : nullable RopeCharIteratorPiece */;
val* var12 /* : nullable RopeCharIteratorPiece */;
val* var_curr /* var curr: nullable RopeCharIteratorPiece */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var_currit /* var currit: String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : String */;
val* var23 /* : String */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var_ /* var : ReverseRopeSubstrings */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var38 /* : FlatString */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var56 /* : RopeCharIteratorPiece */;
val* var57 /* : String */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var63 /* : RopeCharIteratorPiece */;
val* var64 /* : String */;
val* var65 /* : nullable RopeCharIteratorPiece */;
val* var67 /* : nullable RopeCharIteratorPiece */;
long var69 /* : Int */;
long var71 /* : Int */;
{
{ /* Inline ropes#ReverseRopeSubstrings#pos (self) on <self:ReverseRopeSubstrings> */
var2 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var < 0l;
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
{ /* Inline ropes#ReverseRopeSubstrings#iter (self) on <self:ReverseRopeSubstrings> */
var9 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 789);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIteratorPiece#prev (var7) on <var7:RopeCharIteratorPiece> */
var12 = var7->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var7:RopeCharIteratorPiece> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_curr = var10;
if (var_curr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 831);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#node (var_curr) on <var_curr:nullable RopeCharIteratorPiece> */
if (unlikely(var_curr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var15 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_curr:nullable RopeCharIteratorPiece> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_currit = var13;
for(;;) {
if (var_curr == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_curr,((val*)NULL)) on <var_curr:nullable RopeCharIteratorPiece> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_curr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_curr, var_other); /* == on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline ropes#RopeCharIteratorPiece#node (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var23 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_currit = var21;
/* <var_currit:String> isa Concat */
cltype25 = type_core__ropes__Concat.color;
idtype26 = type_core__ropes__Concat.id;
if(cltype25 >= var_currit->type->table_size) {
var24 = 0;
} else {
var24 = var_currit->type->type_table[cltype25] == idtype26;
}
var27 = !var24;
if (var27){
/* <var_currit:String> isa FlatString */
cltype29 = type_core__FlatString.color;
idtype30 = type_core__FlatString.id;
if(cltype29 >= var_currit->type->table_size) {
var28 = 0;
} else {
var28 = var_currit->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name31 = var_currit == NULL ? "null" : var_currit->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 835);
fatal_exit(1);
}
{
{ /* Inline ropes#ReverseRopeSubstrings#str= (self,var_currit) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = var_currit; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL32:(void)0;
}
}
var_ = self;
{
{ /* Inline ropes#ReverseRopeSubstrings#pos (var_) on <var_:ReverseRopeSubstrings> */
var35 = var_->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <var_:ReverseRopeSubstrings> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline ropes#ReverseRopeSubstrings#str (self) on <self:ReverseRopeSubstrings> */
var38 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 794);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#length (var36) on <var36:FlatString> */
var41 = var36->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var36:FlatString> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var33,var39) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var44 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var48 = var33 - var39;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline ropes#ReverseRopeSubstrings#pos= (var_,var42) on <var_:ReverseRopeSubstrings> */
var_->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = var42; /* _pos on <var_:ReverseRopeSubstrings> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline ropes#ReverseRopeSubstrings#iter= (self,var_curr) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = var_curr; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL50:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeCharIteratorPiece#rdone (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var53 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = !var51;
if (var54){
{
{ /* Inline ropes#RopeCharIteratorPiece#rdone= (var_curr,1) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL55:(void)0;
}
}
var56 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var57 = var_currit->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_currit:String(Concat)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 842);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var56, var57); /* node= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var56, 0); /* ldone= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var56, 0); /* rdone= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var56, var_curr); /* prev= on <var56:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_core__kernel__Object__init]))(var56); /* init on <var56:RopeCharIteratorPiece>*/
}
var_curr = var56;
goto BREAK_label;
} else {
}
{
{ /* Inline ropes#RopeCharIteratorPiece#ldone (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var60 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = !var58;
if (var61){
{
{ /* Inline ropes#RopeCharIteratorPiece#ldone= (var_curr,1) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
RET_LABEL62:(void)0;
}
}
var63 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var64 = var_currit->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_currit:String(Concat)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 847);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var63, var64); /* node= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var63, 0); /* ldone= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var63, 0); /* rdone= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var63, var_curr); /* prev= on <var63:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var63->class->vft[COLOR_core__kernel__Object__init]))(var63); /* init on <var63:RopeCharIteratorPiece>*/
}
var_curr = var63;
goto BREAK_label;
} else {
}
{
{ /* Inline ropes#RopeCharIteratorPiece#prev (var_curr) on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var67 = var_curr->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_curr = var65;
} else {
goto BREAK_label68;
}
BREAK_label: (void)0;
}
BREAK_label68: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var71 = -1l;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline ropes#ReverseRopeSubstrings#pos= (self,var69) on <self:ReverseRopeSubstrings> */
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = var69; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL72:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#iter for (self: RopeBufSubstringIterator): Iterator[FlatText] */
val* core__ropes___core__ropes__RopeBufSubstringIterator___iter(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : Iterator[FlatText] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#iter= for (self: RopeBufSubstringIterator, Iterator[FlatText]) */
void core__ropes___core__ropes__RopeBufSubstringIterator___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val = p0; /* _iter on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr for (self: RopeBufSubstringIterator): FlatString */
val* core__ropes___core__ropes__RopeBufSubstringIterator___nsstr(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr].val; /* _nsstr on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nsstr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 861);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr= for (self: RopeBufSubstringIterator, FlatString) */
void core__ropes___core__ropes__RopeBufSubstringIterator___nsstr_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr].val = p0; /* _nsstr on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done for (self: RopeBufSubstringIterator): Bool */
short int core__ropes___core__ropes__RopeBufSubstringIterator___nsstr_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s; /* _nsstr_done on <self:RopeBufSubstringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done= for (self: RopeBufSubstringIterator, Bool) */
void core__ropes___core__ropes__RopeBufSubstringIterator___nsstr_done_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s = p0; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#from for (self: RopeBufSubstringIterator, RopeBuffer) */
void core__ropes___core__ropes__RopeBufSubstringIterator___from(val* self, val* p0) {
val* var_str /* var str: RopeBuffer */;
val* var /* : String */;
val* var3 /* : String */;
val* var4 /* : Iterator[FlatText] */;
val* var6 /* : FlatString */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeBufSubstringIterator> */
RET_LABEL1:(void)0;
}
}
var_str = p0;
{
{ /* Inline ropes#RopeBuffer#str (var_str) on <var_str:RopeBuffer> */
var3 = var_str->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_str:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__substrings]))(var); /* substrings on <var:String>*/
}
{
{ /* Inline ropes#RopeBufSubstringIterator#iter= (self,var4) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val = var4; /* _iter on <self:RopeBufSubstringIterator> */
RET_LABEL5:(void)0;
}
}
var6 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline ropes#RopeBuffer#ns (var_str) on <var_str:RopeBuffer> */
var9 = var_str->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <var_str:RopeBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (var_str) on <var_str:RopeBuffer> */
var12 = var_str->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <var_str:RopeBuffer> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (var_str) on <var_str:RopeBuffer> */
var15 = var_str->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <var_str:RopeBuffer> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var10,var13) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var18 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var19 = var10 - var13;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (var_str) on <var_str:RopeBuffer> */
var22 = var_str->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <var_str:RopeBuffer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
core___core__FlatString___with_infos(var6, var7, var16, var20); /* Direct call flat#FlatString#with_infos on <var6:FlatString>*/
}
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr= (self,var6) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr].val = var6; /* _nsstr on <self:RopeBufSubstringIterator> */
RET_LABEL23:(void)0;
}
}
{
var24 = core___core__RopeBuffer___core__abstract_text__Text__length(var_str);
}
{
{ /* Inline kernel#Int#== (var24,0l) on <var24:Int> */
var27 = var24 == 0l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr_done= (self,1) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s = 1; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL28:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#is_ok for (self: RopeBufSubstringIterator): Bool */
short int core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var4 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[FlatText]>*/
}
var_ = var5;
if (var5){
var1 = var_;
} else {
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr_done (self) on <self:RopeBufSubstringIterator> */
var8 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s; /* _nsstr_done on <self:RopeBufSubstringIterator> */
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
val* core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__item(val* self) {
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
var1 = core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 875);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var4 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[FlatText]>*/
}
if (var5){
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var8 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var6); /* item on <var6:Iterator[FlatText]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr (self) on <self:RopeBufSubstringIterator> */
var12 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr].val; /* _nsstr on <self:RopeBufSubstringIterator> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nsstr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 861);
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
void core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Iterator[FlatText] */;
val* var2 /* : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[FlatText] */;
val* var6 /* : Iterator[FlatText] */;
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var2 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var); /* is_ok on <var:Iterator[FlatText]>*/
}
if (var3){
{
{ /* Inline ropes#RopeBufSubstringIterator#iter (self) on <self:RopeBufSubstringIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var4); /* next on <var4:Iterator[FlatText]>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufSubstringIterator#nsstr_done= (self,1) on <self:RopeBufSubstringIterator> */
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s = 1; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeSubstrings#iter for (self: RopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 893);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#iter= for (self: RopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = p0; /* _iter on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#pos for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#pos= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = p0; /* _pos on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#max for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#max= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___max].l = p0; /* _max on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#str for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 900);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#str= for (self: RopeSubstrings, FlatString) */
void core__ropes___core__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#from for (self: RopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__RopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : String */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var23 /* : String */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : RopeCharIteratorPiece */;
val* var34 /* : String */;
val* var35 /* : RopeCharIteratorPiece */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeSubstrings> */
RET_LABEL1:(void)0;
}
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
{
{ /* Inline ropes#Concat#length (var_root) on <var_root:Concat> */
var4 = var_root->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <var_root:Concat> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
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
self->attrs[COLOR_core__ropes__RopeSubstrings___max].l = var5; /* _max on <self:RopeSubstrings> */
RET_LABEL9:(void)0;
}
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype11 = type_core__ropes__Concat.color;
idtype12 = type_core__ropes__Concat.id;
if(cltype11 >= var_rnod->type->table_size) {
var10 = 0;
} else {
var10 = var_rnod->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 910);
fatal_exit(1);
}
{
var14 = ((long(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__length]))(var13); /* length on <var13:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var14) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var21 = var_off >= var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline ropes#RopeCharIteratorPiece#rdone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_r:RopeCharIteratorPiece> */
RET_LABEL22:(void)0;
}
}
var23 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 912);
fatal_exit(1);
}
{
var24 = ((long(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__Text__length]))(var23); /* length on <var23:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var24) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var31 = var_off - var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_off = var25;
var32 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 913);
fatal_exit(1);
}
var_rnod = var32;
var33 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var33, var_rnod); /* node= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var33, 1); /* ldone= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var33, 0); /* rdone= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var33, var_r); /* prev= on <var33:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:RopeCharIteratorPiece>*/
}
var_r = var33;
} else {
var34 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 916);
fatal_exit(1);
}
var_rnod = var34;
var35 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var35, var_rnod); /* node= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var35, 1); /* ldone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var35, 0); /* rdone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var35, var_r); /* prev= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:RopeCharIteratorPiece>*/
}
var_r = var35;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype37 = type_core__FlatString.color;
idtype38 = type_core__FlatString.id;
if(cltype37 >= var_rnod->type->table_size) {
var36 = 0;
} else {
var36 = var_rnod->type->type_table[cltype37] == idtype38;
}
if (unlikely(!var36)) {
var_class_name39 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 920);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL40:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIteratorPiece#rdone= (var_r,1) on <var_r:RopeCharIteratorPiece> */
var_r->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_r:RopeCharIteratorPiece> */
RET_LABEL41:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_r) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = var_r; /* _iter on <self:RopeSubstrings> */
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var45 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var49 = var_pos - var_off;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos= (self,var43) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = var43; /* _pos on <self:RopeSubstrings> */
RET_LABEL50:(void)0;
}
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#item for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
{
{ /* Inline ropes#RopeSubstrings#str (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 900);
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
short int core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
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
var3 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max (self) on <self:RopeSubstrings> */
var6 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
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
/* method ropes#RopeSubstrings#index for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline ropes#RopeSubstrings#pos (self) on <self:RopeSubstrings> */
var3 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
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
void core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
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
val* var27 /* : RopeCharIteratorPiece */;
val* var29 /* : RopeCharIteratorPiece */;
val* var30 /* : nullable RopeCharIteratorPiece */;
val* var32 /* : nullable RopeCharIteratorPiece */;
val* var_it /* var it: nullable RopeCharIteratorPiece */;
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
val* var54 /* : RopeCharIteratorPiece */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : String */;
val* var61 /* : RopeCharIteratorPiece */;
val* var62 /* : nullable RopeCharIteratorPiece */;
val* var64 /* : nullable RopeCharIteratorPiece */;
val* var65 /* : String */;
val* var67 /* : String */;
var_ = self;
{
{ /* Inline ropes#RopeSubstrings#pos (var_) on <var_:RopeSubstrings> */
var2 = var_->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <var_:RopeSubstrings> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#str (self) on <self:RopeSubstrings> */
var5 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 900);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#length (var3) on <var3:FlatString> */
var8 = var3->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var3:FlatString> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
var_->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = var9; /* _pos on <var_:RopeSubstrings> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#pos (self) on <self:RopeSubstrings> */
var16 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline ropes#RopeSubstrings#max (self) on <self:RopeSubstrings> */
var19 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
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
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
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
var29 = self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 893);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline ropes#RopeCharIteratorPiece#prev (var27) on <var27:RopeCharIteratorPiece> */
var32 = var27->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var27:RopeCharIteratorPiece> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_it = var30;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 939);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#node (var_it) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var35 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_rnod = var33;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype37 = type_core__ropes__Concat.color;
idtype38 = type_core__ropes__Concat.id;
if(cltype37 >= var_rnod->type->table_size) {
var36 = 0;
} else {
var36 = var_rnod->type->type_table[cltype37] == idtype38;
}
var39 = !var36;
if (var39){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 942);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#ldone= (var_it,1) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 614);
fatal_exit(1);
}
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_it:nullable RopeCharIteratorPiece> */
RET_LABEL40:(void)0;
}
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 943);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#rdone= (var_it,1) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 616);
fatal_exit(1);
}
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_it:nullable RopeCharIteratorPiece> */
RET_LABEL41:(void)0;
}
}
/* <var_rnod:String> isa FlatString */
cltype43 = type_core__FlatString.color;
idtype44 = type_core__FlatString.id;
if(cltype43 >= var_rnod->type->table_size) {
var42 = 0;
} else {
var42 = var_rnod->type->type_table[cltype43] == idtype44;
}
if (unlikely(!var42)) {
var_class_name45 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 944);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#str= (self,var_rnod) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = var_rnod; /* _str on <self:RopeSubstrings> */
RET_LABEL46:(void)0;
}
}
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 945);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeSubstrings#iter= (self,var_it) on <self:RopeSubstrings> */
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = var_it; /* _iter on <self:RopeSubstrings> */
RET_LABEL47:(void)0;
}
}
goto BREAK_label;
} else {
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 948);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#ldone (var_it) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 614);
fatal_exit(1);
}
var50 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <var_it:nullable RopeCharIteratorPiece> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = !var48;
if (var51){
var52 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 949);
fatal_exit(1);
}
var_rnod = var52;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 950);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#ldone= (var_it,1) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 614);
fatal_exit(1);
}
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = 1; /* _ldone on <var_it:nullable RopeCharIteratorPiece> */
RET_LABEL53:(void)0;
}
}
var54 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var54, var_rnod); /* node= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var54, 0); /* ldone= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var54, 0); /* rdone= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var54, var_it); /* prev= on <var54:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:RopeCharIteratorPiece>*/
}
var_it = var54;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 952);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#rdone (var_it) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 616);
fatal_exit(1);
}
var57 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <var_it:nullable RopeCharIteratorPiece> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var58 = !var55;
if (var58){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 953);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#rdone= (var_it,1) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 616);
fatal_exit(1);
}
var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = 1; /* _rdone on <var_it:nullable RopeCharIteratorPiece> */
RET_LABEL59:(void)0;
}
}
var60 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 954);
fatal_exit(1);
}
var_rnod = var60;
var61 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var61, var_rnod); /* node= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var61, 0); /* ldone= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var61, 0); /* rdone= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var61, var_it); /* prev= on <var61:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:RopeCharIteratorPiece>*/
}
var_it = var61;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 957);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#prev (var_it) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 618);
fatal_exit(1);
}
var64 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <var_it:nullable RopeCharIteratorPiece> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_it = var62;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 958);
fatal_exit(1);
} else {
{ /* Inline ropes#RopeCharIteratorPiece#node (var_it) on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var67 = var_it->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <var_it:nullable RopeCharIteratorPiece> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_rnod = var65;
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeChars#[] for (self: RopeChars, Int): Char */
uint32_t core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_i = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeChars> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeChars> */
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
var4 = core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d(var1, var_i);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharIterator(&type_core__ropes__RopeCharIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeChars> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeChars> */
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
core__ropes___core__ropes__RopeCharIterator___from(var1, var2, var_i); /* Direct call ropes#RopeCharIterator#from on <var1:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
