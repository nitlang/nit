#include "stream.sep.0.h"
/* method stream#IOS#close for (self: IOS) */
void stream__IOS__close(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "close", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 27);
show_backtrace(1);
RET_LABEL:;
}
/* method stream#IOS#close for (self: Object) */
void VIRTUAL_stream__IOS__close(val* self) {
stream__IOS__close(self);
RET_LABEL:;
}
/* method stream#IStream#read_char for (self: IStream): Int */
long stream__IStream__read_char(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "read_char", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 34);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method stream#IStream#read_char for (self: Object): Int */
long VIRTUAL_stream__IStream__read_char(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__IStream__read_char(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#IStream#read for (self: IStream, Int): String */
val* stream__IStream__read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : Buffer */;
val* var_s /* var s: Buffer */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var_c /* var c: Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
char var19 /* : Char */;
char var21 /* : Char */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var27 /* : String */;
var_i = p0;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var_i) /* with_capacity on <var1:Buffer>*/;
var_s = var1;
for(;;) {
var3 = 0;
{ /* Inline kernel#Int#> (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var7 = var_i > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_ = var4;
if (var4){
var8 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:IStream>*/;
var9 = !var8;
var2 = var9;
} else {
var2 = var_;
}
if (!var2) break;
var10 = ((long (*)(val*))(self->class->vft[COLOR_stream__IStream__read_char]))(self) /* read_char on <self:IStream>*/;
var_c = var10;
var11 = 0;
{ /* Inline kernel#Int#>= (var_c,var11) */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (!var14) {
var_class_name17 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var18 = var_c >= var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
{ /* Inline kernel#Int#ascii (var_c) */
var21 = var_c;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var22 = BOX_kernel__Char(var19); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var22) /* add on <var_s:Buffer>*/;
var23 = 1;
{ /* Inline kernel#Int#- (var_i,var23) */
var26 = var_i - var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_i = var24;
} else {
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var27 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#IStream#read for (self: Object, Int): String */
val* VIRTUAL_stream__IStream__read(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = stream__IStream__read(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#IStream#read_line for (self: IStream): String */
val* stream__IStream__read_line(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var4 /* : String */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:IStream>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 54);
show_backtrace(1);
}
var3 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var3->class->vft[COLOR_string__Buffer__init]))(var3) /* init on <var3:Buffer>*/;
var_s = var3;
((void (*)(val*, val*))(self->class->vft[COLOR_stream__IStream__append_line_to]))(self, var_s) /* append_line_to on <self:IStream>*/;
var4 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
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
/* method stream#IStream#read_all for (self: IStream): String */
val* stream__IStream__read_all(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var_s /* var s: Buffer */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_c /* var c: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
char var10 /* : Char */;
char var12 /* : Char */;
val* var13 /* : nullable Object */;
val* var14 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
var_s = var1;
for(;;) {
var2 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:IStream>*/;
var3 = !var2;
if (!var3) break;
var4 = ((long (*)(val*))(self->class->vft[COLOR_stream__IStream__read_char]))(self) /* read_char on <self:IStream>*/;
var_c = var4;
var5 = 0;
{ /* Inline kernel#Int#>= (var_c,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var9 = var_c >= var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
{ /* Inline kernel#Int#ascii (var_c) */
var12 = var_c;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var13 = BOX_kernel__Char(var10); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var13) /* add on <var_s:Buffer>*/;
} else {
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var14 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#IStream#read_all for (self: Object): String */
val* VIRTUAL_stream__IStream__read_all(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = stream__IStream__read_all(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#IStream#append_line_to for (self: IStream, Buffer) */
void stream__IStream__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
long var /* : Int */;
long var_x /* var x: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
char var9 /* : Char */;
char var11 /* : Char */;
char var_c /* var c: Char */;
val* var12 /* : StringCharView */;
val* var13 /* : nullable Object */;
char var14 /* : Char */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
var_s = p0;
for(;;) {
var = ((long (*)(val*))(self->class->vft[COLOR_stream__IStream__read_char]))(self) /* read_char on <self:IStream>*/;
var_x = var;
var1 = 1;
{ /* Inline kernel#Int#unary - (var1) */
var4 = -var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
{ /* Inline kernel#Int#== (var_x,var2) */
var7 = var_x == var2;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var8 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:IStream>*/;
if (var8){
goto RET_LABEL;
} else {
}
} else {
{ /* Inline kernel#Int#ascii (var_x) */
var11 = var_x;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_c = var9;
var12 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:Buffer>*/;
var13 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__Sequence__push]))(var12, var13) /* push on <var12:StringCharView(BufferCharView)>*/;
var14 = '\n';
{ /* Inline kernel#Char#== (var_c,var14) */
var17 = var_c == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
goto RET_LABEL;
} else {
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method stream#IStream#append_line_to for (self: Object, Buffer) */
void VIRTUAL_stream__IStream__append_line_to(val* self, val* p0) {
stream__IStream__append_line_to(self, p0);
RET_LABEL:;
}
/* method stream#IStream#eof for (self: IStream): Bool */
short int stream__IStream__eof(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "eof", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 86);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method stream#IStream#eof for (self: Object): Bool */
short int VIRTUAL_stream__IStream__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__IStream__eof(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#OStream#write for (self: OStream, String) */
void stream__OStream__write(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "write", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 94);
show_backtrace(1);
RET_LABEL:;
}
/* method stream#OStream#write for (self: Object, String) */
void VIRTUAL_stream__OStream__write(val* self, val* p0) {
stream__OStream__write(self, p0);
RET_LABEL:;
}
/* method stream#OStream#is_writable for (self: OStream): Bool */
short int stream__OStream__is_writable(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "is_writable", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 97);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method stream#OStream#is_writable for (self: Object): Bool */
short int VIRTUAL_stream__OStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__OStream__is_writable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Streamable#write_to for (self: Streamable, OStream) */
void stream__Streamable__write_to(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "write_to", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 106);
show_backtrace(1);
RET_LABEL:;
}
/* method stream#Streamable#write_to for (self: Object, OStream) */
void VIRTUAL_stream__Streamable__write_to(val* self, val* p0) {
stream__Streamable__write_to(self, p0);
RET_LABEL:;
}
/* method stream#String#write_to for (self: String, OStream) */
void stream__String__write_to(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
var_stream = p0;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, self) /* write on <var_stream:OStream>*/;
RET_LABEL:;
}
/* method stream#String#write_to for (self: Object, OStream) */
void VIRTUAL_stream__String__write_to(val* self, val* p0) {
stream__String__write_to(self, p0);
RET_LABEL:;
}
/* method stream#BufferedIStream#read_char for (self: BufferedIStream): Int */
long stream__BufferedIStream__read_char(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
val* var4 /* : nullable Buffer */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
val* var11 /* : nullable Buffer */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
val* var24 /* : nullable Buffer */;
val* var25 /* : StringCharView */;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
char var28 /* : Char */;
char var_c /* var c: Char */;
val* var_ /* var : BufferedIStream */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:BufferedIStream>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 121);
show_backtrace(1);
}
var3 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var4 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 122);
show_backtrace(1);
} else {
var5 = ((long (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__length]))(var4) /* length on <var4:nullable Buffer>*/;
}
{ /* Inline kernel#Int#>= (var3,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var9 = var3 >= var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__fill_buffer]))(self) /* fill_buffer on <self:BufferedIStream>*/;
} else {
}
var10 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var11 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 125);
show_backtrace(1);
} else {
var12 = ((long (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__length]))(var11) /* length on <var11:nullable Buffer>*/;
}
{ /* Inline kernel#Int#>= (var10,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var19 = var10 >= var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var20 = 1;
{ /* Inline kernel#Int#unary - (var20) */
var23 = -var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var = var21;
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 128);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_string__AbstractString__chars]))(var24) /* chars on <var24:nullable Buffer>*/;
}
var26 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var27 = ((val* (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var25, var26) /* [] on <var25:StringCharView(BufferCharView)>*/;
var28 = ((struct instance_kernel__Char*)var27)->value; /* autounbox from nullable Object to Char */;
var_c = var28;
var_ = self;
var29 = var_->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <var_:BufferedIStream> */
var30 = 1;
{ /* Inline kernel#Int#+ (var29,var30) */
var33 = var29 + var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var_->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var31; /* _buffer_pos on <var_:BufferedIStream> */
{ /* Inline kernel#Char#ascii (var_c) */
var36 = (unsigned char)var_c;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#read_char for (self: Object): Int */
long VIRTUAL_stream__BufferedIStream__read_char(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__BufferedIStream__read_char(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#read for (self: BufferedIStream, Int): String */
val* stream__BufferedIStream__read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : Buffer */;
val* var_s /* var s: Buffer */;
long var2 /* : Int */;
long var_j /* var j: Int */;
val* var3 /* : nullable Buffer */;
long var4 /* : Int */;
long var_k /* var k: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
long var19 /* : Int */;
val* var20 /* : nullable Buffer */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
val* var38 /* : nullable Buffer */;
val* var39 /* : StringCharView */;
val* var40 /* : nullable Object */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
val* var50 /* : String */;
var_i = p0;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var_i) /* with_capacity on <var1:Buffer>*/;
var_s = var1;
var2 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var2;
var3 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 137);
show_backtrace(1);
} else {
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:nullable Buffer>*/;
}
var_k = var4;
for(;;) {
var5 = 0;
{ /* Inline kernel#Int#> (var_i,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var9 = var_i > var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (!var6) break;
{ /* Inline kernel#Int#>= (var_j,var_k) */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var12 = 1; /* easy <var_k:Int> isa OTHER*/
if (!var12) {
var_class_name15 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var16 = var_j >= var_k;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__fill_buffer]))(self) /* fill_buffer on <self:BufferedIStream>*/;
var17 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:BufferedIStream>*/;
if (var17){
var18 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var18;
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var19;
var20 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 143);
show_backtrace(1);
} else {
var21 = ((long (*)(val*))(var20->class->vft[COLOR_abstract_collection__Collection__length]))(var20) /* length on <var20:nullable Buffer>*/;
}
var_k = var21;
} else {
}
for(;;) {
{ /* Inline kernel#Int#< (var_j,var_k) */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var25 = 1; /* easy <var_k:Int> isa OTHER*/
if (!var25) {
var_class_name28 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var29 = var_j < var_k;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var_ = var23;
if (var23){
var30 = 0;
{ /* Inline kernel#Int#> (var_i,var30) */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (!var33) {
var_class_name36 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var37 = var_i > var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var22 = var31;
} else {
var22 = var_;
}
if (!var22) break;
var38 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 146);
show_backtrace(1);
} else {
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_string__AbstractString__chars]))(var38) /* chars on <var38:nullable Buffer>*/;
}
var40 = ((val* (*)(val*, long))(var39->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var39, var_j) /* [] on <var39:StringCharView(BufferCharView)>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var40) /* add on <var_s:Buffer>*/;
var41 = 1;
{ /* Inline kernel#Int#+ (var_j,var41) */
var44 = var_j + var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var_j = var42;
var45 = 1;
{ /* Inline kernel#Int#- (var_i,var45) */
var48 = var_i - var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_i = var46;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
CONTINUE_label49: (void)0;
}
BREAK_label49: (void)0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var_j; /* _buffer_pos on <self:BufferedIStream> */
var50 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var50;
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
val* var1 /* : Buffer */;
val* var_s /* var s: Buffer */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_j /* var j: Int */;
val* var5 /* : nullable Buffer */;
long var6 /* : Int */;
long var_k /* var k: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Buffer */;
val* var12 /* : StringCharView */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
val* var19 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
var_s = var1;
for(;;) {
var2 = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:BufferedIStream>*/;
var3 = !var2;
if (!var3) break;
var4 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var4;
var5 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 160);
show_backtrace(1);
} else {
var6 = ((long (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__length]))(var5) /* length on <var5:nullable Buffer>*/;
}
var_k = var6;
for(;;) {
{ /* Inline kernel#Int#< (var_j,var_k) */
/* Covariant cast for argument 0 (i) <var_k:Int> isa OTHER */
/* <var_k:Int> isa OTHER */
var9 = 1; /* easy <var_k:Int> isa OTHER*/
if (!var9) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var10 = var_j < var_k;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) break;
var11 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 162);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_string__AbstractString__chars]))(var11) /* chars on <var11:nullable Buffer>*/;
}
var13 = ((val* (*)(val*, long))(var12->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var12, var_j) /* [] on <var12:StringCharView(BufferCharView)>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var13) /* add on <var_s:Buffer>*/;
var14 = 1;
{ /* Inline kernel#Int#+ (var_j,var14) */
var17 = var_j + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_j = var15;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var_j; /* _buffer_pos on <self:BufferedIStream> */
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__fill_buffer]))(self) /* fill_buffer on <self:BufferedIStream>*/;
CONTINUE_label18: (void)0;
}
BREAK_label18: (void)0;
var19 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var19;
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
val* var2 /* : nullable Buffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable Buffer */;
val* var9 /* : StringCharView */;
val* var10 /* : nullable Object */;
char var11 /* : Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
char var15 /* : Char */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
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
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var_j /* var j: Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
val* var45 /* : nullable Buffer */;
val* var46 /* : StringCharView */;
val* var47 /* : nullable Object */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
val* var53 /* : nullable Buffer */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var63 /* : Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
var_s = p0;
for(;;) {
var = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_i = var;
for(;;) {
var2 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 176);
show_backtrace(1);
} else {
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:nullable Buffer>*/;
}
{ /* Inline kernel#Int#< (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_ = var4;
if (var4){
var8 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 176);
show_backtrace(1);
} else {
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_string__AbstractString__chars]))(var8) /* chars on <var8:nullable Buffer>*/;
}
var10 = ((val* (*)(val*, long))(var9->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var9, var_i) /* [] on <var9:StringCharView(BufferCharView)>*/;
var11 = '\n';
{ /* Inline kernel#Char#!= (var10,var11) */
var14 = (var10 != NULL) && (var10->class == &class_kernel__Char);
if (var14) {
var15 = ((struct instance_kernel__Char*)var10)->value; /* autounbox from nullable Object to Char */;
var14 = (var15 == var11);
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var1 = var12;
} else {
var1 = var_;
}
if (!var1) break;
var17 = 1;
{ /* Inline kernel#Int#+ (var_i,var17) */
var20 = var_i + var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var_i = var18;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var21 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{ /* Inline kernel#Int#> (var_i,var21) */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (!var24) {
var_class_name27 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var28 = var_i > var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (var22){
var29 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:Buffer>*/;
{ /* Inline kernel#Int#+ (var29,var_i) */
var32 = var29 + var_i;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var33 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
{ /* Inline kernel#Int#- (var30,var33) */
var36 = var30 - var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
((void (*)(val*, long))(var_s->class->vft[COLOR_array__AbstractArray__enlarge]))(var_s, var34) /* enlarge on <var_s:Buffer>*/;
var37 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var_j = var37;
for(;;) {
{ /* Inline kernel#Int#< (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var40 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var40) {
var_class_name43 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var44 = var_j < var_i;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
if (!var38) break;
var45 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 186);
show_backtrace(1);
} else {
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_string__AbstractString__chars]))(var45) /* chars on <var45:nullable Buffer>*/;
}
var47 = ((val* (*)(val*, long))(var46->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var46, var_j) /* [] on <var46:StringCharView(BufferCharView)>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var47) /* add on <var_s:Buffer>*/;
var48 = 1;
{ /* Inline kernel#Int#+ (var_j,var48) */
var51 = var_j + var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var_j = var49;
CONTINUE_label52: (void)0;
}
BREAK_label52: (void)0;
} else {
}
var53 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var53 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 191);
show_backtrace(1);
} else {
var54 = ((long (*)(val*))(var53->class->vft[COLOR_abstract_collection__Collection__length]))(var53) /* length on <var53:nullable Buffer>*/;
}
{ /* Inline kernel#Int#< (var_i,var54) */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (!var57) {
var_class_name60 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var61 = var_i < var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
if (var55){
var62 = 1;
{ /* Inline kernel#Int#+ (var_i,var62) */
var65 = var_i + var62;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var63; /* _buffer_pos on <self:BufferedIStream> */
goto RET_LABEL;
} else {
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedIStream> */
var66 = ((short int (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__end_reached]))(self) /* end_reached on <self:BufferedIStream>*/;
if (var66){
goto RET_LABEL;
} else {
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__fill_buffer]))(self) /* fill_buffer on <self:BufferedIStream>*/;
}
}
CONTINUE_label67: (void)0;
}
BREAK_label67: (void)0;
RET_LABEL:;
}
/* method stream#BufferedIStream#append_line_to for (self: Object, Buffer) */
void VIRTUAL_stream__BufferedIStream__append_line_to(val* self, val* p0) {
stream__BufferedIStream__append_line_to(self, p0);
RET_LABEL:;
}
/* method stream#BufferedIStream#eof for (self: BufferedIStream): Bool */
short int stream__BufferedIStream__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
val* var3 /* : nullable Buffer */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
var2 = self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l; /* _buffer_pos on <self:BufferedIStream> */
var3 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:BufferedIStream> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 207);
show_backtrace(1);
} else {
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:nullable Buffer>*/;
}
{ /* Inline kernel#Int#>= (var2,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (!var7) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var8 = var2 >= var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var_ = var5;
if (var5){
var9 = ((short int (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__end_reached]))(self) /* end_reached on <self:BufferedIStream>*/;
var1 = var9;
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
/* method stream#BufferedIStream#fill_buffer for (self: BufferedIStream) */
void stream__BufferedIStream__fill_buffer(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "fill_buffer", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 215);
show_backtrace(1);
RET_LABEL:;
}
/* method stream#BufferedIStream#fill_buffer for (self: Object) */
void VIRTUAL_stream__BufferedIStream__fill_buffer(val* self) {
stream__BufferedIStream__fill_buffer(self);
RET_LABEL:;
}
/* method stream#BufferedIStream#end_reached for (self: BufferedIStream): Bool */
short int stream__BufferedIStream__end_reached(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "end_reached", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 218);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#end_reached for (self: Object): Bool */
short int VIRTUAL_stream__BufferedIStream__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__BufferedIStream__end_reached(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedIStream#prepare_buffer for (self: BufferedIStream, Int) */
void stream__BufferedIStream__prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
val* var /* : Buffer */;
long var1 /* : Int */;
var_capacity = p0;
var = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*, long))(var->class->vft[COLOR_string__Buffer__with_capacity]))(var, var_capacity) /* with_capacity on <var:Buffer>*/;
self->attrs[COLOR_stream__BufferedIStream___buffer].val = var; /* _buffer on <self:BufferedIStream> */
var1 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var1; /* _buffer_pos on <self:BufferedIStream> */
RET_LABEL:;
}
/* method stream#BufferedIStream#prepare_buffer for (self: Object, Int) */
void VIRTUAL_stream__BufferedIStream__prepare_buffer(val* self, long p0) {
stream__BufferedIStream__prepare_buffer(self, p0);
RET_LABEL:;
}
/* method stream#BufferedIStream#init for (self: BufferedIStream) */
void stream__BufferedIStream__init(val* self) {
RET_LABEL:;
}
/* method stream#BufferedIStream#init for (self: Object) */
void VIRTUAL_stream__BufferedIStream__init(val* self) {
stream__BufferedIStream__init(self);
RET_LABEL:;
}
/* method stream#FDStream#fd for (self: FDStream): Int */
long stream__FDStream__fd(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_stream__FDStream___64dfd].l; /* @fd on <self:FDStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#fd for (self: Object): Int */
long VIRTUAL_stream__FDStream__fd(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDStream__fd(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#fd= for (self: FDStream, Int) */
void stream__FDStream__fd_61d(val* self, long p0) {
self->attrs[COLOR_stream__FDStream___64dfd].l = p0; /* @fd on <self:FDStream> */
RET_LABEL:;
}
/* method stream#FDStream#fd= for (self: Object, Int) */
void VIRTUAL_stream__FDStream__fd_61d(val* self, long p0) {
stream__FDStream__fd_61d(self, p0);
RET_LABEL:;
}
/* method stream#FDStream#close for (self: FDStream) */
void stream__FDStream__close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var = ((long (*)(val*))(self->class->vft[COLOR_stream__FDStream__fd]))(self) /* fd on <self:FDStream>*/;
var1 = ((long (*)(val*, long))(self->class->vft[COLOR_stream__FDStream__native_close]))(self, var) /* native_close on <self:FDStream>*/;
var1;
RET_LABEL:;
}
/* method stream#FDStream#close for (self: Object) */
void VIRTUAL_stream__FDStream__close(val* self) {
stream__FDStream__close(self);
RET_LABEL:;
}
/* method stream#FDStream#native_close for (self: FDStream, Int): Int */
long stream__FDStream__native_close(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream_FDStream_FDStream_native_close_1(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_close for (self: Object, Int): Int */
long VIRTUAL_stream__FDStream__native_close(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDStream__native_close(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_read_char for (self: FDStream, Int): Int */
long stream__FDStream__native_read_char(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream_FDStream_FDStream_native_read_char_1(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_read_char for (self: Object, Int): Int */
long VIRTUAL_stream__FDStream__native_read_char(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDStream__native_read_char(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_read for (self: FDStream, Int, NativeString, Int): Int */
long stream__FDStream__native_read(val* self, long p0, char* p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream_FDStream_FDStream_native_read_3(self, p0, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_read for (self: Object, Int, NativeString, Int): Int */
long VIRTUAL_stream__FDStream__native_read(val* self, long p0, char* p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDStream__native_read(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_write for (self: FDStream, Int, NativeString, Int): Int */
long stream__FDStream__native_write(val* self, long p0, char* p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream_FDStream_FDStream_native_write_3(self, p0, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_write for (self: Object, Int, NativeString, Int): Int */
long VIRTUAL_stream__FDStream__native_write(val* self, long p0, char* p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDStream__native_write(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_write_char for (self: FDStream, Int, Char): Int */
long stream__FDStream__native_write_char(val* self, long p0, char p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream_FDStream_FDStream_native_write_char_2(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#FDStream#native_write_char for (self: Object, Int, Char): Int */
long VIRTUAL_stream__FDStream__native_write_char(val* self, long p0, char p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDStream__native_write_char(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDStream#init for (self: FDStream, Int) */
void stream__FDStream__init(val* self, long p0) {
long var_fd /* var fd: Int */;
var_fd = p0;
((void (*)(val*, long))(self->class->vft[COLOR_stream__FDStream__fd_61d]))(self, var_fd) /* fd= on <self:FDStream>*/;
RET_LABEL:;
}
/* method stream#FDStream#init for (self: Object, Int) */
void VIRTUAL_stream__FDStream__init(val* self, long p0) {
stream__FDStream__init(self, p0);
RET_LABEL:;
}
/* method stream#FDIStream#eof for (self: FDIStream): Bool */
short int stream__FDIStream__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_stream__FDIStream___64deof].s; /* @eof on <self:FDIStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDIStream#eof for (self: Object): Bool */
short int VIRTUAL_stream__FDIStream__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__FDIStream__eof(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDIStream#eof= for (self: FDIStream, Bool) */
void stream__FDIStream__eof_61d(val* self, short int p0) {
self->attrs[COLOR_stream__FDIStream___64deof].s = p0; /* @eof on <self:FDIStream> */
RET_LABEL:;
}
/* method stream#FDIStream#eof= for (self: Object, Bool) */
void VIRTUAL_stream__FDIStream__eof_61d(val* self, short int p0) {
stream__FDIStream__eof_61d(self, p0);
RET_LABEL:;
}
/* method stream#FDIStream#read_char for (self: FDIStream): Int */
long stream__FDIStream__read_char(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var_nb /* var nb: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_stream__FDStream__fd]))(self) /* fd on <self:FDIStream>*/;
var2 = ((long (*)(val*, long))(self->class->vft[COLOR_stream__FDStream__native_read_char]))(self, var1) /* native_read_char on <self:FDIStream>*/;
var_nb = var2;
var3 = 1;
{ /* Inline kernel#Int#unary - (var3) */
var6 = -var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
{ /* Inline kernel#Int#== (var_nb,var4) */
var9 = var_nb == var4;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var10 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_stream__FDIStream__eof_61d]))(self, var10) /* eof= on <self:FDIStream>*/;
} else {
}
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#FDIStream#read_char for (self: Object): Int */
long VIRTUAL_stream__FDIStream__read_char(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = stream__FDIStream__read_char(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDIStream#init for (self: FDIStream, Int) */
void stream__FDIStream__init(val* self, long p0) {
long var_fd /* var fd: Int */;
var_fd = p0;
((void (*)(val*, long))(self->class->vft[COLOR_stream__FDStream__init]))(self, p0) /* init on <self:FDIStream>*/;
RET_LABEL:;
}
/* method stream#FDIStream#init for (self: Object, Int) */
void VIRTUAL_stream__FDIStream__init(val* self, long p0) {
stream__FDIStream__init(self, p0);
RET_LABEL:;
}
/* method stream#FDOStream#is_writable for (self: FDOStream): Bool */
short int stream__FDOStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_stream__FDOStream___64dis_writable].s; /* @is_writable on <self:FDOStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDOStream#is_writable for (self: Object): Bool */
short int VIRTUAL_stream__FDOStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__FDOStream__is_writable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#FDOStream#is_writable= for (self: FDOStream, Bool) */
void stream__FDOStream__is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_stream__FDOStream___64dis_writable].s = p0; /* @is_writable on <self:FDOStream> */
RET_LABEL:;
}
/* method stream#FDOStream#is_writable= for (self: Object, Bool) */
void VIRTUAL_stream__FDOStream__is_writable_61d(val* self, short int p0) {
stream__FDOStream__is_writable_61d(self, p0);
RET_LABEL:;
}
/* method stream#FDOStream#write for (self: FDOStream, String) */
void stream__FDOStream__write(val* self, val* p0) {
val* var_s /* var s: String */;
long var /* : Int */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_nb /* var nb: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_s = p0;
var = ((long (*)(val*))(self->class->vft[COLOR_stream__FDStream__fd]))(self) /* fd on <self:FDOStream>*/;
var1 = ((char* (*)(val*))(var_s->class->vft[COLOR_string__String__to_cstring]))(var_s) /* to_cstring on <var_s:String>*/;
var2 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var3 = ((long (*)(val*, long, char*, long))(self->class->vft[COLOR_stream__FDStream__native_write]))(self, var, var1, var2) /* native_write on <self:FDOStream>*/;
var_nb = var3;
var4 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#< (var_nb,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (!var7) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var8 = var_nb < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = 0;
((void (*)(val*, short int))(self->class->vft[COLOR_stream__FDOStream__is_writable_61d]))(self, var9) /* is_writable= on <self:FDOStream>*/;
} else {
}
RET_LABEL:;
}
/* method stream#FDOStream#write for (self: Object, String) */
void VIRTUAL_stream__FDOStream__write(val* self, val* p0) {
stream__FDOStream__write(self, p0);
RET_LABEL:;
}
/* method stream#FDOStream#init for (self: FDOStream, Int) */
void stream__FDOStream__init(val* self, long p0) {
long var_fd /* var fd: Int */;
short int var /* : Bool */;
var_fd = p0;
((void (*)(val*, long))(self->class->vft[COLOR_stream__FDStream__init]))(self, p0) /* init on <self:FDOStream>*/;
var = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_stream__FDOStream__is_writable_61d]))(self, var) /* is_writable= on <self:FDOStream>*/;
RET_LABEL:;
}
/* method stream#FDOStream#init for (self: Object, Int) */
void VIRTUAL_stream__FDOStream__init(val* self, long p0) {
stream__FDOStream__init(self, p0);
RET_LABEL:;
}
/* method stream#FDIOStream#init for (self: FDIOStream, Int) */
void stream__FDIOStream__init(val* self, long p0) {
long var_fd /* var fd: Int */;
short int var /* : Bool */;
var_fd = p0;
((void (*)(val*, long))(self->class->vft[COLOR_stream__FDIStream__init]))(self, p0) /* init on <self:FDIOStream>*/;
((void (*)(val*, long))(self->class->vft[COLOR_stream__FDOStream__init]))(self, p0) /* init on <self:FDIOStream>*/;
((void (*)(val*, long))(self->class->vft[COLOR_stream__FDStream__fd_61d]))(self, var_fd) /* fd= on <self:FDIOStream>*/;
var = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_stream__FDOStream__is_writable_61d]))(self, var) /* is_writable= on <self:FDIOStream>*/;
RET_LABEL:;
}
/* method stream#FDIOStream#init for (self: Object, Int) */
void VIRTUAL_stream__FDIOStream__init(val* self, long p0) {
stream__FDIOStream__init(self, p0);
RET_LABEL:;
}
/* method stream#Object#poll for (self: Object, Sequence[FDStream]): nullable FDStream */
val* stream__Object__poll(val* self, val* p0) {
val* var /* : nullable FDStream */;
val* var_streams /* var streams: Sequence[FDStream] */;
val* var1 /* : Array[Int] */;
val* var_in_fds /* var in_fds: Array[Int] */;
val* var2 /* : Array[Int] */;
val* var_out_fds /* var out_fds: Array[Int] */;
val* var3 /* : HashMap[Int, FDStream] */;
val* var_fd_to_stream /* var fd_to_stream: HashMap[Int, FDStream] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_s /* var s: FDStream */;
long var7 /* : Int */;
long var_fd /* var fd: Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : nullable Object */;
val* var14 /* : Object */;
val* var15 /* : nullable Int */;
val* var_polled_fd /* var polled_fd: nullable Int */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : null */;
val* var19 /* : nullable Object */;
var_streams = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Int);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Int]>*/;
var_in_fds = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Int);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Int]>*/;
var_out_fds = var2;
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapkernel__Intstream__FDStream);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[Int, FDStream]>*/;
var_fd_to_stream = var3;
var4 = ((val* (*)(val*))(var_streams->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_streams) /* iterator on <var_streams:Sequence[FDStream]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_s = var6;
var7 = ((long (*)(val*))(var_s->class->vft[COLOR_stream__FDStream__fd]))(var_s) /* fd on <var_s:FDStream>*/;
var_fd = var7;
/* <var_s:FDStream> isa FDIStream */
cltype = type_stream__FDIStream.color;
idtype = type_stream__FDIStream.id;
if(cltype >= var_s->type->table_size) {
var8 = 0;
} else {
var8 = var_s->type->type_table[cltype] == idtype;
}
if (var8){
var9 = BOX_kernel__Int(var_fd); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_in_fds->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_in_fds, var9) /* add on <var_in_fds:Array[Int]>*/;
} else {
}
/* <var_s:FDStream> isa FDOStream */
cltype11 = type_stream__FDOStream.color;
idtype12 = type_stream__FDOStream.id;
if(cltype11 >= var_s->type->table_size) {
var10 = 0;
} else {
var10 = var_s->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = BOX_kernel__Int(var_fd); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_out_fds->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_out_fds, var13) /* add on <var_out_fds:Array[Int]>*/;
} else {
}
var14 = BOX_kernel__Int(var_fd); /* autobox from Int to Object */
((void (*)(val*, val*, val*))(var_fd_to_stream->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_fd_to_stream, var14, var_s) /* []= on <var_fd_to_stream:HashMap[Int, FDStream]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_stream__Object__intern_poll]))(self, var_in_fds, var_out_fds) /* intern_poll on <self:Object>*/;
var_polled_fd = var15;
var16 = NULL;
if (var_polled_fd == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (var17){
var18 = NULL;
var = var18;
goto RET_LABEL;
} else {
var19 = ((val* (*)(val*, val*))(var_fd_to_stream->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_fd_to_stream, var_polled_fd) /* [] on <var_fd_to_stream:HashMap[Int, FDStream]>*/;
var = var19;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method stream#Object#poll for (self: Object, Sequence[FDStream]): nullable FDStream */
val* VIRTUAL_stream__Object__poll(val* self, val* p0) {
val* var /* : nullable FDStream */;
val* var1 /* : nullable FDStream */;
var1 = stream__Object__poll(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Object#intern_poll for (self: Object, Array[Int], Array[Int]): nullable Int */
val* stream__Object__intern_poll(val* self, val* p0, val* p1) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = malloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* var_for_c_2;
var_for_c_2 = malloc(sizeof(struct nitni_instance));
var_for_c_2->value = p1;
struct nitni_instance* ret_var;
ret_var = stream___Object_intern_poll___impl(var_for_c_0, var_for_c_1, var_for_c_2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
#ifndef NIT_NULL_null_Int
#define NIT_NULL_null_Int
struct nitni_instance * stream___null_Int() {
struct nitni_instance* ret_for_c;
ret_for_c = malloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
#endif
#ifndef NIT_NULL_null_Object
#define NIT_NULL_null_Object
struct nitni_instance * stream___null_Object() {
struct nitni_instance* ret_for_c;
ret_for_c = malloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
#endif
/* nitni callback for standard::abstract_collection::Collection::length */
int stream___Array_of_Int_length( struct nitni_instance * recv ) {
long var /* : Int */;
var = ((long (*)(val*))(recv->value->class->vft[COLOR_abstract_collection__Collection__length]))(recv->value) /* length on <recv->value:Array[Int]>*/;
return var;
}
/* nitni callback for standard::abstract_collection::SequenceRead::[] */
int stream___Array_of_Int__index( struct nitni_instance * recv, int index ) {
val* var /* : nullable Object */;
long var1 /* : Int */;
var = ((val* (*)(val*, long))(recv->value->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(recv->value, index) /* [] on <recv->value:Array[Int]>*/;
var1 = ((struct instance_kernel__Int*)var)->value; /* autounbox from nullable Object to Int */;
return var1;
}
/* nitni check for Int to nullable Int */
int stream___Int_is_a_nullable_Int(int from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from->value:Int> isa nullable Int */
var = 1; /* easy <from->value:Int> isa nullable Int*/
return var;
}
/* nitni cast for Int to nullable Int */
struct nitni_instance * stream___Int_as_nullable_Int(int from) {
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable Int */;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
if (!var) {
fprintf(stderr, "Runtime error: %s", "FFI cast failed");
fprintf(stderr, "\n");
show_backtrace(1);
}
var1 = BOX_kernel__Int(from); /* autobox from Int to nullable Int */
struct nitni_instance* ret_for_c;
ret_for_c = malloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* method stream#Object#intern_poll for (self: Object, Array[Int], Array[Int]): nullable Int */
val* VIRTUAL_stream__Object__intern_poll(val* self, val* p0, val* p1) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = stream__Object__intern_poll(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#content for (self: StringOStream): Array[String] */
val* stream__StringOStream__content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_stream__StringOStream___64dcontent].val; /* @content on <self:StringOStream> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @content");
fprintf(stderr, " (%s:%d)\n", "lib/standard/stream.nit", 377);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#content for (self: Object): Array[String] */
val* VIRTUAL_stream__StringOStream__content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = stream__StringOStream__content(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#content= for (self: StringOStream, Array[String]) */
void stream__StringOStream__content_61d(val* self, val* p0) {
self->attrs[COLOR_stream__StringOStream___64dcontent].val = p0; /* @content on <self:StringOStream> */
RET_LABEL:;
}
/* method stream#StringOStream#content= for (self: Object, Array[String]) */
void VIRTUAL_stream__StringOStream__content_61d(val* self, val* p0) {
stream__StringOStream__content_61d(self, p0);
RET_LABEL:;
}
/* method stream#StringOStream#to_s for (self: StringOStream): String */
val* stream__StringOStream__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_stream__StringOStream__content]))(self) /* content on <self:StringOStream>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:Array[String]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#to_s for (self: Object): String */
val* VIRTUAL_stream__StringOStream__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = stream__StringOStream__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#is_writable for (self: StringOStream): Bool */
short int stream__StringOStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#is_writable for (self: Object): Bool */
short int VIRTUAL_stream__StringOStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = stream__StringOStream__is_writable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringOStream#write for (self: StringOStream, String) */
void stream__StringOStream__write(val* self, val* p0) {
val* var_str /* var str: String */;
val* var /* : Array[String] */;
var_str = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_stream__StringOStream__content]))(self) /* content on <self:StringOStream>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var_str) /* add on <var:Array[String]>*/;
RET_LABEL:;
}
/* method stream#StringOStream#write for (self: Object, String) */
void VIRTUAL_stream__StringOStream__write(val* self, val* p0) {
stream__StringOStream__write(self, p0);
RET_LABEL:;
}
/* method stream#StringOStream#init for (self: StringOStream) */
void stream__StringOStream__init(val* self) {
RET_LABEL:;
}
/* method stream#StringOStream#init for (self: Object) */
void VIRTUAL_stream__StringOStream__init(val* self) {
stream__StringOStream__init(self);
RET_LABEL:;
}
