#include "string.sep.0.h"
/* method string#Text#is_empty for (self: Text): Bool */
short int string__Text__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 0;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var8 = var1 == var4;
var6 = var8;
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
/* method string#Text#is_empty for (self: Object): Bool */
short int VIRTUAL_string__Text__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#last for (self: Text): Char */
char string__Text__last(val* self) {
char var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
char var11 /* : Char */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var4 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = 1;
{
{ /* Inline kernel#Int#- (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var9 = var2 - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var10 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var6) /* [] on <var1:SequenceRead[Char]>*/;
}
var11 = ((struct instance_kernel__Char*)var10)->value; /* autounbox from nullable Object to Char */;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#last for (self: Object): Char */
char VIRTUAL_string__Text__last(val* self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = string__Text__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#substring_from for (self: Text, Int): Text */
val* string__Text__substring_from(val* self, long p0) {
val* var /* : Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : Text */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : Text */;
var_from = p0;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var6 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var7 = var_from >= var1;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__empty]))(self) /* empty on <self:Text>*/;
}
var = var8;
goto RET_LABEL;
} else {
}
var9 = 0;
{
{ /* Inline kernel#Int#< (var_from,var9) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var16 = var_from < var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var17 = 0;
var_from = var17;
} else {
}
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var20 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var18,var_from) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var23 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var27 = var18 - var_from;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__Text__substring]))(self, var_from, var21) /* substring on <self:Text>*/;
}
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#substring_from for (self: Object, Int): Text */
val* VIRTUAL_string__Text__substring_from(val* self, long p0) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = string__Text__substring_from(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#has_substring for (self: Text, String, Int): Bool */
short int string__Text__has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : SequenceRead[Char] */;
val* var31 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var32 /* : SequenceRead[Char] */;
val* var34 /* : SequenceRead[Char] */;
val* var35 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var41 /* : nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = string__Text__is_empty(var_str);
}
if (var1){
var2 = 1;
var = var2;
goto RET_LABEL;
} else {
}
var4 = 0;
{
{ /* Inline kernel#Int#< (var_pos,var4) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var8 = var_pos < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var3 = var_;
} else {
{
{ /* Inline string#FlatText#length (var_str) on <var_str:String> */
var11 = var_str->attrs[COLOR_string__FlatText___length].l; /* _length on <var_str:String> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,var9) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var14 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var18 = var_pos + var9;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var21 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var28 = var12 > var19;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var3 = var22;
}
if (var3){
var29 = 0;
var = var29;
goto RET_LABEL;
} else {
}
{
var30 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var31 = ((val* (*)(val*, long))(var30->class->vft[COLOR_abstract_collection__SequenceRead__iterator_from]))(var30, var_pos) /* iterator_from on <var30:SequenceRead[Char]>*/;
}
var_myiter = var31;
{
{ /* Inline string#FlatString#chars (var_str) on <var_str:String> */
var34 = var_str->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_str:String> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Collection__iterator]))(var32) /* iterator on <var32:SequenceRead[Char]>*/;
}
var_itsiter = var35;
for(;;) {
{
var37 = ((short int (*)(val*))(var_myiter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_myiter) /* is_ok on <var_myiter:IndexedIterator[Char]>*/;
}
var_38 = var37;
if (var37){
{
var39 = ((short int (*)(val*))(var_itsiter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_itsiter) /* is_ok on <var_itsiter:IndexedIterator[Char]>*/;
}
var36 = var39;
} else {
var36 = var_38;
}
if (var36){
{
var40 = ((val* (*)(val*))(var_myiter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_myiter) /* item on <var_myiter:IndexedIterator[Char]>*/;
}
{
var41 = ((val* (*)(val*))(var_itsiter->class->vft[COLOR_abstract_collection__Iterator__item]))(var_itsiter) /* item on <var_itsiter:IndexedIterator[Char]>*/;
}
{
{ /* Inline kernel#Char#!= (var40,var41) on <var40:nullable Object(Char)> */
var45 = var40 == var41 || (((struct instance_kernel__Char*)var40)->value == ((struct instance_kernel__Char*)var41)->value);
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
var47 = 0;
var = var47;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_myiter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_myiter) /* next on <var_myiter:IndexedIterator[Char]>*/;
}
{
((void (*)(val*))(var_itsiter->class->vft[COLOR_abstract_collection__Iterator__next]))(var_itsiter) /* next on <var_itsiter:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var48 = ((short int (*)(val*))(var_itsiter->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_itsiter) /* is_ok on <var_itsiter:IndexedIterator[Char]>*/;
}
if (var48){
var49 = 0;
var = var49;
goto RET_LABEL;
} else {
}
var50 = 1;
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_substring for (self: Object, String, Int): Bool */
short int VIRTUAL_string__Text__has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text__has_substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#has_prefix for (self: Text, String): Bool */
short int string__Text__has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var_prefix = p0;
var1 = 0;
{
var2 = string__Text__has_substring(self, var_prefix, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_prefix for (self: Object, String): Bool */
short int VIRTUAL_string__Text__has_prefix(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text__has_prefix(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#has_suffix for (self: Text, String): Bool */
short int string__Text__has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
short int var11 /* : Bool */;
var_suffix = p0;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_suffix) on <var_suffix:String> */
var6 = var_suffix->attrs[COLOR_string__FlatText___length].l; /* _length on <var_suffix:String> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var10 = var1 - var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
var11 = string__Text__has_substring(self, var_suffix, var7);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_suffix for (self: Object, String): Bool */
short int VIRTUAL_string__Text__has_suffix(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text__has_suffix(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#to_i for (self: Text): Int */
long string__Text__to_i(val* self) {
long var /* : Int */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var5 /* : Int */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:Text>*/;
}
{
var2 = string__FlatString__to_cstring(var1);
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
/* method string#Text#to_i for (self: Object): Int */
long VIRTUAL_string__Text__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__Text__to_i(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#to_f for (self: Text): Float */
double string__Text__to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
double var3 /* : Float */;
double var5 /* : Float for extern */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:Text>*/;
}
{
var2 = string__FlatString__to_cstring(var1);
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
/* method string#Text#to_f for (self: Object): Float */
double VIRTUAL_string__Text__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = string__Text__to_f(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#to_hex for (self: Text): Int */
long string__Text__to_hex(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var1 = 16;
{
var2 = string__Text__a_to(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_hex for (self: Object): Int */
long VIRTUAL_string__Text__to_hex(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__Text__to_hex(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#a_to for (self: Text, Int): Int */
long string__Text__a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
short int var_neg /* var neg: Bool */;
long var3 /* : Int */;
long var_j /* var j: Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
char var13 /* : Char */;
char var_c /* var c: Char */;
long var14 /* : Int */;
long var_v /* var v: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
var_base = p0;
var1 = 0;
var_i = var1;
var2 = 0;
var_neg = var2;
var3 = 0;
var_j = var3;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var6 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var10 = var_j < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var11 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_j) /* [] on <var11:SequenceRead[Char]>*/;
}
var13 = ((struct instance_kernel__Char*)var12)->value; /* autounbox from nullable Object to Char */;
var_c = var13;
{
var14 = kernel__Char__to_i(var_c);
}
var_v = var14;
{
{ /* Inline kernel#Int#> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var17 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var21 = var_v > var_base;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var24 = -var_i;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
var25 = 0;
{
{ /* Inline kernel#Int#< (var_v,var25) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var32 = var_v < var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var33 = 1;
var_neg = var33;
} else {
{
{ /* Inline kernel#Int#* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var36 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var40 = var_i * var_base;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var34,var_v) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var43 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var47 = var34 + var_v;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_i = var41;
}
}
var48 = 1;
{
var49 = kernel__Int__successor(var_j, var48);
}
var_j = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var52 = -var_i;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Text#a_to for (self: Object, Int): Int */
long VIRTUAL_string__Text__a_to(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__Text__a_to(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#is_numeric for (self: Text): Bool */
short int string__Text__is_numeric(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_has_point_or_comma /* var has_point_or_comma: Bool */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
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
char var12 /* : Char */;
char var_c /* var c: Char */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
char var17 /* : Char */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
char var23 /* : Char */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
var1 = 0;
var_has_point_or_comma = var1;
var2 = 0;
var_i = var2;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var5 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:SequenceRead[Char]>*/;
}
var12 = ((struct instance_kernel__Char*)var11)->value; /* autounbox from nullable Object to Char */;
var_c = var12;
{
var13 = string__Char__is_numeric(var_c);
}
var14 = !var13;
if (var14){
var17 = '.';
{
{ /* Inline kernel#Char#== (var_c,var17) on <var_c:Char> */
var21 = var_c == var17;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
var_22 = var18;
if (var18){
var16 = var_22;
} else {
var23 = ',';
{
{ /* Inline kernel#Char#== (var_c,var23) on <var_c:Char> */
var27 = var_c == var23;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var16 = var24;
}
var_28 = var16;
if (var16){
var29 = !var_has_point_or_comma;
var15 = var29;
} else {
var15 = var_28;
}
if (var15){
var30 = 1;
var_has_point_or_comma = var30;
} else {
var31 = 0;
var = var31;
goto RET_LABEL;
}
} else {
}
var32 = 1;
{
var33 = kernel__Int__successor(var_i, var32);
}
var_i = var33;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var34 = 1;
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#is_numeric for (self: Object): Bool */
short int VIRTUAL_string__Text__is_numeric(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text__is_numeric(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#to_cmangle for (self: Text): String */
val* string__Text__to_cmangle(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
short int var2 /* : Bool */;
short int var_underscore /* var underscore: Bool */;
long var3 /* : Int */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
char var13 /* : Char */;
char var_c /* var c: Char */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
char var16 /* : Char */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
short int var34 /* : Bool */;
char var35 /* : Char */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_43 /* var : Bool */;
char var44 /* : Char */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
char var53 /* : Char */;
long var54 /* : Int */;
long var56 /* : Int */;
val* var57 /* : String */;
char var58 /* : Char */;
short int var59 /* : Bool */;
char var60 /* : Char */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
char var69 /* : Char */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
char var78 /* : Char */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
char var84 /* : Char */;
long var85 /* : Int */;
long var87 /* : Int */;
val* var88 /* : String */;
char var89 /* : Char */;
short int var90 /* : Bool */;
long var91 /* : Int */;
long var92 /* : Int */;
val* var94 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
var_res = var1;
var2 = 0;
var_underscore = var2;
var3 = 0;
var_i = var3;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var6 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var11 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:SequenceRead[Char]>*/;
}
var13 = ((struct instance_kernel__Char*)var12)->value; /* autounbox from nullable Object to Char */;
var_c = var13;
var16 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var16) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var16:Char> isa OTHER */
/* <var16:Char> isa OTHER */
var19 = 1; /* easy <var16:Char> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 547);
show_backtrace(1);
}
var23 = var_c >= var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_24 = var17;
if (var17){
var25 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var25) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var25:Char> isa OTHER */
/* <var25:Char> isa OTHER */
var28 = 1; /* easy <var25:Char> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 545);
show_backtrace(1);
}
var32 = var_c <= var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var15 = var26;
} else {
var15 = var_24;
}
var_33 = var15;
if (var15){
var14 = var_33;
} else {
var35 = 'A';
{
{ /* Inline kernel#Char#>= (var_c,var35) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var35:Char> isa OTHER */
/* <var35:Char> isa OTHER */
var38 = 1; /* easy <var35:Char> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 547);
show_backtrace(1);
}
var42 = var_c >= var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_43 = var36;
if (var36){
var44 = 'Z';
{
{ /* Inline kernel#Char#<= (var_c,var44) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var44:Char> isa OTHER */
/* <var44:Char> isa OTHER */
var47 = 1; /* easy <var44:Char> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 545);
show_backtrace(1);
}
var51 = var_c <= var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var34 = var45;
} else {
var34 = var_43;
}
var14 = var34;
}
if (var14){
{
string__FlatBuffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var52 = 0;
var_underscore = var52;
goto BREAK_label;
} else {
}
if (var_underscore){
var53 = '_';
{
{ /* Inline kernel#Char#ascii (var53) on <var53:Char> */
var56 = (unsigned char)var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var57 = string__Int__to_s(var54);
}
{
string__FlatBuffer__append(var_res, var57); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var58 = 'd';
{
string__FlatBuffer__add(var_res, var58); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
}
var60 = '0';
{
{ /* Inline kernel#Char#>= (var_c,var60) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var60:Char> isa OTHER */
/* <var60:Char> isa OTHER */
var63 = 1; /* easy <var60:Char> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 547);
show_backtrace(1);
}
var67 = var_c >= var60;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_68 = var61;
if (var61){
var69 = '9';
{
{ /* Inline kernel#Char#<= (var_c,var69) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var69:Char> isa OTHER */
/* <var69:Char> isa OTHER */
var72 = 1; /* easy <var69:Char> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 545);
show_backtrace(1);
}
var76 = var_c <= var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var59 = var70;
} else {
var59 = var_68;
}
if (var59){
{
string__FlatBuffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var77 = 0;
var_underscore = var77;
} else {
var78 = '_';
{
{ /* Inline kernel#Char#== (var_c,var78) on <var_c:Char> */
var82 = var_c == var78;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (var79){
{
string__FlatBuffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var83 = 1;
var_underscore = var83;
} else {
var84 = '_';
{
string__FlatBuffer__add(var_res, var84); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var87 = (unsigned char)var_c;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var88 = string__Int__to_s(var85);
}
{
string__FlatBuffer__append(var_res, var88); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var89 = 'd';
{
string__FlatBuffer__add(var_res, var89); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var90 = 0;
var_underscore = var90;
}
}
BREAK_label: (void)0;
var91 = 1;
{
var92 = kernel__Int__successor(var_i, var91);
}
var_i = var92;
} else {
goto BREAK_label93;
}
}
BREAK_label93: (void)0;
{
var94 = string__FlatBuffer__to_s(var_res);
}
var = var94;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#to_cmangle for (self: Object): String */
val* VIRTUAL_string__Text__to_cmangle(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Text__to_cmangle(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_c for (self: Text): String */
val* string__Text__escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
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
char var12 /* : Char */;
char var_c /* var c: Char */;
char var13 /* : Char */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
char var22 /* : Char */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
char var32 /* : Char */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
char var42 /* : Char */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
char var52 /* : Char */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
long var78 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var82 /* : Bool */;
val* var83 /* : String */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
long var88 /* : Int */;
long var89 /* : Int */;
val* var90 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
var_b = var1;
var2 = 0;
var_i = var2;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var5 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:SequenceRead[Char]>*/;
}
var12 = ((struct instance_kernel__Char*)var11)->value; /* autounbox from nullable Object to Char */;
var_c = var12;
var13 = '\n';
{
{ /* Inline kernel#Char#== (var_c,var13) on <var_c:Char> */
var17 = var_c == var13;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
if (varonce) {
var18 = varonce;
} else {
var19 = "\\n";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
string__FlatBuffer__append(var_b, var18); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var22 = '\0';
{
{ /* Inline kernel#Char#== (var_c,var22) on <var_c:Char> */
var26 = var_c == var22;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\\0";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
string__FlatBuffer__append(var_b, var28); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var32 = '\"';
{
{ /* Inline kernel#Char#== (var_c,var32) on <var_c:Char> */
var36 = var_c == var32;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
if (varonce37) {
var38 = varonce37;
} else {
var39 = "\\\"";
var40 = 2;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
string__FlatBuffer__append(var_b, var38); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var42 = '\'';
{
{ /* Inline kernel#Char#== (var_c,var42) on <var_c:Char> */
var46 = var_c == var42;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "\\\'";
var50 = 2;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
string__FlatBuffer__append(var_b, var48); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var52 = '\\';
{
{ /* Inline kernel#Char#== (var_c,var52) on <var_c:Char> */
var56 = var_c == var52;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
if (varonce57) {
var58 = varonce57;
} else {
var59 = "\\\\";
var60 = 2;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
string__FlatBuffer__append(var_b, var58); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var64 = (unsigned char)var_c;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var65 = 32;
{
{ /* Inline kernel#Int#< (var62,var65) on <var62:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var72 = var62 < var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "\\";
var76 = 1;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var80 = (unsigned char)var_c;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var81 = 8;
var82 = 0;
{
var83 = string__Int__to_base(var78, var81, var82);
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 2;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var83;
{
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_b, var87); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
{
string__FlatBuffer__add(var_b, var_c); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
}
}
}
}
}
}
var88 = 1;
{
var89 = kernel__Int__successor(var_i, var88);
}
var_i = var89;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var90 = string__FlatBuffer__to_s(var_b);
}
var = var90;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_c for (self: Object): String */
val* VIRTUAL_string__Text__escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Text__escape_to_c(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#unescape_nit for (self: Text): String */
val* string__Text__unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var4 /* : Int */;
val* var_res /* var res: FlatBuffer */;
short int var5 /* : Bool */;
short int var_was_slash /* var was_slash: Bool */;
long var6 /* : Int */;
long var_i /* var i: Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_ /* var : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
char var16 /* : Char */;
char var_c /* var c: Char */;
short int var17 /* : Bool */;
char var18 /* : Char */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
char var30 /* : Char */;
char var31 /* : Char */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
char var36 /* : Char */;
char var37 /* : Char */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
char var42 /* : Char */;
char var43 /* : Char */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
char var48 /* : Char */;
long var49 /* : Int */;
long var50 /* : Int */;
val* var52 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var4 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
string__FlatBuffer__with_capacity(var1, var2); /* Direct call string#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_res = var1;
var5 = 0;
var_was_slash = var5;
var6 = 0;
var_i = var6;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var9 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ = var7;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var12 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var13 = var_i < var_;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var14 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var15 = ((val* (*)(val*, long))(var14->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var14, var_i) /* [] on <var14:SequenceRead[Char]>*/;
}
var16 = ((struct instance_kernel__Char*)var15)->value; /* autounbox from nullable Object to Char */;
var_c = var16;
var17 = !var_was_slash;
if (var17){
var18 = '\\';
{
{ /* Inline kernel#Char#== (var_c,var18) on <var_c:Char> */
var22 = var_c == var18;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
var23 = 1;
var_was_slash = var23;
} else {
{
string__FlatBuffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
}
goto BREAK_label;
} else {
}
var24 = 0;
var_was_slash = var24;
var25 = 'n';
{
{ /* Inline kernel#Char#== (var_c,var25) on <var_c:Char> */
var29 = var_c == var25;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
var30 = '\n';
{
string__FlatBuffer__add(var_res, var30); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
var31 = 'r';
{
{ /* Inline kernel#Char#== (var_c,var31) on <var_c:Char> */
var35 = var_c == var31;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
var36 = '\15';
{
string__FlatBuffer__add(var_res, var36); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
var37 = 't';
{
{ /* Inline kernel#Char#== (var_c,var37) on <var_c:Char> */
var41 = var_c == var37;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
var42 = '\11';
{
string__FlatBuffer__add(var_res, var42); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
var43 = '0';
{
{ /* Inline kernel#Char#== (var_c,var43) on <var_c:Char> */
var47 = var_c == var43;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
var48 = '\0';
{
string__FlatBuffer__add(var_res, var48); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
{
string__FlatBuffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
}
}
}
}
BREAK_label: (void)0;
var49 = 1;
{
var50 = kernel__Int__successor(var_i, var49);
}
var_i = var50;
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
var52 = string__FlatBuffer__to_s(var_res);
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#unescape_nit for (self: Object): String */
val* VIRTUAL_string__Text__unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Text__unescape_nit(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#== for (self: Text, nullable Object): Bool */
short int string__Text___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : SequenceRead[Char] */;
val* var25 /* : SequenceRead[Char] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
var_o = p0;
var1 = NULL;
if (var_o == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int (*)(val*, val*))(var_o->class->vft[COLOR_kernel__Object___61d_61d]))(var_o, var1) /* == on <var_o:nullable Object>*/;
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_string__Text.color;
idtype = type_string__Text.id;
if(cltype >= var_o->type->table_size) {
var5 = 0;
} else {
var5 = var_o->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#is_same_instance (self,var_o) on <self:Text> */
var10 = self == var_o;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var11 = 1;
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var14 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_o) on <var_o:nullable Object(Text)> */
var17 = var_o->attrs[COLOR_string__FlatText___length].l; /* _length on <var_o:nullable Object(Text)> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var12,var15) on <var12:Int> */
var21 = var12 == var15;
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
{
var24 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var25 = ((val* (*)(val*))(var_o->class->vft[COLOR_string__Text__chars]))(var_o) /* chars on <var_o:nullable Object(Text)>*/;
}
{
var27 = ((short int (*)(val*, val*))(var24->class->vft[COLOR_kernel__Object___61d_61d]))(var24, var25) /* == on <var24:SequenceRead[Char]>*/;
var26 = var27;
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_string__Text___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#< for (self: Text, Text): Bool */
short int string__Text___60d(val* self, val* p0) {
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
char var17 /* : Char */;
char var18 /* : Char */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
char var29 /* : Char */;
char var30 /* : Char */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 648);
show_backtrace(1);
}
var_other = p0;
{
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:SequenceRead[Char]>*/;
}
var_self_chars = var3;
{
var4 = ((val* (*)(val*))(var_other->class->vft[COLOR_string__Text__chars]))(var_other) /* chars on <var_other:Text>*/;
}
{
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:SequenceRead[Char]>*/;
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int (*)(val*))(var_self_chars->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_self_chars) /* is_ok on <var_self_chars:IndexedIterator[Char]>*/;
}
var_ = var7;
if (var7){
{
var8 = ((short int (*)(val*))(var_other_chars->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_other_chars) /* is_ok on <var_other_chars:IndexedIterator[Char]>*/;
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val* (*)(val*))(var_self_chars->class->vft[COLOR_abstract_collection__Iterator__item]))(var_self_chars) /* item on <var_self_chars:IndexedIterator[Char]>*/;
}
{
var10 = ((val* (*)(val*))(var_other_chars->class->vft[COLOR_abstract_collection__Iterator__item]))(var_other_chars) /* item on <var_other_chars:IndexedIterator[Char]>*/;
}
{
{ /* Inline kernel#Char#< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : var10->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 546);
show_backtrace(1);
}
var17 = ((struct instance_kernel__Char*)var9)->value; /* autounbox from nullable Object to Char */;
var18 = ((struct instance_kernel__Char*)var10)->value; /* autounbox from nullable Object to Char */;
var19 = var17 < var18;
var11 = var19;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var20 = 1;
var = var20;
goto RET_LABEL;
} else {
}
{
var21 = ((val* (*)(val*))(var_self_chars->class->vft[COLOR_abstract_collection__Iterator__item]))(var_self_chars) /* item on <var_self_chars:IndexedIterator[Char]>*/;
}
{
var22 = ((val* (*)(val*))(var_other_chars->class->vft[COLOR_abstract_collection__Iterator__item]))(var_other_chars) /* item on <var_other_chars:IndexedIterator[Char]>*/;
}
{
{ /* Inline kernel#Char#> (var21,var22) on <var21:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var22:nullable Object(Char)> isa OTHER */
/* <var22:nullable Object(Char)> isa OTHER */
var25 = 1; /* easy <var22:nullable Object(Char)> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = var22 == NULL ? "null" : var22->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 548);
show_backtrace(1);
}
var29 = ((struct instance_kernel__Char*)var21)->value; /* autounbox from nullable Object to Char */;
var30 = ((struct instance_kernel__Char*)var22)->value; /* autounbox from nullable Object to Char */;
var31 = var29 > var30;
var23 = var31;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var32 = 0;
var = var32;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_self_chars->class->vft[COLOR_abstract_collection__Iterator__next]))(var_self_chars) /* next on <var_self_chars:IndexedIterator[Char]>*/;
}
{
((void (*)(val*))(var_other_chars->class->vft[COLOR_abstract_collection__Iterator__next]))(var_other_chars) /* next on <var_other_chars:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var33 = ((short int (*)(val*))(var_self_chars->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_self_chars) /* is_ok on <var_self_chars:IndexedIterator[Char]>*/;
}
if (var33){
var34 = 0;
var = var34;
goto RET_LABEL;
} else {
var35 = 1;
var = var35;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Text#< for (self: Object, Comparable): Bool */
short int VIRTUAL_string__Text___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Text___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache for (self: Text): nullable Int */
val* string__Text__hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache for (self: Object): nullable Int */
val* VIRTUAL_string__Text__hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
{ /* Inline string#Text#hash_cache (self) on <self:Object(Text)> */
var3 = self->attrs[COLOR_string__Text___hash_cache].val; /* _hash_cache on <self:Object(Text)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Text#hash_cache= for (self: Text, nullable Int) */
void string__Text__hash_cache_61d(val* self, val* p0) {
self->attrs[COLOR_string__Text___hash_cache].val = p0; /* _hash_cache on <self:Text> */
RET_LABEL:;
}
/* method string#Text#hash_cache= for (self: Object, nullable Int) */
void VIRTUAL_string__Text__hash_cache_61d(val* self, val* p0) {
{ /* Inline string#Text#hash_cache= (self,p0) on <self:Object(Text)> */
self->attrs[COLOR_string__Text___hash_cache].val = p0; /* _hash_cache on <self:Object(Text)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#Text#hash for (self: Text): Int */
long string__Text__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_h /* var h: Int */;
long var10 /* : Int */;
long var_i /* var i: Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var_ /* var : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : SequenceRead[Char] */;
val* var19 /* : nullable Object */;
char var20 /* : Char */;
char var_char /* var char: Char */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var48 /* : nullable Int */;
long var49 /* : Int */;
{
{ /* Inline string#Text#hash_cache (self) on <self:Text> */
var3 = self->attrs[COLOR_string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,var4) on <var1:nullable Int> */
var8 = 0; /* incompatible types Int vs. null; cannot be NULL */
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var9 = 5381;
var_h = var9;
var10 = 0;
var_i = var10;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var13 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var16 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var17 = var_i < var_;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
var18 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var19 = ((val* (*)(val*, long))(var18->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var18, var_i) /* [] on <var18:SequenceRead[Char]>*/;
}
var20 = ((struct instance_kernel__Char*)var19)->value; /* autounbox from nullable Object to Char */;
var_char = var20;
var21 = 5;
{
{ /* Inline kernel#Int#lshift (var_h,var21) on <var_h:Int> */
var24 = var_h << var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var22,var_h) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var27 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var31 = var22 + var_h;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var_char) on <var_char:Char> */
var34 = (unsigned char)var_char;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var25,var32) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var37 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var41 = var25 + var32;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_h = var35;
var42 = 1;
{
var43 = kernel__Int__successor(var_i, var42);
}
var_i = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#Text#hash_cache= (self,var_h) on <self:Text> */
var45 = BOX_kernel__Int(var_h); /* autobox from Int to nullable Int */
self->attrs[COLOR_string__Text___hash_cache].val = var45; /* _hash_cache on <self:Text> */
RET_LABEL44:(void)0;
}
}
} else {
}
{
{ /* Inline string#Text#hash_cache (self) on <self:Text> */
var48 = self->attrs[COLOR_string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 697);
show_backtrace(1);
}
var49 = ((struct instance_kernel__Int*)var46)->value; /* autounbox from nullable Int to Int */;
var = var49;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#hash for (self: Object): Int */
long VIRTUAL_string__Text__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__Text__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#items for (self: FlatText): NativeString */
char* string__FlatText__items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#items for (self: Object): NativeString */
char* VIRTUAL_string__FlatText__items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#FlatText#items (self) on <self:Object(FlatText)> */
var3 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:Object(FlatText)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#items= for (self: FlatText, NativeString) */
void string__FlatText__items_61d(val* self, char* p0) {
self->attrs[COLOR_string__FlatText___items].str = p0; /* _items on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#items= for (self: Object, NativeString) */
void VIRTUAL_string__FlatText__items_61d(val* self, char* p0) {
{ /* Inline string#FlatText#items= (self,p0) on <self:Object(FlatText)> */
self->attrs[COLOR_string__FlatText___items].str = p0; /* _items on <self:Object(FlatText)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatText#real_items for (self: FlatText): nullable NativeString */
val* string__FlatText__real_items(val* self) {
val* var /* : nullable NativeString */;
val* var1 /* : nullable NativeString */;
var1 = self->attrs[COLOR_string__FlatText___real_items].val; /* _real_items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#real_items for (self: Object): nullable NativeString */
val* VIRTUAL_string__FlatText__real_items(val* self) {
val* var /* : nullable NativeString */;
val* var1 /* : nullable NativeString */;
val* var3 /* : nullable NativeString */;
{ /* Inline string#FlatText#real_items (self) on <self:Object(FlatText)> */
var3 = self->attrs[COLOR_string__FlatText___real_items].val; /* _real_items on <self:Object(FlatText)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#real_items= for (self: FlatText, nullable NativeString) */
void string__FlatText__real_items_61d(val* self, val* p0) {
self->attrs[COLOR_string__FlatText___real_items].val = p0; /* _real_items on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#real_items= for (self: Object, nullable NativeString) */
void VIRTUAL_string__FlatText__real_items_61d(val* self, val* p0) {
{ /* Inline string#FlatText#real_items= (self,p0) on <self:Object(FlatText)> */
self->attrs[COLOR_string__FlatText___real_items].val = p0; /* _real_items on <self:Object(FlatText)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatText#length for (self: FlatText): Int */
long string__FlatText__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#length for (self: Object): Int */
long VIRTUAL_string__FlatText__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#FlatText#length (self) on <self:Object(FlatText)> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Object(FlatText)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatText#length= for (self: FlatText, Int) */
void string__FlatText__length_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatText___length].l = p0; /* _length on <self:FlatText> */
RET_LABEL:;
}
/* method string#FlatText#length= for (self: Object, Int) */
void VIRTUAL_string__FlatText__length_61d(val* self, long p0) {
{ /* Inline string#FlatText#length= (self,p0) on <self:Object(FlatText)> */
self->attrs[COLOR_string__FlatText___length].l = p0; /* _length on <self:Object(FlatText)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatText#init for (self: FlatText) */
void string__FlatText__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatText__init]))(self) /* init on <self:FlatText>*/;
}
RET_LABEL:;
}
/* method string#FlatText#init for (self: Object) */
void VIRTUAL_string__FlatText__init(val* self) {
{ /* Inline string#FlatText#init (self) on <self:Object(FlatText)> */
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatText__init]))(self) /* init on <self:Object(FlatText)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#StringCharView#target for (self: StringCharView): Text */
val* string__StringCharView__target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target for (self: Object): Text */
val* VIRTUAL_string__StringCharView__target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var3 /* : Text */;
{ /* Inline string#StringCharView#target (self) on <self:Object(StringCharView)> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:Object(StringCharView)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target= for (self: StringCharView, Text) */
void string__StringCharView__target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__StringCharView_VTSELFTYPE];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
self->attrs[COLOR_string__StringCharView___target].val = p0; /* _target on <self:StringCharView> */
RET_LABEL:;
}
/* method string#StringCharView#target= for (self: Object, Text) */
void VIRTUAL_string__StringCharView__target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline string#StringCharView#target= (self,p0) on <self:Object(StringCharView)> */
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__StringCharView_VTSELFTYPE];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
self->attrs[COLOR_string__StringCharView___target].val = p0; /* _target on <self:Object(StringCharView)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#StringCharView#init for (self: StringCharView, Text) */
void string__StringCharView__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_tgt /* var tgt: Text */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
/* Covariant cast for argument 0 (tgt) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__StringCharView_VTSELFTYPE];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 740);
show_backtrace(1);
}
var_tgt = p0;
{
{ /* Inline string#StringCharView#target= (self,var_tgt) on <self:StringCharView> */
/* Covariant cast for argument 0 (target) <var_tgt:Text> isa SELFTYPE */
/* <var_tgt:Text> isa SELFTYPE */
type_struct5 = self->type->resolution_table->types[COLOR_string__StringCharView_VTSELFTYPE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= var_tgt->type->table_size) {
var2 = 0;
} else {
var2 = var_tgt->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = var_tgt == NULL ? "null" : var_tgt->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
self->attrs[COLOR_string__StringCharView___target].val = var_tgt; /* _target on <self:StringCharView> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method string#StringCharView#init for (self: Object, Text) */
void VIRTUAL_string__StringCharView__init(val* self, val* p0) {
string__StringCharView__init(self, p0); /* Direct call string#StringCharView#init on <self:Object(StringCharView)>*/
RET_LABEL:;
}
/* method string#StringCharView#is_empty for (self: StringCharView): Bool */
short int string__StringCharView__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
val* var3 /* : Text */;
short int var4 /* : Bool */;
{
{ /* Inline string#StringCharView#target (self) on <self:StringCharView> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = string__Text__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#is_empty for (self: Object): Bool */
short int VIRTUAL_string__StringCharView__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__StringCharView__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#length for (self: StringCharView): Int */
long string__StringCharView__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
long var4 /* : Int */;
long var6 /* : Int */;
{
{ /* Inline string#StringCharView#target (self) on <self:StringCharView> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var1) on <var1:Text> */
var6 = var1->attrs[COLOR_string__FlatText___length].l; /* _length on <var1:Text> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#length for (self: Object): Int */
long VIRTUAL_string__StringCharView__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__StringCharView__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#iterator for (self: StringCharView): IndexedIterator[Char] */
val* string__StringCharView__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
long var1 /* : Int */;
val* var2 /* : IndexedIterator[nullable Object] */;
var1 = 0;
{
var2 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead__iterator_from]))(self, var1) /* iterator_from on <self:StringCharView>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_string__StringCharView__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = string__StringCharView__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#to_s for (self: String): String */
val* string__String__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_s for (self: Object): String */
val* VIRTUAL_string__String__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt for (self: FlatSubstringsIter): nullable FlatText */
val* string__FlatSubstringsIter__tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt for (self: Object): nullable FlatText */
val* VIRTUAL_string__FlatSubstringsIter__tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
val* var3 /* : nullable FlatText */;
{ /* Inline string#FlatSubstringsIter#tgt (self) on <self:Object(FlatSubstringsIter)> */
var3 = self->attrs[COLOR_string__FlatSubstringsIter___tgt].val; /* _tgt on <self:Object(FlatSubstringsIter)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void string__FlatSubstringsIter__tgt_61d(val* self, val* p0) {
self->attrs[COLOR_string__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method string#FlatSubstringsIter#tgt= for (self: Object, nullable FlatText) */
void VIRTUAL_string__FlatSubstringsIter__tgt_61d(val* self, val* p0) {
{ /* Inline string#FlatSubstringsIter#tgt= (self,p0) on <self:Object(FlatSubstringsIter)> */
self->attrs[COLOR_string__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:Object(FlatSubstringsIter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatSubstringsIter#init for (self: FlatSubstringsIter, FlatText) */
void string__FlatSubstringsIter__init(val* self, val* p0) {
val* var_tgt /* var tgt: FlatText */;
var_tgt = p0;
{
{ /* Inline string#FlatSubstringsIter#tgt= (self,var_tgt) on <self:FlatSubstringsIter> */
self->attrs[COLOR_string__FlatSubstringsIter___tgt].val = var_tgt; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatSubstringsIter#init for (self: Object, FlatText) */
void VIRTUAL_string__FlatSubstringsIter__init(val* self, val* p0) {
string__FlatSubstringsIter__init(self, p0); /* Direct call string#FlatSubstringsIter#init on <self:Object(FlatSubstringsIter)>*/
RET_LABEL:;
}
/* method string#FlatSubstringsIter#item for (self: FlatSubstringsIter): FlatText */
val* string__FlatSubstringsIter__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
val* var4 /* : nullable FlatText */;
{
var1 = string__FlatSubstringsIter__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 919);
show_backtrace(1);
}
{
{ /* Inline string#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var4 = self->attrs[COLOR_string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 920);
show_backtrace(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#item for (self: Object): nullable Object */
val* VIRTUAL_string__FlatSubstringsIter__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : FlatText */;
var1 = string__FlatSubstringsIter__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#is_ok for (self: FlatSubstringsIter): Bool */
short int string__FlatSubstringsIter__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
val* var3 /* : nullable FlatText */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
{
{ /* Inline string#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var3 = self->attrs[COLOR_string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable FlatText> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable FlatText(FlatText)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
/* method string#FlatSubstringsIter#is_ok for (self: Object): Bool */
short int VIRTUAL_string__FlatSubstringsIter__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__FlatSubstringsIter__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void string__FlatSubstringsIter__next(val* self) {
val* var /* : null */;
var = NULL;
{
{ /* Inline string#FlatSubstringsIter#tgt= (self,var) on <self:FlatSubstringsIter> */
self->attrs[COLOR_string__FlatSubstringsIter___tgt].val = var; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatSubstringsIter#next for (self: Object) */
void VIRTUAL_string__FlatSubstringsIter__next(val* self) {
string__FlatSubstringsIter__next(self); /* Direct call string#FlatSubstringsIter#next on <self:Object(FlatSubstringsIter)>*/
RET_LABEL:;
}
/* method string#FlatString#index_from for (self: FlatString): Int */
long string__FlatString__index_from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_from for (self: Object): Int */
long VIRTUAL_string__FlatString__index_from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#FlatString#index_from (self) on <self:Object(FlatString)> */
var3 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:Object(FlatString)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_from= for (self: FlatString, Int) */
void string__FlatString__index_from_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatString___index_from].l = p0; /* _index_from on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#index_from= for (self: Object, Int) */
void VIRTUAL_string__FlatString__index_from_61d(val* self, long p0) {
{ /* Inline string#FlatString#index_from= (self,p0) on <self:Object(FlatString)> */
self->attrs[COLOR_string__FlatString___index_from].l = p0; /* _index_from on <self:Object(FlatString)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatString#index_to for (self: FlatString): Int */
long string__FlatString__index_to(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_to for (self: Object): Int */
long VIRTUAL_string__FlatString__index_to(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#FlatString#index_to (self) on <self:Object(FlatString)> */
var3 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:Object(FlatString)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#index_to= for (self: FlatString, Int) */
void string__FlatString__index_to_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatString___index_to].l = p0; /* _index_to on <self:FlatString> */
RET_LABEL:;
}
/* method string#FlatString#index_to= for (self: Object, Int) */
void VIRTUAL_string__FlatString__index_to_61d(val* self, long p0) {
{ /* Inline string#FlatString#index_to= (self,p0) on <self:Object(FlatString)> */
self->attrs[COLOR_string__FlatString___index_to].l = p0; /* _index_to on <self:Object(FlatString)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatString#chars for (self: FlatString): SequenceRead[Char] */
val* string__FlatString__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : SequenceRead[Char] */;
var1 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:FlatString> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#chars for (self: Object): SequenceRead[Char] */
val* VIRTUAL_string__FlatString__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
{ /* Inline string#FlatString#chars (self) on <self:Object(FlatString)> */
var3 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:Object(FlatString)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#[] for (self: FlatString, Int): Char */
char string__FlatString___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
char var39 /* : Char */;
char var41 /* : Char */;
var_index = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_index >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 945);
show_backtrace(1);
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var8 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var6) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var15 = var_index + var6;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var18 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var9,var16) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var25 = var9 <= var16;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 946);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var28 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var31 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var29) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var34 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var38 = var_index + var29;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var26,var32) on <var26:NativeString> */
var41 = var26[var32];
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#[] for (self: Object, Int): Char */
char VIRTUAL_string__FlatString___91d_93d(val* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = string__FlatString___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#substring for (self: FlatString, Int, Int): String */
val* string__FlatString__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
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
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var_realFrom /* var realFrom: Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
val* var58 /* : FlatString */;
char* var59 /* : NativeString */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var80 /* : Int */;
long var82 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const struct type* type_struct;
const char* var_class_name86;
long var87 /* : Int */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : String */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
long var100 /* : Int */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var_to /* var to: Int */;
val* var108 /* : FlatString */;
char* var109 /* : NativeString */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
long var119 /* : Int */;
long var120 /* : Int */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
long var126 /* : Int */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const struct type* type_struct130;
const char* var_class_name131;
var_from = p0;
var_count = p1;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_count,var1) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 971);
show_backtrace(1);
}
var6 = 0;
{
{ /* Inline kernel#Int#< (var_from,var6) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var13 = var_from < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var16 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var20 = var_count + var_from;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_count = var14;
var21 = 0;
{
{ /* Inline kernel#Int#< (var_count,var21) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var28 = var_count < var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var29 = 0;
var_count = var29;
} else {
}
var30 = 0;
var_from = var30;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var33 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var31,var_from) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var36 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var40 = var31 + var_from;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_realFrom = var34;
{
{ /* Inline kernel#Int#+ (var_realFrom,var_count) on <var_realFrom:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var43 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var47 = var_realFrom + var_count;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var50 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var41,var48) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var53 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var57 = var41 > var48;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
var58 = NEW_string__FlatString(&type_string__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var61 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var64 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var62,var_realFrom) on <var62:Int> */
/* Covariant cast for argument 0 (i) <var_realFrom:Int> isa OTHER */
/* <var_realFrom:Int> isa OTHER */
var67 = 1; /* easy <var_realFrom:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var71 = var62 - var_realFrom;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var72 = 1;
{
{ /* Inline kernel#Int#+ (var65,var72) on <var65:Int> */
/* Covariant cast for argument 0 (i) <var72:Int> isa OTHER */
/* <var72:Int> isa OTHER */
var75 = 1; /* easy <var72:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var79 = var65 + var72;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var82 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
string__FlatString__with_infos(var58, var59, var73, var_realFrom, var80); /* Direct call string#FlatString#with_infos on <var58:FlatString>*/
}
/* <var58:FlatString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype84 = type_struct->color;
idtype85 = type_struct->id;
if(cltype84 >= var58->type->table_size) {
var83 = 0;
} else {
var83 = var58->type->type_table[cltype84] == idtype85;
}
if (unlikely(!var83)) {
var_class_name86 = var58 == NULL ? "null" : var58->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 981);
show_backtrace(1);
}
var = var58;
goto RET_LABEL;
} else {
}
var87 = 0;
{
{ /* Inline kernel#Int#== (var_count,var87) on <var_count:Int> */
var91 = var_count == var87;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
{
var92 = string__FlatString__empty(self);
}
var = var92;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_realFrom,var_count) on <var_realFrom:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var95 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var99 = var_realFrom + var_count;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var100 = 1;
{
{ /* Inline kernel#Int#- (var93,var100) on <var93:Int> */
/* Covariant cast for argument 0 (i) <var100:Int> isa OTHER */
/* <var100:Int> isa OTHER */
var103 = 1; /* easy <var100:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var107 = var93 - var100;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var_to = var101;
var108 = NEW_string__FlatString(&type_string__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var111 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_to,var_realFrom) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_realFrom:Int> isa OTHER */
/* <var_realFrom:Int> isa OTHER */
var114 = 1; /* easy <var_realFrom:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var118 = var_to - var_realFrom;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var119 = 1;
{
{ /* Inline kernel#Int#+ (var112,var119) on <var112:Int> */
/* Covariant cast for argument 0 (i) <var119:Int> isa OTHER */
/* <var119:Int> isa OTHER */
var122 = 1; /* easy <var119:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var126 = var112 + var119;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
{
string__FlatString__with_infos(var108, var109, var120, var_realFrom, var_to); /* Direct call string#FlatString#with_infos on <var108:FlatString>*/
}
/* <var108:FlatString> isa SELFTYPE */
type_struct130 = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype128 = type_struct130->color;
idtype129 = type_struct130->id;
if(cltype128 >= var108->type->table_size) {
var127 = 0;
} else {
var127 = var108->type->type_table[cltype128] == idtype129;
}
if (unlikely(!var127)) {
var_class_name131 = var108 == NULL ? "null" : var108->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 987);
show_backtrace(1);
}
var = var108;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#substring for (self: Object, Int, Int): Text */
val* VIRTUAL_string__FlatString__substring(val* self, long p0, long p1) {
val* var /* : Text */;
val* var1 /* : String */;
var1 = string__FlatString__substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#empty for (self: FlatString): String */
val* string__FlatString__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const struct type* type_struct;
const char* var_class_name9;
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_string__FlatString.color;
idtype = type_string__FlatString.id;
if(cltype >= var1->type->table_size) {
var5 = 0;
} else {
var5 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 990);
show_backtrace(1);
}
/* <var1:String(FlatString)> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype7 = type_struct->color;
idtype8 = type_struct->id;
if(cltype7 >= var1->type->table_size) {
var6 = 0;
} else {
var6 = var1->type->type_table[cltype7] == idtype8;
}
if (unlikely(!var6)) {
var_class_name9 = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 990);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#empty for (self: Object): Text */
val* VIRTUAL_string__FlatString__empty(val* self) {
val* var /* : Text */;
val* var1 /* : String */;
var1 = string__FlatString__empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_upper for (self: FlatString): String */
val* string__FlatString__to_upper(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
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
long var12 /* : Int */;
long var_out_index /* var out_index: Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_index_from /* var index_from: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_max /* var max: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
char var29 /* : Char */;
char var31 /* : Char */;
char var32 /* : Char */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
char var53 /* : Char */;
long var55 /* : Int */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const struct type* type_struct;
const char* var_class_name62;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#+ (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var8 = var1 + var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var5) on <self:FlatString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_outstr = var9;
var12 = 0;
var_out_index = var12;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var15 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_myitems = var13;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var18 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_index_from = var16;
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var21 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_max = var19;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var24 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var28 = var_index_from <= var_max;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var31 = var_myitems[var_index_from];
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = kernel__Char__to_upper(var29);
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var32) on <var_outstr:NativeString> */
var_outstr[var_out_index]=var32;
RET_LABEL33:(void)0;
}
}
var34 = 1;
{
{ /* Inline kernel#Int#+ (var_out_index,var34) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var41 = var_out_index + var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_out_index = var35;
var42 = 1;
{
{ /* Inline kernel#Int#+ (var_index_from,var42) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var49 = var_index_from + var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_index_from = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var52 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = '\0';
{
{ /* Inline string#NativeString#[]= (var_outstr,var50,var53) on <var_outstr:NativeString> */
var_outstr[var50]=var53;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var57 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = string__NativeString__to_s_with_length(var_outstr, var55);
}
/* <var58:FlatString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype60 = type_struct->color;
idtype61 = type_struct->id;
if(cltype60 >= var58->type->table_size) {
var59 = 0;
} else {
var59 = var58->type->type_table[cltype60] == idtype61;
}
if (unlikely(!var59)) {
var_class_name62 = var58 == NULL ? "null" : var58->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1009);
show_backtrace(1);
}
var = var58;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_upper for (self: Object): String */
val* VIRTUAL_string__FlatString__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__FlatString__to_upper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_lower for (self: FlatString): String */
val* string__FlatString__to_lower(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
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
long var12 /* : Int */;
long var_out_index /* var out_index: Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_index_from /* var index_from: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_max /* var max: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
char var29 /* : Char */;
char var31 /* : Char */;
char var32 /* : Char */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
char var53 /* : Char */;
long var55 /* : Int */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const struct type* type_struct;
const char* var_class_name62;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#+ (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var8 = var1 + var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var5) on <self:FlatString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_outstr = var9;
var12 = 0;
var_out_index = var12;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var15 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_myitems = var13;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var18 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_index_from = var16;
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var21 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_max = var19;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var24 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var28 = var_index_from <= var_max;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var31 = var_myitems[var_index_from];
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = kernel__Char__to_lower(var29);
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var32) on <var_outstr:NativeString> */
var_outstr[var_out_index]=var32;
RET_LABEL33:(void)0;
}
}
var34 = 1;
{
{ /* Inline kernel#Int#+ (var_out_index,var34) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var41 = var_out_index + var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_out_index = var35;
var42 = 1;
{
{ /* Inline kernel#Int#+ (var_index_from,var42) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var49 = var_index_from + var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_index_from = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var52 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = '\0';
{
{ /* Inline string#NativeString#[]= (var_outstr,var50,var53) on <var_outstr:NativeString> */
var_outstr[var50]=var53;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var57 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = string__NativeString__to_s_with_length(var_outstr, var55);
}
/* <var58:FlatString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype60 = type_struct->color;
idtype61 = type_struct->id;
if(cltype60 >= var58->type->table_size) {
var59 = 0;
} else {
var59 = var58->type->type_table[cltype60] == idtype61;
}
if (unlikely(!var59)) {
var_class_name62 = var58 == NULL ? "null" : var58->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1029);
show_backtrace(1);
}
var = var58;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#to_lower for (self: Object): String */
val* VIRTUAL_string__FlatString__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__FlatString__to_lower(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#with_infos for (self: FlatString, NativeString, Int, Int, Int) */
void string__FlatString__with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_len /* var len: Int */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:FlatString>*/;
}
var_items = p0;
var_len = p1;
var_from = p2;
var_to = p3;
{
{ /* Inline string#FlatText#items= (self,var_items) on <self:FlatString> */
self->attrs[COLOR_string__FlatText___items].str = var_items; /* _items on <self:FlatString> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (self,var_len) on <self:FlatString> */
self->attrs[COLOR_string__FlatText___length].l = var_len; /* _length on <self:FlatString> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from= (self,var_from) on <self:FlatString> */
self->attrs[COLOR_string__FlatString___index_from].l = var_from; /* _index_from on <self:FlatString> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to= (self,var_to) on <self:FlatString> */
self->attrs[COLOR_string__FlatString___index_to].l = var_to; /* _index_to on <self:FlatString> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatString#with_infos for (self: Object, NativeString, Int, Int, Int) */
void VIRTUAL_string__FlatString__with_infos(val* self, char* p0, long p1, long p2, long p3) {
string__FlatString__with_infos(self, p0, p1, p2, p3); /* Direct call string#FlatString#with_infos on <self:Object(FlatString)>*/
RET_LABEL:;
}
/* method string#FlatString#to_cstring for (self: FlatString): NativeString */
char* string__FlatString__to_cstring(val* self) {
char* var /* : NativeString */;
val* var1 /* : nullable NativeString */;
val* var3 /* : nullable NativeString */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
val* var_other10 /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable NativeString */;
val* var17 /* : nullable NativeString */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var26 /* : Int */;
char* var27 /* : NativeString */;
char* var29 /* : NativeString */;
char* var_newItems /* var newItems: NativeString */;
char* var30 /* : NativeString */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
char var44 /* : Char */;
val* var47 /* : nullable NativeString */;
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatString> */
var3 = self->attrs[COLOR_string__FlatText___real_items].val; /* _real_items on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable NativeString> */
var_other = var4;
{ /* Inline kernel#Object#== (var1,var_other) on <var1:nullable NativeString(NativeString)> */
var_other10 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other10) on <var1:nullable NativeString(NativeString)> */
var13 = var1 == var_other10 || (var_other10 != NULL && var1->class == var_other10->class && ((struct instance_string__NativeString*)var1)->value == ((struct instance_string__NativeString*)var_other10)->value);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var14 = !var8;
var6 = var14;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatString> */
var17 = self->attrs[COLOR_string__FlatText___real_items].val; /* _real_items on <self:FlatString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1057);
show_backtrace(1);
}
var18 = ((struct instance_string__NativeString*)var15)->value; /* autounbox from nullable NativeString to NativeString */;
var = var18;
goto RET_LABEL;
} else {
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var21 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = 1;
{
{ /* Inline kernel#Int#+ (var19,var22) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var26 = var19 + var22;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var23) on <self:FlatString> */
var29 = (char*)nit_alloc(var23);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_newItems = var27;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var32 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var35 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var38 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = 0;
{
{ /* Inline string#NativeString#copy_to (var30,var_newItems,var33,var36,var39) on <var30:NativeString> */
memmove(var_newItems+var39,var30+var36,var33);
RET_LABEL40:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var43 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = '\0';
{
{ /* Inline string#NativeString#[]= (var_newItems,var41,var44) on <var_newItems:NativeString> */
var_newItems[var41]=var44;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline string#FlatText#real_items= (self,var_newItems) on <self:FlatString> */
var47 = BOX_string__NativeString(var_newItems); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_string__FlatText___real_items].val = var47; /* _real_items on <self:FlatString> */
RET_LABEL46:(void)0;
}
}
var = var_newItems;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatString#to_cstring for (self: Object): NativeString */
char* VIRTUAL_string__FlatString__to_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string__FlatString__to_cstring(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#== for (self: FlatString, nullable Object): Bool */
short int string__FlatString___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_my_length /* var my_length: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var30 /* : Int */;
long var_my_index /* var my_index: Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var_its_index /* var its_index: Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name;
long var39 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
char* var43 /* : NativeString */;
char* var45 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
char var53 /* : Char */;
char var55 /* : Char */;
char var56 /* : Char */;
char var58 /* : Char */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
long var80 /* : Int */;
short int var81 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa FlatString */
cltype = type_string__FlatString.color;
idtype = type_string__FlatString.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var1 = 0;
} else {
var1 = var_other->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var4 = ((short int (*)(val*, val*))(self->class->vft[COLOR_string__FlatString___61d_61d]))(self, p0) /* == on <self:FlatString>*/;
var3 = var4;
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#object_id (self) on <self:FlatString> */
var7 = (long)self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Object#object_id (var_other) on <var_other:nullable Object(FlatString)> */
var10 = (long)var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var5,var8) on <var5:Int> */
var14 = var5 == var8;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var15 = 1;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var18 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_my_length = var16;
{
{ /* Inline string#FlatText#length (var_other) on <var_other:nullable Object(FlatString)> */
var21 = var_other->attrs[COLOR_string__FlatText___length].l; /* _length on <var_other:nullable Object(FlatString)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var19,var_my_length) on <var19:Int> */
var25 = var19 == var_my_length;
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
var27 = 0;
var = var27;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var30 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_my_index = var28;
{
{ /* Inline string#FlatString#index_from (var_other) on <var_other:nullable Object(FlatString)> */
var33 = var_other->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_other:nullable Object(FlatString)> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_its_index = var31;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var36 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var39 = var_my_index + var_my_length;
var34 = var39;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_last_iteration = var34;
{
{ /* Inline string#FlatText#items (var_other) on <var_other:nullable Object(FlatString)> */
var42 = var_other->attrs[COLOR_string__FlatText___items].str; /* _items on <var_other:nullable Object(FlatString)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_itsitems = var40;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var45 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_myitems = var43;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var48 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var52 = var_my_index < var_last_iteration;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline string#NativeString#[] (var_myitems,var_my_index) on <var_myitems:NativeString> */
var55 = var_myitems[var_my_index];
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_itsitems,var_its_index) on <var_itsitems:NativeString> */
var58 = var_itsitems[var_its_index];
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var53,var56) on <var53:Char> */
var62 = var53 == var56;
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
var64 = 0;
var = var64;
goto RET_LABEL;
} else {
}
var65 = 1;
{
{ /* Inline kernel#Int#+ (var_my_index,var65) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var72 = var_my_index + var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_my_index = var66;
var73 = 1;
{
{ /* Inline kernel#Int#+ (var_its_index,var73) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <var73:Int> isa OTHER */
/* <var73:Int> isa OTHER */
var76 = 1; /* easy <var73:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var80 = var_its_index + var73;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var_its_index = var74;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var81 = 1;
var = var81;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_string__FlatString___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__FlatString___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#< for (self: FlatString, Text): Bool */
short int string__FlatString___60d(val* self, val* p0) {
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
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_curr_id_self /* var curr_id_self: Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var_curr_id_other /* var curr_id_other: Int */;
char* var24 /* : NativeString */;
char* var26 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var27 /* : NativeString */;
char* var29 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
long var30 /* : Int */;
long var32 /* : Int */;
long var_my_length /* var my_length: Int */;
long var33 /* : Int */;
long var35 /* : Int */;
long var_its_length /* var its_length: Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var_max_iterations /* var max_iterations: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
char var50 /* : Char */;
char var52 /* : Char */;
char var_my_curr_char /* var my_curr_char: Char */;
char var53 /* : Char */;
char var55 /* : Char */;
char var_its_curr_char /* var its_curr_char: Char */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1094);
show_backtrace(1);
}
var_other = p0;
/* <var_other:Text> isa FlatString */
cltype3 = type_string__FlatString.color;
idtype4 = type_string__FlatString.id;
if(cltype3 >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype3] == idtype4;
}
var5 = !var2;
if (var5){
{
var6 = ((short int (*)(val*, val*))(self->class->vft[COLOR_string__FlatString___60d]))(self, p0) /* < on <self:FlatString>*/;
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
var16 = var7 == var10;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var17 = 0;
var = var17;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var20 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_curr_id_self = var18;
{
{ /* Inline string#FlatString#index_from (var_other) on <var_other:Text(FlatString)> */
var23 = var_other->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_other:Text(FlatString)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_curr_id_other = var21;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var26 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_my_items = var24;
{
{ /* Inline string#FlatText#items (var_other) on <var_other:Text(FlatString)> */
var29 = var_other->attrs[COLOR_string__FlatText___items].str; /* _items on <var_other:Text(FlatString)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_its_items = var27;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var32 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_my_length = var30;
{
{ /* Inline string#FlatText#length (var_other) on <var_other:Text(FlatString)> */
var35 = var_other->attrs[COLOR_string__FlatText___length].l; /* _length on <var_other:Text(FlatString)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_its_length = var33;
{
{ /* Inline kernel#Int#+ (var_curr_id_self,var_my_length) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var38 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var42 = var_curr_id_self + var_my_length;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_max_iterations = var36;
for(;;) {
{
{ /* Inline kernel#Int#< (var_curr_id_self,var_max_iterations) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_max_iterations:Int> isa OTHER */
/* <var_max_iterations:Int> isa OTHER */
var45 = 1; /* easy <var_max_iterations:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var49 = var_curr_id_self < var_max_iterations;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline string#NativeString#[] (var_my_items,var_curr_id_self) on <var_my_items:NativeString> */
var52 = var_my_items[var_curr_id_self];
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_my_curr_char = var50;
{
{ /* Inline string#NativeString#[] (var_its_items,var_curr_id_other) on <var_its_items:NativeString> */
var55 = var_its_items[var_curr_id_other];
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_its_curr_char = var53;
{
{ /* Inline kernel#Char#!= (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
var59 = var_my_curr_char == var_its_curr_char;
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline kernel#Char#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Char> isa OTHER */
/* <var_its_curr_char:Char> isa OTHER */
var63 = 1; /* easy <var_its_curr_char:Char> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 546);
show_backtrace(1);
}
var67 = var_my_curr_char < var_its_curr_char;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
var68 = 1;
var = var68;
goto RET_LABEL;
} else {
}
var69 = 0;
var = var69;
goto RET_LABEL;
} else {
}
var70 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_id_self,var70) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var77 = var_curr_id_self + var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_curr_id_self = var71;
var78 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_id_other,var78) on <var_curr_id_other:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var85 = var_curr_id_other + var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_curr_id_other = var79;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var88 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var92 = var_my_length < var_its_length;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var = var86;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#< for (self: Object, Comparable): Bool */
short int VIRTUAL_string__FlatString___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__FlatString___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#+ for (self: FlatString, Text): String */
val* string__FlatString___43d(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: Text */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_my_length /* var my_length: Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_its_length /* var its_length: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
long var_total_length /* var total_length: Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
char* var29 /* : NativeString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
char* var50 /* : NativeString */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var55 /* : Int */;
long var_i /* var i: Int */;
long var56 /* : Int */;
long var58 /* : Int */;
long var_ /* var : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
val* var66 /* : SequenceRead[Char] */;
val* var67 /* : nullable Object */;
char var68 /* : Char */;
char var_c /* var c: Char */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
char var80 /* : Char */;
val* var82 /* : FlatString */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const struct type* type_struct;
const char* var_class_name86;
var_s = p0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_my_length = var1;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var6 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_its_length = var4;
{
{ /* Inline kernel#Int#+ (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var9 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var10 = var_my_length + var_its_length;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_total_length = var7;
{
{ /* Inline kernel#Int#+ (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var13 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var17 = var_my_length + var_its_length;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var18 = 1;
{
{ /* Inline kernel#Int#+ (var11,var18) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var25 = var11 + var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var19) on <self:FlatString> */
var28 = (char*)nit_alloc(var19);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_target_string = var26;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var31 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var34 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = 0;
{
{ /* Inline string#NativeString#copy_to (var29,var_target_string,var_my_length,var32,var35) on <var29:NativeString> */
memmove(var_target_string+var35,var29+var32,var_my_length);
RET_LABEL36:(void)0;
}
}
/* <var_s:Text> isa FlatString */
cltype38 = type_string__FlatString.color;
idtype39 = type_string__FlatString.id;
if(cltype38 >= var_s->type->table_size) {
var37 = 0;
} else {
var37 = var_s->type->type_table[cltype38] == idtype39;
}
if (var37){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var42 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var45 = var_s->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var40,var_target_string,var_its_length,var43,var_my_length) on <var40:NativeString> */
memmove(var_target_string+var_my_length,var40+var43,var_its_length);
RET_LABEL46:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype48 = type_string__FlatBuffer.color;
idtype49 = type_string__FlatBuffer.id;
if(cltype48 >= var_s->type->table_size) {
var47 = 0;
} else {
var47 = var_s->type->type_table[cltype48] == idtype49;
}
if (var47){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var52 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = 0;
{
{ /* Inline string#NativeString#copy_to (var50,var_target_string,var_its_length,var53,var_my_length) on <var50:NativeString> */
memmove(var_target_string+var_my_length,var50+var53,var_its_length);
RET_LABEL54:(void)0;
}
}
} else {
var_curr_pos = var_my_length;
var55 = 0;
var_i = var55;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var58 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
var_ = var56;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var61 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var65 = var_i < var_;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
var66 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var67 = ((val* (*)(val*, long))(var66->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var66, var_i) /* [] on <var66:SequenceRead[Char]>*/;
}
var68 = ((struct instance_kernel__Char*)var67)->value; /* autounbox from nullable Object to Char */;
var_c = var68;
{
{ /* Inline string#NativeString#[]= (var_target_string,var_curr_pos,var_c) on <var_target_string:NativeString> */
var_target_string[var_curr_pos]=var_c;
RET_LABEL69:(void)0;
}
}
var70 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_pos,var70) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var77 = var_curr_pos + var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_curr_pos = var71;
var78 = 1;
{
var79 = kernel__Int__successor(var_i, var78);
}
var_i = var79;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
var80 = '\0';
{
{ /* Inline string#NativeString#[]= (var_target_string,var_total_length,var80) on <var_target_string:NativeString> */
var_target_string[var_total_length]=var80;
RET_LABEL81:(void)0;
}
}
{
var82 = string__NativeString__to_s_with_length(var_target_string, var_total_length);
}
/* <var82:FlatString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype84 = type_struct->color;
idtype85 = type_struct->id;
if(cltype84 >= var82->type->table_size) {
var83 = 0;
} else {
var83 = var82->type->type_table[cltype84] == idtype85;
}
if (unlikely(!var83)) {
var_class_name86 = var82 == NULL ? "null" : var82->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1155);
show_backtrace(1);
}
var = var82;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#+ for (self: Object, Text): String */
val* VIRTUAL_string__FlatString___43d(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__FlatString___43d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#* for (self: FlatString, Int): String */
val* string__FlatString___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_my_length /* var my_length: Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var_final_length /* var final_length: Int */;
char* var16 /* : NativeString */;
char* var18 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
char* var27 /* : NativeString */;
char* var29 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
char var30 /* : Char */;
long var32 /* : Int */;
long var_current_last /* var current_last: Int */;
long var33 /* : Int */;
long var_iteration /* var iteration: Int */;
long var_ /* var : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const struct type* type_struct;
const char* var_class_name56;
var_i = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var1) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_i >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1160);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var8 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_my_length = var6;
{
{ /* Inline kernel#Int#* (var_my_length,var_i) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var11 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var15 = var_my_length * var_i;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_final_length = var9;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var18 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_my_items = var16;
var19 = 1;
{
{ /* Inline kernel#Int#+ (var_final_length,var19) on <var_final_length:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var26 = var_final_length + var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var20) on <self:FlatString> */
var29 = (char*)nit_alloc(var20);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_target_string = var27;
var30 = '\0';
{
{ /* Inline string#NativeString#[]= (var_target_string,var_final_length,var30) on <var_target_string:NativeString> */
var_target_string[var_final_length]=var30;
RET_LABEL31:(void)0;
}
}
var32 = 0;
var_current_last = var32;
var33 = 1;
var_iteration = var33;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_iteration,var_) on <var_iteration:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var36 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var40 = var_iteration <= var_;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var41 = 0;
{
{ /* Inline string#NativeString#copy_to (var_my_items,var_target_string,var_my_length,var41,var_current_last) on <var_my_items:NativeString> */
memmove(var_target_string+var_current_last,var_my_items+var41,var_my_length);
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_current_last,var_my_length) on <var_current_last:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var45 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var49 = var_current_last + var_my_length;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_current_last = var43;
var50 = 1;
{
var51 = kernel__Int__successor(var_iteration, var50);
}
var_iteration = var51;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var52 = string__NativeString__to_s_with_length(var_target_string, var_final_length);
}
/* <var52:FlatString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype54 = type_struct->color;
idtype55 = type_struct->id;
if(cltype54 >= var52->type->table_size) {
var53 = 0;
} else {
var53 = var52->type->type_table[cltype54] == idtype55;
}
if (unlikely(!var53)) {
var_class_name56 = var52 == NULL ? "null" : var52->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1179);
show_backtrace(1);
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#* for (self: Object, Int): String */
val* VIRTUAL_string__FlatString___42d(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__FlatString___42d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#hash for (self: FlatString): Int */
long string__FlatString__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_h /* var h: Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var_i /* var i: Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
char var34 /* : Char */;
char var36 /* : Char */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var59 /* : nullable Int */;
long var60 /* : Int */;
{
{ /* Inline string#Text#hash_cache (self) on <self:FlatString> */
var3 = self->attrs[COLOR_string__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,var4) on <var1:nullable Int> */
var8 = 0; /* incompatible types Int vs. null; cannot be NULL */
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var9 = 5381;
var_h = var9;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var12 = self->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_i = var10;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var15 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatString> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_myitems = var13;
for(;;) {
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var18 = self->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var_i,var16) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var22 = var_i <= var16;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var23 = 5;
{
{ /* Inline kernel#Int#lshift (var_h,var23) on <var_h:Int> */
var26 = var_h << var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var24,var_h) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var29 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var33 = var24 + var_h;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_myitems,var_i) on <var_myitems:NativeString> */
var36 = var_myitems[var_i];
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var34) on <var34:Char> */
var39 = (unsigned char)var34;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var37) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var42 = 1; /* easy <var37:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var46 = var27 + var37;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_h = var40;
var47 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var54 = var_i + var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_i = var48;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#Text#hash_cache= (self,var_h) on <self:FlatString> */
var56 = BOX_kernel__Int(var_h); /* autobox from Int to nullable Int */
self->attrs[COLOR_string__Text___hash_cache].val = var56; /* _hash_cache on <self:FlatString> */
RET_LABEL55:(void)0;
}
}
} else {
}
{
{ /* Inline string#Text#hash_cache (self) on <self:FlatString> */
var59 = self->attrs[COLOR_string__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1199);
show_backtrace(1);
}
var60 = ((struct instance_kernel__Int*)var57)->value; /* autounbox from nullable Int to Int */;
var = var60;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#hash for (self: Object): Int */
long VIRTUAL_string__FlatString__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__FlatString__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#substrings for (self: FlatString): Iterator[Text] */
val* string__FlatString__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_string__FlatSubstringsIter(&type_string__FlatSubstringsIter);
{
string__FlatSubstringsIter__init(var1, self); /* Direct call string#FlatSubstringsIter#init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#substrings for (self: Object): Iterator[Text] */
val* VIRTUAL_string__FlatString__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : Iterator[Text] */;
var1 = string__FlatString__substrings(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target for (self: FlatStringIterator): FlatString */
val* string__FlatStringIterator__target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1234);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target for (self: Object): FlatString */
val* VIRTUAL_string__FlatStringIterator__target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
{ /* Inline string#FlatStringIterator#target (self) on <self:Object(FlatStringIterator)> */
var3 = self->attrs[COLOR_string__FlatStringIterator___target].val; /* _target on <self:Object(FlatStringIterator)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1234);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target= for (self: FlatStringIterator, FlatString) */
void string__FlatStringIterator__target_61d(val* self, val* p0) {
self->attrs[COLOR_string__FlatStringIterator___target].val = p0; /* _target on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#target= for (self: Object, FlatString) */
void VIRTUAL_string__FlatStringIterator__target_61d(val* self, val* p0) {
{ /* Inline string#FlatStringIterator#target= (self,p0) on <self:Object(FlatStringIterator)> */
self->attrs[COLOR_string__FlatStringIterator___target].val = p0; /* _target on <self:Object(FlatStringIterator)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatStringIterator#target_items for (self: FlatStringIterator): NativeString */
char* string__FlatStringIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_string__FlatStringIterator___target_items].str; /* _target_items on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target_items for (self: Object): NativeString */
char* VIRTUAL_string__FlatStringIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#FlatStringIterator#target_items (self) on <self:Object(FlatStringIterator)> */
var3 = self->attrs[COLOR_string__FlatStringIterator___target_items].str; /* _target_items on <self:Object(FlatStringIterator)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target_items= for (self: FlatStringIterator, NativeString) */
void string__FlatStringIterator__target_items_61d(val* self, char* p0) {
self->attrs[COLOR_string__FlatStringIterator___target_items].str = p0; /* _target_items on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#target_items= for (self: Object, NativeString) */
void VIRTUAL_string__FlatStringIterator__target_items_61d(val* self, char* p0) {
{ /* Inline string#FlatStringIterator#target_items= (self,p0) on <self:Object(FlatStringIterator)> */
self->attrs[COLOR_string__FlatStringIterator___target_items].str = p0; /* _target_items on <self:Object(FlatStringIterator)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatStringIterator#curr_pos for (self: FlatStringIterator): Int */
long string__FlatStringIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#curr_pos for (self: Object): Int */
long VIRTUAL_string__FlatStringIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#FlatStringIterator#curr_pos (self) on <self:Object(FlatStringIterator)> */
var3 = self->attrs[COLOR_string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:Object(FlatStringIterator)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#curr_pos= for (self: FlatStringIterator, Int) */
void string__FlatStringIterator__curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatStringIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#curr_pos= for (self: Object, Int) */
void VIRTUAL_string__FlatStringIterator__curr_pos_61d(val* self, long p0) {
{ /* Inline string#FlatStringIterator#curr_pos= (self,p0) on <self:Object(FlatStringIterator)> */
self->attrs[COLOR_string__FlatStringIterator___curr_pos].l = p0; /* _curr_pos on <self:Object(FlatStringIterator)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatStringIterator#with_pos for (self: FlatStringIterator, FlatString, Int) */
void string__FlatStringIterator__with_pos(val* self, val* p0, long p1) {
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
self->attrs[COLOR_string__FlatStringIterator___target].val = var_tgt; /* _target on <self:FlatStringIterator> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var_tgt) on <var_tgt:FlatString> */
var3 = var_tgt->attrs[COLOR_string__FlatText___items].str; /* _items on <var_tgt:FlatString> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target_items= (self,var) on <self:FlatStringIterator> */
self->attrs[COLOR_string__FlatStringIterator___target_items].str = var; /* _target_items on <self:FlatStringIterator> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target (self) on <self:FlatStringIterator> */
var7 = self->attrs[COLOR_string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1234);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var5) on <var5:FlatString> */
var10 = var5->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var5:FlatString> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var14 = var_pos + var8;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#curr_pos= (self,var11) on <self:FlatStringIterator> */
self->attrs[COLOR_string__FlatStringIterator___curr_pos].l = var11; /* _curr_pos on <self:FlatStringIterator> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatStringIterator#with_pos for (self: Object, FlatString, Int) */
void VIRTUAL_string__FlatStringIterator__with_pos(val* self, val* p0, long p1) {
string__FlatStringIterator__with_pos(self, p0, p1); /* Direct call string#FlatStringIterator#with_pos on <self:Object(FlatStringIterator)>*/
RET_LABEL:;
}
/* method string#FlatStringIterator#is_ok for (self: FlatStringIterator): Bool */
short int string__FlatStringIterator__is_ok(val* self) {
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
var3 = self->attrs[COLOR_string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target (self) on <self:FlatStringIterator> */
var6 = self->attrs[COLOR_string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1234);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (var4) on <var4:FlatString> */
var9 = var4->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <var4:FlatString> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
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
/* method string#FlatStringIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_string__FlatStringIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__FlatStringIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#item for (self: FlatStringIterator): Char */
char string__FlatStringIterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
char var7 /* : Char */;
char var9 /* : Char */;
{
{ /* Inline string#FlatStringIterator#target_items (self) on <self:FlatStringIterator> */
var3 = self->attrs[COLOR_string__FlatStringIterator___target_items].str; /* _target_items on <self:FlatStringIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#curr_pos (self) on <self:FlatStringIterator> */
var6 = self->attrs[COLOR_string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = var1[var4];
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
/* method string#FlatStringIterator#item for (self: Object): nullable Object */
val* VIRTUAL_string__FlatStringIterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatStringIterator__item(self);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#next for (self: FlatStringIterator) */
void string__FlatStringIterator__next(val* self) {
val* var_ /* var : FlatStringIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_ = self;
{
{ /* Inline string#FlatStringIterator#curr_pos (var_) on <var_:FlatStringIterator> */
var2 = var_->attrs[COLOR_string__FlatStringIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringIterator> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var7 = var + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#curr_pos= (var_,var4) on <var_:FlatStringIterator> */
var_->attrs[COLOR_string__FlatStringIterator___curr_pos].l = var4; /* _curr_pos on <var_:FlatStringIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatStringIterator#next for (self: Object) */
void VIRTUAL_string__FlatStringIterator__next(val* self) {
string__FlatStringIterator__next(self); /* Direct call string#FlatStringIterator#next on <self:Object(FlatStringIterator)>*/
RET_LABEL:;
}
/* method string#FlatStringIterator#index for (self: FlatStringIterator): Int */
long string__FlatStringIterator__index(val* self) {
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
var3 = self->attrs[COLOR_string__FlatStringIterator___curr_pos].l; /* _curr_pos on <self:FlatStringIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatStringIterator#target (self) on <self:FlatStringIterator> */
var6 = self->attrs[COLOR_string__FlatStringIterator___target].val; /* _target on <self:FlatStringIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1234);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var4) on <var4:FlatString> */
var9 = var4->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var4:FlatString> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
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
/* method string#FlatStringIterator#index for (self: Object): Int */
long VIRTUAL_string__FlatStringIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__FlatStringIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#init for (self: FlatStringIterator) */
void string__FlatStringIterator__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__init]))(self) /* init on <self:FlatStringIterator>*/;
}
RET_LABEL:;
}
/* method string#FlatStringIterator#init for (self: Object) */
void VIRTUAL_string__FlatStringIterator__init(val* self) {
{ /* Inline string#FlatStringIterator#init (self) on <self:Object(FlatStringIterator)> */
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__init]))(self) /* init on <self:Object(FlatStringIterator)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
char string__FlatStringCharView___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Text */;
val* var8 /* : Text */;
val* var_target /* var target: FlatString */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
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
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
char var42 /* : Char */;
char var44 /* : Char */;
var_index = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_index >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1266);
show_backtrace(1);
}
{
{ /* Inline string#StringCharView#target (self) on <self:FlatStringCharView> */
var8 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_target = var6;
{
{ /* Inline string#FlatString#index_from (var_target) on <var_target:FlatString> */
var11 = var_target->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_target:FlatString> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var14 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var18 = var_index + var9;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (var_target) on <var_target:FlatString> */
var21 = var_target->attrs[COLOR_string__FlatString___index_to].l; /* _index_to on <var_target:FlatString> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var28 = var12 <= var19;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1268);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (var_target) on <var_target:FlatString> */
var31 = var_target->attrs[COLOR_string__FlatText___items].str; /* _items on <var_target:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_target) on <var_target:FlatString> */
var34 = var_target->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_target:FlatString> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_index,var32) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var37 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var41 = var_index + var32;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var29,var35) on <var29:NativeString> */
var44 = var29[var35];
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_string__FlatStringCharView___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatStringCharView___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* string__FlatStringCharView__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_string__FlatStringIterator(&type_string__FlatStringIterator);
{
{ /* Inline string#StringCharView#target (self) on <self:FlatStringCharView> */
var4 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
string__FlatStringIterator__with_pos(var1, var2, var_start); /* Direct call string#FlatStringIterator#with_pos on <var1:FlatStringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#iterator_from for (self: Object, Int): IndexedIterator[nullable Object] */
val* VIRTUAL_string__FlatStringCharView__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = string__FlatStringCharView__iterator_from(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty for (self: Buffer): Bool */
short int string__Buffer__is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_string__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty for (self: Object): Bool */
short int VIRTUAL_string__Buffer__is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline string#Buffer#is_dirty (self) on <self:Object(Buffer)> */
var3 = self->attrs[COLOR_string__Buffer___is_dirty].s; /* _is_dirty on <self:Object(Buffer)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#is_dirty= for (self: Buffer, Bool) */
void string__Buffer__is_dirty_61d(val* self, short int p0) {
self->attrs[COLOR_string__Buffer___is_dirty].s = p0; /* _is_dirty on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#is_dirty= for (self: Object, Bool) */
void VIRTUAL_string__Buffer__is_dirty_61d(val* self, short int p0) {
{ /* Inline string#Buffer#is_dirty= (self,p0) on <self:Object(Buffer)> */
self->attrs[COLOR_string__Buffer___is_dirty].s = p0; /* _is_dirty on <self:Object(Buffer)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#Buffer#written for (self: Buffer): Bool */
short int string__Buffer__written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_string__Buffer___written].s; /* _written on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#written for (self: Object): Bool */
short int VIRTUAL_string__Buffer__written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline string#Buffer#written (self) on <self:Object(Buffer)> */
var3 = self->attrs[COLOR_string__Buffer___written].s; /* _written on <self:Object(Buffer)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#written= for (self: Buffer, Bool) */
void string__Buffer__written_61d(val* self, short int p0) {
self->attrs[COLOR_string__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#written= for (self: Object, Bool) */
void VIRTUAL_string__Buffer__written_61d(val* self, short int p0) {
{ /* Inline string#Buffer#written= (self,p0) on <self:Object(Buffer)> */
self->attrs[COLOR_string__Buffer___written].s = p0; /* _written on <self:Object(Buffer)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#Buffer#hash for (self: Buffer): Int */
long string__Buffer__hash(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : null */;
long var6 /* : Int */;
{
{ /* Inline string#Buffer#is_dirty (self) on <self:Buffer> */
var3 = self->attrs[COLOR_string__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = NULL;
{
{ /* Inline string#Text#hash_cache= (self,var4) on <self:Buffer> */
self->attrs[COLOR_string__Text___hash_cache].val = var4; /* _hash_cache on <self:Buffer> */
RET_LABEL5:(void)0;
}
}
} else {
}
{
var6 = ((long (*)(val*))(self->class->vft[COLOR_string__Buffer__hash]))(self) /* hash on <self:Buffer>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#hash for (self: Object): Int */
long VIRTUAL_string__Buffer__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__Buffer__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#chars for (self: FlatBuffer): Sequence[Char] */
val* string__FlatBuffer__chars(val* self) {
val* var /* : Sequence[Char] */;
val* var1 /* : Sequence[Char] */;
var1 = self->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <self:FlatBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#chars for (self: Object): SequenceRead[Char] */
val* VIRTUAL_string__FlatBuffer__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : Sequence[Char] */;
val* var3 /* : Sequence[Char] */;
{ /* Inline string#FlatBuffer#chars (self) on <self:Object(FlatBuffer)> */
var3 = self->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <self:Object(FlatBuffer)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#capacity for (self: FlatBuffer): Int */
long string__FlatBuffer__capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#capacity for (self: Object): Int */
long VIRTUAL_string__FlatBuffer__capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#FlatBuffer#capacity (self) on <self:Object(FlatBuffer)> */
var3 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:Object(FlatBuffer)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#capacity= for (self: FlatBuffer, Int) */
void string__FlatBuffer__capacity_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method string#FlatBuffer#capacity= for (self: Object, Int) */
void VIRTUAL_string__FlatBuffer__capacity_61d(val* self, long p0) {
{ /* Inline string#FlatBuffer#capacity= (self,p0) on <self:Object(FlatBuffer)> */
self->attrs[COLOR_string__FlatBuffer___capacity].l = p0; /* _capacity on <self:Object(FlatBuffer)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatBuffer#substrings for (self: FlatBuffer): Iterator[Text] */
val* string__FlatBuffer__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_string__FlatSubstringsIter(&type_string__FlatSubstringsIter);
{
string__FlatSubstringsIter__init(var1, self); /* Direct call string#FlatSubstringsIter#init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#substrings for (self: Object): Iterator[Text] */
val* VIRTUAL_string__FlatBuffer__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : Iterator[Text] */;
var1 = string__FlatBuffer__substrings(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#reset for (self: FlatBuffer) */
void string__FlatBuffer__reset(val* self) {
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
long var13 /* : Int */;
long var14 /* : Int */;
short int var17 /* : Bool */;
var = NULL/*special!*/;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
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
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var9 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var12 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = 0;
var14 = 0;
{
{ /* Inline string#NativeString#copy_to (var7,var_nns,var10,var13,var14) on <var7:NativeString> */
memmove(var_nns+var14,var7+var13,var10);
RET_LABEL15:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var_nns) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___items].str = var_nns; /* _items on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
var17 = 0;
{
{ /* Inline string#Buffer#written= (self,var17) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___written].s = var17; /* _written on <self:FlatBuffer> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#reset for (self: Object) */
void VIRTUAL_string__FlatBuffer__reset(val* self) {
string__FlatBuffer__reset(self); /* Direct call string#FlatBuffer#reset on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#[] for (self: FlatBuffer, Int): Char */
char string__FlatBuffer___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
char* var16 /* : NativeString */;
char* var18 /* : NativeString */;
char var19 /* : Char */;
char var21 /* : Char */;
var_index = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_index >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1425);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var8 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_index,var6) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var15 = var_index < var6;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1426);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var18 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var16,var_index) on <var16:NativeString> */
var21 = var16[var_index];
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#[] for (self: Object, Int): Char */
char VIRTUAL_string__FlatBuffer___91d_93d(val* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = string__FlatBuffer___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#add for (self: FlatBuffer, Char) */
void string__FlatBuffer__add(val* self, char p0) {
char var_c /* var c: Char */;
short int var /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char* var23 /* : NativeString */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
long var28 /* : Int */;
val* var_ /* var : FlatBuffer */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
var_c = p0;
var = 1;
{
{ /* Inline string#Buffer#is_dirty= (self,var) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___is_dirty].s = var; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var4 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var7 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var11 = var2 <= var5;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var14 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = 5;
{
{ /* Inline kernel#Int#+ (var12,var15) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var22 = var12 + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
string__FlatBuffer__enlarge(self, var16); /* Direct call string#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
} else {
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var25 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var28 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var23,var26,var_c) on <var23:NativeString> */
var23[var26]=var_c;
RET_LABEL29:(void)0;
}
}
var_ = self;
{
{ /* Inline string#FlatText#length (var_) on <var_:FlatBuffer> */
var32 = var_->attrs[COLOR_string__FlatText___length].l; /* _length on <var_:FlatBuffer> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = 1;
{
{ /* Inline kernel#Int#+ (var30,var33) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var40 = var30 + var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (var_,var34) on <var_:FlatBuffer> */
var_->attrs[COLOR_string__FlatText___length].l = var34; /* _length on <var_:FlatBuffer> */
RET_LABEL41:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#add for (self: Object, Char) */
void VIRTUAL_string__FlatBuffer__add(val* self, char p0) {
string__FlatBuffer__add(self, p0); /* Direct call string#FlatBuffer#add on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#clear for (self: FlatBuffer) */
void string__FlatBuffer__clear(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
var = 1;
{
{ /* Inline string#Buffer#is_dirty= (self,var) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___is_dirty].s = var; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#Buffer#written (self) on <self:FlatBuffer> */
var4 = self->attrs[COLOR_string__Buffer___written].s; /* _written on <self:FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2){
{
string__FlatBuffer__reset(self); /* Direct call string#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
var5 = 0;
{
{ /* Inline string#FlatText#length= (self,var5) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___length].l = var5; /* _length on <self:FlatBuffer> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#clear for (self: Object) */
void VIRTUAL_string__FlatBuffer__clear(val* self) {
string__FlatBuffer__clear(self); /* Direct call string#FlatBuffer#clear on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#empty for (self: FlatBuffer): FlatBuffer */
val* string__FlatBuffer__empty(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
/* <var1:FlatBuffer> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1456);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#empty for (self: Object): Text */
val* VIRTUAL_string__FlatBuffer__empty(val* self) {
val* var /* : Text */;
val* var1 /* : FlatBuffer */;
var1 = string__FlatBuffer__empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#enlarge for (self: FlatBuffer, Int) */
void string__FlatBuffer__enlarge(val* self, long p0) {
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
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
short int var30 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
char* var_a /* var a: NativeString */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
char* var54 /* : NativeString */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
long var59 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
var_cap = p0;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
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
var_class_name12 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var13 = var_c <= var_cap;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var14 = 2;
{
{ /* Inline kernel#Int#* (var_c,var14) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var21 = var_c * var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var22 = 2;
{
{ /* Inline kernel#Int#+ (var15,var22) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var29 = var15 + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_c = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var30 = 0;
{
{ /* Inline string#Buffer#written= (self,var30) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___written].s = var30; /* _written on <self:FlatBuffer> */
RET_LABEL31:(void)0;
}
}
var32 = 1;
{
{ /* Inline kernel#Int#+ (var_c,var32) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var39 = var_c + var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var33) on <self:FlatBuffer> */
var42 = (char*)nit_alloc(var33);
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_a = var40;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var45 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = 0;
{
{ /* Inline kernel#Int#> (var43,var46) on <var43:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var53 = var43 > var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var56 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var59 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var60 = 0;
var61 = 0;
{
{ /* Inline string#NativeString#copy_to (var54,var_a,var57,var60,var61) on <var54:NativeString> */
memmove(var_a+var61,var54+var60,var57);
RET_LABEL62:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#items= (self,var_a) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
RET_LABEL63:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_c) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatBuffer___capacity].l = var_c; /* _capacity on <self:FlatBuffer> */
RET_LABEL64:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#enlarge for (self: Object, Int) */
void VIRTUAL_string__FlatBuffer__enlarge(val* self, long p0) {
string__FlatBuffer__enlarge(self, p0); /* Direct call string#FlatBuffer#enlarge on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#to_s for (self: FlatBuffer): String */
val* string__FlatBuffer__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
val* var17 /* : FlatString */;
char* var18 /* : NativeString */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var32 /* : Int */;
var1 = 1;
{
{ /* Inline string#Buffer#written= (self,var1) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___written].s = var1; /* _written on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var5 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
{ /* Inline kernel#Int#== (var3,var6) on <var3:Int> */
var10 = var3 == var6;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var11 = NULL/*special!*/;
var12 = 1;
{
{ /* Inline string#NativeString#new (var11,var12) on <var11:NativeString> */
var15 = (char*)nit_alloc(var12);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var13) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___items].str = var13; /* _items on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
} else {
}
var17 = NEW_string__FlatString(&type_string__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var20 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var23 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var27 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = 1;
{
{ /* Inline kernel#Int#- (var25,var28) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var32 = var25 - var28;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
string__FlatString__with_infos(var17, var18, var21, var24, var29); /* Direct call string#FlatString#with_infos on <var17:FlatString>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#to_s for (self: Object): String */
val* VIRTUAL_string__FlatBuffer__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__FlatBuffer__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#to_cstring for (self: FlatBuffer): NativeString */
char* string__FlatBuffer__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
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
char var18 /* : Char */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
char* var31 /* : NativeString */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
val* var41 /* : nullable NativeString */;
short int var42 /* : Bool */;
val* var44 /* : nullable NativeString */;
val* var46 /* : nullable NativeString */;
char* var47 /* : NativeString */;
{
{ /* Inline string#Buffer#is_dirty (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_string__Buffer___is_dirty].s; /* _is_dirty on <self:FlatBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var6 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = 1;
{
{ /* Inline kernel#Int#+ (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var11 = var4 + var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var8) on <self:FlatBuffer> */
var14 = (char*)nit_alloc(var8);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_new_native = var12;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var17 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = '\0';
{
{ /* Inline string#NativeString#[]= (var_new_native,var15,var18) on <var_new_native:NativeString> */
var_new_native[var15]=var18;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var22 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = 0;
{
{ /* Inline kernel#Int#> (var20,var23) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var30 = var20 > var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var33 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var36 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = 0;
var38 = 0;
{
{ /* Inline string#NativeString#copy_to (var31,var_new_native,var34,var37,var38) on <var31:NativeString> */
memmove(var_new_native+var38,var31+var37,var34);
RET_LABEL39:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#real_items= (self,var_new_native) on <self:FlatBuffer> */
var41 = BOX_string__NativeString(var_new_native); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_string__FlatText___real_items].val = var41; /* _real_items on <self:FlatBuffer> */
RET_LABEL40:(void)0;
}
}
var42 = 0;
{
{ /* Inline string#Buffer#is_dirty= (self,var42) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___is_dirty].s = var42; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL43:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatBuffer> */
var46 = self->attrs[COLOR_string__FlatText___real_items].val; /* _real_items on <self:FlatBuffer> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1488);
show_backtrace(1);
}
var47 = ((struct instance_string__NativeString*)var44)->value; /* autounbox from nullable NativeString to NativeString */;
var = var47;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#to_cstring for (self: Object): NativeString */
char* VIRTUAL_string__FlatBuffer__to_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string__FlatBuffer__to_cstring(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#init for (self: FlatBuffer) */
void string__FlatBuffer__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatBuffer__init]))(self) /* init on <self:FlatBuffer>*/;
}
RET_LABEL:;
}
/* method string#FlatBuffer#init for (self: Object) */
void VIRTUAL_string__FlatBuffer__init(val* self) {
{ /* Inline string#FlatBuffer#init (self) on <self:Object(FlatBuffer)> */
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatBuffer__init]))(self) /* init on <self:Object(FlatBuffer)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatBuffer#from for (self: FlatBuffer, Text) */
void string__FlatBuffer__from(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
char* var16 /* : NativeString */;
char* var18 /* : NativeString */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
char* var23 /* : NativeString */;
char* var25 /* : NativeString */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
char* var43 /* : NativeString */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var53 /* : Int */;
long var_i /* var i: Int */;
long var54 /* : Int */;
long var56 /* : Int */;
long var_ /* var : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : SequenceRead[Char] */;
val* var65 /* : nullable Object */;
char var66 /* : Char */;
char var_c /* var c: Char */;
char* var67 /* : NativeString */;
char* var69 /* : NativeString */;
long var71 /* : Int */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:FlatBuffer>*/;
}
var_s = p0;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var2 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var7 = var + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var4) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatBuffer___capacity].l = var4; /* _capacity on <self:FlatBuffer> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var11 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (self,var9) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___length].l = var9; /* _length on <self:FlatBuffer> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var15 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var13) on <self:FlatBuffer> */
var18 = (char*)nit_alloc(var13);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var16) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___items].str = var16; /* _items on <self:FlatBuffer> */
RET_LABEL19:(void)0;
}
}
/* <var_s:Text> isa FlatString */
cltype21 = type_string__FlatString.color;
idtype22 = type_string__FlatString.id;
if(cltype21 >= var_s->type->table_size) {
var20 = 0;
} else {
var20 = var_s->type->type_table[cltype21] == idtype22;
}
if (var20){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var25 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var28 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var31 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var34 = var_s->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = 0;
{
{ /* Inline string#NativeString#copy_to (var23,var26,var29,var32,var35) on <var23:NativeString> */
memmove(var26+var35,var23+var32,var29);
RET_LABEL36:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype38 = type_string__FlatBuffer.color;
idtype39 = type_string__FlatBuffer.id;
if(cltype38 >= var_s->type->table_size) {
var37 = 0;
} else {
var37 = var_s->type->type_table[cltype38] == idtype39;
}
if (var37){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var42 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var45 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var48 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = 0;
var50 = 0;
{
{ /* Inline string#NativeString#copy_to (var40,var43,var46,var49,var50) on <var40:NativeString> */
memmove(var43+var50,var40+var49,var46);
RET_LABEL51:(void)0;
}
}
} else {
var52 = 0;
var_curr_pos = var52;
var53 = 0;
var_i = var53;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var56 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_ = var54;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var59 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var63 = var_i < var_;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
var64 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var65 = ((val* (*)(val*, long))(var64->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var64, var_i) /* [] on <var64:SequenceRead[Char]>*/;
}
var66 = ((struct instance_kernel__Char*)var65)->value; /* autounbox from nullable Object to Char */;
var_c = var66;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var69 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var67,var_curr_pos,var_c) on <var67:NativeString> */
var67[var_curr_pos]=var_c;
RET_LABEL70:(void)0;
}
}
var71 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_pos,var71) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var78 = var_curr_pos + var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var_curr_pos = var72;
var79 = 1;
{
var80 = kernel__Int__successor(var_i, var79);
}
var_i = var80;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#from for (self: Object, Text) */
void VIRTUAL_string__FlatBuffer__from(val* self, val* p0) {
string__FlatBuffer__from(self, p0); /* Direct call string#FlatBuffer#from on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#with_capacity for (self: FlatBuffer, Int) */
void string__FlatBuffer__with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
long var18 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:FlatBuffer>*/;
}
var_cap = p0;
var = 0;
{
{ /* Inline kernel#Int#>= (var_cap,var) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var4 = var_cap >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1516);
show_backtrace(1);
}
var5 = 1;
{
{ /* Inline kernel#Int#+ (var_cap,var5) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var12 = var_cap + var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var6) on <self:FlatBuffer> */
var15 = (char*)nit_alloc(var6);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var13) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___items].str = var13; /* _items on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_cap) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatBuffer___capacity].l = var_cap; /* _capacity on <self:FlatBuffer> */
RET_LABEL17:(void)0;
}
}
var18 = 0;
{
{ /* Inline string#FlatText#length= (self,var18) on <self:FlatBuffer> */
self->attrs[COLOR_string__FlatText___length].l = var18; /* _length on <self:FlatBuffer> */
RET_LABEL19:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#with_capacity for (self: Object, Int) */
void VIRTUAL_string__FlatBuffer__with_capacity(val* self, long p0) {
string__FlatBuffer__with_capacity(self, p0); /* Direct call string#FlatBuffer#with_capacity on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#append for (self: FlatBuffer, Text) */
void string__FlatBuffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
short int var1 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_sl /* var sl: Int */;
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
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
char* var36 /* : NativeString */;
char* var38 /* : NativeString */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
char* var52 /* : NativeString */;
char* var54 /* : NativeString */;
char* var55 /* : NativeString */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var63 /* : Int */;
long var65 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var66 /* : Int */;
long var_i /* var i: Int */;
long var67 /* : Int */;
long var69 /* : Int */;
long var_ /* var : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : SequenceRead[Char] */;
val* var78 /* : nullable Object */;
char var79 /* : Char */;
char var_c /* var c: Char */;
char* var80 /* : NativeString */;
char* var82 /* : NativeString */;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
long var92 /* : Int */;
long var93 /* : Int */;
val* var_94 /* var : FlatBuffer */;
long var95 /* : Int */;
long var97 /* : Int */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
var_s = p0;
{
var = string__Text__is_empty(var_s);
}
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
{
{ /* Inline string#Buffer#is_dirty= (self,var1) on <self:FlatBuffer> */
self->attrs[COLOR_string__Buffer___is_dirty].s = var1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var5 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_sl = var3;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var8 = self->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var11 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var9,var_sl) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var14 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var15 = var9 + var_sl;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var6,var12) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var18 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var22 = var6 < var12;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var25 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var23,var_sl) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var28 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var32 = var23 + var_sl;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
string__FlatBuffer__enlarge(self, var26); /* Direct call string#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
} else {
}
/* <var_s:Text> isa FlatString */
cltype34 = type_string__FlatString.color;
idtype35 = type_string__FlatString.id;
if(cltype34 >= var_s->type->table_size) {
var33 = 0;
} else {
var33 = var_s->type->type_table[cltype34] == idtype35;
}
if (var33){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var38 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var41 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var44 = var_s->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var47 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var36,var39,var_sl,var42,var45) on <var36:NativeString> */
memmove(var39+var45,var36+var42,var_sl);
RET_LABEL48:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype50 = type_string__FlatBuffer.color;
idtype51 = type_string__FlatBuffer.id;
if(cltype50 >= var_s->type->table_size) {
var49 = 0;
} else {
var49 = var_s->type->type_table[cltype50] == idtype51;
}
if (var49){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var54 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var57 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var58 = 0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var61 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var52,var55,var_sl,var58,var59) on <var52:NativeString> */
memmove(var55+var59,var52+var58,var_sl);
RET_LABEL62:(void)0;
}
}
} else {
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var65 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_curr_pos = var63;
var66 = 0;
var_i = var66;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var69 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_ = var67;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var72 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var76 = var_i < var_;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
{
var77 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var78 = ((val* (*)(val*, long))(var77->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var77, var_i) /* [] on <var77:SequenceRead[Char]>*/;
}
var79 = ((struct instance_kernel__Char*)var78)->value; /* autounbox from nullable Object to Char */;
var_c = var79;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var82 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var80,var_curr_pos,var_c) on <var80:NativeString> */
var80[var_curr_pos]=var_c;
RET_LABEL83:(void)0;
}
}
var84 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_pos,var84) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <var84:Int> isa OTHER */
/* <var84:Int> isa OTHER */
var87 = 1; /* easy <var84:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var91 = var_curr_pos + var84;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_curr_pos = var85;
var92 = 1;
{
var93 = kernel__Int__successor(var_i, var92);
}
var_i = var93;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
var_94 = self;
{
{ /* Inline string#FlatText#length (var_94) on <var_94:FlatBuffer> */
var97 = var_94->attrs[COLOR_string__FlatText___length].l; /* _length on <var_94:FlatBuffer> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var95,var_sl) on <var95:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var100 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var104 = var95 + var_sl;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (var_94,var98) on <var_94:FlatBuffer> */
var_94->attrs[COLOR_string__FlatText___length].l = var98; /* _length on <var_94:FlatBuffer> */
RET_LABEL105:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#append for (self: Object, Text) */
void VIRTUAL_string__FlatBuffer__append(val* self, val* p0) {
string__FlatBuffer__append(self, p0); /* Direct call string#FlatBuffer#append on <self:Object(FlatBuffer)>*/
RET_LABEL:;
}
/* method string#FlatBuffer#substring for (self: FlatBuffer, Int, Int): FlatBuffer */
val* string__FlatBuffer__substring(val* self, long p0, long p1) {
val* var /* : FlatBuffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var1 /* : Int */;
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
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : FlatBuffer */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
val* var_r /* var r: FlatBuffer */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
val* var57 /* : Sequence[Char] */;
val* var59 /* : Sequence[Char] */;
char* var60 /* : NativeString */;
char* var62 /* : NativeString */;
char var63 /* : Char */;
char var65 /* : Char */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const struct type* type_struct;
const char* var_class_name78;
val* var79 /* : FlatBuffer */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const struct type* type_struct83;
const char* var_class_name84;
var_from = p0;
var_count = p1;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_count,var1) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1556);
show_backtrace(1);
}
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var8 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var12 = var_count + var_from;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_count = var6;
var13 = 0;
{
{ /* Inline kernel#Int#< (var_from,var13) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var20 = var_from < var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var21 = 0;
var_from = var21;
} else {
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var24 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_count,var22) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var27 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var31 = var_count > var22;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var34 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_count = var32;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var37 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var41 = var_from < var_count;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
{ /* Inline kernel#Int#- (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var45 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var49 = var_count - var_from;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
string__FlatBuffer__with_capacity(var42, var43); /* Direct call string#FlatBuffer#with_capacity on <var42:FlatBuffer>*/
}
var_r = var42;
for(;;) {
{
{ /* Inline kernel#Int#< (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var52 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var56 = var_from < var_count;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
{ /* Inline string#FlatBuffer#chars (var_r) on <var_r:FlatBuffer> */
var59 = var_r->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var_r:FlatBuffer> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var62 = self->attrs[COLOR_string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var60,var_from) on <var60:NativeString> */
var65 = var60[var_from];
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var66 = BOX_kernel__Char(var63); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var57->class->vft[COLOR_abstract_collection__Sequence__push]))(var57, var66) /* push on <var57:Sequence[Char]>*/;
}
var67 = 1;
{
{ /* Inline kernel#Int#+ (var_from,var67) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var74 = var_from + var67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_from = var68;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_r:FlatBuffer> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype76 = type_struct->color;
idtype77 = type_struct->id;
if(cltype76 >= var_r->type->table_size) {
var75 = 0;
} else {
var75 = var_r->type->type_table[cltype76] == idtype77;
}
if (unlikely(!var75)) {
var_class_name78 = var_r == NULL ? "null" : var_r->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1566);
show_backtrace(1);
}
var = var_r;
goto RET_LABEL;
} else {
var79 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var79->class->vft[COLOR_kernel__Object__init]))(var79) /* init on <var79:FlatBuffer>*/;
}
/* <var79:FlatBuffer> isa SELFTYPE */
type_struct83 = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype81 = type_struct83->color;
idtype82 = type_struct83->id;
if(cltype81 >= var79->type->table_size) {
var80 = 0;
} else {
var80 = var79->type->type_table[cltype81] == idtype82;
}
if (unlikely(!var80)) {
var_class_name84 = var79 == NULL ? "null" : var79->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1568);
show_backtrace(1);
}
var = var79;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#substring for (self: Object, Int, Int): Text */
val* VIRTUAL_string__FlatBuffer__substring(val* self, long p0, long p1) {
val* var /* : Text */;
val* var1 /* : FlatBuffer */;
var1 = string__FlatBuffer__substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
char string__FlatBufferCharView___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
char var7 /* : Char */;
char var9 /* : Char */;
var_index = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var1) on <var1:Text(FlatBuffer)> */
var6 = var1->attrs[COLOR_string__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var4,var_index) on <var4:NativeString> */
var9 = var4[var_index];
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
/* method string#FlatBufferCharView#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_string__FlatBufferCharView___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatBufferCharView___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void string__FlatBufferCharView___91d_93d_61d(val* self, long p0, char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_index /* var index: Int */;
char var_item /* var item: Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Text */;
val* var25 /* : Text */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa E */
/* <p1:Char> isa E */
var = 1; /* easy <p1:Char> isa E*/
if (unlikely(!var)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1652);
show_backtrace(1);
}
var_index = p0;
var_item = p1;
var2 = 0;
{
{ /* Inline kernel#Int#>= (var_index,var2) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name8 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var9 = var_index >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
var10 = string__StringCharView__length(self);
}
{
{ /* Inline kernel#Int#<= (var_index,var10) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var17 = var_index <= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1654);
show_backtrace(1);
}
{
var18 = string__StringCharView__length(self);
}
{
{ /* Inline kernel#Int#== (var_index,var18) on <var_index:Int> */
var22 = var_index == var18;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
string__FlatBufferCharView__add(self, var_item); /* Direct call string#FlatBufferCharView#add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var25 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var23) on <var23:Text(FlatBuffer)> */
var28 = var23->attrs[COLOR_string__FlatText___items].str; /* _items on <var23:Text(FlatBuffer)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var26,var_index,var_item) on <var26:NativeString> */
var26[var_index]=var_item;
RET_LABEL29:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_string__FlatBufferCharView___91d_93d_61d(val* self, long p0, val* p1) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p1)->value; /* autounbox from nullable Object to Char */;
string__FlatBufferCharView___91d_93d_61d(self, p0, var); /* Direct call string#FlatBufferCharView#[]= on <self:Object(FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void string__FlatBufferCharView__push(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa E */
/* <p0:Char> isa E */
var = 1; /* easy <p0:Char> isa E*/
if (unlikely(!var)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1662);
show_backtrace(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
string__FlatBuffer__add(var1, var_c); /* Direct call string#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: Object, nullable Object) */
void VIRTUAL_string__FlatBufferCharView__push(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
string__FlatBufferCharView__push(self, var); /* Direct call string#FlatBufferCharView#push on <self:Object(FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void string__FlatBufferCharView__add(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa E */
/* <p0:Char> isa E */
var = 1; /* easy <p0:Char> isa E*/
if (unlikely(!var)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1667);
show_backtrace(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
string__FlatBuffer__add(var1, var_c); /* Direct call string#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: Object, nullable Object) */
void VIRTUAL_string__FlatBufferCharView__add(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
string__FlatBufferCharView__add(self, var); /* Direct call string#FlatBufferCharView#add on <self:Object(FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void string__FlatBufferCharView__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
val* var2 /* : Text */;
var_cap = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var2 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
string__FlatBuffer__enlarge(var, var_cap); /* Direct call string#FlatBuffer#enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#enlarge for (self: Object, Int) */
void VIRTUAL_string__FlatBufferCharView__enlarge(val* self, long p0) {
string__FlatBufferCharView__enlarge(self, p0); /* Direct call string#FlatBufferCharView#enlarge on <self:Object(FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void string__FlatBufferCharView__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
val* var1 /* : Text */;
val* var3 /* : Text */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
long var7 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var8 /* : Text */;
val* var10 /* : Text */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : Text */;
val* var24 /* : Text */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[E] */
/* <p0:Collection[Char]> isa Collection[E] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[E]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1677);
show_backtrace(1);
}
var_s = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var1) on <var1:Text(FlatBuffer)> */
var6 = var1->attrs[COLOR_string__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_my_items = var4;
{
var7 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char]>*/;
}
var_s_length = var7;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var10 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity (var8) on <var8:Text(FlatBuffer)> */
var13 = var8->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <var8:Text(FlatBuffer)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char]>*/;
}
{
{ /* Inline kernel#Int#< (var11,var14) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var21 = var11 < var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var24 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var22) on <var22:Text(FlatBuffer)> */
var27 = var22->attrs[COLOR_string__FlatText___length].l; /* _length on <var22:Text(FlatBuffer)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_s_length,var25) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var30 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var34 = var_s_length + var25;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
string__FlatBufferCharView__enlarge(self, var28); /* Direct call string#FlatBufferCharView#enlarge on <self:FlatBufferCharView>*/
}
} else {
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#append for (self: Object, Collection[nullable Object]) */
void VIRTUAL_string__FlatBufferCharView__append(val* self, val* p0) {
string__FlatBufferCharView__append(self, p0); /* Direct call string#FlatBufferCharView#append on <self:Object(FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* string__FlatBufferCharView__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_string__FlatBufferIterator(&type_string__FlatBufferIterator);
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 738);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
string__FlatBufferIterator__with_pos(var1, var2, var_pos); /* Direct call string#FlatBufferIterator#with_pos on <var1:FlatBufferIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#iterator_from for (self: Object, Int): IndexedIterator[nullable Object] */
val* VIRTUAL_string__FlatBufferCharView__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = string__FlatBufferCharView__iterator_from(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target for (self: FlatBufferIterator): FlatBuffer */
val* string__FlatBufferIterator__target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_string__FlatBufferIterator___target].val; /* _target on <self:FlatBufferIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1693);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target for (self: Object): FlatBuffer */
val* VIRTUAL_string__FlatBufferIterator__target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
{ /* Inline string#FlatBufferIterator#target (self) on <self:Object(FlatBufferIterator)> */
var3 = self->attrs[COLOR_string__FlatBufferIterator___target].val; /* _target on <self:Object(FlatBufferIterator)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1693);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target= for (self: FlatBufferIterator, FlatBuffer) */
void string__FlatBufferIterator__target_61d(val* self, val* p0) {
self->attrs[COLOR_string__FlatBufferIterator___target].val = p0; /* _target on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#target= for (self: Object, FlatBuffer) */
void VIRTUAL_string__FlatBufferIterator__target_61d(val* self, val* p0) {
{ /* Inline string#FlatBufferIterator#target= (self,p0) on <self:Object(FlatBufferIterator)> */
self->attrs[COLOR_string__FlatBufferIterator___target].val = p0; /* _target on <self:Object(FlatBufferIterator)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#target_items for (self: FlatBufferIterator): NativeString */
char* string__FlatBufferIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_string__FlatBufferIterator___target_items].str; /* _target_items on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target_items for (self: Object): NativeString */
char* VIRTUAL_string__FlatBufferIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#FlatBufferIterator#target_items (self) on <self:Object(FlatBufferIterator)> */
var3 = self->attrs[COLOR_string__FlatBufferIterator___target_items].str; /* _target_items on <self:Object(FlatBufferIterator)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target_items= for (self: FlatBufferIterator, NativeString) */
void string__FlatBufferIterator__target_items_61d(val* self, char* p0) {
self->attrs[COLOR_string__FlatBufferIterator___target_items].str = p0; /* _target_items on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#target_items= for (self: Object, NativeString) */
void VIRTUAL_string__FlatBufferIterator__target_items_61d(val* self, char* p0) {
{ /* Inline string#FlatBufferIterator#target_items= (self,p0) on <self:Object(FlatBufferIterator)> */
self->attrs[COLOR_string__FlatBufferIterator___target_items].str = p0; /* _target_items on <self:Object(FlatBufferIterator)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#curr_pos for (self: FlatBufferIterator): Int */
long string__FlatBufferIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#curr_pos for (self: Object): Int */
long VIRTUAL_string__FlatBufferIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:Object(FlatBufferIterator)> */
var3 = self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:Object(FlatBufferIterator)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#curr_pos= for (self: FlatBufferIterator, Int) */
void string__FlatBufferIterator__curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#curr_pos= for (self: Object, Int) */
void VIRTUAL_string__FlatBufferIterator__curr_pos_61d(val* self, long p0) {
{ /* Inline string#FlatBufferIterator#curr_pos= (self,p0) on <self:Object(FlatBufferIterator)> */
self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l = p0; /* _curr_pos on <self:Object(FlatBufferIterator)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#with_pos for (self: FlatBufferIterator, FlatBuffer, Int) */
void string__FlatBufferIterator__with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: FlatBuffer */;
long var_pos /* var pos: Int */;
long var /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
char* var9 /* : NativeString */;
char* var11 /* : NativeString */;
var_tgt = p0;
var_pos = p1;
{
{ /* Inline string#FlatBufferIterator#target= (self,var_tgt) on <self:FlatBufferIterator> */
self->attrs[COLOR_string__FlatBufferIterator___target].val = var_tgt; /* _target on <self:FlatBufferIterator> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_tgt) on <var_tgt:FlatBuffer> */
var3 = var_tgt->attrs[COLOR_string__FlatText___length].l; /* _length on <var_tgt:FlatBuffer> */
var = var3;
RET_LABEL2:(void)0;
}
}
var4 = 0;
{
{ /* Inline kernel#Int#> (var,var4) on <var:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var8 = var > var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline string#FlatText#items (var_tgt) on <var_tgt:FlatBuffer> */
var11 = var_tgt->attrs[COLOR_string__FlatText___items].str; /* _items on <var_tgt:FlatBuffer> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#target_items= (self,var9) on <self:FlatBufferIterator> */
self->attrs[COLOR_string__FlatBufferIterator___target_items].str = var9; /* _target_items on <self:FlatBufferIterator> */
RET_LABEL12:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatBufferIterator#curr_pos= (self,var_pos) on <self:FlatBufferIterator> */
self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l = var_pos; /* _curr_pos on <self:FlatBufferIterator> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#with_pos for (self: Object, FlatBuffer, Int) */
void VIRTUAL_string__FlatBufferIterator__with_pos(val* self, val* p0, long p1) {
string__FlatBufferIterator__with_pos(self, p0, p1); /* Direct call string#FlatBufferIterator#with_pos on <self:Object(FlatBufferIterator)>*/
RET_LABEL:;
}
