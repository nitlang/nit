#include "file.sep.0.h"
/* method file#Object#printn for (self: Object, Array[Object]) */
void file__Object__printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : OFStream */;
val* var1 /* : String */;
var_objects = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stdout]))(self) /* stdout on <self:Object>*/;
var1 = ((val* (*)(val*))(var_objects->class->vft[COLOR_string__Object__to_s]))(var_objects) /* to_s on <var_objects:Array[Object]>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_stream__OStream__write]))(var, var1) /* write on <var:OFStream>*/;
RET_LABEL:;
}
/* method file#Object#printn for (self: Object, Array[Object]) */
void VIRTUAL_file__Object__printn(val* self, val* p0) {
file__Object__printn(self, p0);
RET_LABEL:;
}
/* method file#Object#print for (self: Object, Object) */
void file__Object__print(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : OFStream */;
val* var1 /* : String */;
val* var2 /* : OFStream */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
var_object = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stdout]))(self) /* stdout on <self:Object>*/;
var1 = ((val* (*)(val*))(var_object->class->vft[COLOR_string__Object__to_s]))(var_object) /* to_s on <var_object:Object>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_stream__OStream__write]))(var, var1) /* write on <var:OFStream>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stdout]))(self) /* stdout on <self:Object>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "\n";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var2->class->vft[COLOR_stream__OStream__write]))(var2, var3) /* write on <var2:OFStream>*/;
RET_LABEL:;
}
/* method file#Object#print for (self: Object, Object) */
void VIRTUAL_file__Object__print(val* self, val* p0) {
file__Object__print(self, p0);
RET_LABEL:;
}
/* method file#Object#getc for (self: Object): Char */
char file__Object__getc(val* self) {
char var /* : Char */;
val* var1 /* : Stdin */;
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stdin]))(self) /* stdin on <self:Object>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_stream__IStream__read_char]))(var1) /* read_char on <var1:Stdin>*/;
{ /* Inline kernel#Int#ascii (var2) */
var5 = var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#getc for (self: Object): Char */
char VIRTUAL_file__Object__getc(val* self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = file__Object__getc(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#Object#gets for (self: Object): String */
val* file__Object__gets(val* self) {
val* var /* : String */;
val* var1 /* : Stdin */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stdin]))(self) /* stdin on <self:Object>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_stream__IStream__read_line]))(var1) /* read_line on <var1:Stdin>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#gets for (self: Object): String */
val* VIRTUAL_file__Object__gets(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__Object__gets(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#Object#getcwd for (self: Object): String */
val* file__Object__getcwd(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_file__Object__file_getcwd]))(self) /* file_getcwd on <self:Object>*/;
var2 = string__NativeString__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#getcwd for (self: Object): String */
val* VIRTUAL_file__Object__getcwd(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__Object__getcwd(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#Object#file_getcwd for (self: Object): NativeString */
char* file__Object__file_getcwd(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string_NativeString_NativeString_file_getcwd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#file_getcwd for (self: Object): NativeString */
char* VIRTUAL_file__Object__file_getcwd(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = file__Object__file_getcwd(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FStream#path for (self: FStream): nullable String */
val* file__FStream__path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_file__FStream___path].val; /* _path on <self:FStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FStream#path for (self: Object): nullable String */
val* VIRTUAL_file__FStream__path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = file__FStream__path(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FStream#file_stat for (self: FStream): FileStat */
void* file__FStream__file_stat(val* self) {
void* var /* : FileStat */;
val* var1 /* : nullable NativeFile */;
void* var2 /* : FileStat */;
var1 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:FStream> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 66);
show_backtrace(1);
} else {
var2 = ((void* (*)(val*))(var1->class->vft[COLOR_file__NativeFile__file_stat]))(var1) /* file_stat on <var1:nullable NativeFile>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FStream#file_stat for (self: Object): FileStat */
void* VIRTUAL_file__FStream__file_stat(val* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
var1 = file__FStream__file_stat(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FStream#init for (self: FStream) */
void file__FStream__init(val* self) {
RET_LABEL:;
}
/* method file#FStream#init for (self: Object) */
void VIRTUAL_file__FStream__init(val* self) {
file__FStream__init(self);
RET_LABEL:;
}
/* method file#IFStream#reopen for (self: IFStream) */
void file__IFStream__reopen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFile */;
val* var3 /* : nullable String */;
char* var4 /* : NativeString */;
void* var5 /* : NativeFile */;
val* var6 /* : nullable NativeFile */;
short int var7 /* : Bool */;
long var8 /* : Int */;
val* var9 /* : nullable Buffer */;
var = ((short int (*)(val*))(self->class->vft[COLOR_stream__IStream__eof]))(self) /* eof on <self:IFStream>*/;
var1 = !var;
if (var1){
((void (*)(val*))(self->class->vft[COLOR_stream__IOS__close]))(self) /* close on <self:IFStream>*/;
} else {
}
var2 = NULL/*special!*/;
var3 = self->attrs[COLOR_file__FStream___path].val; /* _path on <self:IFStream> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 80);
show_backtrace(1);
} else {
var4 = ((char* (*)(val*))(var3->class->vft[COLOR_string__String__to_cstring]))(var3) /* to_cstring on <var3:nullable String>*/;
}
var5 = file__NativeFile__io_open_read(var2, var4);
var6 = BOX_file__NativeFile(var5); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var6; /* _file on <self:IFStream> */
var7 = 0;
self->attrs[COLOR_file__IFStream___end_reached].s = var7; /* _end_reached on <self:IFStream> */
var8 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var8; /* _buffer_pos on <self:IFStream> */
var9 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 83);
show_backtrace(1);
} else {
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var9) /* clear on <var9:nullable Buffer>*/;
}
RET_LABEL:;
}
/* method file#IFStream#reopen for (self: Object) */
void VIRTUAL_file__IFStream__reopen(val* self) {
file__IFStream__reopen(self);
RET_LABEL:;
}
/* method file#IFStream#close for (self: IFStream) */
void file__IFStream__close(val* self) {
val* var /* : nullable NativeFile */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 88);
show_backtrace(1);
} else {
var1 = ((long (*)(val*))(var->class->vft[COLOR_file__NativeFile__io_close]))(var) /* io_close on <var:nullable NativeFile>*/;
}
var_i = var1;
var2 = 1;
self->attrs[COLOR_file__IFStream___end_reached].s = var2; /* _end_reached on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#close for (self: Object) */
void VIRTUAL_file__IFStream__close(val* self) {
file__IFStream__close(self);
RET_LABEL:;
}
/* method file#IFStream#fill_buffer for (self: IFStream) */
void file__IFStream__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : nullable Buffer */;
char* var2 /* : NativeString */;
val* var3 /* : nullable Buffer */;
long var4 /* : Int */;
long var5 /* : Int */;
long var_nb /* var nb: Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
val* var13 /* : nullable Buffer */;
long var14 /* : Int */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
var1 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 94);
show_backtrace(1);
}
var2 = var1->attrs[COLOR_string__AbstractString___items].str; /* _items on <var1:nullable Buffer> */
var3 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 94);
show_backtrace(1);
}
var4 = var3->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <var3:nullable Buffer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 94);
show_backtrace(1);
} else {
var5 = ((long (*)(val*, char*, long))(var->class->vft[COLOR_file__NativeFile__io_read]))(var, var2, var4) /* io_read on <var:nullable NativeFile>*/;
}
var_nb = var5;
var6 = 0;
{ /* Inline kernel#Int#<= (var_nb,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var10 = var_nb <= var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var11 = 1;
self->attrs[COLOR_file__IFStream___end_reached].s = var11; /* _end_reached on <self:IFStream> */
var12 = 0;
var_nb = var12;
} else {
}
var13 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 99);
show_backtrace(1);
}
var13->attrs[COLOR_array__AbstractArrayRead___length].l = var_nb; /* _length on <var13:nullable Buffer> */
var14 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var14; /* _buffer_pos on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#fill_buffer for (self: Object) */
void VIRTUAL_file__IFStream__fill_buffer(val* self) {
file__IFStream__fill_buffer(self);
RET_LABEL:;
}
/* method file#IFStream#end_reached for (self: IFStream): Bool */
short int file__IFStream__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_file__IFStream___end_reached].s; /* _end_reached on <self:IFStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#IFStream#end_reached for (self: Object): Bool */
short int VIRTUAL_file__IFStream__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file__IFStream__end_reached(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#IFStream#open for (self: IFStream, String) */
void file__IFStream__open(val* self, val* p0) {
val* var_path /* var path: String */;
long var /* : Int */;
void* var1 /* : NativeFile */;
val* var2 /* : nullable String */;
char* var3 /* : NativeString */;
void* var4 /* : NativeFile */;
val* var5 /* : nullable NativeFile */;
val* var6 /* : nullable NativeFile */;
val* var7 /* : null */;
short int var8 /* : Bool */;
var_path = p0;
((void (*)(val*))(self->class->vft[COLOR_file__FStream__init]))(self) /* init on <self:IFStream>*/;
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__init]))(self) /* init on <self:IFStream>*/;
self->attrs[COLOR_file__FStream___path].val = var_path; /* _path on <self:IFStream> */
var = 10;
((void (*)(val*, long))(self->class->vft[COLOR_stream__BufferedIStream__prepare_buffer]))(self, var) /* prepare_buffer on <self:IFStream>*/;
var1 = NULL/*special!*/;
var2 = self->attrs[COLOR_file__FStream___path].val; /* _path on <self:IFStream> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 111);
show_backtrace(1);
} else {
var3 = ((char* (*)(val*))(var2->class->vft[COLOR_string__String__to_cstring]))(var2) /* to_cstring on <var2:nullable String>*/;
}
var4 = file__NativeFile__io_open_read(var1, var3);
var5 = BOX_file__NativeFile(var4); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var5; /* _file on <self:IFStream> */
var6 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert \'cant_open_file\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 112);
show_backtrace(1);
}
RET_LABEL:;
}
/* method file#IFStream#open for (self: Object, String) */
void VIRTUAL_file__IFStream__open(val* self, val* p0) {
file__IFStream__open(self, p0);
RET_LABEL:;
}
/* method file#IFStream#init for (self: IFStream) */
void file__IFStream__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_file__FStream__init]))(self) /* init on <self:IFStream>*/;
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__init]))(self) /* init on <self:IFStream>*/;
RET_LABEL:;
}
/* method file#IFStream#init for (self: Object) */
void VIRTUAL_file__IFStream__init(val* self) {
file__IFStream__init(self);
RET_LABEL:;
}
/* method file#IFStream#without_file for (self: IFStream) */
void file__IFStream__without_file(val* self) {
((void (*)(val*))(self->class->vft[COLOR_file__FStream__init]))(self) /* init on <self:IFStream>*/;
((void (*)(val*))(self->class->vft[COLOR_stream__BufferedIStream__init]))(self) /* init on <self:IFStream>*/;
RET_LABEL:;
}
/* method file#IFStream#without_file for (self: Object) */
void VIRTUAL_file__IFStream__without_file(val* self) {
file__IFStream__without_file(self);
RET_LABEL:;
}
/* method file#OFStream#write for (self: OFStream, String) */
void file__OFStream__write(val* self, val* p0) {
val* var_s /* var s: String */;
short int var /* : Bool */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
var_s = p0;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:OFStream> */
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 126);
show_backtrace(1);
}
var1 = ((char* (*)(val*))(var_s->class->vft[COLOR_string__String__to_cstring]))(var_s) /* to_cstring on <var_s:String>*/;
var2 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
((void (*)(val*, char*, long))(self->class->vft[COLOR_file__OFStream__write_native]))(self, var1, var2) /* write_native on <self:OFStream>*/;
RET_LABEL:;
}
/* method file#OFStream#write for (self: Object, String) */
void VIRTUAL_file__OFStream__write(val* self, val* p0) {
file__OFStream__write(self, p0);
RET_LABEL:;
}
/* method file#OFStream#is_writable for (self: OFStream): Bool */
short int file__OFStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:OFStream> */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#OFStream#is_writable for (self: Object): Bool */
short int VIRTUAL_file__OFStream__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file__OFStream__is_writable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#OFStream#close for (self: OFStream) */
void file__OFStream__close(val* self) {
val* var /* : nullable NativeFile */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 134);
show_backtrace(1);
} else {
var1 = ((long (*)(val*))(var->class->vft[COLOR_file__NativeFile__io_close]))(var) /* io_close on <var:nullable NativeFile>*/;
}
var_i = var1;
var2 = 0;
self->attrs[COLOR_file__OFStream___writable].s = var2; /* _writable on <self:OFStream> */
RET_LABEL:;
}
/* method file#OFStream#close for (self: Object) */
void VIRTUAL_file__OFStream__close(val* self) {
file__OFStream__close(self);
RET_LABEL:;
}
/* method file#OFStream#write_native for (self: OFStream, NativeString, Int) */
void file__OFStream__write_native(val* self, char* p0, long p1) {
char* var_native /* var native: NativeString */;
long var_len /* var len: Int */;
short int var /* : Bool */;
val* var1 /* : nullable NativeFile */;
long var2 /* : Int */;
long var_err /* var err: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : Object */;
val* var25 /* : Object */;
var_native = p0;
var_len = p1;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:OFStream> */
if (!var) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 144);
show_backtrace(1);
}
var1 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 145);
show_backtrace(1);
} else {
var2 = ((long (*)(val*, char*, long))(var1->class->vft[COLOR_file__NativeFile__io_write]))(var1, var_native, var_len) /* io_write on <var1:nullable NativeFile>*/;
}
var_err = var2;
{ /* Inline kernel#Int#!= (var_err,var_len) */
var5 = var_err == var_len;
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
if (varonce) {
var7 = varonce;
} else {
var8 = "Problem in writing : ";
var9 = 21;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = " ";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\n";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 5;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var7;
var24 = BOX_kernel__Int(var_err); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var24;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var12;
var25 = BOX_kernel__Int(var_len); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var23)->values[3] = (val*) var25;
((struct instance_array__NativeArray*)var23)->values[4] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__printn]))(self, var21) /* printn on <self:OFStream>*/;
} else {
}
RET_LABEL:;
}
/* method file#OFStream#write_native for (self: Object, NativeString, Int) */
void VIRTUAL_file__OFStream__write_native(val* self, char* p0, long p1) {
file__OFStream__write_native(self, p0, p1);
RET_LABEL:;
}
/* method file#OFStream#open for (self: OFStream, String) */
void file__OFStream__open(val* self, val* p0) {
val* var_path /* var path: String */;
void* var /* : NativeFile */;
char* var1 /* : NativeString */;
void* var2 /* : NativeFile */;
val* var3 /* : nullable NativeFile */;
val* var4 /* : nullable NativeFile */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_path = p0;
((void (*)(val*))(self->class->vft[COLOR_file__FStream__init]))(self) /* init on <self:OFStream>*/;
var = NULL/*special!*/;
var1 = ((char* (*)(val*))(var_path->class->vft[COLOR_string__String__to_cstring]))(var_path) /* to_cstring on <var_path:String>*/;
var2 = file__NativeFile__io_open_write(var, var1);
var3 = BOX_file__NativeFile(var2); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var3; /* _file on <self:OFStream> */
var4 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert \'cant_open_file\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/file.nit", 156);
show_backtrace(1);
}
self->attrs[COLOR_file__FStream___path].val = var_path; /* _path on <self:OFStream> */
var7 = 1;
self->attrs[COLOR_file__OFStream___writable].s = var7; /* _writable on <self:OFStream> */
RET_LABEL:;
}
/* method file#OFStream#open for (self: Object, String) */
void VIRTUAL_file__OFStream__open(val* self, val* p0) {
file__OFStream__open(self, p0);
RET_LABEL:;
}
/* method file#OFStream#init for (self: OFStream) */
void file__OFStream__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_file__FStream__init]))(self) /* init on <self:OFStream>*/;
RET_LABEL:;
}
/* method file#OFStream#init for (self: Object) */
void VIRTUAL_file__OFStream__init(val* self) {
file__OFStream__init(self);
RET_LABEL:;
}
/* method file#OFStream#without_file for (self: OFStream) */
void file__OFStream__without_file(val* self) {
((void (*)(val*))(self->class->vft[COLOR_file__FStream__init]))(self) /* init on <self:OFStream>*/;
RET_LABEL:;
}
/* method file#OFStream#without_file for (self: Object) */
void VIRTUAL_file__OFStream__without_file(val* self) {
file__OFStream__without_file(self);
RET_LABEL:;
}
/* method file#Stdin#init for (self: Stdin) */
void file__Stdin__init(val* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
val* var2 /* : nullable NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
long var7 /* : Int */;
((void (*)(val*))(self->class->vft[COLOR_file__IFStream__init]))(self) /* init on <self:Stdin>*/;
var = NULL/*special!*/;
var1 = file__NativeFile__native_stdin(var);
var2 = BOX_file__NativeFile(var1); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var2; /* _file on <self:Stdin> */
if (varonce) {
var3 = varonce;
} else {
var4 = "/dev/stdin";
var5 = 10;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
self->attrs[COLOR_file__FStream___path].val = var3; /* _path on <self:Stdin> */
var7 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_stream__BufferedIStream__prepare_buffer]))(self, var7) /* prepare_buffer on <self:Stdin>*/;
RET_LABEL:;
}
/* method file#Stdin#init for (self: Object) */
void VIRTUAL_file__Stdin__init(val* self) {
file__Stdin__init(self);
RET_LABEL:;
}
/* method file#Stdin#poll_in for (self: Stdin): Bool */
short int file__Stdin__poll_in(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file_stdin_poll_in(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Stdin#poll_in for (self: Object): Bool */
short int VIRTUAL_file__Stdin__poll_in(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file__Stdin__poll_in(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#Stdout#init for (self: Stdout) */
void file__Stdout__init(val* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
val* var2 /* : nullable NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
((void (*)(val*))(self->class->vft[COLOR_file__OFStream__init]))(self) /* init on <self:Stdout>*/;
var = NULL/*special!*/;
var1 = file__NativeFile__native_stdout(var);
var2 = BOX_file__NativeFile(var1); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var2; /* _file on <self:Stdout> */
if (varonce) {
var3 = varonce;
} else {
var4 = "/dev/stdout";
var5 = 11;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
self->attrs[COLOR_file__FStream___path].val = var3; /* _path on <self:Stdout> */
var7 = 1;
self->attrs[COLOR_file__OFStream___writable].s = var7; /* _writable on <self:Stdout> */
RET_LABEL:;
}
/* method file#Stdout#init for (self: Object) */
void VIRTUAL_file__Stdout__init(val* self) {
file__Stdout__init(self);
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void file__Stderr__init(val* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
val* var2 /* : nullable NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
((void (*)(val*))(self->class->vft[COLOR_file__OFStream__init]))(self) /* init on <self:Stderr>*/;
var = NULL/*special!*/;
var1 = file__NativeFile__native_stderr(var);
var2 = BOX_file__NativeFile(var1); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var2; /* _file on <self:Stderr> */
if (varonce) {
var3 = varonce;
} else {
var4 = "/dev/stderr";
var5 = 11;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
self->attrs[COLOR_file__FStream___path].val = var3; /* _path on <self:Stderr> */
var7 = 1;
self->attrs[COLOR_file__OFStream___writable].s = var7; /* _writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Stderr#init for (self: Object) */
void VIRTUAL_file__Stderr__init(val* self) {
file__Stderr__init(self);
RET_LABEL:;
}
/* method file#String#file_exists for (self: String): Bool */
short int file__String__file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var2 = file__NativeString__file_exists(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_exists for (self: Object): Bool */
short int VIRTUAL_file__String__file_exists(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file__String__file_exists(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#file_stat for (self: String): FileStat */
void* file__String__file_stat(val* self) {
void* var /* : FileStat */;
char* var1 /* : NativeString */;
void* var2 /* : FileStat */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var2 = file__NativeString__file_stat(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_stat for (self: Object): FileStat */
void* VIRTUAL_file__String__file_stat(val* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
var1 = file__String__file_stat(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#file_lstat for (self: String): FileStat */
void* file__String__file_lstat(val* self) {
void* var /* : FileStat */;
char* var1 /* : NativeString */;
void* var2 /* : FileStat */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var2 = file__NativeString__file_lstat(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_lstat for (self: Object): FileStat */
void* VIRTUAL_file__String__file_lstat(val* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
var1 = file__String__file_lstat(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#file_delete for (self: String): Bool */
short int file__String__file_delete(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var2 = file__NativeString__file_delete(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_delete for (self: Object): Bool */
short int VIRTUAL_file__String__file_delete(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file__String__file_delete(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#strip_extension for (self: String, String): String */
val* file__String__strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
val* var8 /* : String */;
var_ext = p0;
var1 = ((short int (*)(val*, val*))(self->class->vft[COLOR_string__AbstractString__has_suffix]))(self, var_ext) /* has_suffix on <self:String>*/;
if (var1){
var2 = 0;
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var4 = ((long (*)(val*))(var_ext->class->vft[COLOR_abstract_collection__Collection__length]))(var_ext) /* length on <var_ext:String>*/;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var8 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var2, var5) /* substring on <self:String>*/;
var = var8;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#strip_extension for (self: Object, String): String */
val* VIRTUAL_file__String__strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__strip_extension(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#basename for (self: String, String): String */
val* file__String__basename(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
char var1 /* : Char */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
long var_pos /* var pos: Int */;
val* var_n /* var n: String */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
var_ext = p0;
var1 = '/';
var2 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var3 = 1;
{ /* Inline kernel#Int#- (var2,var3) */
var6 = var2 - var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var8 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var7 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__last_index_of_from]))(self, var8, var4) /* last_index_of_from on <self:String>*/;
var_pos = var7;
var_n = self;
var9 = 0;
{ /* Inline kernel#Int#>= (var_pos,var9) */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (!var12) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var13 = var_pos >= var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var14 = 1;
{ /* Inline kernel#Int#+ (var_pos,var14) */
var17 = var_pos + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var18 = ((val* (*)(val*, long))(self->class->vft[COLOR_string__AbstractString__substring_from]))(self, var15) /* substring_from on <self:String>*/;
var_n = var18;
} else {
}
var19 = ((val* (*)(val*, val*))(var_n->class->vft[COLOR_file__String__strip_extension]))(var_n, var_ext) /* strip_extension on <var_n:String>*/;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#basename for (self: Object, String): String */
val* VIRTUAL_file__String__basename(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__basename(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: String): String */
val* file__String__dirname(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : nullable Object */;
char var13 /* : Char */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
char var17 /* : Char */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
char var22 /* : Char */;
long var23 /* : Int */;
val* var24 /* : nullable Object */;
long var_pos /* var pos: Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var33 /* : Int */;
val* var34 /* : String */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var2 = 1;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_l = var3;
var7 = 0;
{ /* Inline kernel#Int#> (var_l,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var11 = var_l > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_ = var8;
if (var8){
var12 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_l) /* [] on <self:String>*/;
var13 = '/';
{ /* Inline kernel#Char#== (var12,var13) */
var16 = (var12 != NULL) && (var12->class == &class_kernel__Char);
if (var16) {
var17 = ((struct instance_kernel__Char*)var12)->value; /* autounbox from nullable Object to Char */;
var16 = (var17 == var13);
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var6 = var14;
} else {
var6 = var_;
}
if (var6){
var18 = 1;
{ /* Inline kernel#Int#- (var_l,var18) */
var21 = var_l - var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_l = var19;
} else {
}
var22 = '/';
var24 = BOX_kernel__Char(var22); /* autobox from Char to nullable Object */
var23 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__last_index_of_from]))(self, var24, var_l) /* last_index_of_from on <self:String>*/;
var_pos = var23;
var25 = 0;
{ /* Inline kernel#Int#> (var_pos,var25) */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (!var28) {
var_class_name31 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var32 = var_pos > var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
if (var26){
var33 = 0;
var34 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var33, var_pos) /* substring on <self:String>*/;
var = var34;
goto RET_LABEL;
} else {
var35 = 0;
{ /* Inline kernel#Int#== (var_pos,var35) */
var38 = var_pos == var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
if (var36){
if (varonce) {
var39 = varonce;
} else {
var40 = "/";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce = var39;
}
var = var39;
goto RET_LABEL;
} else {
if (varonce43) {
var44 = varonce43;
} else {
var45 = ".";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var = var44;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: Object): String */
val* VIRTUAL_file__String__dirname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__dirname(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#realpath for (self: String): String */
val* file__String__realpath(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var_cs /* var cs: NativeString */;
val* var3 /* : String */;
val* var_res /* var res: String */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
var2 = file__NativeString__file_realpath(var1);
var_cs = var2;
var3 = string__NativeString__to_s_with_copy(var_cs);
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#realpath for (self: Object): String */
val* VIRTUAL_file__String__realpath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__realpath(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#simplify_path for (self: String): String */
val* file__String__simplify_path(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var6 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
val* var37 /* : nullable Object */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "/";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string_search__String__split_with]))(self, var1) /* split_with on <self:String>*/;
var_a = var5;
var6 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[String]>*/;
var_a2 = var6;
var7 = ((val* (*)(val*))(var_a->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_a) /* iterator on <var_a:Array[String]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_x = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = ".";
var13 = 1;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((short int (*)(val*, val*))(var_x->class->vft[COLOR_kernel__Object___61d_61d]))(var_x, var11) /* == on <var_x:String>*/;
if (var15){
goto CONTINUE_label;
} else {
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((short int (*)(val*, val*))(var_x->class->vft[COLOR_kernel__Object___61d_61d]))(var_x, var18) /* == on <var_x:String>*/;
var_ = var22;
if (var22){
var23 = ((short int (*)(val*))(var_a2->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_a2) /* is_empty on <var_a2:Array[String]>*/;
var24 = !var23;
var16 = var24;
} else {
var16 = var_;
}
if (var16){
goto CONTINUE_label;
} else {
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "..";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((short int (*)(val*, val*))(var_x->class->vft[COLOR_kernel__Object___61d_61d]))(var_x, var28) /* == on <var_x:String>*/;
var_33 = var32;
if (var32){
var34 = ((short int (*)(val*))(var_a2->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_a2) /* is_empty on <var_a2:Array[String]>*/;
var35 = !var34;
var26 = var35;
} else {
var26 = var_33;
}
var_36 = var26;
if (var26){
var37 = ((val* (*)(val*))(var_a2->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_a2) /* last on <var_a2:Array[String]>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "..";
var41 = 2;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = ((short int (*)(val*, val*))(var37->class->vft[COLOR_kernel__Object___33d_61d]))(var37, var39) /* != on <var37:nullable Object(String)>*/;
var25 = var43;
} else {
var25 = var_36;
}
if (var25){
var44 = ((val* (*)(val*))(var_a2->class->vft[COLOR_abstract_collection__Sequence__pop]))(var_a2) /* pop on <var_a2:Array[String]>*/;
var44;
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_a2->class->vft[COLOR_abstract_collection__Sequence__push]))(var_a2, var_x) /* push on <var_a2:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var45 = ((short int (*)(val*))(var_a2->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_a2) /* is_empty on <var_a2:Array[String]>*/;
if (var45){
if (varonce46) {
var47 = varonce46;
} else {
var48 = ".";
var49 = 1;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var = var47;
goto RET_LABEL;
} else {
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "/";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*, val*))(var_a2->class->vft[COLOR_string__Collection__join]))(var_a2, var52) /* join on <var_a2:Array[String]>*/;
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#simplify_path for (self: Object): String */
val* VIRTUAL_file__String__simplify_path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__simplify_path(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#join_path for (self: String, String): String */
val* file__String__join_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
char var9 /* : Char */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
var_path = p0;
var1 = ((short int (*)(val*))(var_path->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path) /* is_empty on <var_path:String>*/;
if (var1){
var = self;
goto RET_LABEL;
} else {
}
var2 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:String>*/;
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
var3 = 0;
var4 = ((val* (*)(val*, long))(var_path->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_path, var3) /* [] on <var_path:String>*/;
var5 = '/';
{ /* Inline kernel#Char#== (var4,var5) */
var8 = (var4 != NULL) && (var4->class == &class_kernel__Char);
if (var8) {
var9 = ((struct instance_kernel__Char*)var4)->value; /* autounbox from nullable Object to Char */;
var8 = (var9 == var5);
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var = var_path;
goto RET_LABEL;
} else {
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
var11 = 5;
((void (*)(val*, long))(var10->class->vft[COLOR_array__Array__with_capacity]))(var10, var11) /* with_capacity on <var10:Array[Object]>*/;
var_ = var10;
if (varonce) {
var12 = varonce;
} else {
var13 = "";
var14 = 0;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, self) /* add on <var_:Array[Object]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "/";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_path) /* add on <var_:Array[Object]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "";
var24 = 0;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
var26 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#join_path for (self: Object, String): String */
val* VIRTUAL_file__String__join_path(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__join_path(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#mkdir for (self: String) */
void file__String__mkdir(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var5 /* : Buffer */;
val* var_path /* var path: Buffer */;
short int var6 /* : Bool */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
char var10 /* : Char */;
val* var11 /* : nullable Object */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_d /* var d: String */;
short int var15 /* : Bool */;
char var16 /* : Char */;
val* var17 /* : nullable Object */;
val* var18 /* : String */;
char* var19 /* : NativeString */;
short int var20 /* : Bool */;
if (varonce) {
var = varonce;
} else {
var1 = "/";
var2 = 1;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string_search__String__split_with]))(self, var) /* split_with on <self:String>*/;
var_dirs = var4;
var5 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var5->class->vft[COLOR_string__Buffer__init]))(var5) /* init on <var5:Buffer>*/;
var_path = var5;
var6 = ((short int (*)(val*))(var_dirs->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_dirs) /* is_empty on <var_dirs:Array[String]>*/;
if (var6){
goto RET_LABEL;
} else {
}
var7 = 0;
var8 = ((val* (*)(val*, long))(var_dirs->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_dirs, var7) /* [] on <var_dirs:Array[String]>*/;
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var8) /* is_empty on <var8:nullable Object(String)>*/;
if (var9){
var10 = '/';
var11 = BOX_kernel__Char(var10); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_path->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_path, var11) /* add on <var_path:Buffer>*/;
} else {
}
var12 = ((val* (*)(val*))(var_dirs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_dirs) /* iterator on <var_dirs:Array[String]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var_d = var14;
var15 = ((short int (*)(val*))(var_d->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_d) /* is_empty on <var_d:String>*/;
if (var15){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_path->class->vft[COLOR_abstract_collection__Sequence__append]))(var_path, var_d) /* append on <var_path:Buffer>*/;
var16 = '/';
var17 = BOX_kernel__Char(var16); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_path->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_path, var17) /* add on <var_path:Buffer>*/;
var18 = ((val* (*)(val*))(var_path->class->vft[COLOR_string__Object__to_s]))(var_path) /* to_s on <var_path:Buffer>*/;
var19 = ((char* (*)(val*))(var18->class->vft[COLOR_string__String__to_cstring]))(var18) /* to_cstring on <var18:String>*/;
var20 = file__NativeString__file_mkdir(var19);
var20;
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method file#String#mkdir for (self: Object) */
void VIRTUAL_file__String__mkdir(val* self) {
file__String__mkdir(self);
RET_LABEL:;
}
/* method file#String#chdir for (self: String) */
void file__String__chdir(val* self) {
char* var /* : NativeString */;
var = ((char* (*)(val*))(self->class->vft[COLOR_string__String__to_cstring]))(self) /* to_cstring on <self:String>*/;
file__NativeString__file_chdir(var);
RET_LABEL:;
}
/* method file#String#chdir for (self: Object) */
void VIRTUAL_file__String__chdir(val* self) {
file__String__chdir(self);
RET_LABEL:;
}
/* method file#String#file_extension for (self: String): nullable String */
val* file__String__file_extension(val* self) {
val* var /* : nullable String */;
char var1 /* : Char */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
long var_last_slash /* var last_slash: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : null */;
var1 = '.';
var3 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var2 = ((long (*)(val*, val*))(self->class->vft[COLOR_array__AbstractArrayRead__last_index_of]))(self, var3) /* last_index_of on <self:String>*/;
var_last_slash = var2;
var4 = 0;
{ /* Inline kernel#Int#>= (var_last_slash,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (!var7) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var8 = var_last_slash >= var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = 1;
{ /* Inline kernel#Int#+ (var_last_slash,var9) */
var12 = var_last_slash + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var13 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var14 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var10, var13) /* substring on <self:String>*/;
var = var14;
goto RET_LABEL;
} else {
var15 = NULL;
var = var15;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#file_extension for (self: Object): nullable String */
val* VIRTUAL_file__String__file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = file__String__file_extension(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#files for (self: String): Set[String] */
val* file__String__files(val* self) {
val* var /* : Set[String] */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#String#files at lib/standard/file.nit:355,2--356,159\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#String#files for (self: Object): Set[String] */
val* VIRTUAL_file__String__files(val* self) {
val* var /* : Set[String] */;
val* var1 /* : Set[String] */;
var1 = file__String__files(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_exists for (self: NativeString): Bool */
short int file__NativeString__file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string_NativeString_NativeString_file_exists_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_exists for (self: Object): Bool */
short int VIRTUAL_file__NativeString__file_exists(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = file__NativeString__file_exists(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_stat for (self: NativeString): FileStat */
void* file__NativeString__file_stat(char* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
var1 = string_NativeString_NativeString_file_stat_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_stat for (self: Object): FileStat */
void* VIRTUAL_file__NativeString__file_stat(val* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = file__NativeString__file_stat(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_lstat for (self: NativeString): FileStat */
void* file__NativeString__file_lstat(char* self) {
void* var /* : FileStat */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#NativeString#file_lstat at lib/standard/file.nit:362,2--369,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#NativeString#file_lstat for (self: Object): FileStat */
void* VIRTUAL_file__NativeString__file_lstat(val* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = file__NativeString__file_lstat(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_mkdir for (self: NativeString): Bool */
short int file__NativeString__file_mkdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string_NativeString_NativeString_file_mkdir_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_mkdir for (self: Object): Bool */
short int VIRTUAL_file__NativeString__file_mkdir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = file__NativeString__file_mkdir(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_delete for (self: NativeString): Bool */
short int file__NativeString__file_delete(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string_NativeString_NativeString_file_delete_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_delete for (self: Object): Bool */
short int VIRTUAL_file__NativeString__file_delete(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = file__NativeString__file_delete(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_chdir for (self: NativeString) */
void file__NativeString__file_chdir(char* self) {
string_NativeString_NativeString_file_chdir_0(self);
RET_LABEL:;
}
/* method file#NativeString#file_chdir for (self: Object) */
void VIRTUAL_file__NativeString__file_chdir(val* self) {
char* var /* : NativeString */;
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
file__NativeString__file_chdir(var);
RET_LABEL:;
}
/* method file#NativeString#file_realpath for (self: NativeString): NativeString */
char* file__NativeString__file_realpath(char* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = file_NativeString_realpath(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_realpath for (self: Object): NativeString */
char* VIRTUAL_file__NativeString__file_realpath(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = file__NativeString__file_realpath(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#mode for (self: FileStat): Int */
long file__FileStat__mode(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_FileStat_FileStat_mode_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#mode for (self: Object): Int */
long VIRTUAL_file__FileStat__mode(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__mode(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#atime for (self: FileStat): Int */
long file__FileStat__atime(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_FileStat_FileStat_atime_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#atime for (self: Object): Int */
long VIRTUAL_file__FileStat__atime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__atime(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#ctime for (self: FileStat): Int */
long file__FileStat__ctime(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_FileStat_FileStat_ctime_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#ctime for (self: Object): Int */
long VIRTUAL_file__FileStat__ctime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__ctime(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#mtime for (self: FileStat): Int */
long file__FileStat__mtime(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_FileStat_FileStat_mtime_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#mtime for (self: Object): Int */
long VIRTUAL_file__FileStat__mtime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__mtime(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#size for (self: FileStat): Int */
long file__FileStat__size(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_FileStat_FileStat_size_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#size for (self: Object): Int */
long VIRTUAL_file__FileStat__size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__size(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_reg for (self: FileStat): Bool */
short int file__FileStat__is_reg(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_reg at lib/standard/file.nit:384,2--54\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_reg for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_reg(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_dir for (self: FileStat): Bool */
short int file__FileStat__is_dir(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_dir at lib/standard/file.nit:385,2--54\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_dir for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_dir(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_chr for (self: FileStat): Bool */
short int file__FileStat__is_chr(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_chr at lib/standard/file.nit:386,2--54\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_chr for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_chr(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_blk for (self: FileStat): Bool */
short int file__FileStat__is_blk(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_blk at lib/standard/file.nit:387,2--54\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_blk for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_blk(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_fifo for (self: FileStat): Bool */
short int file__FileStat__is_fifo(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_fifo at lib/standard/file.nit:388,2--56\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_fifo for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_fifo(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_lnk for (self: FileStat): Bool */
short int file__FileStat__is_lnk(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_lnk at lib/standard/file.nit:389,2--54\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_lnk for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_lnk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_lnk(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_sock for (self: FileStat): Bool */
short int file__FileStat__is_sock(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for file#FileStat#is_sock at lib/standard/file.nit:390,2--56\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method file#FileStat#is_sock for (self: Object): Bool */
short int VIRTUAL_file__FileStat__is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : FileStat */;
var2 = ((struct instance_file__FileStat*)self)->value; /* autounbox from Object to FileStat */;
var1 = file__FileStat__is_sock(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: NativeFile, NativeString, Int): Int */
long file__NativeFile__io_read(void* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_NativeFile_NativeFile_io_read_2(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: Object, NativeString, Int): Int */
long VIRTUAL_file__NativeFile__io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__io_read(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: NativeFile, NativeString, Int): Int */
long file__NativeFile__io_write(void* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_NativeFile_NativeFile_io_write_2(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: Object, NativeString, Int): Int */
long VIRTUAL_file__NativeFile__io_write(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__io_write(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: NativeFile): Int */
long file__NativeFile__io_close(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = file_NativeFile_NativeFile_io_close_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: Object): Int */
long VIRTUAL_file__NativeFile__io_close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__io_close(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#file_stat for (self: NativeFile): FileStat */
void* file__NativeFile__file_stat(void* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
var1 = file_NativeFile_NativeFile_file_stat_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#file_stat for (self: Object): FileStat */
void* VIRTUAL_file__NativeFile__file_stat(val* self) {
void* var /* : FileStat */;
void* var1 /* : FileStat */;
void* var2 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__file_stat(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: NativeFile, NativeString): NativeFile */
void* file__NativeFile__io_open_read(void* self, char* p0) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_read_1(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: Object, NativeString): NativeFile */
void* VIRTUAL_file__NativeFile__io_open_read(val* self, char* p0) {
void* var /* : NativeFile */;
val* var1 /* : Object */;
void* var2 /* : NativeFile */;
void* var3 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__io_open_read(var2, p0);
var3 = ((struct instance_file__NativeFile*)var1)->value; /* autounbox from Object to NativeFile */;
var = var3;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: NativeFile, NativeString): NativeFile */
void* file__NativeFile__io_open_write(void* self, char* p0) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_write_1(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: Object, NativeString): NativeFile */
void* VIRTUAL_file__NativeFile__io_open_write(val* self, char* p0) {
void* var /* : NativeFile */;
val* var1 /* : Object */;
void* var2 /* : NativeFile */;
void* var3 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__io_open_write(var2, p0);
var3 = ((struct instance_file__NativeFile*)var1)->value; /* autounbox from Object to NativeFile */;
var = var3;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: NativeFile): NativeFile */
void* file__NativeFile__native_stdin(void* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdin_0();
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: Object): NativeFile */
void* VIRTUAL_file__NativeFile__native_stdin(val* self) {
void* var /* : NativeFile */;
val* var1 /* : Object */;
void* var2 /* : NativeFile */;
void* var3 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__native_stdin(var2);
var3 = ((struct instance_file__NativeFile*)var1)->value; /* autounbox from Object to NativeFile */;
var = var3;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: NativeFile): NativeFile */
void* file__NativeFile__native_stdout(void* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdout_0();
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: Object): NativeFile */
void* VIRTUAL_file__NativeFile__native_stdout(val* self) {
void* var /* : NativeFile */;
val* var1 /* : Object */;
void* var2 /* : NativeFile */;
void* var3 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__native_stdout(var2);
var3 = ((struct instance_file__NativeFile*)var1)->value; /* autounbox from Object to NativeFile */;
var = var3;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: NativeFile): NativeFile */
void* file__NativeFile__native_stderr(void* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stderr_0();
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: Object): NativeFile */
void* VIRTUAL_file__NativeFile__native_stderr(val* self) {
void* var /* : NativeFile */;
val* var1 /* : Object */;
void* var2 /* : NativeFile */;
void* var3 /* : NativeFile */;
var2 = ((struct instance_file__NativeFile*)self)->value; /* autounbox from Object to NativeFile */;
var1 = file__NativeFile__native_stderr(var2);
var3 = ((struct instance_file__NativeFile*)var1)->value; /* autounbox from Object to NativeFile */;
var = var3;
RET_LABEL:;
return var;
}
/* method file#Object#stdin for (self: Object): Stdin */
val* file__Object__stdin(val* self) {
val* var /* : Stdin */;
static val* varonce;
static int varonce_guard;
val* var1 /* : Stdin */;
val* var2 /* : Stdin */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_file__Stdin(&type_file__Stdin);
((void (*)(val*))(var2->class->vft[COLOR_file__Stdin__init]))(var2) /* init on <var2:Stdin>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#stdin for (self: Object): Stdin */
val* VIRTUAL_file__Object__stdin(val* self) {
val* var /* : Stdin */;
val* var1 /* : Stdin */;
var1 = file__Object__stdin(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#Object#stdout for (self: Object): OFStream */
val* file__Object__stdout(val* self) {
val* var /* : OFStream */;
static val* varonce;
static int varonce_guard;
val* var1 /* : Stdout */;
val* var2 /* : Stdout */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_file__Stdout(&type_file__Stdout);
((void (*)(val*))(var2->class->vft[COLOR_file__Stdout__init]))(var2) /* init on <var2:Stdout>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#stdout for (self: Object): OFStream */
val* VIRTUAL_file__Object__stdout(val* self) {
val* var /* : OFStream */;
val* var1 /* : OFStream */;
var1 = file__Object__stdout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#Object#stderr for (self: Object): OFStream */
val* file__Object__stderr(val* self) {
val* var /* : OFStream */;
static val* varonce;
static int varonce_guard;
val* var1 /* : Stderr */;
val* var2 /* : Stderr */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_file__Stderr(&type_file__Stderr);
((void (*)(val*))(var2->class->vft[COLOR_file__Stderr__init]))(var2) /* init on <var2:Stderr>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#stderr for (self: Object): OFStream */
val* VIRTUAL_file__Object__stderr(val* self) {
val* var /* : OFStream */;
val* var1 /* : OFStream */;
var1 = file__Object__stderr(self);
var = var1;
RET_LABEL:;
return var;
}
