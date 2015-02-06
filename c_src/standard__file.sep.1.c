#include "standard__file.sep.0.h"
/* method file#FStream#path= for (self: FStream, nullable String) */
void standard___standard__FStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__FStream___path].val = p0; /* _path on <self:FStream> */
RET_LABEL:;
}
/* method file#FStream#set_buffering_mode for (self: FStream, Int, Int) */
void standard___standard__FStream___set_buffering_mode(val* self, long p0, long p1) {
long var_buf_size /* var buf_size: Int */;
long var_mode /* var mode: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
val* var6 /* : nullable NativeFile */;
long var7 /* : Int */;
long var9 /* : Int for extern */;
void* var10 /* : NativeFile for extern */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : IOError */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : Sys */;
val* var23 /* : Sys */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
var_buf_size = p0;
var_mode = p1;
var = 0;
{
{ /* Inline kernel#Int#<= (var_buf_size,var) on <var_buf_size:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var4 = var_buf_size <= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var5 = 512;
var_buf_size = var5;
} else {
}
var6 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:FStream> */
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 60);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#set_buffering_type (var6,var_buf_size,var_mode) on <var6:nullable NativeFile> */
var10 = ((struct instance_standard__Pointer*)var6)->value; /* unboxing nullable NativeFile */
var9 = file_NativeFile_NativeFile_set_buffering_type_0(var10, var_buf_size, var_mode);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var11 = 0;
{
{ /* Inline kernel#Int#!= (var7,var11) on <var7:Int> */
var14 = var7 == var11;
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var16 = NEW_standard__IOError(&type_standard__IOError);
if (varonce) {
var17 = varonce;
} else {
var18 = "Error while changing buffering type for FStream, returned error ";
var19 = 64;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FStream> */
var23 = glob_sys;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var21) on <var21:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var21;
var26 = kernel___Sys_errno___impl(var_for_c_0);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = standard__string___Int___strerror(var24);
}
var28 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_standard__NativeArray(var29, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var30)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var30)->values[1] = (val*) var27;
{
((void (*)(val* self, val* p0, long p1))(var28->class->vft[COLOR_standard__array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val* self))(var28->class->vft[COLOR_standard__string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var16->class->vft[COLOR_standard__error__Error__message_61d]))(var16, var31) /* message= on <var16:IOError>*/;
}
{
((void (*)(val* self))(var16->class->vft[COLOR_standard__kernel__Object__init]))(var16) /* init on <var16:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var16) on <self:FStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var16; /* _last_error on <self:FStream> */
RET_LABEL32:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#IFStream#close for (self: IFStream) */
void standard___standard__IFStream___standard__stream__IOS__close(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable NativeFile */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : nullable NativeFile */;
short int var10 /* : Bool */;
short int var12 /* : Bool for extern */;
void* var13 /* : Pointer for extern */;
val* var14 /* : nullable NativeFile */;
long var15 /* : Int */;
long var17 /* : Int for extern */;
void* var18 /* : NativeFile for extern */;
long var_i /* var i: Int */;
val* var19 /* : nullable FlatBuffer */;
short int var20 /* : Bool */;
val* var22 /* : null */;
var1 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:IFStream> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var2) on <var1:nullable NativeFile> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable NativeFile(NativeFile)> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
var = var_;
} else {
var9 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:IFStream> */
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 92);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var9) on <var9:nullable NativeFile> */
var13 = ((struct instance_standard__Pointer*)var9)->value; /* unboxing nullable NativeFile */
var12 = address_is_null(var13);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
}
if (var){
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:IFStream> */
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 93);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_close (var14) on <var14:nullable NativeFile> */
var18 = ((struct instance_standard__Pointer*)var14)->value; /* unboxing nullable NativeFile */
var17 = file_NativeFile_NativeFile_io_close_0(var18);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_i = var15;
var19 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 94);
show_backtrace(1);
} else {
standard___standard__FlatBuffer___Buffer__clear(var19); /* Direct call string#FlatBuffer#clear on <var19:nullable FlatBuffer>*/
}
var20 = 1;
{
{ /* Inline file#IFStream#end_reached= (self,var20) on <self:IFStream> */
self->attrs[COLOR_standard__file__IFStream___end_reached].s = var20; /* _end_reached on <self:IFStream> */
RET_LABEL21:(void)0;
}
}
var22 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var22; /* _file on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#fill_buffer for (self: IFStream) */
void standard___standard__IFStream___standard__stream__BufferedIStream__fill_buffer(val* self) {
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
var = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:IFStream> */
var1 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 101);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#items (var1) on <var1:nullable FlatBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 821);
show_backtrace(1);
}
var4 = var1->attrs[COLOR_standard__string__FlatText___items].str; /* _items on <var1:nullable FlatBuffer> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 101);
show_backtrace(1);
} else {
{ /* Inline string#FlatBuffer#capacity (var5) on <var5:nullable FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 1527);
show_backtrace(1);
}
var8 = var5->attrs[COLOR_standard__string__FlatBuffer___capacity].l; /* _capacity on <var5:nullable FlatBuffer> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 101);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_read (var,var2,var6) on <var:nullable NativeFile> */
var12 = ((struct instance_standard__Pointer*)var)->value; /* unboxing nullable NativeFile */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
self->attrs[COLOR_standard__file__IFStream___end_reached].s = var18; /* _end_reached on <self:IFStream> */
RET_LABEL19:(void)0;
}
}
var20 = 0;
var_nb = var20;
} else {
}
var21 = self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val; /* _buffer on <self:IFStream> */
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 106);
show_backtrace(1);
} else {
{ /* Inline string#FlatText#length= (var21,var_nb) on <var21:nullable FlatBuffer> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__string, 830);
show_backtrace(1);
}
var21->attrs[COLOR_standard__string__FlatText___length].l = var_nb; /* _length on <var21:nullable FlatBuffer> */
RET_LABEL22:(void)0;
}
}
var23 = 0;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var23; /* _buffer_pos on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#end_reached for (self: IFStream): Bool */
short int standard___standard__IFStream___standard__stream__BufferedIStream__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__file__IFStream___end_reached].s; /* _end_reached on <self:IFStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#IFStream#end_reached= for (self: IFStream, Bool) */
void standard___standard__IFStream___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__IFStream___end_reached].s = p0; /* _end_reached on <self:IFStream> */
RET_LABEL:;
}
/* method file#IFStream#open for (self: IFStream, String) */
void standard___standard__IFStream___open(val* self, val* p0) {
val* var_path /* var path: String */;
long var /* : Int */;
val* var2 /* : NativeFile */;
char* var3 /* : NativeString */;
val* var4 /* : NativeFile */;
val* var5 /* : nullable NativeFile */;
short int var6 /* : Bool */;
short int var8 /* : Bool for extern */;
void* var9 /* : Pointer for extern */;
val* var10 /* : IOError */;
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
short int var37 /* : Bool */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self) /* init on <self:IFStream>*/;
}
var_path = p0;
{
{ /* Inline file#FStream#path= (self,var_path) on <self:IFStream> */
self->attrs[COLOR_standard__file__FStream___path].val = var_path; /* _path on <self:IFStream> */
RET_LABEL1:(void)0;
}
}
var = 10;
{
standard___standard__BufferedIStream___prepare_buffer(self, var); /* Direct call stream#BufferedIStream#prepare_buffer on <self:IFStream>*/
}
var2 = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var3 = ((char* (*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__to_cstring]))(var_path) /* to_cstring on <var_path:String>*/;
}
{
var4 = standard__file___standard__file__NativeFile___io_open_read(var2, var3);
}
self->attrs[COLOR_standard__file__FStream___file].val = var4; /* _file on <self:IFStream> */
var5 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:IFStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 119);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var5) on <var5:nullable NativeFile> */
var9 = ((struct instance_standard__Pointer*)var5)->value; /* unboxing nullable NativeFile */
var8 = address_is_null(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_standard__IOError(&type_standard__IOError);
if (varonce) {
var11 = varonce;
} else {
var12 = "Error: Opening file at \'";
var13 = 24;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\' failed with \'";
var18 = 15;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
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
var26 = standard__string___Int___strerror(var23);
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\'";
var30 = 1;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var_path;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var16;
((struct instance_standard__NativeArray*)var34)->values[3] = (val*) var26;
((struct instance_standard__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_standard__error__Error__message_61d]))(var10, var35) /* message= on <var10:IOError>*/;
}
{
((void (*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10) /* init on <var10:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var10) on <self:IFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var10; /* _last_error on <self:IFStream> */
RET_LABEL36:(void)0;
}
}
var37 = 1;
{
{ /* Inline file#IFStream#end_reached= (self,var37) on <self:IFStream> */
self->attrs[COLOR_standard__file__IFStream___end_reached].s = var37; /* _end_reached on <self:IFStream> */
RET_LABEL38:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#OFStream#write for (self: OFStream, Text) */
void standard___standard__OFStream___standard__stream__OStream__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : IOError */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
short int var17 /* : Bool */;
int cltype;
int idtype;
char* var18 /* : NativeString */;
long var19 /* : Int */;
long var21 /* : Int */;
val* var22 /* : Iterator[Text] */;
val* var_ /* var : Iterator[Text] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : Iterator[Text] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_i /* var i: Text */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var30 /* : nullable NativeFile */;
long var31 /* : Int */;
long var33 /* : Int for extern */;
void* var34 /* : NativeFile for extern */;
var_s = p0;
{
{ /* Inline stream#IOS#last_error (self) on <self:OFStream> */
var2 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:OFStream> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
if (var == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,var3) on <var:nullable IOError> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other) /* == on <var:nullable IOError(IOError)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_standard__file__OFStream___is_writable].s; /* _is_writable on <self:OFStream> */
var10 = !var9;
if (var10){
var11 = NEW_standard__IOError(&type_standard__IOError);
if (varonce) {
var12 = varonce;
} else {
var13 = "Cannot write to non-writable stream";
var14 = 35;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__error__Error__message_61d]))(var11, var12) /* message= on <var11:IOError>*/;
}
{
((void (*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11) /* init on <var11:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var11) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var11; /* _last_error on <self:OFStream> */
RET_LABEL16:(void)0;
}
}
goto RET_LABEL;
} else {
}
/* <var_s:Text> isa FlatText */
cltype = type_standard__FlatText.color;
idtype = type_standard__FlatText.id;
if(cltype >= var_s->type->table_size) {
var17 = 0;
} else {
var17 = var_s->type->type_table[cltype] == idtype;
}
if (var17){
{
var18 = ((char* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__to_cstring]))(var_s) /* to_cstring on <var_s:Text(FlatText)>*/;
}
{
{ /* Inline string#FlatText#length (var_s) on <var_s:Text(FlatText)> */
var21 = var_s->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_s:Text(FlatText)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
standard___standard__OFStream___write_native(self, var18, var19); /* Direct call file#OFStream#write_native on <self:OFStream>*/
}
} else {
{
var22 = ((val* (*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__substrings]))(var_s) /* substrings on <var_s:Text>*/;
}
var_ = var22;
{
var23 = standard___standard__Iterator___iterator(var_);
}
var_24 = var23;
for(;;) {
{
var25 = ((short int (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_24) /* is_ok on <var_24:Iterator[Text]>*/;
}
if (var25){
{
var26 = ((val* (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_24) /* item on <var_24:Iterator[Text]>*/;
}
var_i = var26;
{
var27 = ((char* (*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__to_cstring]))(var_i) /* to_cstring on <var_i:Text>*/;
}
{
var28 = ((long (*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__length]))(var_i) /* length on <var_i:Text>*/;
}
{
standard___standard__OFStream___write_native(self, var27, var28); /* Direct call file#OFStream#write_native on <self:OFStream>*/
}
{
((void (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_24) /* next on <var_24:Iterator[Text]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:Iterator[Text]> */
RET_LABEL29:(void)0;
}
}
}
var30 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 153);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#flush (var30) on <var30:nullable NativeFile> */
var34 = ((struct instance_standard__Pointer*)var30)->value; /* unboxing nullable NativeFile */
var33 = fflush(var34);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method file#OFStream#close for (self: OFStream) */
void standard___standard__OFStream___standard__stream__IOS__close(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable NativeFile */;
short int var9 /* : Bool */;
short int var11 /* : Bool for extern */;
void* var12 /* : Pointer for extern */;
val* var13 /* : nullable IOError */;
val* var15 /* : nullable IOError */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : IOError */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var29 /* : Bool */;
val* var30 /* : nullable NativeFile */;
long var31 /* : Int */;
long var33 /* : Int for extern */;
void* var34 /* : NativeFile for extern */;
long var_i /* var i: Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : IOError */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : Sys */;
val* var48 /* : Sys */;
long var49 /* : Int */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
short int var58 /* : Bool */;
val* var59 /* : null */;
var = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,var1) on <var:nullable NativeFile> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable NativeFile(NativeFile)> */
var7 = var == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 159);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var8) on <var8:nullable NativeFile> */
var12 = ((struct instance_standard__Pointer*)var8)->value; /* unboxing nullable NativeFile */
var11 = address_is_null(var12);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline stream#IOS#last_error (self) on <self:OFStream> */
var15 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:OFStream> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NULL;
if (var13 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var13,var16) on <var13:nullable IOError> */
var_other20 = var16;
{
var21 = ((short int (*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var_other20) /* == on <var13:nullable IOError(IOError)>*/;
}
var22 = !var21;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
goto RET_LABEL;
} else {
}
var23 = NEW_standard__IOError(&type_standard__IOError);
if (varonce) {
var24 = varonce;
} else {
var25 = "Cannot close unopened write stream";
var26 = 34;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_standard__error__Error__message_61d]))(var23, var24) /* message= on <var23:IOError>*/;
}
{
((void (*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23) /* init on <var23:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var23) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var23; /* _last_error on <self:OFStream> */
RET_LABEL28:(void)0;
}
}
var29 = 0;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var29; /* _is_writable on <self:OFStream> */
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 165);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_close (var30) on <var30:nullable NativeFile> */
var34 = ((struct instance_standard__Pointer*)var30)->value; /* unboxing nullable NativeFile */
var33 = file_NativeFile_NativeFile_io_close_0(var34);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_i = var31;
var35 = 0;
{
{ /* Inline kernel#Int#!= (var_i,var35) on <var_i:Int> */
var38 = var_i == var35;
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var40 = NEW_standard__IOError(&type_standard__IOError);
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Close failed due to error ";
var44 = 26;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
{ /* Inline kernel#Object#sys (self) on <self:OFStream> */
var48 = glob_sys;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var46) on <var46:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var46;
var51 = kernel___Sys_errno___impl(var_for_c_0);
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
var52 = standard__string___Int___strerror(var49);
}
var53 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 2;
var55 = NEW_standard__NativeArray(var54, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var55)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var55)->values[1] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var53->class->vft[COLOR_standard__array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
}
{
var56 = ((val* (*)(val* self))(var53->class->vft[COLOR_standard__string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var40->class->vft[COLOR_standard__error__Error__message_61d]))(var40, var56) /* message= on <var40:IOError>*/;
}
{
((void (*)(val* self))(var40->class->vft[COLOR_standard__kernel__Object__init]))(var40) /* init on <var40:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var40) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var40; /* _last_error on <self:OFStream> */
RET_LABEL57:(void)0;
}
}
} else {
}
var58 = 0;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var58; /* _is_writable on <self:OFStream> */
var59 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var59; /* _file on <self:OFStream> */
RET_LABEL:;
}
/* method file#OFStream#is_writable= for (self: OFStream, Bool) */
void standard___standard__OFStream___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__OFStream___is_writable].s = p0; /* _is_writable on <self:OFStream> */
RET_LABEL:;
}
/* method file#OFStream#write_native for (self: OFStream, NativeString, Int) */
void standard___standard__OFStream___write_native(val* self, char* p0, long p1) {
char* var_native /* var native: NativeString */;
long var_len /* var len: Int */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : IOError */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var17 /* : nullable NativeFile */;
short int var18 /* : Bool */;
short int var20 /* : Bool for extern */;
void* var21 /* : Pointer for extern */;
val* var22 /* : IOError */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var29 /* : Bool */;
val* var30 /* : nullable NativeFile */;
long var31 /* : Int */;
long var33 /* : Int for extern */;
void* var34 /* : NativeFile for extern */;
long var_err /* var err: Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : IOError */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : Object */;
val* var59 /* : Object */;
val* var60 /* : String */;
var_native = p0;
var_len = p1;
{
{ /* Inline stream#IOS#last_error (self) on <self:OFStream> */
var2 = self->attrs[COLOR_standard__stream__IOS___last_error].val; /* _last_error on <self:OFStream> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
if (var == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,var3) on <var:nullable IOError> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other) /* == on <var:nullable IOError(IOError)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_standard__file__OFStream___is_writable].s; /* _is_writable on <self:OFStream> */
var10 = !var9;
if (var10){
var11 = NEW_standard__IOError(&type_standard__IOError);
if (varonce) {
var12 = varonce;
} else {
var13 = "Cannot write to non-writable stream";
var14 = 35;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_standard__error__Error__message_61d]))(var11, var12) /* message= on <var11:IOError>*/;
}
{
((void (*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11) /* init on <var11:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var11) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var11; /* _last_error on <self:OFStream> */
RET_LABEL16:(void)0;
}
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 182);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var17) on <var17:nullable NativeFile> */
var21 = ((struct instance_standard__Pointer*)var17)->value; /* unboxing nullable NativeFile */
var20 = address_is_null(var21);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var22 = NEW_standard__IOError(&type_standard__IOError);
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Writing on a null stream";
var26 = 24;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
((void (*)(val* self, val* p0))(var22->class->vft[COLOR_standard__error__Error__message_61d]))(var22, var24) /* message= on <var22:IOError>*/;
}
{
((void (*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22) /* init on <var22:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var22) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var22; /* _last_error on <self:OFStream> */
RET_LABEL28:(void)0;
}
}
var29 = 0;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var29; /* _is_writable on <self:OFStream> */
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 187);
show_backtrace(1);
} else {
{ /* Inline file#NativeFile#io_write (var30,var_native,var_len) on <var30:nullable NativeFile> */
var34 = ((struct instance_standard__Pointer*)var30)->value; /* unboxing nullable NativeFile */
var33 = file_NativeFile_NativeFile_io_write_2(var34, var_native, var_len);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_err = var31;
{
{ /* Inline kernel#Int#!= (var_err,var_len) on <var_err:Int> */
var37 = var_err == var_len;
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var39 = NEW_standard__IOError(&type_standard__IOError);
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Problem in writing : ";
var43 = 21;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = " ";
var48 = 1;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " \n";
var53 = 2;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 5;
var57 = NEW_standard__NativeArray(var56, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var57)->values[0] = (val*) var41;
var58 = BOX_standard__Int(var_err); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var57)->values[1] = (val*) var58;
((struct instance_standard__NativeArray*)var57)->values[2] = (val*) var46;
var59 = BOX_standard__Int(var_len); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var57)->values[3] = (val*) var59;
((struct instance_standard__NativeArray*)var57)->values[4] = (val*) var51;
{
((void (*)(val* self, val* p0, long p1))(var55->class->vft[COLOR_standard__array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val* self))(var55->class->vft[COLOR_standard__string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_standard__error__Error__message_61d]))(var39, var60) /* message= on <var39:IOError>*/;
}
{
((void (*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39) /* init on <var39:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var39) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var39; /* _last_error on <self:OFStream> */
RET_LABEL61:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#OFStream#open for (self: OFStream, String) */
void standard___standard__OFStream___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : nullable NativeFile */;
short int var6 /* : Bool */;
short int var8 /* : Bool for extern */;
void* var9 /* : Pointer for extern */;
val* var10 /* : IOError */;
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
short int var37 /* : Bool */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self) /* init on <self:OFStream>*/;
}
var_path = p0;
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((char* (*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__to_cstring]))(var_path) /* to_cstring on <var_path:String>*/;
}
{
var2 = standard__file___standard__file__NativeFile___io_open_write(var, var1);
}
self->attrs[COLOR_standard__file__FStream___file].val = var2; /* _file on <self:OFStream> */
{
{ /* Inline file#FStream#path= (self,var_path) on <self:OFStream> */
self->attrs[COLOR_standard__file__FStream___path].val = var_path; /* _path on <self:OFStream> */
RET_LABEL3:(void)0;
}
}
var4 = 1;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var4; /* _is_writable on <self:OFStream> */
var5 = self->attrs[COLOR_standard__file__FStream___file].val; /* _file on <self:OFStream> */
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 200);
show_backtrace(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var5) on <var5:nullable NativeFile> */
var9 = ((struct instance_standard__Pointer*)var5)->value; /* unboxing nullable NativeFile */
var8 = address_is_null(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_standard__IOError(&type_standard__IOError);
if (varonce) {
var11 = varonce;
} else {
var12 = "Error: Opening file at \'";
var13 = 24;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\' failed with \'";
var18 = 15;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
{ /* Inline kernel#Object#sys (self) on <self:OFStream> */
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
var26 = standard__string___Int___strerror(var23);
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\'";
var30 = 1;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var_path;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var16;
((struct instance_standard__NativeArray*)var34)->values[3] = (val*) var26;
((struct instance_standard__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_standard__error__Error__message_61d]))(var10, var35) /* message= on <var10:IOError>*/;
}
{
((void (*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10) /* init on <var10:IOError>*/;
}
{
{ /* Inline stream#IOS#last_error= (self,var10) on <self:OFStream> */
self->attrs[COLOR_standard__stream__IOS___last_error].val = var10; /* _last_error on <self:OFStream> */
RET_LABEL36:(void)0;
}
}
var37 = 0;
{
{ /* Inline file#OFStream#is_writable= (self,var37) on <self:OFStream> */
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var37; /* _is_writable on <self:OFStream> */
RET_LABEL38:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#Object#printn for (self: Object, Array[Object]) */
void standard__file___Object___printn(val* self, val* p0) {
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
var5 = var->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <var:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard__string___Array___Object__to_s(var_objects);
}
{
standard___standard__OFStream___standard__stream__OStream__write(var3, var6); /* Direct call file#OFStream#write on <var3:OStream>*/
}
RET_LABEL:;
}
/* method file#Object#print for (self: Object, Object) */
void standard__file___Object___print(val* self, val* p0) {
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
var5 = var->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <var:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val* self))(var_object->class->vft[COLOR_standard__string__Object__to_s]))(var_object) /* to_s on <var_object:Object>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var3, var6); /* Direct call file#OFStream#write on <var3:OStream>*/
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
var12 = var7->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <var7:Sys> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
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
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var10, var13); /* Direct call file#OFStream#write on <var10:OStream>*/
}
RET_LABEL:;
}
/* method file#Object#getcwd for (self: Object): String */
val* standard__file___Object___getcwd(val* self) {
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
var4 = standard___standard__NativeString___Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Object#file_getcwd for (self: Object): NativeString */
char* standard__file___Object___file_getcwd(val* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = string_NativeString_NativeString_file_getcwd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Stdin#init for (self: Stdin) */
void standard___standard__Stdin___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
long var7 /* : Int */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__Stdin___standard__kernel__Object__init]))(self) /* init on <self:Stdin>*/;
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = standard__file___standard__file__NativeFile___native_stdin(var);
}
self->attrs[COLOR_standard__file__FStream___file].val = var1; /* _file on <self:Stdin> */
if (varonce) {
var2 = varonce;
} else {
var3 = "/dev/stdin";
var4 = 10;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline file#FStream#path= (self,var2) on <self:Stdin> */
self->attrs[COLOR_standard__file__FStream___path].val = var2; /* _path on <self:Stdin> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
{
standard___standard__BufferedIStream___prepare_buffer(self, var7); /* Direct call stream#BufferedIStream#prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file#Stdout#init for (self: Stdout) */
void standard___standard__Stdout___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var7 /* : Bool */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__Stdout___standard__kernel__Object__init]))(self) /* init on <self:Stdout>*/;
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = standard__file___standard__file__NativeFile___native_stdout(var);
}
self->attrs[COLOR_standard__file__FStream___file].val = var1; /* _file on <self:Stdout> */
if (varonce) {
var2 = varonce;
} else {
var3 = "/dev/stdout";
var4 = 11;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline file#FStream#path= (self,var2) on <self:Stdout> */
self->attrs[COLOR_standard__file__FStream___path].val = var2; /* _path on <self:Stdout> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var7; /* _is_writable on <self:Stdout> */
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void standard___standard__Stderr___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var7 /* : Bool */;
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__Stderr___standard__kernel__Object__init]))(self) /* init on <self:Stderr>*/;
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = standard__file___standard__file__NativeFile___native_stderr(var);
}
self->attrs[COLOR_standard__file__FStream___file].val = var1; /* _file on <self:Stderr> */
if (varonce) {
var2 = varonce;
} else {
var3 = "/dev/stderr";
var4 = 11;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline file#FStream#path= (self,var2) on <self:Stderr> */
self->attrs[COLOR_standard__file__FStream___path].val = var2; /* _path on <self:Stderr> */
RET_LABEL6:(void)0;
}
}
var7 = 1;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var7; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Path#path for (self: Path): String */
val* standard___standard__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Path#path= for (self: Path, String) */
void standard___standard__Path___path_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__Path___path].val = p0; /* _path on <self:Path> */
RET_LABEL:;
}
/* method file#Path#to_s for (self: Path): String */
val* standard___standard__Path___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline file#Path#path (self) on <self:Path> */
var3 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#copy for (self: Path, Path) */
void standard___standard__Path___copy(val* self, val* p0) {
val* var_dest /* var dest: Path */;
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
{
var = standard___standard__Path___open_ro(self);
}
var_input = var;
{
var1 = standard___standard__Path___open_wo(var_dest);
}
var_output = var1;
for(;;) {
{
var2 = standard___standard__BufferedIStream___IStream__eof(var_input);
}
var3 = !var2;
if (var3){
var4 = 1024;
{
var5 = standard___standard__BufferedIStream___IStream__read(var_input, var4);
}
var_buffer = var5;
{
standard___standard__OFStream___standard__stream__OStream__write(var_output, var_buffer); /* Direct call file#OFStream#write on <var_output:OFStream>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard___standard__IFStream___standard__stream__IOS__close(var_input); /* Direct call file#IFStream#close on <var_input:IFStream>*/
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_output); /* Direct call file#OFStream#close on <var_output:OFStream>*/
}
RET_LABEL:;
}
/* method file#Path#open_ro for (self: Path): IFStream */
val* standard___standard__Path___open_ro(val* self) {
val* var /* : IFStream */;
val* var1 /* : IFStream */;
val* var2 /* : String */;
val* var4 /* : String */;
var1 = NEW_standard__IFStream(&type_standard__IFStream);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__IFStream___open(var1, var2); /* Direct call file#IFStream#open on <var1:IFStream>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#open_wo for (self: Path): OFStream */
val* standard___standard__Path___open_wo(val* self) {
val* var /* : OFStream */;
val* var1 /* : OFStream */;
val* var2 /* : String */;
val* var4 /* : String */;
var1 = NEW_standard__OFStream(&type_standard__OFStream);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__OFStream___open(var1, var2); /* Direct call file#OFStream#open on <var1:OFStream>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#== for (self: Path, nullable Object): Bool */
short int standard___standard__Path___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
short int var11 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Path */
cltype = type_standard__Path.color;
idtype = type_standard__Path.id;
if(var_other == NULL) {
var2 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
{ /* Inline file#Path#path (self) on <self:Path> */
var5 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard__file___String___simplify_path(var3);
}
{
{ /* Inline file#Path#path (var_other) on <var_other:nullable Object(Path)> */
var9 = var_other->attrs[COLOR_standard__file__Path___path].val; /* _path on <var_other:nullable Object(Path)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard__file___String___simplify_path(var7);
}
{
var11 = ((short int (*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var10) /* == on <var6:String>*/;
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
/* method file#Path#hash for (self: Path): Int */
long standard___standard__Path___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
long var5 /* : Int */;
{
{ /* Inline file#Path#path (self) on <self:Path> */
var3 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 287);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard__file___String___simplify_path(var1);
}
{
var5 = ((long (*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__hash]))(var4) /* hash on <var4:String>*/;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#init for (self: Path) */
void standard___standard__Path___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_standard___standard__Path___standard__kernel__Object__init]))(self) /* init on <self:Path>*/;
}
RET_LABEL:;
}
/* method file#Text#to_path for (self: Text): Path */
val* standard__file___Text___to_path(val* self) {
val* var /* : Path */;
val* var1 /* : Path */;
val* var2 /* : String */;
var1 = NEW_standard__Path(&type_standard__Path);
{
var2 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self) /* to_s on <self:Text>*/;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__file__Path__path_61d]))(var1, var2) /* path= on <var1:Path>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:Path>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_exists for (self: String): Bool */
short int standard__file___String___file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
short int var4 /* : Bool for extern */;
{
var1 = ((char* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self) /* to_cstring on <self:String>*/;
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
/* method file#String#file_copy_to for (self: String, String) */
void standard__file___String___file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : Path */;
val* var1 /* : Path */;
var_dest = p0;
{
var = standard__file___Text___to_path(self);
}
{
var1 = standard__file___Text___to_path(var_dest);
}
{
standard___standard__Path___copy(var, var1); /* Direct call file#Path#copy on <var:Path>*/
}
RET_LABEL:;
}
/* method file#String#strip_extension for (self: String, String): String */
val* standard__file___String___strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Text */;
var_ext = p0;
{
var1 = standard___standard__Text___has_suffix(self, var_ext);
}
if (var1){
var2 = 0;
{
var3 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:String>*/;
}
{
var4 = ((long (*)(val* self))(var_ext->class->vft[COLOR_standard__string__Text__length]))(var_ext) /* length on <var_ext:String>*/;
}
{
{ /* Inline kernel#Int#- (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var8 = var3 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var2, var5) /* substring on <self:String>*/;
}
var = var9;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#basename for (self: String, String): String */
val* standard__file___String___basename(val* self, val* p0) {
val* var /* : String */;
val* var_ext /* var ext: String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_l /* var l: Int */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : SequenceRead[Char] */;
val* var17 /* : nullable Object */;
char var18 /* : Char */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
char var22 /* : Char */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : SequenceRead[Char] */;
char var40 /* : Char */;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
long var_pos /* var pos: Int */;
val* var_n /* var n: String */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
val* var66 /* : Text */;
val* var67 /* : String */;
var_ext = p0;
{
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:String>*/;
}
var2 = 1;
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_l = var3;
for(;;) {
var8 = 0;
{
{ /* Inline kernel#Int#> (var_l,var8) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var15 = var_l > var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var16 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:String>*/;
}
{
var17 = ((val* (*)(val* self, long p0))(var16->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var16, var_l) /* [] on <var16:SequenceRead[Char]>*/;
}
var18 = '/';
{
{ /* Inline kernel#Char#== (var17,var18) on <var17:nullable Object(Char)> */
var21 = (var17 != NULL) && (var17->class == &class_standard__Char);
if (var21) {
var22 = ((struct instance_standard__Char*)var17)->value; /* autounbox from nullable Object to Char */;
var21 = (var22 == var18);
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var7 = var19;
} else {
var7 = var_;
}
if (var7){
var23 = 1;
{
{ /* Inline kernel#Int#- (var_l,var23) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var30 = var_l - var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_l = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var31 = 0;
{
{ /* Inline kernel#Int#== (var_l,var31) on <var_l:Int> */
var34 = var_l == var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
if (varonce) {
var35 = varonce;
} else {
var36 = "/";
var37 = 1;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
var = var35;
goto RET_LABEL;
} else {
}
{
var39 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:String>*/;
}
var40 = '/';
{
var42 = BOX_standard__Char(var40); /* autobox from Char to nullable Object */
var41 = ((long (*)(val* self, val* p0, long p1))(var39->class->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(var39, var42, var_l) /* last_index_of_from on <var39:SequenceRead[Char]>*/;
}
var_pos = var41;
var_n = self;
var43 = 0;
{
{ /* Inline kernel#Int#>= (var_pos,var43) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var50 = var_pos >= var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
var51 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var51) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var58 = var_pos + var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var61 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var65 = var_l - var_pos;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
{
var66 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var52, var59) /* substring on <self:String>*/;
}
var_n = var66;
} else {
}
{
var67 = standard__file___String___strip_extension(var_n, var_ext);
}
var = var67;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: String): String */
val* standard__file___String___dirname(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_l /* var l: Int */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : SequenceRead[Char] */;
val* var17 /* : nullable Object */;
char var18 /* : Char */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
char var22 /* : Char */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : SequenceRead[Char] */;
char var32 /* : Char */;
long var33 /* : Int */;
val* var34 /* : nullable Object */;
long var_pos /* var pos: Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
long var43 /* : Int */;
val* var44 /* : Text */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
{
var1 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:String>*/;
}
var2 = 1;
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_l = var3;
for(;;) {
var8 = 0;
{
{ /* Inline kernel#Int#> (var_l,var8) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var15 = var_l > var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var16 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:String>*/;
}
{
var17 = ((val* (*)(val* self, long p0))(var16->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var16, var_l) /* [] on <var16:SequenceRead[Char]>*/;
}
var18 = '/';
{
{ /* Inline kernel#Char#== (var17,var18) on <var17:nullable Object(Char)> */
var21 = (var17 != NULL) && (var17->class == &class_standard__Char);
if (var21) {
var22 = ((struct instance_standard__Char*)var17)->value; /* autounbox from nullable Object to Char */;
var21 = (var22 == var18);
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var7 = var19;
} else {
var7 = var_;
}
if (var7){
var23 = 1;
{
{ /* Inline kernel#Int#- (var_l,var23) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var30 = var_l - var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_l = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:String>*/;
}
var32 = '/';
{
var34 = BOX_standard__Char(var32); /* autobox from Char to nullable Object */
var33 = ((long (*)(val* self, val* p0, long p1))(var31->class->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(var31, var34, var_l) /* last_index_of_from on <var31:SequenceRead[Char]>*/;
}
var_pos = var33;
var35 = 0;
{
{ /* Inline kernel#Int#> (var_pos,var35) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var42 = var_pos > var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var43 = 0;
{
var44 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var43, var_pos) /* substring on <self:String>*/;
}
var = var44;
goto RET_LABEL;
} else {
var45 = 0;
{
{ /* Inline kernel#Int#== (var_pos,var45) on <var_pos:Int> */
var48 = var_pos == var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
if (varonce) {
var49 = varonce;
} else {
var50 = "/";
var51 = 1;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce = var49;
}
var = var49;
goto RET_LABEL;
} else {
if (varonce53) {
var54 = varonce53;
} else {
var55 = ".";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var = var54;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file#String#realpath for (self: String): String */
val* standard__file___String___realpath(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
void* var4 /* : NativeString for extern */;
char* var_cs /* var cs: NativeString */;
val* var5 /* : FlatString */;
val* var_res /* var res: FlatString */;
{
var1 = ((char* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self) /* to_cstring on <self:String>*/;
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
var5 = standard___standard__NativeString___to_s_with_copy(var_cs);
}
var_res = var5;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#simplify_path for (self: String): String */
val* standard__file___String___simplify_path(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : Array[String] */;
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
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
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
short int var_35 /* var : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
val* var39 /* : nullable Object */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
short int var58 /* : Bool */;
long var59 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
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
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "/";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = standard__string_search___Text___split_with(self, var1);
}
var_a = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[String]>*/
}
var_a2 = var6;
var_ = var_a;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_8);
}
if (var9){
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_8);
}
var_x = var10;
if (varonce11) {
var12 = varonce11;
} else {
var13 = ".";
var14 = 1;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
{
var16 = ((short int (*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var12) /* == on <var_x:String>*/;
}
if (var16){
goto BREAK_label;
} else {
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "";
var21 = 0;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
var23 = ((short int (*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var19) /* == on <var_x:String>*/;
}
var_24 = var23;
if (var23){
{
var25 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
var26 = !var25;
var17 = var26;
} else {
var17 = var_24;
}
if (var17){
goto BREAK_label;
} else {
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "..";
var32 = 2;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
var34 = ((short int (*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var30) /* == on <var_x:String>*/;
}
var_35 = var34;
if (var34){
{
var36 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
var37 = !var36;
var28 = var37;
} else {
var28 = var_35;
}
var_38 = var28;
if (var28){
{
var39 = standard___standard__SequenceRead___last(var_a2);
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "..";
var43 = 2;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
{ /* Inline kernel#Object#!= (var39,var41) on <var39:nullable Object(String)> */
var_other = var41;
{
var47 = ((short int (*)(val* self, val* p0))(var39->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var39, var_other) /* == on <var39:nullable Object(String)>*/;
}
var48 = !var47;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var27 = var45;
} else {
var27 = var_38;
}
if (var27){
{
var49 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_a2);
}
goto BREAK_label;
} else {
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_a2, var_x); /* Direct call array#AbstractArray#push on <var_a2:Array[String]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_8); /* Direct call array#ArrayIterator#next on <var_8:ArrayIterator[String]>*/
}
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:ArrayIterator[String]> */
RET_LABEL51:(void)0;
}
}
{
var52 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
if (var52){
if (varonce53) {
var54 = varonce53;
} else {
var55 = ".";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var = var54;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_a2) on <var_a2:Array[String]> */
var61 = var_a2->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_a2:Array[String]> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var62 = 1;
{
{ /* Inline kernel#Int#== (var59,var62) on <var59:Int> */
var65 = var59 == var62;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_66 = var63;
if (var63){
{
var67 = standard___standard__SequenceRead___Collection__first(var_a2);
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "";
var71 = 0;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = ((short int (*)(val* self, val* p0))(var67->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var67, var69) /* == on <var67:nullable Object(String)>*/;
}
var58 = var73;
} else {
var58 = var_66;
}
if (var58){
if (varonce74) {
var75 = varonce74;
} else {
var76 = "/";
var77 = 1;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var = var75;
goto RET_LABEL;
} else {
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "/";
var82 = 1;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = standard__string___Collection___join(var_a2, var80);
}
var = var84;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#join_path for (self: String, String): String */
val* standard__file___String___join_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : SequenceRead[Char] */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
char var6 /* : Char */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
char var10 /* : Char */;
char var11 /* : Char */;
char var12 /* : Char */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
var_path = p0;
{
var1 = standard___standard__Text___is_empty(var_path);
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = standard___standard__Text___is_empty(self);
}
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
{
var3 = ((val* (*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__chars]))(var_path) /* chars on <var_path:String>*/;
}
var4 = 0;
{
var5 = ((val* (*)(val* self, long p0))(var3->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var3, var4) /* [] on <var3:SequenceRead[Char]>*/;
}
var6 = '/';
{
{ /* Inline kernel#Char#== (var5,var6) on <var5:nullable Object(Char)> */
var9 = (var5 != NULL) && (var5->class == &class_standard__Char);
if (var9) {
var10 = ((struct instance_standard__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var9 = (var10 == var6);
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_path;
goto RET_LABEL;
} else {
}
{
var11 = standard___standard__Text___last(self);
}
var12 = '/';
{
{ /* Inline kernel#Char#== (var11,var12) on <var11:Char> */
var15 = var11 == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 2;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) self;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var_path;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
var = var19;
goto RET_LABEL;
} else {
}
if (varonce) {
var20 = varonce;
} else {
var21 = "/";
var22 = 1;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 3;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) self;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var20;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var_path;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#/ for (self: String, String): String */
val* standard__file___String____47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = standard__file___String___join_path(self, var_path);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#relpath for (self: String, String): String */
val* standard__file___String___relpath(val* self, val* p0) {
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
val* var8 /* : Array[String] */;
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
val* var19 /* : Array[String] */;
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
val* var33 /* : nullable Object */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var37 /* : Int */;
long var_from_len /* var from_len: Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var57 /* : Int */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var_up /* var up: String */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var_res /* var res: String */;
var_dest = p0;
{
var1 = standard__file___Object___getcwd(self);
}
var_cwd = var1;
{
var2 = standard__file___String____47d(var_cwd, self);
}
{
var3 = standard__file___String___simplify_path(var2);
}
if (varonce) {
var4 = varonce;
} else {
var5 = "/";
var6 = 1;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = standard__string_search___Text___split(var3, var4);
}
var_from = var8;
{
var9 = standard___standard__SequenceRead___last(var_from);
}
{
var10 = standard___standard__Text___is_empty(var9);
}
if (var10){
{
var11 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_from);
}
} else {
}
{
var12 = standard__file___String____47d(var_cwd, var_dest);
}
{
var13 = standard__file___String___simplify_path(var12);
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "/";
var17 = 1;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
{
var19 = standard__string_search___Text___split(var13, var15);
}
var_to = var19;
{
var20 = standard___standard__SequenceRead___last(var_to);
}
{
var21 = standard___standard__Text___is_empty(var20);
}
if (var21){
{
var22 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_to);
}
} else {
}
for(;;) {
{
var25 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_from);
}
var26 = !var25;
var_ = var26;
if (var26){
{
var27 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_to);
}
var28 = !var27;
var24 = var28;
} else {
var24 = var_;
}
var_29 = var24;
if (var24){
{
var30 = standard___standard__SequenceRead___Collection__first(var_from);
}
{
var31 = standard___standard__SequenceRead___Collection__first(var_to);
}
{
var32 = ((short int (*)(val* self, val* p0))(var30->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var30, var31) /* == on <var30:nullable Object(String)>*/;
}
var23 = var32;
} else {
var23 = var_29;
}
if (var23){
{
var33 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_from);
}
{
var34 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_to);
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_from) on <var_from:Array[String]> */
var37 = var_from->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_from:Array[String]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_from_len = var35;
var38 = 0;
{
{ /* Inline kernel#Int#== (var_from_len,var38) on <var_from_len:Int> */
var41 = var_from_len == var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (varonce42) {
var43 = varonce42;
} else {
var44 = "/";
var45 = 1;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = standard__string___Collection___join(var_to, var43);
}
var = var47;
goto RET_LABEL;
} else {
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "../";
var51 = 3;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = 1;
{
{ /* Inline kernel#Int#- (var_from_len,var53) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var57 = var_from_len - var53;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var58 = ((val* (*)(val* self, long p0))(var49->class->vft[COLOR_standard__string__String___42d]))(var49, var54) /* * on <var49:String>*/;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "..";
var62 = 2;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
var64 = ((val* (*)(val* self, val* p0))(var58->class->vft[COLOR_standard__string__String___43d]))(var58, var60) /* + on <var58:String>*/;
}
var_up = var64;
{
var65 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_to);
}
if (var65){
var = var_up;
goto RET_LABEL;
} else {
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "/";
var69 = 1;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = ((val* (*)(val* self, val* p0))(var_up->class->vft[COLOR_standard__string__String___43d]))(var_up, var67) /* + on <var_up:String>*/;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "/";
var75 = 1;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
var77 = standard__string___Collection___join(var_to, var73);
}
{
var78 = ((val* (*)(val* self, val* p0))(var71->class->vft[COLOR_standard__string__String___43d]))(var71, var77) /* + on <var71:String>*/;
}
var_res = var78;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#mkdir for (self: String) */
void standard__file___String___mkdir(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var5 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var7 /* : Bool */;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
char var11 /* : Char */;
val* var_ /* var : Array[String] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[String] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_d /* var d: String */;
short int var16 /* : Bool */;
char var17 /* : Char */;
val* var18 /* : String */;
char* var19 /* : NativeString */;
short int var20 /* : Bool */;
short int var22 /* : Bool for extern */;
if (varonce) {
var = varonce;
} else {
var1 = "/";
var2 = 1;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = standard__string_search___Text___split_with(self, var);
}
var_dirs = var4;
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var5) on <var5:FlatBuffer> */
{
((void (*)(val* self))(var5->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var5) /* init on <var5:FlatBuffer>*/;
}
RET_LABEL6:(void)0;
}
}
var_path = var5;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_dirs);
}
if (var7){
goto RET_LABEL;
} else {
}
var8 = 0;
{
var9 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_dirs, var8);
}
{
var10 = standard___standard__Text___is_empty(var9);
}
if (var10){
var11 = '/';
{
standard___standard__FlatBuffer___Buffer__add(var_path, var11); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
} else {
}
var_ = var_dirs;
{
var12 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_13);
}
if (var14){
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_13);
}
var_d = var15;
{
var16 = standard___standard__Text___is_empty(var_d);
}
if (var16){
goto BREAK_label;
} else {
}
{
standard___standard__FlatBuffer___Buffer__append(var_path, var_d); /* Direct call string#FlatBuffer#append on <var_path:FlatBuffer>*/
}
var17 = '/';
{
standard___standard__FlatBuffer___Buffer__add(var_path, var17); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
{
var18 = standard___standard__FlatBuffer___Object__to_s(var_path);
}
{
var19 = ((char* (*)(val* self))(var18->class->vft[COLOR_standard__string__Text__to_cstring]))(var18) /* to_cstring on <var18:String>*/;
}
{
{ /* Inline file#NativeString#file_mkdir (var19) on <var19:NativeString> */
var22 = string_NativeString_NativeString_file_mkdir_0(var19);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[String]>*/
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:ArrayIterator[String]> */
RET_LABEL24:(void)0;
}
}
RET_LABEL:;
}
/* method file#String#file_extension for (self: String): nullable String */
val* standard__file___String___file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : SequenceRead[Char] */;
char var2 /* : Char */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
long var_last_slash /* var last_slash: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
long var18 /* : Int */;
val* var19 /* : Text */;
val* var20 /* : null */;
{
var1 = ((val* (*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self) /* chars on <self:String>*/;
}
var2 = '.';
{
var4 = BOX_standard__Char(var2); /* autobox from Char to nullable Object */
var3 = ((long (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of]))(var1, var4) /* last_index_of on <var1:SequenceRead[Char]>*/;
}
var_last_slash = var3;
var5 = 0;
{
{ /* Inline kernel#Int#> (var_last_slash,var5) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var9 = var_last_slash > var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 1;
{
{ /* Inline kernel#Int#+ (var_last_slash,var10) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var17 = var_last_slash + var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var18 = ((long (*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self) /* length on <self:String>*/;
}
{
var19 = ((val* (*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var11, var18) /* substring on <self:String>*/;
}
var = var19;
goto RET_LABEL;
} else {
var20 = NULL;
var = var20;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#NativeString#file_exists for (self: NativeString): Bool */
short int standard__file___NativeString___file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = string_NativeString_NativeString_file_exists_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_mkdir for (self: NativeString): Bool */
short int standard__file___NativeString___file_mkdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool for extern */;
var1 = string_NativeString_NativeString_file_mkdir_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_realpath for (self: NativeString): NativeString */
char* standard__file___NativeString___file_realpath(char* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = file_NativeString_realpath(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: NativeFile, NativeString, Int): Int */
long standard__file___standard__file__NativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_read_2(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: NativeFile, NativeString, Int): Int */
long standard__file___standard__file__NativeFile___io_write(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_write_2(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: NativeFile): Int */
long standard__file___standard__file__NativeFile___io_close(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_io_close_0(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#flush for (self: NativeFile): Int */
long standard__file___standard__file__NativeFile___flush(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = fflush(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#set_buffering_type for (self: NativeFile, Int, Int): Int */
long standard__file___standard__file__NativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_standard__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file_NativeFile_NativeFile_set_buffering_type_0(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: NativeFile, NativeString): NativeFile */
val* standard__file___standard__file__NativeFile___io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_read_1(p0);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: NativeFile, NativeString): NativeFile */
val* standard__file___standard__file__NativeFile___io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_io_open_write_1(p0);
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: NativeFile): NativeFile */
val* standard__file___standard__file__NativeFile___native_stdin(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdin_0();
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: NativeFile): NativeFile */
val* standard__file___standard__file__NativeFile___native_stdout(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stdout_0();
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: NativeFile): NativeFile */
val* standard__file___standard__file__NativeFile___native_stderr(val* self) {
val* var /* : NativeFile */;
void* var1 /* : NativeFile for extern */;
val* var2 /* : NativeFile */;
var1 = file_NativeFileCapable_NativeFileCapable_native_stderr_0();
var2 = BOX_standard__Pointer(var1); /* boxing NativeFile */
var2->type = &type_standard__file__NativeFile;
var2->class = &class_standard__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#init for (self: Sys) */
void standard__file___Sys___standard__kernel__Object__init(val* self) {
val* var /* : OStream */;
val* var2 /* : OStream */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : OStream */;
val* var6 /* : OStream */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int for extern */;
{
{ /* Inline file#Sys#stdout (self) on <self:Sys> */
var2 = self->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:OStream> isa FStream */
cltype = type_standard__FStream.color;
idtype = type_standard__FStream.id;
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
if (var3){
{
{ /* Inline file#Sys#stdout (self) on <self:Sys> */
var6 = self->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
/* <var4:OStream> isa FStream */
cltype8 = type_standard__FStream.color;
idtype9 = type_standard__FStream.id;
if(cltype8 >= var4->type->table_size) {
var7 = 0;
} else {
var7 = var4->type->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FStream", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1002);
show_backtrace(1);
}
var10 = 256;
{
{ /* Inline file#Sys#buffer_mode_line (self) on <self:Sys> */
var13 = file_Sys_Sys_buffer_mode_line_0(self);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
standard___standard__FStream___set_buffering_mode(var4, var10, var11); /* Direct call file#FStream#set_buffering_mode on <var4:OStream(FStream)>*/
}
} else {
}
RET_LABEL:;
}
/* method file#Sys#stdout for (self: Sys): OStream */
val* standard__file___Sys___stdout(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
var1 = self->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr for (self: Sys): OStream */
val* standard__file___Sys___stderr(val* self) {
val* var /* : OStream */;
val* var1 /* : OStream */;
var1 = self->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1011);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Sys#buffer_mode_line for (self: Sys): Int */
long standard__file___Sys___buffer_mode_line(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = file_Sys_Sys_buffer_mode_line_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
