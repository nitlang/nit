#include "core__string_search.sep.0.h"
/* method string_search$Pattern$split_in for (self: Pattern, Text): Array[Match] */
val* core___core__Pattern___split_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_s /* var s: Text */;
val* var1 /* : Array[Match] */;
val* var_res /* var res: Array[Match] */;
long var_i /* var i: Int */;
val* var2 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var_len /* var len: Int */;
val* var15 /* : Match */;
val* var16 /* : String */;
long var17 /* : Int */;
val* var18 /* : nullable Match */;
val* var19 /* : Match */;
val* var20 /* : String */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
var_s = p0;
var1 = NEW_core__Array(&type_core__Array__core__Match);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Match]>*/
}
var_res = var1;
var_i = 0l;
{
var2 = ((val*(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_in]))(self, var_s, 0l); /* search_in on <self:Pattern>*/
}
var_match = var2;
for(;;) {
if (var_match == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_match,((val*)NULL)) on <var_match:nullable Match> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_match->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_match, var_other); /* == on <var_match:nullable Match(Match)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline string_search$Match$from (var_match) on <var_match:nullable Match(Match)> */
var10 = var_match->attrs[COLOR_core__string_search__Match___from].l; /* _from on <var_match:nullable Match(Match)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var8,var_i) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var13 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var8 - var_i;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_len = var11;
var15 = NEW_core__Match(&type_core__Match);
{
var16 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_core__string_search__Match__string_61d]))(var15, var16); /* string= on <var15:Match>*/
}
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_core__string_search__Match__from_61d]))(var15, var_i); /* from= on <var15:Match>*/
}
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_core__string_search__Match__length_61d]))(var15, var_len); /* length= on <var15:Match>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:Match>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var15); /* Direct call array$Array$add on <var_res:Array[Match]>*/
}
{
var17 = core___core__Match___after(var_match);
}
var_i = var17;
{
var18 = ((val*(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_in]))(self, var_s, var_i); /* search_in on <self:Pattern>*/
}
var_match = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var19 = NEW_core__Match(&type_core__Match);
{
var20 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
var21 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
{ /* Inline kernel$Int$- (var21,var_i) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var24 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var21 - var_i;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__string_search__Match__string_61d]))(var19, var20); /* string= on <var19:Match>*/
}
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_core__string_search__Match__from_61d]))(var19, var_i); /* from= on <var19:Match>*/
}
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_core__string_search__Match__length_61d]))(var19, var22); /* length= on <var19:Match>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:Match>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var19); /* Direct call array$Array$add on <var_res:Array[Match]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$string for (self: Match): String */
val* core___core__Match___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 239);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Match$string= for (self: Match, String) */
void core___core__Match___string_61d(val* self, val* p0) {
self->attrs[COLOR_core__string_search__Match___string].val = p0; /* _string on <self:Match> */
RET_LABEL:;
}
/* method string_search$Match$from for (self: Match): Int */
long core___core__Match___from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__Match___from].l; /* _from on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Match$from= for (self: Match, Int) */
void core___core__Match___from_61d(val* self, long p0) {
self->attrs[COLOR_core__string_search__Match___from].l = p0; /* _from on <self:Match> */
RET_LABEL:;
}
/* method string_search$Match$length for (self: Match): Int */
long core___core__Match___length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__Match___length].l; /* _length on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Match$length= for (self: Match, Int) */
void core___core__Match___length_61d(val* self, long p0) {
self->attrs[COLOR_core__string_search__Match___length].l = p0; /* _length on <self:Match> */
RET_LABEL:;
}
/* method string_search$Match$after for (self: Match): Int */
long core___core__Match___after(val* self) {
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
{ /* Inline string_search$Match$from (self) on <self:Match> */
var3 = self->attrs[COLOR_core__string_search__Match___from].l; /* _from on <self:Match> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string_search$Match$length (self) on <self:Match> */
var6 = self->attrs[COLOR_core__string_search__Match___length].l; /* _length on <self:Match> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
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
/* method string_search$Match$to_s for (self: Match): String */
val* core___core__Match___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var10 /* : Text */;
{
{ /* Inline string_search$Match$string (self) on <self:Match> */
var3 = self->attrs[COLOR_core__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 239);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string_search$Match$from (self) on <self:Match> */
var6 = self->attrs[COLOR_core__string_search__Match___from].l; /* _from on <self:Match> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string_search$Match$length (self) on <self:Match> */
var9 = self->attrs[COLOR_core__string_search__Match___length].l; /* _length on <self:Match> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self, long p0, long p1))(var1->class->vft[COLOR_core__abstract_text__Text__substring]))(var1, var4, var7); /* substring on <var1:String>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$init for (self: Match) */
void core___core__Match___core__kernel__Object__init(val* self) {
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
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
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var30 /* : String */;
val* var32 /* : String */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Match___core__kernel__Object__init]))(self); /* init on <self:Match>*/
}
{
{ /* Inline string_search$Match$length (self) on <self:Match> */
var2 = self->attrs[COLOR_core__string_search__Match___length].l; /* _length on <self:Match> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var >= 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'positive_length\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 298);
fatal_exit(1);
}
{
{ /* Inline string_search$Match$from (self) on <self:Match> */
var9 = self->attrs[COLOR_core__string_search__Match___from].l; /* _from on <self:Match> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var7,0l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var12 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var16 = var7 >= 0l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (unlikely(!var10)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'valid_from\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 299);
fatal_exit(1);
}
{
{ /* Inline string_search$Match$from (self) on <self:Match> */
var19 = self->attrs[COLOR_core__string_search__Match___from].l; /* _from on <self:Match> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline string_search$Match$length (self) on <self:Match> */
var22 = self->attrs[COLOR_core__string_search__Match___length].l; /* _length on <self:Match> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var17,var20) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var25 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var17 + var20;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline string_search$Match$string (self) on <self:Match> */
var32 = self->attrs[COLOR_core__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 239);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((long(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__Text__length]))(var30); /* length on <var30:String>*/
}
{
{ /* Inline kernel$Int$<= (var23,var33) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var40 = var23 <= var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (unlikely(!var34)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'valid_after\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 300);
fatal_exit(1);
}
RET_LABEL:;
}
/* method string_search$Char$search_index_in for (self: Char, Text, Int): Int */
long core__string_search___Char___Pattern__search_index_in(uint32_t self, val* p0, long p1) {
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
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_stop = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var4 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_from < var_stop;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_from); /* [] on <var_s:Text>*/
}
{
{ /* Inline kernel$Char$== (var6,self) on <var6:Char> */
var9 = var6 == self;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_from;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,1l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_from + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_from = var10;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Char$search_index_in for (self: Pattern, Text, Int): Int */
long VIRTUAL_core__string_search___Char___Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core__string_search___Char___Pattern__search_index_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Char$search_in for (self: Char, Text, Int): nullable Match */
val* core__string_search___Char___Pattern__search_in(uint32_t self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Match */;
val* var7 /* : String */;
var_s = p0;
var_from = p1;
{
var1 = core__string_search___Char___Pattern__search_index_in(self, var_s, var_from);
}
var_pos = var1;
{
{ /* Inline kernel$Int$< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_pos < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
var6 = NEW_core__Match(&type_core__Match);
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__string_search__Match__string_61d]))(var6, var7); /* string= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__from_61d]))(var6, var_pos); /* from= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__length_61d]))(var6, 1l); /* length= on <var6:Match>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Match>*/
}
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search$Char$search_in for (self: Pattern, Text, Int): nullable Match */
val* VIRTUAL_core__string_search___Char___Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core__string_search___Char___Pattern__search_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_index_in for (self: Text, Text, Int): Int */
long core__string_search___Text___Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var_stop /* var stop: Int */;
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
long var_i /* var i: Int */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
uint32_t var44 /* : Char */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
uint32_t var52 /* : Char */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
long var80 /* : Int */;
var_s = p0;
var_from = p1;
{
{ /* Inline kernel$Int$>= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_from >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 333);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var5 - var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var7 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_stop = var14;
for(;;) {
{
{ /* Inline kernel$Int$< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var23 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_from < var_stop;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
var28 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var28 - 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var39 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var43 = var_i >= 0l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_ = var37;
if (var37){
{
var44 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
{ /* Inline kernel$Int$+ (var_i,var_from) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var47 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_i + var_from;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var52 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var45); /* [] on <var_s:Text>*/
}
{
{ /* Inline kernel$Char$== (var44,var52) on <var44:Char> */
var55 = var44 == var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var36 = var53;
} else {
var36 = var_;
}
if (var36){
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var62 = var_i - 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_i = var56;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var65 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var69 = var_i < 0l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
var = var_from;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,1l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_from + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_from = var70;
} else {
goto BREAK_label77;
}
}
BREAK_label77: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var80 = -1l;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_in for (self: Text, Text, Int): nullable Match */
val* core__string_search___Text___Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Match */;
val* var7 /* : String */;
long var8 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = core__string_search___Text___Pattern__search_index_in(self, var_s, var_from);
}
var_pos = var1;
{
{ /* Inline kernel$Int$< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_pos < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
var6 = NEW_core__Match(&type_core__Match);
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__string_search__Match__string_61d]))(var6, var7); /* string= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__from_61d]))(var6, var_pos); /* from= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__length_61d]))(var6, var8); /* length= on <var6:Match>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Match>*/
}
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search$Text$split for (self: Text, Pattern): Array[String] */
val* core__string_search___Text___split(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[Match] */;
val* var_matches /* var matches: Array[Match] */;
val* var2 /* : Array[String] */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var_res /* var res: Array[String] */;
val* var_ /* var : Array[Match] */;
val* var6 /* : IndexedIterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[Match] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: Match */;
val* var10 /* : String */;
var_pattern = p0;
{
var1 = core___core__Pattern___split_in(var_pattern, self);
}
var_matches = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
{ /* Inline array$AbstractArrayRead$length (var_matches) on <var_matches:Array[Match]> */
var5 = var_matches->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_matches:Array[Match]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___with_capacity(var2, var3); /* Direct call array$Array$with_capacity on <var2:Array[String]>*/
}
var_res = var2;
var_ = var_matches;
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[Match]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[Match]>*/
}
var_m = var9;
{
var10 = core___core__Match___core__abstract_text__Object__to_s(var_m);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var10); /* Direct call array$Array$add on <var_res:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[Match]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[Match]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$split_with for (self: Text, Pattern): Array[String] */
val* core__string_search___Text___split_with(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[String] */;
var_pattern = p0;
{
var1 = core__string_search___Text___split(self, var_pattern);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$split_once_on for (self: Text, Pattern): Array[Text] */
val* core__string_search___Text___split_once_on(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : nullable Match */;
val* var_m /* var m: nullable Match */;
val* var2 /* : Array[Text] */;
val* var_res /* var res: Array[Text] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var10 /* : Int */;
long var12 /* : Int */;
val* var13 /* : Text */;
long var14 /* : Int */;
val* var15 /* : Text */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0, long p1))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__search_in]))(var_pattern, self, 0l); /* search_in on <var_pattern:Pattern>*/
}
var_m = var1;
var2 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__abstract_text__Text__SELFTYPE]);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Text]>*/
}
var_res = var2;
if (var_m == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_m,((val*)NULL)) on <var_m:nullable Match> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_m,var_other) on <var_m:nullable Match(Match)> */
var8 = var_m == var_other;
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
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var9 = 0;
} else {
var9 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 465);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, self); /* Direct call array$Array$add on <var_res:Array[Text]>*/
}
} else {
{
{ /* Inline string_search$Match$from (var_m) on <var_m:nullable Match(Match)> */
var12 = var_m->attrs[COLOR_core__string_search__Match___from].l; /* _from on <var_m:nullable Match(Match)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var10); /* substring on <self:Text>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var13); /* Direct call array$Array$add on <var_res:Array[Text]>*/
}
{
var14 = core___core__Match___after(var_m);
}
{
var15 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var14); /* substring_from on <self:Text>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var15); /* Direct call array$Array$add on <var_res:Array[Text]>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$replace for (self: Text, Pattern, Text): String */
val* core__string_search___Text___replace(val* self, val* p0, val* p1) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_pattern /* var pattern: Pattern */;
val* var_string /* var string: Text */;
val* var2 /* : Array[String] */;
val* var3 /* : String */;
/* Covariant cast for argument 1 (string) <p1:Text> isa SELFTYPE */
/* <p1:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 473);
fatal_exit(1);
}
var_pattern = p0;
var_string = p1;
{
var2 = core__string_search___Text___split_with(self, var_pattern);
}
{
var3 = core__abstract_text___Collection___join(var2, var_string, ((val*)NULL));
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$remove_all for (self: Text, Pattern): String */
val* core__string_search___Text___remove_all(val* self, val* p0) {
val* var /* : String */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[String] */;
val* var2 /* : String */;
var_pattern = p0;
{
var1 = core__string_search___Text___split(self, var_pattern);
}
{
var2 = core__abstract_text___Collection___join(var1, ((val*)NULL), ((val*)NULL));
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
