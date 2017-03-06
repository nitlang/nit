#include "core__file.sep.0.h"
/* method file$FileStream$path for (self: FileStream): nullable String */
val* core___core__FileStream___path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__file__FileStream___path].val; /* _path on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStream$path= for (self: FileStream, nullable String) */
void core___core__FileStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStream___path].val = p0; /* _path on <self:FileStream> */
RET_LABEL:;
}
/* method file$FileStream$close for (self: FileStream) */
void core___core__FileStream___core__stream__Stream__close(val* self) {
val* var /* : nullable NativeFile */;
val* var_file /* var file: nullable NativeFile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
void* var6 /* : Pointer for extern */;
val* var7 /* : nullable IOError */;
val* var9 /* : nullable IOError */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : IOError */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
long var24 /* : Int */;
long var26 /* : Int */;
void* var27 /* : NativeFile for extern */;
long var_i /* var i: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : IOError */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : Sys */;
val* var45 /* : Sys */;
long var46 /* : Int */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
var_file = var;
if (var_file == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = core___core__Pointer___Object___61d_61d(var_file, ((val*)NULL));
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Pointer$address_is_null (var_file) on <var_file:nullable NativeFile(NativeFile)> */
var6 = ((struct instance_core__Pointer*)var_file)->value; /* unboxing nullable NativeFile */
var5 = core__kernel___Pointer_address_is_null___impl(var6);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline stream$Stream$last_error (self) on <self:FileStream> */
var9 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileStream> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var7,((val*)NULL)) on <var7:nullable IOError> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var_other); /* == on <var7:nullable IOError(IOError)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
goto RET_LABEL;
} else {
}
var15 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "Cannot close unopened file";
var19 = (val*)(26l<<2|1);
var20 = (val*)(26l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce = var16;
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_core__error__Error__message_61d]))(var15, var16); /* message= on <var15:IOError>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var15) on <self:FileStream> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var15; /* _last_error on <self:FileStream> */
RET_LABEL23:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline file$NativeFile$io_close (var_file) on <var_file:nullable NativeFile(NativeFile)> */
var27 = ((struct instance_core__Pointer*)var_file)->value; /* unboxing nullable NativeFile */
var26 = core__file___NativeFile_io_close___impl(var27);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_i = var24;
{
{ /* Inline kernel$Int$!= (var_i,0l) on <var_i:Int> */
var30 = var_i == 0l;
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
var32 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Close failed due to error ";
var39 = (val*)(26l<<2|1);
var40 = (val*)(26l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
{ /* Inline kernel$Object$sys (self) on <self:FileStream> */
var45 = glob_sys;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var43) on <var43:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var43;
var48 = core__kernel___Sys_errno___impl(var_for_c_0);
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var49 = core__abstract_text___Int___strerror(var46);
}
((struct instance_core__NativeArray*)var34)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
((void(*)(val* self, val* p0))(var32->class->vft[COLOR_core__error__Error__message_61d]))(var32, var50); /* message= on <var32:IOError>*/
}
{
((void(*)(val* self))(var32->class->vft[COLOR_core__kernel__Object__init]))(var32); /* init on <var32:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var32) on <self:FileStream> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var32; /* _last_error on <self:FileStream> */
RET_LABEL51:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__file__FileStream___file].val = ((val*)NULL); /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file$FileStream$set_buffering_mode for (self: FileStream, Int, Int) */
void core___core__FileStream___set_buffering_mode(val* self, long p0, long p1) {
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
long var7 /* : Int */;
void* var8 /* : NativeFile for extern */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : Sys */;
val* var25 /* : Sys */;
long var26 /* : Int */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var_buf_size = p0;
var_mode = p1;
{
{ /* Inline kernel$Int$<= (var_buf_size,0l) on <var_buf_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
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
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 95);
fatal_exit(1);
}
{
{ /* Inline file$NativeFile$set_buffering_type (var4,var_buf_size,var_mode) on <var4:nullable NativeFile(NativeFile)> */
var8 = ((struct instance_core__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = core__file___NativeFile_set_buffering_type___impl(var8, var_buf_size, var_mode);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var5,0l) on <var5:Int> */
var11 = var5 == 0l;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error while changing buffering type for FileStream, returned error ";
var19 = (val*)(67l<<2|1);
var20 = (val*)(67l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel$Object$sys (self) on <self:FileStream> */
var25 = glob_sys;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var23) on <var23:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var23;
var28 = core__kernel___Sys_errno___impl(var_for_c_0);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
var29 = core__abstract_text___Int___strerror(var26);
}
((struct instance_core__NativeArray*)var14)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__error__Error__message_61d]))(var13, var30); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var13) on <self:FileStream> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var13; /* _last_error on <self:FileStream> */
RET_LABEL31:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file$FileReader$close for (self: FileReader) */
void core___core__FileReader___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileReader___core__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
{
core___core__BufferedReader___buffer_reset(self); /* Direct call stream$BufferedReader$buffer_reset on <self:FileReader>*/
}
{
{ /* Inline file$FileReader$end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method file$FileReader$fill_buffer for (self: FileReader) */
void core___core__FileReader___core__stream__BufferedReader__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
char* var1 /* : CString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
void* var6 /* : NativeFile for extern */;
long var_nb /* var nb: Int */;
short int var7 /* : Bool */;
val* var8 /* : nullable IOError */;
val* var10 /* : nullable IOError */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : nullable NativeFile */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
void* var21 /* : NativeFile for extern */;
val* var22 /* : IOError */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable String */;
val* var42 /* : nullable String */;
val* var43 /* : Sys */;
val* var45 /* : Sys */;
long var46 /* : Int */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var56 /* : Bool */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 138);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:FileReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:FileReader> */
{
{ /* Inline file$NativeFile$io_read (var,var1,var2) on <var:nullable NativeFile(NativeFile)> */
var6 = ((struct instance_core__Pointer*)var)->value; /* unboxing nullable NativeFile */
var5 = core__file___NativeFile_io_read___impl(var6, var1, var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nb = var3;
{
{ /* Inline stream$Stream$last_error (self) on <self:FileReader> */
var10 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileReader> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var8,((val*)NULL)) on <var8:nullable IOError> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable IOError(IOError)> */
var16 = var8 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
var_ = var11;
if (var11){
var17 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 139);
fatal_exit(1);
}
{
{ /* Inline file$NativeFile$ferror (var17) on <var17:nullable NativeFile(NativeFile)> */
var21 = ((struct instance_core__Pointer*)var17)->value; /* unboxing nullable NativeFile */
var20 = core__file___NativeFile_ferror___impl(var21);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var7 = var18;
} else {
var7 = var_;
}
if (var7){
var22 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var23 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Cannot read `";
var28 = (val*)(13l<<2|1);
var29 = (val*)(13l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`: ";
var36 = (val*)(3l<<2|1);
var37 = (val*)(3l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[2]=var33;
} else {
var23 = varonce;
varonce = NULL;
}
{
{ /* Inline file$FileStream$path (self) on <self:FileReader> */
var42 = self->attrs[COLOR_core__file__FileStream___path].val; /* _path on <self:FileReader> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 140);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var23)->values[1]=var40;
{
{ /* Inline kernel$Object$sys (self) on <self:FileReader> */
var45 = glob_sys;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var43) on <var43:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var43;
var48 = core__kernel___Sys_errno___impl(var_for_c_0);
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var49 = core__abstract_text___Int___strerror(var46);
}
((struct instance_core__NativeArray*)var23)->values[3]=var49;
{
var50 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__error__Error__message_61d]))(var22, var50); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var22) on <self:FileReader> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var22; /* _last_error on <self:FileReader> */
RET_LABEL51:(void)0;
}
}
{
{ /* Inline file$FileReader$end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL52:(void)0;
}
}
} else {
}
{
{ /* Inline kernel$Int$<= (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var55 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var56 = var_nb <= 0l;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline file$FileReader$end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL57:(void)0;
}
}
var_nb = 0l;
} else {
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = var_nb; /* _buffer_length on <self:FileReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
RET_LABEL:;
}
/* method file$FileReader$end_reached for (self: FileReader): Bool */
short int core___core__FileReader___core__stream__BufferedReader__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:FileReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileReader$end_reached= for (self: FileReader, Bool) */
void core___core__FileReader___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileReader___end_reached].s = p0; /* _end_reached on <self:FileReader> */
RET_LABEL:;
}
/* method file$FileReader$open for (self: FileReader, String) */
void core___core__FileReader___open(val* self, val* p0) {
val* var_path /* var path: String */;
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var2 /* : NativeFile */;
char* var3 /* : CString */;
val* var4 /* : NativeFile */;
val* var5 /* : nullable NativeFile */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
void* var9 /* : Pointer for extern */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : Sys */;
val* var30 /* : Sys */;
long var31 /* : Int */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_path = p0;
{
{ /* Inline file$FileStream$path= (self,var_path) on <self:FileReader> */
self->attrs[COLOR_core__file__FileStream___path].val = var_path; /* _path on <self:FileReader> */
RET_LABEL1:(void)0;
}
}
{
core___core__BufferedReader___prepare_buffer(self, 100l); /* Direct call stream$BufferedReader$prepare_buffer on <self:FileReader>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var2 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var2;
varoncenew = var;
varoncenew_guard = 1;
}
{
var3 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var4 = core__file___core__file__NativeFile___io_open_read(var, var3);
}
self->attrs[COLOR_core__file__FileStream___file].val = var4; /* _file on <self:FileReader> */
var5 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 170);
fatal_exit(1);
}
{
{ /* Inline kernel$Pointer$address_is_null (var5) on <var5:nullable NativeFile(NativeFile)> */
var9 = ((struct instance_core__Pointer*)var5)->value; /* unboxing nullable NativeFile */
var8 = core__kernel___Pointer_address_is_null___impl(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Cannot open `";
var16 = (val*)(13l<<2|1);
var17 = (val*)(13l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`: ";
var24 = (val*)(3l<<2|1);
var25 = (val*)(3l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[2]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var11)->values[1]=var_path;
{
{ /* Inline kernel$Object$sys (self) on <self:FileReader> */
var30 = glob_sys;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var28) on <var28:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var28;
var33 = core__kernel___Sys_errno___impl(var_for_c_0);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
var34 = core__abstract_text___Int___strerror(var31);
}
((struct instance_core__NativeArray*)var11)->values[3]=var34;
{
var35 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var35); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var10) on <self:FileReader> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileReader> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline file$FileReader$end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL37:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file$FileWriter$write_bytes for (self: FileWriter, Bytes) */
void core___core__FileWriter___core__stream__Writer__write_bytes(val* self, val* p0) {
val* var_s /* var s: Bytes */;
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
char* var19 /* : CString */;
char* var21 /* : CString */;
long var22 /* : Int */;
long var24 /* : Int */;
var_s = p0;
{
{ /* Inline stream$Stream$last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
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
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
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
var8 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "cannot write to non-writable stream";
var14 = (val*)(35l<<2|1);
var15 = (val*)(35l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL18:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline bytes$Bytes$items (var_s) on <var_s:Bytes> */
var21 = var_s->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_s:Bytes> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (var_s) on <var_s:Bytes> */
var24 = var_s->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_s:Bytes> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
core___core__FileWriter___write_native(self, var19, 0l, var22); /* Direct call file$FileWriter$write_native on <self:FileWriter>*/
}
RET_LABEL:;
}
/* method file$FileWriter$write for (self: FileWriter, Text) */
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0) {
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
var_s = p0;
{
{ /* Inline stream$Stream$last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
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
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
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
var8 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "cannot write to non-writable stream";
var14 = (val*)(35l<<2|1);
var15 = (val*)(35l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL18:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__file__Text__write_native_to]))(var_s, self); /* write_native_to on <var_s:Text>*/
}
RET_LABEL:;
}
/* method file$FileWriter$close for (self: FileWriter) */
void core___core__FileWriter___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileWriter___core__stream__Stream__close]))(self); /* close on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file$FileWriter$is_writable= for (self: FileWriter, Bool) */
void core___core__FileWriter___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileWriter___is_writable].s = p0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file$FileWriter$write_native for (self: FileWriter, CString, Int, Int) */
void core___core__FileWriter___write_native(val* self, char* p0, long p1, long p2) {
char* var_native /* var native: CString */;
long var_from /* var from: Int */;
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var19 /* : nullable NativeFile */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
void* var23 /* : Pointer for extern */;
val* var24 /* : IOError */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var34 /* : nullable NativeFile */;
long var35 /* : Int */;
long var37 /* : Int */;
void* var38 /* : NativeFile for extern */;
long var_err /* var err: Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : IOError */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
var_native = p0;
var_from = p1;
var_len = p2;
{
{ /* Inline stream$Stream$last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
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
{ /* Inline kernel$Object$!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
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
var8 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Cannot write to non-writable stream";
var14 = (val*)(35l<<2|1);
var15 = (val*)(35l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL18:(void)0;
}
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 267);
fatal_exit(1);
}
{
{ /* Inline kernel$Pointer$address_is_null (var19) on <var19:nullable NativeFile(NativeFile)> */
var23 = ((struct instance_core__Pointer*)var19)->value; /* unboxing nullable NativeFile */
var22 = core__kernel___Pointer_address_is_null___impl(var23);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var24 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Writing on a null stream";
var29 = (val*)(24l<<2|1);
var30 = (val*)(24l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__error__Error__message_61d]))(var24, var26); /* message= on <var24:IOError>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var24) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var24; /* _last_error on <self:FileWriter> */
RET_LABEL33:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var34 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 272);
fatal_exit(1);
}
{
{ /* Inline file$NativeFile$io_write (var34,var_native,var_from,var_len) on <var34:nullable NativeFile(NativeFile)> */
var38 = ((struct instance_core__Pointer*)var34)->value; /* unboxing nullable NativeFile */
var37 = core__file___NativeFile_io_write___impl(var38, var_native, var_from, var_len);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_err = var35;
{
{ /* Inline kernel$Int$!= (var_err,var_len) on <var_err:Int> */
var41 = var_err == var_len;
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var43 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "Problem in writing : ";
var50 = (val*)(21l<<2|1);
var51 = (val*)(21l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[0]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " ";
var58 = (val*)(1l<<2|1);
var59 = (val*)(1l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var45)->values[2]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " \n";
var66 = (val*)(2l<<2|1);
var67 = (val*)(2l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var45)->values[4]=var63;
} else {
var45 = varonce44;
varonce44 = NULL;
}
var70 = core__flat___Int___core__abstract_text__Object__to_s(var_err);
((struct instance_core__NativeArray*)var45)->values[1]=var70;
var71 = core__flat___Int___core__abstract_text__Object__to_s(var_len);
((struct instance_core__NativeArray*)var45)->values[3]=var71;
{
var72 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_core__error__Error__message_61d]))(var43, var72); /* message= on <var43:IOError>*/
}
{
((void(*)(val* self))(var43->class->vft[COLOR_core__kernel__Object__init]))(var43); /* init on <var43:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var43) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var43; /* _last_error on <self:FileWriter> */
RET_LABEL73:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file$FileWriter$open for (self: FileWriter, String) */
void core___core__FileWriter___open(val* self, val* p0) {
val* var_path /* var path: String */;
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
char* var2 /* : CString */;
val* var3 /* : NativeFile */;
val* var5 /* : nullable NativeFile */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
void* var9 /* : Pointer for extern */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : Sys */;
val* var30 /* : Sys */;
long var31 /* : Int */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_path = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var3 = core__file___core__file__NativeFile___io_open_write(var, var2);
}
self->attrs[COLOR_core__file__FileStream___file].val = var3; /* _file on <self:FileWriter> */
{
{ /* Inline file$FileStream$path= (self,var_path) on <self:FileWriter> */
self->attrs[COLOR_core__file__FileStream___path].val = var_path; /* _path on <self:FileWriter> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var5 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 285);
fatal_exit(1);
}
{
{ /* Inline kernel$Pointer$address_is_null (var5) on <var5:nullable NativeFile(NativeFile)> */
var9 = ((struct instance_core__Pointer*)var5)->value; /* unboxing nullable NativeFile */
var8 = core__kernel___Pointer_address_is_null___impl(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Cannot open `";
var16 = (val*)(13l<<2|1);
var17 = (val*)(13l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`: ";
var24 = (val*)(3l<<2|1);
var25 = (val*)(3l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[2]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var11)->values[1]=var_path;
{
{ /* Inline kernel$Object$sys (self) on <self:FileWriter> */
var30 = glob_sys;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var28) on <var28:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var28;
var33 = core__kernel___Sys_errno___impl(var_for_c_0);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
var34 = core__abstract_text___Int___strerror(var31);
}
((struct instance_core__NativeArray*)var11)->values[3]=var34;
{
var35 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var35); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream$Stream$last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline file$FileWriter$is_writable= (self,0) on <self:FileWriter> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL37:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file$Stdin$init for (self: Stdin) */
void core___core__Stdin___core__kernel__Object__init(val* self) {
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdin___core__kernel__Object__init]))(self); /* init on <self:Stdin>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = core__file___core__file__NativeFile___native_stdin(var);
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:Stdin> */
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/dev/stdin";
var6 = (val*)(10l<<2|1);
var7 = (val*)(10l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
{ /* Inline file$FileStream$path= (self,var3) on <self:Stdin> */
self->attrs[COLOR_core__file__FileStream___path].val = var3; /* _path on <self:Stdin> */
RET_LABEL10:(void)0;
}
}
{
core___core__BufferedReader___prepare_buffer(self, 1l); /* Direct call stream$BufferedReader$prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file$Stdout$init for (self: Stdout) */
void core___core__Stdout___core__kernel__Object__init(val* self) {
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var11 /* : Sys */;
val* var13 /* : Sys */;
long var14 /* : Int */;
long var16 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdout___core__kernel__Object__init]))(self); /* init on <self:Stdout>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = core__file___core__file__NativeFile___native_stdout(var);
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:Stdout> */
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/dev/stdout";
var6 = (val*)(11l<<2|1);
var7 = (val*)(11l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
{ /* Inline file$FileStream$path= (self,var3) on <self:Stdout> */
self->attrs[COLOR_core__file__FileStream___path].val = var3; /* _path on <self:Stdout> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stdout> */
{
{ /* Inline kernel$Object$sys (self) on <self:Stdout> */
var13 = glob_sys;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline file$Sys$buffer_mode_line (var11) on <var11:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var11;
var16 = core__file___Sys_buffer_mode_line___impl(var_for_c_0);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
core___core__FileStream___set_buffering_mode(self, 256l, var14); /* Direct call file$FileStream$set_buffering_mode on <self:Stdout>*/
}
RET_LABEL:;
}
/* method file$Stderr$init for (self: Stderr) */
void core___core__Stderr___core__kernel__Object__init(val* self) {
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stderr___core__kernel__Object__init]))(self); /* init on <self:Stderr>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = core__file___core__file__NativeFile___native_stderr(var);
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:Stderr> */
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/dev/stderr";
var6 = (val*)(11l<<2|1);
var7 = (val*)(11l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
{ /* Inline file$FileStream$path= (self,var3) on <self:Stderr> */
self->attrs[COLOR_core__file__FileStream___path].val = var3; /* _path on <self:Stderr> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file$Writable$write_to_file for (self: Writable, String) */
void core__file___Writable___write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
var_filepath = p0;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var, var_filepath); /* Direct call file$FileWriter$open on <var:FileWriter>*/
}
var_stream = var;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file$FileWriter$close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method file$Path$path for (self: Path): String */
val* core___core__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file$Path$path= for (self: Path, String) */
void core___core__Path___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___path].val = p0; /* _path on <self:Path> */
RET_LABEL:;
}
/* method file$Path$to_s for (self: Path): String */
val* core___core__Path___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline file$Path$path (self) on <self:Path> */
var3 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
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
/* method file$Path$simplified for (self: Path): Path */
val* core___core__Path___simplified(val* self) {
val* var /* : Path */;
short int var1 /* : Bool */;
val* var2 /* : Path */;
val* var3 /* : Path */;
val* var5 /* : String */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : Path */;
val* var_res /* var res: Path */;
var1 = self->attrs[COLOR_core__file__Path___simplified].val != NULL; /* _simplified on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___simplified].val; /* _simplified on <self:Path> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simplified");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 398);
fatal_exit(1);
}
} else {
{
{
{ /* Inline file$Path$path (self) on <self:Path> */
var7 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core__file___String___simplify_path(var5);
}
{
var9 = core__file___Text___to_path(var8);
}
var_res = var9;
{
core___core__Path___simplified_61d(var_res, var_res); /* Direct call file$Path$simplified= on <var_res:Path>*/
}
var3 = var_res;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__file__Path___simplified].val = var3; /* _simplified on <self:Path> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Path$simplified= for (self: Path, Path) */
void core___core__Path___simplified_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___simplified].val = p0; /* _simplified on <self:Path> */
RET_LABEL:;
}
/* method file$Path$last_error= for (self: Path, nullable IOError) */
void core___core__Path___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___last_error].val = p0; /* _last_error on <self:Path> */
RET_LABEL:;
}
/* method file$Path$copy for (self: Path, Path) */
void core___core__Path___copy(val* self, val* p0) {
val* var_dest /* var dest: Path */;
val* var /* : FileReader */;
val* var_input /* var input: FileReader */;
val* var2 /* : FileWriter */;
val* var_output /* var output: FileWriter */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Bytes */;
val* var_buffer /* var buffer: Bytes */;
val* var6 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
val* var9 /* : nullable IOError */;
val* var10 /* : nullable IOError */;
val* var12 /* : nullable IOError */;
var_dest = p0;
{
{ /* Inline file$Path$last_error= (self,((val*)NULL)) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = ((val*)NULL); /* _last_error on <self:Path> */
RET_LABEL1:(void)0;
}
}
{
var = core___core__Path___open_ro(self);
}
var_input = var;
{
var2 = core___core__Path___open_wo(var_dest);
}
var_output = var2;
for(;;) {
{
var3 = core___core__BufferedReader___Reader__eof(var_input);
}
var4 = !var3;
if (var4){
{
var5 = core___core__BufferedReader___Reader__read_bytes(var_input, 1024l);
}
var_buffer = var5;
{
core___core__FileWriter___core__stream__Writer__write_bytes(var_output, var_buffer); /* Direct call file$FileWriter$write_bytes on <var_output:FileWriter>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
core___core__FileReader___core__stream__Stream__close(var_input); /* Direct call file$FileReader$close on <var_input:FileReader>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_output); /* Direct call file$FileWriter$close on <var_output:FileWriter>*/
}
{
{ /* Inline stream$Stream$last_error (var_input) on <var_input:FileReader> */
var9 = var_input->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_input:FileReader> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7!=NULL) {
var6 = var7;
} else {
{
{ /* Inline stream$Stream$last_error (var_output) on <var_output:FileWriter> */
var12 = var_output->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_output:FileWriter> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var6 = var10;
}
{
{ /* Inline file$Path$last_error= (self,var6) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var6; /* _last_error on <self:Path> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method file$Path$open_ro for (self: Path): FileReader */
val* core___core__Path___open_ro(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var_res /* var res: FileReader */;
val* var5 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
{ /* Inline file$Path$path (self) on <self:Path> */
var4 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__FileReader___open(var1, var2); /* Direct call file$FileReader$open on <var1:FileReader>*/
}
var_res = var1;
{
{ /* Inline stream$Stream$last_error (var_res) on <var_res:FileReader> */
var7 = var_res->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_res:FileReader> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline file$Path$last_error= (self,var5) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var5; /* _last_error on <self:Path> */
RET_LABEL8:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$open_wo for (self: Path): FileWriter */
val* core___core__Path___open_wo(val* self) {
val* var /* : FileWriter */;
val* var1 /* : FileWriter */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var_res /* var res: FileWriter */;
val* var5 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
var1 = NEW_core__FileWriter(&type_core__FileWriter);
{
{ /* Inline file$Path$path (self) on <self:Path> */
var4 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__FileWriter___open(var1, var2); /* Direct call file$FileWriter$open on <var1:FileWriter>*/
}
var_res = var1;
{
{ /* Inline stream$Stream$last_error (var_res) on <var_res:FileWriter> */
var7 = var_res->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_res:FileWriter> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline file$Path$last_error= (self,var5) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var5; /* _last_error on <self:Path> */
RET_LABEL8:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$== for (self: Path, nullable Object): Bool */
short int core___core__Path___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : Path */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var7 /* : Path */;
val* var8 /* : String */;
val* var10 /* : String */;
short int var11 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Path */
cltype = type_core__Path.color;
idtype = type_core__Path.id;
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
var3 = core___core__Path___simplified(self);
}
{
{ /* Inline file$Path$path (var3) on <var3:Path> */
var6 = var3->attrs[COLOR_core__file__Path___path].val; /* _path on <var3:Path> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__Path___simplified(var_other);
}
{
{ /* Inline file$Path$path (var7) on <var7:Path> */
var10 = var7->attrs[COLOR_core__file__Path___path].val; /* _path on <var7:Path> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var8); /* == on <var4:String>*/
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
/* method file$Path$hash for (self: Path): Int */
long core___core__Path___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Path */;
val* var2 /* : String */;
val* var4 /* : String */;
long var5 /* : Int */;
{
var1 = core___core__Path___simplified(self);
}
{
{ /* Inline file$Path$path (var1) on <var1:Path> */
var4 = var1->attrs[COLOR_core__file__Path___path].val; /* _path on <var1:Path> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((long(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__hash]))(var2); /* hash on <var2:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$init for (self: Path) */
void core___core__Path___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Path___core__kernel__Object__init]))(self); /* init on <self:Path>*/
}
RET_LABEL:;
}
/* method file$FileStat$stat for (self: FileStat): NativeFileStat */
val* core___core__FileStat___stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
var1 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStat$stat= for (self: FileStat, NativeFileStat) */
void core___core__FileStat___stat_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStat___stat].val = p0; /* _stat on <self:FileStat> */
RET_LABEL:;
}
/* method file$FileStat$finalized for (self: FileStat): Bool */
short int core___core__FileStat___finalized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStat$finalized= for (self: FileStat, Bool) */
void core___core__FileStat___finalized_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileStat___finalized].s = p0; /* _finalized on <self:FileStat> */
RET_LABEL:;
}
/* method file$FileStat$finalize for (self: FileStat) */
void core___core__FileStat___core__gc__Finalizable__finalize(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeFileStat */;
val* var6 /* : NativeFileStat */;
void* var8 /* : Pointer for extern */;
{
{ /* Inline file$FileStat$finalized (self) on <self:FileStat> */
var2 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
{
{ /* Inline file$FileStat$stat (self) on <self:FileStat> */
var6 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Pointer$free (var4) on <var4:NativeFileStat> */
var8 = ((struct instance_core__Pointer*)var4)->value; /* unboxing NativeFileStat */
core__kernel___Pointer_free___impl(var8);
RET_LABEL7:(void)0;
}
}
{
{ /* Inline file$FileStat$finalized= (self,1) on <self:FileStat> */
self->attrs[COLOR_core__file__FileStat___finalized].s = 1; /* _finalized on <self:FileStat> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file$FileStat$is_dir for (self: FileStat): Bool */
short int core___core__FileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : NativeFileStat */;
val* var7 /* : NativeFileStat */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
void* var11 /* : NativeFileStat for extern */;
{
{ /* Inline file$FileStat$finalized (self) on <self:FileStat> */
var3 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 829);
fatal_exit(1);
}
{
{ /* Inline file$FileStat$stat (self) on <self:FileStat> */
var7 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline file$NativeFileStat$is_dir (var5) on <var5:NativeFileStat> */
var11 = ((struct instance_core__Pointer*)var5)->value; /* unboxing NativeFileStat */
var10 = core__file___NativeFileStat_is_dir___impl(var11);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$init for (self: FileStat) */
void core___core__FileStat___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileStat___core__kernel__Object__init]))(self); /* init on <self:FileStat>*/
}
RET_LABEL:;
}
/* method file$Text$to_path for (self: Text): Path */
val* core__file___Text___to_path(val* self) {
val* var /* : Path */;
val* var1 /* : Path */;
val* var2 /* : String */;
var1 = NEW_core__Path(&type_core__Path);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__Path__path_61d]))(var1, var2); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Text$write_native_to for (self: Text, FileWriter) */
void core__file___Text___write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
val* var /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: FlatText */;
char* var5 /* : CString */;
long var6 /* : Int */;
long var8 /* : Int */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:Text>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[FlatText]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[FlatText]>*/
}
var_i = var4;
{
var5 = ((char*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_i); /* to_cstring on <var_i:FlatText>*/
}
{
{ /* Inline abstract_text$FlatText$byte_length (var_i) on <var_i:FlatText> */
var8 = var_i->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_i:FlatText> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__FileWriter___write_native(var_s, var5, 0l, var6); /* Direct call file$FileWriter$write_native on <var_s:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[FlatText]>*/
}
RET_LABEL:;
}
/* method file$Text$file_exists for (self: Text): Bool */
short int core__file___Text___file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : CString */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:Text>*/
}
{
{ /* Inline file$CString$file_exists (var1) on <var1:CString> */
var4 = core__file___CString_file_exists___impl(var1);
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
/* method file$String$file_stat for (self: String): nullable FileStat */
val* core__file___String___file_stat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : CString */;
val* var2 /* : NativeFileStat */;
val* var4 /* : NativeFileStat */;
val* var5 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
void* var9 /* : Pointer for extern */;
val* var10 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline file$CString$file_stat (var1) on <var1:CString> */
var4 = core__file___CString_file_stat___impl(var1);
var5 = BOX_core__Pointer(var4); /* boxing NativeFileStat */
var5->type = &type_core__file__NativeFileStat;
var5->class = &class_core__file__NativeFileStat;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_stat = var2;
{
{ /* Inline kernel$Pointer$address_is_null (var_stat) on <var_stat:NativeFileStat> */
var9 = ((struct instance_core__Pointer*)var_stat)->value; /* unboxing NativeFileStat */
var8 = core__kernel___Pointer_address_is_null___impl(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var10 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__file__FileStat__stat_61d]))(var10, var_stat); /* stat= on <var10:FileStat>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:FileStat>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_copy_to for (self: String, String) */
void core__file___String___file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : Path */;
val* var1 /* : Path */;
var_dest = p0;
{
var = core__file___Text___to_path(self);
}
{
var1 = core__file___Text___to_path(var_dest);
}
{
core___core__Path___copy(var, var1); /* Direct call file$Path$copy on <var:Path>*/
}
RET_LABEL:;
}
/* method file$String$strip_extension for (self: String, nullable String): String */
val* core__file___String___strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : String */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
val* var23 /* : Text */;
var_extension = p0;
if (var_extension == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, ((val*)NULL)); /* == on <var_extension:nullable String>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__String__file_extension]))(self); /* file_extension on <self:String>*/
}
var_extension = var3;
if (var_extension == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, ((val*)NULL)); /* == on <var_extension:nullable String>*/
var4 = var5;
}
if (var4){
var = self;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".";
var11 = (val*)(1l<<2|1);
var12 = (val*)(1l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_extension;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_extension = var15;
}
} else {
}
{
var16 = core___core__Text___has_suffix(self, var_extension);
}
if (var16){
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var18 = ((long(*)(val* self))(var_extension->class->vft[COLOR_core__abstract_text__Text__length]))(var_extension); /* length on <var_extension:nullable String(String)>*/
}
{
{ /* Inline kernel$Int$- (var17,var18) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var17 - var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var23 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var19); /* substring on <self:String>*/
}
var = var23;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$basename for (self: String, nullable String): String */
val* core__file___String___basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
val* var_n /* var n: String */;
val* var1 /* : Sys */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_l /* var l: Int */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
val* var19 /* : SequenceRead[Char] */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
uint32_t var24 /* : Char */;
short int var_25 /* var : Bool */;
val* var26 /* : SequenceRead[Char] */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
uint32_t var31 /* : Char */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
val* var49 /* : SequenceRead[Char] */;
val* var50 /* : nullable Object */;
long var51 /* : Int */;
long var_pos /* var pos: Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
val* var75 /* : Text */;
long var76 /* : Int */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var_l84 /* var l: Int */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
short int var_93 /* var : Bool */;
val* var94 /* : SequenceRead[Char] */;
val* var95 /* : nullable Object */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
uint32_t var99 /* : Char */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : SequenceRead[Char] */;
val* var120 /* : nullable Object */;
long var121 /* : Int */;
long var_pos122 /* var pos: Int */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
short int var129 /* : Bool */;
long var130 /* : Int */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
const char* var_class_name135;
long var136 /* : Int */;
long var137 /* : Int */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
long var143 /* : Int */;
val* var144 /* : Text */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : String */;
var_extension = p0;
var_n = self;
var1 = glob_sys;
{
{ /* Inline kernel$Sys$is_windows (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = core__kernel___Sys_is_windows___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel$Int$- (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var5 - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_l = var6;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var17 = var_l > 0l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var20 = ((val*(*)(val* self, long p0))((((long)var19&3)?class_info[((long)var19&3)]:var19->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var19, var_l); /* [] on <var19:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var20,'/') on <var20:nullable Object(Char)> */
var24 = (uint32_t)((long)(var20)>>2);
var23 = var24 == '/';
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_25 = var21;
if (var21){
var18 = var_25;
} else {
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var27 = ((val*(*)(val* self, long p0))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var26, var_l); /* [] on <var26:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var27,'\\') on <var27:nullable Object(Char)> */
var31 = (uint32_t)((long)(var27)>>2);
var30 = var31 == '\\';
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var18 = var28;
}
var10 = var18;
} else {
var10 = var_;
}
if (var10){
{
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_l - 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_l = var32;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var41 = var_l == 0l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (likely(varonce!=NULL)) {
var42 = varonce;
} else {
var43 = "/";
var45 = (val*)(1l<<2|1);
var46 = (val*)(1l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce = var42;
}
var = var42;
goto RET_LABEL;
} else {
}
{
var49 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var50 = (val*)((long)('/')<<2|2);
var51 = ((long(*)(val* self, val* p0, long p1))((((long)var49&3)?class_info[((long)var49&3)]:var49->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var49, var50, var_l); /* last_index_of_from on <var49:SequenceRead[Char]>*/
}
var_pos = var51;
{
var52 = core___core__Text___last_index_of_from(self, '\\', var_l);
}
{
var53 = core___core__Int___Comparable__max(var_pos, var52);
}
var_pos = var53;
{
{ /* Inline kernel$Int$>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var56 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var60 = var_pos >= 0l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_pos + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var70 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var74 = var_l - var_pos;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
var75 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var61, var68); /* substring on <self:String>*/
}
var_n = var75;
} else {
}
} else {
{
var76 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel$Int$- (var76,1l) on <var76:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var83 = var76 - 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_l84 = var77;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l84,0l) on <var_l84:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var88 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var92 = var_l84 > 0l;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_93 = var86;
if (var86){
{
var94 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var95 = ((val*(*)(val* self, long p0))((((long)var94&3)?class_info[((long)var94&3)]:var94->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var94, var_l84); /* [] on <var94:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var95,'/') on <var95:nullable Object(Char)> */
var99 = (uint32_t)((long)(var95)>>2);
var98 = var99 == '/';
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var85 = var96;
} else {
var85 = var_93;
}
if (var85){
{
{ /* Inline kernel$Int$- (var_l84,1l) on <var_l84:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var102 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var106 = var_l84 - 1l;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_l84 = var100;
} else {
goto BREAK_label107;
}
}
BREAK_label107: (void)0;
{
{ /* Inline kernel$Int$== (var_l84,0l) on <var_l84:Int> */
var110 = var_l84 == 0l;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "/";
var115 = (val*)(1l<<2|1);
var116 = (val*)(1l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
var = var112;
goto RET_LABEL;
} else {
}
{
var119 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var120 = (val*)((long)('/')<<2|2);
var121 = ((long(*)(val* self, val* p0, long p1))((((long)var119&3)?class_info[((long)var119&3)]:var119->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var119, var120, var_l84); /* last_index_of_from on <var119:SequenceRead[Char]>*/
}
var_pos122 = var121;
{
{ /* Inline kernel$Int$>= (var_pos122,0l) on <var_pos122:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var125 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var129 = var_pos122 >= 0l;
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
{
{ /* Inline kernel$Int$+ (var_pos122,1l) on <var_pos122:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var132 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var132)) {
var_class_name135 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name135);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var136 = var_pos122 + 1l;
var130 = var136;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_l84,var_pos122) on <var_l84:Int> */
/* Covariant cast for argument 0 (i) <var_pos122:Int> isa OTHER */
/* <var_pos122:Int> isa OTHER */
var139 = 1; /* easy <var_pos122:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var143 = var_l84 - var_pos122;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
{
var144 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var130, var137); /* substring on <self:String>*/
}
var_n = var144;
} else {
}
}
if (var_extension == NULL) {
var145 = 0; /* is null */
} else {
var145 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_extension,((val*)NULL)) on <var_extension:nullable String> */
var_other = ((val*)NULL);
{
var148 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, var_other); /* == on <var_extension:nullable String(String)>*/
}
var149 = !var148;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
if (var145){
{
var150 = core__file___String___strip_extension(var_n, var_extension);
}
var = var150;
goto RET_LABEL;
} else {
var = var_n;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file$String$dirname for (self: String): String */
val* core__file___String___dirname(val* self) {
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
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
{ /* Inline kernel$Int$> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = var19 == '/';
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
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var28 = (val*)((long)('/')<<2|2);
var29 = ((long(*)(val* self, val* p0, long p1))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var27, var28, var_l); /* last_index_of_from on <var27:SequenceRead[Char]>*/
}
var_pos = var29;
{
{ /* Inline kernel$Int$> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
var37 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var_pos); /* substring on <self:String>*/
}
var = var37;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$== (var_pos,0l) on <var_pos:Int> */
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
var44 = (val*)(1l<<2|1);
var45 = (val*)(1l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ".";
var52 = (val*)(1l<<2|1);
var53 = (val*)(1l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
var = var49;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file$String$realpath for (self: String): String */
val* core__file___String___realpath(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
char* var_cs /* var cs: CString */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var_res /* var res: String */;
val* var8 /* : Pointer */;
void* var9 /* : Pointer for extern */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline file$CString$file_realpath (var1) on <var1:CString> */
var4 = core__file___CString_file_realpath___impl(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_cs = var2;
{
var5 = core__file___Text___file_exists(self);
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1026);
fatal_exit(1);
}
{
var6 = core__flat___CString___core__abstract_text__Object__to_s(var_cs);
}
var_res = var6;
{
{ /* Inline kernel$Pointer$free (var_cs) on <var_cs:CString> */
var8 = BOX_core__Pointer(var_cs); /* autobox from CString to Pointer */
var9 = ((struct instance_core__Pointer*)var8)->value; /* unboxing Pointer */
core__kernel___Pointer_free___impl(var9);
RET_LABEL7:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$simplify_path for (self: String): String */
val* core__file___String___simplify_path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var2 /* : Sys */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var_path_sep /* var path_sep: String */;
val* var21 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var22 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var_ /* var : Array[String] */;
val* var23 /* : IndexedIterator[nullable Object] */;
val* var_24 /* var : IndexedIterator[String] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_x /* var x: String */;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
val* var69 /* : nullable Object */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
short int var78 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
short int var91 /* : Bool */;
val* var92 /* : nullable Object */;
val* var93 /* : nullable Object */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var_97 /* var : Bool */;
val* var98 /* : nullable Object */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
short int var109 /* : Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
short int var118 /* : Bool */;
long var119 /* : Int */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var_125 /* var : Bool */;
val* var126 /* : nullable Object */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
short int var135 /* : Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Bool */;
val* var143 /* : nullable Bool */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable Bool */;
val* var152 /* : String */;
var2 = glob_sys;
{
{ /* Inline kernel$Sys$is_windows (var2) on <var2:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var2;
var5 = core__kernel___Sys_is_windows___impl(var_for_c_0);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "\\";
var9 = (val*)(1l<<2|1);
var10 = (val*)(1l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
var1 = var6;
} else {
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "/";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
var1 = var14;
}
var_path_sep = var1;
{
var21 = core__string_search___Text___split_with(self, var_path_sep);
}
var_a = var21;
var22 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var22); /* Direct call array$Array$init on <var22:Array[String]>*/
}
var_a2 = var22;
var_ = var_a;
{
var23 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_24 = var23;
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_24); /* is_ok on <var_24:IndexedIterator[String]>*/
}
if (var25){
} else {
goto BREAK_label;
}
{
var26 = ((val*(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_24); /* item on <var_24:IndexedIterator[String]>*/
}
var_x = var26;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ".";
var32 = (val*)(1l<<2|1);
var33 = (val*)(1l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
{
var36 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var29); /* == on <var_x:String>*/
}
var_37 = var36;
if (var36){
{
var38 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var39 = !var38;
var27 = var39;
} else {
var27 = var_37;
}
if (var27){
goto BREAK_label40;
} else {
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "";
var46 = (val*)(0l<<2|1);
var47 = (val*)(0l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
var50 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var43); /* == on <var_x:String>*/
}
var_51 = var50;
if (var50){
{
var52 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var53 = !var52;
var41 = var53;
} else {
var41 = var_51;
}
if (var41){
goto BREAK_label40;
} else {
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "..";
var60 = (val*)(2l<<2|1);
var61 = (val*)(2l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
{
var64 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var57); /* == on <var_x:String>*/
}
var_65 = var64;
if (var64){
{
var66 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var67 = !var66;
var55 = var67;
} else {
var55 = var_65;
}
var_68 = var55;
if (var55){
{
var69 = core___core__SequenceRead___last(var_a2);
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "..";
var74 = (val*)(2l<<2|1);
var75 = (val*)(2l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
{ /* Inline kernel$Object$!= (var69,var71) on <var69:nullable Object(String)> */
var_other = var71;
{
var80 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_core__kernel__Object___61d_61d]))(var69, var_other); /* == on <var69:nullable Object(String)>*/
}
var81 = !var80;
var78 = var81;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var54 = var78;
} else {
var54 = var_68;
}
if (var54){
{
var82 = core___core__SequenceRead___last(var_a2);
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ".";
var87 = (val*)(1l<<2|1);
var88 = (val*)(1l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
{
var91 = ((short int(*)(val* self, val* p0))(var82->class->vft[COLOR_core__kernel__Object___61d_61d]))(var82, var84); /* == on <var82:nullable Object(String)>*/
}
if (var91){
{
var92 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_a2);
}
} else {
{
var93 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_a2);
}
goto BREAK_label40;
}
} else {
{
var95 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var96 = !var95;
var_97 = var96;
if (var96){
{
var98 = core___core__SequenceRead___last(var_a2);
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = ".";
var103 = (val*)(1l<<2|1);
var104 = (val*)(1l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
{
var107 = ((short int(*)(val* self, val* p0))(var98->class->vft[COLOR_core__kernel__Object___61d_61d]))(var98, var100); /* == on <var98:nullable Object(String)>*/
}
var94 = var107;
} else {
var94 = var_97;
}
if (var94){
{
var108 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_a2);
}
} else {
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_a2, var_x); /* Direct call array$AbstractArray$push on <var_a2:Array[String]>*/
}
BREAK_label40: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_24); /* next on <var_24:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_24); /* finish on <var_24:IndexedIterator[String]>*/
}
{
var109 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
if (var109){
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = ".";
var114 = (val*)(1l<<2|1);
var115 = (val*)(1l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
var = var111;
goto RET_LABEL;
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_a2) on <var_a2:Array[String]> */
var121 = var_a2->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_a2:Array[String]> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var119,1l) on <var119:Int> */
var124 = var119 == 1l;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
var_125 = var122;
if (var122){
{
var126 = core___core__SequenceRead___Collection__first(var_a2);
}
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "";
var131 = (val*)(0l<<2|1);
var132 = (val*)(0l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
{
var135 = ((short int(*)(val* self, val* p0))(var126->class->vft[COLOR_core__kernel__Object___61d_61d]))(var126, var128); /* == on <var126:nullable Object(String)>*/
}
var118 = var135;
} else {
var118 = var_125;
}
if (var118){
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "/";
var140 = (val*)(1l<<2|1);
var141 = (val*)(1l<<2|1);
var142 = (val*)((long)(0)<<2|3);
var143 = (val*)((long)(0)<<2|3);
var139 = core__flat___CString___to_s_unsafe(var138, var140, var141, var142, var143);
var137 = var139;
varonce136 = var137;
}
var = var137;
goto RET_LABEL;
} else {
}
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "/";
var148 = (val*)(1l<<2|1);
var149 = (val*)(1l<<2|1);
var150 = (val*)((long)(0)<<2|3);
var151 = (val*)((long)(0)<<2|3);
var147 = core__flat___CString___to_s_unsafe(var146, var148, var149, var150, var151);
var145 = var147;
varonce144 = var145;
}
{
var152 = core__abstract_text___Collection___join(var_a2, var145, ((val*)NULL));
}
var = var152;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$join_path for (self: String, String): String */
val* core__file___String___join_path(val* self, val* p0) {
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
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : String */;
var_path = p0;
{
var1 = ((short int(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_path); /* is_empty on <var_path:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:String>*/
}
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var3, 0l); /* [] on <var3:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var4,'/') on <var4:nullable Object(Char)> */
var8 = (uint32_t)((long)(var4)>>2);
var7 = var8 == '/';
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
var9 = core___core__Text___last(self);
}
{
{ /* Inline kernel$Char$== (var9,'/') on <var9:Char> */
var12 = var9 == '/';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
} else {
var13 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var13)->values[0]=self;
((struct instance_core__NativeArray*)var13)->values[1]=var_path;
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var14;
goto RET_LABEL;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/";
var21 = (val*)(1l<<2|1);
var22 = (val*)(1l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_core__NativeArray*)var16)->values[0]=self;
((struct instance_core__NativeArray*)var16)->values[2]=var_path;
{
var25 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$/ for (self: String, String): String */
val* core__file___String____47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = core__file___String___join_path(self, var_path);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$relpath for (self: String, String): String */
val* core__file___String___relpath(val* self, val* p0) {
val* var /* : String */;
val* var_dest /* var dest: String */;
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var_cwd /* var cwd: String */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : Array[String] */;
val* var_from /* var from: Array[String] */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : Array[String] */;
val* var_to /* var to: Array[String] */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
val* var37 /* : nullable Object */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var41 /* : nullable Object */;
long var42 /* : Int */;
long var44 /* : Int */;
long var_from_len /* var from_len: Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var68 /* : Int */;
val* var69 /* : Text */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : Text */;
val* var_up /* var up: String */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
val* var88 /* : Text */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
val* var97 /* : String */;
val* var98 /* : Text */;
val* var_res /* var res: String */;
var_dest = p0;
var1 = glob_sys;
{
var2 = core__file___Sys___getcwd(var1);
}
var_cwd = var2;
{
var3 = core__file___String____47d(var_cwd, self);
}
{
var4 = core__file___String___simplify_path(var3);
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var8 = (val*)(1l<<2|1);
var9 = (val*)(1l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
{
var12 = core__string_search___Text___split(var4, var5);
}
var_from = var12;
{
var13 = core___core__SequenceRead___last(var_from);
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var13); /* is_empty on <var13:nullable Object(String)>*/
}
if (var14){
{
var15 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_from);
}
} else {
}
{
var16 = core__file___String____47d(var_cwd, var_dest);
}
{
var17 = core__file___String___simplify_path(var16);
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "/";
var22 = (val*)(1l<<2|1);
var23 = (val*)(1l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
{
var26 = core__string_search___Text___split(var17, var19);
}
var_to = var26;
{
var27 = core___core__SequenceRead___last(var_to);
}
{
var28 = ((short int(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var27); /* is_empty on <var27:nullable Object(String)>*/
}
if (var28){
{
var29 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_to);
}
} else {
}
for(;;) {
{
var32 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_from);
}
var33 = !var32;
var_ = var33;
if (var33){
{
var34 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_to);
}
var35 = !var34;
var31 = var35;
} else {
var31 = var_;
}
var_36 = var31;
if (var31){
{
var37 = core___core__SequenceRead___Collection__first(var_from);
}
{
var38 = core___core__SequenceRead___Collection__first(var_to);
}
{
var39 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_core__kernel__Object___61d_61d]))(var37, var38); /* == on <var37:nullable Object(String)>*/
}
var30 = var39;
} else {
var30 = var_36;
}
if (var30){
{
var40 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_from);
}
{
var41 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_to);
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline array$AbstractArrayRead$length (var_from) on <var_from:Array[String]> */
var44 = var_from->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_from:Array[String]> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_from_len = var42;
{
{ /* Inline kernel$Int$== (var_from_len,0l) on <var_from_len:Int> */
var47 = var_from_len == 0l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "/";
var52 = (val*)(1l<<2|1);
var53 = (val*)(1l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
{
var56 = core__abstract_text___Collection___join(var_to, var49, ((val*)NULL));
}
var = var56;
goto RET_LABEL;
} else {
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "../";
var61 = (val*)(3l<<2|1);
var62 = (val*)(3l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
{
{ /* Inline kernel$Int$- (var_from_len,1l) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var67 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var68 = var_from_len - 1l;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
var69 = ((val*(*)(val* self, long p0))(var58->class->vft[COLOR_core__abstract_text__Text___42d]))(var58, var65); /* * on <var58:String>*/
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "..";
var74 = (val*)(2l<<2|1);
var75 = (val*)(2l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
var78 = ((val*(*)(val* self, val* p0))(var69->class->vft[COLOR_core__abstract_text__Text___43d]))(var69, var71); /* + on <var69:Text(String)>*/
}
var_up = var78;
{
var79 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_to);
}
if (var79){
var = var_up;
goto RET_LABEL;
} else {
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "/";
var84 = (val*)(1l<<2|1);
var85 = (val*)(1l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
{
var88 = ((val*(*)(val* self, val* p0))(var_up->class->vft[COLOR_core__abstract_text__Text___43d]))(var_up, var81); /* + on <var_up:String>*/
}
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "/";
var93 = (val*)(1l<<2|1);
var94 = (val*)(1l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
{
var97 = core__abstract_text___Collection___join(var_to, var90, ((val*)NULL));
}
{
var98 = ((val*(*)(val* self, val* p0))(var88->class->vft[COLOR_core__abstract_text__Text___43d]))(var88, var97); /* + on <var88:Text(String)>*/
}
var_res = var98;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$mkdir for (self: String, nullable Int): nullable Error */
val* core__file___String___mkdir(val* self, val* p0) {
val* var /* : nullable Error */;
val* var_mode /* var mode: nullable Int */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : nullable Int */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var12 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var_error /* var error: nullable Error */;
long var_i /* var i: Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
long var_ /* var : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_d /* var d: String */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
char* var35 /* : CString */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
long var39 /* : Int */;
short int var_res /* var res: Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : IOError */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : String */;
val* var69 /* : Sys */;
val* var71 /* : Sys */;
long var72 /* : Int */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : String */;
long var77 /* : Int */;
char* var78 /* : CString */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
long var82 /* : Int */;
short int var_res83 /* var res: Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var_86 /* var : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : IOError */;
val* var95 /* : NativeArray[String] */;
static val* varonce94;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Bool */;
val* var111 /* : nullable Bool */;
val* var112 /* : String */;
val* var113 /* : Sys */;
val* var115 /* : Sys */;
long var116 /* : Int */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : String */;
var_mode = p0;
if (var_mode!=NULL) {
var2 = (long)(var_mode)>>2;
var1 = var2;
} else {
var1 = 511l;
}
var3 = (val*)(var1<<2|1);
var_mode = var3;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "/";
var7 = (val*)(1l<<2|1);
var8 = (val*)(1l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = core__string_search___Text___split_with(self, var4);
}
var_dirs = var11;
var12 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var12) on <var12:FlatBuffer> */
{
((void(*)(val* self))(var12->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var12); /* init on <var12:FlatBuffer>*/
}
RET_LABEL13:(void)0;
}
}
var_path = var12;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_dirs);
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var15 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_dirs, 0l);
}
{
var16 = ((short int(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var15); /* is_empty on <var15:nullable Object(String)>*/
}
if (var16){
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_path, '/'); /* Direct call flat$FlatBuffer$add on <var_path:FlatBuffer>*/
}
} else {
}
var_error = ((val*)NULL);
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_dirs) on <var_dirs:Array[String]> */
var19 = var_dirs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_dirs:Array[String]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var17 - 1l;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_ = var20;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var26 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_i < var_;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
} else {
goto BREAK_label;
}
{
var31 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_dirs, var_i);
}
var_d = var31;
{
var32 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_d); /* is_empty on <var_d:String>*/
}
if (var32){
goto BREAK_label33;
} else {
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_path, var_d); /* Direct call flat$FlatBuffer$append on <var_path:FlatBuffer>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_path, '/'); /* Direct call flat$FlatBuffer$add on <var_path:FlatBuffer>*/
}
{
var34 = core__file___Text___file_exists(var_path);
}
if (var34){
goto BREAK_label33;
} else {
}
{
var35 = core___core__FlatBuffer___core__abstract_text__Text__to_cstring(var_path);
}
{
{ /* Inline file$CString$file_mkdir (var35,var_mode) on <var35:CString> */
var39 = (long)(var_mode)>>2;
var38 = core__file___CString_file_mkdir___impl(var35, var39);
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_res = var36;
var41 = !var_res;
var_42 = var41;
if (var41){
if (var_error == NULL) {
var43 = 1; /* is null */
} else {
var43 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_error,var_other) on <var_error:nullable Error(Error)> */
var48 = var_error == var_other;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
var40 = var43;
} else {
var40 = var_42;
}
if (var40){
var49 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Cannot create directory `";
var56 = (val*)(25l<<2|1);
var57 = (val*)(25l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "`: ";
var64 = (val*)(3l<<2|1);
var65 = (val*)(3l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[2]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var68;
{
{ /* Inline kernel$Object$sys (self) on <self:String> */
var71 = glob_sys;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var69) on <var69:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var69;
var74 = core__kernel___Sys_errno___impl(var_for_c_0);
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
var75 = core__abstract_text___Int___strerror(var72);
}
((struct instance_core__NativeArray*)var51)->values[3]=var75;
{
var76 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_core__error__Error__message_61d]))(var49, var76); /* message= on <var49:IOError>*/
}
{
((void(*)(val* self))(var49->class->vft[COLOR_core__kernel__Object__init]))(var49); /* init on <var49:IOError>*/
}
var_error = var49;
} else {
}
BREAK_label33: (void)0;
{
var77 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var77;
}
BREAK_label: (void)0;
{
var78 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline file$CString$file_mkdir (var78,var_mode) on <var78:CString> */
var82 = (long)(var_mode)>>2;
var81 = core__file___CString_file_mkdir___impl(var78, var82);
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_res83 = var79;
var85 = !var_res83;
var_86 = var85;
if (var85){
if (var_error == NULL) {
var87 = 1; /* is null */
} else {
var87 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_error,var_other) on <var_error:nullable Error(Error)> */
var92 = var_error == var_other;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
var84 = var87;
} else {
var84 = var_86;
}
if (var84){
var93 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce94==NULL)) {
var95 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "Cannot create directory `";
var100 = (val*)(25l<<2|1);
var101 = (val*)(25l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var95)->values[0]=var97;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "`: ";
var108 = (val*)(3l<<2|1);
var109 = (val*)(3l<<2|1);
var110 = (val*)((long)(0)<<2|3);
var111 = (val*)((long)(0)<<2|3);
var107 = core__flat___CString___to_s_unsafe(var106, var108, var109, var110, var111);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var95)->values[2]=var105;
} else {
var95 = varonce94;
varonce94 = NULL;
}
{
var112 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var95)->values[1]=var112;
{
{ /* Inline kernel$Object$sys (self) on <self:String> */
var115 = glob_sys;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline kernel$Sys$errno (var113) on <var113:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var113;
var118 = core__kernel___Sys_errno___impl(var_for_c_0);
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var119 = core__abstract_text___Int___strerror(var116);
}
((struct instance_core__NativeArray*)var95)->values[3]=var119;
{
var120 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce94 = var95;
{
((void(*)(val* self, val* p0))(var93->class->vft[COLOR_core__error__Error__message_61d]))(var93, var120); /* message= on <var93:IOError>*/
}
{
((void(*)(val* self))(var93->class->vft[COLOR_core__kernel__Object__init]))(var93); /* init on <var93:IOError>*/
}
var_error = var93;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_extension for (self: String): nullable String */
val* core__file___String___file_extension(val* self) {
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
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var2 = (val*)((long)('.')<<2|2);
var3 = ((long(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of]))(var1, var2); /* last_index_of on <var1:SequenceRead[Char]>*/
}
var_last_slash = var3;
{
{ /* Inline kernel$Int$> (var_last_slash,0l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline kernel$Int$+ (var_last_slash,1l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_last_slash + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var8, var15); /* substring on <self:String>*/
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
/* method file$String$files for (self: String): Array[String] */
val* core__file___String___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : NativeDir */;
val* var3 /* : NativeDir */;
char* var4 /* : CString */;
val* var5 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
void* var9 /* : Pointer for extern */;
char* var10 /* : CString */;
char* var12 /* : CString */;
void* var13 /* : NativeDir for extern */;
char* var_de /* var de: CString */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Pointer */;
void* var18 /* : Pointer for extern */;
val* var19 /* : String */;
val* var_name /* var name: String */;
short int var20 /* : Bool */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
short int var28 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
short int var37 /* : Bool */;
void* var40 /* : NativeDir for extern */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[String]>*/
}
var_res = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var5 = core__file___core__file__NativeDir___opendir(var2, var4);
}
var_d = var5;
{
{ /* Inline kernel$Pointer$address_is_null (var_d) on <var_d:NativeDir> */
var9 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
var8 = core__kernel___Pointer_address_is_null___impl(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline file$NativeDir$readdir (var_d) on <var_d:NativeDir> */
var13 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
var12 = core__file___NativeDir_readdir___impl(var13);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_de = var10;
{
{ /* Inline kernel$Pointer$address_is_null (var_de) on <var_de:CString> */
var17 = BOX_core__Pointer(var_de); /* autobox from CString to Pointer */
var18 = ((struct instance_core__Pointer*)var17)->value; /* unboxing Pointer */
var16 = core__kernel___Pointer_address_is_null___impl(var18);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
goto BREAK_label;
} else {
}
{
var19 = core__flat___CString___core__abstract_text__Object__to_s(var_de);
}
var_name = var19;
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = ".";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce = var21;
}
{
var28 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var21); /* == on <var_name:String>*/
}
var_ = var28;
if (var28){
var20 = var_;
} else {
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "..";
var33 = (val*)(2l<<2|1);
var34 = (val*)(2l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
{
var37 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var30); /* == on <var_name:String>*/
}
var20 = var37;
}
if (var20){
goto BREAK_label38;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_name); /* Direct call array$Array$add on <var_res:Array[String]>*/
}
BREAK_label38: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline file$NativeDir$closedir (var_d) on <var_d:NativeDir> */
var40 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
core__file___NativeDir_closedir___impl(var40);
RET_LABEL39:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FlatString$write_native_to for (self: FlatString, FileWriter) */
void core__file___FlatString___Text__write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
char* var /* : CString */;
char* var2 /* : CString */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_text$FlatText$items (self) on <self:FlatString> */
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline flat$FlatString$first_byte (self) on <self:FlatString> */
var5 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_text$FlatText$byte_length (self) on <self:FlatString> */
var8 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__FileWriter___write_native(var_s, var, var3, var6); /* Direct call file$FileWriter$write_native on <var_s:FileWriter>*/
}
RET_LABEL:;
}
/* method file$FlatString$file_extension for (self: FlatString): nullable String */
val* core__file___FlatString___String__file_extension(val* self) {
val* var /* : nullable String */;
char* var1 /* : CString */;
char* var_its /* var its: CString */;
long var2 /* : Int */;
long var_p /* var p: Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var_c /* var c: Byte */;
long var6 /* : Int */;
long var_st /* var st: Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
unsigned char var12 /* : Byte */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var_ls /* var ls: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var35 /* : FlatString */;
val* var36 /* : FlatString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var51 /* : FlatString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var1;
{
var2 = core__flat___FlatText___last_byte(self);
}
var_p = var2;
{
{ /* Inline native$CString$[] (var_its,var_p) on <var_its:CString> */
var5 = (unsigned char)((int)var_its[var_p]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_c = var3;
var6 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_st = var6;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_p,var_st) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var10 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_p >= var_st;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ = var8;
if (var8){
{
var12 = core___core__Char___ascii('.');
}
{
{ /* Inline kernel$Byte$!= (var_c,var12) on <var_c:Byte> */
var15 = var_c == var12;
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
} else {
var7 = var_;
}
if (var7){
{
{ /* Inline kernel$Int$- (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var_p - 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_p = var17;
{
{ /* Inline native$CString$[] (var_its,var_p) on <var_its:CString> */
var26 = (unsigned char)((int)var_its[var_p]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_c = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$<= (var_p,var_st) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var29 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var33 = var_p <= var_st;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var34 = core__flat___FlatText___last_byte(self);
}
var_ls = var34;
if (likely(varoncenew_guard)) {
var35 = varoncenew;
} else {
var36 = NEW_core__FlatString(&type_core__FlatString);
var35 = var36;
varoncenew = var35;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_ls,var_p) on <var_ls:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var39 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var43 = var_ls - var_p;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_p + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
var51 = core___core__FlatString___with_infos(var35, var_its, var37, var44);
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FlatString$basename for (self: FlatString, nullable String): String */
val* core__file___FlatString___String__basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
val* var1 /* : Sys */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var_l /* var l: Int */;
char* var6 /* : CString */;
char* var_its /* var its: CString */;
long var7 /* : Int */;
long var_min /* var min: Int */;
unsigned char var8 /* : Byte */;
unsigned char var_sl /* var sl: Byte */;
unsigned char var9 /* : Byte */;
unsigned char var_ls /* var ls: Byte */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
unsigned char var16 /* : Byte */;
unsigned char var18 /* : Byte */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
long var_ns /* var ns: Int */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
unsigned char var56 /* : Byte */;
unsigned char var58 /* : Byte */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
unsigned char var64 /* : Byte */;
unsigned char var66 /* : Byte */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var79 /* : FlatString */;
val* var80 /* : FlatString */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var_bname /* var bname: nullable Object */;
long var96 /* : Int */;
long var_l97 /* var l: Int */;
char* var98 /* : CString */;
char* var_its99 /* var its: CString */;
long var100 /* : Int */;
long var_min101 /* var min: Int */;
unsigned char var102 /* : Byte */;
unsigned char var_sl103 /* var sl: Byte */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
const char* var_class_name110;
short int var111 /* : Bool */;
short int var_112 /* var : Bool */;
unsigned char var113 /* : Byte */;
unsigned char var115 /* : Byte */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
long var_ns138 /* var ns: Int */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
short int var146 /* : Bool */;
short int var_147 /* var : Bool */;
unsigned char var148 /* : Byte */;
unsigned char var150 /* : Byte */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
long var155 /* : Int */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
const char* var_class_name160;
long var161 /* : Int */;
static val* varoncenew163;
static int varoncenew163_guard;
val* var164 /* : FlatString */;
val* var165 /* : FlatString */;
long var166 /* : Int */;
short int var168 /* : Bool */;
int cltype169;
int idtype170;
const char* var_class_name171;
long var172 /* : Int */;
long var173 /* : Int */;
short int var175 /* : Bool */;
int cltype176;
int idtype177;
const char* var_class_name178;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : String */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : String */;
var_extension = p0;
var1 = glob_sys;
{
{ /* Inline kernel$Sys$is_windows (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = core__kernel___Sys_is_windows___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = core__flat___FlatText___last_byte(self);
}
var_l = var5;
var6 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var6;
var7 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min = var7;
{
var8 = core___core__Char___ascii('/');
}
var_sl = var8;
{
var9 = core___core__Char___ascii('\\');
}
var_ls = var9;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l,var_min) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var13 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var14 = var_l > var_min;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
{ /* Inline native$CString$[] (var_its,var_l) on <var_its:CString> */
var18 = (unsigned char)((int)var_its[var_l]);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var16,var_sl) on <var16:Byte> */
var21 = var16 == var_sl;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_22 = var19;
if (var19){
var15 = var_22;
} else {
{
{ /* Inline native$CString$[] (var_its,var_l) on <var_its:CString> */
var25 = (unsigned char)((int)var_its[var_l]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var23,var_ls) on <var23:Byte> */
var28 = var23 == var_ls;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var15 = var26;
}
var10 = var15;
} else {
var10 = var_;
}
if (var10){
{
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var_l - 1l;
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
{ /* Inline kernel$Int$== (var_l,var_min) on <var_l:Int> */
var38 = var_l == var_min;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
if (likely(varonce!=NULL)) {
var39 = varonce;
} else {
var40 = "\\";
var42 = (val*)(1l<<2|1);
var43 = (val*)(1l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce = var39;
}
var = var39;
goto RET_LABEL;
} else {
}
var_ns = var_l;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_ns,var_min) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var50 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var54 = var_ns >= var_min;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_55 = var48;
if (var48){
{
{ /* Inline native$CString$[] (var_its,var_ns) on <var_its:CString> */
var58 = (unsigned char)((int)var_its[var_ns]);
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var56,var_sl) on <var56:Byte> */
var61 = var56 == var_sl;
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var47 = var59;
} else {
var47 = var_55;
}
var_63 = var47;
if (var47){
{
{ /* Inline native$CString$[] (var_its,var_ns) on <var_its:CString> */
var66 = (unsigned char)((int)var_its[var_ns]);
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var64,var_ls) on <var64:Byte> */
var69 = var64 == var_ls;
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var46 = var67;
} else {
var46 = var_63;
}
if (var46){
{
{ /* Inline kernel$Int$- (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var77 = var_ns - 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_ns = var71;
} else {
goto BREAK_label78;
}
}
BREAK_label78: (void)0;
if (likely(varoncenew_guard)) {
var79 = varoncenew;
} else {
var80 = NEW_core__FlatString(&type_core__FlatString);
var79 = var80;
varoncenew = var79;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_l,var_ns) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_ns:Int> isa OTHER */
/* <var_ns:Int> isa OTHER */
var83 = 1; /* easy <var_ns:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var87 = var_l - var_ns;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var90 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var94 = var_ns + 1l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var95 = core___core__FlatString___with_infos(var79, var_its, var81, var88);
}
var_bname = var95;
} else {
{
var96 = core__flat___FlatText___last_byte(self);
}
var_l97 = var96;
var98 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its99 = var98;
var100 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min101 = var100;
{
var102 = core___core__Char___ascii('/');
}
var_sl103 = var102;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l97,var_min101) on <var_l97:Int> */
/* Covariant cast for argument 0 (i) <var_min101:Int> isa OTHER */
/* <var_min101:Int> isa OTHER */
var107 = 1; /* easy <var_min101:Int> isa OTHER*/
if (unlikely(!var107)) {
var_class_name110 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name110);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var111 = var_l97 > var_min101;
var105 = var111;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var_112 = var105;
if (var105){
{
{ /* Inline native$CString$[] (var_its99,var_l97) on <var_its99:CString> */
var115 = (unsigned char)((int)var_its99[var_l97]);
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var113,var_sl103) on <var113:Byte> */
var118 = var113 == var_sl103;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var104 = var116;
} else {
var104 = var_112;
}
if (var104){
{
{ /* Inline kernel$Int$- (var_l97,1l) on <var_l97:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var121 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var125 = var_l97 - 1l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_l97 = var119;
} else {
goto BREAK_label126;
}
}
BREAK_label126: (void)0;
{
{ /* Inline kernel$Int$== (var_l97,var_min101) on <var_l97:Int> */
var129 = var_l97 == var_min101;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
if (var127){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "/";
var134 = (val*)(1l<<2|1);
var135 = (val*)(1l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
var = var131;
goto RET_LABEL;
} else {
}
var_ns138 = var_l97;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_ns138,var_min101) on <var_ns138:Int> */
/* Covariant cast for argument 0 (i) <var_min101:Int> isa OTHER */
/* <var_min101:Int> isa OTHER */
var142 = 1; /* easy <var_min101:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var146 = var_ns138 >= var_min101;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_147 = var140;
if (var140){
{
{ /* Inline native$CString$[] (var_its99,var_ns138) on <var_its99:CString> */
var150 = (unsigned char)((int)var_its99[var_ns138]);
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var148,var_sl103) on <var148:Byte> */
var153 = var148 == var_sl103;
var154 = !var153;
var151 = var154;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var139 = var151;
} else {
var139 = var_147;
}
if (var139){
{
{ /* Inline kernel$Int$- (var_ns138,1l) on <var_ns138:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var157 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var157)) {
var_class_name160 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name160);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var161 = var_ns138 - 1l;
var155 = var161;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
}
var_ns138 = var155;
} else {
goto BREAK_label162;
}
}
BREAK_label162: (void)0;
if (likely(varoncenew163_guard)) {
var164 = varoncenew163;
} else {
var165 = NEW_core__FlatString(&type_core__FlatString);
var164 = var165;
varoncenew163 = var164;
varoncenew163_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_l97,var_ns138) on <var_l97:Int> */
/* Covariant cast for argument 0 (i) <var_ns138:Int> isa OTHER */
/* <var_ns138:Int> isa OTHER */
var168 = 1; /* easy <var_ns138:Int> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var172 = var_l97 - var_ns138;
var166 = var172;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_ns138,1l) on <var_ns138:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var175 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var175)) {
var_class_name178 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name178);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var179 = var_ns138 + 1l;
var173 = var179;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
}
{
var180 = core___core__FlatString___with_infos(var164, var_its99, var166, var173);
}
var_bname = var180;
}
if (var_extension == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_extension,((val*)NULL)) on <var_extension:nullable String> */
var_other = ((val*)NULL);
{
var185 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, var_other); /* == on <var_extension:nullable String(String)>*/
}
var186 = !var185;
var183 = var186;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
{
var187 = core__file___String___strip_extension(var_bname, var_extension);
}
var181 = var187;
} else {
var181 = var_bname;
}
var = var181;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_exists for (self: CString): Bool */
short int core__file___CString___file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_file_exists___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_stat for (self: CString): NativeFileStat */
val* core__file___CString___file_stat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = core__file___CString_file_stat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_mkdir for (self: CString, Int): Bool */
short int core__file___CString___file_mkdir(char* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_file_mkdir___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_realpath for (self: CString): CString */
char* core__file___CString___file_realpath(char* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = core__file___CString_file_realpath___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_dir for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_dir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_read for (self: NativeFile, CString, Int): Int */
long core__file___core__file__NativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_read___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_write for (self: NativeFile, CString, Int, Int): Int */
long core__file___core__file__NativeFile___io_write(val* self, char* p0, long p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_write___impl(var2, p0, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_close for (self: NativeFile): Int */
long core__file___core__file__NativeFile___io_close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_close___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$ferror for (self: NativeFile): Bool */
short int core__file___core__file__NativeFile___ferror(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_ferror___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$set_buffering_type for (self: NativeFile, Int, Int): Int */
long core__file___core__file__NativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_set_buffering_type___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_open_read for (self: NativeFile, CString): NativeFile */
val* core__file___core__file__NativeFile___io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_io_open_read___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_open_write for (self: NativeFile, CString): NativeFile */
val* core__file___core__file__NativeFile___io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_io_open_write___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$native_stdin for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdin(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stdin___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$native_stdout for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdout(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stdout___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$native_stderr for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stderr(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stderr___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeDir$opendir for (self: NativeDir, CString): NativeDir */
val* core__file___core__file__NativeDir___opendir(val* self, char* p0) {
val* var /* : NativeDir */;
val* var1 /* : NativeDir */;
val* var2 /* : NativeDir */;
var1 = core__file___new_NativeDir_opendir___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeDir */
var2->type = &type_core__file__NativeDir;
var2->class = &class_core__file__NativeDir;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeDir$closedir for (self: NativeDir) */
void core__file___core__file__NativeDir___closedir(val* self) {
void* var /* : NativeDir for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
core__file___NativeDir_closedir___impl(var);
RET_LABEL:;
}
/* method file$NativeDir$readdir for (self: NativeDir): CString */
char* core__file___core__file__NativeDir___readdir(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
void* var2 /* : NativeDir for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
var1 = core__file___NativeDir_readdir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$stdout for (self: Sys): Writer */
val* core__file___Sys___stdout(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stdout */;
var1 = self->attrs[COLOR_core__file__Sys___stdout].val != NULL; /* _stdout on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1583);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stdout(&type_core__Stdout);
{
core___core__Stdout___core__kernel__Object__init(var3); /* Direct call file$Stdout$init on <var3:Stdout>*/
}
self->attrs[COLOR_core__file__Sys___stdout].val = var3; /* _stdout on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Sys$stderr for (self: Sys): Writer */
val* core__file___Sys___stderr(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stderr */;
var1 = self->attrs[COLOR_core__file__Sys___stderr].val != NULL; /* _stderr on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1586);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stderr(&type_core__Stderr);
{
core___core__Stderr___core__kernel__Object__init(var3); /* Direct call file$Stderr$init on <var3:Stderr>*/
}
self->attrs[COLOR_core__file__Sys___stderr].val = var3; /* _stderr on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Sys$buffer_mode_line for (self: Sys): Int */
long core__file___Sys___buffer_mode_line(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_line___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$printn for (self: Sys, Array[Object]) */
void core__file___Sys___printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
var_objects = p0;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Sys___stdout(var);
}
{
var4 = core__flat___Array___core__abstract_text__Collection__plain_to_s(var_objects);
}
{
core___core__FileWriter___core__stream__Writer__write(var3, var4); /* Direct call file$FileWriter$write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method file$Sys$print for (self: Sys, Object) */
void core__file___Sys___print(val* self, val* p0) {
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
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
var_object = p0;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Sys___stdout(var);
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var3, var4); /* Direct call file$FileWriter$write on <var3:Writer>*/
}
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = core__file___Sys___stdout(var5);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var12 = (val*)(1l<<2|1);
var13 = (val*)(1l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
core___core__FileWriter___core__stream__Writer__write(var8, var9); /* Direct call file$FileWriter$write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file$Sys$print_error for (self: Sys, Object) */
void core__file___Sys___print_error(val* self, val* p0) {
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
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
var_object = p0;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Sys___stderr(var);
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var3, var4); /* Direct call file$FileWriter$write on <var3:Writer>*/
}
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = core__file___Sys___stderr(var5);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var12 = (val*)(1l<<2|1);
var13 = (val*)(1l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
core___core__FileWriter___core__stream__Writer__write(var8, var9); /* Direct call file$FileWriter$write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file$Sys$getcwd for (self: Sys): String */
val* core__file___Sys___getcwd(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var3 /* : CString */;
val* var4 /* : String */;
{
{ /* Inline file$Sys$native_getcwd (self) on <self:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var3 = core__file___Sys_native_getcwd___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___CString___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$native_getcwd for (self: Sys): CString */
char* core__file___Sys___native_getcwd(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_native_getcwd___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
