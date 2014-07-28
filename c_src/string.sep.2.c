#include "string.sep.0.h"
/* method string#Float#to_s for (self: Float): String */
val* string__Float__to_s(double self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
val* var_str /* var str: String */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_len /* var len: Int */;
val* var17 /* : Range[Int] */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
val* var24 /* : Discrete */;
val* var25 /* : Discrete */;
val* var26 /* : Iterator[Discrete] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
long var_i /* var i: Int */;
long var29 /* : Int */;
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
long var_j /* var j: Int */;
val* var45 /* : SequenceRead[Char] */;
val* var47 /* : SequenceRead[Char] */;
val* var48 /* : nullable Object */;
char var49 /* : Char */;
char var_c /* var c: Char */;
char var50 /* : Char */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
char var55 /* : Char */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
long var60 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
val* var69 /* : String */;
long var70 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
val* var79 /* : String */;
var1 = 3;
{
var2 = string__Float__to_precision(self, var1);
}
var_str = var2;
{
var4 = math__Float__is_inf(self);
}
var5 = 0;
{
{ /* Inline kernel#Int#!= (var4,var5) on <var4:Int> */
var9 = var4 == var5;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
var_ = var6;
if (var6){
var3 = var_;
} else {
{
{ /* Inline math#Float#is_nan (self) on <self:Float> */
var13 = isnan(self);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var3 = var11;
}
if (var3){
var = var_str;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#length (var_str) on <var_str:String> */
var16 = var_str->attrs[COLOR_string__FlatText___length].l; /* _length on <var_str:String> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_len = var14;
var17 = NEW_range__Range(&type_range__Rangekernel__Int);
var18 = 0;
var19 = 1;
{
{ /* Inline kernel#Int#- (var_len,var19) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var23 = var_len - var19;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var24 = BOX_kernel__Int(var18); /* autobox from Int to Discrete */
var25 = BOX_kernel__Int(var20); /* autobox from Int to Discrete */
range__Range__init(var17, var24, var25); /* Direct call range#Range#init on <var17:Range[Int]>*/
}
{
var26 = range__Range__iterator(var17);
}
for(;;) {
{
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[Discrete]>*/;
}
if(!var27) break;
{
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[Discrete]>*/;
}
var29 = ((struct instance_kernel__Int*)var28)->value; /* autounbox from nullable Object to Int */;
var_i = var29;
var30 = 1;
{
{ /* Inline kernel#Int#- (var_len,var30) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var37 = var_len - var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var31,var_i) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var40 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var44 = var31 - var_i;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_j = var38;
{
{ /* Inline string#FlatString#chars (var_str) on <var_str:String> */
var47 = var_str->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_str:String> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = ((val* (*)(val*, long))(var45->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var45, var_j) /* [] on <var45:SequenceRead[Char]>*/;
}
var49 = ((struct instance_kernel__Char*)var48)->value; /* autounbox from nullable Object to Char */;
var_c = var49;
var50 = '0';
{
{ /* Inline kernel#Char#== (var_c,var50) on <var_c:Char> */
var54 = var_c == var50;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
goto CONTINUE_label;
} else {
var55 = '.';
{
{ /* Inline kernel#Char#== (var_c,var55) on <var_c:Char> */
var59 = var_c == var55;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
var60 = 0;
var61 = 2;
{
{ /* Inline kernel#Int#+ (var_j,var61) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var68 = var_j + var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
var69 = string__FlatString__substring(var_str, var60, var62);
}
var = var69;
goto RET_LABEL;
} else {
var70 = 0;
var71 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var71) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var78 = var_j + var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
var79 = string__FlatString__substring(var_str, var70, var72);
}
var = var79;
goto RET_LABEL;
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Object): String */
val* VIRTUAL_string__Float__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = string__Float__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Float#to_precision for (self: Float, Int): String */
val* string__Float__to_precision(double self, long p0) {
val* var /* : String */;
long var_nb /* var nb: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
long var_isinf /* var isinf: Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var39 /* : Int */;
val* var40 /* : String */;
double var_f /* var f: Float */;
val* var41 /* : Range[Int] */;
long var42 /* : Int */;
val* var43 /* : Discrete */;
val* var44 /* : Discrete */;
val* var45 /* : Iterator[Discrete] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
long var_i /* var i: Int */;
long var48 /* : Int */;
double var49 /* : Float */;
double var50 /* : Float */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var53 /* : Float */;
double var54 /* : Float */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
double var62 /* : Float */;
double var63 /* : Float */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
double var69 /* : Float */;
double var70 /* : Float */;
double var71 /* : Float */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
double var77 /* : Float */;
long var78 /* : Int */;
long var80 /* : Int */;
long var_i81 /* var i: Int */;
long var82 /* : Int */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : String */;
val* var_s /* var s: String */;
long var93 /* : Int */;
long var95 /* : Int */;
long var_sl /* var sl: Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
short int var102 /* : Bool */;
long var103 /* : Int */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var114 /* : String */;
val* var_p1 /* var p1: String */;
long var115 /* : Int */;
long var117 /* : Int */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
long var124 /* : Int */;
val* var125 /* : String */;
val* var_p2 /* var p2: String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : String */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
long var143 /* : Int */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
const char* var_class_name148;
long var149 /* : Int */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var152 /* : String */;
var_nb = p0;
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
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var8 = math__Float__is_inf(self);
}
var_isinf = var8;
var9 = 1;
{
{ /* Inline kernel#Int#== (var_isinf,var9) on <var_isinf:Int> */
var13 = var_isinf == var9;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
if (varonce14) {
var15 = varonce14;
} else {
var16 = "inf";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
var19 = 1;
{
{ /* Inline kernel#Int#unary - (var19) on <var19:Int> */
var22 = -var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_isinf,var20) on <var_isinf:Int> */
var26 = var_isinf == var20;
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
var29 = "-inf";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var = var28;
goto RET_LABEL;
} else {
}
}
var32 = 0;
{
{ /* Inline kernel#Int#== (var_nb,var32) on <var_nb:Int> */
var36 = var_nb == var32;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline kernel#Float#to_i (self) on <self:Float> */
var39 = (long)self;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var40 = string__Int__to_s(var37);
}
var = var40;
goto RET_LABEL;
} else {
}
var_f = self;
var41 = NEW_range__Range(&type_range__Rangekernel__Int);
var42 = 0;
{
var43 = BOX_kernel__Int(var42); /* autobox from Int to Discrete */
var44 = BOX_kernel__Int(var_nb); /* autobox from Int to Discrete */
range__Range__without_last(var41, var43, var44); /* Direct call range#Range#without_last on <var41:Range[Int]>*/
}
{
var45 = range__Range__iterator(var41);
}
for(;;) {
{
var46 = ((short int (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var45) /* is_ok on <var45:Iterator[Discrete]>*/;
}
if(!var46) break;
{
var47 = ((val* (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__item]))(var45) /* item on <var45:Iterator[Discrete]>*/;
}
var48 = ((struct instance_kernel__Int*)var47)->value; /* autounbox from nullable Object to Int */;
var_i = var48;
var49 = 10.0;
{
{ /* Inline kernel#Float#* (var_f,var49) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var49:Float> isa OTHER */
/* <var49:Float> isa OTHER */
var52 = 1; /* easy <var49:Float> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 297);
show_backtrace(1);
}
var53 = var_f * var49;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_f = var50;
CONTINUE_label: (void)0;
{
((void (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__next]))(var45) /* next on <var45:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
var54 = 0.0;
{
{ /* Inline kernel#Float#> (self,var54) on <self:Float> */
/* Covariant cast for argument 0 (i) <var54:Float> isa OTHER */
/* <var54:Float> isa OTHER */
var57 = 1; /* easy <var54:Float> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 292);
show_backtrace(1);
}
var61 = self > var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
var62 = 0.5;
{
{ /* Inline kernel#Float#+ (var_f,var62) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var62:Float> isa OTHER */
/* <var62:Float> isa OTHER */
var65 = 1; /* easy <var62:Float> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 294);
show_backtrace(1);
}
var69 = var_f + var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_f = var63;
} else {
var70 = 0.5;
{
{ /* Inline kernel#Float#- (var_f,var70) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var70:Float> isa OTHER */
/* <var70:Float> isa OTHER */
var73 = 1; /* easy <var70:Float> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 296);
show_backtrace(1);
}
var77 = var_f - var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_f = var71;
}
{
{ /* Inline kernel#Float#to_i (var_f) on <var_f:Float> */
var80 = (long)var_f;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_i81 = var78;
var82 = 0;
{
{ /* Inline kernel#Int#== (var_i81,var82) on <var_i81:Int> */
var86 = var_i81 == var82;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var83 = var84;
}
if (var83){
if (varonce87) {
var88 = varonce87;
} else {
var89 = "0.0";
var90 = 3;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
} else {
}
{
var92 = string__Int__to_s(var_i81);
}
var_s = var92;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:String> */
var95 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:String> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_sl = var93;
{
{ /* Inline kernel#Int#> (var_sl,var_nb) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_nb:Int> isa OTHER */
/* <var_nb:Int> isa OTHER */
var98 = 1; /* easy <var_nb:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var102 = var_sl > var_nb;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
var103 = 0;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:String> */
var106 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:String> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var104,var_nb) on <var104:Int> */
/* Covariant cast for argument 0 (i) <var_nb:Int> isa OTHER */
/* <var_nb:Int> isa OTHER */
var109 = 1; /* easy <var_nb:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var113 = var104 - var_nb;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
var114 = string__FlatString__substring(var_s, var103, var107);
}
var_p1 = var114;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:String> */
var117 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:String> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var115,var_nb) on <var115:Int> */
/* Covariant cast for argument 0 (i) <var_nb:Int> isa OTHER */
/* <var_nb:Int> isa OTHER */
var120 = 1; /* easy <var_nb:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var124 = var115 - var_nb;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
var125 = string__FlatString__substring(var_s, var118, var_nb);
}
var_p2 = var125;
if (varonce126) {
var127 = varonce126;
} else {
var128 = ".";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
{
var131 = string__FlatString___43d(var_p1, var127);
}
{
var132 = string__FlatString___43d(var131, var_p2);
}
var = var132;
goto RET_LABEL;
} else {
if (varonce133) {
var134 = varonce133;
} else {
var135 = "0.";
var136 = 2;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "0";
var141 = 1;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
{ /* Inline kernel#Int#- (var_nb,var_sl) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var145 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var145)) {
var_class_name148 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name148);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var149 = var_nb - var_sl;
var143 = var149;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
{
var150 = string__FlatString___42d(var139, var143);
}
{
var151 = string__FlatString___43d(var134, var150);
}
{
var152 = string__FlatString___43d(var151, var_s);
}
var = var152;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Float#to_precision for (self: Object, Int): String */
val* VIRTUAL_string__Float__to_precision(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = string__Float__to_precision(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Char): String */
val* string__Char__to_s(char self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
val* var_s /* var s: FlatBuffer */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : Sequence[Char] */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
val* var8 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
var2 = 1;
{
string__FlatBuffer__with_capacity(var1, var2); /* Direct call string#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_s = var1;
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:FlatBuffer> */
var5 = var_s->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var_s:FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1163);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
var7 = BOX_kernel__Char(self); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var3->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var3, var6, var7) /* []= on <var3:Sequence[Char]>*/;
}
{
var8 = string__FlatBuffer__to_s(var_s);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Object): String */
val* VIRTUAL_string__Char__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string__Char__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Collection[nullable Object]): String */
val* string__Collection__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var9 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var1); /* Direct call string#FlatBuffer#init on <var1:FlatBuffer>*/
}
var_s = var1;
{
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_e = var4;
var5 = NULL;
if (var_e == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var5) /* != on <var_e:nullable Object>*/;
var6 = var7;
}
if (var6){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1678);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var8); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
var9 = string__FlatBuffer__to_s(var_s);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Object): String */
val* VIRTUAL_string__Collection__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Collection__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Collection[nullable Object], Text): String */
val* string__Collection__join(val* self, val* p0) {
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
val* var7 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
var_sep = p0;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:Collection[nullable Object]>*/;
}
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var6 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var6); /* Direct call string#FlatBuffer#init on <var6:FlatBuffer>*/
}
var_s = var6;
{
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
}
var_i = var7;
{
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
}
var_e = var8;
var9 = NULL;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var9) /* != on <var_e:nullable Object>*/;
var10 = var11;
}
if (var10){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1695);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var12); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
}
for(;;) {
{
var13 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:Iterator[nullable Object]>*/;
}
if (!var13) break;
{
string__FlatBuffer__append(var_s, var_sep); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
{
var14 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
}
var_e = var14;
var15 = NULL;
if (var_e == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var15) /* != on <var_e:nullable Object>*/;
var16 = var17;
}
if (var16){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1702);
show_backtrace(1);
} else {
var18 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var18); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
var19 = string__FlatBuffer__to_s(var_s);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Object, Text): String */
val* VIRTUAL_string__Collection__join(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Collection__join(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Array#to_s for (self: Array[nullable Object]): String */
val* string__Array__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : String */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var21 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var1); /* Direct call string#FlatBuffer#init on <var1:FlatBuffer>*/
}
var_s = var1;
var2 = 0;
var_i = var2;
{
var3 = array__AbstractArrayRead__length(self);
}
var_l = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var6 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var7 = var_i < var_l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (!var4) break;
{
var8 = array__Array___91d_93d(self, var_i);
}
var_e = var8;
var9 = NULL;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var9) /* != on <var_e:nullable Object>*/;
var10 = var11;
}
if (var10){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1718);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var12); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
var13 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var13) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var20 = var_i + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_i = var14;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
var21 = string__FlatBuffer__to_s(var_s);
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Array#to_s for (self: Object): String */
val* VIRTUAL_string__Array__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Array__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#[] for (self: NativeString, Int): Char */
char string__NativeString___91d_93d(char* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[] for (self: Object, Int): Char */
char VIRTUAL_string__NativeString___91d_93d(val* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
char* var3 /* : NativeString */;
char var4 /* : Char */;
{ /* Inline string#NativeString#[] (self,p0) on <self:Object(NativeString)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var4 = var3[p0];
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#[]= for (self: NativeString, Int, Char) */
void string__NativeString___91d_93d_61d(char* self, long p0, char p1) {
self[p0]=p1;
RET_LABEL:;
}
/* method string#NativeString#[]= for (self: Object, Int, Char) */
void VIRTUAL_string__NativeString___91d_93d_61d(val* self, long p0, char p1) {
char* var /* : NativeString */;
{ /* Inline string#NativeString#[]= (self,p0,p1) on <self:Object(NativeString)> */
var = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var[p0]=p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: NativeString, NativeString, Int, Int, Int) */
void string__NativeString__copy_to(char* self, char* p0, long p1, long p2, long p3) {
memcpy(p0+p3,self+p2,p1);
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: Object, NativeString, Int, Int, Int) */
void VIRTUAL_string__NativeString__copy_to(val* self, char* p0, long p1, long p2, long p3) {
char* var /* : NativeString */;
{ /* Inline string#NativeString#copy_to (self,p0,p1,p2,p3) on <self:Object(NativeString)> */
var = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
memcpy(p0+p3,var+p2,p1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#NativeString#cstring_length for (self: NativeString): Int */
long string__NativeString__cstring_length(char* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
char var2 /* : Char */;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
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
var9 = var2 == var5;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (!var6) break;
var11 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var11) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var15 = var_l + var11;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_l = var12;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#cstring_length for (self: Object): Int */
long VIRTUAL_string__NativeString__cstring_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__cstring_length(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#atoi for (self: NativeString): Int */
long string__NativeString__atoi(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = atoi(self);;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atoi for (self: Object): Int */
long VIRTUAL_string__NativeString__atoi(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
{ /* Inline string#NativeString#atoi (self) on <self:Object(NativeString)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var4 = atoi(var3);;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#atof for (self: NativeString): Float */
double string__NativeString__atof(char* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = atof(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atof for (self: Object): Float */
double VIRTUAL_string__NativeString__atof(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float */;
char* var4 /* : NativeString */;
{ /* Inline string#NativeString#atof (self) on <self:Object(NativeString)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var3 = atof(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: NativeString): String */
val* string__NativeString__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
{
var1 = string__NativeString__cstring_length(self);
}
{
var2 = string__NativeString__to_s_with_length(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: Object): String */
val* VIRTUAL_string__NativeString__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: NativeString, Int): FlatString */
val* string__NativeString__to_s_with_length(char* self, long p0) {
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
var_length = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_length,var1) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1788);
show_backtrace(1);
}
var6 = NEW_string__FlatString(&type_string__FlatString);
var7 = 0;
var8 = 1;
{
{ /* Inline kernel#Int#- (var_length,var8) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var15 = var_length - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
string__FlatString__with_infos(var6, self, var_length, var7, var9); /* Direct call string#FlatString#with_infos on <var6:FlatString>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: Object, Int): FlatString */
val* VIRTUAL_string__NativeString__to_s_with_length(val* self, long p0) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s_with_length(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: NativeString): FlatString */
val* string__NativeString__to_s_with_copy(char* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var_length /* var length: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
val* var9 /* : StringCapable */;
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
{
var1 = string__NativeString__cstring_length(self);
}
var_length = var1;
var2 = 1;
{
{ /* Inline kernel#Int#+ (var_length,var2) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var6 = var_length + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var3) on <self:NativeString> */
var9 = BOX_string__NativeString(self); /* autobox from NativeString to StringCapable */
var10 = (char*)nit_alloc(var3);
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_new_self = var7;
var11 = 0;
var12 = 0;
{
{ /* Inline string#NativeString#copy_to (self,var_new_self,var_length,var11,var12) on <self:NativeString> */
memcpy(var_new_self+var12,self+var11,var_length);
RET_LABEL13:(void)0;
}
}
var14 = NEW_string__FlatString(&type_string__FlatString);
var15 = 0;
var16 = 1;
{
{ /* Inline kernel#Int#- (var_length,var16) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var23 = var_length - var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
string__FlatString__with_infos(var14, var_new_self, var_length, var15, var17); /* Direct call string#FlatString#with_infos on <var14:FlatString>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: Object): FlatString */
val* VIRTUAL_string__NativeString__to_s_with_copy(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s_with_copy(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCapable#calloc_string for (self: StringCapable, Int): NativeString */
char* string__StringCapable__calloc_string(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = (char*)nit_alloc(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCapable#calloc_string for (self: Object, Int): NativeString */
char* VIRTUAL_string__StringCapable__calloc_string(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#StringCapable#calloc_string (self,p0) on <self:Object(StringCapable)> */
var3 = (char*)nit_alloc(p0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#program_args for (self: Sys): Sequence[String] */
val* string__Sys__program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = abstract_collection__SequenceRead___61d_61d(var1, var2);
var3 = var4;
}
if (var3){
{
string__Sys__init_args(self); /* Direct call string#Sys#init_args on <self:Sys>*/
}
} else {
}
var5 = self->attrs[COLOR_string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1813);
show_backtrace(1);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_args for (self: Object): Sequence[String] */
val* VIRTUAL_string__Sys__program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sequence[String] */;
var1 = string__Sys__program_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Sys): String */
val* string__Sys__program_name(val* self) {
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
var5 = string__NativeString__to_s(var2);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Object): String */
val* VIRTUAL_string__Sys__program_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Sys__program_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#init_args for (self: Sys) */
void string__Sys__init_args(val* self) {
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
var3 = NEW_array__Array(&type_array__Arraystring__String);
var4 = 0;
{
array__Array__with_capacity(var3, var4); /* Direct call array#Array#with_capacity on <var3:Array[String]>*/
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var9 = var_i < var_argc;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (!var6) break;
var10 = 1;
{
{ /* Inline kernel#Int#- (var_i,var10) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
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
var21 = string__NativeString__to_s(var18);
}
{
array__Array___91d_93d_61d(var_args, var11, var21); /* Direct call array#Array#[]= on <var_args:Array[String]>*/
}
var22 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var29 = var_i + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
self->attrs[COLOR_string__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method string#Sys#init_args for (self: Object) */
void VIRTUAL_string__Sys__init_args(val* self) {
string__Sys__init_args(self); /* Direct call string#Sys#init_args on <self:Object(Sys)>*/
RET_LABEL:;
}
/* method string#Sys#native_argc for (self: Sys): Int */
long string__Sys__native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argc for (self: Object): Int */
long VIRTUAL_string__Sys__native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#Sys#native_argc (self) on <self:Object(Sys)> */
var3 = glob_argc;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argv for (self: Sys, Int): NativeString */
char* string__Sys__native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argv for (self: Object, Int): NativeString */
char* VIRTUAL_string__Sys__native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#Sys#native_argv (self,p0) on <self:Object(Sys)> */
var3 = glob_argv[p0];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
