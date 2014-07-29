#include "c_tools.sep.0.h"
/* method c_tools#ExternFile#filename for (self: ExternFile): String */
val* c_tools__ExternFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#filename for (self: Object): String */
val* VIRTUAL_c_tools__ExternFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline c_tools#ExternFile#filename (self) on <self:Object(ExternFile)> */
var3 = self->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <self:Object(ExternFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#add_to_jar for (self: ExternFile): Bool */
short int c_tools__ExternFile__add_to_jar(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#add_to_jar for (self: Object): Bool */
short int VIRTUAL_c_tools__ExternFile__add_to_jar(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c_tools__ExternFile__add_to_jar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#init for (self: ExternFile, String) */
void c_tools__ExternFile__init(val* self, val* p0) {
self->attrs[COLOR_c_tools__ExternFile___filename].val = p0; /* _filename on <self:ExternFile> */
RET_LABEL:;
}
/* method c_tools#ExternFile#init for (self: Object, String) */
void VIRTUAL_c_tools__ExternFile__init(val* self, val* p0) {
{ /* Inline c_tools#ExternFile#init (self,p0) on <self:Object(ExternFile)> */
self->attrs[COLOR_c_tools__ExternFile___filename].val = p0; /* _filename on <self:Object(ExternFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method c_tools#ExternCFile#init for (self: ExternCFile, String, String) */
void c_tools__ExternCFile__init(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_cflags /* var cflags: String */;
var_filename = p0;
var_cflags = p1;
{
{ /* Inline c_tools#ExternFile#init (self,var_filename) on <self:ExternCFile> */
self->attrs[COLOR_c_tools__ExternFile___filename].val = var_filename; /* _filename on <self:ExternCFile> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline c_tools#ExternCFile#cflags= (self,var_cflags) on <self:ExternCFile> */
self->attrs[COLOR_c_tools__ExternCFile___cflags].val = var_cflags; /* _cflags on <self:ExternCFile> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method c_tools#ExternCFile#init for (self: Object, String, String) */
void VIRTUAL_c_tools__ExternCFile__init(val* self, val* p0, val* p1) {
c_tools__ExternCFile__init(self, p0, p1); /* Direct call c_tools#ExternCFile#init on <self:Object(ExternCFile)>*/
RET_LABEL:;
}
/* method c_tools#ExternCFile#cflags for (self: ExternCFile): String */
val* c_tools__ExternCFile__cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 131);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#cflags for (self: Object): String */
val* VIRTUAL_c_tools__ExternCFile__cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline c_tools#ExternCFile#cflags (self) on <self:Object(ExternCFile)> */
var3 = self->attrs[COLOR_c_tools__ExternCFile___cflags].val; /* _cflags on <self:Object(ExternCFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 131);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#cflags= for (self: ExternCFile, String) */
void c_tools__ExternCFile__cflags_61d(val* self, val* p0) {
self->attrs[COLOR_c_tools__ExternCFile___cflags].val = p0; /* _cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method c_tools#ExternCFile#cflags= for (self: Object, String) */
void VIRTUAL_c_tools__ExternCFile__cflags_61d(val* self, val* p0) {
{ /* Inline c_tools#ExternCFile#cflags= (self,p0) on <self:Object(ExternCFile)> */
self->attrs[COLOR_c_tools__ExternCFile___cflags].val = p0; /* _cflags on <self:Object(ExternCFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method c_tools#ExternCFile#hash for (self: ExternCFile): Int */
long c_tools__ExternCFile__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = string__FlatString__hash(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#hash for (self: Object): Int */
long VIRTUAL_c_tools__ExternCFile__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = c_tools__ExternCFile__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#== for (self: ExternCFile, nullable Object): Bool */
short int c_tools__ExternCFile___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var8 /* : String */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa ExternCFile */
cltype = type_c_tools__ExternCFile.color;
idtype = type_c_tools__ExternCFile.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var2 = 0;
} else {
var2 = var_o->type->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var5 = self->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline c_tools#ExternFile#filename (var_o) on <var_o:nullable Object(ExternCFile)> */
var8 = var_o->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <var_o:nullable Object(ExternCFile)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var10 = string__FlatString___61d_61d(var3, var6);
var9 = var10;
}
var1 = var9;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_c_tools__ExternCFile___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c_tools__ExternCFile___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#makefile_rule_name for (self: ExternCFile): String */
val* c_tools__ExternCFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var_basename /* var basename: String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var_res /* var res: String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (varonce) {
var4 = varonce;
} else {
var5 = ".c";
var6 = 2;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = file__String__basename(var1, var4);
}
var_basename = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = ".extern.o";
var12 = 9;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 2;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var_basename;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var10;
{
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
}
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
}
var_res = var17;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#makefile_rule_name for (self: Object): String */
val* VIRTUAL_c_tools__ExternCFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_tools__ExternCFile__makefile_rule_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#makefile_rule_content for (self: ExternCFile): String */
val* c_tools__ExternCFile__makefile_rule_content(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var_ff /* var ff: String */;
val* var9 /* : String */;
val* var_o /* var o: String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (varonce) {
var4 = varonce;
} else {
var5 = "";
var6 = 0;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = file__String__basename(var1, var4);
}
var_ff = var8;
{
var9 = c_tools__ExternCFile__makefile_rule_name(self);
}
var_o = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "$(CC) $(CFLAGS) ";
var13 = 16;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
{ /* Inline c_tools#ExternCFile#cflags (self) on <self:ExternCFile> */
var17 = self->attrs[COLOR_c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 131);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = " -c -o ";
var21 = 7;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " ";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 6;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var19;
((struct instance_array__NativeArray*)var30)->values[3] = (val*) var_o;
((struct instance_array__NativeArray*)var30)->values[4] = (val*) var24;
((struct instance_array__NativeArray*)var30)->values[5] = (val*) var_ff;
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
/* method c_tools#ExternCFile#makefile_rule_content for (self: Object): String */
val* VIRTUAL_c_tools__ExternCFile__makefile_rule_content(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_tools__ExternCFile__makefile_rule_content(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#compiles_to_o_file for (self: ExternCFile): Bool */
short int c_tools__ExternCFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#compiles_to_o_file for (self: Object): Bool */
short int VIRTUAL_c_tools__ExternCFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = c_tools__ExternCFile__compiles_to_o_file(self);
var = var1;
RET_LABEL:;
return var;
}
