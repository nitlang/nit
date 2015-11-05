#include "nit__c_tools.sep.0.h"
/* method c_tools#CCompilationUnit#header_c_base for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___header_c_base(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_custom for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___header_custom(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_c_types for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___header_c_types(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#header_decl for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___header_decl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_decl for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___body_decl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_custom for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___body_custom(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 41);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#body_impl for (self: CCompilationUnit): Template */
val* nit___nit__CCompilationUnit___body_impl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#files for (self: CCompilationUnit): Array[String] */
val* nit___nit__CCompilationUnit___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CCompilationUnit#add_exported_function for (self: CCompilationUnit, CFunction) */
void nit___nit__CCompilationUnit___add_exported_function(val* self, val* p0) {
val* var_c_function /* var c_function: CFunction */;
val* var /* : Template */;
val* var2 /* : Template */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : Template */;
val* var14 /* : Template */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : Template */;
val* var21 /* : Template */;
val* var22 /* : Template */;
var_c_function = p0;
{
{ /* Inline c_tools#CCompilationUnit#body_decl (self) on <self:CCompilationUnit> */
var2 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = ";\n";
var7 = standard___standard__NativeString___to_s_with_length(var6, 2l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[1]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
{
{ /* Inline c_tools#CFunction#signature (var_c_function) on <var_c_function:CFunction> */
var10 = var_c_function->attrs[COLOR_nit__c_tools__CFunction___signature].val; /* _signature on <var_c_function:CFunction> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 86);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
((struct instance_standard__NativeArray*)var3)->values[0]=var8;
{
var11 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
template___template__Template___add(var, var11); /* Direct call template#Template#add on <var:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (self) on <self:CCompilationUnit> */
var14 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 44);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\n";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
{
template___template__Template___add(var12, var16); /* Direct call template#Template#add on <var12:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (self) on <self:CCompilationUnit> */
var21 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 44);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__CFunction___to_writer(var_c_function);
}
{
template___template__Template___add(var19, var22); /* Direct call template#Template#add on <var19:Template>*/
}
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_header_core for (self: CCompilationUnit, Writer) */
void nit___nit__CCompilationUnit___compile_header_core(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 24);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var, var_stream); /* Direct call template#Template#write_to on <var:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (self) on <self:CCompilationUnit> */
var5 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <self:CCompilationUnit> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 28);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var3, var_stream); /* Direct call template#Template#write_to on <var3:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_c_types (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 31);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var6, var_stream); /* Direct call template#Template#write_to on <var6:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (self) on <self:CCompilationUnit> */
var11 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <self:CCompilationUnit> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 34);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var9, var_stream); /* Direct call template#Template#write_to on <var9:Template>*/
}
RET_LABEL:;
}
/* method c_tools#CCompilationUnit#compile_body_core for (self: CCompilationUnit, Writer) */
void nit___nit__CCompilationUnit___compile_body_core(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var, var_stream); /* Direct call template#Template#write_to on <var:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_custom (self) on <self:CCompilationUnit> */
var5 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <self:CCompilationUnit> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 41);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var3, var_stream); /* Direct call template#Template#write_to on <var3:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 44);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
template___template__Template___standard__stream__Writable__write_to(var6, var_stream); /* Direct call template#Template#write_to on <var6:Template>*/
}
RET_LABEL:;
}
/* method c_tools#CFunction#signature for (self: CFunction): String */
val* nit___nit__CFunction___signature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__c_tools__CFunction___signature].val; /* _signature on <self:CFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#signature= for (self: CFunction, String) */
void nit___nit__CFunction___signature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__c_tools__CFunction___signature].val = p0; /* _signature on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools#CFunction#decls for (self: CFunction): Template */
val* nit___nit__CFunction___decls(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CFunction___decls].val; /* _decls on <self:CFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 88);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#exprs for (self: CFunction): Template */
val* nit___nit__CFunction___exprs(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nit__c_tools__CFunction___exprs].val; /* _exprs on <self:CFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#CFunction#to_writer for (self: CFunction): Template */
val* nit___nit__CFunction___to_writer(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
val* var_w /* var w: Template */;
val* var2 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : Template */;
val* var10 /* : Template */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : Template */;
val* var17 /* : Template */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_w = var1;
{
{ /* Inline c_tools#CFunction#signature (self) on <self:CFunction> */
var4 = self->attrs[COLOR_nit__c_tools__CFunction___signature].val; /* _signature on <self:CFunction> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 86);
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
var7 = standard___standard__NativeString___to_s_with_length(var6, 3l);
var5 = var7;
varonce = var5;
}
{
template___template__Template___add(var_w, var5); /* Direct call template#Template#add on <var_w:Template>*/
}
{
{ /* Inline c_tools#CFunction#decls (self) on <self:CFunction> */
var10 = self->attrs[COLOR_nit__c_tools__CFunction___decls].val; /* _decls on <self:CFunction> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 88);
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
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
{
template___template__Template___add(var_w, var12); /* Direct call template#Template#add on <var_w:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (self) on <self:CFunction> */
var17 = self->attrs[COLOR_nit__c_tools__CFunction___exprs].val; /* _exprs on <self:CFunction> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 89);
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
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
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
void nit___nit__CFunction___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__CFunction___standard__kernel__Object__init]))(self); /* init on <self:CFunction>*/
}
RET_LABEL:;
}
/* method c_tools#ExternFile#filename for (self: ExternFile): String */
val* nit___nit__ExternFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
fatal_exit(1);
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
var = 0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 123);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools#ExternFile#init for (self: ExternFile) */
void nit___nit__ExternFile___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ExternFile___standard__kernel__Object__init]))(self); /* init on <self:ExternFile>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 132);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__hash]))(var1); /* hash on <var1:String>*/
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
var5 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var6); /* == on <var3:String>*/
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
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var_basename /* var basename: String */;
val* var9 /* : NativeArray[String] */;
static val* varonce8;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var_res /* var res: String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
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
var6 = standard___standard__NativeString___to_s_with_length(var5, 2l);
var4 = var6;
varonce = var4;
}
{
var7 = standard__file___String___basename(var1, var4);
}
var_basename = var7;
if (unlikely(varonce8==NULL)) {
var9 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ".extern.o";
var13 = standard___standard__NativeString___to_s_with_length(var12, 9l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var9)->values[1]=var11;
} else {
var9 = varonce8;
varonce8 = NULL;
}
((struct instance_standard__NativeArray*)var9)->values[0]=var_basename;
{
var14 = ((val*(*)(val* self))(var9->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce8 = var9;
var_res = var14;
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
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var_ff /* var ff: String */;
val* var8 /* : String */;
val* var_o /* var o: String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var_pkg /* var pkg: String */;
val* var13 /* : Array[String] */;
val* var15 /* : Array[String] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : Array[String] */;
val* var30 /* : Array[String] */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = standard___standard__NativeString___to_s_with_length(var5, 0l);
var4 = var6;
varonce = var4;
}
{
var7 = standard__file___String___basename(var1, var4);
}
var_ff = var7;
{
var8 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(self);
}
var_o = var8;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "";
var12 = standard___standard__NativeString___to_s_with_length(var11, 0l);
var10 = var12;
varonce9 = var10;
}
var_pkg = var10;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (self) on <self:ExternCFile> */
var15 = self->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 123);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var13);
}
var17 = !var16;
if (var17){
if (unlikely(varonce18==NULL)) {
var19 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`pkg-config --cflags ";
var23 = standard___standard__NativeString___to_s_with_length(var22, 21l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "`";
var27 = standard___standard__NativeString___to_s_with_length(var26, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[2]=var25;
} else {
var19 = varonce18;
varonce18 = NULL;
}
{
{ /* Inline c_tools#ExternFile#pkgconfigs (self) on <self:ExternCFile> */
var30 = self->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 123);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = " ";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
{
var35 = standard__string___Collection___join(var28, var32);
}
((struct instance_standard__NativeArray*)var19)->values[1]=var35;
{
var36 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
var_pkg = var36;
} else {
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "$(CC) $(CFLAGS) -Wall ";
var42 = standard___standard__NativeString___to_s_with_length(var41, 22l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[0]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " ";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var38)->values[2]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " -c -o ";
var50 = standard___standard__NativeString___to_s_with_length(var49, 7l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var38)->values[4]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " ";
var54 = standard___standard__NativeString___to_s_with_length(var53, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var38)->values[6]=var52;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
{ /* Inline c_tools#ExternCFile#cflags (self) on <self:ExternCFile> */
var57 = self->attrs[COLOR_nit__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 132);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
((struct instance_standard__NativeArray*)var38)->values[1]=var55;
((struct instance_standard__NativeArray*)var38)->values[3]=var_pkg;
((struct instance_standard__NativeArray*)var38)->values[5]=var_o;
((struct instance_standard__NativeArray*)var38)->values[7]=var_ff;
{
var58 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
var = var58;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#compiles_to_o_file for (self: ExternCFile): Bool */
short int nit___nit__ExternCFile___ExternFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools#ExternCFile#init for (self: ExternCFile) */
void nit___nit__ExternCFile___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ExternCFile___standard__kernel__Object__init]))(self); /* init on <self:ExternCFile>*/
}
RET_LABEL:;
}
