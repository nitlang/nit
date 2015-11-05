#include "nit__light_c.sep.0.h"
/* method light_c#CLanguage#identify_language for (self: CLanguage, AExternCodeBlock): Bool */
short int nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
{
var1 = nit__light_c___AExternCodeBlock___is_c(var_n);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#CLanguage#compile_module_block for (self: CLanguage, AExternCodeBlock, CCompilationUnit, MModule) */
void nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
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
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : Template */;
val* var16 /* : Template */;
val* var17 /* : String */;
short int var18 /* : Bool */;
val* var19 /* : Template */;
val* var21 /* : Template */;
val* var22 /* : Location */;
val* var24 /* : Location */;
val* var25 /* : String */;
val* var26 /* : Template */;
val* var28 /* : Template */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : Template */;
val* var35 /* : Template */;
val* var36 /* : String */;
var_block = p0;
var_ecc = p1;
var_mmodule = p2;
{
var = nit__light_c___AExternCodeBlock___is_c_header(var_block);
}
if (var){
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_ecc) on <var_ecc:CCompilationUnit> */
var3 = var_ecc->attrs[COLOR_nit__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_ecc:CCompilationUnit> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 28);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var6 = var_block->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__light_c___Location___as_line_pragma(var4);
}
{
template___template__Template___add(var1, var7); /* Direct call template#Template#add on <var1:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_ecc) on <var_ecc:CCompilationUnit> */
var10 = var_ecc->attrs[COLOR_nit__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_ecc:CCompilationUnit> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 28);
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
var13 = standard___standard__NativeString___to_s_with_length(var12, 1l);
var11 = var13;
varonce = var11;
}
{
template___template__Template___add(var8, var11); /* Direct call template#Template#add on <var8:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_ecc) on <var_ecc:CCompilationUnit> */
var16 = var_ecc->attrs[COLOR_nit__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_ecc:CCompilationUnit> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 28);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var14, var17); /* Direct call template#Template#add on <var14:Template>*/
}
} else {
{
var18 = nit__light_c___AExternCodeBlock___is_c_body(var_block);
}
if (var18){
{
{ /* Inline c_tools#CCompilationUnit#body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var21 = var_ecc->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
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
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var24 = var_block->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit__light_c___Location___as_line_pragma(var22);
}
{
template___template__Template___add(var19, var25); /* Direct call template#Template#add on <var19:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var28 = var_ecc->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 44);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "\n";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce29 = var30;
}
{
template___template__Template___add(var26, var30); /* Direct call template#Template#add on <var26:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (var_ecc) on <var_ecc:CCompilationUnit> */
var35 = var_ecc->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <var_ecc:CCompilationUnit> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 44);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nit__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var33, var36); /* Direct call template#Template#add on <var33:Template>*/
}
} else {
}
}
RET_LABEL:;
}
/* method light_c#CLanguage#compile_extern_method for (self: CLanguage, AExternCodeBlock, AMethPropdef, CCompilationUnit, MModule) */
void nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
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
var_block = p0;
var_m = p1;
var_ecc = p2;
var_mmodule = p3;
var = NEW_nit__ExternCFunction(&type_nit__ExternCFunction);
{
nit___nit__ExternCFunction___init(var, var_m, var_mmodule); /* Direct call light_c#ExternCFunction#init on <var:ExternCFunction>*/
}
var_fc = var;
{
{ /* Inline c_tools#CFunction#decls (var_fc) on <var_fc:ExternCFunction> */
var3 = var_fc->attrs[COLOR_nit__c_tools__CFunction___decls].val; /* _decls on <var_fc:ExternCFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 88);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var6 = var_block->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__light_c___Location___as_line_pragma(var4);
}
{
template___template__Template___add(var1, var7); /* Direct call template#Template#add on <var1:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:ExternCFunction> */
var10 = var_fc->attrs[COLOR_nit__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:ExternCFunction> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 89);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var8, var11); /* Direct call template#Template#add on <var8:Template>*/
}
{
nit___nit__CCompilationUnit___add_exported_function(var_ecc, var_fc); /* Direct call c_tools#CCompilationUnit#add_exported_function on <var_ecc:CCompilationUnit>*/
}
RET_LABEL:;
}
/* method light_c#CLanguage#compile_extern_class for (self: CLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, MModule) */
void nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
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
/* method light_c#CLanguage#get_ftype for (self: CLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignCType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_nit__ForeignCType(&type_nit__ForeignCType);
{
var2 = nit__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__light_c__ForeignCType__ctype_61d]))(var1, var2); /* ctype= on <var1:ForeignCType>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:ForeignCType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#AExternCodeBlock#is_c for (self: AExternCodeBlock): Bool */
short int nit__light_c___AExternCodeBlock___is_c(val* self) {
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
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
{
var3 = nit__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var3 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, ((val*)NULL)); /* == on <var3:nullable String>*/
var4 = var5;
}
var_ = var4;
if (var4){
var2 = var_;
} else {
{
var6 = nit__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "c";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce = var7;
}
if (var6 == NULL) {
var10 = 0; /* <var7:String> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var7); /* == on <var6:nullable String>*/
var10 = var11;
}
var2 = var10;
}
var_12 = var2;
if (var2){
var1 = var_12;
} else {
{
var13 = nit__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "c ";
var17 = standard___standard__NativeString___to_s_with_length(var16, 2l);
var15 = var17;
varonce14 = var15;
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 61);
fatal_exit(1);
} else {
var18 = standard___standard__Text___has_prefix(var13, var15);
}
var1 = var18;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#AExternCodeBlock#is_c_body for (self: AExternCodeBlock): Bool */
short int nit__light_c___AExternCodeBlock___is_c_body(val* self) {
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
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
{
var3 = nit__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var3 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, ((val*)NULL)); /* == on <var3:nullable String>*/
var4 = var5;
}
var_ = var4;
if (var4){
var2 = var_;
} else {
{
var6 = nit__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "c";
var9 = standard___standard__NativeString___to_s_with_length(var8, 1l);
var7 = var9;
varonce = var7;
}
if (var6 == NULL) {
var10 = 0; /* <var7:String> cannot be null */
} else {
var11 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var6, var7); /* == on <var6:nullable String>*/
var10 = var11;
}
var2 = var10;
}
var_12 = var2;
if (var2){
var1 = var_12;
} else {
{
var13 = nit__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "c body";
var17 = standard___standard__NativeString___to_s_with_length(var16, 6l);
var15 = var17;
varonce14 = var15;
}
if (var13 == NULL) {
var18 = 0; /* <var15:String> cannot be null */
} else {
var19 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var15); /* == on <var13:nullable String>*/
var18 = var19;
}
var1 = var18;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#AExternCodeBlock#is_c_header for (self: AExternCodeBlock): Bool */
short int nit__light_c___AExternCodeBlock___is_c_header(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
var1 = nit__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "c header";
var4 = standard___standard__NativeString___to_s_with_length(var3, 8l);
var2 = var4;
varonce = var2;
}
if (var1 == NULL) {
var5 = 0; /* <var2:String> cannot be null */
} else {
var6 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:nullable String>*/
var5 = var6;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#Location#as_line_pragma for (self: Location): String */
val* nit__light_c___Location___as_line_pragma(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable SourceFile */;
val* var24 /* : nullable SourceFile */;
val* var25 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "#line ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " \"";
var9 = standard___standard__NativeString___to_s_with_length(var8, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\"\n";
var13 = standard___standard__NativeString___to_s_with_length(var12, 2l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var16 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var20 = var14 - 1l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var21 = standard__string___Int___Object__to_s(var17);
((struct instance_standard__NativeArray*)var1)->values[1]=var21;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var24 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 70);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var22) on <var22:nullable SourceFile> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var27 = var22->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var22:nullable SourceFile> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
((struct instance_standard__NativeArray*)var1)->values[3]=var25;
{
var28 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#MModule#cflags for (self: MModule): MultiHashMap[String, String] */
val* nit__light_c___MModule___cflags(val* self) {
val* var /* : MultiHashMap[String, String] */;
val* var1 /* : MultiHashMap[String, String] */;
var1 = self->attrs[COLOR_nit__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 77);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c#MModule#ldflags for (self: MModule): MultiHashMap[String, String] */
val* nit__light_c___MModule___ldflags(val* self) {
val* var /* : MultiHashMap[String, String] */;
val* var1 /* : MultiHashMap[String, String] */;
var1 = self->attrs[COLOR_nit__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 80);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c#MModule#pkgconfigs for (self: MModule): Array[String] */
val* nit__light_c___MModule___pkgconfigs(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 83);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c#ForeignCType#ctype for (self: ForeignCType): String */
val* nit___nit__ForeignCType___nit__light_ffi_base__ForeignType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__light_c__ForeignCType___ctype].val; /* _ctype on <self:ForeignCType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ctype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 91);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_c#ForeignCType#ctype= for (self: ForeignCType, String) */
void nit___nit__ForeignCType___ctype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__light_c__ForeignCType___ctype].val = p0; /* _ctype on <self:ForeignCType> */
RET_LABEL:;
}
/* method light_c#ForeignCType#init for (self: ForeignCType) */
void nit___nit__ForeignCType___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__ForeignCType___standard__kernel__Object__init]))(self); /* init on <self:ForeignCType>*/
}
RET_LABEL:;
}
/* method light_c#Object#from_c_call_context for (self: Object): FromCCallContext */
val* nit__light_c___standard__Object___from_c_call_context(val* self) {
val* var /* : FromCCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : FromCCallContext */;
val* var2 /* : FromCCallContext */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__FromCCallContext(&type_nit__FromCCallContext);
{
{ /* Inline kernel#Object#init (var2) on <var2:FromCCallContext> */
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
/* method light_c#FromCCallContext#name_mtype for (self: FromCCallContext, MType): String */
val* nit___nit__FromCCallContext___nit__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__nitni_base__MType__cname]))(var_mtype); /* cname on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_c#ExternCFunction#method= for (self: ExternCFunction, AMethPropdef) */
void nit___nit__ExternCFunction___method_61d(val* self, val* p0) {
self->attrs[COLOR_nit__light_c__ExternCFunction___method].val = p0; /* _method on <self:ExternCFunction> */
RET_LABEL:;
}
/* method light_c#ExternCFunction#init for (self: ExternCFunction, AMethPropdef, MModule) */
void nit___nit__ExternCFunction___init(val* self, val* p0, val* p1) {
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
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : SignatureLength */;
val* var20 /* : FromCCallContext */;
val* var21 /* : String */;
val* var_csignature /* var csignature: String */;
var_method = p0;
var_mmodule = p1;
{
{ /* Inline light_c#ExternCFunction#method= (self,var_method) on <self:ExternCFunction> */
self->attrs[COLOR_nit__light_c__ExternCFunction___method].val = var_method; /* _method on <self:ExternCFunction> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_method) on <var_method:AMethPropdef> */
var3 = var_method->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_method:AMethPropdef> */
var = var3;
RET_LABEL2:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 133);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var6 = var->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_recv_mtype = var7;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_method) on <var_method:AMethPropdef> */
var12 = var_method->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_method:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_c, 134);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var10) on <var10:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var10:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
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
var18 = standard___standard__NativeString___to_s_with_length(var17, 7l);
var16 = var18;
varonce = var16;
}
{
var19 = nit__nitni_utilities___standard__Object___long_signature(self);
}
{
var20 = nit__light_c___standard__Object___from_c_call_context(self);
}
{
var21 = nit__nitni_utilities___MMethod___build_csignature(var13, var_recv_mtype, var_mmodule, var16, var19, var20);
}
var_csignature = var21;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__c_tools__CFunction__signature_61d]))(self, var_csignature); /* signature= on <self:ExternCFunction>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_standard__kernel__Object__init]))(self); /* init on <self:ExternCFunction>*/
}
RET_LABEL:;
}
