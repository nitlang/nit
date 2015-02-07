#include "standard__string.sep.0.h"
/* method string#Text#is_empty for (self: Text): Bool */
short int standard___standard__Text___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
{
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var2 = 0;
{
{ /* Inline kernel#Int#== (var1,var2) on <var1:Int> */
var5 = var1 == var2;
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
/* method string#Text#last for (self: Text): Char */
char standard___standard__Text___last(val* self) {
char var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
{
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var2 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var3 = 1;
{
{ /* Inline kernel#Int#- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var7 = var2 - var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val* (*)(val* self, long p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var1, var4) /* [] on <var1:SequenceRead[Char]>*/;
}
var9 = ((struct instance_standard__Char*)var8)->value; /* autounbox from nullable Object to Char */;
var = var9;
goto RET_LABEL;
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
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
val* var24 /* : Text */;
var_from = p0;
{
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__empty]))(self) /* empty on <self:Text>*/;
}
var = var6;
goto RET_LABEL;
} else {
}
var7 = 0;
{
{ /* Inline kernel#Int#< (var_from,var7) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var14 = var_from < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var15 = 0;
var_from = var15;
} else {
}
{
var16 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
{ /* Inline kernel#Int#- (var16,var_from) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var19 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var23 = var16 - var_from;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
var24 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var_from, var17) /* substring on <self:Text>*/;
}
var = var24;
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
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : SequenceRead[Char] */;
val* var27 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var28 /* : SequenceRead[Char] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var35 /* : nullable Object */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = standard___standard__Text___is_empty(var_str);
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var9 = ((long (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str) /* length on <var_str:String>*/;
}
{
{ /* Inline kernel#Int#+ (var_pos,var9) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var16 = var_pos + var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var17 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
{ /* Inline kernel#Int#> (var10,var17) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var24 = var10 > var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var3 = var18;
}
if (var3){
var25 = 0;
var = var25;
goto RET_LABEL;
} else {
}
{
var26 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var27 = ((val* (*)(val* self, long p0))(var26->class->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(var26, var_pos) /* iterator_from on <var26:SequenceRead[Char]>*/;
}
var_myiter = var27;
{
var28 = ((val* (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str) /* chars on <var_str:String>*/;
}
{
var29 = ((val* (*)(val* self))(var28->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:SequenceRead[Char]>*/;
}
var_itsiter = var29;
for(;;) {
{
var31 = ((short int (*)(val* self))(var_myiter->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_myiter) /* is_ok on <var_myiter:IndexedIterator[Char]>*/;
}
var_32 = var31;
if (var31){
{
var33 = ((short int (*)(val* self))(var_itsiter->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_itsiter) /* is_ok on <var_itsiter:IndexedIterator[Char]>*/;
}
var30 = var33;
} else {
var30 = var_32;
}
if (var30){
{
var34 = ((val* (*)(val* self))(var_myiter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_myiter) /* item on <var_myiter:IndexedIterator[Char]>*/;
}
{
var35 = ((val* (*)(val* self))(var_itsiter->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_itsiter) /* item on <var_itsiter:IndexedIterator[Char]>*/;
}
{
{ /* Inline kernel#Char#!= (var34,var35) on <var34:nullable Object(Char)> */
var38 = var34 == var35 || (((struct instance_standard__Char*)var34)->value == ((struct instance_standard__Char*)var35)->value);
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var40 = 0;
var = var40;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_myiter->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_myiter) /* next on <var_myiter:IndexedIterator[Char]>*/;
}
{
((void (*)(val* self))(var_itsiter->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_itsiter) /* next on <var_itsiter:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var41 = ((short int (*)(val* self))(var_itsiter->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_itsiter) /* is_ok on <var_itsiter:IndexedIterator[Char]>*/;
}
if (var41){
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
var43 = 1;
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#has_prefix for (self: Text, String): Bool */
short int standard___standard__Text___has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var_prefix = p0;
var1 = 0;
{
var2 = standard___standard__Text___has_substring(self, var_prefix, var1);
}
var = var2;
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
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
var2 = ((long (*)(val* self))(var_suffix->class->vft[COLOR_standard__string__Text__length]))(var_suffix) /* length on <var_suffix:String>*/;
}
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
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
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self) /* to_s on <self:Text>*/;
}
{
var2 = ((char* (*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1) /* to_cstring on <var1:String>*/;
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
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self) /* to_s on <self:Text>*/;
}
{
var2 = ((char* (*)(val* self))(var1->class->vft[COLOR_standard__string__Text__to_cstring]))(var1) /* to_cstring on <var1:String>*/;
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
long var2 /* : Int */;
var1 = 16;
{
var2 = standard___standard__Text___a_to(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#a_to for (self: Text, Int): Int */
long standard___standard__Text___a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
short int var_neg /* var neg: Bool */;
long var3 /* : Int */;
long var_j /* var j: Int */;
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
char var11 /* : Char */;
char var_c /* var c: Char */;
long var12 /* : Int */;
long var_v /* var v: Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
var_base = p0;
var1 = 0;
var_i = var1;
var2 = 0;
var_neg = var2;
var3 = 0;
var_j = var3;
{
var4 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var8 = var_j < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var10 = ((val* (*)(val* self, long p0))(var9->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_j) /* [] on <var9:SequenceRead[Char]>*/;
}
var11 = ((struct instance_standard__Char*)var10)->value; /* autounbox from nullable Object to Char */;
var_c = var11;
{
var12 = standard___standard__Char___to_i(var_c);
}
var_v = var12;
{
{ /* Inline kernel#Int#> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var15 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var19 = var_v > var_base;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var22 = -var_i;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var = var20;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
var23 = 0;
{
{ /* Inline kernel#Int#< (var_v,var23) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var30 = var_v < var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = 1;
var_neg = var31;
} else {
{
{ /* Inline kernel#Int#* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var34 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
show_backtrace(1);
}
var38 = var_i * var_base;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var32,var_v) on <var32:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var41 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var45 = var32 + var_v;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_i = var39;
}
}
var46 = 1;
{
var47 = standard___standard__Int___Discrete__successor(var_j, var46);
}
var_j = var47;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var50 = -var_i;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var = var48;
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
short int var1 /* : Bool */;
short int var_has_point_or_comma /* var has_point_or_comma: Bool */;
long var2 /* : Int */;
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
char var10 /* : Char */;
char var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
char var20 /* : Char */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
var1 = 0;
var_has_point_or_comma = var1;
var2 = 0;
var_i = var2;
{
var3 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var9 = ((val* (*)(val* self, long p0))(var8->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var8, var_i) /* [] on <var8:SequenceRead[Char]>*/;
}
var10 = ((struct instance_standard__Char*)var9)->value; /* autounbox from nullable Object to Char */;
var_c = var10;
{
var11 = standard__string___Char___is_numeric(var_c);
}
var12 = !var11;
if (var12){
var15 = '.';
{
{ /* Inline kernel#Char#== (var_c,var15) on <var_c:Char> */
var18 = var_c == var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_19 = var16;
if (var16){
var14 = var_19;
} else {
var20 = ',';
{
{ /* Inline kernel#Char#== (var_c,var20) on <var_c:Char> */
var23 = var_c == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var14 = var21;
}
var_24 = var14;
if (var14){
var25 = !var_has_point_or_comma;
var13 = var25;
} else {
var13 = var_24;
}
if (var13){
var26 = 1;
var_has_point_or_comma = var26;
} else {
var27 = 0;
var = var27;
goto RET_LABEL;
}
} else {
}
var28 = 1;
{
var29 = standard___standard__Int___Discrete__successor(var_i, var28);
}
var_i = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var30 = 1;
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#chomp for (self: Text): Text */
val* standard___standard__Text___chomp(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
char var_l /* var l: Char */;
char var10 /* : Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
val* var23 /* : Text */;
char var24 /* : Char */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const struct type* type_struct32;
const char* var_class_name33;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
val* var43 /* : SequenceRead[Char] */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var52 /* : nullable Object */;
char var53 /* : Char */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
char var57 /* : Char */;
long var58 /* : Int */;
long var59 /* : Int */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : Text */;
long var68 /* : Int */;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
val* var77 /* : Text */;
{
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var_len = var1;
var2 = 0;
{
{ /* Inline kernel#Int#== (var_len,var2) on <var_len:Int> */
var5 = var_len == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var6 = 0;
} else {
var6 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var6)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 409);
show_backtrace(1);
}
var = self;
goto RET_LABEL;
} else {
}
{
var7 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var8 = ((val* (*)(val* self))(var7->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var7) /* last on <var7:SequenceRead[Char]>*/;
}
var9 = ((struct instance_standard__Char*)var8)->value; /* autounbox from nullable Object to Char */;
var_l = var9;
var10 = '\15';
{
{ /* Inline kernel#Char#== (var_l,var10) on <var_l:Char> */
var13 = var_l == var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var14 = 0;
var15 = 1;
{
{ /* Inline kernel#Int#- (var_len,var15) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var22 = var_len - var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var23 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var14, var16) /* substring on <self:Text>*/;
}
var = var23;
goto RET_LABEL;
} else {
var24 = '\n';
{
{ /* Inline kernel#Char#!= (var_l,var24) on <var_l:Char> */
var27 = var_l == var24;
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
/* <self:Text> isa SELFTYPE */
type_struct32 = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype30 = type_struct32->color;
idtype31 = type_struct32->id;
if(cltype30 >= self->type->table_size) {
var29 = 0;
} else {
var29 = self->type->type_table[cltype30] == idtype31;
}
if (unlikely(!var29)) {
var_class_name33 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 414);
show_backtrace(1);
}
var = self;
goto RET_LABEL;
} else {
var35 = 1;
{
{ /* Inline kernel#Int#> (var_len,var35) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var42 = var_len > var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ = var36;
if (var36){
{
var43 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
var44 = 2;
{
{ /* Inline kernel#Int#- (var_len,var44) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var51 = var_len - var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var52 = ((val* (*)(val* self, long p0))(var43->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var43, var45) /* [] on <var43:SequenceRead[Char]>*/;
}
var53 = '\15';
{
{ /* Inline kernel#Char#== (var52,var53) on <var52:nullable Object(Char)> */
var56 = (var52 != NULL) && (var52->class == &class_standard__Char);
if (var56) {
var57 = ((struct instance_standard__Char*)var52)->value; /* autounbox from nullable Object to Char */;
var56 = (var57 == var53);
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var34 = var54;
} else {
var34 = var_;
}
if (var34){
var58 = 0;
var59 = 2;
{
{ /* Inline kernel#Int#- (var_len,var59) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var59:Int> isa OTHER */
/* <var59:Int> isa OTHER */
var62 = 1; /* easy <var59:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var66 = var_len - var59;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var58, var60) /* substring on <self:Text>*/;
}
var = var67;
goto RET_LABEL;
} else {
var68 = 0;
var69 = 1;
{
{ /* Inline kernel#Int#- (var_len,var69) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var69:Int> isa OTHER */
/* <var69:Int> isa OTHER */
var72 = 1; /* easy <var69:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var76 = var_len - var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
var77 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var68, var70) /* substring on <self:Text>*/;
}
var = var77;
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
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
short int var8 /* : Bool */;
short int var_underscore /* var underscore: Bool */;
long var9 /* : Int */;
long var_start /* var start: Int */;
val* var10 /* : SequenceRead[Char] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
char var13 /* : Char */;
char var_c /* var c: Char */;
short int var14 /* : Bool */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
char var20 /* : Char */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
char var28 /* : Char */;
long var29 /* : Int */;
long var31 /* : Int */;
val* var32 /* : String */;
char var33 /* : Char */;
long var34 /* : Int */;
long var_i /* var i: Int */;
long var35 /* : Int */;
long var_36 /* var : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
val* var44 /* : SequenceRead[Char] */;
val* var45 /* : nullable Object */;
char var46 /* : Char */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
char var49 /* : Char */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
char var58 /* : Char */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
short int var67 /* : Bool */;
char var68 /* : Char */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
short int var75 /* : Bool */;
short int var_76 /* var : Bool */;
char var77 /* : Char */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
char var86 /* : Char */;
long var87 /* : Int */;
long var89 /* : Int */;
val* var90 /* : String */;
char var91 /* : Char */;
short int var92 /* : Bool */;
char var93 /* : Char */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
short int var100 /* : Bool */;
short int var_101 /* var : Bool */;
char var102 /* : Char */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
char var111 /* : Char */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
char var116 /* : Char */;
long var117 /* : Int */;
long var119 /* : Int */;
val* var120 /* : String */;
char var121 /* : Char */;
short int var122 /* : Bool */;
long var123 /* : Int */;
long var124 /* : Int */;
char var126 /* : Char */;
long var127 /* : Int */;
long var129 /* : Int */;
val* var130 /* : String */;
char var131 /* : Char */;
val* var132 /* : String */;
{
var1 = standard___standard__Text___is_empty(self);
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
var_res = var6;
var8 = 0;
var_underscore = var8;
var9 = 0;
var_start = var9;
{
var10 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
var11 = 0;
{
var12 = ((val* (*)(val* self, long p0))(var10->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var10, var11) /* [] on <var10:SequenceRead[Char]>*/;
}
var13 = ((struct instance_standard__Char*)var12)->value; /* autounbox from nullable Object to Char */;
var_c = var13;
var15 = '0';
{
{ /* Inline kernel#Char#>= (var_c,var15) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var15:Char> isa OTHER */
/* <var15:Char> isa OTHER */
var18 = 1; /* easy <var15:Char> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var19 = var_c >= var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ = var16;
if (var16){
var20 = '9';
{
{ /* Inline kernel#Char#<= (var_c,var20) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var20:Char> isa OTHER */
/* <var20:Char> isa OTHER */
var23 = 1; /* easy <var20:Char> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var27 = var_c <= var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var14 = var21;
} else {
var14 = var_;
}
if (var14){
var28 = '_';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var28); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var31 = (unsigned char)var_c;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = standard__string___Int___Object__to_s(var29);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var32); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var33 = 'd';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var33); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var34 = 1;
var_start = var34;
} else {
}
var_i = var_start;
{
var35 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var_36 = var35;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_36) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_36:Int> isa OTHER */
/* <var_36:Int> isa OTHER */
var39 = 1; /* easy <var_36:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var43 = var_i < var_36;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var44 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var45 = ((val* (*)(val* self, long p0))(var44->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var44, var_i) /* [] on <var44:SequenceRead[Char]>*/;
}
var46 = ((struct instance_standard__Char*)var45)->value; /* autounbox from nullable Object to Char */;
var_c = var46;
var49 = 'a';
{
{ /* Inline kernel#Char#>= (var_c,var49) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var49:Char> isa OTHER */
/* <var49:Char> isa OTHER */
var52 = 1; /* easy <var49:Char> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var56 = var_c >= var49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_57 = var50;
if (var50){
var58 = 'z';
{
{ /* Inline kernel#Char#<= (var_c,var58) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var58:Char> isa OTHER */
/* <var58:Char> isa OTHER */
var61 = 1; /* easy <var58:Char> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var65 = var_c <= var58;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var48 = var59;
} else {
var48 = var_57;
}
var_66 = var48;
if (var48){
var47 = var_66;
} else {
var68 = 'A';
{
{ /* Inline kernel#Char#>= (var_c,var68) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var68:Char> isa OTHER */
/* <var68:Char> isa OTHER */
var71 = 1; /* easy <var68:Char> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var75 = var_c >= var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_76 = var69;
if (var69){
var77 = 'Z';
{
{ /* Inline kernel#Char#<= (var_c,var77) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var77:Char> isa OTHER */
/* <var77:Char> isa OTHER */
var80 = 1; /* easy <var77:Char> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var84 = var_c <= var77;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var67 = var78;
} else {
var67 = var_76;
}
var47 = var67;
}
if (var47){
{
standard___standard__FlatBuffer___Buffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var85 = 0;
var_underscore = var85;
goto BREAK_label;
} else {
}
if (var_underscore){
var86 = '_';
{
{ /* Inline kernel#Char#ascii (var86) on <var86:Char> */
var89 = (unsigned char)var86;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
{
var90 = standard__string___Int___Object__to_s(var87);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var90); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var91 = 'd';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var91); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
}
var93 = '0';
{
{ /* Inline kernel#Char#>= (var_c,var93) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var93:Char> isa OTHER */
/* <var93:Char> isa OTHER */
var96 = 1; /* easy <var93:Char> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 593);
show_backtrace(1);
}
var100 = var_c >= var93;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_101 = var94;
if (var94){
var102 = '9';
{
{ /* Inline kernel#Char#<= (var_c,var102) on <var_c:Char> */
/* Covariant cast for argument 0 (i) <var102:Char> isa OTHER */
/* <var102:Char> isa OTHER */
var105 = 1; /* easy <var102:Char> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 591);
show_backtrace(1);
}
var109 = var_c <= var102;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var92 = var103;
} else {
var92 = var_101;
}
if (var92){
{
standard___standard__FlatBuffer___Buffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var110 = 0;
var_underscore = var110;
} else {
var111 = '_';
{
{ /* Inline kernel#Char#== (var_c,var111) on <var_c:Char> */
var114 = var_c == var111;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
if (var112){
{
standard___standard__FlatBuffer___Buffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var115 = 1;
var_underscore = var115;
} else {
var116 = '_';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var116); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var119 = (unsigned char)var_c;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
{
var120 = standard__string___Int___Object__to_s(var117);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var120); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var121 = 'd';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var121); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
var122 = 0;
var_underscore = var122;
}
}
BREAK_label: (void)0;
var123 = 1;
{
var124 = standard___standard__Int___Discrete__successor(var_i, var123);
}
var_i = var124;
} else {
goto BREAK_label125;
}
}
BREAK_label125: (void)0;
if (var_underscore){
var126 = '_';
{
{ /* Inline kernel#Char#ascii (var126) on <var126:Char> */
var129 = (unsigned char)var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
var130 = standard__string___Int___Object__to_s(var127);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var130); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
var131 = 'd';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var131); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
}
{
var132 = standard___standard__FlatBuffer___Object__to_s(var_res);
}
var = var132;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_c for (self: Text): String */
val* standard___standard__Text___escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
long var3 /* : Int */;
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
char var11 /* : Char */;
char var_c /* var c: Char */;
char var12 /* : Char */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
char var20 /* : Char */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
char var29 /* : Char */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
char var38 /* : Char */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
char var47 /* : Char */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
long var56 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
long var72 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
short int var76 /* : Bool */;
val* var77 /* : String */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
long var82 /* : Int */;
long var83 /* : Int */;
val* var84 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void (*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
RET_LABEL2:(void)0;
}
}
var_b = var1;
var3 = 0;
var_i = var3;
{
var4 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var10 = ((val* (*)(val* self, long p0))(var9->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i) /* [] on <var9:SequenceRead[Char]>*/;
}
var11 = ((struct instance_standard__Char*)var10)->value; /* autounbox from nullable Object to Char */;
var_c = var11;
var12 = '\n';
{
{ /* Inline kernel#Char#== (var_c,var12) on <var_c:Char> */
var15 = var_c == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
if (varonce) {
var16 = varonce;
} else {
var17 = "\\n";
var18 = 2;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var16); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var20 = '\0';
{
{ /* Inline kernel#Char#== (var_c,var20) on <var_c:Char> */
var23 = var_c == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
if (varonce24) {
var25 = varonce24;
} else {
var26 = "\\0";
var27 = 2;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var25); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var29 = '\"';
{
{ /* Inline kernel#Char#== (var_c,var29) on <var_c:Char> */
var32 = var_c == var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
if (varonce33) {
var34 = varonce33;
} else {
var35 = "\\\"";
var36 = 2;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var34); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var38 = '\'';
{
{ /* Inline kernel#Char#== (var_c,var38) on <var_c:Char> */
var41 = var_c == var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (varonce42) {
var43 = varonce42;
} else {
var44 = "\\\'";
var45 = 2;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var43); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var47 = '\\';
{
{ /* Inline kernel#Char#== (var_c,var47) on <var_c:Char> */
var50 = var_c == var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\\\\";
var54 = 2;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var52); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var58 = (unsigned char)var_c;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var59 = 32;
{
{ /* Inline kernel#Int#< (var56,var59) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var59:Int> isa OTHER */
/* <var59:Int> isa OTHER */
var62 = 1; /* easy <var59:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var66 = var56 < var59;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "\\";
var70 = 1;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var74 = (unsigned char)var_c;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var75 = 8;
var76 = 0;
{
var77 = standard__string___Int___to_base(var72, var75, var76);
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 2;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) var68;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var77;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var81); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
{
standard___standard__FlatBuffer___Buffer__add(var_b, var_c); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
}
}
}
}
}
}
var82 = 1;
{
var83 = standard___standard__Int___Discrete__successor(var_i, var82);
}
var_i = var83;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var84 = standard___standard__FlatBuffer___Object__to_s(var_b);
}
var = var84;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_sh for (self: Text): String */
val* standard___standard__Text___escape_to_sh(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : Sequence[Char] */;
char var6 /* : Char */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var_i /* var i: Int */;
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
char var17 /* : Char */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
val* var32 /* : Sequence[Char] */;
val* var34 /* : Sequence[Char] */;
char var35 /* : Char */;
val* var36 /* : nullable Object */;
val* var37 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void (*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
RET_LABEL2:(void)0;
}
}
var_b = var1;
{
{ /* Inline string#FlatBuffer#chars (var_b) on <var_b:FlatBuffer> */
var5 = var_b->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_b:FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = '\'';
{
var7 = BOX_standard__Char(var6); /* autobox from Char to nullable Object */
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var3, var7) /* add on <var3:Sequence[Char]>*/;
}
var8 = 0;
var_i = var8;
{
var9 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var_ = var9;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var12 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var14 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var15 = ((val* (*)(val* self, long p0))(var14->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_i) /* [] on <var14:SequenceRead[Char]>*/;
}
var16 = ((struct instance_standard__Char*)var15)->value; /* autounbox from nullable Object to Char */;
var_c = var16;
var17 = '\'';
{
{ /* Inline kernel#Char#== (var_c,var17) on <var_c:Char> */
var20 = var_c == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
if (varonce) {
var21 = varonce;
} else {
var22 = "\'\\\'\'";
var23 = 4;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var21); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var25 = '\0';
{
{ /* Inline kernel#Char#!= (var_c,var25) on <var_c:Char> */
var28 = var_c == var25;
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert \'without_null_byte\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 575);
show_backtrace(1);
}
{
standard___standard__FlatBuffer___Buffer__add(var_b, var_c); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
}
var30 = 1;
{
var31 = standard___standard__Int___Discrete__successor(var_i, var30);
}
var_i = var31;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatBuffer#chars (var_b) on <var_b:FlatBuffer> */
var34 = var_b->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_b:FlatBuffer> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = '\'';
{
var36 = BOX_standard__Char(var35); /* autobox from Char to nullable Object */
((void (*)(val* self, val* p0))(var32->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var32, var36) /* add on <var32:Sequence[Char]>*/;
}
{
var37 = standard___standard__FlatBuffer___Object__to_s(var_b);
}
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#escape_to_mk for (self: Text): String */
val* standard___standard__Text___escape_to_mk(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
long var3 /* : Int */;
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
char var11 /* : Char */;
char var_c /* var c: Char */;
char var12 /* : Char */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
char var22 /* : Char */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
char var27 /* : Char */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
char var32 /* : Char */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
char var36 /* : Char */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
char var53 /* : Char */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
char var58 /* : Char */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var_62 /* var : Bool */;
char var63 /* : Char */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
char var68 /* : Char */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
long var77 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
short int var81 /* : Bool */;
val* var82 /* : String */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : String */;
long var87 /* : Int */;
long var88 /* : Int */;
val* var89 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void (*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
RET_LABEL2:(void)0;
}
}
var_b = var1;
var3 = 0;
var_i = var3;
{
var4 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var10 = ((val* (*)(val* self, long p0))(var9->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var9, var_i) /* [] on <var9:SequenceRead[Char]>*/;
}
var11 = ((struct instance_standard__Char*)var10)->value; /* autounbox from nullable Object to Char */;
var_c = var11;
var12 = '$';
{
{ /* Inline kernel#Char#== (var_c,var12) on <var_c:Char> */
var15 = var_c == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
if (varonce) {
var16 = varonce;
} else {
var17 = "$$";
var18 = 2;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var16); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
var22 = ':';
{
{ /* Inline kernel#Char#== (var_c,var22) on <var_c:Char> */
var25 = var_c == var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
if (var23){
var21 = var_26;
} else {
var27 = ' ';
{
{ /* Inline kernel#Char#== (var_c,var27) on <var_c:Char> */
var30 = var_c == var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var21 = var28;
}
var_31 = var21;
if (var21){
var20 = var_31;
} else {
var32 = '#';
{
{ /* Inline kernel#Char#== (var_c,var32) on <var_c:Char> */
var35 = var_c == var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var20 = var33;
}
if (var20){
var36 = '\\';
{
standard___standard__FlatBuffer___Buffer__add(var_b, var36); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
{
standard___standard__FlatBuffer___Buffer__add(var_b, var_c); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var43 = (unsigned char)var_c;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var44 = 32;
{
{ /* Inline kernel#Int#< (var41,var44) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var51 = var41 < var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_52 = var45;
if (var45){
var40 = var_52;
} else {
var53 = ';';
{
{ /* Inline kernel#Char#== (var_c,var53) on <var_c:Char> */
var56 = var_c == var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var40 = var54;
}
var_57 = var40;
if (var40){
var39 = var_57;
} else {
var58 = '|';
{
{ /* Inline kernel#Char#== (var_c,var58) on <var_c:Char> */
var61 = var_c == var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var39 = var59;
}
var_62 = var39;
if (var39){
var38 = var_62;
} else {
var63 = '\\';
{
{ /* Inline kernel#Char#== (var_c,var63) on <var_c:Char> */
var66 = var_c == var63;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var38 = var64;
}
var_67 = var38;
if (var38){
var37 = var_67;
} else {
var68 = '=';
{
{ /* Inline kernel#Char#== (var_c,var68) on <var_c:Char> */
var71 = var_c == var68;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var37 = var69;
}
if (var37){
if (varonce72) {
var73 = varonce72;
} else {
var74 = "?";
var75 = 1;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
{ /* Inline kernel#Char#ascii (var_c) on <var_c:Char> */
var79 = (unsigned char)var_c;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var80 = 16;
var81 = 0;
{
var82 = standard__string___Int___to_base(var77, var80, var81);
}
var83 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 2;
var85 = NEW_standard__NativeArray(var84, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var85)->values[0] = (val*) var73;
((struct instance_standard__NativeArray*)var85)->values[1] = (val*) var82;
{
((void (*)(val* self, val* p0, long p1))(var83->class->vft[COLOR_standard__array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
}
}
{
var86 = ((val* (*)(val* self))(var83->class->vft[COLOR_standard__string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var86); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
{
standard___standard__FlatBuffer___Buffer__add(var_b, var_c); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
}
}
}
var87 = 1;
{
var88 = standard___standard__Int___Discrete__successor(var_i, var87);
}
var_i = var88;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var89 = standard___standard__FlatBuffer___Object__to_s(var_b);
}
var = var89;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#unescape_nit for (self: Text): String */
val* standard___standard__Text___unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
val* var_res /* var res: FlatBuffer */;
short int var3 /* : Bool */;
short int var_was_slash /* var was_slash: Bool */;
long var4 /* : Int */;
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
char var12 /* : Char */;
char var_c /* var c: Char */;
short int var13 /* : Bool */;
char var14 /* : Char */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
char var20 /* : Char */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
char var24 /* : Char */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
char var29 /* : Char */;
char var30 /* : Char */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
char var34 /* : Char */;
char var35 /* : Char */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
char var39 /* : Char */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var43 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
var2 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
standard___standard__FlatBuffer___with_capacity(var1, var2); /* Direct call string#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_res = var1;
var3 = 0;
var_was_slash = var3;
var4 = 0;
var_i = var4;
{
var5 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var10 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var11 = ((val* (*)(val* self, long p0))(var10->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:SequenceRead[Char]>*/;
}
var12 = ((struct instance_standard__Char*)var11)->value; /* autounbox from nullable Object to Char */;
var_c = var12;
var13 = !var_was_slash;
if (var13){
var14 = '\\';
{
{ /* Inline kernel#Char#== (var_c,var14) on <var_c:Char> */
var17 = var_c == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var18 = 1;
var_was_slash = var18;
} else {
{
standard___standard__FlatBuffer___Buffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
}
goto BREAK_label;
} else {
}
var19 = 0;
var_was_slash = var19;
var20 = 'n';
{
{ /* Inline kernel#Char#== (var_c,var20) on <var_c:Char> */
var23 = var_c == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var24 = '\n';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var24); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
var25 = 'r';
{
{ /* Inline kernel#Char#== (var_c,var25) on <var_c:Char> */
var28 = var_c == var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var29 = '\15';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var29); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
var30 = 't';
{
{ /* Inline kernel#Char#== (var_c,var30) on <var_c:Char> */
var33 = var_c == var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var34 = '\11';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var34); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
var35 = '0';
{
{ /* Inline kernel#Char#== (var_c,var35) on <var_c:Char> */
var38 = var_c == var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var39 = '\0';
{
standard___standard__FlatBuffer___Buffer__add(var_res, var39); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
} else {
{
standard___standard__FlatBuffer___Buffer__add(var_res, var_c); /* Direct call string#FlatBuffer#add on <var_res:FlatBuffer>*/
}
}
}
}
}
BREAK_label: (void)0;
var40 = 1;
{
var41 = standard___standard__Int___Discrete__successor(var_i, var40);
}
var_i = var41;
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
var43 = standard___standard__FlatBuffer___Object__to_s(var_res);
}
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Text#== for (self: Text, nullable Object): Bool */
short int standard___standard__Text___standard__kernel__Object___61d_61d(val* self, val* p0) {
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
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : SequenceRead[Char] */;
val* var20 /* : SequenceRead[Char] */;
short int var21 /* : Bool */;
var_o = p0;
var1 = NULL;
if (var_o == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int (*)(val* self, val* p0))(var_o->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_o, var1) /* == on <var_o:nullable Object>*/;
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_standard__Text.color;
idtype = type_standard__Text.id;
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
var12 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
var13 = ((long (*)(val* self))(var_o->class->vft[COLOR_standard__string__Text__length]))(var_o) /* length on <var_o:nullable Object(Text)>*/;
}
{
{ /* Inline kernel#Int#!= (var12,var13) on <var12:Int> */
var16 = var12 == var13;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var18 = 0;
var = var18;
goto RET_LABEL;
} else {
}
{
var19 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var20 = ((val* (*)(val* self))(var_o->class->vft[COLOR_standard__string__Text__chars]))(var_o) /* chars on <var_o:nullable Object(Text)>*/;
}
{
var21 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var20) /* == on <var19:SequenceRead[Char]>*/;
}
var = var21;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 763);
show_backtrace(1);
}
var_other = p0;
{
var2 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var3 = ((val* (*)(val* self))(var2->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:SequenceRead[Char]>*/;
}
var_self_chars = var3;
{
var4 = ((val* (*)(val* self))(var_other->class->vft[COLOR_standard__string__Text__chars]))(var_other) /* chars on <var_other:Text>*/;
}
{
var5 = ((val* (*)(val* self))(var4->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:SequenceRead[Char]>*/;
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int (*)(val* self))(var_self_chars->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_self_chars) /* is_ok on <var_self_chars:IndexedIterator[Char]>*/;
}
var_ = var7;
if (var7){
{
var8 = ((short int (*)(val* self))(var_other_chars->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_other_chars) /* is_ok on <var_other_chars:IndexedIterator[Char]>*/;
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val* (*)(val* self))(var_self_chars->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_self_chars) /* item on <var_self_chars:IndexedIterator[Char]>*/;
}
{
var10 = ((val* (*)(val* self))(var_other_chars->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_other_chars) /* item on <var_other_chars:IndexedIterator[Char]>*/;
}
{
{ /* Inline kernel#Char#< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : var10->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 592);
show_backtrace(1);
}
var17 = ((struct instance_standard__Char*)var9)->value; /* autounbox from nullable Object to Char */;
var18 = ((struct instance_standard__Char*)var10)->value; /* autounbox from nullable Object to Char */;
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
var21 = ((val* (*)(val* self))(var_self_chars->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_self_chars) /* item on <var_self_chars:IndexedIterator[Char]>*/;
}
{
var22 = ((val* (*)(val* self))(var_other_chars->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_other_chars) /* item on <var_other_chars:IndexedIterator[Char]>*/;
}
{
{ /* Inline kernel#Char#> (var21,var22) on <var21:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var22:nullable Object(Char)> isa OTHER */
/* <var22:nullable Object(Char)> isa OTHER */
var25 = 1; /* easy <var22:nullable Object(Char)> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = var22 == NULL ? "null" : var22->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 594);
show_backtrace(1);
}
var29 = ((struct instance_standard__Char*)var21)->value; /* autounbox from nullable Object to Char */;
var30 = ((struct instance_standard__Char*)var22)->value; /* autounbox from nullable Object to Char */;
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
((void (*)(val* self))(var_self_chars->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_self_chars) /* next on <var_self_chars:IndexedIterator[Char]>*/;
}
{
((void (*)(val* self))(var_other_chars->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_other_chars) /* next on <var_other_chars:IndexedIterator[Char]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var33 = ((short int (*)(val* self))(var_self_chars->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_self_chars) /* is_ok on <var_self_chars:IndexedIterator[Char]>*/;
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_h /* var h: Int */;
long var10 /* : Int */;
long var_i /* var i: Int */;
long var11 /* : Int */;
long var_ /* var : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
val* var16 /* : SequenceRead[Char] */;
val* var17 /* : nullable Object */;
char var18 /* : Char */;
char var_char /* var char: Char */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var46 /* : nullable Int */;
long var47 /* : Int */;
{
{ /* Inline string#Text#hash_cache (self) on <self:Text> */
var3 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
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
var11 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var_ = var11;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var14 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var15 = var_i < var_;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var16 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var17 = ((val* (*)(val* self, long p0))(var16->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var16, var_i) /* [] on <var16:SequenceRead[Char]>*/;
}
var18 = ((struct instance_standard__Char*)var17)->value; /* autounbox from nullable Object to Char */;
var_char = var18;
var19 = 5;
{
{ /* Inline kernel#Int#lshift (var_h,var19) on <var_h:Int> */
var22 = var_h << var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var20,var_h) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var25 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var29 = var20 + var_h;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var_char) on <var_char:Char> */
var32 = (unsigned char)var_char;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var23,var30) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var35 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var39 = var23 + var30;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_h = var33;
var40 = 1;
{
var41 = standard___standard__Int___Discrete__successor(var_i, var40);
}
var_i = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#Text#hash_cache= (self,var_h) on <self:Text> */
var43 = BOX_standard__Int(var_h); /* autobox from Int to nullable Int */
self->attrs[COLOR_standard__string__Text___hash_cache].val = var43; /* _hash_cache on <self:Text> */
RET_LABEL42:(void)0;
}
}
} else {
}
{
{ /* Inline string#Text#hash_cache (self) on <self:Text> */
var46 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 812);
show_backtrace(1);
}
var47 = ((struct instance_standard__Int*)var44)->value; /* autounbox from nullable Int to Int */;
var = var47;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1) /* length on <var1:Text>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#iterator for (self: StringCharView): IndexedIterator[Char] */
val* standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
long var1 /* : Int */;
val* var2 /* : IndexedIterator[nullable Object] */;
var1 = 0;
{
var2 = ((val* (*)(val* self, long p0))(self->class->vft[COLOR_standard__abstract_collection__SequenceRead__iterator_from]))(self, var1) /* iterator_from on <self:StringCharView>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#init for (self: StringCharView) */
void standard__string___standard__string__StringCharView___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__StringCharView___standard__kernel__Object__init]))(self) /* init on <self:StringCharView>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1035);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1036);
show_backtrace(1);
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
{ /* Inline string#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var3 = self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
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
var8 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable FlatText(FlatText)>*/;
}
var9 = !var8;
var6 = var9;
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
/* method string#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__next(val* self) {
val* var /* : null */;
var = NULL;
{
{ /* Inline string#FlatSubstringsIter#tgt= (self,var) on <self:FlatSubstringsIter> */
self->attrs[COLOR_standard__string__FlatSubstringsIter___tgt].val = var; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatSubstringsIter#init for (self: FlatSubstringsIter) */
void standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init]))(self) /* init on <self:FlatSubstringsIter>*/;
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
val* var1 /* : SequenceRead[Char] */;
var1 = self->attrs[COLOR_standard__string__FlatString___chars].val; /* _chars on <self:FlatString> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1055);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatString#[] for (self: FlatString, Int): Char */
char standard___standard__FlatString___Text___91d_93d(val* self, long p0) {
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1061);
show_backtrace(1);
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var8 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
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
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var18 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
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
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1062);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var28 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var31 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
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
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
/* method string#FlatString#substring for (self: FlatString, Int, Int): String */
val* standard___standard__FlatString___Text__substring(val* self, long p0, long p1) {
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
long var_new_from /* var new_from: Int */;
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
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
long var_new_len /* var new_len: Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
short int var83 /* : Bool */;
val* var84 /* : String */;
val* var85 /* : FlatString */;
char* var86 /* : NativeString */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
long var91 /* : Int */;
long var92 /* : Int */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
short int var99 /* : Bool */;
val* var100 /* : String */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
long var109 /* : Int */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
long var115 /* : Int */;
long var_to /* var to: Int */;
val* var116 /* : FlatString */;
char* var117 /* : NativeString */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
long var126 /* : Int */;
long var127 /* : Int */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
var_from = p0;
var_count = p1;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_count,var1) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1087);
show_backtrace(1);
}
var6 = 0;
{
{ /* Inline kernel#Int#< (var_from,var6) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var33 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
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
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var40 = var31 + var_from;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_new_from = var34;
{
{ /* Inline kernel#Int#+ (var_new_from,var_count) on <var_new_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var43 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var47 = var_new_from + var_count;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var50 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
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
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var57 = var41 > var48;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var60 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var58,var_new_from) on <var58:Int> */
/* Covariant cast for argument 0 (i) <var_new_from:Int> isa OTHER */
/* <var_new_from:Int> isa OTHER */
var63 = 1; /* easy <var_new_from:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var67 = var58 - var_new_from;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var68 = 1;
{
{ /* Inline kernel#Int#+ (var61,var68) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var75 = var61 + var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_new_len = var69;
var76 = 0;
{
{ /* Inline kernel#Int#<= (var_new_len,var76) on <var_new_len:Int> */
/* Covariant cast for argument 0 (i) <var76:Int> isa OTHER */
/* <var76:Int> isa OTHER */
var79 = 1; /* easy <var76:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var83 = var_new_len <= var76;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var84 = standard___standard__FlatString___Text__empty(self);
}
var = var84;
goto RET_LABEL;
} else {
}
var85 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var88 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var91 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var85, var86, var_new_len, var_new_from, var89); /* Direct call string#FlatString#with_infos on <var85:FlatString>*/
}
var = var85;
goto RET_LABEL;
} else {
}
var92 = 0;
{
{ /* Inline kernel#Int#<= (var_count,var92) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var92:Int> isa OTHER */
/* <var92:Int> isa OTHER */
var95 = 1; /* easy <var92:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var99 = var_count <= var92;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (var93){
{
var100 = standard___standard__FlatString___Text__empty(self);
}
var = var100;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_new_from,var_count) on <var_new_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var103 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var107 = var_new_from + var_count;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var108 = 1;
{
{ /* Inline kernel#Int#- (var101,var108) on <var101:Int> */
/* Covariant cast for argument 0 (i) <var108:Int> isa OTHER */
/* <var108:Int> isa OTHER */
var111 = 1; /* easy <var108:Int> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var115 = var101 - var108;
var109 = var115;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var_to = var109;
var116 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var119 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_to,var_new_from) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var_new_from:Int> isa OTHER */
/* <var_new_from:Int> isa OTHER */
var122 = 1; /* easy <var_new_from:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var126 = var_to - var_new_from;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var127 = 1;
{
{ /* Inline kernel#Int#+ (var120,var127) on <var120:Int> */
/* Covariant cast for argument 0 (i) <var127:Int> isa OTHER */
/* <var127:Int> isa OTHER */
var130 = 1; /* easy <var127:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var134 = var120 + var127;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var116, var117, var128, var_new_from, var_to); /* Direct call string#FlatString#with_infos on <var116:FlatString>*/
}
var = var116;
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
long var3 /* : Int */;
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_standard__FlatString.color;
idtype = type_standard__FlatString.id;
if(cltype >= var1->type->table_size) {
var5 = 0;
} else {
var5 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1110);
show_backtrace(1);
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
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var13 /* : Int */;
long var_out_index /* var out_index: Int */;
char* var14 /* : NativeString */;
char* var16 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_index_from /* var index_from: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_max /* var max: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
char var30 /* : Char */;
char var32 /* : Char */;
char var33 /* : Char */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
char var54 /* : Char */;
long var56 /* : Int */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
var1 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var4 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = 1;
{
{ /* Inline kernel#Int#+ (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var9 = var2 + var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var6) on <var1:NativeString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_outstr = var10;
var13 = 0;
var_out_index = var13;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var16 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_myitems = var14;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var19 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_index_from = var17;
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var22 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_max = var20;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var25 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var29 = var_index_from <= var_max;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var32 = var_myitems[var_index_from];
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
var33 = standard___standard__Char___to_upper(var30);
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var33) on <var_outstr:NativeString> */
var_outstr[var_out_index]=var33;
RET_LABEL34:(void)0;
}
}
var35 = 1;
{
{ /* Inline kernel#Int#+ (var_out_index,var35) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var42 = var_out_index + var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_out_index = var36;
var43 = 1;
{
{ /* Inline kernel#Int#+ (var_index_from,var43) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var50 = var_index_from + var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_index_from = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var53 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = '\0';
{
{ /* Inline string#NativeString#[]= (var_outstr,var51,var54) on <var_outstr:NativeString> */
var_outstr[var51]=var54;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var58 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = standard___standard__NativeString___to_s_with_length(var_outstr, var56);
}
var = var59;
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
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var13 /* : Int */;
long var_out_index /* var out_index: Int */;
char* var14 /* : NativeString */;
char* var16 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_index_from /* var index_from: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_max /* var max: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
char var30 /* : Char */;
char var32 /* : Char */;
char var33 /* : Char */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
char var54 /* : Char */;
long var56 /* : Int */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
var1 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var4 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = 1;
{
{ /* Inline kernel#Int#+ (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var9 = var2 + var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var1,var6) on <var1:NativeString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_outstr = var10;
var13 = 0;
var_out_index = var13;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var16 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_myitems = var14;
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var19 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_index_from = var17;
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var22 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_max = var20;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_index_from,var_max) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var25 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var29 = var_index_from <= var_max;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) on <var_myitems:NativeString> */
var32 = var_myitems[var_index_from];
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
var33 = standard___standard__Char___to_lower(var30);
}
{
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var33) on <var_outstr:NativeString> */
var_outstr[var_out_index]=var33;
RET_LABEL34:(void)0;
}
}
var35 = 1;
{
{ /* Inline kernel#Int#+ (var_out_index,var35) on <var_out_index:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var42 = var_out_index + var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_out_index = var36;
var43 = 1;
{
{ /* Inline kernel#Int#+ (var_index_from,var43) on <var_index_from:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var50 = var_index_from + var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_index_from = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var53 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = '\0';
{
{ /* Inline string#NativeString#[]= (var_outstr,var51,var54) on <var_outstr:NativeString> */
var_outstr[var51]=var54;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var58 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = standard___standard__NativeString___to_s_with_length(var_outstr, var56);
}
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#with_infos for (self: FlatString, NativeString, Int, Int, Int) */
void standard___standard__FlatString___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_len /* var len: Int */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
{
{ /* Inline kernel#Object#init (self) on <self:FlatString> */
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_len = p1;
var_from = p2;
var_to = p3;
{
{ /* Inline string#FlatText#items= (self,var_items) on <self:FlatString> */
self->attrs[COLOR_standard__string__FlatText___items].str = var_items; /* _items on <self:FlatString> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (self,var_len) on <self:FlatString> */
self->attrs[COLOR_standard__string__FlatText___length].l = var_len; /* _length on <self:FlatString> */
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
char* var19 /* : NativeString */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var27 /* : Int */;
char* var28 /* : NativeString */;
char* var30 /* : NativeString */;
char* var_newItems /* var newItems: NativeString */;
char* var31 /* : NativeString */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
char var45 /* : Char */;
val* var48 /* : nullable NativeString */;
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatString> */
var3 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatString> */
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
var13 = var1 == var_other10 || (var_other10 != NULL && var1->class == var_other10->class && ((struct instance_standard__NativeString*)var1)->value == ((struct instance_standard__NativeString*)var_other10)->value);
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
var17 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1177);
show_backtrace(1);
}
var18 = ((struct instance_standard__NativeString*)var15)->value; /* autounbox from nullable NativeString to NativeString */;
var = var18;
goto RET_LABEL;
} else {
var19 = NULL/*special!*/;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var22 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = 1;
{
{ /* Inline kernel#Int#+ (var20,var23) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var27 = var20 + var23;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var19,var24) on <var19:NativeString> */
var30 = (char*)nit_alloc(var24);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_newItems = var28;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var33 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var36 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var39 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = 0;
{
{ /* Inline string#NativeString#copy_to (var31,var_newItems,var34,var37,var40) on <var31:NativeString> */
memmove(var_newItems+var40,var31+var37,var34);
RET_LABEL41:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var44 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var45 = '\0';
{
{ /* Inline string#NativeString#[]= (var_newItems,var42,var45) on <var_newItems:NativeString> */
var_newItems[var42]=var45;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline string#FlatText#real_items= (self,var_newItems) on <self:FlatString> */
var48 = BOX_standard__NativeString(var_newItems); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_standard__string__FlatText___real_items].val = var48; /* _real_items on <self:FlatString> */
RET_LABEL47:(void)0;
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
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_my_length /* var my_length: Int */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_my_index /* var my_index: Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var_its_index /* var its_index: Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name;
long var36 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var37 /* : NativeString */;
char* var39 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
char* var40 /* : NativeString */;
char* var42 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
char var50 /* : Char */;
char var52 /* : Char */;
char var53 /* : Char */;
char var55 /* : Char */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
short int var77 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa FlatString */
cltype = type_standard__FlatString.color;
idtype = type_standard__FlatString.id;
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
var3 = ((short int (*)(val* self, val* p0))(self->class->vft[COLOR_standard___standard__FlatString___standard__kernel__Object___61d_61d]))(self, p0) /* == on <self:FlatString>*/;
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
var13 = 1;
var = var13;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var16 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_my_length = var14;
{
{ /* Inline string#FlatText#length (var_other) on <var_other:nullable Object(FlatString)> */
var19 = var_other->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_other:nullable Object(FlatString)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var17,var_my_length) on <var17:Int> */
var22 = var17 == var_my_length;
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var27 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_my_index = var25;
{
{ /* Inline string#FlatString#index_from (var_other) on <var_other:nullable Object(FlatString)> */
var30 = var_other->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_other:nullable Object(FlatString)> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_its_index = var28;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var33 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var36 = var_my_index + var_my_length;
var31 = var36;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_last_iteration = var31;
{
{ /* Inline string#FlatText#items (var_other) on <var_other:nullable Object(FlatString)> */
var39 = var_other->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_other:nullable Object(FlatString)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_itsitems = var37;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var42 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_myitems = var40;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var45 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var49 = var_my_index < var_last_iteration;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline string#NativeString#[] (var_myitems,var_my_index) on <var_myitems:NativeString> */
var52 = var_myitems[var_my_index];
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var_itsitems,var_its_index) on <var_itsitems:NativeString> */
var55 = var_itsitems[var_its_index];
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var50,var53) on <var50:Char> */
var58 = var50 == var53;
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
var60 = 0;
var = var60;
goto RET_LABEL;
} else {
}
var61 = 1;
{
{ /* Inline kernel#Int#+ (var_my_index,var61) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var68 = var_my_index + var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_my_index = var62;
var69 = 1;
{
{ /* Inline kernel#Int#+ (var_its_index,var69) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <var69:Int> isa OTHER */
/* <var69:Int> isa OTHER */
var72 = 1; /* easy <var69:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var76 = var_its_index + var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_its_index = var70;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var77 = 1;
var = var77;
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
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_curr_id_self /* var curr_id_self: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_curr_id_other /* var curr_id_other: Int */;
char* var23 /* : NativeString */;
char* var25 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var26 /* : NativeString */;
char* var28 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
long var29 /* : Int */;
long var31 /* : Int */;
long var_my_length /* var my_length: Int */;
long var32 /* : Int */;
long var34 /* : Int */;
long var_its_length /* var its_length: Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var_max_iterations /* var max_iterations: Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
char var49 /* : Char */;
char var51 /* : Char */;
char var_my_curr_char /* var my_curr_char: Char */;
char var52 /* : Char */;
char var54 /* : Char */;
char var_its_curr_char /* var its_curr_char: Char */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
long var76 /* : Int */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
short int var90 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1214);
show_backtrace(1);
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
var6 = ((short int (*)(val* self, val* p0))(self->class->vft[COLOR_standard___standard__FlatString___standard__kernel__Comparable___60d]))(self, p0) /* < on <self:FlatString>*/;
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
var16 = 0;
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#index_from (self) on <self:FlatString> */
var19 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_curr_id_self = var17;
{
{ /* Inline string#FlatString#index_from (var_other) on <var_other:Text(FlatString)> */
var22 = var_other->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_other:Text(FlatString)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_curr_id_other = var20;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var25 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_my_items = var23;
{
{ /* Inline string#FlatText#items (var_other) on <var_other:Text(FlatString)> */
var28 = var_other->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_other:Text(FlatString)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_its_items = var26;
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var31 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_my_length = var29;
{
{ /* Inline string#FlatText#length (var_other) on <var_other:Text(FlatString)> */
var34 = var_other->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_other:Text(FlatString)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_its_length = var32;
{
{ /* Inline kernel#Int#+ (var_curr_id_self,var_my_length) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var37 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var41 = var_curr_id_self + var_my_length;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_max_iterations = var35;
for(;;) {
{
{ /* Inline kernel#Int#< (var_curr_id_self,var_max_iterations) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var_max_iterations:Int> isa OTHER */
/* <var_max_iterations:Int> isa OTHER */
var44 = 1; /* easy <var_max_iterations:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var48 = var_curr_id_self < var_max_iterations;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline string#NativeString#[] (var_my_items,var_curr_id_self) on <var_my_items:NativeString> */
var51 = var_my_items[var_curr_id_self];
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_my_curr_char = var49;
{
{ /* Inline string#NativeString#[] (var_its_items,var_curr_id_other) on <var_its_items:NativeString> */
var54 = var_its_items[var_curr_id_other];
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_its_curr_char = var52;
{
{ /* Inline kernel#Char#!= (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
var57 = var_my_curr_char == var_its_curr_char;
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline kernel#Char#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Char> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Char> isa OTHER */
/* <var_its_curr_char:Char> isa OTHER */
var61 = 1; /* easy <var_its_curr_char:Char> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 592);
show_backtrace(1);
}
var65 = var_my_curr_char < var_its_curr_char;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
var66 = 1;
var = var66;
goto RET_LABEL;
} else {
}
var67 = 0;
var = var67;
goto RET_LABEL;
} else {
}
var68 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_id_self,var68) on <var_curr_id_self:Int> */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var75 = var_curr_id_self + var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_curr_id_self = var69;
var76 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_id_other,var76) on <var_curr_id_other:Int> */
/* Covariant cast for argument 0 (i) <var76:Int> isa OTHER */
/* <var76:Int> isa OTHER */
var79 = 1; /* easy <var76:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var83 = var_curr_id_other + var76;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_curr_id_other = var77;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_my_length,var_its_length) on <var_my_length:Int> */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var86 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var90 = var_my_length < var_its_length;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var = var84;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#* for (self: FlatString, Int): String */
val* standard___standard__FlatString___String___42d(val* self, long p0) {
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
char* var19 /* : NativeString */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
char* var28 /* : NativeString */;
char* var30 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
char var31 /* : Char */;
long var33 /* : Int */;
long var_current_last /* var current_last: Int */;
long var34 /* : Int */;
long var_iteration /* var iteration: Int */;
long var_ /* var : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
var_i = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var1) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1280);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatString> */
var8 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatString> */
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
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
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
var18 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_my_items = var16;
var19 = NULL/*special!*/;
var20 = 1;
{
{ /* Inline kernel#Int#+ (var_final_length,var20) on <var_final_length:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var27 = var_final_length + var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var19,var21) on <var19:NativeString> */
var30 = (char*)nit_alloc(var21);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_target_string = var28;
var31 = '\0';
{
{ /* Inline string#NativeString#[]= (var_target_string,var_final_length,var31) on <var_target_string:NativeString> */
var_target_string[var_final_length]=var31;
RET_LABEL32:(void)0;
}
}
var33 = 0;
var_current_last = var33;
var34 = 1;
var_iteration = var34;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_iteration,var_) on <var_iteration:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var37 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var41 = var_iteration <= var_;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = 0;
{
{ /* Inline string#NativeString#copy_to (var_my_items,var_target_string,var_my_length,var42,var_current_last) on <var_my_items:NativeString> */
memmove(var_target_string+var_current_last,var_my_items+var42,var_my_length);
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_current_last,var_my_length) on <var_current_last:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var46 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var50 = var_current_last + var_my_length;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_current_last = var44;
var51 = 1;
{
var52 = standard___standard__Int___Discrete__successor(var_iteration, var51);
}
var_iteration = var52;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var53 = standard___standard__NativeString___to_s_with_length(var_target_string, var_final_length);
}
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#hash for (self: FlatString): Int */
long standard___standard__FlatString___standard__kernel__Object__hash(val* self) {
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
var3 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
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
var12 = self->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <self:FlatString> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_i = var10;
{
{ /* Inline string#FlatText#items (self) on <self:FlatString> */
var15 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatString> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_myitems = var13;
for(;;) {
{
{ /* Inline string#FlatString#index_to (self) on <self:FlatString> */
var18 = self->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <self:FlatString> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var56 = BOX_standard__Int(var_h); /* autobox from Int to nullable Int */
self->attrs[COLOR_standard__string__Text___hash_cache].val = var56; /* _hash_cache on <self:FlatString> */
RET_LABEL55:(void)0;
}
}
} else {
}
{
{ /* Inline string#Text#hash_cache (self) on <self:FlatString> */
var59 = self->attrs[COLOR_standard__string__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1319);
show_backtrace(1);
}
var60 = ((struct instance_standard__Int*)var57)->value; /* autounbox from nullable Int to Int */;
var = var60;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatString#substrings for (self: FlatString): Iterator[Text] */
val* standard___standard__FlatString___Text__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_standard__string__FlatSubstringsIter(&type_standard__string__FlatSubstringsIter);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(var1, self) /* tgt= on <var1:FlatSubstringsIter>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:FlatSubstringsIter>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1354);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1354);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1354);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
/* method string#FlatStringIterator#item for (self: FlatStringIterator): Char */
char standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
char var7 /* : Char */;
char var9 /* : Char */;
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
/* method string#FlatStringIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item(self);
var2 = BOX_standard__Char(var1); /* autobox from Char to nullable Object */
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
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_ = self;
{
{ /* Inline string#FlatStringIterator#curr_pos (var_) on <var_:FlatStringIterator> */
var2 = var_->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringIterator> */
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
{ /* Inline string#FlatStringIterator#curr_pos= (var_,var4) on <var_:FlatStringIterator> */
var_->attrs[COLOR_standard__string__FlatStringIterator___curr_pos].l = var4; /* _curr_pos on <var_:FlatStringIterator> */
RET_LABEL8:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1354);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
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
/* method string#FlatStringIterator#init for (self: FlatStringIterator) */
void standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init]))(self) /* init on <self:FlatStringIterator>*/;
}
RET_LABEL:;
}
/* method string#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
char standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1386);
show_backtrace(1);
}
{
{ /* Inline string#StringCharView#target (self) on <self:FlatStringCharView> */
var8 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_target = var6;
{
{ /* Inline string#FlatString#index_from (var_target) on <var_target:FlatString> */
var11 = var_target->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_target:FlatString> */
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
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var21 = var_target->attrs[COLOR_standard__string__FlatString___index_to].l; /* _index_to on <var_target:FlatString> */
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
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1388);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (var_target) on <var_target:FlatString> */
var31 = var_target->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_target:FlatString> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_target) on <var_target:FlatString> */
var34 = var_target->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_target:FlatString> */
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
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
/* method string#FlatStringCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_standard__Char(var1); /* autobox from Char to nullable Object */
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
/* method string#Buffer#written for (self: Buffer): Bool */
short int standard___standard__Buffer___written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__string__Buffer___written].s; /* _written on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#written= for (self: Buffer, Bool) */
void standard___standard__Buffer___written_61d(val* self, short int p0) {
self->attrs[COLOR_standard__string__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#hash for (self: Buffer): Int */
long standard___standard__Buffer___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : null */;
long var6 /* : Int */;
{
{ /* Inline string#Buffer#is_dirty (self) on <self:Buffer> */
var3 = self->attrs[COLOR_standard__string__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = NULL;
{
{ /* Inline string#Text#hash_cache= (self,var4) on <self:Buffer> */
self->attrs[COLOR_standard__string__Text___hash_cache].val = var4; /* _hash_cache on <self:Buffer> */
RET_LABEL5:(void)0;
}
}
} else {
}
{
var6 = ((long (*)(val* self))(self->class->vft[COLOR_standard___standard__Buffer___standard__kernel__Object__hash]))(self) /* hash on <self:Buffer>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#chars for (self: FlatBuffer): Sequence[Char] */
val* standard___standard__FlatBuffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
val* var1 /* : Sequence[Char] */;
var1 = self->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <self:FlatBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var = var1;
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
/* method string#FlatBuffer#substrings for (self: FlatBuffer): Iterator[Text] */
val* standard___standard__FlatBuffer___Text__substrings(val* self) {
val* var /* : Iterator[Text] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_standard__string__FlatSubstringsIter(&type_standard__string__FlatSubstringsIter);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__string__FlatSubstringsIter__tgt_61d]))(var1, self) /* tgt= on <var1:FlatSubstringsIter>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:FlatSubstringsIter>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#reset for (self: FlatBuffer) */
void standard___standard__FlatBuffer___reset(val* self) {
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
var3 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
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
var9 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var12 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
self->attrs[COLOR_standard__string__FlatText___items].str = var_nns; /* _items on <self:FlatBuffer> */
RET_LABEL16:(void)0;
}
}
var17 = 0;
{
{ /* Inline string#Buffer#written= (self,var17) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___written].s = var17; /* _written on <self:FlatBuffer> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#[] for (self: FlatBuffer, Int): Char */
char standard___standard__FlatBuffer___Text___91d_93d(val* self, long p0) {
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1544);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var8 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1545);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var18 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
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
/* method string#FlatBuffer#add for (self: FlatBuffer, Char) */
void standard___standard__FlatBuffer___Buffer__add(val* self, char p0) {
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
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = var; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var4 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var7 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
var14 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var22 = var12 + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__enlarge(self, var16); /* Direct call string#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
} else {
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
{ /* Inline string#NativeString#[]= (var23,var26,var_c) on <var23:NativeString> */
var23[var26]=var_c;
RET_LABEL29:(void)0;
}
}
var_ = self;
{
{ /* Inline string#FlatText#length (var_) on <var_:FlatBuffer> */
var32 = var_->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_:FlatBuffer> */
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
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_->attrs[COLOR_standard__string__FlatText___length].l = var34; /* _length on <var_:FlatBuffer> */
RET_LABEL41:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#clear for (self: FlatBuffer) */
void standard___standard__FlatBuffer___Buffer__clear(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
var = 1;
{
{ /* Inline string#Buffer#is_dirty= (self,var) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = var; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline string#Buffer#written (self) on <self:FlatBuffer> */
var4 = self->attrs[COLOR_standard__string__Buffer___written].s; /* _written on <self:FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2){
{
standard___standard__FlatBuffer___reset(self); /* Direct call string#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
var5 = 0;
{
{ /* Inline string#FlatText#length= (self,var5) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___length].l = var5; /* _length on <self:FlatBuffer> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#empty for (self: FlatBuffer): Buffer */
val* standard___standard__FlatBuffer___Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void (*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
RET_LABEL2:(void)0;
}
}
var = var1;
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
char* var32 /* : NativeString */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
char* var41 /* : NativeString */;
char* var43 /* : NativeString */;
char* var_a /* var a: NativeString */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
char* var55 /* : NativeString */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
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
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
self->attrs[COLOR_standard__string__Buffer___written].s = var30; /* _written on <self:FlatBuffer> */
RET_LABEL31:(void)0;
}
}
var32 = NULL/*special!*/;
var33 = 1;
{
{ /* Inline kernel#Int#+ (var_c,var33) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var40 = var_c + var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var32,var34) on <var32:NativeString> */
var43 = (char*)nit_alloc(var34);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_a = var41;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var46 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = 0;
{
{ /* Inline kernel#Int#> (var44,var47) on <var44:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var54 = var44 > var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var57 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var60 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = 0;
var62 = 0;
{
{ /* Inline string#NativeString#copy_to (var55,var_a,var58,var61,var62) on <var55:NativeString> */
memmove(var_a+var62,var55+var61,var58);
RET_LABEL63:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#items= (self,var_a) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
RET_LABEL64:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_c) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var_c; /* _capacity on <self:FlatBuffer> */
RET_LABEL65:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#to_s for (self: FlatBuffer): String */
val* standard___standard__FlatBuffer___Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
val* var16 /* : FlatString */;
char* var17 /* : NativeString */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
var1 = 1;
{
{ /* Inline string#Buffer#written= (self,var1) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___written].s = var1; /* _written on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var5 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
{ /* Inline kernel#Int#== (var3,var6) on <var3:Int> */
var9 = var3 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var10 = NULL/*special!*/;
var11 = 1;
{
{ /* Inline string#NativeString#new (var10,var11) on <var10:NativeString> */
var14 = (char*)nit_alloc(var11);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var12) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var12; /* _items on <self:FlatBuffer> */
RET_LABEL15:(void)0;
}
}
} else {
}
var16 = NEW_standard__FlatString(&type_standard__FlatString);
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var19 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
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
var23 = 0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var26 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = 1;
{
{ /* Inline kernel#Int#- (var24,var27) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var31 = var24 - var27;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
standard___standard__FlatString___with_infos(var16, var17, var20, var23, var28); /* Direct call string#FlatString#with_infos on <var16:FlatString>*/
}
var = var16;
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
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
char* var_new_native /* var new_native: NativeString */;
long var16 /* : Int */;
long var18 /* : Int */;
char var19 /* : Char */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
char* var32 /* : NativeString */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
val* var42 /* : nullable NativeString */;
short int var43 /* : Bool */;
val* var45 /* : nullable NativeString */;
val* var47 /* : nullable NativeString */;
char* var48 /* : NativeString */;
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
var8 = 1;
{
{ /* Inline kernel#Int#+ (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var12 = var5 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var4,var9) on <var4:NativeString> */
var15 = (char*)nit_alloc(var9);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_new_native = var13;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var18 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = '\0';
{
{ /* Inline string#NativeString#[]= (var_new_native,var16,var19) on <var_new_native:NativeString> */
var_new_native[var16]=var19;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var23 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 0;
{
{ /* Inline kernel#Int#> (var21,var24) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var31 = var21 > var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var34 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var37 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = 0;
var39 = 0;
{
{ /* Inline string#NativeString#copy_to (var32,var_new_native,var35,var38,var39) on <var32:NativeString> */
memmove(var_new_native+var39,var32+var38,var35);
RET_LABEL40:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#real_items= (self,var_new_native) on <self:FlatBuffer> */
var42 = BOX_standard__NativeString(var_new_native); /* autobox from NativeString to nullable NativeString */
self->attrs[COLOR_standard__string__FlatText___real_items].val = var42; /* _real_items on <self:FlatBuffer> */
RET_LABEL41:(void)0;
}
}
var43 = 0;
{
{ /* Inline string#Buffer#is_dirty= (self,var43) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = var43; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL44:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatText#real_items (self) on <self:FlatBuffer> */
var47 = self->attrs[COLOR_standard__string__FlatText___real_items].val; /* _real_items on <self:FlatBuffer> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1607);
show_backtrace(1);
}
var48 = ((struct instance_standard__NativeString*)var45)->value; /* autounbox from nullable NativeString to NativeString */;
var = var48;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBuffer#init for (self: FlatBuffer) */
void standard___standard__FlatBuffer___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self) /* init on <self:FlatBuffer>*/;
}
RET_LABEL:;
}
/* method string#FlatBuffer#from for (self: FlatBuffer, Text) */
void standard___standard__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var8 /* : Int */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
long var13 /* : Int */;
char* var14 /* : NativeString */;
char* var16 /* : NativeString */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
char* var21 /* : NativeString */;
char* var23 /* : NativeString */;
char* var24 /* : NativeString */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
char* var38 /* : NativeString */;
char* var40 /* : NativeString */;
char* var41 /* : NativeString */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var51 /* : Int */;
long var_i /* var i: Int */;
long var52 /* : Int */;
long var_ /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
val* var60 /* : SequenceRead[Char] */;
val* var61 /* : nullable Object */;
char var62 /* : Char */;
char var_c /* var c: Char */;
char* var63 /* : NativeString */;
char* var65 /* : NativeString */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
{
{ /* Inline string#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self) /* init on <self:FlatBuffer>*/;
}
RET_LABEL1:(void)0;
}
}
var_s = p0;
{
var = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
var2 = 1;
{
{ /* Inline kernel#Int#+ (var,var2) on <var:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var6 = var + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var3) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var3; /* _capacity on <self:FlatBuffer> */
RET_LABEL7:(void)0;
}
}
{
var8 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
{
{ /* Inline string#FlatText#length= (self,var8) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___length].l = var8; /* _length on <self:FlatBuffer> */
RET_LABEL9:(void)0;
}
}
var10 = NULL/*special!*/;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var13 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var10,var11) on <var10:NativeString> */
var16 = (char*)nit_alloc(var11);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var14) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var14; /* _items on <self:FlatBuffer> */
RET_LABEL17:(void)0;
}
}
/* <var_s:Text> isa FlatString */
cltype19 = type_standard__FlatString.color;
idtype20 = type_standard__FlatString.id;
if(cltype19 >= var_s->type->table_size) {
var18 = 0;
} else {
var18 = var_s->type->type_table[cltype19] == idtype20;
}
if (var18){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var23 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var26 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var29 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var32 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = 0;
{
{ /* Inline string#NativeString#copy_to (var21,var24,var27,var30,var33) on <var21:NativeString> */
memmove(var24+var33,var21+var30,var27);
RET_LABEL34:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype36 = type_standard__FlatBuffer.color;
idtype37 = type_standard__FlatBuffer.id;
if(cltype36 >= var_s->type->table_size) {
var35 = 0;
} else {
var35 = var_s->type->type_table[cltype36] == idtype37;
}
if (var35){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var40 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var43 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var46 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = 0;
var48 = 0;
{
{ /* Inline string#NativeString#copy_to (var38,var41,var44,var47,var48) on <var38:NativeString> */
memmove(var41+var48,var38+var47,var44);
RET_LABEL49:(void)0;
}
}
} else {
var50 = 0;
var_curr_pos = var50;
var51 = 0;
var_i = var51;
{
var52 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var59 = var_i < var_;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
var60 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var61 = ((val* (*)(val* self, long p0))(var60->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var60, var_i) /* [] on <var60:SequenceRead[Char]>*/;
}
var62 = ((struct instance_standard__Char*)var61)->value; /* autounbox from nullable Object to Char */;
var_c = var62;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var65 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var63,var_curr_pos,var_c) on <var63:NativeString> */
var63[var_curr_pos]=var_c;
RET_LABEL66:(void)0;
}
}
var67 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_pos,var67) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var74 = var_curr_pos + var67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_curr_pos = var68;
var75 = 1;
{
var76 = standard___standard__Int___Discrete__successor(var_i, var75);
}
var_i = var76;
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
long var /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
long var20 /* : Int */;
{
{ /* Inline string#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(self) /* init on <self:FlatBuffer>*/;
}
RET_LABEL1:(void)0;
}
}
var_cap = p0;
var = 0;
{
{ /* Inline kernel#Int#>= (var_cap,var) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var4 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var5 = var_cap >= var;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1636);
show_backtrace(1);
}
var6 = NULL/*special!*/;
var7 = 1;
{
{ /* Inline kernel#Int#+ (var_cap,var7) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var14 = var_cap + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var6,var8) on <var6:NativeString> */
var17 = (char*)nit_alloc(var8);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline string#FlatText#items= (self,var15) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___items].str = var15; /* _items on <self:FlatBuffer> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline string#FlatBuffer#capacity= (self,var_cap) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var_cap; /* _capacity on <self:FlatBuffer> */
RET_LABEL19:(void)0;
}
}
var20 = 0;
{
{ /* Inline string#FlatText#length= (self,var20) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__FlatText___length].l = var20; /* _length on <self:FlatBuffer> */
RET_LABEL21:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#append for (self: FlatBuffer, Text) */
void standard___standard__FlatBuffer___Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
short int var1 /* : Bool */;
long var3 /* : Int */;
long var_sl /* var sl: Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
char* var34 /* : NativeString */;
char* var36 /* : NativeString */;
char* var37 /* : NativeString */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
char* var50 /* : NativeString */;
char* var52 /* : NativeString */;
char* var53 /* : NativeString */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var63 /* : Int */;
long var_curr_pos /* var curr_pos: Int */;
long var64 /* : Int */;
long var_i /* var i: Int */;
long var65 /* : Int */;
long var_ /* var : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
short int var72 /* : Bool */;
val* var73 /* : SequenceRead[Char] */;
val* var74 /* : nullable Object */;
char var75 /* : Char */;
char var_c /* var c: Char */;
char* var76 /* : NativeString */;
char* var78 /* : NativeString */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
val* var_90 /* var : FlatBuffer */;
long var91 /* : Int */;
long var93 /* : Int */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
var_s = p0;
{
var = standard___standard__Text___is_empty(var_s);
}
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
{
{ /* Inline string#Buffer#is_dirty= (self,var1) on <self:FlatBuffer> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = var1; /* _is_dirty on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
{
var3 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
var_sl = var3;
{
{ /* Inline string#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var6 = self->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var9 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var7,var_sl) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var12 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var13 = var7 + var_sl;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var4,var10) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var16 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var20 = var4 < var10;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var23 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var21,var_sl) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var26 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var30 = var21 + var_sl;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__enlarge(self, var24); /* Direct call string#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
} else {
}
/* <var_s:Text> isa FlatString */
cltype32 = type_standard__FlatString.color;
idtype33 = type_standard__FlatString.id;
if(cltype32 >= var_s->type->table_size) {
var31 = 0;
} else {
var31 = var_s->type->type_table[cltype32] == idtype33;
}
if (var31){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatString)> */
var36 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatString)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var39 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:Text(FlatString)> */
var42 = var_s->attrs[COLOR_standard__string__FlatString___index_from].l; /* _index_from on <var_s:Text(FlatString)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var45 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var34,var37,var_sl,var40,var43) on <var34:NativeString> */
memmove(var37+var43,var34+var40,var_sl);
RET_LABEL46:(void)0;
}
}
} else {
/* <var_s:Text> isa FlatBuffer */
cltype48 = type_standard__FlatBuffer.color;
idtype49 = type_standard__FlatBuffer.id;
if(cltype48 >= var_s->type->table_size) {
var47 = 0;
} else {
var47 = var_s->type->type_table[cltype48] == idtype49;
}
if (var47){
{
{ /* Inline string#FlatText#items (var_s) on <var_s:Text(FlatBuffer)> */
var52 = var_s->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_s:Text(FlatBuffer)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var55 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = 0;
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var59 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var50,var53,var_sl,var56,var57) on <var50:NativeString> */
memmove(var53+var57,var50+var56,var_sl);
RET_LABEL60:(void)0;
}
}
} else {
{
{ /* Inline string#FlatText#length (self) on <self:FlatBuffer> */
var63 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_curr_pos = var61;
var64 = 0;
var_i = var64;
{
var65 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
var_ = var65;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var68 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var72 = var_i < var_;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
var73 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var74 = ((val* (*)(val* self, long p0))(var73->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var73, var_i) /* [] on <var73:SequenceRead[Char]>*/;
}
var75 = ((struct instance_standard__Char*)var74)->value; /* autounbox from nullable Object to Char */;
var_c = var75;
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var78 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var76,var_curr_pos,var_c) on <var76:NativeString> */
var76[var_curr_pos]=var_c;
RET_LABEL79:(void)0;
}
}
var80 = 1;
{
{ /* Inline kernel#Int#+ (var_curr_pos,var80) on <var_curr_pos:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var87 = var_curr_pos + var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_curr_pos = var81;
var88 = 1;
{
var89 = standard___standard__Int___Discrete__successor(var_i, var88);
}
var_i = var89;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
}
var_90 = self;
{
{ /* Inline string#FlatText#length (var_90) on <var_90:FlatBuffer> */
var93 = var_90->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_90:FlatBuffer> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var91,var_sl) on <var91:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var96 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var100 = var91 + var_sl;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline string#FlatText#length= (var_90,var94) on <var_90:FlatBuffer> */
var_90->attrs[COLOR_standard__string__FlatText___length].l = var94; /* _length on <var_90:FlatBuffer> */
RET_LABEL101:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBuffer#substring for (self: FlatBuffer, Int, Int): Buffer */
val* standard___standard__FlatBuffer___Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
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
val* var75 /* : FlatBuffer */;
var_from = p0;
var_count = p1;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_count,var1) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1676);
show_backtrace(1);
}
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var8 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var24 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
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
var34 = self->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var41 = var_from < var_count;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline kernel#Int#- (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var45 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var49 = var_count - var_from;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
standard___standard__FlatBuffer___with_capacity(var42, var43); /* Direct call string#FlatBuffer#with_capacity on <var42:FlatBuffer>*/
}
var_r = var42;
for(;;) {
{
{ /* Inline kernel#Int#< (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var52 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var59 = var_r->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var_r:FlatBuffer> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline string#FlatText#items (self) on <self:FlatBuffer> */
var62 = self->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <self:FlatBuffer> */
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
var66 = BOX_standard__Char(var63); /* autobox from Char to nullable Object */
((void (*)(val* self, val* p0))(var57->class->vft[COLOR_standard__abstract_collection__Sequence__push]))(var57, var66) /* push on <var57:Sequence[Char]>*/;
}
var67 = 1;
{
{ /* Inline kernel#Int#+ (var_from,var67) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var = var_r;
goto RET_LABEL;
} else {
var75 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var75) on <var75:FlatBuffer> */
{
((void (*)(val* self))(var75->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var75) /* init on <var75:FlatBuffer>*/;
}
RET_LABEL76:(void)0;
}
}
var = var75;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
char standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
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
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
{ /* Inline string#FlatText#items (var1) on <var1:Text(FlatBuffer)> */
var6 = var1->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
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
/* method string#FlatBufferCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_standard__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, char p1) {
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
short int var21 /* : Bool */;
val* var22 /* : Text */;
val* var24 /* : Text */;
char* var25 /* : NativeString */;
char* var27 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1771);
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
var_class_name8 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
var10 = standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#<= (var_index,var10) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1773);
show_backtrace(1);
}
{
var18 = standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#== (var_index,var18) on <var_index:Int> */
var21 = var_index == var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(self, var_item); /* Direct call string#FlatBufferCharView#add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var24 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline string#FlatText#items (var22) on <var22:Text(FlatBuffer)> */
var27 = var22->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var22:Text(FlatBuffer)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline string#NativeString#[]= (var25,var_index,var_item) on <var25:NativeString> */
var25[var_index]=var_item;
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
char var /* : Char */;
var = ((struct instance_standard__Char*)p1)->value; /* autounbox from nullable Object to Char */;
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call string#FlatBufferCharView#[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1781);
show_backtrace(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
standard___standard__FlatBuffer___Buffer__add(var1, var_c); /* Direct call string#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_standard__Char*)p0)->value; /* autounbox from nullable Object to Char */;
standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push(self, var); /* Direct call string#FlatBufferCharView#push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1786);
show_backtrace(1);
}
var_c = p0;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
standard___standard__FlatBuffer___Buffer__add(var1, var_c); /* Direct call string#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_standard__Char*)p0)->value; /* autounbox from nullable Object to Char */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Char]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1796);
show_backtrace(1);
}
var_s = p0;
{
var1 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char]>*/;
}
var_s_length = var1;
{
{ /* Inline string#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_standard__string__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
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
{ /* Inline string#FlatBuffer#capacity (var2) on <var2:Text(FlatBuffer)> */
var7 = var2->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <var2:Text(FlatBuffer)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char]>*/;
}
{
{ /* Inline kernel#Int#< (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 851);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1811);
show_backtrace(1);
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
var4 = 0;
{
{ /* Inline kernel#Int#> (var,var4) on <var:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
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
var11 = var_tgt->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var_tgt:FlatBuffer> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#target_items= (self,var9) on <self:FlatBufferIterator> */
self->attrs[COLOR_standard__string__FlatBufferIterator___target_items].str = var9; /* _target_items on <self:FlatBufferIterator> */
RET_LABEL12:(void)0;
}
}
} else {
}
{
{ /* Inline string#FlatBufferIterator#curr_pos= (self,var_pos) on <self:FlatBufferIterator> */
self->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l = var_pos; /* _curr_pos on <self:FlatBufferIterator> */
RET_LABEL13:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1811);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
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
char standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
char var7 /* : Char */;
char var9 /* : Char */;
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
/* method string#FlatBufferIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item(self);
var2 = BOX_standard__Char(var1); /* autobox from Char to nullable Object */
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
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_ = self;
{
{ /* Inline string#FlatBufferIterator#curr_pos (var_) on <var_:FlatBufferIterator> */
var2 = var_->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferIterator> */
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
{ /* Inline string#FlatBufferIterator#curr_pos= (var_,var4) on <var_:FlatBufferIterator> */
var_->attrs[COLOR_standard__string__FlatBufferIterator___curr_pos].l = var4; /* _curr_pos on <var_:FlatBufferIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#init for (self: FlatBufferIterator) */
void standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init]))(self) /* init on <self:FlatBufferIterator>*/;
}
RET_LABEL:;
}
/* method string#Object#to_s for (self: Object): String */
val* standard__string___Object___to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Object__inspect]))(self) /* inspect on <self:Object>*/;
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
var_class_name = self == NULL ? "null" : self->type->name;
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
var_class_name = self == NULL ? "null" : self->type->name;
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
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = standard__string___Object___inspect_head(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ">";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#inspect_head for (self: Object): String */
val* standard__string___Object___inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var10 /* : NativeArray[Object] */;
val* var11 /* : String */;
{
var1 = standard__string___Object___class_name(self);
}
if (varonce) {
var2 = varonce;
} else {
var3 = ":#";
var4 = 2;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = ((long (*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__object_id]))(self) /* object_id on <self:Object>*/;
}
{
var7 = standard__string___Int___to_hex(var6);
}
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var8 = array_instance Array[Object] */
var9 = 3;
var10 = NEW_standard__NativeArray(var9, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var10)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var10)->values[1] = (val*) var2;
((struct instance_standard__NativeArray*)var10)->values[2] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var8->class->vft[COLOR_standard__array__Array__with_native]))(var8, var10, var9) /* with_native on <var8:Array[Object]>*/;
}
}
{
var11 = ((val* (*)(val* self))(var8->class->vft[COLOR_standard__string__Object__to_s]))(var8) /* to_s on <var8:Array[Object]>*/;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#args for (self: Object): Sequence[String] */
val* standard__string___Object___args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel#Object#sys (self) on <self:Object> */
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
/* method string#Bool#to_s for (self: Bool): String */
val* standard__string___Bool___Object__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
static val* varonce7;
static int varonce7_guard;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
if (self){
if (varonce_guard) {
var1 = varonce;
} else {
if (varonce2) {
var3 = varonce2;
} else {
var4 = "true";
var5 = 4;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (varonce7_guard) {
var8 = varonce7;
} else {
if (varonce9) {
var10 = varonce9;
} else {
var11 = "false";
var12 = 5;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var8 = var10;
varonce7 = var8;
varonce7_guard = 1;
}
var = var8;
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
var2 = ((struct instance_standard__Bool*)self)->value; /* autounbox from Object to Bool */;
var1 = standard__string___Bool___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#strerror_ext for (self: Int): NativeString */
char* standard__string___Int___strerror_ext(long self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string___Int_strerror_ext___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#strerror for (self: Int): String */
val* standard__string___Int___strerror(long self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Int#strerror_ext (self) on <self:Int> */
var3 = string___Int_strerror_ext___impl(self);
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
