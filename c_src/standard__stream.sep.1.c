#include "standard__stream.sep.0.h"
/* method stream#Stream#last_error for (self: Stream): nullable IOError */
val* standard___standard__Stream___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:Stream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Stream#last_error= for (self: Stream, nullable IOError) */
void standard___standard__Stream___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__Stream___last_error].val = p0; /* _last_error on <self:Stream> */
RET_LABEL:;
}
/* method stream#Reader#read for (self: Reader, Int): String */
val* standard___standard__Reader___read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : Bytes */;
val* var2 /* : String */;
var_i = p0;
{
var1 = standard___standard__BufferedReader___Reader__read_bytes(self, var_i);
}
{
var2 = standard___standard__Bytes___standard__string__Object__to_s(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_line for (self: Reader): String */
val* standard___standard__Reader___read_line(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var19 /* : String */;
val* var20 /* : Text */;
{
{ /* Inline stream#Stream#last_error (self) on <self:Reader> */
var3 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:Reader> */
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
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "";
var11 = standard___standard__NativeString___to_s_with_length(var10, 0l);
var9 = var11;
varonce = var9;
}
var = var9;
goto RET_LABEL;
} else {
}
{
var12 = standard___standard__BufferedReader___Reader__eof(self);
}
if (var12){
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "";
var16 = standard___standard__NativeString___to_s_with_length(var15, 0l);
var14 = var16;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
}
var17 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var17) on <var17:FlatBuffer> */
{
((void(*)(val* self))(var17->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var17); /* init on <var17:FlatBuffer>*/
}
RET_LABEL18:(void)0;
}
}
var_s = var17;
{
standard___standard__BufferedReader___Reader__append_line_to(self, var_s); /* Direct call stream#BufferedReader#append_line_to on <self:Reader>*/
}
{
var19 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
{
var20 = standard___standard__Text___chomp(var19);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_all for (self: Reader): String */
val* standard___standard__Reader___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var2 /* : String */;
{
var1 = standard___standard__BufferedReader___Reader__read_all_bytes(self);
}
{
var2 = standard___standard__Bytes___standard__string__Object__to_s(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Text#write_to for (self: Text, Writer) */
void standard__stream___Text___Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
var_stream = p0;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, self); /* Direct call file#FileWriter#write on <var_stream:Writer>*/
}
RET_LABEL:;
}
/* method stream#BufferedReader#buffer_reset for (self: BufferedReader) */
void standard___standard__BufferedReader___buffer_reset(val* self) {
self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#read_bytes for (self: BufferedReader, Int): Bytes */
val* standard___standard__BufferedReader___Reader__read_bytes(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Bytes */;
val* var10 /* : Bytes */;
val* var_buf /* var buf: Bytes */;
long var11 /* : Int */;
var_i = p0;
{
{ /* Inline stream#Stream#last_error (self) on <self:BufferedReader> */
var3 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:BufferedReader> */
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
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = NEW_standard__Bytes(&type_standard__Bytes);
{
standard___standard__Bytes___empty(var9); /* Direct call bytes#Bytes#empty on <var9:Bytes>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var10 = NEW_standard__Bytes(&type_standard__Bytes);
{
standard___standard__Bytes___with_capacity(var10, var_i); /* Direct call bytes#Bytes#with_capacity on <var10:Bytes>*/
}
var_buf = var10;
{
var11 = standard___standard__BufferedReader___read_intern(self, var_i, var_buf);
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_intern for (self: BufferedReader, Int, Bytes): Int */
long standard___standard__BufferedReader___read_intern(val* self, long p0, val* p1) {
long var /* : Int */;
long var_i /* var i: Int */;
val* var_buf /* var buf: Bytes */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var_p /* var p: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_bufsp /* var bufsp: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var_ /* var : BufferedReader */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_readln /* var readln: Int */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
long var_rd /* var rd: Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
var_i = p0;
var_buf = p1;
{
var1 = standard___standard__BufferedReader___Reader__eof(self);
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_p = var2;
var3 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var3,var_p) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var6 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var7 = var3 - var_p;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_bufsp = var4;
{
{ /* Inline kernel#Int#>= (var_bufsp,var_i) on <var_bufsp:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var10 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var14 = var_bufsp >= var_i;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var_ = self;
var15 = var_->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var15,var_i) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var22 = var15 + var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var16; /* _buffer_pos on <var_:BufferedReader> */
var23 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
standard___standard__Bytes___append_ns_from(var_buf, var23, var_i, var_p); /* Direct call bytes#Bytes#append_ns_from on <var_buf:Bytes>*/
}
var = var_i;
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var24; /* _buffer_pos on <self:BufferedReader> */
var25 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var25,var_p) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var28 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var32 = var25 - var_p;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_readln = var26;
var33 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
standard___standard__Bytes___append_ns_from(var_buf, var33, var_readln, var_p); /* Direct call bytes#Bytes#append_ns_from on <var_buf:Bytes>*/
}
{
{ /* Inline kernel#Int#- (var_i,var_readln) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var36 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var40 = var_i - var_readln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = standard___standard__BufferedReader___read_intern(self, var34, var_buf);
}
var_rd = var41;
{
{ /* Inline kernel#Int#+ (var_rd,var_readln) on <var_rd:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var44 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var48 = var_rd + var_readln;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_all_bytes for (self: BufferedReader): Bytes */
val* standard___standard__BufferedReader___Reader__read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Bytes */;
val* var10 /* : Bytes */;
val* var_s /* var s: Bytes */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var_j /* var j: Int */;
long var14 /* : Int */;
long var_k /* var k: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var18 /* : Bool */;
char* var19 /* : NativeString */;
uint32_t var20 /* : Char */;
uint32_t var22 /* : Char */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
{
{ /* Inline stream#Stream#last_error (self) on <self:BufferedReader> */
var3 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:BufferedReader> */
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
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = NEW_standard__Bytes(&type_standard__Bytes);
{
standard___standard__Bytes___empty(var9); /* Direct call bytes#Bytes#empty on <var9:Bytes>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var10 = NEW_standard__Bytes(&type_standard__Bytes);
{
standard___standard__Bytes___with_capacity(var10, 10l); /* Direct call bytes#Bytes#with_capacity on <var10:Bytes>*/
}
var_s = var10;
for(;;) {
{
var11 = standard___standard__BufferedReader___Reader__eof(self);
}
var12 = !var11;
if (var12){
var13 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var13;
var14 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var_k = var14;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_k) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var17 = 1; /* easy <var_k:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var18 = var_j < var_k;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var19 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline string#NativeString#[] (var19,var_j) on <var19:NativeString> */
var22 = (uint32_t)(unsigned char)var19[var_j];
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Char#ascii (var20) on <var20:Char> */
var25 = (long)var20;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add(var_s, var23); /* Direct call bytes#Bytes#add on <var_s:Bytes>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var32 = var_j + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_j = var26;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var_j; /* _buffer_pos on <self:BufferedReader> */
{
standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer(self); /* Direct call file#FileReader#fill_buffer on <self:BufferedReader>*/
}
} else {
goto BREAK_label33;
}
}
BREAK_label33: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#append_line_to for (self: BufferedReader, Buffer) */
void standard___standard__BufferedReader___Reader__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
long var /* : Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char* var7 /* : NativeString */;
uint32_t var8 /* : Char */;
uint32_t var10 /* : Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
char* var30 /* : NativeString */;
uint32_t var31 /* : Char */;
uint32_t var33 /* : Char */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
val* var45 /* : nullable Object */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
long var_j /* var j: Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
char* var78 /* : NativeString */;
uint32_t var79 /* : Char */;
uint32_t var81 /* : Char */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
var_s = p0;
for(;;) {
var = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_i = var;
for(;;) {
var2 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#< (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var6 = var_i < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline string#NativeString#[] (var7,var_i) on <var7:NativeString> */
var10 = (uint32_t)(unsigned char)var7[var_i];
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Char#!= (var8,'\n') on <var8:Char> */
var13 = var8 == '\n';
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var21 = var_i + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_i = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var22 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#< (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var29 = var_i < var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var30 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline string#NativeString#[] (var30,var_i) on <var30:NativeString> */
var33 = (uint32_t)(unsigned char)var30[var_i];
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Char#== (var31,'\n') on <var31:Char> */
var36 = var31 == '\n';
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 519);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var43 = var_i + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_i = var37;
var44 = (val*)((long)(1)<<2|3);
var_eol = var44;
} else {
var45 = (val*)((long)(0)<<2|3);
var_eol = var45;
}
var46 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#> (var_i,var46) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var53 = var_i > var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
var54 = ((long(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__length]))(var_s); /* length on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#+ (var54,var_i) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var57 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var61 = var54 + var_i;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var62 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var55,var62) on <var55:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var69 = var55 - var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_s->class->vft[COLOR_standard__string__Buffer__enlarge]))(var_s, var63); /* enlarge on <var_s:Buffer>*/
}
var70 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var70;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var73 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var77 = var_j < var_i;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
var78 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline string#NativeString#[] (var78,var_j) on <var78:NativeString> */
var81 = (uint32_t)(unsigned char)var78[var_j];
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
((void(*)(val* self, uint32_t p0))(var_s->class->vft[COLOR_standard__string__Buffer__add]))(var_s, var79); /* add on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var84 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var88 = var_j + 1l;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_j = var82;
} else {
goto BREAK_label89;
}
}
BREAK_label89: (void)0;
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedReader> */
} else {
{
{ /* Inline file#FileReader#end_reached (self) on <self:BufferedReader> */
var92 = self->attrs[COLOR_standard__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (unlikely(!var90)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 539);
fatal_exit(1);
}
goto RET_LABEL;
}
var93 = (short int)((long)(var_eol)>>2);
if (var93){
goto RET_LABEL;
} else {
{
{ /* Inline file#FileReader#end_reached (self) on <self:BufferedReader> */
var96 = self->attrs[COLOR_standard__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94){
goto RET_LABEL;
} else {
}
{
standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer(self); /* Direct call file#FileReader#fill_buffer on <self:BufferedReader>*/
}
}
}
RET_LABEL:;
}
/* method stream#BufferedReader#eof for (self: BufferedReader): Bool */
short int standard___standard__BufferedReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
var1 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var2 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#< (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var6 = var1 < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline file#FileReader#end_reached (self) on <self:BufferedReader> */
var9 = self->attrs[COLOR_standard__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
}
{
standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer(self); /* Direct call file#FileReader#fill_buffer on <self:BufferedReader>*/
}
var11 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var12 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#>= (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var19 = var11 >= var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_ = var13;
if (var13){
{
{ /* Inline file#FileReader#end_reached (self) on <self:BufferedReader> */
var22 = self->attrs[COLOR_standard__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var10 = var20;
} else {
var10 = var_;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#prepare_buffer for (self: BufferedReader, Int) */
void standard___standard__BufferedReader___prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
var_capacity = p0;
var = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var,var_capacity) on <var:NativeString> */
var3 = (char*)nit_alloc(var_capacity);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer].str = var1; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_capacity].l = var_capacity; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}
