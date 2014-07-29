#include "string_search.sep.0.h"
/* method string_search#Pattern#split_in for (self: Pattern, Text): Array[Match] */
val* string_search__Pattern__split_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_s /* var s: Text */;
val* var1 /* : Array[Match] */;
val* var_res /* var res: Array[Match] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
val* var4 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
long var_len /* var len: Int */;
val* var19 /* : Match */;
val* var20 /* : String */;
long var21 /* : Int */;
val* var22 /* : nullable Match */;
val* var23 /* : Match */;
val* var24 /* : String */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
var_s = p0;
var1 = NEW_array__Array(&type_array__Arraystring_search__Match);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[Match]>*/
}
var_res = var1;
var2 = 0;
var_i = var2;
var3 = 0;
{
var4 = ((val* (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_in]))(self, var_s, var3) /* search_in on <self:Pattern>*/;
}
var_match = var4;
for(;;) {
var5 = NULL;
if (var_match == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_match,var5) on <var_match:nullable Match> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_match->class->vft[COLOR_kernel__Object___61d_61d]))(var_match, var_other) /* == on <var_match:nullable Match(Match)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (!var6) break;
{
{ /* Inline string_search#Match#from (var_match) on <var_match:nullable Match(Match)> */
var14 = var_match->attrs[COLOR_string_search__Match___from].l; /* _from on <var_match:nullable Match(Match)> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var12,var_i) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var17 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var18 = var12 - var_i;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_len = var15;
var19 = NEW_string_search__Match(&type_string_search__Match);
{
var20 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
{
string_search__Match__init(var19, var20, var_i, var_len); /* Direct call string_search#Match#init on <var19:Match>*/
}
{
array__Array__add(var_res, var19); /* Direct call array#Array#add on <var_res:Array[Match]>*/
}
{
var21 = string_search__Match__after(var_match);
}
var_i = var21;
{
var22 = ((val* (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_in]))(self, var_s, var_i) /* search_in on <self:Pattern>*/;
}
var_match = var22;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var23 = NEW_string_search__Match(&type_string_search__Match);
{
var24 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var27 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var25,var_i) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var30 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var34 = var25 - var_i;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
string_search__Match__init(var23, var24, var_i, var28); /* Direct call string_search#Match#init on <var23:Match>*/
}
{
array__Array__add(var_res, var23); /* Direct call array#Array#add on <var_res:Array[Match]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Pattern#split_in for (self: Object, Text): Array[Match] */
val* VIRTUAL_string_search__Pattern__split_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var1 /* : Array[Match] */;
var1 = string_search__Pattern__split_in(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#string for (self: Match): String */
val* string_search__Match__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 240);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#string for (self: Object): String */
val* VIRTUAL_string_search__Match__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline string_search#Match#string (self) on <self:Object(Match)> */
var3 = self->attrs[COLOR_string_search__Match___string].val; /* _string on <self:Object(Match)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 240);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#string= for (self: Match, String) */
void string_search__Match__string_61d(val* self, val* p0) {
self->attrs[COLOR_string_search__Match___string].val = p0; /* _string on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#string= for (self: Object, String) */
void VIRTUAL_string_search__Match__string_61d(val* self, val* p0) {
{ /* Inline string_search#Match#string= (self,p0) on <self:Object(Match)> */
self->attrs[COLOR_string_search__Match___string].val = p0; /* _string on <self:Object(Match)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string_search#Match#from for (self: Match): Int */
long string_search__Match__from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#from for (self: Object): Int */
long VIRTUAL_string_search__Match__from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string_search#Match#from (self) on <self:Object(Match)> */
var3 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Object(Match)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#from= for (self: Match, Int) */
void string_search__Match__from_61d(val* self, long p0) {
self->attrs[COLOR_string_search__Match___from].l = p0; /* _from on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#from= for (self: Object, Int) */
void VIRTUAL_string_search__Match__from_61d(val* self, long p0) {
{ /* Inline string_search#Match#from= (self,p0) on <self:Object(Match)> */
self->attrs[COLOR_string_search__Match___from].l = p0; /* _from on <self:Object(Match)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string_search#Match#length for (self: Match): Int */
long string_search__Match__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#length for (self: Object): Int */
long VIRTUAL_string_search__Match__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string_search#Match#length (self) on <self:Object(Match)> */
var3 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Object(Match)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#length= for (self: Match, Int) */
void string_search__Match__length_61d(val* self, long p0) {
self->attrs[COLOR_string_search__Match___length].l = p0; /* _length on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#length= for (self: Object, Int) */
void VIRTUAL_string_search__Match__length_61d(val* self, long p0) {
{ /* Inline string_search#Match#length= (self,p0) on <self:Object(Match)> */
self->attrs[COLOR_string_search__Match___length].l = p0; /* _length on <self:Object(Match)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string_search#Match#after for (self: Match): Int */
long string_search__Match__after(val* self) {
long var /* : Int */;
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
{
{ /* Inline string_search#Match#from (self) on <self:Match> */
var3 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string_search#Match#length (self) on <self:Match> */
var6 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var10 = var1 + var4;
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
/* method string_search#Match#after for (self: Object): Int */
long VIRTUAL_string_search__Match__after(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__Match__after(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#to_s for (self: Match): String */
val* string_search__Match__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var10 /* : String */;
{
{ /* Inline string_search#Match#string (self) on <self:Match> */
var3 = self->attrs[COLOR_string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 240);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string_search#Match#from (self) on <self:Match> */
var6 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string_search#Match#length (self) on <self:Match> */
var9 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = string__FlatString__substring(var1, var4, var7);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Match#to_s for (self: Object): String */
val* VIRTUAL_string_search__Match__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string_search__Match__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#init for (self: Match, String, Int, Int) */
void string_search__Match__init(val* self, val* p0, long p1, long p2) {
val* var_s /* var s: String */;
long var_f /* var f: Int */;
long var_len /* var len: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
var_s = p0;
var_f = p1;
var_len = p2;
var = 0;
{
{ /* Inline kernel#Int#>= (var_len,var) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var4 = var_len >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert \'positive_length\' failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 259);
show_backtrace(1);
}
var5 = 0;
{
{ /* Inline kernel#Int#>= (var_f,var5) on <var_f:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var12 = var_f >= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert \'valid_from\' failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 260);
show_backtrace(1);
}
{
{ /* Inline kernel#Int#+ (var_f,var_len) on <var_f:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var15 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var19 = var_f + var_len;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:String> */
var22 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:String> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var13,var20) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var25 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var29 = var13 <= var20;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert \'valid_after\' failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 261);
show_backtrace(1);
}
{
{ /* Inline string_search#Match#string= (self,var_s) on <self:Match> */
self->attrs[COLOR_string_search__Match___string].val = var_s; /* _string on <self:Match> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline string_search#Match#from= (self,var_f) on <self:Match> */
self->attrs[COLOR_string_search__Match___from].l = var_f; /* _from on <self:Match> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline string_search#Match#length= (self,var_len) on <self:Match> */
self->attrs[COLOR_string_search__Match___length].l = var_len; /* _length on <self:Match> */
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method string_search#Match#init for (self: Object, String, Int, Int) */
void VIRTUAL_string_search__Match__init(val* self, val* p0, long p1, long p2) {
string_search__Match__init(self, p0, p1, p2); /* Direct call string_search#Match#init on <self:Object(Match)>*/
RET_LABEL:;
}
/* method string_search#Char#search_index_in for (self: Char, Text, Int): Int */
long string_search__Char__search_index_in(char self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_stop /* var stop: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
char var14 /* : Char */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
var_s = p0;
var_from = p1;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var3 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_stop = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var6 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var7 = var_from < var_stop;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (!var4) break;
{
var8 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var9 = ((val* (*)(val*, long))(var8->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var8, var_from) /* [] on <var8:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var9,self) on <var9:nullable Object(Char)> */
var13 = (var9 != NULL) && (var9->class == &class_kernel__Char);
if (var13) {
var14 = ((struct instance_kernel__Char*)var9)->value; /* autounbox from nullable Object to Char */;
var13 = (var14 == self);
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_from;
goto RET_LABEL;
} else {
}
var15 = 1;
{
{ /* Inline kernel#Int#+ (var_from,var15) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var22 = var_from + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_from = var16;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var23 = 1;
{
{ /* Inline kernel#Int#unary - (var23) on <var23:Int> */
var26 = -var23;
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
/* method string_search#Char#search_index_in for (self: Object, Text, Int): Int */
long VIRTUAL_string_search__Char__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string_search__Char__search_index_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Char#search_in for (self: Char, Text, Int): nullable Match */
val* string_search__Char__search_in(char self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : Match */;
val* var9 /* : String */;
long var10 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = string_search__Char__search_index_in(self, var_s, var_from);
}
var_pos = var1;
var2 = 0;
{
{ /* Inline kernel#Int#< (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var6 = var_pos < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
var8 = NEW_string_search__Match(&type_string_search__Match);
{
var9 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
var10 = 1;
{
string_search__Match__init(var8, var9, var_pos, var10); /* Direct call string_search#Match#init on <var8:Match>*/
}
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#Char#search_in for (self: Object, Text, Int): nullable Match */
val* VIRTUAL_string_search__Char__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string_search__Char__search_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Text#search_index_in for (self: Text, Text, Int): Int */
long string_search__Text__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
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
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var_stop /* var stop: Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
long var_i /* var i: Int */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
short int var_ /* var : Bool */;
val* var54 /* : SequenceRead[Char] */;
val* var55 /* : nullable Object */;
val* var56 /* : SequenceRead[Char] */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
val* var64 /* : nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var77 /* : Int */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
short int var84 /* : Bool */;
long var85 /* : Int */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
long var94 /* : Int */;
long var95 /* : Int */;
long var97 /* : Int */;
var_s = p0;
var_from = p1;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 297);
show_backtrace(1);
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text> */
var8 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var11 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var6,var9) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var14 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var18 = var6 - var9;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var19 = 1;
{
{ /* Inline kernel#Int#+ (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var26 = var12 + var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_stop = var20;
for(;;) {
{
{ /* Inline kernel#Int#< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var29 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var33 = var_from < var_stop;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (!var27) break;
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var36 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = 1;
{
{ /* Inline kernel#Int#- (var34,var37) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var40 = 1; /* easy <var37:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var44 = var34 - var37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
for(;;) {
var46 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var46) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var53 = var_i >= var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_ = var47;
if (var47){
{
var54 = ((val* (*)(val*))(self->class->vft[COLOR_string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var55 = ((val* (*)(val*, long))(var54->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var54, var_i) /* [] on <var54:SequenceRead[Char]>*/;
}
{
var56 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
{ /* Inline kernel#Int#+ (var_i,var_from) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var59 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var63 = var_i + var_from;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
var64 = ((val* (*)(val*, long))(var56->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var56, var57) /* [] on <var56:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var55,var64) on <var55:nullable Object(Char)> */
var68 = var55 == var64 || (((struct instance_kernel__Char*)var55)->value == ((struct instance_kernel__Char*)var64)->value);
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var45 = var65;
} else {
var45 = var_;
}
if (!var45) break;
var69 = 1;
{
{ /* Inline kernel#Int#- (var_i,var69) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var69:Int> isa OTHER */
/* <var69:Int> isa OTHER */
var72 = 1; /* easy <var69:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var76 = var_i - var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_i = var70;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var77 = 0;
{
{ /* Inline kernel#Int#< (var_i,var77) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var77:Int> isa OTHER */
/* <var77:Int> isa OTHER */
var80 = 1; /* easy <var77:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var84 = var_i < var77;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
if (var78){
var = var_from;
goto RET_LABEL;
} else {
}
var85 = 1;
{
{ /* Inline kernel#Int#+ (var_from,var85) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var85:Int> isa OTHER */
/* <var85:Int> isa OTHER */
var88 = 1; /* easy <var85:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var92 = var_from + var85;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_from = var86;
CONTINUE_label93: (void)0;
}
BREAK_label93: (void)0;
var94 = 1;
{
{ /* Inline kernel#Int#unary - (var94) on <var94:Int> */
var97 = -var94;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var = var95;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#search_index_in for (self: Object, Text, Int): Int */
long VIRTUAL_string_search__Text__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__Text__search_index_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Text#search_in for (self: Text, Text, Int): nullable Match */
val* string_search__Text__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : Match */;
val* var9 /* : String */;
long var10 /* : Int */;
long var12 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = string_search__Text__search_index_in(self, var_s, var_from);
}
var_pos = var1;
var2 = 0;
{
{ /* Inline kernel#Int#< (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var6 = var_pos < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
var8 = NEW_string_search__Match(&type_string_search__Match);
{
var9 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
{
{ /* Inline string#FlatText#length (self) on <self:Text> */
var12 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:Text> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
string_search__Match__init(var8, var9, var_pos, var10); /* Direct call string_search#Match#init on <var8:Match>*/
}
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#Text#search_in for (self: Object, Text, Int): nullable Match */
val* VIRTUAL_string_search__Text__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
var1 = string_search__Text__search_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Text#split for (self: Text, Pattern): Array[Text] */
val* string_search__Text__split(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[Match] */;
val* var_matches /* var matches: Array[Match] */;
val* var2 /* : Array[Text] */;
long var3 /* : Int */;
val* var_res /* var res: Array[Text] */;
val* var4 /* : ArrayIterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_m /* var m: Match */;
val* var7 /* : String */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_p = p0;
{
var1 = string_search__Pattern__split_in(var_p, self);
}
var_matches = var1;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraystring__Text_VTSELFTYPE]);
{
var3 = array__AbstractArrayRead__length(var_matches);
}
{
array__Array__with_capacity(var2, var3); /* Direct call array#Array#with_capacity on <var2:Array[Text]>*/
}
var_res = var2;
{
var4 = array__AbstractArrayRead__iterator(var_matches);
}
for(;;) {
{
var5 = array__ArrayIterator__is_ok(var4);
}
if(!var5) break;
{
var6 = array__ArrayIterator__item(var4);
}
var_m = var6;
{
var7 = string_search__Match__to_s(var_m);
}
/* <var7:String> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__Text_VTSELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string_search.nit", 351);
show_backtrace(1);
}
{
array__Array__add(var_res, var7); /* Direct call array#Array#add on <var_res:Array[Text]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var4); /* Direct call array#ArrayIterator#next on <var4:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#split for (self: Object, Pattern): Array[Text] */
val* VIRTUAL_string_search__Text__split(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var1 /* : Array[Text] */;
var1 = string_search__Text__split(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Text#split_with for (self: Text, Pattern): Array[Text] */
val* string_search__Text__split_with(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[Text] */;
var_p = p0;
{
var1 = string_search__Text__split(self, var_p);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#split_with for (self: Object, Pattern): Array[Text] */
val* VIRTUAL_string_search__Text__split_with(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var1 /* : Array[Text] */;
var1 = string_search__Text__split_with(self, p0);
var = var1;
RET_LABEL:;
return var;
}
