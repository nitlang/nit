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
/* method file#IFStream#close for (self: IFStream) */
void file__IFStream__close(val* self) {
val* var /* : nullable NativeFile */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
void* var4 /* : NativeFile for extern */;
long var_i /* var i: Int */;
val* var5 /* : nullable FlatBuffer */;
short int var6 /* : Bool */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 67);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_close (var) on <var:nullable NativeFile> */
var4 = ((struct instance_kernel__Pointer*)var)->value; /* unboxing nullable NativeFile */
var3 = file_NativeFile_NativeFile_io_close_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
var5 = self->attrs[COLOR_stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 68);
show_backtrace(1);
} else {
string__FlatBuffer__clear(var5); /* Direct call string#FlatBuffer#clear on <var5:nullable FlatBuffer>*/
}
var6 = 1;
{
{ /* Inline file#IFStream#end_reached= (self,var6) on <self:IFStream> */
self->attrs[COLOR_file__IFStream___end_reached].s = var6; /* _end_reached on <self:IFStream> */
RET_LABEL7:(void)0;
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
long var11 /* : Int for extern */;
void* var12 /* : NativeFile for extern */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 74);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#items (var1) on <var1:nullable FlatBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 706);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 74);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#capacity (var5) on <var5:nullable FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1408);
show_backtrace(1);
}
var8 = var5->attrs[COLOR_string__FlatBuffer___capacity].l; /* _capacity on <var5:nullable FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 74);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_read (var,var2,var6) on <var:nullable NativeFile> */
var12 = ((struct instance_kernel__Pointer*)var)->value; /* unboxing nullable NativeFile */
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 79);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length= (var21,var_nb) on <var21:nullable FlatBuffer> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 715);
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
val* var2 /* : NativeFile */;
char* var3 /* : NativeString */;
val* var4 /* : NativeFile */;
val* var5 /* : nullable NativeFile */;
short int var6 /* : Bool */;
short int var8 /* : Bool for extern */;
void* var9 /* : Pointer for extern */;
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
val* var20 /* : Sys */;
val* var22 /* : Sys */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:IFStream>*/;
}
var_path = p0;
{
{ /* Inline file#FStream#path= (self,var_path) on <self:IFStream> */
self->attrs[COLOR_file__FStream___path].val = var_path; /* _path on <self:IFStream> */
RET_LABEL1:(void)0;
}
}
var = 10;
{
stream__BufferedIStream__prepare_buffer(self, var); /* Direct call stream#BufferedIStream#prepare_buffer on <self:IFStream>*/
}
var2 = NEW_file__NativeFile(&type_file__NativeFile);
{
var3 = string__FlatString__to_cstring(var_path);
}
{
var4 = file__NativeFile__io_open_read(var2, var3);
}
self->attrs[COLOR_file__FStream___file].val = var4; /* _file on <self:IFStream> */
var5 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:IFStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 92);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var5) on <var5:nullable NativeFile> */
var9 = ((struct instance_kernel__Pointer*)var5)->value; /* unboxing nullable NativeFile */
var8 = address_is_null(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var10 = !var6;
if (unlikely(!var10)) {
if (varonce) {
var11 = varonce;
} else {
var12 = "Error: Opening file at \'";
var13 = 24;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\' failed with \'";
var18 = 15;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
{ /* Inline kernel#Object#sys (self) on <self:IFStream> */
var22 = glob_sys;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var20) on <var20:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var20;
var25 = kernel___Sys_errno___impl(var_for_c_0);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
var26 = string__Int__strerror(var23);
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\'";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_path;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var26;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
file__Object__print(self, var35); /* Direct call file#Object#print on <self:IFStream>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 92);
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
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:IFStream>*/;
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
val* var_ /* var : Iterator[Text] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[Text] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_i /* var i: Text */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
long var14 /* : Int */;
var_s = p0;
var = self->attrs[COLOR_file__OFStream___is_writable].s; /* _is_writable on <self:OFStream> */
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 108);
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
var_ = var6;
{
var7 = abstract_collection__Iterator__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:Iterator[Text]>*/;
}
if (var9){
{
var10 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__item]))(var_8) /* item on <var_8:Iterator[Text]>*/;
}
var_i = var10;
{
var11 = ((char* (*)(val*))(var_i->class->vft[COLOR_string__Text__to_cstring]))(var_i) /* to_cstring on <var_i:Text>*/;
}
{
{ /* Inline string#FlatText#length (var_i) on <var_i:Text> */
var14 = var_i->attrs[COLOR_string__FlatText___length].l; /* _length on <var_i:Text> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
file__OFStream__write_native(self, var11, var12); /* Direct call file#OFStream#write_native on <self:OFStream>*/
}
{
((void (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__next]))(var_8) /* next on <var_8:Iterator[Text]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:Iterator[Text]> */
RET_LABEL15:(void)0;
}
}
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
long var3 /* : Int for extern */;
void* var4 /* : NativeFile for extern */;
long var_i /* var i: Int */;
short int var5 /* : Bool */;
var = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 118);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_close (var) on <var:nullable NativeFile> */
var4 = ((struct instance_kernel__Pointer*)var)->value; /* unboxing nullable NativeFile */
var3 = file_NativeFile_NativeFile_io_close_0(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
var5 = 0;
self->attrs[COLOR_file__OFStream___is_writable].s = var5; /* _is_writable on <self:OFStream> */
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
long var4 /* : Int for extern */;
void* var5 /* : NativeFile for extern */;
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
var = self->attrs[COLOR_file__OFStream___is_writable].s; /* _is_writable on <self:OFStream> */
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 127);
show_backtrace(1);
}
var1 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 128);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_write (var1,var_native,var_len) on <var1:nullable NativeFile> */
var5 = ((struct instance_kernel__Pointer*)var1)->value; /* unboxing nullable NativeFile */
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
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
short int var6 /* : Bool for extern */;
void* var7 /* : Pointer for extern */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Sys */;
val* var20 /* : Sys */;
long var21 /* : Int */;
long var23 /* : Int */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
short int var35 /* : Bool */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:OFStream>*/;
}
var_path = p0;
var = NEW_file__NativeFile(&type_file__NativeFile);
{
var1 = string__FlatString__to_cstring(var_path);
}
{
var2 = file__NativeFile__io_open_write(var, var1);
}
self->attrs[COLOR_file__FStream___file].val = var2; /* _file on <self:OFStream> */
var3 = self->attrs[COLOR_file__FStream___file].val; /* _file on <self:OFStream> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 139);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var3) on <var3:nullable NativeFile> */
var7 = ((struct instance_kernel__Pointer*)var3)->value; /* unboxing nullable NativeFile */
var6 = address_is_null(var7);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var8 = !var4;
if (unlikely(!var8)) {
if (varonce) {
var9 = varonce;
} else {
var10 = "Error: Opening file at \'";
var11 = 24;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "\' failed with \'";
var16 = 15;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
{ /* Inline kernel#Object#sys (self) on <self:OFStream> */
var20 = glob_sys;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var18) on <var18:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var18;
var23 = kernel___Sys_errno___impl(var_for_c_0);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var24 = string__Int__strerror(var21);
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "\'";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 5;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var_path;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var14;
((struct instance_array__NativeArray*)var32)->values[3] = (val*) var24;
((struct instance_array__NativeArray*)var32)->values[4] = (val*) var26;
{
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
file__Object__print(self, var33); /* Direct call file#Object#print on <self:OFStream>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 139);
show_backtrace(1);
}
{
{ /* Inline file#FStream#path= (self,var_path) on <self:OFStream> */
self->attrs[COLOR_file__FStream___path].val = var_path; /* _path on <self:OFStream> */
RET_LABEL34:(void)0;
}
}
var35 = 1;
self->attrs[COLOR_file__OFStream___is_writable].s = var35; /* _is_writable on <self:OFStream> */
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
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:OFStream>*/;
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
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
long var7 /* : Int */;
{
file__IFStream__init(self); /* Direct call file#IFStream#init on <self:Stdin>*/
}
var = NEW_file__NativeFile(&type_file__NativeFile);
{
var1 = file__NativeFile__native_stdin(var);
}
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stdin> */
if (varonce) {
var2 = varonce;
} else {
var3 = "/dev/stdin";
var4 = 10;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline file#FStream#path= (self,var2) on <self:Stdin> */
self->attrs[COLOR_file__FStream___path].val = var2; /* _path on <self:Stdin> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
{
stream__BufferedIStream__prepare_buffer(self, var7); /* Direct call stream#BufferedIStream#prepare_buffer on <self:Stdin>*/
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
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var7 /* : Bool */;
{
file__OFStream__init(self); /* Direct call file#OFStream#init on <self:Stdout>*/
}
var = NEW_file__NativeFile(&type_file__NativeFile);
{
var1 = file__NativeFile__native_stdout(var);
}
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stdout> */
if (varonce) {
var2 = varonce;
} else {
var3 = "/dev/stdout";
var4 = 11;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline file#FStream#path= (self,var2) on <self:Stdout> */
self->attrs[COLOR_file__FStream___path].val = var2; /* _path on <self:Stdout> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
self->attrs[COLOR_file__OFStream___is_writable].s = var7; /* _is_writable on <self:Stdout> */
RET_LABEL:;
}
/* method file#Stdout#init for (self: Object) */
void VIRTUAL_file__Stdout__init(val* self) {
file__Stdout__init(self); /* Direct call file#Stdout#init on <self:Object(Stdout)>*/
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void file__Stderr__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var7 /* : Bool */;
{
file__OFStream__init(self); /* Direct call file#OFStream#init on <self:Stderr>*/
}
var = NEW_file__NativeFile(&type_file__NativeFile);
{
var1 = file__NativeFile__native_stderr(var);
}
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stderr> */
if (varonce) {
var2 = varonce;
} else {
var3 = "/dev/stderr";
var4 = 11;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline file#FStream#path= (self,var2) on <self:Stderr> */
self->attrs[COLOR_file__FStream___path].val = var2; /* _path on <self:Stderr> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
self->attrs[COLOR_file__OFStream___is_writable].s = var7; /* _is_writable on <self:Stderr> */
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
short int var4 /* : Bool for extern */;
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
if (var3){
var4 = 1024;
{
var5 = stream__BufferedIStream__read(var_input, var4);
}
var_buffer = var5;
{
file__OFStream__write(var_output, var_buffer); /* Direct call file#OFStream#write on <var_output:OFStream>*/
}
} else {
goto BREAK_label;
}
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
if (var9){
var28 = 1;
{
{ /* Inline kernel#Int#- (var_l,var28) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var35 = var_l - var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_l = var29;
} else {
goto BREAK_label;
}
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
if (var9){
var28 = 1;
{
{ /* Inline kernel#Int#- (var_l,var28) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var35 = var_l - var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_l = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline string#FlatString#chars (self) on <self:String> */
var38 = self->attrs[COLOR_string__FlatString___chars].val; /* _chars on <self:String> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
void* var4 /* : NativeString for extern */;
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
val* var_ /* var : Array[String] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_x /* var x: String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : nullable Object */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
short int var63 /* : Bool */;
long var64 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var_72 /* var : Bool */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
val* var91 /* : String */;
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
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[String]>*/;
}
var_a2 = var6;
var_ = var_a;
{
var7 = array__AbstractArrayRead__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = array__ArrayIterator__is_ok(var_8);
}
if (var9){
{
var10 = array__ArrayIterator__item(var_8);
}
var_x = var10;
if (varonce11) {
var12 = varonce11;
} else {
var13 = ".";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
{
var17 = string__FlatString___61d_61d(var_x, var12);
var16 = var17;
}
if (var16){
goto BREAK_label;
} else {
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "";
var22 = 0;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
var25 = string__FlatString___61d_61d(var_x, var20);
var24 = var25;
}
var_26 = var24;
if (var24){
{
var27 = array__AbstractArrayRead__is_empty(var_a2);
}
var28 = !var27;
var18 = var28;
} else {
var18 = var_26;
}
if (var18){
goto BREAK_label;
} else {
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "..";
var34 = 2;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var37 = string__FlatString___61d_61d(var_x, var32);
var36 = var37;
}
var_38 = var36;
if (var36){
{
var39 = array__AbstractArrayRead__is_empty(var_a2);
}
var40 = !var39;
var30 = var40;
} else {
var30 = var_38;
}
var_41 = var30;
if (var30){
{
var42 = abstract_collection__SequenceRead__last(var_a2);
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "..";
var46 = 2;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
{ /* Inline kernel#Object#!= (var42,var44) on <var42:nullable Object(String)> */
var_other = var44;
{
var52 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_kernel__Object___61d_61d]))(var42, var_other) /* == on <var42:nullable Object(String)>*/;
var51 = var52;
}
var53 = !var51;
var49 = var53;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
var29 = var48;
} else {
var29 = var_41;
}
if (var29){
{
var54 = array__AbstractArray__pop(var_a2);
}
goto BREAK_label;
} else {
}
{
array__AbstractArray__push(var_a2, var_x); /* Direct call array#AbstractArray#push on <var_a2:Array[String]>*/
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_8); /* Direct call array#ArrayIterator#next on <var_8:ArrayIterator[String]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:ArrayIterator[String]> */
RET_LABEL56:(void)0;
}
}
{
var57 = array__AbstractArrayRead__is_empty(var_a2);
}
if (var57){
if (varonce58) {
var59 = varonce58;
} else {
var60 = ".";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var = var59;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_a2) on <var_a2:Array[String]> */
var66 = var_a2->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_a2:Array[String]> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = 1;
{
{ /* Inline kernel#Int#== (var64,var67) on <var64:Int> */
var71 = var64 == var67;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
var_72 = var68;
if (var68){
{
var73 = abstract_collection__SequenceRead__first(var_a2);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "";
var77 = 0;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var80 = string__FlatString___61d_61d(var73, var75);
var79 = var80;
}
var63 = var79;
} else {
var63 = var_72;
}
if (var63){
if (varonce81) {
var82 = varonce81;
} else {
var83 = "/";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var = var82;
goto RET_LABEL;
} else {
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "/";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
{
var91 = string__Collection__join(var_a2, var87);
}
var = var91;
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
char var14 /* : Char */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
{
var14 = string__Text__last(self);
}
var15 = '/';
{
{ /* Inline kernel#Char#== (var14,var15) on <var14:Char> */
var19 = var14 == var15;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 2;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) self;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var_path;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
var = var23;
goto RET_LABEL;
} else {
}
if (varonce) {
var24 = varonce;
} else {
var25 = "/";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) self;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var24;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var_path;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
var = var31;
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
/* method file#String#/ for (self: String, String): String */
val* file__String___47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = file__String__join_path(self, var_path);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#/ for (self: Object, String): String */
val* VIRTUAL_file__String___47d(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String___47d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method file#String#relpath for (self: String, String): String */
val* file__String__relpath(val* self, val* p0) {
val* var /* : String */;
val* var_dest /* var dest: String */;
val* var1 /* : String */;
val* var_cwd /* var cwd: String */;
val* var2 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : Array[Text] */;
val* var_from /* var from: Array[String] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Text] */;
val* var_to /* var to: Array[String] */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
val* var30 /* : nullable Object */;
val* var31 /* : nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
long var38 /* : Int */;
long var_from_len /* var from_len: Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var59 /* : Int */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : String */;
val* var_up /* var up: String */;
short int var67 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var_res /* var res: String */;
var_dest = p0;
{
var1 = file__Object__getcwd(self);
}
var_cwd = var1;
{
var2 = file__String___47d(var_cwd, self);
}
{
var3 = file__String__simplify_path(var2);
}
if (varonce) {
var4 = varonce;
} else {
var5 = "/";
var6 = 1;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = string_search__Text__split(var3, var4);
}
var_from = var8;
{
var9 = abstract_collection__SequenceRead__last(var_from);
}
{
var10 = string__Text__is_empty(var9);
}
if (var10){
{
var11 = array__AbstractArray__pop(var_from);
}
} else {
}
{
var12 = file__String___47d(var_cwd, var_dest);
}
{
var13 = file__String__simplify_path(var12);
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "/";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
{
var19 = string_search__Text__split(var13, var15);
}
var_to = var19;
{
var20 = abstract_collection__SequenceRead__last(var_to);
}
{
var21 = string__Text__is_empty(var20);
}
if (var21){
{
var22 = array__AbstractArray__pop(var_to);
}
} else {
}
for(;;) {
{
var25 = array__AbstractArrayRead__is_empty(var_from);
}
var26 = !var25;
var_ = var26;
if (var26){
{
var27 = array__AbstractArrayRead__is_empty(var_to);
}
var28 = !var27;
var24 = var28;
} else {
var24 = var_;
}
var_29 = var24;
if (var24){
{
var30 = abstract_collection__SequenceRead__first(var_from);
}
{
var31 = abstract_collection__SequenceRead__first(var_to);
}
{
var33 = string__FlatString___61d_61d(var30, var31);
var32 = var33;
}
var23 = var32;
} else {
var23 = var_29;
}
if (var23){
{
var34 = array__AbstractArray__shift(var_from);
}
{
var35 = array__AbstractArray__shift(var_to);
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_from) on <var_from:Array[String]> */
var38 = var_from->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_from:Array[String]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_from_len = var36;
var39 = 0;
{
{ /* Inline kernel#Int#== (var_from_len,var39) on <var_from_len:Int> */
var43 = var_from_len == var39;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (varonce44) {
var45 = varonce44;
} else {
var46 = "/";
var47 = 1;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
var49 = string__Collection__join(var_to, var45);
}
var = var49;
goto RET_LABEL;
} else {
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "../";
var53 = 3;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = 1;
{
{ /* Inline kernel#Int#- (var_from_len,var55) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var59 = var_from_len - var55;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
var60 = string__FlatString___42d(var51, var56);
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = "..";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
{
var66 = string__FlatString___43d(var60, var62);
}
var_up = var66;
{
var67 = array__AbstractArrayRead__is_empty(var_to);
}
if (var67){
var = var_up;
goto RET_LABEL;
} else {
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "/";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = string__FlatString___43d(var_up, var69);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "/";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = string__Collection__join(var_to, var75);
}
{
var80 = string__FlatString___43d(var73, var79);
}
var_res = var80;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#relpath for (self: Object, String): String */
val* VIRTUAL_file__String__relpath(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = file__String__relpath(self, p0);
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
val* var_ /* var : Array[String] */;
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_d /* var d: String */;
short int var15 /* : Bool */;
char var16 /* : Char */;
val* var17 /* : String */;
char* var18 /* : NativeString */;
short int var19 /* : Bool */;
short int var21 /* : Bool for extern */;
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
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:FlatBuffer>*/;
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
var_ = var_dirs;
{
var11 = array__AbstractArrayRead__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = array__ArrayIterator__is_ok(var_12);
}
if (var13){
{
var14 = array__ArrayIterator__item(var_12);
}
var_d = var14;
{
var15 = string__Text__is_empty(var_d);
}
if (var15){
goto BREAK_label;
} else {
}
{
string__FlatBuffer__append(var_path, var_d); /* Direct call string#FlatBuffer#append on <var_path:FlatBuffer>*/
}
var16 = '/';
{
string__FlatBuffer__add(var_path, var16); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
{
var17 = string__FlatBuffer__to_s(var_path);
}
{
var18 = string__FlatString__to_cstring(var17);
}
{
{ /* Inline file#NativeString#file_mkdir (var18) on <var18:NativeString> */
var21 = string_NativeString_NativeString_file_mkdir_0(var18);
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[String]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:ArrayIterator[String]> */
RET_LABEL23:(void)0;
}
}
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
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
short int var1 /* : Bool for extern */;
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
short int var3 /* : Bool for extern */;
char* var4 /* : NativeString */;
{ /* Inline file#NativeString#file_exists (self) on <self:Object(NativeString)> */
var4 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
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
short int var1 /* : Bool for extern */;
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
short int var3 /* : Bool for extern */;
char* var4 /* : NativeString */;
{ /* Inline file#NativeString#file_mkdir (self) on <self:Object(NativeString)> */
var4 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
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
void* var1 /* : NativeString for extern */;
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
void* var3 /* : NativeString for extern */;
char* var4 /* : NativeString */;
{ /* Inline file#NativeString#file_realpath (self) on <self:Object(NativeString)> */
var4 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
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
long file__NativeFile__io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_read_2(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: Object, NativeString, Int): Int */
long VIRTUAL_file__NativeFile__io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
void* var4 /* : NativeFile for extern */;
{ /* Inline file#NativeFile#io_read (self,p0,p1) on <self:Object(NativeFile)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* unboxing Object */
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
long file__NativeFile__io_write(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_write_2(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: Object, NativeString, Int): Int */
long VIRTUAL_file__NativeFile__io_write(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
void* var4 /* : NativeFile for extern */;
{ /* Inline file#NativeFile#io_write (self,p0,p1) on <self:Object(NativeFile)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* unboxing Object */
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
long file__NativeFile__io_close(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_close_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: Object): Int */
long VIRTUAL_file__NativeFile__io_close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
void* var4 /* : NativeFile for extern */;
{ /* Inline file#NativeFile#io_close (self) on <self:Object(NativeFile)> */
var4 = ((struct instance_kernel__Pointer*)self)->value; /* unboxing Object */
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
val* file__NativeFile__io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_read_1(p0);
var2 = BOX_kernel__Pointer(var1); /* boxing NativeFile */
var2->type = &type_file__NativeFile;
var2->class = &class_file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: Object, NativeString): NativeFile */
val* VIRTUAL_file__NativeFile__io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
var1 = file__NativeFile__io_open_read(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: NativeFile, NativeString): NativeFile */
val* file__NativeFile__io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_write_1(p0);
var2 = BOX_kernel__Pointer(var1); /* boxing NativeFile */
var2->type = &type_file__NativeFile;
var2->class = &class_file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: Object, NativeString): NativeFile */
val* VIRTUAL_file__NativeFile__io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
var1 = file__NativeFile__io_open_write(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: NativeFile): NativeFile */
val* file__NativeFile__native_stdin(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdin_0();
var2 = BOX_kernel__Pointer(var1); /* boxing NativeFile */
var2->type = &type_file__NativeFile;
var2->class = &class_file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: Object): NativeFile */
val* VIRTUAL_file__NativeFile__native_stdin(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
var1 = file__NativeFile__native_stdin(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: NativeFile): NativeFile */
val* file__NativeFile__native_stdout(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdout_0();
var2 = BOX_kernel__Pointer(var1); /* boxing NativeFile */
var2->type = &type_file__NativeFile;
var2->class = &class_file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: Object): NativeFile */
val* VIRTUAL_file__NativeFile__native_stdout(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
var1 = file__NativeFile__native_stdout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: NativeFile): NativeFile */
val* file__NativeFile__native_stderr(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stderr_0();
var2 = BOX_kernel__Pointer(var1); /* boxing NativeFile */
var2->type = &type_file__NativeFile;
var2->class = &class_file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: Object): NativeFile */
val* VIRTUAL_file__NativeFile__native_stderr(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
var1 = file__NativeFile__native_stderr(self);
var = var1;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 634);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 634);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 637);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 637);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 634);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 634);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 634);
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
void* var3 /* : NativeString for extern */;
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
void* var1 /* : NativeString for extern */;
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
void* var3 /* : NativeString for extern */;
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
