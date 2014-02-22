#include "exec.sep.0.h"
/* method exec#Process#id for (self: Process): Int */
long exec__Process__id(val* self) {
long var /* : Int */;
void* var1 /* : NativeProcess */;
long var2 /* : Int */;
var1 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:Process>*/;
var2 = exec__NativeProcess__id(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#id for (self: Object): Int */
long VIRTUAL_exec__Process__id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec__Process__id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#is_finished for (self: Process): Bool */
short int exec__Process__is_finished(val* self) {
short int var /* : Bool */;
void* var1 /* : NativeProcess */;
short int var2 /* : Bool */;
var1 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:Process>*/;
var2 = exec__NativeProcess__is_finished(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#is_finished for (self: Object): Bool */
short int VIRTUAL_exec__Process__is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = exec__Process__is_finished(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#wait for (self: Process) */
void exec__Process__wait(val* self) {
void* var /* : NativeProcess */;
short int var1 /* : Bool */;
var = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:Process>*/;
exec__NativeProcess__wait(var);
var1 = ((short int (*)(val*))(self->class->vft[COLOR_exec__Process__is_finished]))(self) /* is_finished on <self:Process>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/exec.nit", 32);
show_backtrace(1);
}
RET_LABEL:;
}
/* method exec#Process#wait for (self: Object) */
void VIRTUAL_exec__Process__wait(val* self) {
exec__Process__wait(self);
RET_LABEL:;
}
/* method exec#Process#status for (self: Process): Int */
long exec__Process__status(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_exec__Process__is_finished]))(self) /* is_finished on <self:Process>*/;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/exec.nit", 38);
show_backtrace(1);
}
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:Process>*/;
var3 = exec__NativeProcess__status(var2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#status for (self: Object): Int */
long VIRTUAL_exec__Process__status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec__Process__status(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#init for (self: Process, String, Array[String]) */
void exec__Process__init(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
var_command = p0;
var_arguments = p1;
var = 0;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:Process>*/;
RET_LABEL:;
}
/* method exec#Process#init for (self: Object, String, Array[String]) */
void VIRTUAL_exec__Process__init(val* self, val* p0, val* p1) {
exec__Process__init(self, p0, p1);
RET_LABEL:;
}
/* method exec#Process#init_ for (self: Process, String) */
void exec__Process__init_(val* self, val* p0) {
val* var_command /* var command: String */;
val* var /* : null */;
long var1 /* : Int */;
var_command = p0;
var = NULL;
var1 = 0;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var, var1) /* execute on <self:Process>*/;
RET_LABEL:;
}
/* method exec#Process#init_ for (self: Object, String) */
void VIRTUAL_exec__Process__init_(val* self, val* p0) {
exec__Process__init_(self, p0);
RET_LABEL:;
}
/* method exec#Process#from_a for (self: Process, String, Array[String]) */
void exec__Process__from_a(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
var_command = p0;
var_arguments = p1;
var = 0;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:Process>*/;
RET_LABEL:;
}
/* method exec#Process#from_a for (self: Object, String, Array[String]) */
void VIRTUAL_exec__Process__from_a(val* self, val* p0, val* p1) {
exec__Process__from_a(self, p0, p1);
RET_LABEL:;
}
/* method exec#Process#execute for (self: Process, String, nullable Array[String], Int) */
void exec__Process__execute(val* self, val* p0, val* p1, long p2) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: nullable Array[String] */;
long var_pipeflags /* var pipeflags: Int */;
val* var /* : Buffer */;
val* var_args /* var args: Buffer */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_a /* var a: String */;
char var7 /* : Char */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
char* var15 /* : NativeString */;
void* var16 /* : NativeProcess */;
var_command = p0;
var_arguments = p1;
var_pipeflags = p2;
var = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var->class->vft[COLOR_string__Buffer__init]))(var) /* init on <var:Buffer>*/;
var_args = var;
var1 = 1;
var_l = var1;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__Sequence__append]))(var_args, var_command) /* append on <var_args:Buffer>*/;
var2 = NULL;
if (var_arguments == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_arguments) /* iterator on <var_arguments:nullable Array[String](Array[String])>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_a = var6;
var7 = '\0';
var8 = BOX_kernel__Char(var7); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var8) /* add on <var_args:Buffer>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__Sequence__append]))(var_args, var_a) /* append on <var_args:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var9 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:nullable Array[String](Array[String])>*/;
{ /* Inline kernel#Int#+ (var_l,var9) */
var12 = var_l + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var_l = var10;
} else {
}
var13 = ((char* (*)(val*))(var_command->class->vft[COLOR_string__String__to_cstring]))(var_command) /* to_cstring on <var_command:String>*/;
var14 = ((val* (*)(val*))(var_args->class->vft[COLOR_string__Object__to_s]))(var_args) /* to_s on <var_args:Buffer>*/;
var15 = ((char* (*)(val*))(var14->class->vft[COLOR_string__String__to_cstring]))(var14) /* to_cstring on <var14:String>*/;
var16 = ((void* (*)(val*, char*, char*, long, long))(self->class->vft[COLOR_exec__Process__basic_exec_execute]))(self, var13, var15, var_l, var_pipeflags) /* basic_exec_execute on <self:Process>*/;
((void (*)(val*, void*))(self->class->vft[COLOR_exec__Process__data_61d]))(self, var16) /* data= on <self:Process>*/;
RET_LABEL:;
}
/* method exec#Process#execute for (self: Object, String, nullable Array[String], Int) */
void VIRTUAL_exec__Process__execute(val* self, val* p0, val* p1, long p2) {
exec__Process__execute(self, p0, p1, p2);
RET_LABEL:;
}
/* method exec#Process#data for (self: Process): NativeProcess */
void* exec__Process__data(val* self) {
void* var /* : NativeProcess */;
void* var1 /* : NativeProcess */;
var1 = self->attrs[COLOR_exec__Process___64ddata].ptr; /* @data on <self:Process> */
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#data for (self: Object): NativeProcess */
void* VIRTUAL_exec__Process__data(val* self) {
void* var /* : NativeProcess */;
void* var1 /* : NativeProcess */;
var1 = exec__Process__data(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#data= for (self: Process, NativeProcess) */
void exec__Process__data_61d(val* self, void* p0) {
self->attrs[COLOR_exec__Process___64ddata].ptr = p0; /* @data on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#data= for (self: Object, NativeProcess) */
void VIRTUAL_exec__Process__data_61d(val* self, void* p0) {
exec__Process__data_61d(self, p0);
RET_LABEL:;
}
/* method exec#Process#basic_exec_execute for (self: Process, NativeString, NativeString, Int, Int): NativeProcess */
void* exec__Process__basic_exec_execute(val* self, char* p0, char* p1, long p2, long p3) {
void* var /* : NativeProcess */;
void* var1 /* : NativeProcess */;
var1 = exec_Process_Process_basic_exec_execute_4(self, p0, p1, p2, p3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#basic_exec_execute for (self: Object, NativeString, NativeString, Int, Int): NativeProcess */
void* VIRTUAL_exec__Process__basic_exec_execute(val* self, char* p0, char* p1, long p2, long p3) {
void* var /* : NativeProcess */;
void* var1 /* : NativeProcess */;
var1 = exec__Process__basic_exec_execute(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#IProcess#stream_in for (self: IProcess): FDIStream */
val* exec__IProcess__stream_in(val* self) {
val* var /* : FDIStream */;
val* var1 /* : FDIStream */;
var1 = self->attrs[COLOR_exec__IProcess___64dstream_in].val; /* @stream_in on <self:IProcess> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @stream_in");
fprintf(stderr, " (%s:%d)\n", "lib/standard/exec.nit", 83);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#IProcess#stream_in for (self: Object): FDIStream */
val* VIRTUAL_exec__IProcess__stream_in(val* self) {
val* var /* : FDIStream */;
val* var1 /* : FDIStream */;
var1 = exec__IProcess__stream_in(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#IProcess#stream_in= for (self: IProcess, FDIStream) */
void exec__IProcess__stream_in_61d(val* self, val* p0) {
self->attrs[COLOR_exec__IProcess___64dstream_in].val = p0; /* @stream_in on <self:IProcess> */
RET_LABEL:;
}
/* method exec#IProcess#stream_in= for (self: Object, FDIStream) */
void VIRTUAL_exec__IProcess__stream_in_61d(val* self, val* p0) {
exec__IProcess__stream_in_61d(self, p0);
RET_LABEL:;
}
/* method exec#IProcess#close for (self: IProcess) */
void exec__IProcess__close(val* self) {
val* var /* : FDIStream */;
var = ((val* (*)(val*))(self->class->vft[COLOR_exec__IProcess__stream_in]))(self) /* stream_in on <self:IProcess>*/;
((void (*)(val*))(var->class->vft[COLOR_stream__IOS__close]))(var) /* close on <var:FDIStream>*/;
RET_LABEL:;
}
/* method exec#IProcess#close for (self: Object) */
void VIRTUAL_exec__IProcess__close(val* self) {
exec__IProcess__close(self);
RET_LABEL:;
}
/* method exec#IProcess#read_char for (self: IProcess): Int */
long exec__IProcess__read_char(val* self) {
long var /* : Int */;
val* var1 /* : FDIStream */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_exec__IProcess__stream_in]))(self) /* stream_in on <self:IProcess>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_stream__IStream__read_char]))(var1) /* read_char on <var1:FDIStream>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#IProcess#read_char for (self: Object): Int */
long VIRTUAL_exec__IProcess__read_char(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec__IProcess__read_char(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#IProcess#eof for (self: IProcess): Bool */
short int exec__IProcess__eof(val* self) {
short int var /* : Bool */;
val* var1 /* : FDIStream */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_exec__IProcess__stream_in]))(self) /* stream_in on <self:IProcess>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_stream__IStream__eof]))(var1) /* eof on <var1:FDIStream>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#IProcess#eof for (self: Object): Bool */
short int VIRTUAL_exec__IProcess__eof(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = exec__IProcess__eof(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#IProcess#init for (self: IProcess, String, Array[String]) */
void exec__IProcess__init(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
val* var1 /* : FDIStream */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
var_command = p0;
var_arguments = p1;
var = 2;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:IProcess>*/;
var1 = NEW_stream__FDIStream(&type_stream__FDIStream);
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IProcess>*/;
var3 = exec__NativeProcess__out_fd(var2);
((void (*)(val*, long))(var1->class->vft[COLOR_stream__FDIStream__init]))(var1, var3) /* init on <var1:FDIStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__IProcess__stream_in_61d]))(self, var1) /* stream_in= on <self:IProcess>*/;
RET_LABEL:;
}
/* method exec#IProcess#init for (self: Object, String, Array[String]) */
void VIRTUAL_exec__IProcess__init(val* self, val* p0, val* p1) {
exec__IProcess__init(self, p0, p1);
RET_LABEL:;
}
/* method exec#IProcess#init_ for (self: IProcess, String) */
void exec__IProcess__init_(val* self, val* p0) {
val* var_command /* var command: String */;
val* var /* : null */;
long var1 /* : Int */;
val* var2 /* : FDIStream */;
void* var3 /* : NativeProcess */;
long var4 /* : Int */;
var_command = p0;
var = NULL;
var1 = 2;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var, var1) /* execute on <self:IProcess>*/;
var2 = NEW_stream__FDIStream(&type_stream__FDIStream);
var3 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IProcess>*/;
var4 = exec__NativeProcess__out_fd(var3);
((void (*)(val*, long))(var2->class->vft[COLOR_stream__FDIStream__init]))(var2, var4) /* init on <var2:FDIStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__IProcess__stream_in_61d]))(self, var2) /* stream_in= on <self:IProcess>*/;
RET_LABEL:;
}
/* method exec#IProcess#init_ for (self: Object, String) */
void VIRTUAL_exec__IProcess__init_(val* self, val* p0) {
exec__IProcess__init_(self, p0);
RET_LABEL:;
}
/* method exec#IProcess#from_a for (self: IProcess, String, Array[String]) */
void exec__IProcess__from_a(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
val* var1 /* : FDIStream */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
var_command = p0;
var_arguments = p1;
var = 2;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:IProcess>*/;
var1 = NEW_stream__FDIStream(&type_stream__FDIStream);
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IProcess>*/;
var3 = exec__NativeProcess__out_fd(var2);
((void (*)(val*, long))(var1->class->vft[COLOR_stream__FDIStream__init]))(var1, var3) /* init on <var1:FDIStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__IProcess__stream_in_61d]))(self, var1) /* stream_in= on <self:IProcess>*/;
RET_LABEL:;
}
/* method exec#IProcess#from_a for (self: Object, String, Array[String]) */
void VIRTUAL_exec__IProcess__from_a(val* self, val* p0, val* p1) {
exec__IProcess__from_a(self, p0, p1);
RET_LABEL:;
}
/* method exec#OProcess#stream_out for (self: OProcess): OStream */
val* exec__OProcess__stream_out(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
var1 = self->attrs[COLOR_exec__OProcess___64dstream_out].val; /* @stream_out on <self:OProcess> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @stream_out");
fprintf(stderr, " (%s:%d)\n", "lib/standard/exec.nit", 114);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#OProcess#stream_out for (self: Object): OStream */
val* VIRTUAL_exec__OProcess__stream_out(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
var1 = exec__OProcess__stream_out(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#OProcess#stream_out= for (self: OProcess, OStream) */
void exec__OProcess__stream_out_61d(val* self, val* p0) {
self->attrs[COLOR_exec__OProcess___64dstream_out].val = p0; /* @stream_out on <self:OProcess> */
RET_LABEL:;
}
/* method exec#OProcess#stream_out= for (self: Object, OStream) */
void VIRTUAL_exec__OProcess__stream_out_61d(val* self, val* p0) {
exec__OProcess__stream_out_61d(self, p0);
RET_LABEL:;
}
/* method exec#OProcess#close for (self: OProcess) */
void exec__OProcess__close(val* self) {
val* var /* : OStream */;
var = ((val* (*)(val*))(self->class->vft[COLOR_exec__OProcess__stream_out]))(self) /* stream_out on <self:OProcess>*/;
((void (*)(val*))(var->class->vft[COLOR_stream__IOS__close]))(var) /* close on <var:OStream>*/;
RET_LABEL:;
}
/* method exec#OProcess#close for (self: Object) */
void VIRTUAL_exec__OProcess__close(val* self) {
exec__OProcess__close(self);
RET_LABEL:;
}
/* method exec#OProcess#is_writable for (self: OProcess): Bool */
short int exec__OProcess__is_writable(val* self) {
short int var /* : Bool */;
val* var1 /* : OStream */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_exec__OProcess__stream_out]))(self) /* stream_out on <self:OProcess>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_stream__OStream__is_writable]))(var1) /* is_writable on <var1:OStream>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#OProcess#is_writable for (self: Object): Bool */
short int VIRTUAL_exec__OProcess__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = exec__OProcess__is_writable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#OProcess#write for (self: OProcess, String) */
void exec__OProcess__write(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : OStream */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_exec__OProcess__stream_out]))(self) /* stream_out on <self:OProcess>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_stream__OStream__write]))(var, var_s) /* write on <var:OStream>*/;
RET_LABEL:;
}
/* method exec#OProcess#write for (self: Object, String) */
void VIRTUAL_exec__OProcess__write(val* self, val* p0) {
exec__OProcess__write(self, p0);
RET_LABEL:;
}
/* method exec#OProcess#init for (self: OProcess, String, Array[String]) */
void exec__OProcess__init(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
val* var1 /* : FDOStream */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
var_command = p0;
var_arguments = p1;
var = 1;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:OProcess>*/;
var1 = NEW_stream__FDOStream(&type_stream__FDOStream);
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:OProcess>*/;
var3 = exec__NativeProcess__in_fd(var2);
((void (*)(val*, long))(var1->class->vft[COLOR_stream__FDOStream__init]))(var1, var3) /* init on <var1:FDOStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__OProcess__stream_out_61d]))(self, var1) /* stream_out= on <self:OProcess>*/;
RET_LABEL:;
}
/* method exec#OProcess#init for (self: Object, String, Array[String]) */
void VIRTUAL_exec__OProcess__init(val* self, val* p0, val* p1) {
exec__OProcess__init(self, p0, p1);
RET_LABEL:;
}
/* method exec#OProcess#init_ for (self: OProcess, String) */
void exec__OProcess__init_(val* self, val* p0) {
val* var_command /* var command: String */;
val* var /* : null */;
long var1 /* : Int */;
val* var2 /* : FDOStream */;
void* var3 /* : NativeProcess */;
long var4 /* : Int */;
var_command = p0;
var = NULL;
var1 = 1;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var, var1) /* execute on <self:OProcess>*/;
var2 = NEW_stream__FDOStream(&type_stream__FDOStream);
var3 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:OProcess>*/;
var4 = exec__NativeProcess__in_fd(var3);
((void (*)(val*, long))(var2->class->vft[COLOR_stream__FDOStream__init]))(var2, var4) /* init on <var2:FDOStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__OProcess__stream_out_61d]))(self, var2) /* stream_out= on <self:OProcess>*/;
RET_LABEL:;
}
/* method exec#OProcess#init_ for (self: Object, String) */
void VIRTUAL_exec__OProcess__init_(val* self, val* p0) {
exec__OProcess__init_(self, p0);
RET_LABEL:;
}
/* method exec#OProcess#from_a for (self: OProcess, String, Array[String]) */
void exec__OProcess__from_a(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
val* var1 /* : FDOStream */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
var_command = p0;
var_arguments = p1;
var = 1;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:OProcess>*/;
var1 = NEW_stream__FDOStream(&type_stream__FDOStream);
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:OProcess>*/;
var3 = exec__NativeProcess__in_fd(var2);
((void (*)(val*, long))(var1->class->vft[COLOR_stream__FDOStream__init]))(var1, var3) /* init on <var1:FDOStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__OProcess__stream_out_61d]))(self, var1) /* stream_out= on <self:OProcess>*/;
RET_LABEL:;
}
/* method exec#OProcess#from_a for (self: Object, String, Array[String]) */
void VIRTUAL_exec__OProcess__from_a(val* self, val* p0, val* p1) {
exec__OProcess__from_a(self, p0, p1);
RET_LABEL:;
}
/* method exec#IOProcess#close for (self: IOProcess) */
void exec__IOProcess__close(val* self) {
val* var /* : FDIStream */;
val* var1 /* : OStream */;
var = ((val* (*)(val*))(self->class->vft[COLOR_exec__IProcess__stream_in]))(self) /* stream_in on <self:IOProcess>*/;
((void (*)(val*))(var->class->vft[COLOR_stream__IOS__close]))(var) /* close on <var:FDIStream>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_exec__OProcess__stream_out]))(self) /* stream_out on <self:IOProcess>*/;
((void (*)(val*))(var1->class->vft[COLOR_stream__IOS__close]))(var1) /* close on <var1:OStream>*/;
RET_LABEL:;
}
/* method exec#IOProcess#close for (self: Object) */
void VIRTUAL_exec__IOProcess__close(val* self) {
exec__IOProcess__close(self);
RET_LABEL:;
}
/* method exec#IOProcess#init for (self: IOProcess, String, Array[String]) */
void exec__IOProcess__init(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
val* var1 /* : FDIStream */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
val* var4 /* : FDOStream */;
void* var5 /* : NativeProcess */;
long var6 /* : Int */;
var_command = p0;
var_arguments = p1;
var = 3;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:IOProcess>*/;
var1 = NEW_stream__FDIStream(&type_stream__FDIStream);
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IOProcess>*/;
var3 = exec__NativeProcess__out_fd(var2);
((void (*)(val*, long))(var1->class->vft[COLOR_stream__FDIStream__init]))(var1, var3) /* init on <var1:FDIStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__IProcess__stream_in_61d]))(self, var1) /* stream_in= on <self:IOProcess>*/;
var4 = NEW_stream__FDOStream(&type_stream__FDOStream);
var5 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IOProcess>*/;
var6 = exec__NativeProcess__in_fd(var5);
((void (*)(val*, long))(var4->class->vft[COLOR_stream__FDOStream__init]))(var4, var6) /* init on <var4:FDOStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__OProcess__stream_out_61d]))(self, var4) /* stream_out= on <self:IOProcess>*/;
RET_LABEL:;
}
/* method exec#IOProcess#init for (self: Object, String, Array[String]) */
void VIRTUAL_exec__IOProcess__init(val* self, val* p0, val* p1) {
exec__IOProcess__init(self, p0, p1);
RET_LABEL:;
}
/* method exec#IOProcess#init_ for (self: IOProcess, String) */
void exec__IOProcess__init_(val* self, val* p0) {
val* var_command /* var command: String */;
val* var /* : null */;
long var1 /* : Int */;
val* var2 /* : FDIStream */;
void* var3 /* : NativeProcess */;
long var4 /* : Int */;
val* var5 /* : FDOStream */;
void* var6 /* : NativeProcess */;
long var7 /* : Int */;
var_command = p0;
var = NULL;
var1 = 3;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var, var1) /* execute on <self:IOProcess>*/;
var2 = NEW_stream__FDIStream(&type_stream__FDIStream);
var3 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IOProcess>*/;
var4 = exec__NativeProcess__out_fd(var3);
((void (*)(val*, long))(var2->class->vft[COLOR_stream__FDIStream__init]))(var2, var4) /* init on <var2:FDIStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__IProcess__stream_in_61d]))(self, var2) /* stream_in= on <self:IOProcess>*/;
var5 = NEW_stream__FDOStream(&type_stream__FDOStream);
var6 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IOProcess>*/;
var7 = exec__NativeProcess__in_fd(var6);
((void (*)(val*, long))(var5->class->vft[COLOR_stream__FDOStream__init]))(var5, var7) /* init on <var5:FDOStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__OProcess__stream_out_61d]))(self, var5) /* stream_out= on <self:IOProcess>*/;
RET_LABEL:;
}
/* method exec#IOProcess#init_ for (self: Object, String) */
void VIRTUAL_exec__IOProcess__init_(val* self, val* p0) {
exec__IOProcess__init_(self, p0);
RET_LABEL:;
}
/* method exec#IOProcess#from_a for (self: IOProcess, String, Array[String]) */
void exec__IOProcess__from_a(val* self, val* p0, val* p1) {
val* var_command /* var command: String */;
val* var_arguments /* var arguments: Array[String] */;
long var /* : Int */;
val* var1 /* : FDIStream */;
void* var2 /* : NativeProcess */;
long var3 /* : Int */;
val* var4 /* : FDOStream */;
void* var5 /* : NativeProcess */;
long var6 /* : Int */;
var_command = p0;
var_arguments = p1;
var = 3;
((void (*)(val*, val*, val*, long))(self->class->vft[COLOR_exec__Process__execute]))(self, var_command, var_arguments, var) /* execute on <self:IOProcess>*/;
var1 = NEW_stream__FDIStream(&type_stream__FDIStream);
var2 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IOProcess>*/;
var3 = exec__NativeProcess__out_fd(var2);
((void (*)(val*, long))(var1->class->vft[COLOR_stream__FDIStream__init]))(var1, var3) /* init on <var1:FDIStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__IProcess__stream_in_61d]))(self, var1) /* stream_in= on <self:IOProcess>*/;
var4 = NEW_stream__FDOStream(&type_stream__FDOStream);
var5 = ((void* (*)(val*))(self->class->vft[COLOR_exec__Process__data]))(self) /* data on <self:IOProcess>*/;
var6 = exec__NativeProcess__in_fd(var5);
((void (*)(val*, long))(var4->class->vft[COLOR_stream__FDOStream__init]))(var4, var6) /* init on <var4:FDOStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_exec__OProcess__stream_out_61d]))(self, var4) /* stream_out= on <self:IOProcess>*/;
RET_LABEL:;
}
/* method exec#IOProcess#from_a for (self: Object, String, Array[String]) */
void VIRTUAL_exec__IOProcess__from_a(val* self, val* p0, val* p1) {
exec__IOProcess__from_a(self, p0, p1);
RET_LABEL:;
}
/* method exec#Sys#system for (self: Sys, String): Int */
long exec__Sys__system(val* self, val* p0) {
long var /* : Int */;
val* var_command /* var command: String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
var_command = p0;
var1 = ((char* (*)(val*))(var_command->class->vft[COLOR_string__String__to_cstring]))(var_command) /* to_cstring on <var_command:String>*/;
var2 = exec__NativeString__system(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Sys#system for (self: Object, String): Int */
long VIRTUAL_exec__Sys__system(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec__Sys__system(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeString#system for (self: NativeString): Int */
long exec__NativeString__system(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_NativeString_NativeString_system_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeString#system for (self: Object): Int */
long VIRTUAL_exec__NativeString__system(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = exec__NativeString__system(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#id for (self: NativeProcess): Int */
long exec__NativeProcess__id(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec_NativeProcess_NativeProcess_id_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#id for (self: Object): Int */
long VIRTUAL_exec__NativeProcess__id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess */;
var2 = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
var1 = exec__NativeProcess__id(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#is_finished for (self: NativeProcess): Bool */
short int exec__NativeProcess__is_finished(void* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = exec_NativeProcess_NativeProcess_is_finished_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#is_finished for (self: Object): Bool */
short int VIRTUAL_exec__NativeProcess__is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeProcess */;
var2 = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
var1 = exec__NativeProcess__is_finished(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#status for (self: NativeProcess): Int */
long exec__NativeProcess__status(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec_NativeProcess_NativeProcess_status_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#status for (self: Object): Int */
long VIRTUAL_exec__NativeProcess__status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess */;
var2 = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
var1 = exec__NativeProcess__status(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#wait for (self: NativeProcess) */
void exec__NativeProcess__wait(void* self) {
exec_NativeProcess_NativeProcess_wait_0(self);
RET_LABEL:;
}
/* method exec#NativeProcess#wait for (self: Object) */
void VIRTUAL_exec__NativeProcess__wait(val* self) {
void* var /* : NativeProcess */;
var = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
exec__NativeProcess__wait(var);
RET_LABEL:;
}
/* method exec#NativeProcess#in_fd for (self: NativeProcess): Int */
long exec__NativeProcess__in_fd(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec_NativeProcess_NativeProcess_in_fd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#in_fd for (self: Object): Int */
long VIRTUAL_exec__NativeProcess__in_fd(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess */;
var2 = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
var1 = exec__NativeProcess__in_fd(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#out_fd for (self: NativeProcess): Int */
long exec__NativeProcess__out_fd(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec_NativeProcess_NativeProcess_out_fd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#out_fd for (self: Object): Int */
long VIRTUAL_exec__NativeProcess__out_fd(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess */;
var2 = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
var1 = exec__NativeProcess__out_fd(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#err_fd for (self: NativeProcess): Int */
long exec__NativeProcess__err_fd(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec_NativeProcess_NativeProcess_err_fd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#err_fd for (self: Object): Int */
long VIRTUAL_exec__NativeProcess__err_fd(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess */;
var2 = ((struct instance_exec__NativeProcess*)self)->value; /* autounbox from Object to NativeProcess */;
var1 = exec__NativeProcess__err_fd(var2);
var = var1;
RET_LABEL:;
return var;
}
