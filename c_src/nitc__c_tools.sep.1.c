#include "nitc__c_tools.sep.0.h"
/* method c_tools$CCompilationUnit$header_c_base for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_c_base(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$header_custom for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_custom(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$header_c_types for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_c_types(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$header_decl for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___header_decl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$body_decl for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___body_decl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$body_custom for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___body_custom(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$body_impl for (self: CCompilationUnit): Template */
val* nitc___nitc__CCompilationUnit___body_impl(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$files for (self: CCompilationUnit): Array[String] */
val* nitc___nitc__CCompilationUnit___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CCompilationUnit$compile_header_core for (self: CCompilationUnit, Writer) */
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
{ /* Inline c_tools$CCompilationUnit$header_c_base (self) on <self:CCompilationUnit> */
var2 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val; /* _header_c_base on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_base");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 24);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var, var_stream); /* Direct call template$Template$write_to on <var:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$header_custom (self) on <self:CCompilationUnit> */
var5 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <self:CCompilationUnit> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var3, var_stream); /* Direct call template$Template$write_to on <var3:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$header_c_types (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var6, var_stream); /* Direct call template$Template$write_to on <var6:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$header_decl (self) on <self:CCompilationUnit> */
var11 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <self:CCompilationUnit> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var9, var_stream); /* Direct call template$Template$write_to on <var9:Template>*/
}
RET_LABEL:;
}
/* method c_tools$CCompilationUnit$compile_body_core for (self: CCompilationUnit, Writer) */
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
{ /* Inline c_tools$CCompilationUnit$body_decl (self) on <self:CCompilationUnit> */
var2 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var, var_stream); /* Direct call template$Template$write_to on <var:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_custom (self) on <self:CCompilationUnit> */
var5 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <self:CCompilationUnit> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var3, var_stream); /* Direct call template$Template$write_to on <var3:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_impl (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
template___template__Template___core__stream__Writable__write_to(var6, var_stream); /* Direct call template$Template$write_to on <var6:Template>*/
}
RET_LABEL:;
}
/* method c_tools$CFunction$signature for (self: CFunction): String */
val* nitc___nitc__CFunction___signature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_tools__CFunction___signature].val; /* _signature on <self:CFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CFunction$signature= for (self: CFunction, String) */
void nitc___nitc__CFunction___signature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_tools__CFunction___signature].val = p0; /* _signature on <self:CFunction> */
RET_LABEL:;
}
/* method c_tools$CFunction$decls for (self: CFunction): Template */
val* nitc___nitc__CFunction___decls(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <self:CFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CFunction$exprs for (self: CFunction): Template */
val* nitc___nitc__CFunction___exprs(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <self:CFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$CFunction$to_writer for (self: CFunction): Template */
val* nitc___nitc__CFunction___to_writer(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
val* var_w /* var w: Template */;
val* var2 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : Template */;
val* var14 /* : Template */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : Template */;
val* var25 /* : Template */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
var_w = var1;
{
{ /* Inline c_tools$CFunction$signature (self) on <self:CFunction> */
var4 = self->attrs[COLOR_nitc__c_tools__CFunction___signature].val; /* _signature on <self:CFunction> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 86);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
template___template__Template___add(var_w, var2); /* Direct call template$Template$add on <var_w:Template>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "\n{\n";
var8 = (val*)(3l<<2|1);
var9 = (val*)(3l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
{
template___template__Template___add(var_w, var5); /* Direct call template$Template$add on <var_w:Template>*/
}
{
{ /* Inline c_tools$CFunction$decls (self) on <self:CFunction> */
var14 = self->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <self:CFunction> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
template___template__Template___add(var_w, var12); /* Direct call template$Template$add on <var_w:Template>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\n";
var19 = (val*)(1l<<2|1);
var20 = (val*)(1l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
{
template___template__Template___add(var_w, var16); /* Direct call template$Template$add on <var_w:Template>*/
}
{
{ /* Inline c_tools$CFunction$exprs (self) on <self:CFunction> */
var25 = self->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <self:CFunction> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
template___template__Template___add(var_w, var23); /* Direct call template$Template$add on <var_w:Template>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "}\n";
var30 = (val*)(2l<<2|1);
var31 = (val*)(2l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
template___template__Template___add(var_w, var27); /* Direct call template$Template$add on <var_w:Template>*/
}
var = var_w;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools$CFunction$init for (self: CFunction) */
void nitc___nitc__CFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CFunction___core__kernel__Object__init]))(self); /* init on <self:CFunction>*/
}
RET_LABEL:;
}
/* method c_tools$ExternFile$filename for (self: ExternFile): String */
val* nitc___nitc__ExternFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$ExternFile$filename= for (self: ExternFile, String) */
void nitc___nitc__ExternFile___filename_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val = p0; /* _filename on <self:ExternFile> */
RET_LABEL:;
}
/* method c_tools$ExternFile$add_to_jar for (self: ExternFile): Bool */
short int nitc___nitc__ExternFile___add_to_jar(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools$ExternFile$pkgconfigs for (self: ExternFile): Array[String] */
val* nitc___nitc__ExternFile___pkgconfigs(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$ExternFile$init for (self: ExternFile) */
void nitc___nitc__ExternFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExternFile___core__kernel__Object__init]))(self); /* init on <self:ExternFile>*/
}
RET_LABEL:;
}
/* method c_tools$ExternCFile$cflags for (self: ExternCFile): String */
val* nitc___nitc__ExternCFile___cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 132);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_tools$ExternCFile$cflags= for (self: ExternCFile, String) */
void nitc___nitc__ExternCFile___cflags_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_tools__ExternCFile___cflags].val = p0; /* _cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method c_tools$ExternCFile$hash for (self: ExternCFile): Int */
long nitc___nitc__ExternCFile___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
val* var3 /* : String */;
long var4 /* : Int */;
{
{ /* Inline c_tools$ExternFile$filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method c_tools$ExternCFile$== for (self: ExternCFile, nullable Object): Bool */
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
{ /* Inline c_tools$ExternFile$filename (self) on <self:ExternCFile> */
var5 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline c_tools$ExternFile$filename (var_o) on <var_o:nullable Object(ExternCFile)> */
var8 = var_o->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_o:nullable Object(ExternCFile)> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method c_tools$ExternCFile$makefile_rule_name for (self: ExternCFile): String */
val* nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : String */;
val* var_basename /* var basename: String */;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : String */;
val* var_res /* var res: String */;
{
{ /* Inline c_tools$ExternFile$filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var7 = (val*)(2l<<2|1);
var8 = (val*)(2l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__String__basename]))(var1, var4); /* basename on <var1:String>*/
}
var_basename = var11;
if (unlikely(varonce12==NULL)) {
var13 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ".extern.o";
var18 = (val*)(9l<<2|1);
var19 = (val*)(9l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[1]=var15;
} else {
var13 = varonce12;
varonce12 = NULL;
}
((struct instance_core__NativeArray*)var13)->values[0]=var_basename;
{
var22 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
var_res = var22;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools$ExternCFile$makefile_rule_content for (self: ExternCFile): String */
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
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var_pkg /* var pkg: String */;
val* var13 /* : Array[String] */;
val* var15 /* : Array[String] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : Array[String] */;
val* var38 /* : Array[String] */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : String */;
val* var85 /* : String */;
val* var86 /* : String */;
{
{ /* Inline c_tools$ExternFile$filename (self) on <self:ExternCFile> */
var3 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCFile> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var9 = (val*)(0l<<2|1);
var10 = (val*)(0l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
var_pkg = var6;
{
{ /* Inline c_tools$ExternFile$pkgconfigs (self) on <self:ExternCFile> */
var15 = self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var13);
}
var17 = !var16;
if (var17){
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`pkg-config --cflags ";
var24 = (val*)(21l<<2|1);
var25 = (val*)(21l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "`";
var32 = (val*)(1l<<2|1);
var33 = (val*)(1l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[2]=var29;
} else {
var19 = varonce18;
varonce18 = NULL;
}
{
{ /* Inline c_tools$ExternFile$pkgconfigs (self) on <self:ExternCFile> */
var38 = self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <self:ExternCFile> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " ";
var43 = (val*)(1l<<2|1);
var44 = (val*)(1l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
{
var47 = core__abstract_text___Collection___join(var36, var40, ((val*)NULL));
}
((struct instance_core__NativeArray*)var19)->values[1]=var47;
{
var48 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
var_pkg = var48;
} else {
}
if (unlikely(varonce49==NULL)) {
var50 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "$(CC) $(CFLAGS) -Wall -Wno-unused-function ";
var55 = (val*)(43l<<2|1);
var56 = (val*)(43l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = " ";
var63 = (val*)(1l<<2|1);
var64 = (val*)(1l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[2]=var60;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = " -c -o ";
var71 = (val*)(7l<<2|1);
var72 = (val*)(7l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var50)->values[4]=var68;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " ";
var79 = (val*)(1l<<2|1);
var80 = (val*)(1l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var50)->values[6]=var76;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
{ /* Inline c_tools$ExternCFile$cflags (self) on <self:ExternCFile> */
var85 = self->attrs[COLOR_nitc__c_tools__ExternCFile___cflags].val; /* _cflags on <self:ExternCFile> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 132);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
((struct instance_core__NativeArray*)var50)->values[1]=var83;
((struct instance_core__NativeArray*)var50)->values[3]=var_pkg;
((struct instance_core__NativeArray*)var50)->values[5]=var_o;
((struct instance_core__NativeArray*)var50)->values[7]=var_ff;
{
var86 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
var = var86;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools$ExternCFile$compiles_to_o_file for (self: ExternCFile): Bool */
short int nitc___nitc__ExternCFile___ExternFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_tools$ExternCFile$init for (self: ExternCFile) */
void nitc___nitc__ExternCFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExternCFile___core__kernel__Object__init]))(self); /* init on <self:ExternCFile>*/
}
RET_LABEL:;
}
