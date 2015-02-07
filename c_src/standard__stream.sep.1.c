#include "standard__stream.sep.0.h"
/* method stream#IOS#last_error for (self: IOS): nullable IOError */
val* standard___standard__IOS___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:IOS> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#IOS#last_error= for (self: IOS, nullable IOError) */
void standard___standard__IOS___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_standard__stream__IOS___last_error].val = p0; /* _last_error on <self:IOS> */
RET_LABEL:;
}
/* method stream#IStream#read_line for (self: IStream): String */
val* standard___standard__IStream___read_line(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var22 /* : String */;
val* var23 /* : Text */;
{
{ /* Inline stream#IOS#last_error (self) on <self:IStream> */
var3 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:IStream> */
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
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable IOError> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable IOError(IOError)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (varonce) {
var10 = varonce;
} else {
var11 = "";
var12 = 0;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var = var10;
goto RET_LABEL;
} else {
}
{
var14 = standard___standard__BufferedIStream___IStream__eof(self);
}
if (var14){
if (varonce15) {
var16 = varonce15;
} else {
var17 = "";
var18 = 0;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var = var16;
goto RET_LABEL;
} else {
}
var20 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var20) on <var20:FlatBuffer> */
{
((void (*)(val* self))(var20->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var20) /* init on <var20:FlatBuffer>*/;
}
RET_LABEL21:(void)0;
}
}
var_s = var20;
{
standard___standard__BufferedIStream___IStream__append_line_to(self, var_s); /* Direct call stream#BufferedIStream#append_line_to on <self:IStream>*/
}
{
var22 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
{
var23 = standard___standard__Text___chomp(var22);
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Text#write_to for (self: Text, OStream) */
void standard__stream___Text___Streamable__write_to(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
var_stream = p0;
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, self); /* Direct call file#OFStream#write on <var_stream:OStream>*/
}
RET_LABEL:;
}
/* method stream#BufferedIStream#read for (self: BufferedIStream, Int): String */
val* standard___standard__BufferedIStream___IStream__read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : nullable FlatBuffer */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var34 /* : Int */;
val* var35 /* : nullable FlatBuffer */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var_from /* var from: Int */;
val* var47 /* : nullable FlatBuffer */;
long var48 /* : Int */;
long var50 /* : Int */;
val* var51 /* : nullable FlatBuffer */;
val* var52 /* : Text */;
val* var53 /* : String */;
val* var_ /* var : BufferedIStream */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var62 /* : nullable FlatBuffer */;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
val* var71 /* : Buffer */;
val* var72 /* : String */;
var_i = p0;
{
{ /* Inline stream#IOS#last_error (self) on <self:BufferedIStream> */
var3 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:BufferedIStream> */
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
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable IOError> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable IOError(IOError)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (varonce) {
var10 = varonce;
} else {
var11 = "";
var12 = 0;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var = var10;
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 338);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var14) on <var14:nullable FlatBuffer> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var17 = var14->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var14:nullable FlatBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#== (var15,var18) on <var15:Int> */
var21 = var15 == var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
var22 = standard___standard__BufferedIStream___IStream__eof(self);
}
var23 = !var22;
if (var23){
{
var24 = standard___standard__BufferedIStream___IStream__read(self, var_i);
}
var = var24;
goto RET_LABEL;
} else {
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "";
var28 = 0;
var29 = standard___standard__NativeString___to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var = var26;
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#+ (var30,var_i) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var33 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var34 = var30 + var_i;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var35 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 344);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var35) on <var35:nullable FlatBuffer> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var38 = var35->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var35:nullable FlatBuffer> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var31,var36) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var41 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var45 = var31 >= var36;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var46 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_from = var46;
var47 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 346);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var47) on <var47:nullable FlatBuffer> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var50 = var47->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var47:nullable FlatBuffer> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var48; /* _buffer_pos on <self:BufferedIStream> */
var51 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var51 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 347);
show_backtrace(1);
} else {
var52 = standard___standard__Text___substring_from(var51, var_from);
}
{
var53 = standard___standard__FlatBuffer___Object__to_s(var52);
}
var = var53;
goto RET_LABEL;
} else {
}
var_ = self;
var54 = var_->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <var_:BufferedIStream> */
{
{ /* Inline kernel#Int#+ (var54,var_i) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var57 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var61 = var54 + var_i;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var55; /* _buffer_pos on <var_:BufferedIStream> */
var62 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
var63 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#- (var63,var_i) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var66 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var70 = var63 - var_i;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var62 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 350);
show_backtrace(1);
} else {
var71 = standard___standard__FlatBuffer___Text__substring(var62, var64, var_i);
}
{
var72 = standard___standard__FlatBuffer___Object__to_s(var71);
}
var = var72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#read_all for (self: BufferedIStream): String */
val* standard___standard__BufferedIStream___IStream__read_all(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
val* var3 /* : nullable IOError */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var_j /* var j: Int */;
val* var19 /* : nullable FlatBuffer */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_k /* var k: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
val* var27 /* : nullable FlatBuffer */;
char var28 /* : Char */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
val* var38 /* : String */;
{
{ /* Inline stream#IOS#last_error (self) on <self:BufferedIStream> */
var3 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:BufferedIStream> */
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
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable IOError> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable IOError(IOError)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (varonce) {
var10 = varonce;
} else {
var11 = "";
var12 = 0;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var = var10;
goto RET_LABEL;
} else {
}
var14 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var14) on <var14:FlatBuffer> */
{
((void (*)(val* self))(var14->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var14) /* init on <var14:FlatBuffer>*/;
}
RET_LABEL15:(void)0;
}
}
var_s = var14;
for(;;) {
{
var16 = standard___standard__BufferedIStream___IStream__eof(self);
}
var17 = !var16;
if (var17){
var18 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var18;
var19 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 359);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var19) on <var19:nullable FlatBuffer> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var22 = var19->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var19:nullable FlatBuffer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_k = var20;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_k) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var25 = 1; /* easy <var_k:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var26 = var_j < var_k;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var27 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 361);
show_backtrace(1);
} else {
var28 = standard___standard__FlatBuffer___Text___91d_93d(var27, var_j);
}
{
standard___standard__FlatBuffer___Buffer__add(var_s, var28); /* Direct call string#FlatBuffer#add on <var_s:FlatBuffer>*/
}
var29 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var29) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var36 = var_j + var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_j = var30;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var_j; /* _buffer_pos on <self:BufferedIStream> */
{
standard___standard__IFStream___standard__stream__BufferedIStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:BufferedIStream>*/
}
} else {
goto BREAK_label37;
}
}
BREAK_label37: (void)0;
{
var38 = standard___standard__FlatBuffer___Object__to_s(var_s);
}
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#append_line_to for (self: BufferedIStream, Buffer) */
void standard___standard__BufferedIStream___IStream__append_line_to(val* self, val* p0) {
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
short int var18 /* : Bool */;
char var19 /* : Char */;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
val* var29 /* : nullable FlatBuffer */;
long var30 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
val* var40 /* : nullable FlatBuffer */;
val* var41 /* : Sequence[Char] */;
val* var43 /* : Sequence[Char] */;
val* var44 /* : nullable Object */;
char var45 /* : Char */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
char var49 /* : Char */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
long var70 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
long var_j /* var j: Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
short int var95 /* : Bool */;
val* var96 /* : nullable FlatBuffer */;
val* var97 /* : Sequence[Char] */;
val* var99 /* : Sequence[Char] */;
val* var100 /* : nullable Object */;
char var101 /* : Char */;
long var102 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
var_s = p0;
for(;;) {
var = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_i = var;
for(;;) {
var2 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 375);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var2) on <var2:nullable FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var5 = var2->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var2:nullable FlatBuffer> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var10 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 375);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#chars (var10) on <var10:nullable FlatBuffer> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var13 = var10->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var10:nullable FlatBuffer> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val* self, long p0))(var11->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:Sequence[Char]>*/;
}
var15 = '\n';
{
{ /* Inline kernel#Char#!= (var14,var15) on <var14:nullable Object(Char)> */
var18 = (var14 != NULL) && (var14->class == &class_standard__Char);
if (var18) {
var19 = ((struct instance_standard__Char*)var14)->value; /* autounbox from nullable Object to Char */;
var18 = (var19 == var15);
}
var20 = !var18;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var1 = var16;
} else {
var1 = var_;
}
if (var1){
var21 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var21) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var28 = var_i + var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var29 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 378);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var29) on <var29:nullable FlatBuffer> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var32 = var29->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var29:nullable FlatBuffer> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var30) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var35 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var39 = var_i < var30;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var40 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 379);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#chars (var40) on <var40:nullable FlatBuffer> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var43 = var40->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var40:nullable FlatBuffer> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = ((val* (*)(val* self, long p0))(var41->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var41, var_i) /* [] on <var41:Sequence[Char]>*/;
}
var45 = '\n';
{
{ /* Inline kernel#Char#== (var44,var45) on <var44:nullable Object(Char)> */
var48 = (var44 != NULL) && (var44->class == &class_standard__Char);
if (var48) {
var49 = ((struct instance_standard__Char*)var44)->value; /* autounbox from nullable Object to Char */;
var48 = (var49 == var45);
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 379);
show_backtrace(1);
}
var50 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var50) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var57 = var_i + var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_i = var51;
var58 = 1;
var59 = BOX_standard__Bool(var58); /* autobox from Bool to nullable Object */
var_eol = var59;
} else {
var60 = 0;
var61 = BOX_standard__Bool(var60); /* autobox from Bool to nullable Object */
var_eol = var61;
}
var62 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#> (var_i,var62) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var69 = var_i > var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Buffer> */
var72 = var_s->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_s:Buffer> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var70,var_i) on <var70:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var75 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var79 = var70 + var_i;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var80 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{
{ /* Inline kernel#Int#- (var73,var80) on <var73:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var87 = var73 - var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__enlarge(var_s, var81); /* Direct call string#FlatBuffer#enlarge on <var_s:Buffer>*/
}
var88 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var88;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var91 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var95 = var_j < var_i;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
var96 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var96 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 394);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#chars (var96) on <var96:nullable FlatBuffer> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var99 = var96->attrs[COLOR_standard__string__FlatBuffer___chars].val; /* _chars on <var96:nullable FlatBuffer> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1525);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = ((val* (*)(val* self, long p0))(var97->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var97, var_j) /* [] on <var97:Sequence[Char]>*/;
}
{
var101 = ((struct instance_standard__Char*)var100)->value; /* autounbox from nullable Object to Char */;
standard___standard__FlatBuffer___Buffer__add(var_s, var101); /* Direct call string#FlatBuffer#add on <var_s:Buffer>*/
}
var102 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var102) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var102:Int> isa OTHER */
/* <var102:Int> isa OTHER */
var105 = 1; /* easy <var102:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var109 = var_j + var102;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_j = var103;
} else {
goto BREAK_label110;
}
}
BREAK_label110: (void)0;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedIStream> */
} else {
{
{ /* Inline file#IFStream#end_reached (self) on <self:BufferedIStream> */
var113 = self->attrs[COLOR_standard__file__IFStream___end_reached].s; /* _end_reached on <self:BufferedIStream> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(!var111)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 399);
show_backtrace(1);
}
goto RET_LABEL;
}
var114 = ((struct instance_standard__Bool*)var_eol)->value; /* autounbox from nullable Object to Bool */;
if (var114){
goto RET_LABEL;
} else {
{
{ /* Inline file#IFStream#end_reached (self) on <self:BufferedIStream> */
var117 = self->attrs[COLOR_standard__file__IFStream___end_reached].s; /* _end_reached on <self:BufferedIStream> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (var115){
goto RET_LABEL;
} else {
}
{
standard___standard__IFStream___standard__stream__BufferedIStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:BufferedIStream>*/
}
}
}
RET_LABEL:;
}
/* method stream#BufferedIStream#eof for (self: BufferedIStream): Bool */
short int standard___standard__BufferedIStream___IStream__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : nullable FlatBuffer */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
val* var17 /* : nullable FlatBuffer */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
var1 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var2 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 416);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var2) on <var2:nullable FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var5 = var2->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var2:nullable FlatBuffer> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var8 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var9 = var1 < var3;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
{
{ /* Inline file#IFStream#end_reached (self) on <self:BufferedIStream> */
var13 = self->attrs[COLOR_standard__file__IFStream___end_reached].s; /* _end_reached on <self:BufferedIStream> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11){
var14 = 1;
var = var14;
goto RET_LABEL;
} else {
}
{
standard___standard__IFStream___standard__stream__BufferedIStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:BufferedIStream>*/
}
var16 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var17 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__stream, 419);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length (var17) on <var17:nullable FlatBuffer> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var20 = var17->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var17:nullable FlatBuffer> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var16,var18) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var23 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var27 = var16 >= var18;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_ = var21;
if (var21){
{
{ /* Inline file#IFStream#end_reached (self) on <self:BufferedIStream> */
var30 = self->attrs[COLOR_standard__file__IFStream___end_reached].s; /* _end_reached on <self:BufferedIStream> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var15 = var28;
} else {
var15 = var_;
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#prepare_buffer for (self: BufferedIStream, Int) */
void standard___standard__BufferedIStream___prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
val* var /* : FlatBuffer */;
long var1 /* : Int */;
var_capacity = p0;
var = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
standard___standard__FlatBuffer___with_capacity(var, var_capacity); /* Direct call string#FlatBuffer#with_capacity on <var:FlatBuffer>*/
}
self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val = var; /* _buffer on <self:BufferedIStream> */
var1 = 0;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var1; /* _buffer_pos on <self:BufferedIStream> */
RET_LABEL:;
}
