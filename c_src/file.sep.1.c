#include "file.sep.0.h"
/* method file#FStream#path= for (self: FStream, nullable String) */
void file__FStream__path_61d(val* self, val* p0) {
self->attrs[COLOR_file__FStream___path].val = p0; /* _path on <self:FStream> */
RET_LABEL:;
}
/* method file#FStream#path= for (self: Object, nullable String) */
void VIRTUAL_file__FStream__path_61d(val* self, val* p0) {
{ /* Inline file#FStream#path= (self,p0) on <self:Object(FStream)> */
self->attrs[COLOR_file__FStream___path].val = p0; /* _path on <self:Object(FStream)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method file#FStream#init for (self: FStream) */
void file__FStream__init(val* self) {
RET_LABEL:;
}
/* method file#FStream#init for (self: Object) */
void VIRTUAL_file__FStream__init(val* self) {
{ /* Inline file#FStream#init (self) on <self:Object(FStream)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method file#IFStream#close for (self: IFStream) */
void file__IFStream__close(val* self) {
val* var /* : nullable NativeFile */;
long var1 /* : Int */;
long var3 /* : Int */;
void* var4 /* : NativeFile */;
long var_i /* var i: Int */;
short int var5 /* : Bool */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 63);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_close (var) on <var:nullable NativeFile> */
var4 = ((struct instance_kernel__Pointer*)var)->value; /* autounbox from nullable NativeFile to NativeFile */;
var3 = file_NativeFile_NativeFile_io_close_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
var5 = 1;
{
{ /* Inline file#IFStream#end_reached= (self,var5) on <self:IFStream> */
self->attrs[COLOR_file__IFStream___end_reached].s = var5; /* _end_reached on <self:IFStream> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method file#IFStream#close for (self: Object) */
void VIRTUAL_file__IFStream__close(val* self) {
file__IFStream__close(self); /* Direct call file#IFStream#close on <self:Object(IFStream)>*/
RET_LABEL:;
}
/* method file#IFStream#fill_buffer for (self: IFStream) */
void file__IFStream__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : nullable FlatBuffer */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
val* var5 /* : nullable FlatBuffer */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
void* var12 /* : NativeFile */;
long var_nb /* var nb: Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var20 /* : Int */;
val* var21 /* : nullable FlatBuffer */;
long var23 /* : Int */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
var1 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 69);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#items (var1) on <var1:nullable FlatBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 551);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_string__FlatText___items].str; /* _items on <var1:nullable FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 69);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#capacity (var5) on <var5:nullable FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 1165);
show_backtrace(1);
}
var8 = var5->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <var5:nullable FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 69);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_read (var,var2,var6) on <var:nullable NativeFile> */
var12 = ((struct instance_kernel__Pointer*)var)->value; /* autounbox from nullable NativeFile to NativeFile */;
var11 = file_NativeFile_NativeFile_io_read_2(var12, var2, var6);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_nb = var9;
var13 = 0;
{
{ /* Inline kernel#Int#<= (var_nb,var13) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var17 = var_nb <= var13;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var18 = 1;
{
{ /* Inline file#IFStream#end_reached= (self,var18) on <self:IFStream> */
self->attrs[COLOR_file__IFStream___end_reached].s = var18; /* _end_reached on <self:IFStream> */
RET_LABEL19:(void)0;
}
}
var20 = 0;
var_nb = var20;
} else {
}
var21 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 74);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length= (var21,var_nb) on <var21:nullable FlatBuffer> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 556);
show_backtrace(1);
}
var21->attrs[COLOR_string__FlatText___length].l = var_nb; /* _length on <var21:nullable FlatBuffer> */
RET_LABEL22:(void)0;
}
}
var23 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var23; /* _buffer_pos on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#fill_buffer for (self: Object) */
void VIRTUAL_file__IFStream__fill_buffer(val* self) {
file__IFStream__fill_buffer(self); /* Direct call file#IFStream#fill_buffer on <self:Object(IFStream)>*/
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
short int var3 /* : Bool */;
{ /* Inline file#IFStream#end_reached (self) on <self:Object(IFStream)> */
var3 = self->attrs[COLOR_file__IFStream___end_reached].s; /* _end_reached on <self:Object(IFStream)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#IFStream#end_reached= for (self: IFStream, Bool) */
void file__IFStream__end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_file__IFStream___end_reached].s = p0; /* _end_reached on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#end_reached= for (self: Object, Bool) */
void VIRTUAL_file__IFStream__end_reached_61d(val* self, short int p0) {
{ /* Inline file#IFStream#end_reached= (self,p0) on <self:Object(IFStream)> */
self->attrs[COLOR_file__IFStream___end_reached].s = p0; /* _end_reached on <self:Object(IFStream)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method file#IFStream#open for (self: IFStream, String) */
void file__IFStream__open(val* self, val* p0) {
val* var_path /* var path: String */;
long var /* : Int */;
void* var4 /* : NativeFile */;
char* var5 /* : NativeString */;
void* var6 /* : NativeFile */;
void* var8 /* : NativeFile */;
val* var9 /* : nullable NativeFile */;
val* var10 /* : nullable NativeFile */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
void* var14 /* : Pointer */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Sys */;
val* var27 /* : Sys */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
{
{ /* Inline file#FStream#init (self) on <self:IFStream> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline stream#BufferedIStream#init (self) on <self:IFStream> */
RET_LABEL2:(void)0;
}
}
var_path = p0;
{
{ /* Inline file#FStream#path= (self,var_path) on <self:IFStream> */
self->attrs[COLOR_file__FStream___path].val = var_path; /* _path on <self:IFStream> */
RET_LABEL3:(void)0;
}
}
var = 10;
{
stream__BufferedIStream__prepare_buffer(self, var); /* Direct call stream#BufferedIStream#prepare_buffer on <self:IFStream>*/
}
var4 = NULL/*special!*/;
{
var5 = string__FlatString__to_cstring(var_path);
}
{
{ /* Inline file#NativeFile#io_open_read (var4,var5) on <var4:NativeFile> */
var8 = file_NativeFileCapable_NativeFileCapable_io_open_read_1(var5);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var9 = BOX_file__NativeFile(var6); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var9; /* _file on <self:IFStream> */
var10 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 87);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var10) on <var10:nullable NativeFile> */
var14 = ((struct instance_kernel__Pointer*)var10)->value; /* autounbox from nullable NativeFile to Pointer */;
var13 = address_is_null(var14);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var15 = !var11;
if (unlikely(!var15)) {
if (varonce) {
var16 = varonce;
} else {
var17 = "Error: Opening file at \'";
var18 = 24;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\' failed with \'";
var23 = 15;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
{ /* Inline kernel#Object#sys (self) on <self:IFStream> */
var27 = glob_sys;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var25) on <var25:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var25;
var30 = kernel___Sys_errno___impl(var_for_c_0);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var31 = string__Int__strerror(var28);
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "\'";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 5;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_path;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var31;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var33;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
file__Object__print(self, var40); /* Direct call file#Object#print on <self:IFStream>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 87);
show_backtrace(1);
}
RET_LABEL:;
}
/* method file#IFStream#open for (self: Object, String) */
void VIRTUAL_file__IFStream__open(val* self, val* p0) {
file__IFStream__open(self, p0); /* Direct call file#IFStream#open on <self:Object(IFStream)>*/
RET_LABEL:;
}
/* method file#IFStream#init for (self: IFStream) */
void file__IFStream__init(val* self) {
{
{ /* Inline file#FStream#init (self) on <self:IFStream> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline stream#BufferedIStream#init (self) on <self:IFStream> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method file#IFStream#init for (self: Object) */
void VIRTUAL_file__IFStream__init(val* self) {
file__IFStream__init(self); /* Direct call file#IFStream#init on <self:Object(IFStream)>*/
RET_LABEL:;
}
/* method file#OFStream#write for (self: OFStream, Text) */
void file__OFStream__write(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var6 /* : Iterator[Text] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_i /* var i: Text */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
long var13 /* : Int */;
var_s = p0;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:OFStream> */
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 103);
show_backtrace(1);
}
/* <var_s:Text> isa FlatText */
cltype = type_string__FlatText.color;
idtype = type_string__FlatText.id;
if(cltype >= var_s->type->table_size) {
var1 = 0;
} else {
var1 = var_s->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = ((char* (*)(val*))(var_s->class->vft[COLOR_string__Text__to_cstring]))(var_s) /* to_cstring on <var_s:Text(FlatText)>*/;
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text(FlatText)> */
var5 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:Text(FlatText)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
file__OFStream__write_native(self, var2, var3); /* Direct call file#OFStream#write_native on <self:OFStream>*/
}
} else {
{
var6 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Text__substrings]))(var_s) /* substrings on <var_s:Text>*/;
}
{
var7 = abstract_collection__Iterator__iterator(var6);
}
for(;;) {
{
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
}
if(!var8) break;
{
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
var_i = var9;
{
var10 = ((char* (*)(val*))(var_i->class->vft[COLOR_string__Text__to_cstring]))(var_i) /* to_cstring on <var_i:Text>*/;
}
{
{ /* Inline string#FlatText#length (var_i) on <var_i:Text> */
var13 = var_i->attrs[COLOR_string__FlatText___length].l; /* _length on <var_i:Text> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
file__OFStream__write_native(self, var10, var11); /* Direct call file#OFStream#write_native on <self:OFStream>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
}
RET_LABEL:;
}
/* method file#OFStream#write for (self: Object, Text) */
void VIRTUAL_file__OFStream__write(val* self, val* p0) {
file__OFStream__write(self, p0); /* Direct call file#OFStream#write on <self:Object(OFStream)>*/
RET_LABEL:;
}
/* method file#OFStream#close for (self: OFStream) */
void file__OFStream__close(val* self) {
val* var /* : nullable NativeFile */;
long var1 /* : Int */;
long var3 /* : Int */;
void* var4 /* : NativeFile */;
long var_i /* var i: Int */;
short int var5 /* : Bool */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 115);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_close (var) on <var:nullable NativeFile> */
var4 = ((struct instance_kernel__Pointer*)var)->value; /* autounbox from nullable NativeFile to NativeFile */;
var3 = file_NativeFile_NativeFile_io_close_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
var5 = 0;
self->attrs[COLOR_file__OFStream___writable].s = var5; /* _writable on <self:OFStream> */
RET_LABEL:;
}
/* method file#OFStream#close for (self: Object) */
void VIRTUAL_file__OFStream__close(val* self) {
file__OFStream__close(self); /* Direct call file#OFStream#close on <self:Object(OFStream)>*/
RET_LABEL:;
}
/* method file#OFStream#write_native for (self: OFStream, NativeString, Int) */
void file__OFStream__write_native(val* self, char* p0, long p1) {
char* var_native /* var native: NativeString */;
long var_len /* var len: Int */;
short int var /* : Bool */;
val* var1 /* : nullable NativeFile */;
long var2 /* : Int */;
long var4 /* : Int */;
void* var5 /* : NativeFile */;
long var_err /* var err: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : Object */;
val* var29 /* : Object */;
var_native = p0;
var_len = p1;
var = self->attrs[COLOR_file__OFStream___writable].s; /* _writable on <self:OFStream> */
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 125);
show_backtrace(1);
}
var1 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 126);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_write (var1,var_native,var_len) on <var1:nullable NativeFile> */
var5 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from nullable NativeFile to NativeFile */;
var4 = file_NativeFile_NativeFile_io_write_2(var5, var_native, var_len);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_err = var2;
{
{ /* Inline kernel#Int#!= (var_err,var_len) on <var_err:Int> */
var9 = var_err == var_len;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
if (varonce) {
var11 = varonce;
} else {
var12 = "Problem in writing : ";
var13 = 21;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = " ";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\n";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 5;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var11;
var28 = BOX_kernel__Int(var_err); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var28;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var16;
var29 = BOX_kernel__Int(var_len); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var27)->values[3] = (val*) var29;
((struct instance_array__NativeArray*)var27)->values[4] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
file__Object__printn(self, var25); /* Direct call file#Object#printn on <self:OFStream>*/
}
} else {
}
RET_LABEL:;
}
/* method file#OFStream#write_native for (self: Object, NativeString, Int) */
void VIRTUAL_file__OFStream__write_native(val* self, char* p0, long p1) {
file__OFStream__write_native(self, p0, p1); /* Direct call file#OFStream#write_native on <self:Object(OFStream)>*/
RET_LABEL:;
}
/* method file#OFStream#open for (self: OFStream, String) */
void file__OFStream__open(val* self, val* p0) {
val* var_path /* var path: String */;
void* var /* : NativeFile */;
char* var2 /* : NativeString */;
void* var3 /* : NativeFile */;
void* var5 /* : NativeFile */;
val* var6 /* : nullable NativeFile */;
val* var7 /* : nullable NativeFile */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
void* var11 /* : Pointer */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Sys */;
val* var24 /* : Sys */;
long var25 /* : Int */;
long var27 /* : Int */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
short int var39 /* : Bool */;
{
{ /* Inline file#FStream#init (self) on <self:OFStream> */
RET_LABEL1:(void)0;
}
}
var_path = p0;
var = NULL/*special!*/;
{
var2 = string__FlatString__to_cstring(var_path);
}
{
{ /* Inline file#NativeFile#io_open_write (var,var2) on <var:NativeFile> */
var5 = file_NativeFileCapable_NativeFileCapable_io_open_write_1(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var6 = BOX_file__NativeFile(var3); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var6; /* _file on <self:OFStream> */
var7 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 137);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var7) on <var7:nullable NativeFile> */
var11 = ((struct instance_kernel__Pointer*)var7)->value; /* autounbox from nullable NativeFile to Pointer */;
var10 = address_is_null(var11);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var12 = !var8;
if (unlikely(!var12)) {
if (varonce) {
var13 = varonce;
} else {
var14 = "Error: Opening file at \'";
var15 = 24;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\' failed with \'";
var20 = 15;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
{ /* Inline kernel#Object#sys (self) on <self:OFStream> */
var24 = glob_sys;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var22) on <var22:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var22;
var27 = kernel___Sys_errno___impl(var_for_c_0);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var28 = string__Int__strerror(var25);
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "\'";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 5;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_path;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var36)->values[3] = (val*) var28;
((struct instance_array__NativeArray*)var36)->values[4] = (val*) var30;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
file__Object__print(self, var37); /* Direct call file#Object#print on <self:OFStream>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 137);
show_backtrace(1);
}
{
{ /* Inline file#FStream#path= (self,var_path) on <self:OFStream> */
self->attrs[COLOR_file__FStream___path].val = var_path; /* _path on <self:OFStream> */
RET_LABEL38:(void)0;
}
}
var39 = 1;
self->attrs[COLOR_file__OFStream___writable].s = var39; /* _writable on <self:OFStream> */
RET_LABEL:;
}
/* method file#OFStream#open for (self: Object, String) */
void VIRTUAL_file__OFStream__open(val* self, val* p0) {
file__OFStream__open(self, p0); /* Direct call file#OFStream#open on <self:Object(OFStream)>*/
RET_LABEL:;
}
/* method file#OFStream#init for (self: OFStream) */
void file__OFStream__init(val* self) {
{
{ /* Inline file#FStream#init (self) on <self:OFStream> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method file#OFStream#init for (self: Object) */
void VIRTUAL_file__OFStream__init(val* self) {
file__OFStream__init(self); /* Direct call file#OFStream#init on <self:Object(OFStream)>*/
RET_LABEL:;
}
/* method file#Stdin#init for (self: Stdin) */
void file__Stdin__init(val* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
void* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
long var10 /* : Int */;
{
file__IFStream__init(self); /* Direct call file#IFStream#init on <self:Stdin>*/
}
var = NULL/*special!*/;
{
{ /* Inline file#NativeFile#native_stdin (var) on <var:NativeFile> */
var3 = file_NativeFileCapable_NativeFileCapable_native_stdin_0();
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = BOX_file__NativeFile(var1); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var4; /* _file on <self:Stdin> */
if (varonce) {
var5 = varonce;
} else {
var6 = "/dev/stdin";
var7 = 10;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline file#FStream#path= (self,var5) on <self:Stdin> */
self->attrs[COLOR_file__FStream___path].val = var5; /* _path on <self:Stdin> */
RET_LABEL9:(void)0;
}
}
var10 = 1;
{
stream__BufferedIStream__prepare_buffer(self, var10); /* Direct call stream#BufferedIStream#prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file#Stdin#init for (self: Object) */
void VIRTUAL_file__Stdin__init(val* self) {
file__Stdin__init(self); /* Direct call file#Stdin#init on <self:Object(Stdin)>*/
RET_LABEL:;
}
/* method file#Stdout#init for (self: Stdout) */
void file__Stdout__init(val* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
void* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var10 /* : Bool */;
{
file__OFStream__init(self); /* Direct call file#OFStream#init on <self:Stdout>*/
}
var = NULL/*special!*/;
{
{ /* Inline file#NativeFile#native_stdout (var) on <var:NativeFile> */
var3 = file_NativeFileCapable_NativeFileCapable_native_stdout_0();
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = BOX_file__NativeFile(var1); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var4; /* _file on <self:Stdout> */
if (varonce) {
var5 = varonce;
} else {
var6 = "/dev/stdout";
var7 = 11;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline file#FStream#path= (self,var5) on <self:Stdout> */
self->attrs[COLOR_file__FStream___path].val = var5; /* _path on <self:Stdout> */
RET_LABEL9:(void)0;
}
}
var10 = 1;
self->attrs[COLOR_file__OFStream___writable].s = var10; /* _writable on <self:Stdout> */
RET_LABEL:;
}
/* method file#Stdout#init for (self: Object) */
void VIRTUAL_file__Stdout__init(val* self) {
file__Stdout__init(self); /* Direct call file#Stdout#init on <self:Object(Stdout)>*/
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void file__Stderr__init(val* self) {
void* var /* : NativeFile */;
void* var1 /* : NativeFile */;
void* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var10 /* : Bool */;
{
file__OFStream__init(self); /* Direct call file#OFStream#init on <self:Stderr>*/
}
var = NULL/*special!*/;
{
{ /* Inline file#NativeFile#native_stderr (var) on <var:NativeFile> */
var3 = file_NativeFileCapable_NativeFileCapable_native_stderr_0();
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = BOX_file__NativeFile(var1); /* autobox from NativeFile to nullable NativeFile */
self->attrs[COLOR_file__FStream___file].val = var4; /* _file on <self:Stderr> */
if (varonce) {
var5 = varonce;
} else {
var6 = "/dev/stderr";
var7 = 11;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline file#FStream#path= (self,var5) on <self:Stderr> */
self->attrs[COLOR_file__FStream___path].val = var5; /* _path on <self:Stderr> */
RET_LABEL9:(void)0;
}
}
var10 = 1;
self->attrs[COLOR_file__OFStream___writable].s = var10; /* _writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Stderr#init for (self: Object) */
void VIRTUAL_file__Stderr__init(val* self) {
file__Stderr__init(self); /* Direct call file#Stderr#init on <self:Object(Stderr)>*/
RET_LABEL:;
}
/* method file#String#file_exists for (self: String): Bool */
short int file__String__file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = string__FlatString__to_cstring(self);
}
{
{ /* Inline file#NativeString#file_exists (var1) on <var1:NativeString> */
var4 = string_NativeString_NativeString_file_exists_0(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
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
/* method file#String#file_copy_to for (self: String, String) */
void file__String__file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : IFStream */;
val* var_input /* var input: IFStream */;
val* var1 /* : OFStream */;
val* var_output /* var output: OFStream */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_buffer /* var buffer: String */;
var_dest = p0;
var = NEW_file__IFStream(&type_file__IFStream);
{
file__IFStream__open(var, self); /* Direct call file#IFStream#open on <var:IFStream>*/
}
var_input = var;
var1 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var1, var_dest); /* Direct call file#OFStream#open on <var1:OFStream>*/
}
var_output = var1;
for(;;) {
{
var2 = stream__BufferedIStream__eof(var_input);
}
var3 = !var2;
if (!var3) break;
var4 = 1024;
{
var5 = stream__BufferedIStream__read(var_input, var4);
}
var_buffer = var5;
{
file__OFStream__write(var_output, var_buffer); /* Direct call file#OFStream#write on <var_output:OFStream>*/
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
file__IFStream__close(var_input); /* Direct call file#IFStream#close on <var_input:IFStream>*/
}
{
file__OFStream__close(var_output); /* Direct call file#OFStream#close on <var_output:OFStream>*/
}
RET_LABEL:;
}
/* method file#String#file_copy_to for (self: Object, String) */
void VIRTUAL_file__String__file_copy_to(val* self, val* p0) {
file__String__file_copy_to(self, p0); /* Direct call file#String#file_copy_to on <self:Object(String)>*/
RET_LABEL:;
}
/* method file#String#strip_extension for (self: String, String): String */
val* file__String__strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : String */;
var_ext = p0;
{
var1 = string__Text__has_suffix(self, var_ext);
}
if (var1){
var2 = 0;
{
{ /* Inline string#FlatText#length (self) on <self:String> */
var5 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:String> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_ext) on <var_ext:String> */
var8 = var_ext->attrs[COLOR_string__FlatText___length].l; /* _length on <var_ext:String> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var3,var6) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var12 = var3 - var6;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var13 = string__FlatString__substring(self, var2, var9);
}
var = var13;
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
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_l /* var l: Int */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : SequenceRead[Char] */;
val* var20 /* : SequenceRead[Char] */;
val* var21 /* : nullable Object */;
char var22 /* : Char */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
char var27 /* : Char */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : SequenceRead[Char] */;
val* var47 /* : SequenceRead[Char] */;
char var48 /* : Char */;
long var49 /* : Int */;
val* var50 /* : nullable Object */;
long var_pos /* var pos: Int */;
val* var_n /* var n: String */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
var_ext = p0;
{
{ /* Inline string#FlatText#length (self) on <self:String> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:String> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#- (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var8 = var1 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_l = var5;
for(;;) {
var10 = 0;
{
{ /* Inline kernel#Int#> (var_l,var10) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var17 = var_l > var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
{ /* Inline string#FlatString#chars (self) on <self:String> */
var20 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:String> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*, long))(var18->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var18, var_l) /* [] on <var18:SequenceRead[Char]>*/;
}
var22 = '/';
{
{ /* Inline kernel#Char#== (var21,var22) on <var21:nullable Object(Char)> */
var26 = (var21 != NULL) && (var21->class == &class_kernel__Char);
if (var26) {
var27 = ((struct instance_kernel__Char*)var21)->value; /* autounbox from nullable Object to Char */;
var26 = (var27 == var22);
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var9 = var23;
} else {
var9 = var_;
}
if (!var9) break;
var28 = 1;
{
{ /* Inline kernel#Int#- (var_l,var28) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var35 = var_l - var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_l = var29;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var36 = 0;
{
{ /* Inline kernel#Int#== (var_l,var36) on <var_l:Int> */
var40 = var_l == var36;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
if (varonce) {
var41 = varonce;
} else {
var42 = "/";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#chars (self) on <self:String> */
var47 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:String> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = '/';
{
var50 = BOX_kernel__Char(var48); /* autobox from Char to nullable Object */
var49 = ((long (*)(val*, val*, long))(var45->class->vft[COLOR_abstract_collection__SequenceRead__last_index_of_from]))(var45, var50, var_l) /* last_index_of_from on <var45:SequenceRead[Char]>*/;
}
var_pos = var49;
var_n = self;
var51 = 0;
{
{ /* Inline kernel#Int#>= (var_pos,var51) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var58 = var_pos >= var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
var59 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var59) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var59:Int> isa OTHER */
/* <var59:Int> isa OTHER */
var62 = 1; /* easy <var59:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var66 = var_pos + var59;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var69 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var73 = var_l - var_pos;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = string__FlatString__substring(self, var60, var67);
}
var_n = var74;
} else {
}
{
var75 = file__String__strip_extension(var_n, var_ext);
}
var = var75;
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
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_l /* var l: Int */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : SequenceRead[Char] */;
val* var20 /* : SequenceRead[Char] */;
val* var21 /* : nullable Object */;
char var22 /* : Char */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
char var27 /* : Char */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
val* var36 /* : SequenceRead[Char] */;
val* var38 /* : SequenceRead[Char] */;
char var39 /* : Char */;
long var40 /* : Int */;
val* var41 /* : nullable Object */;
long var_pos /* var pos: Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
val* var51 /* : String */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
{
{ /* Inline string#FlatText#length (self) on <self:String> */
var3 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:String> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#- (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var8 = var1 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_l = var5;
for(;;) {
var10 = 0;
{
{ /* Inline kernel#Int#> (var_l,var10) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var17 = var_l > var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
{ /* Inline string#FlatString#chars (self) on <self:String> */
var20 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:String> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*, long))(var18->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var18, var_l) /* [] on <var18:SequenceRead[Char]>*/;
}
var22 = '/';
{
{ /* Inline kernel#Char#== (var21,var22) on <var21:nullable Object(Char)> */
var26 = (var21 != NULL) && (var21->class == &class_kernel__Char);
if (var26) {
var27 = ((struct instance_kernel__Char*)var21)->value; /* autounbox from nullable Object to Char */;
var26 = (var27 == var22);
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var9 = var23;
} else {
var9 = var_;
}
if (!var9) break;
var28 = 1;
{
{ /* Inline kernel#Int#- (var_l,var28) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var35 = var_l - var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_l = var29;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatString#chars (self) on <self:String> */
var38 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:String> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = '/';
{
var41 = BOX_kernel__Char(var39); /* autobox from Char to nullable Object */
var40 = ((long (*)(val*, val*, long))(var36->class->vft[COLOR_abstract_collection__SequenceRead__last_index_of_from]))(var36, var41, var_l) /* last_index_of_from on <var36:SequenceRead[Char]>*/;
}
var_pos = var40;
var42 = 0;
{
{ /* Inline kernel#Int#> (var_pos,var42) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var49 = var_pos > var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
var50 = 0;
{
var51 = string__FlatString__substring(self, var50, var_pos);
}
var = var51;
goto RET_LABEL;
} else {
var52 = 0;
{
{ /* Inline kernel#Int#== (var_pos,var52) on <var_pos:Int> */
var56 = var_pos == var52;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
if (varonce) {
var57 = varonce;
} else {
var58 = "/";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce = var57;
}
var = var57;
goto RET_LABEL;
} else {
if (varonce61) {
var62 = varonce61;
} else {
var63 = ".";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var = var62;
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
char* var4 /* : NativeString */;
char* var_cs /* var cs: NativeString */;
val* var5 /* : FlatString */;
val* var_res /* var res: FlatString */;
{
var1 = string__FlatString__to_cstring(self);
}
{
{ /* Inline file#NativeString#file_realpath (var1) on <var1:NativeString> */
var4 = file_NativeString_realpath(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_cs = var2;
{
var5 = string__NativeString__to_s_with_copy(var_cs);
}
var_res = var5;
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
val* var4 /* : FlatString */;
val* var5 /* : Array[Text] */;
val* var_a /* var a: Array[String] */;
val* var6 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var7 /* : ArrayIterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : nullable Object */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
val* var67 /* : nullable Object */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "/";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = string_search__Text__split_with(self, var1);
}
var_a = var5;
var6 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[String]>*/
}
var_a2 = var6;
{
var7 = array__AbstractArrayRead__iterator(var_a);
}
for(;;) {
{
var8 = array__ArrayIterator__is_ok(var7);
}
if(!var8) break;
{
var9 = array__ArrayIterator__item(var7);
}
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
{
var16 = string__FlatString___61d_61d(var_x, var11);
var15 = var16;
}
if (var15){
goto CONTINUE_label;
} else {
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
var24 = string__FlatString___61d_61d(var_x, var19);
var23 = var24;
}
var_ = var23;
if (var23){
{
var25 = array__AbstractArrayRead__is_empty(var_a2);
}
var26 = !var25;
var17 = var26;
} else {
var17 = var_;
}
if (var17){
goto CONTINUE_label;
} else {
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "..";
var32 = 2;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
var35 = string__FlatString___61d_61d(var_x, var30);
var34 = var35;
}
var_36 = var34;
if (var34){
{
var37 = array__AbstractArrayRead__is_empty(var_a2);
}
var38 = !var37;
var28 = var38;
} else {
var28 = var_36;
}
var_39 = var28;
if (var28){
{
var40 = abstract_collection__SequenceRead__last(var_a2);
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "..";
var44 = 2;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
{ /* Inline kernel#Object#!= (var40,var42) on <var40:nullable Object(String)> */
var_other = var42;
{
var50 = ((short int (*)(val*, val*))(var40->class->vft[COLOR_kernel__Object___61d_61d]))(var40, var_other) /* == on <var40:nullable Object(String)>*/;
var49 = var50;
}
var51 = !var49;
var47 = var51;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
var27 = var46;
} else {
var27 = var_39;
}
if (var27){
{
var52 = array__AbstractArray__pop(var_a2);
}
var52;
goto CONTINUE_label;
} else {
}
{
array__AbstractArray__push(var_a2, var_x); /* Direct call array#AbstractArray#push on <var_a2:Array[String]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var7); /* Direct call array#ArrayIterator#next on <var7:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
var53 = array__AbstractArrayRead__is_empty(var_a2);
}
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = ".";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var = var55;
goto RET_LABEL;
} else {
}
{
var60 = array__AbstractArrayRead__length(var_a2);
}
var61 = 1;
{
{ /* Inline kernel#Int#== (var60,var61) on <var60:Int> */
var65 = var60 == var61;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
var_66 = var62;
if (var62){
{
var67 = abstract_collection__SequenceRead__first(var_a2);
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "";
var71 = 0;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var74 = string__FlatString___61d_61d(var67, var69);
var73 = var74;
}
var59 = var73;
} else {
var59 = var_66;
}
if (var59){
if (varonce75) {
var76 = varonce75;
} else {
var77 = "/";
var78 = 1;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var = var76;
goto RET_LABEL;
} else {
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "/";
var83 = 1;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
var85 = string__Collection__join(var_a2, var81);
}
var = var85;
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
val* var3 /* : SequenceRead[Char] */;
val* var5 /* : SequenceRead[Char] */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
char var8 /* : Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
char var13 /* : Char */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_path = p0;
{
var1 = string__Text__is_empty(var_path);
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = string__Text__is_empty(self);
}
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatString#chars (var_path) on <var_path:String> */
var5 = var_path->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_path:String> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
var7 = ((val* (*)(val*, long))(var3->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var3, var6) /* [] on <var3:SequenceRead[Char]>*/;
}
var8 = '/';
{
{ /* Inline kernel#Char#== (var7,var8) on <var7:nullable Object(Char)> */
var12 = (var7 != NULL) && (var7->class == &class_kernel__Char);
if (var12) {
var13 = ((struct instance_kernel__Char*)var7)->value; /* autounbox from nullable Object to Char */;
var12 = (var13 == var8);
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = var_path;
goto RET_LABEL;
} else {
}
if (varonce) {
var14 = varonce;
} else {
var15 = "/";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) self;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var14;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var_path;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
var = var21;
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
val* var3 /* : FlatString */;
val* var4 /* : Array[Text] */;
val* var_dirs /* var dirs: Array[String] */;
val* var5 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var6 /* : Bool */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
char var10 /* : Char */;
val* var11 /* : ArrayIterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_d /* var d: String */;
short int var14 /* : Bool */;
char var15 /* : Char */;
val* var16 /* : String */;
char* var17 /* : NativeString */;
short int var18 /* : Bool */;
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
{
var4 = string_search__Text__split_with(self, var);
}
var_dirs = var4;
var5 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var5); /* Direct call string#FlatBuffer#init on <var5:FlatBuffer>*/
}
var_path = var5;
{
var6 = array__AbstractArrayRead__is_empty(var_dirs);
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = 0;
{
var8 = array__Array___91d_93d(var_dirs, var7);
}
{
var9 = string__Text__is_empty(var8);
}
if (var9){
var10 = '/';
{
string__FlatBuffer__add(var_path, var10); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
} else {
}
{
var11 = array__AbstractArrayRead__iterator(var_dirs);
}
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var11);
}
if(!var12) break;
{
var13 = array__ArrayIterator__item(var11);
}
var_d = var13;
{
var14 = string__Text__is_empty(var_d);
}
if (var14){
goto CONTINUE_label;
} else {
}
{
string__FlatBuffer__append(var_path, var_d); /* Direct call string#FlatBuffer#append on <var_path:FlatBuffer>*/
}
var15 = '/';
{
string__FlatBuffer__add(var_path, var15); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
{
var16 = string__FlatBuffer__to_s(var_path);
}
{
var17 = string__FlatString__to_cstring(var16);
}
{
{ /* Inline file#NativeString#file_mkdir (var17) on <var17:NativeString> */
var20 = string_NativeString_NativeString_file_mkdir_0(var17);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var18;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var11); /* Direct call array#ArrayIterator#next on <var11:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method file#String#mkdir for (self: Object) */
void VIRTUAL_file__String__mkdir(val* self) {
file__String__mkdir(self); /* Direct call file#String#mkdir on <self:Object(String)>*/
RET_LABEL:;
}
/* method file#String#file_extension for (self: String): nullable String */
val* file__String__file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
char var4 /* : Char */;
long var5 /* : Int */;
val* var6 /* : nullable Object */;
long var_last_slash /* var last_slash: Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : null */;
{
{ /* Inline string#FlatString#chars (self) on <self:String> */
var3 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:String> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = '.';
{
var6 = BOX_kernel__Char(var4); /* autobox from Char to nullable Object */
var5 = ((long (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last_index_of]))(var1, var6) /* last_index_of on <var1:SequenceRead[Char]>*/;
}
var_last_slash = var5;
var7 = 0;
{
{ /* Inline kernel#Int#> (var_last_slash,var7) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var11 = var_last_slash > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var12 = 1;
{
{ /* Inline kernel#Int#+ (var_last_slash,var12) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var19 = var_last_slash + var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline string#FlatText#length (self) on <self:String> */
var22 = self->attrs[COLOR_string__FlatText___length].l; /* _length on <self:String> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = string__FlatString__substring(self, var13, var20);
}
var = var23;
goto RET_LABEL;
} else {
var24 = NULL;
var = var24;
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
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
{ /* Inline file#NativeString#file_exists (self) on <self:Object(NativeString)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var3 = string_NativeString_NativeString_file_exists_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
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
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
{ /* Inline file#NativeString#file_mkdir (self) on <self:Object(NativeString)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var3 = string_NativeString_NativeString_file_mkdir_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
char* var3 /* : NativeString */;
char* var4 /* : NativeString */;
{ /* Inline file#NativeString#file_realpath (self) on <self:Object(NativeString)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeString */;
var3 = file_NativeString_realpath(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
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
long var3 /* : Int */;
void* var4 /* : NativeFile */;
{ /* Inline file#NativeFile#io_read (self,p0,p1) on <self:Object(NativeFile)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var3 = file_NativeFile_NativeFile_io_read_2(var4, p0, p1);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
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
long var3 /* : Int */;
void* var4 /* : NativeFile */;
{ /* Inline file#NativeFile#io_write (self,p0,p1) on <self:Object(NativeFile)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var3 = file_NativeFile_NativeFile_io_write_2(var4, p0, p1);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
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
long var3 /* : Int */;
void* var4 /* : NativeFile */;
{ /* Inline file#NativeFile#io_close (self) on <self:Object(NativeFile)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var3 = file_NativeFile_NativeFile_io_close_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
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
void* var3 /* : NativeFile */;
void* var4 /* : NativeFile */;
val* var5 /* : Object */;
void* var6 /* : NativeFile */;
{ /* Inline file#NativeFile#io_open_read (self,p0) on <self:Object(NativeFile)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var4 = file_NativeFileCapable_NativeFileCapable_io_open_read_1(p0);
var5 = BOX_file__NativeFile(var4); /* autobox from NativeFile to Object */
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var6 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to NativeFile */;
var = var6;
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
void* var3 /* : NativeFile */;
void* var4 /* : NativeFile */;
val* var5 /* : Object */;
void* var6 /* : NativeFile */;
{ /* Inline file#NativeFile#io_open_write (self,p0) on <self:Object(NativeFile)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var4 = file_NativeFileCapable_NativeFileCapable_io_open_write_1(p0);
var5 = BOX_file__NativeFile(var4); /* autobox from NativeFile to Object */
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var6 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to NativeFile */;
var = var6;
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
void* var3 /* : NativeFile */;
void* var4 /* : NativeFile */;
val* var5 /* : Object */;
void* var6 /* : NativeFile */;
{ /* Inline file#NativeFile#native_stdin (self) on <self:Object(NativeFile)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var4 = file_NativeFileCapable_NativeFileCapable_native_stdin_0();
var5 = BOX_file__NativeFile(var4); /* autobox from NativeFile to Object */
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var6 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to NativeFile */;
var = var6;
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
void* var3 /* : NativeFile */;
void* var4 /* : NativeFile */;
val* var5 /* : Object */;
void* var6 /* : NativeFile */;
{ /* Inline file#NativeFile#native_stdout (self) on <self:Object(NativeFile)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var4 = file_NativeFileCapable_NativeFileCapable_native_stdout_0();
var5 = BOX_file__NativeFile(var4); /* autobox from NativeFile to Object */
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var6 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to NativeFile */;
var = var6;
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
void* var3 /* : NativeFile */;
void* var4 /* : NativeFile */;
val* var5 /* : Object */;
void* var6 /* : NativeFile */;
{ /* Inline file#NativeFile#native_stderr (self) on <self:Object(NativeFile)> */
var3 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to NativeFile */;
var4 = file_NativeFileCapable_NativeFileCapable_native_stderr_0();
var5 = BOX_file__NativeFile(var4); /* autobox from NativeFile to Object */
var1 = var5;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var6 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to NativeFile */;
var = var6;
RET_LABEL:;
return var;
}
/* method file#Sys#stdout for (self: Sys): OStream */
val* file__Sys__stdout(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
var1 = self->attrs[COLOR_file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 530);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Sys#stdout for (self: Object): OStream */
val* VIRTUAL_file__Sys__stdout(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
val* var3 /* : OStream */;
{ /* Inline file#Sys#stdout (self) on <self:Object(Sys)> */
var3 = self->attrs[COLOR_file__Sys___stdout].val; /* _stdout on <self:Object(Sys)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 530);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr for (self: Sys): OStream */
val* file__Sys__stderr(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
var1 = self->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 533);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr for (self: Object): OStream */
val* VIRTUAL_file__Sys__stderr(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
val* var3 /* : OStream */;
{ /* Inline file#Sys#stderr (self) on <self:Object(Sys)> */
var3 = self->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <self:Object(Sys)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 533);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Object#printn for (self: Object, Array[Object]) */
void file__Object__printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : OStream */;
val* var5 /* : OStream */;
val* var6 /* : String */;
var_objects = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Object> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline file#Sys#stdout (var) on <var:Sys> */
var5 = var->attrs[COLOR_file__Sys___stdout].val; /* _stdout on <var:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 530);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = string__Array__to_s(var_objects);
}
{
file__OFStream__write(var3, var6); /* Direct call file#OFStream#write on <var3:OStream>*/
}
RET_LABEL:;
}
/* method file#Object#printn for (self: Object, Array[Object]) */
void VIRTUAL_file__Object__printn(val* self, val* p0) {
file__Object__printn(self, p0); /* Direct call file#Object#printn on <self:Object>*/
RET_LABEL:;
}
/* method file#Object#print for (self: Object, Object) */
void file__Object__print(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : OStream */;
val* var5 /* : OStream */;
val* var6 /* : String */;
val* var7 /* : Sys */;
val* var9 /* : Sys */;
val* var10 /* : OStream */;
val* var12 /* : OStream */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Object> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline file#Sys#stdout (var) on <var:Sys> */
var5 = var->attrs[COLOR_file__Sys___stdout].val; /* _stdout on <var:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 530);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*))(var_object->class->vft[COLOR_string__Object__to_s]))(var_object) /* to_s on <var_object:Object>*/;
}
{
file__OFStream__write(var3, var6); /* Direct call file#OFStream#write on <var3:OStream>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Object> */
var9 = glob_sys;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline file#Sys#stdout (var7) on <var7:Sys> */
var12 = var7->attrs[COLOR_file__Sys___stdout].val; /* _stdout on <var7:Sys> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 530);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (varonce) {
var13 = varonce;
} else {
var14 = "\n";
var15 = 1;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
file__OFStream__write(var10, var13); /* Direct call file#OFStream#write on <var10:OStream>*/
}
RET_LABEL:;
}
/* method file#Object#print for (self: Object, Object) */
void VIRTUAL_file__Object__print(val* self, val* p0) {
file__Object__print(self, p0); /* Direct call file#Object#print on <self:Object>*/
RET_LABEL:;
}
/* method file#Object#getcwd for (self: Object): String */
val* file__Object__getcwd(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline file#Object#file_getcwd (self) on <self:Object> */
var3 = string_NativeString_NativeString_file_getcwd_0(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = string__NativeString__to_s(var1);
}
var = var4;
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
char* var3 /* : NativeString */;
{ /* Inline file#Object#file_getcwd (self) on <self:Object> */
var3 = string_NativeString_NativeString_file_getcwd_0(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
