#include "standard__string_search.sep.0.h"
/* method string_search#Pattern#split_in for (self: Pattern, Text): Array[Match] */
val* standard___standard__Pattern___split_in(val* self, val* p0) {
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
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
long var_len /* var len: Int */;
val* var18 /* : Match */;
val* var19 /* : String */;
long var20 /* : Int */;
val* var21 /* : nullable Match */;
val* var22 /* : Match */;
val* var23 /* : String */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
var_s = p0;
var1 = NEW_standard__Array(&type_standard__Array__standard__Match);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Match]>*/
}
var_res = var1;
var2 = 0;
var_i = var2;
var3 = 0;
{
var4 = ((val* (*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__string_search__Pattern__search_in]))(self, var_s, var3) /* search_in on <self:Pattern>*/;
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
var9 = ((short int (*)(val* self, val* p0))(var_match->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_match, var_other) /* == on <var_match:nullable Match(Match)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline string_search#Match#from (var_match) on <var_match:nullable Match(Match)> */
var13 = var_match->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <var_match:nullable Match(Match)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var11,var_i) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var16 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var17 = var11 - var_i;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_len = var14;
var18 = NEW_standard__Match(&type_standard__Match);
{
var19 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
{
((void (*)(val* self, val* p0))(var18->class->vft[COLOR_standard__string_search__Match__string_61d]))(var18, var19) /* string= on <var18:Match>*/;
}
{
((void (*)(val* self, long p0))(var18->class->vft[COLOR_standard__string_search__Match__from_61d]))(var18, var_i) /* from= on <var18:Match>*/;
}
{
((void (*)(val* self, long p0))(var18->class->vft[COLOR_standard__string_search__Match__length_61d]))(var18, var_len) /* length= on <var18:Match>*/;
}
{
((void (*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18) /* init on <var18:Match>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var18); /* Direct call array#Array#add on <var_res:Array[Match]>*/
}
{
var20 = standard___standard__Match___after(var_match);
}
var_i = var20;
{
var21 = ((val* (*)(val* self, val* p0, long p1))(self->class->vft[COLOR_standard__string_search__Pattern__search_in]))(self, var_s, var_i) /* search_in on <self:Pattern>*/;
}
var_match = var21;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var22 = NEW_standard__Match(&type_standard__Match);
{
var23 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
{
var24 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
{
{ /* Inline kernel#Int#- (var24,var_i) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var27 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var31 = var24 - var_i;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var22->class->vft[COLOR_standard__string_search__Match__string_61d]))(var22, var23) /* string= on <var22:Match>*/;
}
{
((void (*)(val* self, long p0))(var22->class->vft[COLOR_standard__string_search__Match__from_61d]))(var22, var_i) /* from= on <var22:Match>*/;
}
{
((void (*)(val* self, long p0))(var22->class->vft[COLOR_standard__string_search__Match__length_61d]))(var22, var25) /* length= on <var22:Match>*/;
}
{
((void (*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22) /* init on <var22:Match>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var22); /* Direct call array#Array#add on <var_res:Array[Match]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Match#string for (self: Match): String */
val* standard___standard__Match___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 239);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#string= for (self: Match, String) */
void standard___standard__Match___string_61d(val* self, val* p0) {
self->attrs[COLOR_standard__string_search__Match___string].val = p0; /* _string on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#from for (self: Match): Int */
long standard___standard__Match___from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#from= for (self: Match, Int) */
void standard___standard__Match___from_61d(val* self, long p0) {
self->attrs[COLOR_standard__string_search__Match___from].l = p0; /* _from on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#length for (self: Match): Int */
long standard___standard__Match___length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_standard__string_search__Match___length].l; /* _length on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#length= for (self: Match, Int) */
void standard___standard__Match___length_61d(val* self, long p0) {
self->attrs[COLOR_standard__string_search__Match___length].l = p0; /* _length on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#after for (self: Match): Int */
long standard___standard__Match___after(val* self) {
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
var3 = self->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <self:Match> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string_search#Match#length (self) on <self:Match> */
var6 = self->attrs[COLOR_standard__string_search__Match___length].l; /* _length on <self:Match> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
/* method string_search#Match#to_s for (self: Match): String */
val* standard___standard__Match___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var10 /* : Text */;
{
{ /* Inline string_search#Match#string (self) on <self:Match> */
var3 = self->attrs[COLOR_standard__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 239);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string_search#Match#from (self) on <self:Match> */
var6 = self->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <self:Match> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string_search#Match#length (self) on <self:Match> */
var9 = self->attrs[COLOR_standard__string_search__Match___length].l; /* _length on <self:Match> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val* (*)(val* self, long p0, long p1))(var1->class->vft[COLOR_standard__string__Text__substring]))(var1, var4, var7) /* substring on <var1:String>*/;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Match#init for (self: Match) */
void standard___standard__Match___standard__kernel__Object__init(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
val* var32 /* : String */;
val* var34 /* : String */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
{
{ /* Inline string_search#Match#length (self) on <self:Match> */
var2 = self->attrs[COLOR_standard__string_search__Match___length].l; /* _length on <self:Match> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 0;
{
{ /* Inline kernel#Int#>= (var,var3) on <var:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var7 = var >= var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert \'positive_length\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 257);
show_backtrace(1);
}
{
{ /* Inline string_search#Match#from (self) on <self:Match> */
var10 = self->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <self:Match> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 0;
{
{ /* Inline kernel#Int#>= (var8,var11) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var18 = var8 >= var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert \'valid_from\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 258);
show_backtrace(1);
}
{
{ /* Inline string_search#Match#from (self) on <self:Match> */
var21 = self->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <self:Match> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline string_search#Match#length (self) on <self:Match> */
var24 = self->attrs[COLOR_standard__string_search__Match___length].l; /* _length on <self:Match> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var19,var22) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var27 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var31 = var19 + var22;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline string_search#Match#string (self) on <self:Match> */
var34 = self->attrs[COLOR_standard__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 239);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = ((long (*)(val* self))(var32->class->vft[COLOR_standard__string__Text__length]))(var32) /* length on <var32:String>*/;
}
{
{ /* Inline kernel#Int#<= (var25,var35) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var42 = var25 <= var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (unlikely(!var36)) {
PRINT_ERROR("Runtime error: %s", "Assert \'valid_after\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 259);
show_backtrace(1);
}
RET_LABEL:;
}
/* method string_search#Char#search_index_in for (self: Char, Text, Int): Int */
long standard__string_search___Char___Pattern__search_index_in(char self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_stop /* var stop: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
char var11 /* : Char */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
var_stop = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var4 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var5 = var_from < var_stop;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
var7 = ((val* (*)(val* self, long p0))(var6->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var6, var_from) /* [] on <var6:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var7,self) on <var7:nullable Object(Char)> */
var10 = (var7 != NULL) && (var7->class == &class_standard__Char);
if (var10) {
var11 = ((struct instance_standard__Char*)var7)->value; /* autounbox from nullable Object to Char */;
var10 = (var11 == self);
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = var_from;
goto RET_LABEL;
} else {
}
var12 = 1;
{
{ /* Inline kernel#Int#+ (var_from,var12) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var19 = var_from + var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_from = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var20 = 1;
{
{ /* Inline kernel#Int#unary - (var20) on <var20:Int> */
var23 = -var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Char#search_index_in for (self: Pattern, Text, Int): Int */
long VIRTUAL_standard__string_search___Char___Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_standard__Char*)self)->value; /* autounbox from Pattern to Char */;
var1 = standard__string_search___Char___Pattern__search_index_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Char#search_in for (self: Char, Text, Int): nullable Match */
val* standard__string_search___Char___Pattern__search_in(char self, val* p0, long p1) {
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
var1 = standard__string_search___Char___Pattern__search_index_in(self, var_s, var_from);
}
var_pos = var1;
var2 = 0;
{
{ /* Inline kernel#Int#< (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var8 = NEW_standard__Match(&type_standard__Match);
{
var9 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
var10 = 1;
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_standard__string_search__Match__string_61d]))(var8, var9) /* string= on <var8:Match>*/;
}
{
((void (*)(val* self, long p0))(var8->class->vft[COLOR_standard__string_search__Match__from_61d]))(var8, var_pos) /* from= on <var8:Match>*/;
}
{
((void (*)(val* self, long p0))(var8->class->vft[COLOR_standard__string_search__Match__length_61d]))(var8, var10) /* length= on <var8:Match>*/;
}
{
((void (*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8) /* init on <var8:Match>*/;
}
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#Char#search_in for (self: Pattern, Text, Int): nullable Match */
val* VIRTUAL_standard__string_search___Char___Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
char var2 /* : Char */;
var2 = ((struct instance_standard__Char*)self)->value; /* autounbox from Pattern to Char */;
var1 = standard__string_search___Char___Pattern__search_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Text#search_index_in for (self: Text, Text, Int): Int */
long standard__string_search___Text___Pattern__search_index_in(val* self, val* p0, long p1) {
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
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_stop /* var stop: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var_i /* var i: Int */;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
short int var_ /* var : Bool */;
val* var48 /* : SequenceRead[Char] */;
val* var49 /* : nullable Object */;
val* var50 /* : SequenceRead[Char] */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : nullable Object */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
long var87 /* : Int */;
long var88 /* : Int */;
long var90 /* : Int */;
var_s = p0;
var_from = p1;
var1 = 0;
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
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 292);
show_backtrace(1);
}
{
var6 = ((long (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s) /* length on <var_s:Text>*/;
}
{
var7 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
{ /* Inline kernel#Int#- (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var14 = var6 - var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var15 = 1;
{
{ /* Inline kernel#Int#+ (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var22 = var8 + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_stop = var16;
for(;;) {
{
{ /* Inline kernel#Int#< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var25 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var29 = var_from < var_stop;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
var30 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
var31 = 1;
{
{ /* Inline kernel#Int#- (var30,var31) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var38 = var30 - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_i = var32;
for(;;) {
var40 = 0;
{
{ /* Inline kernel#Int#>= (var_i,var40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var47 = var_i >= var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_ = var41;
if (var41){
{
var48 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:Text>*/;
}
{
var49 = ((val* (*)(val* self, long p0))(var48->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var48, var_i) /* [] on <var48:SequenceRead[Char]>*/;
}
{
var50 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__chars]))(var_s) /* chars on <var_s:Text>*/;
}
{
{ /* Inline kernel#Int#+ (var_i,var_from) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var53 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var57 = var_i + var_from;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
var58 = ((val* (*)(val* self, long p0))(var50->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var50, var51) /* [] on <var50:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#== (var49,var58) on <var49:nullable Object(Char)> */
var61 = var49 == var58 || (((struct instance_standard__Char*)var49)->value == ((struct instance_standard__Char*)var58)->value);
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var39 = var59;
} else {
var39 = var_;
}
if (var39){
var62 = 1;
{
{ /* Inline kernel#Int#- (var_i,var62) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var69 = var_i - var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_i = var63;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var70 = 0;
{
{ /* Inline kernel#Int#< (var_i,var70) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var77 = var_i < var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
var = var_from;
goto RET_LABEL;
} else {
}
var78 = 1;
{
{ /* Inline kernel#Int#+ (var_from,var78) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var85 = var_from + var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_from = var79;
} else {
goto BREAK_label86;
}
}
BREAK_label86: (void)0;
var87 = 1;
{
{ /* Inline kernel#Int#unary - (var87) on <var87:Int> */
var90 = -var87;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var = var88;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#search_in for (self: Text, Text, Int): nullable Match */
val* standard__string_search___Text___Pattern__search_in(val* self, val* p0, long p1) {
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
var1 = standard__string_search___Text___Pattern__search_index_in(self, var_s, var_from);
}
var_pos = var1;
var2 = 0;
{
{ /* Inline kernel#Int#< (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var8 = NEW_standard__Match(&type_standard__Match);
{
var9 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Object__to_s]))(var_s) /* to_s on <var_s:Text>*/;
}
{
var10 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:Text>*/;
}
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_standard__string_search__Match__string_61d]))(var8, var9) /* string= on <var8:Match>*/;
}
{
((void (*)(val* self, long p0))(var8->class->vft[COLOR_standard__string_search__Match__from_61d]))(var8, var_pos) /* from= on <var8:Match>*/;
}
{
((void (*)(val* self, long p0))(var8->class->vft[COLOR_standard__string_search__Match__length_61d]))(var8, var10) /* length= on <var8:Match>*/;
}
{
((void (*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8) /* init on <var8:Match>*/;
}
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#Text#split for (self: Text, Pattern): Array[String] */
val* standard__string_search___Text___split(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[Match] */;
val* var_matches /* var matches: Array[Match] */;
val* var2 /* : Array[String] */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var_res /* var res: Array[String] */;
val* var_ /* var : Array[Match] */;
val* var6 /* : ArrayIterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[Match] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: Match */;
val* var10 /* : String */;
var_p = p0;
{
var1 = standard___standard__Pattern___split_in(var_p, self);
}
var_matches = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
{ /* Inline array#AbstractArrayRead#length (var_matches) on <var_matches:Array[Match]> */
var5 = var_matches->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_matches:Array[Match]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___with_capacity(var2, var3); /* Direct call array#Array#with_capacity on <var2:Array[String]>*/
}
var_res = var2;
var_ = var_matches;
{
var6 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_7);
}
if (var8){
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_7);
}
var_m = var9;
{
var10 = standard___standard__Match___standard__string__Object__to_s(var_m);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var10); /* Direct call array#Array#add on <var_res:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[Match]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:ArrayIterator[Match]> */
RET_LABEL11:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#split_with for (self: Text, Pattern): Array[String] */
val* standard__string_search___Text___split_with(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[String] */;
var_p = p0;
{
var1 = standard__string_search___Text___split(self, var_p);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#split_once_on for (self: Text, Pattern): Array[Text] */
val* standard__string_search___Text___split_once_on(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var_p /* var p: Pattern */;
long var1 /* : Int */;
val* var2 /* : nullable Match */;
val* var_m /* var m: nullable Match */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Text] */;
long var11 /* : Int */;
val* var_ /* var : Array[Text] */;
val* var12 /* : Array[Text] */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var17 /* : Text */;
long var18 /* : Int */;
val* var19 /* : Text */;
val* var20 /* : Array[nullable Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[nullable Object] */;
var_p = p0;
var1 = 0;
{
var2 = ((val* (*)(val* self, val* p0, long p1))(var_p->class->vft[COLOR_standard__string_search__Pattern__search_in]))(var_p, self, var1) /* search_in on <var_p:Pattern>*/;
}
var_m = var2;
var3 = NULL;
if (var_m == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_m,var3) on <var_m:nullable Match> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_m,var_other) on <var_m:nullable Match(Match)> */
var9 = var_m == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var10 = NEW_standard__Array(&type_standard__Array__standard__Text);
var11 = 1;
{
standard___standard__Array___with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[Text]>*/
}
var_ = var10;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, self); /* Direct call array#AbstractArray#push on <var_:Array[Text]>*/
}
var = var_;
goto RET_LABEL;
} else {
}
var12 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__standard__string__Text__SELFTYPE]);
var13 = 0;
{
{ /* Inline string_search#Match#from (var_m) on <var_m:nullable Match(Match)> */
var16 = var_m->attrs[COLOR_standard__string_search__Match___from].l; /* _from on <var_m:nullable Match(Match)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var13, var14) /* substring on <self:Text>*/;
}
{
var18 = standard___standard__Match___after(var_m);
}
{
var19 = standard___standard__Text___substring_from(self, var18);
}
var20 = NEW_standard__Array(var12->type->resolution_table->types[COLOR_standard__Array__standard__Array___35dE]);
{ /* var20 = array_instance Array[E] */
var21 = 2;
var22 = NEW_standard__NativeArray(var21, var12->type->resolution_table->types[COLOR_standard__NativeArray__standard__Array___35dE]);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var19;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[nullable Object]>*/;
}
}
{
standard___standard__Array___with_items(var12, var20); /* Direct call array#Array#with_items on <var12:Array[Text]>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Text#replace for (self: Text, Pattern, Text): String */
val* standard__string_search___Text___replace(val* self, val* p0, val* p1) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_p /* var p: Pattern */;
val* var_string /* var string: Text */;
val* var2 /* : Array[String] */;
val* var3 /* : String */;
/* Covariant cast for argument 1 (string) <p1:Text> isa SELFTYPE */
/* <p1:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_standard__string__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string_search, 395);
show_backtrace(1);
}
var_p = p0;
var_string = p1;
{
var2 = standard__string_search___Text___split_with(self, var_p);
}
{
var3 = standard__string___Collection___join(var2, var_string);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
