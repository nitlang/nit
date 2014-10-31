#include "stream.sep.0.h"
/* method stream#IStream#read_line for (self: IStream): String */
val* stream__IStream__read_line(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var4 /* : String */;
{
var1 = stream__BufferedIStream__eof(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 53);
show_backtrace(1);
}
var3 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:FlatBuffer>*/;
}
var_s = var3;
{
stream__BufferedIStream__append_line_to(self, var_s); /* Direct call stream#BufferedIStream#append_line_to on <self:IStream>*/
}
{
var4 = string__FlatBuffer__to_s(var_s);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#IStream#read_line for (self: Object): String */
val* VIRTUAL_stream__IStream__read_line(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = stream__IStream__read_line(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Text#write_to for (self: Text, OStream) */
void stream__Text__write_to(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
var_stream = p0;
{
file__OFStream__write(var_stream, self); /* Direct call file#OFStream#write on <var_stream:OStream>*/
}
RET_LABEL:;
}
/* method stream#Text#write_to for (self: Object, OStream) */
void VIRTUAL_stream__Text__write_to(val* self, val* p0) {
stream__Text__write_to(self, p0); /* Direct call stream#Text#write_to on <self:Object(Text)>*/
RET_LABEL:;
}
/* method stream#BufferedIStream#read for (self: BufferedIStream, Int): String */
val* stream__BufferedIStream__read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : nullable FlatBuffer */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : String */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
val* var22 /* : nullable FlatBuffer */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var_from /* var from: Int */;
val* var34 /* : nullable FlatBuffer */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : nullable FlatBuffer */;
val* var39 /* : Text */;
val* var40 /* : String */;
val* var_ /* var : BufferedIStream */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
val* var49 /* : nullable FlatBuffer */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : FlatBuffer */;
val* var59 /* : String */;
var_i = p0;
var1 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 180);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var1) on <var1:nullable FlatBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_string__FlatText___length].l; /* _length on <var1:nullable FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#== (var2,var5) on <var2:Int> */
var9 = var2 == var5;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var10 = stream__BufferedIStream__eof(self);
}
var11 = !var10;
if (var11){
{
file__IFStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:BufferedIStream>*/
}
{
var12 = stream__BufferedIStream__read(self, var_i);
}
var = var12;
goto RET_LABEL;
} else {
}
if (varonce) {
var13 = varonce;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var = var13;
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#+ (var17,var_i) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var20 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var21 = var17 + var_i;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var22 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 187);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var22) on <var22:nullable FlatBuffer> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var25 = var22->attrs[COLOR_string__FlatText___length].l; /* _length on <var22:nullable FlatBuffer> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var18,var23) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var28 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var32 = var18 >= var23;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var33 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_from = var33;
var34 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 189);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var34) on <var34:nullable FlatBuffer> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var37 = var34->attrs[COLOR_string__FlatText___length].l; /* _length on <var34:nullable FlatBuffer> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var35; /* _buffer_pos on <self:BufferedIStream> */
var38 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 190);
show_backtrace(1);
} else {
var39 = string__Text__substring_from(var38, var_from);
}
{
var40 = string__FlatBuffer__to_s(var39);
}
var = var40;
goto RET_LABEL;
} else {
}
var_ = self;
var41 = var_->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <var_:BufferedIStream> */
{
{ /* Inline kernel#Int#+ (var41,var_i) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var44 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var48 = var41 + var_i;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var42; /* _buffer_pos on <var_:BufferedIStream> */
var49 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
var50 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#- (var50,var_i) on <var50:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var53 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var57 = var50 - var_i;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var49 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 193);
show_backtrace(1);
} else {
var58 = string__FlatBuffer__substring(var49, var51, var_i);
}
{
var59 = string__FlatBuffer__to_s(var58);
}
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#read for (self: Object, Int): String */
val* VIRTUAL_stream__BufferedIStream__read(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = stream__BufferedIStream__read(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#read_all for (self: BufferedIStream): String */
val* stream__BufferedIStream__read_all(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_j /* var j: Int */;
val* var5 /* : nullable FlatBuffer */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_k /* var k: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : nullable FlatBuffer */;
char var14 /* : Char */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
val* var24 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
var_s = var1;
for(;;) {
{
var2 = stream__BufferedIStream__eof(self);
}
var3 = !var2;
if (var3){
var4 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var4;
var5 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 201);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var5) on <var5:nullable FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var8 = var5->attrs[COLOR_string__FlatText___length].l; /* _length on <var5:nullable FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_k = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_k) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var11 = 1; /* easy <var_k:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var12 = var_j < var_k;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 203);
show_backtrace(1);
} else {
var14 = string__FlatBuffer___91d_93d(var13, var_j);
}
{
string__FlatBuffer__add(var_s, var14); /* Direct call string#FlatBuffer#add on <var_s:FlatBuffer>*/
}
var15 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var15) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var22 = var_j + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_j = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var_j; /* _buffer_pos on <self:BufferedIStream> */
{
file__IFStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:BufferedIStream>*/
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
var24 = string__FlatBuffer__to_s(var_s);
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#read_all for (self: Object): String */
val* VIRTUAL_stream__BufferedIStream__read_all(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = stream__BufferedIStream__read_all(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#append_line_to for (self: BufferedIStream, Buffer) */
void stream__BufferedIStream__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
long var /* : Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatBuffer */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable FlatBuffer */;
val* var11 /* : Sequence[Char] */;
val* var13 /* : Sequence[Char] */;
val* var14 /* : nullable Object */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
char var20 /* : Char */;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
long var_j /* var j: Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
val* var64 /* : nullable FlatBuffer */;
val* var65 /* : Sequence[Char] */;
val* var67 /* : Sequence[Char] */;
val* var68 /* : nullable Object */;
char var69 /* : Char */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
val* var79 /* : nullable FlatBuffer */;
long var80 /* : Int */;
long var82 /* : Int */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
var_s = p0;
for(;;) {
var = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_i = var;
for(;;) {
var2 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 217);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var2) on <var2:nullable FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var5 = var2->attrs[COLOR_string__FlatText___length].l; /* _length on <var2:nullable FlatBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var8 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var9 = var_i < var3;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
var10 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 217);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#chars (var10) on <var10:nullable FlatBuffer> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var13 = var10->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var10:nullable FlatBuffer> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:Sequence[Char]>*/;
}
var15 = '\n';
{
{ /* Inline kernel#Char#!= (var14,var15) on <var14:nullable Object(Char)> */
var19 = (var14 != NULL) && (var14->class == &class_kernel__Char);
if (var19) {
var20 = ((struct instance_kernel__Char*)var14)->value; /* autounbox from nullable Object to Char */;
var19 = (var20 == var15);
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var1 = var16;
} else {
var1 = var_;
}
if (var1){
var22 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var29 = var_i + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var30 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#> (var_i,var30) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var37 = var_i > var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Buffer> */
var40 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Buffer> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var38,var_i) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var43 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var47 = var38 + var_i;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var48 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#- (var41,var48) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var55 = var41 - var48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
string__FlatBuffer__enlarge(var_s, var49); /* Direct call string#FlatBuffer#enlarge on <var_s:Buffer>*/
}
var56 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var56;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var59 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var63 = var_j < var_i;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
var64 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var64 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 227);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#chars (var64) on <var64:nullable FlatBuffer> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var67 = var64->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var64:nullable FlatBuffer> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = ((val* (*)(val*, long))(var65->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var65, var_j) /* [] on <var65:Sequence[Char]>*/;
}
{
var69 = ((struct instance_kernel__Char*)var68)->value; /* autounbox from nullable Object to Char */;
string__FlatBuffer__add(var_s, var69); /* Direct call string#FlatBuffer#add on <var_s:Buffer>*/
}
var70 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var70) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var77 = var_j + var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_j = var71;
} else {
goto BREAK_label78;
}
}
BREAK_label78: (void)0;
} else {
}
var79 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var79 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 232);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var79) on <var79:nullable FlatBuffer> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var82 = var79->attrs[COLOR_string__FlatText___length].l; /* _length on <var79:nullable FlatBuffer> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var80) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var85 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var89 = var_i < var80;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
var90 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var90) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var90:Int> isa OTHER */
/* <var90:Int> isa OTHER */
var93 = 1; /* easy <var90:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var97 = var_i + var90;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var91; /* _buffer_pos on <self:BufferedIStream> */
goto RET_LABEL;
} else {
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline file#IFStream#end_reached (self) on <self:BufferedIStream> */
var100 = self->attrs[COLOR_file__IFStream___end_reached].s; /* _end_reached on <self:BufferedIStream> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98){
goto RET_LABEL;
} else {
{
file__IFStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:BufferedIStream>*/
}
}
}
}
RET_LABEL:;
}
/* method stream#BufferedIStream#append_line_to for (self: Object, Buffer) */
void VIRTUAL_stream__BufferedIStream__append_line_to(val* self, val* p0) {
stream__BufferedIStream__append_line_to(self, p0); /* Direct call stream#BufferedIStream#append_line_to on <self:Object(BufferedIStream)>*/
RET_LABEL:;
}
/* method stream#BufferedIStream#eof for (self: BufferedIStream): Bool */
short int stream__BufferedIStream__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
val* var3 /* : nullable FlatBuffer */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
var2 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var3 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/stream.nit", 248);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var3) on <var3:nullable FlatBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
show_backtrace(1);
}
var6 = var3->attrs[COLOR_string__FlatText___length].l; /* _length on <var3:nullable FlatBuffer> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var2,var4) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var10 = var2 >= var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
{ /* Inline file#IFStream#end_reached (self) on <self:BufferedIStream> */
var13 = self->attrs[COLOR_file__IFStream___end_reached].s; /* _end_reached on <self:BufferedIStream> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#eof for (self: Object): Bool */
short int VIRTUAL_stream__BufferedIStream__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__BufferedIStream__eof(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#prepare_buffer for (self: BufferedIStream, Int) */
void stream__BufferedIStream__prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
val* var /* : FlatBuffer */;
long var1 /* : Int */;
var_capacity = p0;
var = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__with_capacity(var, var_capacity); /* Direct call string#FlatBuffer#with_capacity on <var:FlatBuffer>*/
}
self->attrs[COLOR_stream__BufferedIStream___buffer].val = var; /* _buffer on <self:BufferedIStream> */
var1 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var1; /* _buffer_pos on <self:BufferedIStream> */
RET_LABEL:;
}
/* method stream#BufferedIStream#prepare_buffer for (self: Object, Int) */
void VIRTUAL_stream__BufferedIStream__prepare_buffer(val* self, long p0) {
stream__BufferedIStream__prepare_buffer(self, p0); /* Direct call stream#BufferedIStream#prepare_buffer on <self:Object(BufferedIStream)>*/
RET_LABEL:;
}
