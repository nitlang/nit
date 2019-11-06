#include "csv.sep.0.h"
/* method csv$Text$escape_to_csv for (self: Text, Char, Char, String): String */
val* csv___core__Text___escape_to_csv(val* self, uint32_t p0, uint32_t p1, val* p2) {
val* var /* : String */;
uint32_t var_sep_char /* var sep_char: Char */;
uint32_t var_delim_char /* var delim_char: Char */;
val* var_eol /* var eol: String */;
long var1 /* : Int */;
long var_add_sp /* var add_sp: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var6 /* : Buffer */;
val* var7 /* : Buffer */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Buffer */;
val* var_bf /* var bf: Buffer */;
long var_i /* var i: Int */;
long var14 /* : Int */;
long var_ /* var : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
val* var27 /* : String */;
var_sep_char = p0;
var_delim_char = p1;
var_eol = p2;
{
var1 = csv___core__Text___chars_to_escape_csv(self, var_sep_char, var_delim_char, var_eol);
}
var_add_sp = var1;
{
{ /* Inline kernel$Int$== (var_add_sp,0l) on <var_add_sp:Int> */
var4 = var_add_sp == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
var = var5;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var6 = varoncenew;
} else {
var7 = NEW_core__Buffer(&type_core__Buffer);
var6 = var7;
varoncenew = var6;
varoncenew_guard = 1;
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Text>*/
}
{
{ /* Inline kernel$Int$+ (var_add_sp,var8) on <var_add_sp:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_add_sp + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var13 = core__flat___Buffer___with_cap(var6, var9);
}
var_bf = var13;
{
((void(*)(val* self, uint32_t p0))(var_bf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_bf, '\"'); /* add on <var_bf:Buffer>*/
}
var_i = 0l;
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var14;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var17 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_i < var_;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
} else {
goto BREAK_label;
}
{
var22 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_c = var22;
{
{ /* Inline kernel$Char$== (var_c,var_delim_char) on <var_c:Char> */
var25 = var_c == var_delim_char;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
((void(*)(val* self, uint32_t p0))(var_bf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_bf, var_c); /* add on <var_bf:Buffer>*/
}
} else {
}
{
((void(*)(val* self, uint32_t p0))(var_bf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_bf, var_c); /* add on <var_bf:Buffer>*/
}
{
var26 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var26;
}
BREAK_label: (void)0;
{
((void(*)(val* self, uint32_t p0))(var_bf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_bf, '\"'); /* add on <var_bf:Buffer>*/
}
{
var27 = ((val*(*)(val* self))(var_bf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bf); /* to_s on <var_bf:Buffer>*/
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method csv$Text$chars_to_escape_csv for (self: Text, Char, Char, String): Int */
long csv___core__Text___chars_to_escape_csv(val* self, uint32_t p0, uint32_t p1, val* p2) {
long var /* : Int */;
uint32_t var_sep_char /* var sep_char: Char */;
uint32_t var_delim_char /* var delim_char: Char */;
val* var_eol /* var eol: String */;
long var_more_ln /* var more_ln: Int */;
long var1 /* : Int */;
long var_ln /* var ln: Int */;
short int var_need_esc /* var need_esc: Bool */;
uint32_t var2 /* : Char */;
uint32_t var_fst_eol /* var fst_eol: Char */;
long var_i /* var i: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
uint32_t var7 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
long var_j /* var j: Int */;
long var21 /* : Int */;
long var_ /* var : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
uint32_t var36 /* : Char */;
uint32_t var37 /* : Char */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var_more /* var more: Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
var_sep_char = p0;
var_delim_char = p1;
var_eol = p2;
var_more_ln = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ln = var1;
var_need_esc = 0;
{
var2 = core___core__Text___first(var_eol);
}
var_fst_eol = var2;
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_ln) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var5 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_i < var_ln;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_c = var7;
{
{ /* Inline kernel$Char$== (var_c,var_delim_char) on <var_c:Char> */
var10 = var_c == var_delim_char;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel$Int$+ (var_more_ln,1l) on <var_more_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var_more_ln + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_more_ln = var11;
} else {
}
{
{ /* Inline kernel$Char$== (var_c,var_fst_eol) on <var_c:Char> */
var20 = var_c == var_fst_eol;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var_need_esc = 1;
var_j = 1l;
{
var21 = ((long(*)(val* self))(var_eol->class->vft[COLOR_core__abstract_text__Text__length]))(var_eol); /* length on <var_eol:String>*/
}
var_ = var21;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var24 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_j < var_;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_i + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
{
var36 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_c = var36;
{
var37 = ((uint32_t(*)(val* self, long p0))(var_eol->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_eol, var_j); /* [] on <var_eol:String>*/
}
{
{ /* Inline kernel$Char$!= (var_c,var37) on <var_c:Char> */
var40 = var_c == var37;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel$Int$- (var_i,var_j) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var44 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var_i - var_j;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_i = var42;
var_need_esc = 0;
goto BREAK_label;
} else {
}
{
var49 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var49;
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline kernel$Char$== (var_c,var_sep_char) on <var_c:Char> */
var52 = var_c == var_sep_char;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
var_need_esc = 1;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var_i + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_i = var53;
} else {
goto BREAK_label60;
}
}
BREAK_label60: (void)0;
{
var61 = core__abstract_text___Char___u8char_len(var_delim_char);
}
{
{ /* Inline kernel$Int$* (var_more_ln,var61) on <var_more_ln:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var68 = var_more_ln * var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_more = var62;
if (var_need_esc){
{
{ /* Inline kernel$Int$+ (var_more,2l) on <var_more:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var71 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var75 = var_more + 2l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_more = var69;
} else {
}
var = var_more;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method csv$CsvStream$delimiter for (self: CsvStream): Char */
uint32_t csv___csv__CsvStream___delimiter(val* self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self->attrs[COLOR_csv__CsvStream___delimiter].c; /* _delimiter on <self:CsvStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method csv$CsvStream$delimiter= for (self: CsvStream, Char) */
void csv___csv__CsvStream___delimiter_61d(val* self, uint32_t p0) {
self->attrs[COLOR_csv__CsvStream___delimiter].c = p0; /* _delimiter on <self:CsvStream> */
RET_LABEL:;
}
/* method csv$CsvStream$separator for (self: CsvStream): Char */
uint32_t csv___csv__CsvStream___separator(val* self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self->attrs[COLOR_csv__CsvStream___separator].c; /* _separator on <self:CsvStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method csv$CsvStream$separator= for (self: CsvStream, Char) */
void csv___csv__CsvStream___separator_61d(val* self, uint32_t p0) {
self->attrs[COLOR_csv__CsvStream___separator].c = p0; /* _separator on <self:CsvStream> */
RET_LABEL:;
}
/* method csv$CsvStream$eol for (self: CsvStream): String */
val* csv___csv__CsvStream___eol(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_csv__CsvStream___eol].val; /* _eol on <self:CsvStream> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _eol");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 112);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv$CsvStream$eol= for (self: CsvStream, String) */
void csv___csv__CsvStream___eol_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvStream___eol].val = p0; /* _eol on <self:CsvStream> */
RET_LABEL:;
}
/* method csv$CsvDocument$header for (self: CsvDocument): Array[String] */
val* csv___csv__CsvDocument___header(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 121);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv$CsvDocument$header= for (self: CsvDocument, nullable Array[String]) */
void csv___csv__CsvDocument___header_61d(val* self, val* p0) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
if (p0 == NULL) {
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[String]>*/
}
self->attrs[COLOR_csv__CsvDocument___header].val = var1; /* _header on <self:CsvDocument> */
var = var1;
} else {
var = p0;
}
self->attrs[COLOR_csv__CsvDocument___header].val = var; /* _header on <self:CsvDocument> */
RET_LABEL:;
}
/* method csv$CsvDocument$records for (self: CsvDocument): Array[Array[String]] */
val* csv___csv__CsvDocument___records(val* self) {
val* var /* : Array[Array[String]] */;
val* var1 /* : Array[Array[String]] */;
var1 = self->attrs[COLOR_csv__CsvDocument___records].val; /* _records on <self:CsvDocument> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _records");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 126);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv$CsvDocument$records= for (self: CsvDocument, nullable Array[Array[String]]) */
void csv___csv__CsvDocument___records_61d(val* self, val* p0) {
val* var /* : Array[Array[String]] */;
val* var1 /* : Array[Array[String]] */;
if (p0 == NULL) {
var1 = NEW_core__Array(&type_core__Array__core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Array[String]]>*/
}
self->attrs[COLOR_csv__CsvDocument___records].val = var1; /* _records on <self:CsvDocument> */
var = var1;
} else {
var = p0;
}
self->attrs[COLOR_csv__CsvDocument___records].val = var; /* _records on <self:CsvDocument> */
RET_LABEL:;
}
/* method csv$CsvDocument$add_record for (self: CsvDocument, Array[Object]) */
void csv___csv__CsvDocument___add_record(val* self, val* p0) {
val* var_objs /* var objs: Array[Object] */;
val* var /* : Array[String] */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var_ln /* var ln: Array[String] */;
val* var_ /* var : Array[Object] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_i /* var i: Object */;
val* var8 /* : String */;
val* var9 /* : Array[Array[String]] */;
val* var11 /* : Array[Array[String]] */;
var_objs = p0;
var = NEW_core__Array(&type_core__Array__core__String);
{
{ /* Inline array$AbstractArrayRead$length (var_objs) on <var_objs:Array[Object]> */
var3 = var_objs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_objs:Array[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__Array___with_capacity(var, var1); /* Direct call array$Array$with_capacity on <var:Array[String]>*/
}
var_ln = var;
var_ = var_objs;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Object]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Object]>*/
}
var_i = var7;
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:Object>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ln, var8); /* Direct call array$Array$add on <var_ln:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Object]>*/
}
{
{ /* Inline csv$CsvDocument$records (self) on <self:CsvDocument> */
var11 = self->attrs[COLOR_csv__CsvDocument___records].val; /* _records on <self:CsvDocument> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _records");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 126);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var9, var_ln); /* Direct call array$Array$add on <var9:Array[Array[String]]>*/
}
RET_LABEL:;
}
/* method csv$CsvDocument$write_to for (self: CsvDocument, Writer) */
void csv___csv__CsvDocument___core__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : CsvWriter */;
val* var_s /* var s: CsvWriter */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
val* var5 /* : String */;
val* var7 /* : String */;
uint32_t var9 /* : Char */;
uint32_t var11 /* : Char */;
val* var13 /* : Array[String] */;
val* var15 /* : Array[String] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[String] */;
val* var20 /* : Array[String] */;
val* var21 /* : Array[Array[String]] */;
val* var23 /* : Array[Array[String]] */;
var_stream = p0;
var = NEW_csv__CsvWriter(&type_csv__CsvWriter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_csv__CsvWriter__ostream_61d]))(var, var_stream); /* ostream= on <var:CsvWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:CsvWriter>*/
}
var_s = var;
{
{ /* Inline csv$CsvStream$separator (self) on <self:CsvDocument> */
var3 = self->attrs[COLOR_csv__CsvStream___separator].c; /* _separator on <self:CsvDocument> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline csv$CsvStream$separator= (var_s,var1) on <var_s:CsvWriter> */
var_s->attrs[COLOR_csv__CsvStream___separator].c = var1; /* _separator on <var_s:CsvWriter> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline csv$CsvStream$eol (self) on <self:CsvDocument> */
var7 = self->attrs[COLOR_csv__CsvStream___eol].val; /* _eol on <self:CsvDocument> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _eol");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 112);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline csv$CsvStream$eol= (var_s,var5) on <var_s:CsvWriter> */
var_s->attrs[COLOR_csv__CsvStream___eol].val = var5; /* _eol on <var_s:CsvWriter> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline csv$CsvStream$delimiter (self) on <self:CsvDocument> */
var11 = self->attrs[COLOR_csv__CsvStream___delimiter].c; /* _delimiter on <self:CsvDocument> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline csv$CsvStream$delimiter= (var_s,var9) on <var_s:CsvWriter> */
var_s->attrs[COLOR_csv__CsvStream___delimiter].c = var9; /* _delimiter on <var_s:CsvWriter> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline csv$CsvDocument$header (self) on <self:CsvDocument> */
var15 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 121);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var13);
}
var17 = !var16;
if (var17){
{
{ /* Inline csv$CsvDocument$header (self) on <self:CsvDocument> */
var20 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 121);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
csv___csv__CsvWriter___write_line(var_s, var18); /* Direct call csv$CsvWriter$write_line on <var_s:CsvWriter>*/
}
} else {
}
{
{ /* Inline csv$CsvDocument$records (self) on <self:CsvDocument> */
var23 = self->attrs[COLOR_csv__CsvDocument___records].val; /* _records on <self:CsvDocument> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _records");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 126);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
csv___csv__CsvWriter___write_lines(var_s, var21); /* Direct call csv$CsvWriter$write_lines on <var_s:CsvWriter>*/
}
RET_LABEL:;
}
/* method csv$CsvDocument$init for (self: CsvDocument) */
void csv___csv__CsvDocument___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_csv___csv__CsvDocument___core__kernel__Object__init]))(self); /* init on <self:CsvDocument>*/
}
RET_LABEL:;
}
/* method csv$CsvWriter$ostream for (self: CsvWriter): Writer */
val* csv___csv__CsvWriter___ostream(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 186);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv$CsvWriter$ostream= for (self: CsvWriter, Writer) */
void csv___csv__CsvWriter___ostream_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvWriter___ostream].val = p0; /* _ostream on <self:CsvWriter> */
RET_LABEL:;
}
/* method csv$CsvWriter$write_lines for (self: CsvWriter, Array[Array[Object]]) */
void csv___csv__CsvWriter___write_lines(val* self, val* p0) {
val* var_lines /* var lines: Array[Array[Object]] */;
val* var_ /* var : Array[Array[Object]] */;
val* var /* : IndexedIterator[nullable Object] */;
val* var_1 /* var : IndexedIterator[Array[Object]] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_i /* var i: Array[Object] */;
var_lines = p0;
var_ = var_lines;
{
var = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_1 = var;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1); /* is_ok on <var_1:IndexedIterator[Array[Object]]>*/
}
if (var2){
} else {
goto BREAK_label;
}
{
var3 = ((val*(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1); /* item on <var_1:IndexedIterator[Array[Object]]>*/
}
var_i = var3;
{
csv___csv__CsvWriter___write_line(self, var_i); /* Direct call csv$CsvWriter$write_line on <self:CsvWriter>*/
}
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1); /* next on <var_1:IndexedIterator[Array[Object]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1); /* finish on <var_1:IndexedIterator[Array[Object]]>*/
}
RET_LABEL:;
}
/* method csv$CsvWriter$write_line for (self: CsvWriter, Array[Object]) */
void csv___csv__CsvWriter___write_line(val* self, val* p0) {
val* var_line /* var line: Array[Object] */;
val* var /* : Writer */;
val* var2 /* : Writer */;
val* var_os /* var os: Writer */;
uint32_t var3 /* : Char */;
uint32_t var5 /* : Char */;
uint32_t var_esc /* var esc: Char */;
uint32_t var6 /* : Char */;
uint32_t var8 /* : Char */;
uint32_t var_sep /* var sep: Char */;
val* var9 /* : String */;
val* var11 /* : String */;
val* var_eol /* var eol: String */;
long var_i /* var i: Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
long var_ /* var : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var27 /* : String */;
val* var28 /* : String */;
long var29 /* : Int */;
val* var30 /* : nullable Object */;
val* var31 /* : String */;
val* var32 /* : String */;
var_line = p0;
{
{ /* Inline csv$CsvWriter$ostream (self) on <self:CsvWriter> */
var2 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 186);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_os = var;
{
{ /* Inline csv$CsvStream$delimiter (self) on <self:CsvWriter> */
var5 = self->attrs[COLOR_csv__CsvStream___delimiter].c; /* _delimiter on <self:CsvWriter> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_esc = var3;
{
{ /* Inline csv$CsvStream$separator (self) on <self:CsvWriter> */
var8 = self->attrs[COLOR_csv__CsvStream___separator].c; /* _separator on <self:CsvWriter> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_sep = var6;
{
{ /* Inline csv$CsvStream$eol (self) on <self:CsvWriter> */
var11 = self->attrs[COLOR_csv__CsvStream___eol].val; /* _eol on <self:CsvWriter> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _eol");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 112);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_eol = var9;
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_line) on <var_line:Array[Object]> */
var14 = var_line->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_line:Array[Object]> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var12 - 1l;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_ = var15;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var21 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_i < var_;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
} else {
goto BREAK_label;
}
{
var26 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_line, var_i);
}
{
var27 = ((val*(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var26); /* to_s on <var26:nullable Object(Object)>*/
}
{
var28 = csv___core__Text___escape_to_csv(var27, var_sep, var_esc, var_eol);
}
{
core___core__FileWriter___core__stream__Writer__write(var_os, var28); /* Direct call file$FileWriter$write on <var_os:Writer>*/
}
{
core___core__Writer___write_char(var_os, var_sep); /* Direct call stream$Writer$write_char on <var_os:Writer>*/
}
{
var29 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var29;
}
BREAK_label: (void)0;
{
var30 = core___core__SequenceRead___last(var_line);
}
{
var31 = ((val*(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var30); /* to_s on <var30:nullable Object(Object)>*/
}
{
var32 = csv___core__Text___escape_to_csv(var31, var_sep, var_esc, var_eol);
}
{
core___core__FileWriter___core__stream__Writer__write(var_os, var32); /* Direct call file$FileWriter$write on <var_os:Writer>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var_os, var_eol); /* Direct call file$FileWriter$write on <var_os:Writer>*/
}
RET_LABEL:;
}
/* method csv$CsvWriter$init for (self: CsvWriter) */
void csv___csv__CsvWriter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_csv___csv__CsvWriter___core__kernel__Object__init]))(self); /* init on <self:CsvWriter>*/
}
RET_LABEL:;
}
