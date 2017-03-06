#include "core__stream.sep.0.h"
/* method stream$Stream$last_error for (self: Stream): nullable IOError */
val* core___core__Stream___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:Stream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$Stream$last_error= for (self: Stream, nullable IOError) */
void core___core__Stream___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Stream___last_error].val = p0; /* _last_error on <self:Stream> */
RET_LABEL:;
}
/* method stream$Reader$read_line for (self: Reader): String */
val* core___core__Reader___read_line(val* self) {
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
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var27 /* : String */;
val* var28 /* : Text */;
{
{ /* Inline stream$Stream$last_error (self) on <self:Reader> */
var3 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:Reader> */
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
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
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
var12 = (val*)(0l<<2|1);
var13 = (val*)(0l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
var = var9;
goto RET_LABEL;
} else {
}
{
var16 = core___core__BufferedReader___Reader__eof(self);
}
if (var16){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "";
var21 = (val*)(0l<<2|1);
var22 = (val*)(0l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
var = var18;
goto RET_LABEL;
} else {
}
var25 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var25) on <var25:FlatBuffer> */
{
((void(*)(val* self))(var25->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var25); /* init on <var25:FlatBuffer>*/
}
RET_LABEL26:(void)0;
}
}
var_s = var25;
{
core___core__BufferedReader___Reader__append_line_to(self, var_s); /* Direct call stream$BufferedReader$append_line_to on <self:Reader>*/
}
{
var27 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_s);
}
{
var28 = core___core__Text___chomp(var27);
}
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_all for (self: Reader): String */
val* core___core__Reader___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var_s /* var s: Bytes */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_slen /* var slen: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var_rets /* var rets: String */;
long var_pos /* var pos: Int */;
char* var23 /* : CString */;
char* var25 /* : CString */;
val* var26 /* : FlatString */;
val* var_str /* var str: FlatString */;
long var27 /* : Int */;
long var29 /* : Int */;
char* var30 /* : CString */;
char* var32 /* : CString */;
char* var_sits /* var sits: CString */;
long var_remsp /* var remsp: Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var36 /* : Bool */;
long var_chunksz /* var chunksz: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var44 /* : FlatString */;
val* var45 /* : FlatString */;
val* var46 /* : FlatString */;
val* var47 /* : Text */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
long var_st /* var st: Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var_byte_length /* var byte_length: Int */;
static val* varoncenew70;
static int varoncenew70_guard;
val* var71 /* : FlatString */;
val* var72 /* : FlatString */;
val* var73 /* : FlatString */;
val* var74 /* : Text */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
val* var85 /* : String */;
{
var1 = core___core__BufferedReader___Reader__read_all_bytes(self);
}
var_s = var1;
{
{ /* Inline bytes$Bytes$length (var_s) on <var_s:Bytes> */
var4 = var_s->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_s:Bytes> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_slen = var2;
{
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var7 = var_slen == 0l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "";
var11 = (val*)(0l<<2|1);
var12 = (val*)(0l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "";
var19 = (val*)(0l<<2|1);
var20 = (val*)(0l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
var_rets = var16;
var_pos = 0l;
{
{ /* Inline bytes$Bytes$items (var_s) on <var_s:Bytes> */
var25 = var_s->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_s:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = core__flat___CString___clean_utf8(var23, var_slen);
}
var_str = var26;
{
{ /* Inline abstract_text$FlatText$byte_length (var_str) on <var_str:FlatString> */
var29 = var_str->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_str:FlatString> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_slen = var27;
{
{ /* Inline abstract_text$FlatText$items (var_str) on <var_str:FlatString> */
var32 = var_str->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_str:FlatString> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_sits = var30;
var_remsp = var_slen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_pos,var_slen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var35 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var36 = var_pos < var_slen;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var_chunksz = 129l;
{
{ /* Inline kernel$Int$> (var_chunksz,var_remsp) on <var_chunksz:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var39 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var43 = var_chunksz > var_remsp;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (likely(varoncenew_guard)) {
var44 = varoncenew;
} else {
var45 = NEW_core__FlatString(&type_core__FlatString);
var44 = var45;
varoncenew = var44;
varoncenew_guard = 1;
}
{
var46 = core___core__FlatString___with_infos(var44, var_sits, var_remsp, var_pos);
}
{
var47 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__Text___43d]))(var_rets, var46); /* + on <var_rets:String>*/
}
var_rets = var47;
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,var_chunksz) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_chunksz:Int> isa OTHER */
/* <var_chunksz:Int> isa OTHER */
var50 = 1; /* easy <var_chunksz:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_pos + var_chunksz;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var48,1l) on <var48:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var61 = var48 - 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var62 = core___core__CString___find_beginning_of_char_at(var_sits, var55);
}
var_st = var62;
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var65 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var69 = var_st - var_pos;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_byte_length = var63;
if (likely(varoncenew70_guard)) {
var71 = varoncenew70;
} else {
var72 = NEW_core__FlatString(&type_core__FlatString);
var71 = var72;
varoncenew70 = var71;
varoncenew70_guard = 1;
}
{
var73 = core___core__FlatString___with_infos(var71, var_sits, var_byte_length, var_pos);
}
{
var74 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__Text___43d]))(var_rets, var73); /* + on <var_rets:String>*/
}
var_rets = var74;
var_pos = var_st;
{
{ /* Inline kernel$Int$- (var_remsp,var_byte_length) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <var_byte_length:Int> isa OTHER */
/* <var_byte_length:Int> isa OTHER */
var77 = 1; /* easy <var_byte_length:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var81 = var_remsp - var_byte_length;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_remsp = var75;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_rets:String> isa Concat */
cltype83 = type_core__ropes__Concat.color;
idtype84 = type_core__ropes__Concat.id;
if(cltype83 >= var_rets->type->table_size) {
var82 = 0;
} else {
var82 = var_rets->type->type_table[cltype83] == idtype84;
}
if (var82){
{
var85 = core__ropes___core__ropes__Concat___balance(var_rets);
}
var = var85;
goto RET_LABEL;
} else {
}
var = var_rets;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Writer$write_char for (self: Writer, Char) */
void core___core__Writer___write_char(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
val* var /* : String */;
var_c = p0;
{
var = core__abstract_text___Char___Object__to_s(var_c);
}
{
core___core__FileWriter___core__stream__Writer__write(self, var); /* Direct call file$FileWriter$write on <self:Writer>*/
}
RET_LABEL:;
}
/* method stream$Bytes$write_to for (self: Bytes, Writer) */
void core__stream___Bytes___Writable__write_to(val* self, val* p0) {
val* var_s /* var s: Writer */;
var_s = p0;
{
core___core__FileWriter___core__stream__Writer__write_bytes(var_s, self); /* Direct call file$FileWriter$write_bytes on <var_s:Writer>*/
}
RET_LABEL:;
}
/* method stream$Text$write_to for (self: Text, Writer) */
void core__stream___Text___Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
var_stream = p0;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, self); /* Direct call file$FileWriter$write on <var_stream:Writer>*/
}
RET_LABEL:;
}
/* method stream$BufferedReader$buffer_reset for (self: BufferedReader) */
void core___core__BufferedReader___buffer_reset(val* self) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$read_bytes for (self: BufferedReader, Int): Bytes */
val* core___core__BufferedReader___Reader__read_bytes(val* self, long p0) {
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
{ /* Inline stream$Stream$last_error (self) on <self:BufferedReader> */
var3 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:BufferedReader> */
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
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___empty(var9); /* Direct call bytes$Bytes$empty on <var9:Bytes>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___with_capacity(var10, var_i); /* Direct call bytes$Bytes$with_capacity on <var10:Bytes>*/
}
var_buf = var10;
{
var11 = core___core__BufferedReader___read_intern(self, var_i, var_buf);
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_intern for (self: BufferedReader, Int, Bytes): Int */
long core___core__BufferedReader___read_intern(val* self, long p0, val* p1) {
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
char* var23 /* : CString */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_readln /* var readln: Int */;
char* var33 /* : CString */;
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
var1 = core___core__BufferedReader___Reader__eof(self);
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_p = var2;
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var3,var_p) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var6 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
{ /* Inline kernel$Int$>= (var_bufsp,var_i) on <var_bufsp:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var10 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
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
var15 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel$Int$+ (var15,var_i) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var15 + var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var16; /* _buffer_pos on <var_:BufferedReader> */
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
core___core__Bytes___append_ns_from(var_buf, var23, var_i, var_p); /* Direct call bytes$Bytes$append_ns_from on <var_buf:Bytes>*/
}
var = var_i;
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var24; /* _buffer_pos on <self:BufferedReader> */
var25 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var25,var_p) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var28 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var25 - var_p;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_readln = var26;
var33 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
core___core__Bytes___append_ns_from(var_buf, var33, var_readln, var_p); /* Direct call bytes$Bytes$append_ns_from on <var_buf:Bytes>*/
}
{
{ /* Inline kernel$Int$- (var_i,var_readln) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var36 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_i - var_readln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = core___core__BufferedReader___read_intern(self, var34, var_buf);
}
var_rd = var41;
{
{ /* Inline kernel$Int$+ (var_rd,var_readln) on <var_rd:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var44 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
/* method stream$BufferedReader$read_all_bytes for (self: BufferedReader): Bytes */
val* core___core__BufferedReader___Reader__read_all_bytes(val* self) {
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
char* var11 /* : CString */;
char* var_b /* var b: CString */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_j /* var j: Int */;
long var15 /* : Int */;
long var_k /* var k: Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var_rd_sz /* var rd_sz: Int */;
{
{ /* Inline stream$Stream$last_error (self) on <self:BufferedReader> */
var3 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:BufferedReader> */
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
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable IOError> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable IOError(IOError)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var9 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___empty(var9); /* Direct call bytes$Bytes$empty on <var9:Bytes>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___with_capacity(var10, 10l); /* Direct call bytes$Bytes$with_capacity on <var10:Bytes>*/
}
var_s = var10;
var11 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var_b = var11;
for(;;) {
{
var12 = core___core__BufferedReader___Reader__eof(self);
}
var13 = !var12;
if (var13){
var14 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var14;
var15 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var_k = var15;
{
{ /* Inline kernel$Int$- (var_k,var_j) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var18 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var19 = var_k - var_j;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_rd_sz = var16;
{
core___core__Bytes___append_ns_from(var_s, var_b, var_rd_sz, var_j); /* Direct call bytes$Bytes$append_ns_from on <var_s:Bytes>*/
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_k; /* _buffer_pos on <self:BufferedReader> */
{
core___core__FileReader___core__stream__BufferedReader__fill_buffer(self); /* Direct call file$FileReader$fill_buffer on <self:BufferedReader>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$append_line_to for (self: BufferedReader, Buffer) */
void core___core__BufferedReader___Reader__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : Bytes */;
val* var_lb /* var lb: Bytes */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
char* var8 /* : CString */;
unsigned char var9 /* : Byte */;
unsigned char var11 /* : Byte */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
char* var31 /* : CString */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
long var55 /* : Int */;
long var_j /* var j: Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
char* var63 /* : CString */;
unsigned char var64 /* : Byte */;
unsigned char var66 /* : Byte */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : String */;
short int var79 /* : Bool */;
val* var80 /* : String */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : String */;
var_s = p0;
var = NEW_core__Bytes(&type_core__Bytes);
{
core___core__Bytes___with_capacity(var, 10l); /* Direct call bytes$Bytes$with_capacity on <var:Bytes>*/
}
var_lb = var;
for(;;) {
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_i = var1;
for(;;) {
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var8 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var8,var_i) on <var8:CString> */
var11 = (unsigned char)((int)var8[var_i]);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var9,((unsigned char)0x0a)) on <var9:Byte> */
var14 = var9 == ((unsigned char)0x0a);
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_i + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var_i,var23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_i < var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var31,var_i) on <var31:CString> */
var34 = (unsigned char)((int)var31[var_i]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var32,((unsigned char)0x0a)) on <var32:Byte> */
var37 = var32 == ((unsigned char)0x0a);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (unlikely(!var35)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 586);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
var45 = (val*)((long)(1)<<2|3);
var_eol = var45;
} else {
var46 = (val*)((long)(0)<<2|3);
var_eol = var46;
}
var47 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel$Int$> (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var54 = var_i > var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
var55 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var55;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var58 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var_j < var_i;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
var63 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var63,var_j) on <var63:CString> */
var66 = (unsigned char)((int)var63[var_j]);
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
core___core__Bytes___core__abstract_collection__SimpleCollection__add(var_lb, var64); /* Direct call bytes$Bytes$add on <var_lb:Bytes>*/
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_j + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_j = var67;
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedReader> */
} else {
{
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var77 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (unlikely(!var75)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 603);
fatal_exit(1);
}
{
var78 = core___core__Bytes___core__abstract_text__Object__to_s(var_lb);
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var78); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
}
var79 = (short int)((long)(var_eol)>>2);
if (var79){
{
var80 = core___core__Bytes___core__abstract_text__Object__to_s(var_lb);
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var80); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var83 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (var81){
{
var84 = core___core__Bytes___core__abstract_text__Object__to_s(var_lb);
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var84); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
}
{
core___core__FileReader___core__stream__BufferedReader__fill_buffer(self); /* Direct call file$FileReader$fill_buffer on <self:BufferedReader>*/
}
}
}
RET_LABEL:;
}
/* method stream$BufferedReader$eof for (self: BufferedReader): Bool */
short int core___core__BufferedReader___Reader__eof(val* self) {
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
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var9 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
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
core___core__FileReader___core__stream__BufferedReader__fill_buffer(self); /* Direct call file$FileReader$fill_buffer on <self:BufferedReader>*/
}
var11 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var12 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$>= (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
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
{ /* Inline file$FileReader$end_reached (self) on <self:BufferedReader> */
var22 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:BufferedReader> */
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
/* method stream$BufferedReader$prepare_buffer for (self: BufferedReader, Int) */
void core___core__BufferedReader___prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
var_capacity = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var,var_capacity) on <var:CString> */
var4 = (char*)nit_alloc(var_capacity);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var2; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = var_capacity; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}
