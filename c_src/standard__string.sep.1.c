#include "standard__string.sep.0.h"
/* method string#Text#length for (self: Text): Int */
long standard___standard__Text___length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 44);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#substring for (self: Text, Int, Int): Text */
val* standard___standard__Text___substring(val* self, long p0, long p1) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 50);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#substrings for (self: Text): Iterator[FlatText] */
val* standard___standard__Text___substrings(val* self) {
val* var /* : Iterator[FlatText] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 62);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#is_empty for (self: Text): Bool */
short int standard___standard__Text___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
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
/* method string#Text#empty for (self: Text): Text */
val* standard___standard__Text___empty(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "empty", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 71);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#[] for (self: Text, Int): Char */
uint32_t standard___standard__Text____91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var_index); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#last for (self: Text): Char */
uint32_t standard___standard__Text___last(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var3); /* [] on <var1:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_cstring for (self: Text): NativeString */
char* standard___standard__Text___to_cstring(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 129);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#Text#substring_from for (self: Text, Int): Text */
val* standard___standard__Text___substring_from(val* self, long p0) {
val* var /* : Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Text */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
var_from = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var13 = var_from < 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_from = 0l;
} else {
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var14,var_from) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var21 = var14 - var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var_from, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_substring for (self: Text, String, Int): Bool */
short int standard___standard__Text___has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = standard___standard__Text___is_empty(var_str);
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var6 = var_pos < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var2 = var_;
} else {
{
var7 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var14 = var_pos + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#> (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var22 = var8 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var2 = var16;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var24 = ((val*(*)(val* self, long p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(var23, var_pos); /* iterator_from on <var23:SequenceRead[Char]>*/
}
var_myiter = var24;
{
var25 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var26 = ((val*(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var25); /* iterator on <var25:SequenceRead[Char]>*/
}
var_itsiter = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_myiter); /* is_ok on <var_myiter:IndexedIterator[Char]>*/
}
var_29 = var28;
if (var28){
{
var30 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
var27 = var30;
} else {
var27 = var_29;
}
if (var27){
{
var31 = ((val*(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_myiter); /* item on <var_myiter:IndexedIterator[Char]>*/
}
{
var32 = ((val*(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_itsiter); /* item on <var_itsiter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var31,var32) on <var31:nullable Object(Char)> */
var35 = var31 == var32;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_myiter); /* next on <var_myiter:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_itsiter); /* next on <var_itsiter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var37 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
if (var37){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_prefix for (self: Text, String): Bool */
short int standard___standard__Text___has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
short int var1 /* : Bool */;
var_prefix = p0;
{
var1 = standard___standard__Text___has_substring(self, var_prefix, 0l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_suffix for (self: Text, String): Bool */
short int standard___standard__Text___has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
short int var7 /* : Bool */;
var_suffix = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(var_suffix->class->vft[COLOR_standard__string__Text__length]))(var_suffix); /* length on <var_suffix:String>*/
}
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = standard___standard__Text___has_substring(self, var_suffix, var3);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_i for (self: Text): Int */
long standard___standard__Text___to_i(val* self) {
long var /* : Int */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var5 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
{
{ /* Inline string#NativeString#atoi (var2) on <var2:NativeString> */
var5 = atoi(var2);;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_f for (self: Text): Float */
double standard___standard__Text___to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
double var3 /* : Float */;
double var5 /* : Float for extern */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
{
{ /* Inline string#NativeString#atof (var2) on <var2:NativeString> */
var5 = atof(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_hex for (self: Text): Int */
long standard___standard__Text___to_hex(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = standard___standard__Text___a_to(self, 16l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_oct for (self: Text): Int */
long standard___standard__Text___to_oct(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = standard___standard__Text___a_to(self, 8l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_bin for (self: Text): Int */
long standard___standard__Text___to_bin(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = standard___standard__Text___a_to(self, 2l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#a_to for (self: Text, Int): Int */
long standard___standard__Text___a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var_i /* var i: Int */;
short int var_neg /* var neg: Bool */;
long var_j /* var j: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
long var9 /* : Int */;
long var_v /* var v: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
var_base = p0;
var_i = 0l;
var_neg = 0;
var_j = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var5 = var_j < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_j); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_c = var8;
{
var9 = standard___standard__Char___to_i(var_c);
}
var_v = var9;
{
{ /* Inline kernel#Int#> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var12 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var16 = var_v > var_base;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var19 = -var_i;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
{
{ /* Inline kernel#Int#< (var_v,0l) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var26 = var_v < 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var_neg = 1;
} else {
{
{ /* Inline kernel#Int#* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var29 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var33 = var_i * var_base;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var_v) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var36 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var40 = var27 + var_v;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_i = var34;
}
}
{
var41 = standard___standard__Int___Discrete__successor(var_j, 1l);
}
var_j = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var44 = -var_i;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Text#is_numeric for (self: Text): Bool */
short int standard___standard__Text___is_numeric(val* self) {
short int var /* : Bool */;
short int var_has_point_or_comma /* var has_point_or_comma: Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
var_has_point_or_comma = 0;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_c = var8;
{
var9 = standard__string___Char___is_numeric(var_c);
}
var10 = !var9;
if (var10){
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var15 = var_c == '.';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
if (var13){
var12 = var_16;
} else {
{
{ /* Inline kernel#Char#== (var_c,',') on <var_c:Char> */
var19 = var_c == ',';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var12 = var17;
}
var_20 = var12;
if (var12){
var21 = !var_has_point_or_comma;
var11 = var21;
} else {
var11 = var_20;
}
if (var11){
var_has_point_or_comma = 1;
} else {
var = 0;
goto RET_LABEL;
}
} else {
}
{
var22 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var22;
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
/* method string#Text#is_lower for (self: Text): Bool */
short int standard___standard__Text___is_lower(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_char = var8;
{
var9 = standard___standard__Char___is_upper(var_char);
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
var10 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var10;
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
/* method string#Text#chomp for (self: Text): Text */
val* standard___standard__Text___chomp(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_l /* var l: Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Text */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
uint32_t var49 /* : Char */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : Text */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
val* var65 /* : Text */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
{ /* Inline kernel#Int#== (var_len,0l) on <var_len:Int> */
var4 = var_len == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 436);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var6); /* last on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_l = var8;
{
{ /* Inline kernel#Char#== (var_l,'\015') on <var_l:Char> */
var11 = var_l == '\015';
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var18 = var_len - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var12); /* substring on <self:Text>*/
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Char#!= (var_l,'\n') on <var_l:Char> */
var22 = var_l == '\n';
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <self:Text> isa SELFTYPE */
type_struct27 = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= self->type->table_size) {
var24 = 0;
} else {
var24 = self->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 441);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#> (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var36 = var_len > 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_ = var30;
if (var30){
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var40 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var44 = var_len - 2l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var37, var38); /* [] on <var37:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var45,'\015') on <var45:nullable Object(Char)> */
var49 = (uint32_t)((long)(var45)>>2);
var48 = (var45 != NULL) && (var49 == '\015');
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var29 = var46;
} else {
var29 = var_;
}
if (var29){
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var52 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var56 = var_len - 2l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var50); /* substring on <self:Text>*/
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var64 = var_len - 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
var65 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var58); /* substring on <self:Text>*/
}
var = var65;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method string#Text#to_cmangle for (self: Text): String */
val* standard___standard__Text___to_cmangle(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_underscore /* var underscore: Bool */;
long var_start /* var start: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
uint32_t var9 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
val* var25 /* : String */;
long var_i /* var i: Int */;
long var26 /* : Int */;
long var_27 /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : SequenceRead[Char] */;
val* var36 /* : nullable Object */;
uint32_t var37 /* : Char */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
short int var_64 /* var : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
long var72 /* : Int */;
long var74 /* : Int */;
val* var75 /* : String */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
long var95 /* : Int */;
long var97 /* : Int */;
val* var98 /* : String */;
long var99 /* : Int */;
long var101 /* : Int */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
{
var1 = standard___standard__Text___is_empty(self);
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
var_res = var6;
var_underscore = 0;
var_start = 0l;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, 0l); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (uint32_t)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var13 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var14 = var_c >= '0';
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var17 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var21 = var_c <= '9';
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var10 = var15;
} else {
var10 = var_;
}
if (var10){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var24 = (long)var_c;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var25 = standard__string___Int___Object__to_s(var22);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var25); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_start = 1l;
} else {
}
var_i = var_start;
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_27 = var26;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_27:Int> isa OTHER */
/* <var_27:Int> isa OTHER */
var30 = 1; /* easy <var_27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var34 = var_i < var_27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var36 = ((val*(*)(val* self, long p0))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var35, var_i); /* [] on <var35:SequenceRead[Char]>*/
}
var37 = (uint32_t)((long)(var36)>>2);
var_c = var37;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var42 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var46 = var_c >= 'a';
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_47 = var40;
if (var40){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var50 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var54 = var_c <= 'z';
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var39 = var48;
} else {
var39 = var_47;
}
var_55 = var39;
if (var39){
var38 = var_55;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var59 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var63 = var_c >= 'A';
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_64 = var57;
if (var57){
{
{ /* Inline kernel#Char#<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var67 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var71 = var_c <= 'Z';
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var56 = var65;
} else {
var56 = var_64;
}
var38 = var56;
}
if (var38){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
goto BREAK_label;
} else {
}
if (var_underscore){
{
{ /* Inline kernel#Char#ascii ('_') on <'_':Char> */
var74 = (long)'_';
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
var75 = standard__string___Int___Object__to_s(var72);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var75); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var79 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var83 = var_c >= '0';
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_84 = var77;
if (var77){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var87 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var91 = var_c <= '9';
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var76 = var85;
} else {
var76 = var_84;
}
if (var76){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
} else {
{
{ /* Inline kernel#Char#== (var_c,'_') on <var_c:Char> */
var94 = var_c == '_';
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
if (var92){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var97 = (long)var_c;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
{
var98 = standard__string___Int___Object__to_s(var95);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var98); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
}
}
BREAK_label: (void)0;
{
var99 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var99;
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
if (var_underscore){
{
{ /* Inline kernel#Char#ascii ('_') on <'_':Char> */
var103 = (long)'_';
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
var104 = standard__string___Int___Object__to_s(var101);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__string__Buffer__append]))(var_res, var104); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
var105 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var105;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_c for (self: Text): String */
val* standard___standard__Text___escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var_oct /* var oct: String */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
long var74 /* : Int */;
val* var75 /* : String */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = standard___standard__Buffer___new(var1);
}
var_b = var2;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
{ /* Inline kernel#Char#== (var_c,'\n') on <var_c:Char> */
var13 = var_c == '\n';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "\\n";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var14); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\t') on <var_c:Char> */
var19 = var_c == '\t';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "\\t";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var21); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\000') on <var_c:Char> */
var26 = var_c == '\000';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "\\000";
var30 = standard___standard__NativeString___to_s_with_length(var29, 4l);
var28 = var30;
varonce27 = var28;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var28); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var33 = var_c == '\"';
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\\\"";
var37 = standard___standard__NativeString___to_s_with_length(var36, 2l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var35); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var40 = var_c == '\'';
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "\\\'";
var44 = standard___standard__NativeString___to_s_with_length(var43, 2l);
var42 = var44;
varonce41 = var42;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var42); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var47 = var_c == '\\';
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\\\\";
var51 = standard___standard__NativeString___to_s_with_length(var50, 2l);
var49 = var51;
varonce48 = var49;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var49); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var54 = (long)var_c;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var52,32l) on <var52:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var57 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var61 = var52 < 32l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var64 = (long)var_c;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
var65 = standard__string___Int___to_base(var62, 8l, 0);
}
var_oct = var65;
{
var66 = ((long(*)(val* self))(var_oct->class->vft[COLOR_standard__string__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel#Int#== (var66,1l) on <var66:Int> */
var69 = var66 == 1l;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
{
var70 = ((long(*)(val* self))(var_oct->class->vft[COLOR_standard__string__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel#Int#== (var70,2l) on <var70:Int> */
var73 = var70 == 2l;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var_oct); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
}
}
}
}
{
var74 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var74;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var75 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var75;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_sh for (self: Text): String */
val* standard___standard__Text___escape_to_sh(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
uint32_t var12 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
val* var24 /* : SequenceRead[Char] */;
val* var25 /* : nullable Object */;
val* var26 /* : String */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = standard___standard__Buffer___new(var1);
}
var_b = var2;
{
var3 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var4 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, var4); /* add on <var3:SequenceRead[Char](Sequence[Char])>*/
}
var_i = 0l;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Char]>*/
}
var12 = (uint32_t)((long)(var11)>>2);
var_c = var12;
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var15 = var_c == '\'';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "\'\\\'\'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 4l);
var16 = var18;
varonce = var16;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var16); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#!= (var_c,'\000') on <var_c:Char> */
var21 = var_c == '\000';
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert \'without_null_byte\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 622);
fatal_exit(1);
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
{
var23 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var24 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var25 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var24, var25); /* add on <var24:SequenceRead[Char](Sequence[Char])>*/
}
{
var26 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_mk for (self: Text): String */
val* standard___standard__Text___escape_to_mk(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
long var66 /* : Int */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : String */;
long var71 /* : Int */;
val* var72 /* : String */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = standard___standard__Buffer___new(var1);
}
var_b = var2;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
{ /* Inline kernel#Char#== (var_c,'$') on <var_c:Char> */
var13 = var_c == '$';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "$$";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var14); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,':') on <var_c:Char> */
var21 = var_c == ':';
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_22 = var19;
if (var19){
var18 = var_22;
} else {
{
{ /* Inline kernel#Char#== (var_c,' ') on <var_c:Char> */
var25 = var_c == ' ';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var18 = var23;
}
var_26 = var18;
if (var18){
var17 = var_26;
} else {
{
{ /* Inline kernel#Char#== (var_c,'#') on <var_c:Char> */
var29 = var_c == '#';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var17 = var27;
}
if (var17){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var36 = (long)var_c;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var34,32l) on <var34:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var39 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var43 = var34 < 32l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_44 = var37;
if (var37){
var33 = var_44;
} else {
{
{ /* Inline kernel#Char#== (var_c,';') on <var_c:Char> */
var47 = var_c == ';';
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var33 = var45;
}
var_48 = var33;
if (var33){
var32 = var_48;
} else {
{
{ /* Inline kernel#Char#== (var_c,'|') on <var_c:Char> */
var51 = var_c == '|';
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var32 = var49;
}
var_52 = var32;
if (var32){
var31 = var_52;
} else {
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var55 = var_c == '\\';
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var31 = var53;
}
var_56 = var31;
if (var31){
var30 = var_56;
} else {
{
{ /* Inline kernel#Char#== (var_c,'=') on <var_c:Char> */
var59 = var_c == '=';
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var30 = var57;
}
if (var30){
if (unlikely(varonce60==NULL)) {
var61 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "?";
var65 = standard___standard__NativeString___to_s_with_length(var64, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var61)->values[0]=var63;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var68 = (long)var_c;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
var69 = standard__string___Int___to_base(var66, 16l, 0);
}
((struct instance_standard__NativeArray*)var61)->values[1]=var69;
{
var70 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_standard__string__Buffer__append]))(var_b, var70); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_standard__string__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
{
var71 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var71;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var72 = ((val*(*)(val* self))(var_b->class->vft[COLOR_standard__string__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#unescape_nit for (self: Text): String */
val* standard___standard__Text___unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
long var2 /* : Int */;
val* var3 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_was_slash /* var was_slash: Bool */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
val* var30 /* : String */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
var3 = standard___standard__Buffer___with_cap(var1, var2);
}
var_res = var3;
var_was_slash = 0;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
var12 = !var_was_slash;
if (var12){
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var15 = var_c == '\\';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var_was_slash = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
goto BREAK_label;
} else {
}
var_was_slash = 0;
{
{ /* Inline kernel#Char#== (var_c,'n') on <var_c:Char> */
var18 = var_c == 'n';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\n'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'r') on <var_c:Char> */
var21 = var_c == 'r';
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\015'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'t') on <var_c:Char> */
var24 = var_c == 't';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\t'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'0') on <var_c:Char> */
var27 = var_c == '0';
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, '\000'); /* add on <var_res:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_standard__string__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
}
}
}
BREAK_label: (void)0;
{
var28 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var28;
} else {
goto BREAK_label29;
}
}
BREAK_label29: (void)0;
{
var30 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#== for (self: Text, nullable Object): Bool */
short int standard___standard__Text___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : SequenceRead[Char] */;
short int var16 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_o, ((val*)NULL)); /* == on <var_o:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_standard__Text.color;
idtype = type_standard__Text.id;
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#is_same_instance (self,var_o) on <self:Text> */
var7 = self == var_o;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
{
var9 = ((long(*)(val* self))(var_o->class->vft[COLOR_standard__string__Text__length]))(var_o); /* length on <var_o:nullable Object(Text)>*/
}
{
{ /* Inline kernel#Int#!= (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var15 = ((val*(*)(val* self))(var_o->class->vft[COLOR_standard__string__Text__chars]))(var_o); /* chars on <var_o:nullable Object(Text)>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:SequenceRead[Char]>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#< for (self: Text, Text): Bool */
short int standard___standard__Text___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_self_chars /* var self_chars: IndexedIterator[Char] */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_other_chars /* var other_chars: IndexedIterator[Char] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
uint32_t var28 /* : Char */;
uint32_t var29 /* : Char */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 810);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:SequenceRead[Char]>*/
}
var_self_chars = var3;
{
var4 = ((val*(*)(val* self))(var_other->class->vft[COLOR_standard__string__Text__chars]))(var_other); /* chars on <var_other:Text>*/
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var4); /* iterator on <var4:SequenceRead[Char]>*/
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
var_ = var7;
if (var7){
{
var8 = ((short int(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_other_chars); /* is_ok on <var_other_chars:IndexedIterator[Char]>*/
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var10 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : (((long)var10&3)?type_info[((long)var10&3)]:var10->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 723);
fatal_exit(1);
}
var17 = (uint32_t)((long)(var9)>>2);
var18 = (uint32_t)((long)(var10)>>2);
var19 = var17 < var18;
var11 = var19;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var21 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#> (var20,var21) on <var20:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var21:nullable Object(Char)> isa OTHER */
/* <var21:nullable Object(Char)> isa OTHER */
var24 = 1; /* easy <var21:nullable Object(Char)> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = var21 == NULL ? "null" : (((long)var21&3)?type_info[((long)var21&3)]:var21->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 725);
fatal_exit(1);
}
var28 = (uint32_t)((long)(var20)>>2);
var29 = (uint32_t)((long)(var21)>>2);
var30 = var28 > var29;
var22 = var30;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_self_chars); /* next on <var_self_chars:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_other_chars); /* next on <var_other_chars:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache for (self: Text): nullable Int */
val* standard___standard__Text___hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache= for (self: Text, nullable Int) */
void standard___standard__Text___hash_cache_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__Text___hash_cache].val = p0; /* _hash_cache on <self:Text> */
RET_LABEL:;
}
/* method string#Text#hash for (self: Text): Int */
long standard___standard__Text___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var_h /* var h: Int */;
long var_i /* var i: Int */;
long var8 /* : Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : SequenceRead[Char] */;
val* var14 /* : nullable Object */;
uint32_t var15 /* : Char */;
uint32_t var_char /* var char: Char */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var41 /* : nullable Int */;
long var42 /* : Int */;
{
{ /* Inline string#Text#hash_cache (self) on <self:Text> */
var3 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
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
var_i = 0l;
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var8;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var12 = var_i < var_;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var14 = ((val*(*)(val* self, long p0))((((long)var13&3)?class_info[((long)var13&3)]:var13->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var13, var_i); /* [] on <var13:SequenceRead[Char]>*/
}
var15 = (uint32_t)((long)(var14)>>2);
var_char = var15;
{
{ /* Inline kernel#Int#lshift (var_h,5l) on <var_h:Int> */
var18 = var_h << 5l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,var_h) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var21 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var25 = var16 + var_h;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var_char) on <var_char:Char> */
var28 = (long)var_char;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var19,var26) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var31 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var35 = var19 + var26;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_h = var29;
{
var36 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#Text#hash_cache= (self,var_h) on <self:Text> */
var38 = (val*)(var_h<<2|1);
self->attrs[COLOR_standard__string__Text___hash_cache].val = var38; /* _hash_cache on <self:Text> */
RET_LABEL37:(void)0;
}
}
} else {
}
{
{ /* Inline string#Text#hash_cache (self) on <self:Text> */
var41 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 856);
fatal_exit(1);
}
var42 = (long)(var39)>>2;
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatText#items for (self: FlatText): NativeString */
char* standard___standard__FlatText___items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#items= for (self: FlatText, NativeString) */
void standard___standard__FlatText___items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatText___items].str = p0; /* _items on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#real_items for (self: FlatText): nullable NativeString */
val* standard___standard__FlatText___real_items(val* self) {
val* var /* : nullable NativeString */;
val* var1 /* : nullable NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#real_items= for (self: FlatText, nullable NativeString) */
void standard___standard__FlatText___real_items_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatText___real_items].val = p0; /* _real_items on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#length for (self: FlatText): Int */
long standard___standard__FlatText___Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#length= for (self: FlatText, Int) */
void standard___standard__FlatText___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatText___length].l = p0; /* _length on <self:FlatText> */
RET_LABEL:;
}
/* method string#StringCharView#target for (self: StringCharView): Text */
val* standard__string___standard__string__StringCharView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target= for (self: StringCharView, Text) */
void standard__string___standard__string__StringCharView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__StringCharView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
self->attrs[COLOR_standard__string__StringCharView___target].val = p0; /* _target on <self:StringCharView> */
RET_LABEL:;
}
/* method string#StringCharView#is_empty for (self: StringCharView): Bool */
short int standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
val* var3 /* : Text */;
short int var4 /* : Bool */;
{
{ /* Inline string#StringCharView#target (self) on <self:StringCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:StringCharView> */
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
var4 = standard___standard__Text___is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#length for (self: StringCharView): Int */
long standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
long var4 /* : Int */;
{
{ /* Inline string#StringCharView#target (self) on <self:StringCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:StringCharView> */
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
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#iterator for (self: StringCharView): IndexedIterator[Char] */
val* standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#init for (self: StringCharView) */
void standard__string___standard__string__StringCharView___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__StringCharView___standard__kernel__Object__init]))(self); /* init on <self:StringCharView>*/
}
RET_LABEL:;
}
/* method string#String#to_s for (self: String): String */
val* standard___standard__String___Object__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_snake_case for (self: String): String */
val* standard___standard__String___to_snake_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_new_str /* var new_str: Buffer */;
short int var_prev_is_lower /* var prev_is_lower: Bool */;
short int var_prev_is_upper /* var prev_is_upper: Bool */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
uint32_t var12 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
val* var34 /* : SequenceRead[Char] */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
uint32_t var44 /* : Char */;
uint32_t var45 /* : Char */;
long var46 /* : Int */;
val* var47 /* : String */;
{
var1 = standard___standard__Text___is_lower(self);
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
var2 = NEW_standard__Buffer(&type_standard__Buffer);
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
var4 = standard___standard__Buffer___with_cap(var2, var3);
}
var_new_str = var4;
var_prev_is_lower = 0;
var_prev_is_upper = 0;
var_i = 0l;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Char]>*/
}
var12 = (uint32_t)((long)(var11)>>2);
var_char = var12;
{
var13 = standard___standard__Char___is_lower(var_char);
}
if (var13){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:Buffer>*/
}
var_prev_is_lower = 1;
var_prev_is_upper = 0;
} else {
{
var14 = standard___standard__Char___is_upper(var_char);
}
if (var14){
if (var_prev_is_lower){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, '_'); /* add on <var_new_str:Buffer>*/
}
} else {
var_17 = var_prev_is_upper;
if (var_prev_is_upper){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var24 = var_i + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#< (var18,var25) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var32 = var18 < var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var16 = var26;
} else {
var16 = var_17;
}
var_33 = var16;
if (var16){
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var41 = var_i + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
var42 = ((val*(*)(val* self, long p0))((((long)var34&3)?class_info[((long)var34&3)]:var34->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var34, var35); /* [] on <var34:SequenceRead[Char]>*/
}
{
var44 = (uint32_t)((long)(var42)>>2);
var43 = standard___standard__Char___is_lower(var44);
}
var15 = var43;
} else {
var15 = var_33;
}
if (var15){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, '_'); /* add on <var_new_str:Buffer>*/
}
} else {
}
}
{
var45 = standard___standard__Char___to_lower(var_char);
}
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var45); /* add on <var_new_str:Buffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_standard__string__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:Buffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 0;
}
}
{
var46 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var46;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var47 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_standard__string__Object__to_s]))(var_new_str); /* to_s on <var_new_str:Buffer>*/
}
var = var47;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt for (self: FlatSubstringsIter): nullable FlatText */
val* standard__string___standard__string__FlatSubstringsIter___tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void standard__string___standard__string__FlatSubstringsIter___tgt_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method string#FlatSubstringsIter#item for (self: FlatSubstringsIter): FlatText */
val* standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
val* var4 /* : nullable FlatText */;
{
var1 = standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1172);
fatal_exit(1);
}
{
{ /* Inline string#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var4 = self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1173);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#is_ok for (self: FlatSubstringsIter): Bool */
short int standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
val* var3 /* : nullable FlatText */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline string#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var3 = self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
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
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable FlatText(FlatText)>*/
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
/* method string#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__next(val* self) {
{
{ /* Inline string#FlatSubstringsIter#tgt= (self,((val*)NULL)) on <self:FlatSubstringsIter> */
self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val = ((val*)NULL); /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatSubstringsIter#init for (self: FlatSubstringsIter) */
void standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init]))(self); /* init on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method string#FlatString#index_from for (self: FlatString): Int */
long standard___standard__FlatString___index_from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_from= for (self: FlatString, Int) */
void standard___standard__FlatString___index_from_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatString___index_from].l = p0; /* _index_from on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#index_to for (self: FlatString): Int */
long standard___standard__FlatString___index_to(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_to= for (self: FlatString, Int) */
void standard___standard__FlatString___index_to_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatString___index_to].l = p0; /* _index_to on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#chars for (self: FlatString): SequenceRead[Char] */
val* standard___standard__FlatString___Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : FlatStringCharView */;
var1 = self->attrs[COLOR_standard__string__FlatString___chars].val != NULL; /* _chars on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__string__FlatString___chars].val; /* _chars on <self:FlatString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1192);
fatal_exit(1);
}
} else {
var3 = NEW_standard__string__FlatStringCharView(&type_standard__string__FlatStringCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatStringCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:FlatStringCharView>*/
}
self->attrs[COLOR_standard__string__FlatString___chars].val = var3; /* _chars on <self:FlatString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatString#[] for (self: FlatString, Int): Char */
uint32_t standard___standard__FlatString___Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
char* var25 /* : NativeString */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
uint32_t var38 /* : Char */;
uint32_t var40 /* : Char */;
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1198);
fatal_exit(1);
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var7 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var14 = var_index + var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var17 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var24 = var8 <= var15;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1199);
fatal_exit(1);
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var27 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var30 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var28) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var33 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var37 = var_index + var28;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var25,var31) on <var25:NativeString> */
var40 = (uint32_t)(unsigned char)var25[var31];
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#substring for (self: FlatString, Int, Int): String */
val* standard___standard__FlatString___Text__substring(val* self, long p0, long p1) {
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
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var_new_from /* var new_from: Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var_new_len /* var new_len: Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : String */;
val* var78 /* : FlatString */;
char* var79 /* : NativeString */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
val* var92 /* : String */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
long var_to /* var to: Int */;
val* var107 /* : FlatString */;
char* var108 /* : NativeString */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
long var117 /* : Int */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
long var124 /* : Int */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1226);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
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
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var25 = var_count < 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var_count = 0l;
} else {
}
var_from = 0l;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var28 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var26,var_from) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var31 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var35 = var26 + var_from;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_new_from = var29;
{
{ /* Inline kernel#Int#+ (var_new_from,var_count) on <var_new_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var38 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var42 = var_new_from + var_count;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var45 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var36,var43) on <var36:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var48 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var52 = var36 > var43;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var55 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var53,var_new_from) on <var53:Int> */
/* Covariant cast for argument 0 (i) <var_new_from:Int> isa OTHER */
/* <var_new_from:Int> isa OTHER */
var58 = 1; /* easy <var_new_from:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var62 = var53 - var_new_from;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var56,1l) on <var56:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var69 = var56 + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_new_len = var63;
{
{ /* Inline kernel#Int#<= (var_new_len,0l) on <var_new_len:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var72 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var76 = var_new_len <= 0l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
{
var77 = standard___standard__FlatString___Text__empty(self);
}
var = var77;
goto RET_LABEL;
} else {
}
var78 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var81 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var84 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var78, var79, var_new_len, var_new_from, var82); /* Direct call string#FlatString#with_infos on <var78:FlatString>*/
}
var = var78;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var87 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var91 = var_count <= 0l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
var92 = standard___standard__FlatString___Text__empty(self);
}
var = var92;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_new_from,var_count) on <var_new_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var95 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var99 = var_new_from + var_count;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var93,1l) on <var93:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var102 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var106 = var93 - 1l;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_to = var100;
var107 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var110 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_to,var_new_from) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_new_from:Int> isa OTHER */
/* <var_new_from:Int> isa OTHER */
var113 = 1; /* easy <var_new_from:Int> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var117 = var_to - var_new_from;
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var111,1l) on <var111:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var120 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var124 = var111 + 1l;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var107, var108, var118, var_new_from, var_to); /* Direct call string#FlatString#with_infos on <var107:FlatString>*/
}
var = var107;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#empty for (self: FlatString): String */
val* standard___standard__FlatString___Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_standard__FlatString.color;
idtype = type_standard__FlatString.id;
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1249);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_upper for (self: FlatString): String */
val* standard___standard__FlatString___String__to_upper(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : NativeString */;
char* var11 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var_out_index /* var out_index: Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var15 /* : Int */;
long var17 /* : Int */;
long var_index_from /* var index_from: Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_max /* var max: Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
uint32_t var28 /* : Char */;
uint32_t var30 /* : Char */;
uint32_t var31 /* : Char */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
var1 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var4 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var8 = var2 + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var5) on <var1:NativeString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_outstr = var9;
var_out_index = 0l;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var14 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_myitems = var12;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var17 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_index_from = var15;
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var20 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_max = var18;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var23 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var27 = var_index_from <= var_max;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var30 = (uint32_t)(unsigned char)var_myitems[var_index_from];
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var31 = standard___standard__Char___to_upper(var28);
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var31) on <var_outstr:NativeString> */
var_outstr[var_out_index]=(unsigned char)var31;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_out_index,1l) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var39 = var_out_index + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_out_index = var33;
{
{ /* Inline kernel#Int#+ (var_index_from,1l) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var46 = var_index_from + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_index_from = var40;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var49 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var47,'\000') on <var_outstr:NativeString> */
var_outstr[var47]=(unsigned char)'\000';
RET_LABEL50:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var53 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = standard___standard__NativeString___to_s_with_length(var_outstr, var51);
}
var = var54;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_lower for (self: FlatString): String */
val* standard___standard__FlatString___String__to_lower(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : NativeString */;
char* var11 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var_out_index /* var out_index: Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var15 /* : Int */;
long var17 /* : Int */;
long var_index_from /* var index_from: Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_max /* var max: Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
uint32_t var28 /* : Char */;
uint32_t var30 /* : Char */;
uint32_t var31 /* : Char */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
var1 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var4 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var8 = var2 + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var5) on <var1:NativeString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_outstr = var9;
var_out_index = 0l;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var14 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_myitems = var12;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var17 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_index_from = var15;
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var20 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_max = var18;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var23 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var27 = var_index_from <= var_max;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var30 = (uint32_t)(unsigned char)var_myitems[var_index_from];
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var31 = standard___standard__Char___to_lower(var28);
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var31) on <var_outstr:NativeString> */
var_outstr[var_out_index]=(unsigned char)var31;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_out_index,1l) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var39 = var_out_index + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_out_index = var33;
{
{ /* Inline kernel#Int#+ (var_index_from,1l) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var46 = var_index_from + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_index_from = var40;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var49 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var47,'\000') on <var_outstr:NativeString> */
var_outstr[var47]=(unsigned char)'\000';
RET_LABEL50:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var53 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = standard___standard__NativeString___to_s_with_length(var_outstr, var51);
}
var = var54;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#with_infos for (self: FlatString, NativeString, Int, Int, Int) */
void standard___standard__FlatString___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_length /* var length: Int */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
{
{ /* Inline kernel#Object#init (self) on <self:FlatString> */
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_length = p1;
var_from = p2;
var_to = p3;
{
{ /* Inline string#FlatText#items= (self,var_items) on <self:FlatString> */
self->attrs[COLOR_standard__string__FlatText___items].str = var_items; /* _items on <self:FlatString> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (self,var_length) on <self:FlatString> */
self->attrs[COLOR_standard__string__FlatText___length].l = var_length; /* _length on <self:FlatString> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from= (self,var_from) on <self:FlatString> */
self->attrs[COLOR_standard__string__FlatString___index_from].l = var_from; /* _index_from on <self:FlatString> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to= (self,var_to) on <self:FlatString> */
self->attrs[COLOR_standard__string__FlatString___index_to].l = var_to; /* _index_to on <self:FlatString> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatString#to_cstring for (self: FlatString): NativeString */
char* standard___standard__FlatString___Text__to_cstring(val* self) {
char* var /* : NativeString */;
val* var1 /* : nullable NativeString */;
val* var3 /* : nullable NativeString */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
val* var_other9 /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable NativeString */;
val* var16 /* : nullable NativeString */;
char* var17 /* : NativeString */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var25 /* : Int */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
char* var_newItems /* var newItems: NativeString */;
char* var29 /* : NativeString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var44 /* : nullable NativeString */;
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatString> */
var3 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatString> */
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
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable NativeString> */
var_other = ((val*)NULL);
{ /* Inline kernel#Object#== (var1,var_other) on <var1:nullable NativeString(NativeString)> */
var_other9 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other9) on <var1:nullable NativeString(NativeString)> */
var12 = var1 == var_other9 || (var_other9 != NULL && (!((long)var_other9&3)) && var1->class == var_other9->class && ((struct instance_standard__NativeString*)var1)->value == ((struct instance_standard__NativeString*)var_other9)->value);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var13 = !var7;
var5 = var13;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatString> */
var16 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatString> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1319);
fatal_exit(1);
}
var17 = ((struct instance_standard__NativeString*)var14)->value; /* autounbox from nullable NativeString to NativeString */;
var = var17;
goto RET_LABEL;
} else {
var18 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var21 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var19,1l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var25 = var19 + 1l;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var18,var22) on <var18:NativeString> */
var28 = (char*)nit_alloc(var22);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_newItems = var26;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var31 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var34 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var37 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var29,var_newItems,var32,var35,0l) on <var29:NativeString> */
memmove(var_newItems+0l,var29+var35,var32);
RET_LABEL38:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var41 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_newItems,var39,'\000') on <var_newItems:NativeString> */
var_newItems[var39]=(unsigned char)'\000';
RET_LABEL42:(void)0;
}
}
{
{ /* Inline string#FlatText#real_items= (self,var_newItems) on <self:FlatString> */
var44 = BOX_standard__NativeString(var_newItems); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_standard__string__FlatText___real_items].val = var44; /* _real_items on <self:FlatString> */
RET_LABEL43:(void)0;
}
}
var = var_newItems;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatString#== for (self: FlatString, nullable Object): Bool */
short int standard___standard__FlatString___standard__kernel__Object___61d_61d(val* self, val* p0) {
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
long var15 /* : Int */;
long var_my_length /* var my_length: Int */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_my_index /* var my_index: Int */;
long var26 /* : Int */;
long var28 /* : Int */;
long var_its_index /* var its_index: Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name;
long var34 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var35 /* : NativeString */;
char* var37 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
char* var38 /* : NativeString */;
char* var40 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
uint32_t var48 /* : Char */;
uint32_t var50 /* : Char */;
uint32_t var51 /* : Char */;
uint32_t var53 /* : Char */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
var_other = p0;
/* <var_other:nullable Object> isa FlatString */
cltype = type_standard__FlatString.color;
idtype = type_standard__FlatString.id;
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
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard___standard__FlatString___standard__kernel__Object___61d_61d]))(self, p0); /* == on <self:FlatString>*/
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
{ /* Inline kernel#Object#object_id (var_other) on <var_other:nullable Object(FlatString)> */
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
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var15 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_my_length = var13;
{
{ /* Inline string#FlatText#length (var_other) on <var_other:nullable Object(FlatString)> */
var18 = var_other->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_other:nullable Object(FlatString)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var16,var_my_length) on <var16:Int> */
var21 = var16 == var_my_length;
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var25 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_my_index = var23;
{
{ /* Inline string#FlatString#index_from (var_other) on <var_other:nullable Object(FlatString)> */
var28 = var_other->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_other:nullable Object(FlatString)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_its_index = var26;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var31 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var34 = var_my_index + var_my_length;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_last_iteration = var29;
{
{ /* Inline string#FlatText#items (var_other) on <var_other:nullable Object(FlatString)> */
var37 = var_other->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_other:nullable Object(FlatString)> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_itsitems = var35;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var40 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_myitems = var38;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var43 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var47 = var_my_index < var_last_iteration;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline string#NativeString#[] (var_myitems,var_my_index) on <var_myitems:NativeString> */
var50 = (uint32_t)(unsigned char)var_myitems[var_my_index];
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_itsitems,var_its_index) on <var_itsitems:NativeString> */
var53 = (uint32_t)(unsigned char)var_itsitems[var_its_index];
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var48,var51) on <var48:Char> */
var56 = var48 == var51;
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_my_index,1l) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var64 = var_my_index + 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_my_index = var58;
{
{ /* Inline kernel#Int#+ (var_its_index,1l) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var67 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var71 = var_its_index + 1l;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_its_index = var65;
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
/* method string#FlatString#< for (self: FlatString, Text): Bool */
short int standard___standard__FlatString___standard__kernel__Comparable___60d(val* self, val* p0) {
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
long var16 /* : Int */;
long var18 /* : Int */;
long var_curr_id_self /* var curr_id_self: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_curr_id_other /* var curr_id_other: Int */;
char* var22 /* : NativeString */;
char* var24 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var25 /* : NativeString */;
char* var27 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
long var28 /* : Int */;
long var30 /* : Int */;
long var_my_length /* var my_length: Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var_its_length /* var its_length: Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var_max_iterations /* var max_iterations: Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
uint32_t var48 /* : Char */;
uint32_t var50 /* : Char */;
uint32_t var_my_curr_char /* var my_curr_char: Char */;
uint32_t var51 /* : Char */;
uint32_t var53 /* : Char */;
uint32_t var_its_curr_char /* var its_curr_char: Char */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
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
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1356);
fatal_exit(1);
}
var_other = p0;
/* <var_other:Text> isa FlatString */
cltype3 = type_standard__FlatString.color;
idtype4 = type_standard__FlatString.id;
if(cltype3 >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype3] == idtype4;
}
var5 = !var2;
if (var5){
{
var6 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_standard___standard__FlatString___standard__kernel__Comparable___60d]))(self, p0); /* < on <self:FlatString>*/
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
{ /* Inline kernel#Object#object_id (var_other) on <var_other:Text(FlatString)> */
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
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var18 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_curr_id_self = var16;
{
{ /* Inline string#FlatString#index_from (var_other) on <var_other:Text(FlatString)> */
var21 = var_other->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_other:Text(FlatString)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_curr_id_other = var19;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var24 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_my_items = var22;
{
{ /* Inline string#FlatText#items (var_other) on <var_other:Text(FlatString)> */
var27 = var_other->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_other:Text(FlatString)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_its_items = var25;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var30 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_my_length = var28;
{
{ /* Inline string#FlatText#length (var_other) on <var_other:Text(FlatString)> */
var33 = var_other->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_other:Text(FlatString)> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_its_length = var31;
{
{ /* Inline kernel#Int#+ (var_curr_id_self,var_my_length) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var36 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var40 = var_curr_id_self + var_my_length;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_max_iterations = var34;
for(;;) {
{
{ /* Inline kernel#Int#< (var_curr_id_self,var_max_iterations) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_max_iterations:Int> isa OTHER */
/* <var_max_iterations:Int> isa OTHER */
var43 = 1; /* easy <var_max_iterations:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var47 = var_curr_id_self < var_max_iterations;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline string#NativeString#[] (var_my_items,var_curr_id_self) on <var_my_items:NativeString> */
var50 = (uint32_t)(unsigned char)var_my_items[var_curr_id_self];
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_my_curr_char = var48;
{
{ /* Inline string#NativeString#[] (var_its_items,var_curr_id_other) on <var_its_items:NativeString> */
var53 = (uint32_t)(unsigned char)var_its_items[var_curr_id_other];
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_its_curr_char = var51;
{
{ /* Inline kernel#Char#!= (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
var56 = var_my_curr_char == var_its_curr_char;
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
{ /* Inline kernel#Char#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Char> isa OTHER */
/* <var_its_curr_char:Char> isa OTHER */
var60 = 1; /* easy <var_its_curr_char:Char> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 723);
fatal_exit(1);
}
var64 = var_my_curr_char < var_its_curr_char;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_curr_id_self,1l) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var67 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var71 = var_curr_id_self + 1l;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_curr_id_self = var65;
{
{ /* Inline kernel#Int#+ (var_curr_id_other,1l) on <var_curr_id_other:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var74 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var78 = var_curr_id_other + 1l;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var_curr_id_other = var72;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var81 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var85 = var_my_length < var_its_length;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var = var79;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#* for (self: FlatString, Int): String */
val* standard___standard__FlatString___String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_my_length /* var my_length: Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_final_length /* var final_length: Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
long var_current_last /* var current_last: Int */;
long var_iteration /* var iteration: Int */;
long var_ /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1422);
fatal_exit(1);
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var7 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_my_length = var5;
{
{ /* Inline kernel#Int#* (var_my_length,var_i) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var10 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var14 = var_my_length * var_i;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_final_length = var8;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var17 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_my_items = var15;
var18 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_final_length,1l) on <var_final_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var25 = var_final_length + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var18,var19) on <var18:NativeString> */
var28 = (char*)nit_alloc(var19);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_target_string = var26;
{
{ /* Inline string#NativeString#[]= (var_target_string,var_final_length,'\000') on <var_target_string:NativeString> */
var_target_string[var_final_length]=(unsigned char)'\000';
RET_LABEL29:(void)0;
}
}
var_current_last = 0l;
var_iteration = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_iteration,var_) on <var_iteration:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var32 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var36 = var_iteration <= var_;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline string#NativeString#copy_to (var_my_items,var_target_string,var_my_length,0l,var_current_last) on <var_my_items:NativeString> */
memmove(var_target_string+var_current_last,var_my_items+0l,var_my_length);
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_current_last,var_my_length) on <var_current_last:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var40 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var44 = var_current_last + var_my_length;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_current_last = var38;
{
var45 = standard___standard__Int___Discrete__successor(var_iteration, 1l);
}
var_iteration = var45;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var46 = standard___standard__NativeString___to_s_with_length(var_target_string, var_final_length);
}
var = var46;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#hash for (self: FlatString): Int */
long standard___standard__FlatString___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var_h /* var h: Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_i /* var i: Int */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var14 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
uint32_t var31 /* : Char */;
uint32_t var33 /* : Char */;
long var34 /* : Int */;
long var36 /* : Int */;
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
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var55 /* : nullable Int */;
long var56 /* : Int */;
{
{ /* Inline string#Text#hash_cache (self) on <self:FlatString> */
var3 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
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
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var10 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_i = var8;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var13 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_myitems = var11;
for(;;) {
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var16 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var_i,var14) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var19 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var20 = var_i <= var14;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel#Int#lshift (var_h,5l) on <var_h:Int> */
var23 = var_h << 5l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var21,var_h) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var26 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var30 = var21 + var_h;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_myitems,var_i) on <var_myitems:NativeString> */
var33 = (uint32_t)(unsigned char)var_myitems[var_i];
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var31) on <var31:Char> */
var36 = (long)var31;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var24,var34) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var39 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var43 = var24 + var34;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_h = var37;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var50 = var_i + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_i = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#Text#hash_cache= (self,var_h) on <self:FlatString> */
var52 = (val*)(var_h<<2|1);
self->attrs[COLOR_standard__string__Text___hash_cache].val = var52; /* _hash_cache on <self:FlatString> */
RET_LABEL51:(void)0;
}
}
} else {
}
{
{ /* Inline string#Text#hash_cache (self) on <self:FlatString> */
var55 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1461);
fatal_exit(1);
}
var56 = (long)(var53)>>2;
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#substrings for (self: FlatString): Iterator[FlatText] */
val* standard___standard__FlatString___Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_standard__string__FlatSubstringsIter(&type_standard__string__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target for (self: FlatStringIterator): FlatString */
val* standard__string___standard__string__FlatStringIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_standard__string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1496);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target= for (self: FlatStringIterator, FlatString) */
void standard__string___standard__string__FlatStringIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatStringIterator___target].val = p0; /* _target on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#target_items for (self: FlatStringIterator): NativeString */
char* standard__string___standard__string__FlatStringIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatStringIterator___target_items].str; /* _target_items on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target_items= for (self: FlatStringIterator, NativeString) */
void standard__string___standard__string__FlatStringIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatStringIterator___target_items].str = p0; /* _target_items on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#curr_pos for (self: FlatStringIterator): Int */
long standard__string___standard__string__FlatStringIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#curr_pos= for (self: FlatStringIterator, Int) */
void standard__string___standard__string__FlatStringIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#with_pos for (self: FlatStringIterator, FlatString, Int) */
void standard__string___standard__string__FlatStringIterator___with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatString */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
char* var3 /* : NativeString */;
val* var5 /* : FlatString */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
var_tgt = p0;
var_pos = p1;
{
{ /* Inline string#FlatStringIterator#target= (self,var_tgt) on <self:FlatStringIterator> */
self->attrs[COLOR_standard__string__FlatStringIterator___target].val = var_tgt; /* _target on <self:FlatStringIterator> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var_tgt) on <var_tgt:FlatString> */
var3 = var_tgt->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_tgt:FlatString> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target_items= (self,var) on <self:FlatStringIterator> */
self->attrs[COLOR_standard__string__FlatStringIterator___target_items].str = var; /* _target_items on <self:FlatStringIterator> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target (self) on <self:FlatStringIterator> */
var7 = self->attrs[COLOR_standard__string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1496);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var5) on <var5:FlatString> */
var10 = var5->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var5:FlatString> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,var8) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var14 = var_pos + var8;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#curr_pos= (self,var11) on <self:FlatStringIterator> */
self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l = var11; /* _curr_pos on <self:FlatStringIterator> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatStringIterator#is_ok for (self: FlatStringIterator): Bool */
short int standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
{
{ /* Inline string#FlatStringIterator#curr_pos (self) on <self:FlatStringIterator> */
var3 = self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target (self) on <self:FlatStringIterator> */
var6 = self->attrs[COLOR_standard__string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1496);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (var4) on <var4:FlatString> */
var9 = var4->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <var4:FlatString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var13 = var1 <= var7;
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
/* method string#FlatStringIterator#item for (self: FlatStringIterator): Char */
uint32_t standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
uint32_t var9 /* : Char */;
{
{ /* Inline string#FlatStringIterator#target_items (self) on <self:FlatStringIterator> */
var3 = self->attrs[COLOR_standard__string__FlatStringIterator___target_items].str; /* _target_items on <self:FlatStringIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#curr_pos (self) on <self:FlatStringIterator> */
var6 = self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
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
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#next for (self: FlatStringIterator) */
void standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringIterator */;
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
{ /* Inline string#FlatStringIterator#curr_pos (var_) on <var_:FlatStringIterator> */
var2 = var_->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringIterator> */
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
{ /* Inline string#FlatStringIterator#curr_pos= (var_,var3) on <var_:FlatStringIterator> */
var_->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatStringIterator#index for (self: FlatStringIterator): Int */
long standard__string___standard__string__FlatStringIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
{
{ /* Inline string#FlatStringIterator#curr_pos (self) on <self:FlatStringIterator> */
var3 = self->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target (self) on <self:FlatStringIterator> */
var6 = self->attrs[COLOR_standard__string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1496);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var4) on <var4:FlatString> */
var9 = var4->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var4:FlatString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var13 = var1 - var7;
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
/* method string#FlatStringIterator#init for (self: FlatStringIterator) */
void standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init]))(self); /* init on <self:FlatStringIterator>*/
}
RET_LABEL:;
}
/* method string#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
uint32_t standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Text */;
val* var7 /* : Text */;
val* var_target /* var target: FlatString */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
char* var28 /* : NativeString */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
uint32_t var41 /* : Char */;
uint32_t var43 /* : Char */;
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1528);
fatal_exit(1);
}
{
{ /* Inline string#StringCharView#target (self) on <self:FlatStringCharView> */
var7 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_target = var5;
{
{ /* Inline string#FlatString#index_from (var_target) on <var_target:FlatString> */
var10 = var_target->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_target:FlatString> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var8) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var17 = var_index + var8;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (var_target) on <var_target:FlatString> */
var20 = var_target->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <var_target:FlatString> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var11,var18) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var23 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var27 = var11 <= var18;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1530);
fatal_exit(1);
}
{
{ /* Inline string#FlatText#items (var_target) on <var_target:FlatString> */
var30 = var_target->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_target:FlatString> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_target) on <var_target:FlatString> */
var33 = var_target->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_target:FlatString> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var31) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var36 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var40 = var_index + var31;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var28,var34) on <var28:NativeString> */
var43 = (uint32_t)(unsigned char)var28[var34];
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_standard__string__FlatStringIterator(&type_standard__string__FlatStringIterator);
{
{ /* Inline string#StringCharView#target (self) on <self:FlatStringCharView> */
var4 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
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
standard__string___standard__string__FlatStringIterator___with_pos(var1, var2, var_start); /* Direct call string#FlatStringIterator#with_pos on <var1:FlatStringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#new for (self: Buffer): Buffer */
val* standard___standard__Buffer___new(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void(*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#with_cap for (self: Buffer, Int): Buffer */
val* standard___standard__Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
long var_i /* var i: Int */;
val* var1 /* : FlatBuffer */;
var_i = p0;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
standard___standard__FlatBuffer___with_capacity(var1, var_i); /* Direct call string#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty for (self: Buffer): Bool */
short int standard___standard__Buffer___is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__string__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty= for (self: Buffer, Bool) */
void standard___standard__Buffer___is_dirty_61d(val* self, short int p0) {
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = p0; /* _is_dirty on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#written= for (self: Buffer, Bool) */
void standard___standard__Buffer___written_61d(val* self, short int p0) {
self->attrs[COLOR_standard__string__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#add for (self: Buffer, Char) */
void standard___standard__Buffer___add(val* self, uint32_t p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1568);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#enlarge for (self: Buffer, Int) */
void standard___standard__Buffer___enlarge(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "enlarge", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1582);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#append for (self: Buffer, Text) */
void standard___standard__Buffer___append(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "append", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1585);
fatal_exit(1);
RET_LABEL:;
}
/* method string#Buffer#hash for (self: Buffer): Int */
long standard___standard__Buffer___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var5 /* : Int */;
{
{ /* Inline string#Buffer#is_dirty (self) on <self:Buffer> */
var3 = self->attrs[COLOR_standard__string__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline string#Text#hash_cache= (self,((val*)NULL)) on <self:Buffer> */
self->attrs[COLOR_standard__string__Text___hash_cache].val = ((val*)NULL); /* _hash_cache on <self:Buffer> */
RET_LABEL4:(void)0;
}
}
} else {
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_standard___standard__Buffer___standard__kernel__Object__hash]))(self); /* hash on <self:Buffer>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#chars for (self: Buffer): Sequence[Char] */
val* standard___standard__Buffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1663);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#chars for (self: FlatBuffer): Sequence[Char] */
val* standard___standard__FlatBuffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : FlatBufferCharView */;
var1 = self->attrs[COLOR_standard__string__FlatBuffer___chars].val != NULL; /* _chars on <self:FlatBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <self:FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1673);
fatal_exit(1);
}
} else {
var3 = NEW_standard__string__FlatBufferCharView(&type_standard__string__FlatBufferCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatBufferCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:FlatBufferCharView>*/
}
self->attrs[COLOR_standard__string__FlatBuffer___chars].val = var3; /* _chars on <self:FlatBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#capacity for (self: FlatBuffer): Int */
long standard___standard__FlatBuffer___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#capacity= for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___capacity_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method string#FlatBuffer#substrings for (self: FlatBuffer): Iterator[FlatText] */
val* standard___standard__FlatBuffer___Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_standard__string__FlatSubstringsIter(&type_standard__string__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#[] for (self: FlatBuffer, Int): Char */
uint32_t standard___standard__FlatBuffer___Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
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
var_index = p0;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1694);
fatal_exit(1);
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var7 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var14 = var_index < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1695);
fatal_exit(1);
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var17 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var15,var_index) on <var15:NativeString> */
var20 = (uint32_t)(unsigned char)var15[var_index];
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#add for (self: FlatBuffer, Char) */
void standard___standard__FlatBuffer___Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
char* var21 /* : NativeString */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var_ /* var : FlatBuffer */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
var_c = p0;
{
{ /* Inline string#Buffer#is_dirty= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = 1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var6 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var,var4) on <var:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var10 = var <= var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var13 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var11,5l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var16 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var20 = var11 + 5l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__enlarge(self, var14); /* Direct call string#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
} else {
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var23 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var26 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var21,var24,var_c) on <var21:NativeString> */
var21[var24]=(unsigned char)var_c;
RET_LABEL27:(void)0;
}
}
var_ = self;
{
{ /* Inline string#FlatText#length (var_) on <var_:FlatBuffer> */
var30 = var_->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_:FlatBuffer> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var37 = var28 + 1l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (var_,var31) on <var_:FlatBuffer> */
var_->attrs[COLOR_standard__string__FlatText___length].l = var31; /* _length on <var_:FlatBuffer> */
RET_LABEL38:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#empty for (self: FlatBuffer): Buffer */
val* standard___standard__FlatBuffer___Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
var1 = NEW_standard__Buffer(&type_standard__Buffer);
{
var2 = standard___standard__Buffer___new(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#enlarge for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___Buffer__enlarge(val* self, long p0) {
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
char* var29 /* : NativeString */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
char* var37 /* : NativeString */;
char* var39 /* : NativeString */;
char* var_a /* var a: NativeString */;
long var40 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
char* var50 /* : NativeString */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
long var55 /* : Int */;
var_cap = p0;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
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
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
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
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
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
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
{ /* Inline string#Buffer#written= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___written].s = 0; /* _written on <self:FlatBuffer> */
RET_LABEL28:(void)0;
}
}
var29 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_c,1l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var36 = var_c + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var29,var30) on <var29:NativeString> */
var39 = (char*)nit_alloc(var30);
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_a = var37;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var42 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var40,0l) on <var40:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var45 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var49 = var40 > 0l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var52 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var55 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var50,var_a,var53,0l,0l) on <var50:NativeString> */
memmove(var_a+0l,var50+0l,var53);
RET_LABEL56:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#items= (self,var_a) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
RET_LABEL57:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_c) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var_c; /* _capacity on <self:FlatBuffer> */
RET_LABEL58:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#to_s for (self: FlatBuffer): String */
val* standard___standard__FlatBuffer___Object__to_s(val* self) {
val* var /* : String */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
char* var8 /* : NativeString */;
char* var9 /* : NativeString */;
char* var11 /* : NativeString */;
val* var13 /* : FlatString */;
char* var14 /* : NativeString */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var26 /* : Int */;
{
{ /* Inline string#Buffer#written= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___written].s = 1; /* _written on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var4 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var2,0l) on <var2:Int> */
var7 = var2 == 0l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var8 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var8,1l) on <var8:NativeString> */
var11 = (char*)nit_alloc(1l);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var9) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var9; /* _items on <self:FlatBuffer> */
RET_LABEL12:(void)0;
}
}
} else {
}
var13 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var16 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var19 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var22 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var26 = var20 - 1l;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var13, var14, var17, 0l, var23); /* Direct call string#FlatString#with_infos on <var13:FlatString>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#to_cstring for (self: FlatBuffer): NativeString */
char* standard___standard__FlatBuffer___Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
char* var_new_native /* var new_native: NativeString */;
long var15 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
char* var29 /* : NativeString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
long var34 /* : Int */;
val* var37 /* : nullable NativeString */;
val* var39 /* : nullable NativeString */;
val* var41 /* : nullable NativeString */;
char* var42 /* : NativeString */;
{
{ /* Inline string#Buffer#is_dirty (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_standard__string__Buffer___is_dirty].s; /* _is_dirty on <self:FlatBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var7 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var11 = var5 + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var4,var8) on <var4:NativeString> */
var14 = (char*)nit_alloc(var8);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_new_native = var12;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var17 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var_new_native,var15,'\000') on <var_new_native:NativeString> */
var_new_native[var15]=(unsigned char)'\000';
RET_LABEL18:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var21 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var19,0l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var24 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var28 = var19 > 0l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var31 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var34 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var29,var_new_native,var32,0l,0l) on <var29:NativeString> */
memmove(var_new_native+0l,var29+0l,var32);
RET_LABEL35:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#real_items= (self,var_new_native) on <self:FlatBuffer> */
var37 = BOX_standard__NativeString(var_new_native); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_standard__string__FlatText___real_items].val = var37; /* _real_items on <self:FlatBuffer> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline string#Buffer#is_dirty= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = 0; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL38:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatBuffer> */
var41 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatBuffer> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1756);
fatal_exit(1);
}
var42 = ((struct instance_standard__NativeString*)var39)->value; /* autounbox from nullable NativeString to NativeString */;
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#init for (self: FlatBuffer) */
void standard___standard__FlatBuffer___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method string#FlatBuffer#with_infos for (self: FlatBuffer, NativeString, Int, Int) */
void standard___standard__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2) {
char* var_items /* var items: NativeString */;
long var_capacity /* var capacity: Int */;
long var_length /* var length: Int */;
{
{ /* Inline string#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_capacity = p1;
var_length = p2;
{
{ /* Inline string#FlatText#items= (self,var_items) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var_items; /* _items on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (self,var_length) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___length].l = var_length; /* _length on <self:FlatBuffer> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_capacity) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var_capacity; /* _capacity on <self:FlatBuffer> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#from for (self: FlatBuffer, Text) */
void standard___standard__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var7 /* : Int */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
char* var23 /* : NativeString */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
char* var36 /* : NativeString */;
char* var38 /* : NativeString */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
long var44 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var_i /* var i: Int */;
long var46 /* : Int */;
long var_ /* var : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
val* var54 /* : SequenceRead[Char] */;
val* var55 /* : nullable Object */;
uint32_t var56 /* : Char */;
uint32_t var_c /* var c: Char */;
char* var57 /* : NativeString */;
char* var59 /* : NativeString */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
{
{ /* Inline string#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_s = p0;
{
var = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var5 = var + 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var2) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var2; /* _capacity on <self:FlatBuffer> */
RET_LABEL6:(void)0;
}
}
{
var7 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
{ /* Inline string#FlatText#length= (self,var7) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___length].l = var7; /* _length on <self:FlatBuffer> */
RET_LABEL8:(void)0;
}
}
var9 = NULL/*special!*/;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var12 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var9,var10) on <var9:NativeString> */
var15 = (char*)nit_alloc(var10);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var13) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var13; /* _items on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
/* <var_s:Text> isa FlatString */
cltype18 = type_standard__FlatString.color;
idtype19 = type_standard__FlatString.id;
if(cltype18 >= var_s->type->table_size) {
var17 = 0;
} else {
var17 = var_s->type->type_table[cltype18] == idtype19;
}
if (var17){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var22 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var25 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var28 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var31 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var20,var23,var26,var29,0l) on <var20:NativeString> */
memmove(var23+0l,var20+var29,var26);
RET_LABEL32:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype34 = type_standard__FlatBuffer.color;
idtype35 = type_standard__FlatBuffer.id;
if(cltype34 >= var_s->type->table_size) {
var33 = 0;
} else {
var33 = var_s->type->type_table[cltype34] == idtype35;
}
if (var33){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var38 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var41 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var44 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var36,var39,var42,0l,0l) on <var36:NativeString> */
memmove(var39+0l,var36+0l,var42);
RET_LABEL45:(void)0;
}
}
} else {
var_curr_pos = 0l;
var_i = 0l;
{
var46 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_ = var46;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var49 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var53 = var_i < var_;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
var54 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Text>*/
}
{
var55 = ((val*(*)(val* self, long p0))((((long)var54&3)?class_info[((long)var54&3)]:var54->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var54, var_i); /* [] on <var54:SequenceRead[Char]>*/
}
var56 = (uint32_t)((long)(var55)>>2);
var_c = var56;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var59 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var57,var_curr_pos,var_c) on <var57:NativeString> */
var57[var_curr_pos]=(unsigned char)var_c;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_curr_pos,1l) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var67 = var_curr_pos + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_curr_pos = var61;
{
var68 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var68;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#with_capacity for (self: FlatBuffer, Int) */
void standard___standard__FlatBuffer___with_capacity(val* self, long p0) {
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
{ /* Inline string#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1799);
fatal_exit(1);
}
var5 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_cap,1l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var12 = var_cap + 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var5,var6) on <var5:NativeString> */
var15 = (char*)nit_alloc(var6);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var13) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var13; /* _items on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_cap) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var_cap; /* _capacity on <self:FlatBuffer> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (self,0l) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___length].l = 0l; /* _length on <self:FlatBuffer> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#append for (self: FlatBuffer, Text) */
void standard___standard__FlatBuffer___Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
long var2 /* : Int */;
long var_sl /* var sl: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
char* var33 /* : NativeString */;
char* var35 /* : NativeString */;
char* var36 /* : NativeString */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
char* var49 /* : NativeString */;
char* var51 /* : NativeString */;
char* var52 /* : NativeString */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var_i /* var i: Int */;
long var62 /* : Int */;
long var_ /* var : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
val* var70 /* : SequenceRead[Char] */;
val* var71 /* : nullable Object */;
uint32_t var72 /* : Char */;
uint32_t var_c /* var c: Char */;
char* var73 /* : NativeString */;
char* var75 /* : NativeString */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
val* var_85 /* var : FlatBuffer */;
long var86 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
var_s = p0;
{
var = standard___standard__Text___is_empty(var_s);
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline string#Buffer#is_dirty= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = 1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_sl = var2;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var5 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var8 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var6,var_sl) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var11 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var12 = var6 + var_sl;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var3,var9) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var15 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var19 = var3 < var9;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var22 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var20,var_sl) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var25 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var29 = var20 + var_sl;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__enlarge(self, var23); /* Direct call string#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
} else {
}
/* <var_s:Text> isa FlatString */
cltype31 = type_standard__FlatString.color;
idtype32 = type_standard__FlatString.id;
if(cltype31 >= var_s->type->table_size) {
var30 = 0;
} else {
var30 = var_s->type->type_table[cltype31] == idtype32;
}
if (var30){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var35 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var38 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var41 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var44 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var33,var36,var_sl,var39,var42) on <var33:NativeString> */
memmove(var36+var42,var33+var39,var_sl);
RET_LABEL45:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype47 = type_standard__FlatBuffer.color;
idtype48 = type_standard__FlatBuffer.id;
if(cltype47 >= var_s->type->table_size) {
var46 = 0;
} else {
var46 = var_s->type->type_table[cltype47] == idtype48;
}
if (var46){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var51 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var54 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var57 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var49,var52,var_sl,0l,var55) on <var49:NativeString> */
memmove(var52+var55,var49+0l,var_sl);
RET_LABEL58:(void)0;
}
}
} else {
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var61 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var_curr_pos = var59;
var_i = 0l;
{
var62 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_ = var62;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var65 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var69 = var_i < var_;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
{
var70 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s); /* chars on <var_s:Text>*/
}
{
var71 = ((val*(*)(val* self, long p0))((((long)var70&3)?class_info[((long)var70&3)]:var70->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var70, var_i); /* [] on <var70:SequenceRead[Char]>*/
}
var72 = (uint32_t)((long)(var71)>>2);
var_c = var72;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var75 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var73,var_curr_pos,var_c) on <var73:NativeString> */
var73[var_curr_pos]=(unsigned char)var_c;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_curr_pos,1l) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var83 = var_curr_pos + 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_curr_pos = var77;
{
var84 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var84;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
var_85 = self;
{
{ /* Inline string#FlatText#length (var_85) on <var_85:FlatBuffer> */
var88 = var_85->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_85:FlatBuffer> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var86,var_sl) on <var86:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var91 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var95 = var86 + var_sl;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (var_85,var89) on <var_85:FlatBuffer> */
var_85->attrs[COLOR_standard__string__FlatText___length].l = var89; /* _length on <var_85:FlatBuffer> */
RET_LABEL96:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#substring for (self: FlatBuffer, Int, Int): Buffer */
val* standard___standard__FlatBuffer___Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
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
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
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
long var_len /* var len: Int */;
char* var46 /* : NativeString */;
char* var47 /* : NativeString */;
char* var49 /* : NativeString */;
char* var_r_items /* var r_items: NativeString */;
char* var50 /* : NativeString */;
char* var52 /* : NativeString */;
val* var54 /* : FlatBuffer */;
val* var_r /* var r: FlatBuffer */;
val* var55 /* : Buffer */;
val* var56 /* : Buffer */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1838);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
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
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var18 = var_from < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_from = 0l;
} else {
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var21 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_count,var19) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var28 = var_count > var19;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var31 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_count = var29;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var34 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var38 = var_from < var_count;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline kernel#Int#- (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var41 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var45 = var_count - var_from;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_len = var39;
var46 = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var46,var_len) on <var46:NativeString> */
var49 = (char*)nit_alloc(var_len);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_r_items = var47;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var52 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var50,var_r_items,var_len,var_from,0l) on <var50:NativeString> */
memmove(var_r_items+0l,var50+var_from,var_len);
RET_LABEL53:(void)0;
}
}
var54 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
standard___standard__FlatBuffer___with_infos(var54, var_r_items, var_len, var_len); /* Direct call string#FlatBuffer#with_infos on <var54:FlatBuffer>*/
}
var_r = var54;
var = var_r;
goto RET_LABEL;
} else {
var55 = NEW_standard__Buffer(&type_standard__Buffer);
{
var56 = standard___standard__Buffer___new(var55);
}
var = var56;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
uint32_t standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
uint32_t var7 /* : Char */;
uint32_t var9 /* : Char */;
var_index = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
{ /* Inline string#FlatText#items (var1) on <var1:Text(FlatBuffer)> */
var6 = var1->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var4,var_index) on <var4:NativeString> */
var9 = (uint32_t)(unsigned char)var4[var_index];
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
/* method string#FlatBufferCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
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
char* var24 /* : NativeString */;
char* var26 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1932);
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
var_class_name7 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
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
var9 = standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#<= (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1934);
fatal_exit(1);
}
{
var17 = standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(self);
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
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(self, var_item); /* Direct call string#FlatBufferCharView#add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var23 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var21) on <var21:Text(FlatBuffer)> */
var26 = var21->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var21:Text(FlatBuffer)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var24,var_index,var_item) on <var24:NativeString> */
var24[var_index]=(unsigned char)var_item;
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call string#FlatBufferCharView#[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, uint32_t p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1942);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
standard___standard__FlatBuffer___Buffer__add(var1, var_c); /* Direct call string#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(self, var); /* Direct call string#FlatBufferCharView#push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1947);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
standard___standard__FlatBuffer___Buffer__add(var1, var_c); /* Direct call string#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(self, var); /* Direct call string#FlatBufferCharView#add on <self:SimpleCollection[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void standard__string___standard__string__FlatBufferCharView___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
val* var2 /* : Text */;
var_cap = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var2 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__enlarge(var, var_cap); /* Direct call string#FlatBuffer#enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__append(val* self, val* p0) {
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
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Char] */
/* <p0:Collection[Char]> isa Collection[Char] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Char]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Char]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1957);
fatal_exit(1);
}
var_s = p0;
{
var1 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
var_s_length = var1;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
{ /* Inline string#FlatBuffer#capacity (var2) on <var2:Text(FlatBuffer)> */
var7 = var2->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <var2:Text(FlatBuffer)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
{
{ /* Inline kernel#Int#< (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
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
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var18 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 968);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var16) on <var16:Text(FlatBuffer)> */
var21 = var16->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var16:Text(FlatBuffer)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_s_length,var19) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var28 = var_s_length + var19;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
standard__string___standard__string__FlatBufferCharView___enlarge(self, var22); /* Direct call string#FlatBufferCharView#enlarge on <self:FlatBufferCharView>*/
}
} else {
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_standard__string__FlatBufferIterator(&type_standard__string__FlatBufferIterator);
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
standard__string___standard__string__FlatBufferIterator___with_pos(var1, var2, var_pos); /* Direct call string#FlatBufferIterator#with_pos on <var1:FlatBufferIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target for (self: FlatBufferIterator): FlatBuffer */
val* standard__string___standard__string__FlatBufferIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_standard__string__FlatBufferIterator___target].val; /* _target on <self:FlatBufferIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1972);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target= for (self: FlatBufferIterator, FlatBuffer) */
void standard__string___standard__string__FlatBufferIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string__FlatBufferIterator___target].val = p0; /* _target on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#target_items for (self: FlatBufferIterator): NativeString */
char* standard__string___standard__string__FlatBufferIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str; /* _target_items on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target_items= for (self: FlatBufferIterator, NativeString) */
void standard__string___standard__string__FlatBufferIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str = p0; /* _target_items on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#curr_pos for (self: FlatBufferIterator): Int */
long standard__string___standard__string__FlatBufferIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#curr_pos= for (self: FlatBufferIterator, Int) */
void standard__string___standard__string__FlatBufferIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#with_pos for (self: FlatBufferIterator, FlatBuffer, Int) */
void standard__string___standard__string__FlatBufferIterator___with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatBuffer */;
long var_pos /* var pos: Int */;
long var /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
var_tgt = p0;
var_pos = p1;
{
{ /* Inline string#FlatBufferIterator#target= (self,var_tgt) on <self:FlatBufferIterator> */
self->attrs[COLOR_standard__string__FlatBufferIterator___target].val = var_tgt; /* _target on <self:FlatBufferIterator> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_tgt) on <var_tgt:FlatBuffer> */
var3 = var_tgt->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_tgt:FlatBuffer> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var7 = var > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline string#FlatText#items (var_tgt) on <var_tgt:FlatBuffer> */
var10 = var_tgt->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_tgt:FlatBuffer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#target_items= (self,var8) on <self:FlatBufferIterator> */
self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str = var8; /* _target_items on <self:FlatBufferIterator> */
RET_LABEL11:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatBufferIterator#curr_pos= (self,var_pos) on <self:FlatBufferIterator> */
self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l = var_pos; /* _curr_pos on <self:FlatBufferIterator> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#index for (self: FlatBufferIterator): Int */
long standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:FlatBufferIterator> */
var3 = self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#is_ok for (self: FlatBufferIterator): Bool */
short int standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatBuffer */;
val* var6 /* : FlatBuffer */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
{
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:FlatBufferIterator> */
var3 = self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#target (self) on <self:FlatBufferIterator> */
var6 = self->attrs[COLOR_standard__string__FlatBufferIterator___target].val; /* _target on <self:FlatBufferIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1972);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var4) on <var4:FlatBuffer> */
var9 = var4->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var4:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
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
/* method string#FlatBufferIterator#item for (self: FlatBufferIterator): Char */
uint32_t standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
uint32_t var9 /* : Char */;
{
{ /* Inline string#FlatBufferIterator#target_items (self) on <self:FlatBufferIterator> */
var3 = self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str; /* _target_items on <self:FlatBufferIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:FlatBufferIterator> */
var6 = self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
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
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#next for (self: FlatBufferIterator) */
void standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferIterator */;
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
{ /* Inline string#FlatBufferIterator#curr_pos (var_) on <var_:FlatBufferIterator> */
var2 = var_->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferIterator> */
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
{ /* Inline string#FlatBufferIterator#curr_pos= (var_,var3) on <var_:FlatBufferIterator> */
var_->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#init for (self: FlatBufferIterator) */
void standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init]))(self); /* init on <self:FlatBufferIterator>*/
}
RET_LABEL:;
}
/* method string#Object#to_s for (self: Object): String */
val* standard__string___Object___to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__string__Object__inspect]))(self); /* inspect on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#native_class_name for (self: Object): NativeString */
char* standard__string___Object___native_class_name(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
char* var1 /* : NativeString */;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var1 = (char*)var_class_name;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#class_name for (self: Object): String */
val* standard__string___Object___class_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
const char* var_class_name;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Object#native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var3 = (char*)var_class_name;
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
/* method string#Object#inspect for (self: Object): String */
val* standard__string___Object___inspect(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "<";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ">";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = standard__string___Object___inspect_head(self);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#inspect_head for (self: Object): String */
val* standard__string___Object___inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ":#";
var5 = standard___standard__NativeString___to_s_with_length(var4, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = standard__string___Object___class_name(self);
}
((struct instance_standard__NativeArray*)var1)->values[0]=var6;
{
var7 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
{
var8 = standard__string___Int___to_hex(var7);
}
((struct instance_standard__NativeArray*)var1)->values[2]=var8;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Bool#to_s for (self: Bool): String */
val* standard__string___Bool___Object__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
static int varonce6_guard;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
if (self){
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "true";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (likely(varonce6_guard)) {
var7 = varonce6;
} else {
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "false";
var11 = standard___standard__NativeString___to_s_with_length(var10, 5l);
var9 = var11;
varonce8 = var9;
}
var7 = var9;
varonce6 = var7;
varonce6_guard = 1;
}
var = var7;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Bool#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Bool___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
short int var2 /* : Bool */;
var2 = (short int)((long)(self)>>2);
var1 = standard__string___Bool___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Byte#byte_to_s_len for (self: Byte): Int */
long standard__string___Byte___byte_to_s_len(unsigned char self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = native_byte_length_str(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Byte#native_byte_to_s for (self: Byte, NativeString, Int) */
void standard__string___Byte___native_byte_to_s(unsigned char self, char* p0, long p1) {
native_byte_to_s(self, p0, p1);
RET_LABEL:;
}
/* method string#Byte#to_s for (self: Byte): String */
val* standard__string___Byte___Object__to_s(unsigned char self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
long var_nslen /* var nslen: Int */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : NativeString */;
char* var11 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var21 /* : FlatString */;
{
{ /* Inline string#Byte#byte_to_s_len (self) on <self:Byte> */
var3 = native_byte_length_str(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var8 = var_nslen + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var4,var5) on <var4:NativeString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
{ /* Inline string#NativeString#[]= (var_ns,var_nslen,'\000') on <var_ns:NativeString> */
var_ns[var_nslen]=(unsigned char)'\000';
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#Byte#native_byte_to_s (self,var_ns,var13) on <self:Byte> */
native_byte_to_s(self, var_ns, var13);
RET_LABEL20:(void)0;
}
}
{
var21 = standard___standard__NativeString___to_s_with_length(var_ns, var_nslen);
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Byte#to_s for (self: Object): String */
val* VIRTUAL_standard__string___Byte___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
unsigned char var2 /* : Byte */;
var2 = ((struct instance_standard__Byte*)self)->value; /* autounbox from Object to Byte */;
var1 = standard__string___Byte___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#strerror_ext for (self: Int): NativeString */
char* standard__string___Int___strerror_ext(long self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = strerror(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#strerror for (self: Int): String */
val* standard__string___Int___strerror(long self) {
val* var /* : String */;
char* var1 /* : NativeString */;
void* var3 /* : NativeString for extern */;
val* var4 /* : String */;
{
{ /* Inline string#Int#strerror_ext (self) on <self:Int> */
var3 = strerror(self);
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
