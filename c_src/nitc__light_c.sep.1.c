#include "nitc__light_c.sep.0.h"
/* method light_c$CLanguage$identify_language for (self: CLanguage, AExternCodeBlock): Bool */
short int nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
{
var1 = nitc__light_c___AExternCodeBlock___is_c(var_n);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$CLanguage$compile_module_block for (self: CLanguage, AExternCodeBlock, CCompilationUnit, MModule) */
void nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
val* var_block /* var block: AExternCodeBlock */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
short int var /* : Bool */;
val* var1 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Location */;
val* var6 /* : Location */;
val* var7 /* : String */;
val* var8 /* : Template */;
val* var10 /* : Template */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : Template */;
val* var20 /* : Template */;
val* var21 /* : String */;
short int var22 /* : Bool */;
val* var23 /* : Template */;
val* var25 /* : Template */;
val* var26 /* : Location */;
val* var28 /* : Location */;
val* var29 /* : String */;
val* var30 /* : Template */;
val* var32 /* : Template */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : Template */;
val* var43 /* : Template */;
val* var44 /* : String */;
var_block = p0;
var_ecc = p1;
var_mmodule = p2;
{
var = nitc__light_c___AExternCodeBlock___is_c_header(var_block);
}
if (var){
{
{ /* Inline c_tools$CCompilationUnit$header_custom (var_ecc) on <var_ecc:CCompilationUnit> */
var3 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_ecc:CCompilationUnit> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_block) on <var_block:AExternCodeBlock> */
var6 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__light_c___Location___as_line_pragma(var4);
}
{
template___template__Template___add(var1, var7); /* Direct call template$Template$add on <var1:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$header_custom (var_ecc) on <var_ecc:CCompilationUnit> */
var10 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_ecc:CCompilationUnit> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "\n";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
template___template__Template___add(var8, var11); /* Direct call template$Template$add on <var8:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$header_custom (var_ecc) on <var_ecc:CCompilationUnit> */
var20 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_ecc:CCompilationUnit> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var18, var21); /* Direct call template$Template$add on <var18:Template>*/
}
} else {
{
var22 = nitc__light_c___AExternCodeBlock___is_c_body(var_block);
}
if (var22){
{
{ /* Inline c_tools$CCompilationUnit$body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var25 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_block) on <var_block:AExternCodeBlock> */
var28 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc__light_c___Location___as_line_pragma(var26);
}
{
template___template__Template___add(var23, var29); /* Direct call template$Template$add on <var23:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var32 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "\n";
var37 = (val*)(1l<<2|1);
var38 = (val*)(1l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
{
template___template__Template___add(var30, var34); /* Direct call template$Template$add on <var30:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var43 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var41, var44); /* Direct call template$Template$add on <var41:Template>*/
}
} else {
}
}
RET_LABEL:;
}
/* method light_c$CLanguage$compile_extern_method for (self: CLanguage, AExternCodeBlock, AMethPropdef, CCompilationUnit, MModule) */
void nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AMethPropdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : ExternCFunction */;
val* var_fc /* var fc: ExternCFunction */;
val* var1 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Location */;
val* var6 /* : Location */;
val* var7 /* : String */;
val* var8 /* : Template */;
val* var10 /* : Template */;
val* var11 /* : String */;
val* var12 /* : Template */;
val* var14 /* : Template */;
val* var15 /* : Template */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_mmodule = p3;
var = NEW_nitc__ExternCFunction(&type_nitc__ExternCFunction);
{
nitc___nitc__ExternCFunction___init(var, var_m, var_mmodule); /* Direct call light_c$ExternCFunction$init on <var:ExternCFunction>*/
}
var_fc = var;
{
{ /* Inline c_tools$CFunction$decls (var_fc) on <var_fc:ExternCFunction> */
var3 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <var_fc:ExternCFunction> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_block) on <var_block:AExternCodeBlock> */
var6 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__light_c___Location___as_line_pragma(var4);
}
{
template___template__Template___add(var1, var7); /* Direct call template$Template$add on <var1:Template>*/
}
{
{ /* Inline c_tools$CFunction$exprs (var_fc) on <var_fc:ExternCFunction> */
var10 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:ExternCFunction> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var8, var11); /* Direct call template$Template$add on <var8:Template>*/
}
{
{ /* Inline c_tools$CCompilationUnit$body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var14 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc___nitc__CFunction___to_writer(var_fc);
}
{
template___template__Template___add(var12, var15); /* Direct call template$Template$add on <var12:Template>*/
}
RET_LABEL:;
}
/* method light_c$CLanguage$compile_extern_class for (self: CLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, MModule) */
void nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_mmodule = p3;
RET_LABEL:;
}
/* method light_c$CLanguage$get_ftype for (self: CLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignCType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_nitc__ForeignCType(&type_nitc__ForeignCType);
{
var2 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__light_c__ForeignCType__ctype_61d]))(var1, var2); /* ctype= on <var1:ForeignCType>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ForeignCType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$AExternCodeBlock$is_c for (self: AExternCodeBlock): Bool */
short int nitc__light_c___AExternCodeBlock___is_c(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : nullable String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : nullable String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
short int var26 /* : Bool */;
{
var3 = nitc__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var3 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, ((val*)NULL)); /* == on <var3:nullable String>*/
var4 = var5;
}
var_ = var4;
if (var4){
var2 = var_;
} else {
{
var6 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "c";
var10 = (val*)(1l<<2|1);
var11 = (val*)(1l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
if (var6 == NULL) {
var14 = 0; /* <var7:String> cannot be null */
} else {
var15 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var7); /* == on <var6:nullable String>*/
var14 = var15;
}
var2 = var14;
}
var_16 = var2;
if (var2){
var1 = var_16;
} else {
{
var17 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "c ";
var22 = (val*)(2l<<2|1);
var23 = (val*)(2l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
if (var17 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 61);
fatal_exit(1);
} else {
var26 = core___core__Text___has_prefix(var17, var19);
}
var1 = var26;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$AExternCodeBlock$is_c_body for (self: AExternCodeBlock): Bool */
short int nitc__light_c___AExternCodeBlock___is_c_body(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : nullable String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : nullable String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
{
var3 = nitc__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var3 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, ((val*)NULL)); /* == on <var3:nullable String>*/
var4 = var5;
}
var_ = var4;
if (var4){
var2 = var_;
} else {
{
var6 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "c";
var10 = (val*)(1l<<2|1);
var11 = (val*)(1l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
if (var6 == NULL) {
var14 = 0; /* <var7:String> cannot be null */
} else {
var15 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var7); /* == on <var6:nullable String>*/
var14 = var15;
}
var2 = var14;
}
var_16 = var2;
if (var2){
var1 = var_16;
} else {
{
var17 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "c body";
var22 = (val*)(6l<<2|1);
var23 = (val*)(6l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
if (var17 == NULL) {
var26 = 0; /* <var19:String> cannot be null */
} else {
var27 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_core__kernel__Object___61d_61d]))(var17, var19); /* == on <var17:nullable String>*/
var26 = var27;
}
var1 = var26;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$AExternCodeBlock$is_c_header for (self: AExternCodeBlock): Bool */
short int nitc__light_c___AExternCodeBlock___is_c_header(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
{
var1 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "c header";
var5 = (val*)(8l<<2|1);
var6 = (val*)(8l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
if (var1 == NULL) {
var9 = 0; /* <var2:String> cannot be null */
} else {
var10 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:nullable String>*/
var9 = var10;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$Location$as_line_pragma for (self: Location): String */
val* nitc__light_c___Location___as_line_pragma(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : nullable SourceFile */;
val* var36 /* : nullable SourceFile */;
val* var37 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "#line ";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " \"";
var14 = (val*)(2l<<2|1);
var15 = (val*)(2l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\"\n";
var22 = (val*)(2l<<2|1);
var23 = (val*)(2l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var1)->values[4]=var19;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var28 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var26,1l) on <var26:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var26 - 1l;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var33 = core__flat___Int___core__abstract_text__Object__to_s(var29);
((struct instance_core__NativeArray*)var1)->values[1]=var33;
{
{ /* Inline location$Location$file (self) on <self:Location> */
var36 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 70);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var34) on <var34:nullable SourceFile> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var34:nullable SourceFile> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[3]=var37;
{
var40 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var40;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$MModule$cflags for (self: MModule): MultiHashMap[String, String] */
val* nitc__light_c___MModule___cflags(val* self) {
val* var /* : MultiHashMap[String, String] */;
val* var1 /* : MultiHashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 77);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c$MModule$ldflags for (self: MModule): MultiHashMap[String, String] */
val* nitc__light_c___MModule___ldflags(val* self) {
val* var /* : MultiHashMap[String, String] */;
val* var1 /* : MultiHashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c$MModule$pkgconfigs for (self: MModule): Array[String] */
val* nitc__light_c___MModule___pkgconfigs(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 83);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c$ForeignCType$ctype for (self: ForeignCType): String */
val* nitc___nitc__ForeignCType___nitc__light_ffi_base__ForeignType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__light_c__ForeignCType___ctype].val; /* _ctype on <self:ForeignCType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ctype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 91);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c$ForeignCType$ctype= for (self: ForeignCType, String) */
void nitc___nitc__ForeignCType___ctype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light_c__ForeignCType___ctype].val = p0; /* _ctype on <self:ForeignCType> */
RET_LABEL:;
}
/* method light_c$ForeignCType$init for (self: ForeignCType) */
void nitc___nitc__ForeignCType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ForeignCType___core__kernel__Object__init]))(self); /* init on <self:ForeignCType>*/
}
RET_LABEL:;
}
/* method light_c$FromCCallContext$name_mtype for (self: FromCCallContext, MType): String */
val* nitc___nitc__FromCCallContext___nitc__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__nitni_base__MType__cname]))(var_mtype); /* cname on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c$ExternCFunction$method= for (self: ExternCFunction, AMethPropdef) */
void nitc___nitc__ExternCFunction___method_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light_c__ExternCFunction___method].val = p0; /* _method on <self:ExternCFunction> */
RET_LABEL:;
}
/* method light_c$ExternCFunction$init for (self: ExternCFunction, AMethPropdef, MModule) */
void nitc___nitc__ExternCFunction___init(val* self, val* p0, val* p1) {
val* var_method /* var method: AMethPropdef */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var13 /* : MProperty */;
val* var15 /* : MProperty */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : Sys */;
val* var24 /* : SignatureLength */;
val* var25 /* : Sys */;
val* var26 /* : FromCCallContext */;
val* var27 /* : String */;
val* var_csignature /* var csignature: String */;
var_method = p0;
var_mmodule = p1;
{
{ /* Inline light_c$ExternCFunction$method= (self,var_method) on <self:ExternCFunction> */
self->attrs[COLOR_nitc__light_c__ExternCFunction___method].val = var_method; /* _method on <self:ExternCFunction> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelize_property$APropdef$mpropdef (var_method) on <var_method:AMethPropdef> */
var3 = var_method->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_method:AMethPropdef> */
var = var3;
RET_LABEL2:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 131);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var6 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_recv_mtype = var7;
{
{ /* Inline modelize_property$APropdef$mpropdef (var_method) on <var_method:AMethPropdef> */
var12 = var_method->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_method:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 132);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var10) on <var10:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var10:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "___impl";
var19 = (val*)(7l<<2|1);
var20 = (val*)(7l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce = var16;
}
var23 = glob_sys;
{
var24 = nitc__nitni_utilities___core__Sys___long_signature(var23);
}
var25 = glob_sys;
{
var26 = nitc__light_c___core__Sys___from_c_call_context(var25);
}
{
var27 = nitc__nitni_utilities___MMethod___build_csignature(var13, var_recv_mtype, var_mmodule, var16, var24, var26);
}
var_csignature = var27;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(self, var_csignature); /* signature= on <self:ExternCFunction>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:ExternCFunction>*/
}
RET_LABEL:;
}
/* method light_c$Sys$from_c_call_context for (self: Sys): FromCCallContext */
val* nitc__light_c___core__Sys___from_c_call_context(val* self) {
val* var /* : FromCCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : FromCCallContext */;
val* var2 /* : FromCCallContext */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__FromCCallContext(&type_nitc__FromCCallContext);
{
{ /* Inline kernel$Object$init (var2) on <var2:FromCCallContext> */
RET_LABEL3:(void)0;
}
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
