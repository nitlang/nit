#include "standard__file.sep.0.h"
/* method file#FileStream#path= for (self: FileStream, nullable String) */
void standard___standard__FileStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_standard__file__FileStream___path].val = p0; /* _path on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#close for (self: FileStream) */
void standard___standard__FileStream___standard__stream__Stream__close(val* self) {
val* var /* : nullable NativeFile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable NativeFile */;
short int var8 /* : Bool */;
short int var10 /* : Bool for extern */;
void* var11 /* : Pointer for extern */;
val* var12 /* : nullable IOError */;
val* var14 /* : nullable IOError */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other18 /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : IOError */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var26 /* : nullable NativeFile */;
long var27 /* : Int */;
long var29 /* : Int for extern */;
void* var30 /* : NativeFile for extern */;
long var_i /* var i: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : IOError */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : Sys */;
val* var44 /* : Sys */;
long var45 /* : Int */;
long var47 /* : Int for extern */;
val* var48 /* : String */;
val* var49 /* : String */;
var = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable NativeFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable NativeFile(NativeFile)> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 63);
fatal_exit(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var7) on <var7:nullable NativeFile> */
var11 = ((struct instance_standard__Pointer*)var7)->value; /* unboxing nullable NativeFile */
var10 = address_is_null(var11);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline stream#Stream#last_error (self) on <self:FileStream> */
var14 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:FileStream> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var12,((val*)NULL)) on <var12:nullable IOError> */
var_other18 = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var_other18); /* == on <var12:nullable IOError(IOError)>*/
}
var20 = !var19;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
goto RET_LABEL;
} else {
}
var21 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "Cannot close unopened file";
var24 = standard___standard__NativeString___to_s_with_length(var23, 26l);
var22 = var24;
varonce = var22;
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_standard__error__Error__message_61d]))(var21, var22); /* message= on <var21:IOError>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_standard__kernel__Object__init]))(var21); /* init on <var21:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var21) on <self:FileStream> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var21; /* _last_error on <self:FileStream> */
RET_LABEL25:(void)0;
}
}
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 68);
fatal_exit(1);
} else {
{ /* Inline file#NativeFile#io_close (var26) on <var26:nullable NativeFile> */
var30 = ((struct instance_standard__Pointer*)var26)->value; /* unboxing nullable NativeFile */
var29 = file_NativeFile_NativeFile_io_close_0(var30);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_i = var27;
{
{ /* Inline kernel#Int#!= (var_i,0l) on <var_i:Int> */
var33 = var_i == 0l;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var35 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Close failed due to error ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 26l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[0]=var39;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var44 = glob_sys;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var42) on <var42:Sys> */
var47 = sys_errno(var42);
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var48 = standard__string___Int___strerror(var45);
}
((struct instance_standard__NativeArray*)var37)->values[1]=var48;
{
var49 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__error__Error__message_61d]))(var35, var49); /* message= on <var35:IOError>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_standard__kernel__Object__init]))(var35); /* init on <var35:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var35) on <self:FileStream> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var35; /* _last_error on <self:FileStream> */
RET_LABEL50:(void)0;
}
}
} else {
}
self->attrs[COLOR_standard__file__FileStream___file].val = ((val*)NULL); /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#set_buffering_mode for (self: FileStream, Int, Int) */
void standard___standard__FileStream___set_buffering_mode(val* self, long p0, long p1) {
long var_buf_size /* var buf_size: Int */;
long var_mode /* var mode: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : nullable NativeFile */;
long var5 /* : Int */;
long var7 /* : Int for extern */;
void* var8 /* : NativeFile for extern */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
long var22 /* : Int */;
long var24 /* : Int for extern */;
val* var25 /* : String */;
val* var26 /* : String */;
var_buf_size = p0;
var_mode = p1;
{
{ /* Inline kernel#Int#<= (var_buf_size,0l) on <var_buf_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var3 = var_buf_size <= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
var_buf_size = 512l;
} else {
}
var4 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 85);
fatal_exit(1);
} else {
{ /* Inline file#NativeFile#set_buffering_type (var4,var_buf_size,var_mode) on <var4:nullable NativeFile> */
var8 = ((struct instance_standard__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = file_NativeFile_NativeFile_set_buffering_type_0(var8, var_buf_size, var_mode);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var5,0l) on <var5:Int> */
var11 = var5 == 0l;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error while changing buffering type for FileStream, returned error ";
var18 = standard___standard__NativeString___to_s_with_length(var17, 67l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[0]=var16;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var19) on <var19:Sys> */
var24 = sys_errno(var19);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var25 = standard__string___Int___strerror(var22);
}
((struct instance_standard__NativeArray*)var14)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__error__Error__message_61d]))(var13, var26); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var13) on <self:FileStream> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var13; /* _last_error on <self:FileStream> */
RET_LABEL27:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#close for (self: FileReader) */
void standard___standard__FileReader___standard__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FileReader___standard__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
{
standard___standard__BufferedReader___buffer_reset(self); /* Direct call stream#BufferedReader#buffer_reset on <self:FileReader>*/
}
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_standard__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method file#FileReader#fill_buffer for (self: FileReader) */
void standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int for extern */;
void* var6 /* : NativeFile for extern */;
long var_nb /* var nb: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
var = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
var1 = self->attrs[COLOR_standard__stream__BufferedReader___buffer].str; /* _buffer on <self:FileReader> */
var2 = self->attrs[COLOR_standard__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:FileReader> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 128);
fatal_exit(1);
} else {
{ /* Inline file#NativeFile#io_read (var,var1,var2) on <var:nullable NativeFile> */
var6 = ((struct instance_standard__Pointer*)var)->value; /* unboxing nullable NativeFile */
var5 = file_NativeFile_NativeFile_io_read_2(var6, var1, var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nb = var3;
{
{ /* Inline kernel#Int#<= (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var10 = var_nb <= 0l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_standard__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL11:(void)0;
}
}
var_nb = 0l;
} else {
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l = var_nb; /* _buffer_length on <self:FileReader> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#end_reached for (self: FileReader): Bool */
short int standard___standard__FileReader___standard__stream__BufferedReader__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_standard__file__FileReader___end_reached].s; /* _end_reached on <self:FileReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileReader#end_reached= for (self: FileReader, Bool) */
void standard___standard__FileReader___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__FileReader___end_reached].s = p0; /* _end_reached on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#open for (self: FileReader, String) */
void standard___standard__FileReader___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var2 /* : NativeString */;
val* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
short int var5 /* : Bool */;
short int var7 /* : Bool for extern */;
void* var8 /* : Pointer for extern */;
val* var9 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : Sys */;
val* var25 /* : Sys */;
long var26 /* : Int */;
long var28 /* : Int for extern */;
val* var29 /* : String */;
val* var30 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_path = p0;
{
{ /* Inline file#FileStream#path= (self,var_path) on <self:FileReader> */
self->attrs[COLOR_standard__file__FileStream___path].val = var_path; /* _path on <self:FileReader> */
RET_LABEL1:(void)0;
}
}
{
standard___standard__BufferedReader___prepare_buffer(self, 10l); /* Direct call stream#BufferedReader#prepare_buffer on <self:FileReader>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var2 = ((char*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var3 = standard__file___standard__file__NativeFile___io_open_read(var, var2);
}
self->attrs[COLOR_standard__file__FileStream___file].val = var3; /* _file on <self:FileReader> */
var4 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 156);
fatal_exit(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var4) on <var4:nullable NativeFile> */
var8 = ((struct instance_standard__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = address_is_null(var8);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var9 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: Opening file at \'";
var14 = standard___standard__NativeString___to_s_with_length(var13, 24l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\' failed with \'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 15l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\'";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var10)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var25 = glob_sys;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var23) on <var23:Sys> */
var28 = sys_errno(var23);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
var29 = standard__string___Int___strerror(var26);
}
((struct instance_standard__NativeArray*)var10)->values[3]=var29;
{
var30 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__error__Error__message_61d]))(var9, var30); /* message= on <var9:IOError>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var9) on <self:FileReader> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var9; /* _last_error on <self:FileReader> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_standard__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL32:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#write for (self: FileWriter, Text) */
void standard___standard__FileWriter___standard__stream__Writer__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var15 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[FlatText] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_i /* var i: FlatText */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
long var23 /* : Int */;
var_s = p0;
{
{ /* Inline stream#Stream#last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_standard__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "cannot write to non-writable stream";
var13 = standard___standard__NativeString___to_s_with_length(var12, 35l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL14:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(var_s->class->vft[COLOR_standard__string__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[FlatText]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[FlatText]>*/
}
var_i = var19;
{
var20 = ((char*(*)(val* self))(var_i->class->vft[COLOR_standard__string__Text__to_cstring]))(var_i); /* to_cstring on <var_i:FlatText>*/
}
{
{ /* Inline string#FlatText#length (var_i) on <var_i:FlatText> */
var23 = var_i->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_i:FlatText> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
standard___standard__FileWriter___write_native(self, var20, var21); /* Direct call file#FileWriter#write_native on <self:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[FlatText]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[FlatText]>*/
}
RET_LABEL:;
}
/* method file#FileWriter#close for (self: FileWriter) */
void standard___standard__FileWriter___standard__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__FileWriter___standard__stream__Stream__close]))(self); /* close on <self:FileWriter>*/
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#is_writable= for (self: FileWriter, Bool) */
void standard___standard__FileWriter___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = p0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#write_native for (self: FileWriter, NativeString, Int) */
void standard___standard__FileWriter___write_native(val* self, char* p0, long p1) {
char* var_native /* var native: NativeString */;
long var_len /* var len: Int */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var15 /* : nullable NativeFile */;
short int var16 /* : Bool */;
short int var18 /* : Bool for extern */;
void* var19 /* : Pointer for extern */;
val* var20 /* : IOError */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var26 /* : nullable NativeFile */;
long var27 /* : Int */;
long var29 /* : Int for extern */;
void* var30 /* : NativeFile for extern */;
long var_err /* var err: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : IOError */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
var_native = p0;
var_len = p1;
{
{ /* Inline stream#Stream#last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_standard__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_standard__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Cannot write to non-writable stream";
var13 = standard___standard__NativeString___to_s_with_length(var12, 35l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL14:(void)0;
}
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 235);
fatal_exit(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var15) on <var15:nullable NativeFile> */
var19 = ((struct instance_standard__Pointer*)var15)->value; /* unboxing nullable NativeFile */
var18 = address_is_null(var19);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var20 = NEW_standard__IOError(&type_standard__IOError);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Writing on a null stream";
var24 = standard___standard__NativeString___to_s_with_length(var23, 24l);
var22 = var24;
varonce21 = var22;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_standard__error__Error__message_61d]))(var20, var22); /* message= on <var20:IOError>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_standard__kernel__Object__init]))(var20); /* init on <var20:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var20) on <self:FileWriter> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var20; /* _last_error on <self:FileWriter> */
RET_LABEL25:(void)0;
}
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 240);
fatal_exit(1);
} else {
{ /* Inline file#NativeFile#io_write (var26,var_native,var_len) on <var26:nullable NativeFile> */
var30 = ((struct instance_standard__Pointer*)var26)->value; /* unboxing nullable NativeFile */
var29 = file_NativeFile_NativeFile_io_write_2(var30, var_native, var_len);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_err = var27;
{
{ /* Inline kernel#Int#!= (var_err,var_len) on <var_err:Int> */
var33 = var_err == var_len;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var35 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Problem in writing : ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 21l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " ";
var45 = standard___standard__NativeString___to_s_with_length(var44, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var37)->values[2]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " \n";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var37)->values[4]=var47;
} else {
var37 = varonce36;
varonce36 = NULL;
}
var50 = standard__string___Int___Object__to_s(var_err);
((struct instance_standard__NativeArray*)var37)->values[1]=var50;
var51 = standard__string___Int___Object__to_s(var_len);
((struct instance_standard__NativeArray*)var37)->values[3]=var51;
{
var52 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_standard__error__Error__message_61d]))(var35, var52); /* message= on <var35:IOError>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_standard__kernel__Object__init]))(var35); /* init on <var35:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var35) on <self:FileWriter> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var35; /* _last_error on <self:FileWriter> */
RET_LABEL53:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#open for (self: FileWriter, String) */
void standard___standard__FileWriter___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
short int var5 /* : Bool */;
short int var7 /* : Bool for extern */;
void* var8 /* : Pointer for extern */;
val* var9 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : Sys */;
val* var25 /* : Sys */;
long var26 /* : Int */;
long var28 /* : Int for extern */;
val* var29 /* : String */;
val* var30 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_path = p0;
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = ((char*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var2 = standard__file___standard__file__NativeFile___io_open_write(var, var1);
}
self->attrs[COLOR_standard__file__FileStream___file].val = var2; /* _file on <self:FileWriter> */
{
{ /* Inline file#FileStream#path= (self,var_path) on <self:FileWriter> */
self->attrs[COLOR_standard__file__FileStream___path].val = var_path; /* _path on <self:FileWriter> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var4 = self->attrs[COLOR_standard__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 253);
fatal_exit(1);
} else {
{ /* Inline kernel#Pointer#address_is_null (var4) on <var4:nullable NativeFile> */
var8 = ((struct instance_standard__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = address_is_null(var8);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var9 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: Opening file at \'";
var14 = standard___standard__NativeString___to_s_with_length(var13, 24l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\' failed with \'";
var18 = standard___standard__NativeString___to_s_with_length(var17, 15l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\'";
var22 = standard___standard__NativeString___to_s_with_length(var21, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var10)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileWriter> */
var25 = glob_sys;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var23) on <var23:Sys> */
var28 = sys_errno(var23);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
var29 = standard__string___Int___strerror(var26);
}
((struct instance_standard__NativeArray*)var10)->values[3]=var29;
{
var30 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__error__Error__message_61d]))(var9, var30); /* message= on <var9:IOError>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var9) on <self:FileWriter> */
self->attrs[COLOR_standard__stream__Stream___last_error].val = var9; /* _last_error on <self:FileWriter> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline file#FileWriter#is_writable= (self,0) on <self:FileWriter> */
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL32:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#Stdin#init for (self: Stdin) */
void standard___standard__Stdin___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Stdin___standard__kernel__Object__init]))(self); /* init on <self:Stdin>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = standard__file___standard__file__NativeFile___native_stdin(var);
}
self->attrs[COLOR_standard__file__FileStream___file].val = var1; /* _file on <self:Stdin> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdin";
var4 = standard___standard__NativeString___to_s_with_length(var3, 10l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline file#FileStream#path= (self,var2) on <self:Stdin> */
self->attrs[COLOR_standard__file__FileStream___path].val = var2; /* _path on <self:Stdin> */
RET_LABEL5:(void)0;
}
}
{
standard___standard__BufferedReader___prepare_buffer(self, 1l); /* Direct call stream#BufferedReader#prepare_buffer on <self:Stdin>*/
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
val* var4 /* : FlatString */;
val* var6 /* : Sys */;
val* var8 /* : Sys */;
long var9 /* : Int */;
long var11 /* : Int for extern */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Stdout___standard__kernel__Object__init]))(self); /* init on <self:Stdout>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = standard__file___standard__file__NativeFile___native_stdout(var);
}
self->attrs[COLOR_standard__file__FileStream___file].val = var1; /* _file on <self:Stdout> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdout";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline file#FileStream#path= (self,var2) on <self:Stdout> */
self->attrs[COLOR_standard__file__FileStream___path].val = var2; /* _path on <self:Stdout> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stdout> */
{
{ /* Inline kernel#Object#sys (self) on <self:Stdout> */
var8 = glob_sys;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline file#Sys#buffer_mode_line (var6) on <var6:Sys> */
var11 = file_Sys_Sys_buffer_mode_line_0(var6);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
standard___standard__FileStream___set_buffering_mode(self, 256l, var9); /* Direct call file#FileStream#set_buffering_mode on <self:Stdout>*/
}
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void standard___standard__Stderr___standard__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Stderr___standard__kernel__Object__init]))(self); /* init on <self:Stderr>*/
}
var = NEW_standard__file__NativeFile(&type_standard__file__NativeFile);
{
var1 = standard__file___standard__file__NativeFile___native_stderr(var);
}
self->attrs[COLOR_standard__file__FileStream___file].val = var1; /* _file on <self:Stderr> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stderr";
var4 = standard___standard__NativeString___to_s_with_length(var3, 11l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline file#FileStream#path= (self,var2) on <self:Stderr> */
self->attrs[COLOR_standard__file__FileStream___path].val = var2; /* _path on <self:Stderr> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Writable#write_to_file for (self: Writable, String) */
void standard__file___Writable___write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
var_filepath = p0;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var, var_filepath); /* Direct call file#FileWriter#open on <var:FileWriter>*/
}
var_stream = var;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_standard__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method file#Path#path for (self: Path): String */
val* standard___standard__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
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
val* var /* : FileReader */;
val* var_input /* var input: FileReader */;
val* var1 /* : FileWriter */;
val* var_output /* var output: FileWriter */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
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
var2 = standard___standard__BufferedReader___Reader__eof(var_input);
}
var3 = !var2;
if (var3){
{
var4 = standard___standard__Reader___read(var_input, 1024l);
}
var_buffer = var4;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_output, var_buffer); /* Direct call file#FileWriter#write on <var_output:FileWriter>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard___standard__FileReader___standard__stream__Stream__close(var_input); /* Direct call file#FileReader#close on <var_input:FileReader>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_output); /* Direct call file#FileWriter#close on <var_output:FileWriter>*/
}
RET_LABEL:;
}
/* method file#Path#open_ro for (self: Path): FileReader */
val* standard___standard__Path___open_ro(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
val* var2 /* : String */;
val* var4 /* : String */;
var1 = NEW_standard__FileReader(&type_standard__FileReader);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__FileReader___open(var1, var2); /* Direct call file#FileReader#open on <var1:FileReader>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#open_wo for (self: Path): FileWriter */
val* standard___standard__Path___open_wo(val* self) {
val* var /* : FileWriter */;
val* var1 /* : FileWriter */;
val* var2 /* : String */;
val* var4 /* : String */;
var1 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__FileWriter___open(var1, var2); /* Direct call file#FileWriter#open on <var1:FileWriter>*/
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
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
{ /* Inline file#Path#path (self) on <self:Path> */
var5 = self->attrs[COLOR_standard__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard__file___String___simplify_path(var7);
}
{
var11 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var10); /* == on <var6:String>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 347);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard__file___String___simplify_path(var1);
}
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__hash]))(var4); /* hash on <var4:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#init for (self: Path) */
void standard___standard__Path___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Path___standard__kernel__Object__init]))(self); /* init on <self:Path>*/
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
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__file__Path__path_61d]))(var1, var2); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Path>*/
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
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
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
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : Text */;
var_ext = p0;
{
var1 = standard___standard__Text___has_suffix(self, var_ext);
}
if (var1){
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
var3 = ((long(*)(val* self))(var_ext->class->vft[COLOR_standard__string__Text__length]))(var_ext); /* length on <var_ext:String>*/
}
{
{ /* Inline kernel#Int#- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var7 = var2 - var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var4); /* substring on <self:String>*/
}
var = var8;
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
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : SequenceRead[Char] */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var_pos /* var pos: Int */;
val* var_n /* var n: String */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : Text */;
val* var58 /* : String */;
var_ext = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = (var15 != NULL) && (var19 == '/');
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var29 = var_l == 0l;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "/";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce = var30;
}
var = var30;
goto RET_LABEL;
} else {
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var34 = (val*)((long)('/')<<2|2);
var35 = ((long(*)(val* self, val* p0, long p1))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(var33, var34, var_l); /* last_index_of_from on <var33:SequenceRead[Char]>*/
}
var_pos = var35;
var_n = self;
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var38 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var42 = var_pos >= 0l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var49 = var_pos + 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var52 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var56 = var_l - var_pos;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var43, var50); /* substring on <self:String>*/
}
var_n = var57;
} else {
}
{
var58 = standard__file___String___strip_extension(var_n, var_ext);
}
var = var58;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: String): String */
val* standard__file___String___dirname(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : SequenceRead[Char] */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var_pos /* var pos: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : Text */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = (var15 != NULL) && (var19 == '/');
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var28 = (val*)((long)('/')<<2|2);
var29 = ((long(*)(val* self, val* p0, long p1))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of_from]))(var27, var28, var_l); /* last_index_of_from on <var27:SequenceRead[Char]>*/
}
var_pos = var29;
{
{ /* Inline kernel#Int#> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var36 = var_pos > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var37 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, 0l, var_pos); /* substring on <self:String>*/
}
var = var37;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#== (var_pos,0l) on <var_pos:Int> */
var40 = var_pos == 0l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "/";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ".";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
var = var45;
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
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
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
val* var3 /* : FlatString */;
val* var4 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var5 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var_ /* var : Array[String] */;
val* var6 /* : ArrayIterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: String */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
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
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : nullable Object */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
val* var60 /* : nullable Object */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
short int var73 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
val* var81 /* : nullable Object */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
val* var95 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = standard__string_search___Text___split_with(self, var1);
}
var_a = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[String]>*/
}
var_a2 = var5;
var_ = var_a;
{
var6 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_7);
}
if (var8){
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_7);
}
var_x = var9;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ".";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var12); /* == on <var_x:String>*/
}
var_16 = var15;
if (var15){
{
var17 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
var18 = !var17;
var10 = var18;
} else {
var10 = var_16;
}
if (var10){
goto BREAK_label;
} else {
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "";
var23 = standard___standard__NativeString___to_s_with_length(var22, 0l);
var21 = var23;
varonce20 = var21;
}
{
var24 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var21); /* == on <var_x:String>*/
}
var_25 = var24;
if (var24){
{
var26 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
var27 = !var26;
var19 = var27;
} else {
var19 = var_25;
}
if (var19){
goto BREAK_label;
} else {
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "..";
var33 = standard___standard__NativeString___to_s_with_length(var32, 2l);
var31 = var33;
varonce30 = var31;
}
{
var34 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var31); /* == on <var_x:String>*/
}
var_35 = var34;
if (var34){
{
var36 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
var37 = !var36;
var29 = var37;
} else {
var29 = var_35;
}
var_38 = var29;
if (var29){
{
var39 = standard___standard__SequenceRead___last(var_a2);
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "..";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
{
{ /* Inline kernel#Object#!= (var39,var41) on <var39:nullable Object(String)> */
var_other = var41;
{
var46 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var39, var_other); /* == on <var39:nullable Object(String)>*/
}
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var28 = var44;
} else {
var28 = var_38;
}
if (var28){
{
var48 = standard___standard__SequenceRead___last(var_a2);
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = ".";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var48, var50); /* == on <var48:nullable Object(String)>*/
}
if (var53){
{
var54 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_a2);
}
} else {
{
var55 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_a2);
}
goto BREAK_label;
}
} else {
{
var57 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
var58 = !var57;
var_59 = var58;
if (var58){
{
var60 = standard___standard__SequenceRead___last(var_a2);
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = ".";
var64 = standard___standard__NativeString___to_s_with_length(var63, 1l);
var62 = var64;
varonce61 = var62;
}
{
var65 = ((short int(*)(val* self, val* p0))(var60->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var60, var62); /* == on <var60:nullable Object(String)>*/
}
var56 = var65;
} else {
var56 = var_59;
}
if (var56){
{
var66 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_a2);
}
} else {
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_a2, var_x); /* Direct call array#AbstractArray#push on <var_a2:Array[String]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label67;
}
}
BREAK_label67: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_7); /* Direct call array#ArrayIterator#finish on <var_7:ArrayIterator[String]>*/
}
{
var68 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_a2);
}
if (var68){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = ".";
var72 = standard___standard__NativeString___to_s_with_length(var71, 1l);
var70 = var72;
varonce69 = var70;
}
var = var70;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_a2) on <var_a2:Array[String]> */
var76 = var_a2->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_a2:Array[String]> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var74,1l) on <var74:Int> */
var79 = var74 == 1l;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_80 = var77;
if (var77){
{
var81 = standard___standard__SequenceRead___Collection__first(var_a2);
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "";
var85 = standard___standard__NativeString___to_s_with_length(var84, 0l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((short int(*)(val* self, val* p0))(var81->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var81, var83); /* == on <var81:nullable Object(String)>*/
}
var73 = var86;
} else {
var73 = var_80;
}
if (var73){
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "/";
var90 = standard___standard__NativeString___to_s_with_length(var89, 1l);
var88 = var90;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
} else {
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "/";
var94 = standard___standard__NativeString___to_s_with_length(var93, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = standard__string___Collection___join(var_a2, var92);
}
var = var95;
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
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
uint32_t var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
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
var3 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var3, 0l); /* [] on <var3:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,'/') on <var4:nullable Object(Char)> */
var8 = (uint32_t)((long)(var4)>>2);
var7 = (var4 != NULL) && (var8 == '/');
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_path;
goto RET_LABEL;
} else {
}
{
var9 = standard___standard__Text___last(self);
}
{
{ /* Inline kernel#Char#== (var9,'/') on <var9:Char> */
var12 = var9 == '/';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (unlikely(varonce==NULL)) {
var13 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
} else {
var13 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var13)->values[0]=self;
((struct instance_standard__NativeArray*)var13)->values[1]=var_path;
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var14;
goto RET_LABEL;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[0]=self;
((struct instance_standard__NativeArray*)var16)->values[2]=var_path;
{
var21 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var21;
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
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var_cwd /* var cwd: String */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
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
val* var17 /* : FlatString */;
val* var18 /* : Array[String] */;
val* var_to /* var to: Array[String] */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : nullable Object */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_from_len /* var from_len: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var52 /* : Int */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var_up /* var up: String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var_res /* var res: String */;
var_dest = p0;
var1 = glob_sys;
{
var2 = standard__file___Sys___getcwd(var1);
}
var_cwd = var2;
{
var3 = standard__file___String____47d(var_cwd, self);
}
{
var4 = standard__file___String___simplify_path(var3);
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var7 = standard___standard__NativeString___to_s_with_length(var6, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = standard__string_search___Text___split(var4, var5);
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
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "/";
var17 = standard___standard__NativeString___to_s_with_length(var16, 1l);
var15 = var17;
varonce14 = var15;
}
{
var18 = standard__string_search___Text___split(var13, var15);
}
var_to = var18;
{
var19 = standard___standard__SequenceRead___last(var_to);
}
{
var20 = standard___standard__Text___is_empty(var19);
}
if (var20){
{
var21 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_to);
}
} else {
}
for(;;) {
{
var24 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_from);
}
var25 = !var24;
var_ = var25;
if (var25){
{
var26 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_to);
}
var27 = !var26;
var23 = var27;
} else {
var23 = var_;
}
var_28 = var23;
if (var23){
{
var29 = standard___standard__SequenceRead___Collection__first(var_from);
}
{
var30 = standard___standard__SequenceRead___Collection__first(var_to);
}
{
var31 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var30); /* == on <var29:nullable Object(String)>*/
}
var22 = var31;
} else {
var22 = var_28;
}
if (var22){
{
var32 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_from);
}
{
var33 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(var_to);
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_from) on <var_from:Array[String]> */
var36 = var_from->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_from:Array[String]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_from_len = var34;
{
{ /* Inline kernel#Int#== (var_from_len,0l) on <var_from_len:Int> */
var39 = var_from_len == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "/";
var43 = standard___standard__NativeString___to_s_with_length(var42, 1l);
var41 = var43;
varonce40 = var41;
}
{
var44 = standard__string___Collection___join(var_to, var41);
}
var = var44;
goto RET_LABEL;
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "../";
var48 = standard___standard__NativeString___to_s_with_length(var47, 3l);
var46 = var48;
varonce45 = var46;
}
{
{ /* Inline kernel#Int#- (var_from_len,1l) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var52 = var_from_len - 1l;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
var53 = ((val*(*)(val* self, long p0))(var46->class->vft[COLOR_standard__string__String___42d]))(var46, var49); /* * on <var46:String>*/
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "..";
var57 = standard___standard__NativeString___to_s_with_length(var56, 2l);
var55 = var57;
varonce54 = var55;
}
{
var58 = ((val*(*)(val* self, val* p0))(var53->class->vft[COLOR_standard__string__String___43d]))(var53, var55); /* + on <var53:String>*/
}
var_up = var58;
{
var59 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_to);
}
if (var59){
var = var_up;
goto RET_LABEL;
} else {
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "/";
var63 = standard___standard__NativeString___to_s_with_length(var62, 1l);
var61 = var63;
varonce60 = var61;
}
{
var64 = ((val*(*)(val* self, val* p0))(var_up->class->vft[COLOR_standard__string__String___43d]))(var_up, var61); /* + on <var_up:String>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "/";
var68 = standard___standard__NativeString___to_s_with_length(var67, 1l);
var66 = var68;
varonce65 = var66;
}
{
var69 = standard__string___Collection___join(var_to, var66);
}
{
var70 = ((val*(*)(val* self, val* p0))(var64->class->vft[COLOR_standard__string__String___43d]))(var64, var69); /* + on <var64:String>*/
}
var_res = var70;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#mkdir for (self: String): nullable Error */
val* standard__file___String___mkdir(val* self) {
val* var /* : nullable Error */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var5 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
val* var_error /* var error: nullable Error */;
val* var_ /* var : Array[String] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_d /* var d: String */;
short int var14 /* : Bool */;
val* var15 /* : String */;
char* var16 /* : NativeString */;
short int var17 /* : Bool */;
short int var19 /* : Bool for extern */;
short int var_res /* var res: Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : IOError */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : Sys */;
val* var43 /* : Sys */;
long var44 /* : Int */;
long var46 /* : Int for extern */;
val* var47 /* : String */;
val* var48 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = standard___standard__NativeString___to_s_with_length(var2, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = standard__string_search___Text___split_with(self, var1);
}
var_dirs = var4;
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_path = var5;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_dirs);
}
if (var7){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_dirs, 0l);
}
{
var9 = standard___standard__Text___is_empty(var8);
}
if (var9){
{
standard___standard__FlatBuffer___Buffer__add(var_path, '/'); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
} else {
}
var_error = ((val*)NULL);
var_ = var_dirs;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_d = var13;
{
var14 = standard___standard__Text___is_empty(var_d);
}
if (var14){
goto BREAK_label;
} else {
}
{
standard___standard__FlatBuffer___Buffer__append(var_path, var_d); /* Direct call string#FlatBuffer#append on <var_path:FlatBuffer>*/
}
{
standard___standard__FlatBuffer___Buffer__add(var_path, '/'); /* Direct call string#FlatBuffer#add on <var_path:FlatBuffer>*/
}
{
var15 = standard___standard__FlatBuffer___Object__to_s(var_path);
}
{
var16 = ((char*(*)(val* self))(var15->class->vft[COLOR_standard__string__Text__to_cstring]))(var15); /* to_cstring on <var15:String>*/
}
{
{ /* Inline file#NativeString#file_mkdir (var16) on <var16:NativeString> */
var19 = string_NativeString_NativeString_file_mkdir_0(var16);
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_res = var17;
var21 = !var_res;
var_22 = var21;
if (var21){
if (var_error == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_error,var_other) on <var_error:nullable Error(Error)> */
var28 = var_error == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var20 = var23;
} else {
var20 = var_22;
}
if (var20){
var29 = NEW_standard__IOError(&type_standard__IOError);
if (unlikely(varonce30==NULL)) {
var31 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Cannot create directory `";
var35 = standard___standard__NativeString___to_s_with_length(var34, 25l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "`: ";
var39 = standard___standard__NativeString___to_s_with_length(var38, 3l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var40 = ((val*(*)(val* self))(var_path->class->vft[COLOR_standard__string__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var31)->values[1]=var40;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var43 = glob_sys;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var41) on <var41:Sys> */
var46 = sys_errno(var41);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
var47 = standard__string___Int___strerror(var44);
}
((struct instance_standard__NativeArray*)var31)->values[3]=var47;
{
var48 = ((val*(*)(val* self))(var31->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__error__Error__message_61d]))(var29, var48); /* message= on <var29:IOError>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_standard__kernel__Object__init]))(var29); /* init on <var29:IOError>*/
}
var_error = var29;
} else {
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[String]>*/
}
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[String]>*/
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_extension for (self: String): nullable String */
val* standard__file___String___file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
long var_last_slash /* var last_slash: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:String>*/
}
{
var2 = (val*)((long)('.')<<2|2);
var3 = ((long(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of]))(var1, var2); /* last_index_of on <var1:SequenceRead[Char]>*/
}
var_last_slash = var3;
{
{ /* Inline kernel#Int#> (var_last_slash,0l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var7 = var_last_slash > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#+ (var_last_slash,1l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var14 = var_last_slash + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_standard__string__Text__length]))(self); /* length on <self:String>*/
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_standard__string__Text__substring]))(self, var8, var15); /* substring on <self:String>*/
}
var = var16;
goto RET_LABEL;
} else {
var = ((val*)NULL);
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
/* method file#Sys#stdout for (self: Sys): Writer */
val* standard__file___Sys___stdout(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stdout */;
var1 = self->attrs[COLOR_standard__file__Sys___stdout].val != NULL; /* _stdout on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1158);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Stdout(&type_standard__Stdout);
{
standard___standard__Stdout___standard__kernel__Object__init(var3); /* Direct call file#Stdout#init on <var3:Stdout>*/
}
self->attrs[COLOR_standard__file__Sys___stdout].val = var3; /* _stdout on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr for (self: Sys): Writer */
val* standard__file___Sys___stderr(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stderr */;
var1 = self->attrs[COLOR_standard__file__Sys___stderr].val != NULL; /* _stderr on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1161);
fatal_exit(1);
}
} else {
var3 = NEW_standard__Stderr(&type_standard__Stderr);
{
standard___standard__Stderr___standard__kernel__Object__init(var3); /* Direct call file#Stderr#init on <var3:Stderr>*/
}
self->attrs[COLOR_standard__file__Sys___stderr].val = var3; /* _stderr on <self:Sys> */
var2 = var3;
}
var = var2;
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
/* method file#Sys#printn for (self: Sys, Array[Object]) */
void standard__file___Sys___printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
var_objects = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = standard__file___Sys___stdout(var);
}
{
var4 = standard__string___Array___Collection__plain_to_s(var_objects);
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var3, var4); /* Direct call file#FileWriter#write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#print for (self: Sys, Object) */
void standard__file___Sys___print(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = standard__file___Sys___stdout(var);
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_standard__string__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var3, var4); /* Direct call file#FileWriter#write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = standard__file___Sys___stdout(var5);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = standard___standard__NativeString___to_s_with_length(var10, 1l);
var9 = var11;
varonce = var9;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var8, var9); /* Direct call file#FileWriter#write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#getcwd for (self: Sys): String */
val* standard__file___Sys___getcwd(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
void* var3 /* : NativeString for extern */;
val* var4 /* : String */;
{
{ /* Inline file#Sys#file_getcwd (self) on <self:Sys> */
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
/* method file#Sys#file_getcwd for (self: Sys): NativeString */
char* standard__file___Sys___file_getcwd(val* self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = string_NativeString_NativeString_file_getcwd_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
