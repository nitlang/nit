#include "nitc__c_tools.sep.0.h"
/* method c_tools#CCompilationUnit#header_c_base for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_c_base(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_custom for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_custom(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_c_types for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_c_types(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_decl for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_decl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_decl for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___body_decl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_custom for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___body_custom(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_impl for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___body_impl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#files for (self: CCompilationUnit): Array[String] */
val* nitc___nitc__CCompilationUnit___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#compile_header_core for (self: CCompilationUnit, Writer) */
void nitc___nitc__CCompilationUnit___compile_header_core(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var8 /* : Template */;
val* var9 /* : Template */;
val* var11 /* : Template */;
var_stream = p0;
{
{ /* Inline c_tools#CCompilationUnit#header_c_base (self) on <self:CCompilationUnit> */
var2 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 24);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var, var_stream); /* Direct call template#Template#write_to on <var:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (self) on <self:CCompilationUnit> */
var5 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <self:CCompilationUnit> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var3, var_stream); /* Direct call template#Template#write_to on <var3:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_c_types (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var6, var_stream); /* Direct call template#Template#write_to on <var6:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (self) on <self:CCompilationUnit> */
var11 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <self:CCompilationUnit> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var9, var_stream); /* Direct call template#Template#write_to on <var9:Template>*/
}
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_body_core for (self: CCompilationUnit, Writer) */
void nitc___nitc__CCompilationUnit___compile_body_core(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var8 /* : Template */;
var_stream = p0;
{
{ /* Inline c_tools#CCompilationUnit#body_decl (self) on <self:CCompilationUnit> */
var2 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var, var_stream); /* Direct call template#Template#write_to on <var:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_custom (self) on <self:CCompilationUnit> */
var5 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <self:CCompilationUnit> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var3, var_stream); /* Direct call template#Template#write_to on <var3:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var6, var_stream); /* Direct call template#Template#write_to on <var6:Template>*/
}
RET_LABEL:;
}
/* method c_tools#CFunction#signature for (self: CFunction): String */
val* nitc___nitc__CFunction___signature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_tools__CFunction___signature].val; /* _signature on <self:CFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#signature= for (self: CFunction, String) */
void nitc___nitc__CFunction___signature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_tools__CFunction___signature].val = p0; /* _signature on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools#CFunction#decls for (self: CFunction): Template */
val* nitc___nitc__CFunction___decls(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <self:CFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#exprs for (self: CFunction): Template */
val* nitc___nitc__CFunction___exprs(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <self:CFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#to_writer for (self: CFunction): Template */
val* nitc___nitc__CFunction___to_writer(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
val* var_w /* var w: Template */;
val* var2 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : Template */;
val* var10 /* : Template */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : Template */;
val* var17 /* : Template */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_w = var1;
{
{ /* Inline c_tools#CFunction#signature (self) on <self:CFunction> */
var4 = self->attrs[COLOR_nitc__c_tools__CFunction___signature].val; /* _signature on <self:CFunction> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 86);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
template___template__Template___add(var_w, var2); /* Direct call template#Template#add on <var_w:Template>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "\n{\n";
var7 = core__flat___NativeString___to_s_full(var6, 3l, 3l);
var5 = var7;
varonce = var5;
}
{
template___template__Template___add(var_w, var5); /* Direct call template#Template#add on <var_w:Template>*/
}
{
{ /* Inline c_tools#CFunction#decls (self) on <self:CFunction> */
var10 = self->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <self:CFunction> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
template___template__Template___add(var_w, var8); /* Direct call template#Template#add on <var_w:Template>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\n";
var14 = core__flat___NativeString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
{
template___template__Template___add(var_w, var12); /* Direct call template#Template#add on <var_w:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (self) on <self:CFunction> */
var17 = self->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <self:CFunction> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
template___template__Template___add(var_w, var15); /* Direct call template#Template#add on <var_w:Template>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "}\n";
var21 = core__flat___NativeString___to_s_full(var20, 2l, 2l);
var19 = var21;
varonce18 = var19;
}
{
template___template__Template___add(var_w, var19); /* Direct call template#Template#add on <var_w:Template>*/
}
var = var_w;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#init for (self: CFunction) */
void nitc___nitc__CFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CFunction___core__kernel__Object__init]))(self); /* init on <self:CFunction>*/
}
RET_LABEL:;
}
/* method c_tools#ExternFile#filename for (self: ExternFile): String */
val* nitc___nitc__ExternFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#filename= for (self: ExternFile, String) */
void nitc___nitc__ExternFile___filename_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val = p0; /* _filename on <self:ExternFile> */
RET_LABEL:;
}
/* method c_tools#ExternFile#add_to_jar for (self: ExternFile): Bool */
short int nitc___nitc__ExternFile___add_to_jar(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#pkgconfigs for (self: ExternFile): Array[String] */
val* nitc___nitc__ExternFile___pkgconfigs(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#init for (self: ExternFile) */
void nitc___nitc__ExternFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExternFile___core__kernel__Object__init]))(self); /* init on <self:ExternFile>*/
}
RET_LABEL:;
}
/* method c_tools#ExternCFile#cflags for (self: ExternCFile): String */
val* nitc___nitc__ExternCFile___cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 132);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#cflags= for (self: ExternCFile, String) */
void nitc___nitc__ExternCFile___cflags_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_tools__ExternCFile___cflags].val = p0; /* _cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method c_tools#ExternCFile#hash for (self: ExternCFile): Int */
long nitc___nitc__ExternCFile___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__hash]))(var1); /* hash on <var1:String>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#== for (self: ExternCFile, nullable Object): Bool */
short int nitc___nitc__ExternCFile___core__kernel__Object___61d_61d(val* self, val* p0) {
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
cltype = type_nitc__ExternCFile.color;
idtype = type_nitc__ExternCFile.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var5 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline c_tools#ExternFile#filename (var_o) on <var_o:nullable Object(ExternCFile)> */
var8 = var_o->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_o:nullable Object(ExternCFile)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var6); /* == on <var3:String>*/
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
val* nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var_basename /* var basename: String */;
val* var9 /* : NativeArray[String] */;
static val* varonce8;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = ".c";
var6 = core__flat___NativeString___to_s_full(var5, 2l, 2l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__String__basename]))(var1, var4); /* basename on <var1:String>*/
}
var_basename = var7;
if (unlikely(varonce8==NULL)) {
var9 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ".extern.o";
var13 = core__flat___NativeString___to_s_full(var12, 9l, 9l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[1]=var11;
} else {
var9 = varonce8;
varonce8 = NULL;
}
((struct instance_core__NativeArray*)var9)->values[0]=var_basename;
{
var14 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce8 = var9;
var_res = var14;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#makefile_rule_content for (self: ExternCFile): String */
val* nitc___nitc__ExternCFile___ExternFile__makefile_rule_content(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_ff /* var ff: String */;
val* var5 /* : String */;
val* var_o /* var o: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var_pkg /* var pkg: String */;
val* var9 /* : Array[String] */;
val* var11 /* : Array[String] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var24 /* : Array[String] */;
val* var26 /* : Array[String] */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__String__basename]))(var1, ((val*)NULL)); /* basename on <var1:String>*/
}
var_ff = var4;
{
var5 = nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(self);
}
var_o = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = core__flat___NativeString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce = var6;
}
var_pkg = var6;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (self) on <self:ExternCFile> */
var11 = self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var9);
}
var13 = !var12;
if (var13){
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`pkg-config --cflags ";
var19 = core__flat___NativeString___to_s_full(var18, 21l, 21l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`";
var23 = core__flat___NativeString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
{ /* Inline c_tools#ExternFile#pkgconfigs (self) on <self:ExternCFile> */
var26 = self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " ";
var30 = core__flat___NativeString___to_s_full(var29, 1l, 1l);
var28 = var30;
varonce27 = var28;
}
{
var31 = core__abstract_text___Collection___join(var24, var28);
}
((struct instance_core__NativeArray*)var15)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
var_pkg = var32;
} else {
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "$(CC) $(CFLAGS) -Wall -Wno-unused-function ";
var38 = core__flat___NativeString___to_s_full(var37, 43l, 43l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " ";
var42 = core__flat___NativeString___to_s_full(var41, 1l, 1l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[2]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " -c -o ";
var46 = core__flat___NativeString___to_s_full(var45, 7l, 7l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[4]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " ";
var50 = core__flat___NativeString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var34)->values[6]=var48;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
{ /* Inline c_tools#ExternCFile#cflags (self) on <self:ExternCFile> */
var53 = self->attrs[COLOR_nitc__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 132);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
((struct instance_core__NativeArray*)var34)->values[1]=var51;
((struct instance_core__NativeArray*)var34)->values[3]=var_pkg;
((struct instance_core__NativeArray*)var34)->values[5]=var_o;
((struct instance_core__NativeArray*)var34)->values[7]=var_ff;
{
var54 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
var = var54;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#compiles_to_o_file for (self: ExternCFile): Bool */
short int nitc___nitc__ExternCFile___ExternFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#init for (self: ExternCFile) */
void nitc___nitc__ExternCFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExternCFile___core__kernel__Object__init]))(self); /* init on <self:ExternCFile>*/
}
RET_LABEL:;
}
