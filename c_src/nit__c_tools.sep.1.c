#include "nit__c_tools.sep.0.h"
/* method c_tools#ExternFile#filename for (self: ExternFile): String */
val* nit___nit__ExternFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#filename= for (self: ExternFile, String) */
void nit___nit__ExternFile___filename_61d(val* self, val* p0) {
self->attrs[COLOR_nit__c_tools__ExternFile___filename].val = p0; /* _filename on <self:ExternFile> */
RET_LABEL:;
}
/* method c_tools#ExternFile#add_to_jar for (self: ExternFile): Bool */
short int nit___nit__ExternFile___add_to_jar(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#pkgconfigs for (self: ExternFile): Array[String] */
val* nit___nit__ExternFile___pkgconfigs(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 119);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#init for (self: ExternFile) */
void nit___nit__ExternFile___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ExternFile___standard__kernel__Object__init]))(self) /* init on <self:ExternFile>*/;
}
RET_LABEL:;
}
/* method c_tools#ExternCFile#cflags for (self: ExternCFile): String */
val* nit___nit__ExternCFile___cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 128);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#cflags= for (self: ExternCFile, String) */
void nit___nit__ExternCFile___cflags_61d(val* self, val* p0) {
self->attrs[COLOR_nit__c_tools__ExternCFile___cflags].val = p0; /* _cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method c_tools#ExternCFile#hash for (self: ExternCFile): Int */
long nit___nit__ExternCFile___standard__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__hash]))(var1) /* hash on <var1:String>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#== for (self: ExternCFile, nullable Object): Bool */
short int nit___nit__ExternCFile___standard__kernel__Object___61d_61d(val* self, val* p0) {
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
var_o = p0;
/* <var_o:nullable Object> isa ExternCFile */
cltype = type_nit__ExternCFile.color;
idtype = type_nit__ExternCFile.id;
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
var5 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline c_tools#ExternFile#filename (var_o) on <var_o:nullable Object(ExternCFile)> */
var8 = var_o->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <var_o:nullable Object(ExternCFile)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((short int (*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var6) /* == on <var3:String>*/;
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
/* method c_tools#ExternCFile#makefile_rule_name for (self: ExternCFile): String */
val* nit___nit__ExternCFile___ExternFile__makefile_rule_name(val* self) {
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
var3 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
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
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = standard__file___String___basename(var1, var4);
}
var_basename = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = ".extern.o";
var12 = 9;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 2;
var16 = NEW_standard__NativeArray(var15, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var16)->values[0] = (val*) var_basename;
((struct instance_standard__NativeArray*)var16)->values[1] = (val*) var10;
{
((void (*)(val* self, val* p0, long p1))(var14->class->vft[COLOR_standard__array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
}
{
var17 = ((val* (*)(val* self))(var14->class->vft[COLOR_standard__string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
}
var_res = var17;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#makefile_rule_content for (self: ExternCFile): String */
val* nit___nit__ExternCFile___ExternFile__makefile_rule_content(val* self) {
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
val* var_pkg /* var pkg: String */;
val* var15 /* : Array[String] */;
val* var17 /* : Array[String] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[String] */;
val* var27 /* : Array[String] */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
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
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = standard__file___String___basename(var1, var4);
}
var_ff = var8;
{
var9 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(self);
}
var_o = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "";
var13 = 0;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var_pkg = var11;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (self) on <self:ExternCFile> */
var17 = self->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 119);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var15);
}
var19 = !var18;
if (var19){
if (varonce20) {
var21 = varonce20;
} else {
var22 = "`pkg-config --cflags ";
var23 = 21;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
{ /* Inline c_tools#ExternFile#pkgconfigs (self) on <self:ExternCFile> */
var27 = self->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 119);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " ";
var31 = 1;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
var33 = standard__string___Collection___join(var25, var29);
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "`";
var37 = 1;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_standard__NativeArray(var40, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var41)->values[0] = (val*) var21;
((struct instance_standard__NativeArray*)var41)->values[1] = (val*) var33;
((struct instance_standard__NativeArray*)var41)->values[2] = (val*) var35;
{
((void (*)(val* self, val* p0, long p1))(var39->class->vft[COLOR_standard__array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val* self))(var39->class->vft[COLOR_standard__string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
var_pkg = var42;
} else {
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "$(CC) $(CFLAGS) ";
var46 = 16;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
{ /* Inline c_tools#ExternCFile#cflags (self) on <self:ExternCFile> */
var50 = self->attrs[COLOR_nit__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 128);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = " ";
var54 = 1;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = " -c -o ";
var59 = 7;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = " ";
var64 = 1;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 8;
var68 = NEW_standard__NativeArray(var67, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var68)->values[0] = (val*) var44;
((struct instance_standard__NativeArray*)var68)->values[1] = (val*) var48;
((struct instance_standard__NativeArray*)var68)->values[2] = (val*) var52;
((struct instance_standard__NativeArray*)var68)->values[3] = (val*) var_pkg;
((struct instance_standard__NativeArray*)var68)->values[4] = (val*) var57;
((struct instance_standard__NativeArray*)var68)->values[5] = (val*) var_o;
((struct instance_standard__NativeArray*)var68)->values[6] = (val*) var62;
((struct instance_standard__NativeArray*)var68)->values[7] = (val*) var_ff;
{
((void (*)(val* self, val* p0, long p1))(var66->class->vft[COLOR_standard__array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var69 = ((val* (*)(val* self))(var66->class->vft[COLOR_standard__string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
var = var69;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#compiles_to_o_file for (self: ExternCFile): Bool */
short int nit___nit__ExternCFile___ExternFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#init for (self: ExternCFile) */
void nit___nit__ExternCFile___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__ExternCFile___standard__kernel__Object__init]))(self) /* init on <self:ExternCFile>*/;
}
RET_LABEL:;
}
