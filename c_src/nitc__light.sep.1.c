#include "nitc__light.sep.0.h"
/* method light#MModule#nitni_ccu for (self: MModule): nullable CCompilationUnit */
val* nitc__light___MModule___nitni_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method light#MModule#nitni_ccu= for (self: MModule, nullable CCompilationUnit) */
void nitc__light___MModule___nitni_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val = p0; /* _nitni_ccu on <self:MModule> */
RET_LABEL:;
}
/* method light#MModule#nmodule for (self: MModule, AbstractCompilerVisitor): nullable AModule */
val* nitc__light___MModule___nmodule(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : nullable AModule */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__loader___ModelBuilder___mmodule2node(var4, self);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#MModule#finalize_ffi for (self: MModule, AbstractCompiler) */
void nitc__light___MModule___finalize_ffi(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var5 /* : nullable AModule */;
val* var_n /* var n: nullable AModule */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : Toolchain */;
val* var17 /* : Toolchain */;
val* var18 /* : String */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : Array[ExternFile] */;
val* var27 /* : Array[ExternFile] */;
val* var_ /* var : Array[ExternFile] */;
val* var28 /* : IndexedIterator[nullable Object] */;
val* var_29 /* var : IndexedIterator[ExternFile] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_file /* var file: ExternFile */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : Array[ExternFile] */;
val* var37 /* : Array[ExternFile] */;
val* var38 /* : nullable CCompilationUnit */;
val* var40 /* : nullable CCompilationUnit */;
val* var41 /* : Template */;
val* var43 /* : Template */;
val* var44 /* : NativeArray[String] */;
static val* varonce;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : nullable CCompilationUnit */;
val* var57 /* : nullable CCompilationUnit */;
val* var58 /* : Template */;
val* var60 /* : Template */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : String */;
val* var65 /* : nullable CCompilationUnit */;
val* var67 /* : nullable CCompilationUnit */;
val* var68 /* : Template */;
val* var70 /* : Template */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : String */;
val* var75 /* : MultiHashMap[String, String] */;
val* var77 /* : MultiHashMap[String, String] */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
val* var82 /* : nullable Object */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var_cflags /* var cflags: String */;
val* var88 /* : nullable CCompilationUnit */;
val* var90 /* : nullable CCompilationUnit */;
val* var91 /* : AbstractCompiler */;
val* var93 /* : AbstractCompiler */;
val* var94 /* : Toolchain */;
val* var96 /* : Toolchain */;
val* var97 /* : String */;
val* var98 /* : nullable CCompilationUnit */;
val* var100 /* : nullable CCompilationUnit */;
val* var101 /* : Array[String] */;
val* var103 /* : Array[String] */;
val* var_104 /* var : Array[String] */;
val* var105 /* : IndexedIterator[nullable Object] */;
val* var_106 /* var : IndexedIterator[String] */;
short int var107 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_file110 /* var file: String */;
val* var111 /* : ExternCFile */;
val* var_f /* var f: ExternCFile */;
val* var112 /* : Array[String] */;
val* var114 /* : Array[String] */;
val* var115 /* : Array[String] */;
val* var117 /* : Array[String] */;
val* var118 /* : AbstractCompiler */;
val* var120 /* : AbstractCompiler */;
val* var121 /* : Array[ExternFile] */;
val* var123 /* : Array[ExternFile] */;
val* var125 /* : HashSet[AMethPropdef] */;
val* var127 /* : HashSet[AMethPropdef] */;
val* var129 /* : Array[ExternFile] */;
val* var131 /* : Array[ExternFile] */;
var_compiler = p0;
{
{ /* Inline light_ffi#MModule#uses_ffi (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s; /* _uses_ffi on <self:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
goto RET_LABEL;
} else {
}
{
var4 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:AbstractCompiler>*/
}
var_v = var4;
{
var5 = nitc__light___MModule___nmodule(self, var_v);
}
var_n = var5;
if (var_n == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,((val*)NULL)) on <var_n:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable AModule(AModule)> */
var11 = var_n == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
nitc__light_ffi___AModule___ensure_compile_ffi_wrapper(var_n); /* Direct call light_ffi#AModule#ensure_compile_ffi_wrapper on <var_n:nullable AModule(AModule)>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 541);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__Toolchain___compile_dir(var15);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc__light_ffi___MModule___finalize_ffi_wrapper(self, var18, var22); /* Direct call light_ffi#MModule#finalize_ffi_wrapper on <self:MModule>*/
}
{
{ /* Inline light_ffi_base#MModule#ffi_files (self) on <self:MModule> */
var27 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_ = var25;
{
var28 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_29 = var28;
for(;;) {
{
var30 = ((short int(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_29); /* is_ok on <var_29:IndexedIterator[ExternFile]>*/
}
if (var30){
} else {
goto BREAK_label;
}
{
var31 = ((val*(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_29); /* item on <var_29:IndexedIterator[ExternFile]>*/
}
var_file = var31;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var34 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var32) on <var32:AbstractCompiler> */
var37 = var32->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var32:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1010);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var35, var_file); /* Direct call array#Array#add on <var35:Array[ExternFile]>*/
}
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_29); /* next on <var_29:IndexedIterator[ExternFile]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_29); /* finish on <var_29:IndexedIterator[ExternFile]>*/
}
{
nitc__light___MModule___ensure_compile_nitni_base(self, var_v); /* Direct call light#MModule#ensure_compile_nitni_base on <self:MModule>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var40 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 45);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var38) on <var38:nullable CCompilationUnit> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var43 = var38->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var38:nullable CCompilationUnit> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var44 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "#include \"";
var48 = core__flat___NativeString___to_s_full(var47, 10l, 10l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "._ffi.h\"\n";
var52 = core__flat___NativeString___to_s_full(var51, 9l, 9l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce;
varonce = NULL;
}
{
var53 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(self);
}
((struct instance_core__NativeArray*)var44)->values[1]=var53;
{
var54 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce = var44;
{
template___template__Template___add(var41, var54); /* Direct call template#Template#add on <var41:Template>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var57 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 46);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var55) on <var55:nullable CCompilationUnit> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var55:nullable CCompilationUnit> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "#include <stdint.h>\n";
var64 = core__flat___NativeString___to_s_full(var63, 20l, 20l);
var62 = var64;
varonce61 = var62;
}
{
template___template__Template___add(var58, var62); /* Direct call template#Template#add on <var58:Template>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var67 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 47);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var65) on <var65:nullable CCompilationUnit> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var70 = var65->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var65:nullable CCompilationUnit> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "extern void nitni_global_ref_incr(void*);\nextern void nitni_global_ref_decr(void*);\n";
var74 = core__flat___NativeString___to_s_full(var73, 84l, 84l);
var72 = var74;
varonce71 = var72;
}
{
template___template__Template___add(var68, var72); /* Direct call template#Template#add on <var68:Template>*/
}
{
{ /* Inline light_c#MModule#cflags (self) on <self:MModule> */
var77 = self->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 77);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "";
var81 = core__flat___NativeString___to_s_full(var80, 0l, 0l);
var79 = var81;
varonce78 = var79;
}
{
var82 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var75, var79);
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " ";
var86 = core__flat___NativeString___to_s_full(var85, 1l, 1l);
var84 = var86;
varonce83 = var84;
}
{
var87 = core__abstract_text___Collection___join(var82, var84);
}
var_cflags = var87;
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var90 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var93 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain (var91) on <var91:AbstractCompiler> */
var96 = var91->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <var91:AbstractCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 541);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = nitc___nitc__Toolchain___compile_dir(var94);
}
if (var88 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 53);
fatal_exit(1);
} else {
nitc__light___CCompilationUnit___write_as_nitni(var88, self, var97); /* Direct call light#CCompilationUnit#write_as_nitni on <var88:nullable CCompilationUnit>*/
}
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var100 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 55);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#files (var98) on <var98:nullable CCompilationUnit> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var103 = var98->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <var98:nullable CCompilationUnit> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_104 = var101;
{
var105 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_104);
}
var_106 = var105;
for(;;) {
{
var107 = ((short int(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_106); /* is_ok on <var_106:IndexedIterator[String]>*/
}
if (var107){
} else {
goto BREAK_label108;
}
{
var109 = ((val*(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_106); /* item on <var_106:IndexedIterator[String]>*/
}
var_file110 = var109;
var111 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var111, var_file110); /* filename= on <var111:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var111, var_cflags); /* cflags= on <var111:ExternCFile>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:ExternCFile>*/
}
var_f = var111;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_f) on <var_f:ExternCFile> */
var114 = var_f->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f:ExternCFile> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline light_c#MModule#pkgconfigs (self) on <self:MModule> */
var117 = self->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <self:MModule> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 83);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var112, var115); /* Direct call array#Array#add_all on <var112:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var120 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var118) on <var118:AbstractCompiler> */
var123 = var118->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var118:AbstractCompiler> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1010);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var121, var_f); /* Direct call array#Array#add on <var121:Array[ExternFile]>*/
}
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_106); /* next on <var_106:IndexedIterator[String]>*/
}
}
BREAK_label108: (void)0;
{
((void(*)(val* self))((((long)var_106&3)?class_info[((long)var_106&3)]:var_106->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_106); /* finish on <var_106:IndexedIterator[String]>*/
}
{
{ /* Inline light#MModule#nitni_ccu= (self,((val*)NULL)) on <self:MModule> */
self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val = ((val*)NULL); /* _nitni_ccu on <self:MModule> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline light_ffi#MModule#compiled_ffi_methods (self) on <self:MModule> */
var127 = self->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val; /* _compiled_ffi_methods on <self:MModule> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_ffi_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi, 66);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__RemovableCollection__clear(var125); /* Direct call hash_collection#HashSet#clear on <var125:HashSet[AMethPropdef]>*/
}
{
{ /* Inline light_ffi#MModule#ffi_ccu= (self,((val*)NULL)) on <self:MModule> */
self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val = ((val*)NULL); /* _ffi_ccu on <self:MModule> */
RET_LABEL128:(void)0;
}
}
{
{ /* Inline light_ffi_base#MModule#ffi_files (self) on <self:MModule> */
var131 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var129); /* Direct call array#AbstractArray#clear on <var129:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method light#MModule#ensure_compile_nitni_base for (self: MModule, AbstractCompilerVisitor) */
void nitc__light___MModule___ensure_compile_nitni_base(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable CCompilationUnit */;
val* var2 /* : nullable CCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : CCompilationUnit */;
var_v = p0;
{
{ /* Inline light#MModule#nitni_ccu (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <self:MModule> */
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
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable CCompilationUnit> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable CCompilationUnit(CCompilationUnit)>*/
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
var8 = NEW_nitc__CCompilationUnit(&type_nitc__CCompilationUnit);
{
{ /* Inline kernel#Object#init (var8) on <var8:CCompilationUnit> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline light#MModule#nitni_ccu= (self,var8) on <self:MModule> */
self->attrs[COLOR_nitc__light__MModule___nitni_ccu].val = var8; /* _nitni_ccu on <self:MModule> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method light#MModule#collect_linker_libs for (self: MModule): nullable Array[String] */
val* nitc__light___MModule___collect_linker_libs(val* self) {
val* var /* : nullable Array[String] */;
val* var1 /* : MultiHashMap[String, String] */;
val* var3 /* : MultiHashMap[String, String] */;
val* var4 /* : RemovableCollection[nullable Object] */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MultiHashMap[String, String] */;
val* var12 /* : MultiHashMap[String, String] */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : nullable Object */;
{
{ /* Inline light_c#MModule#ldflags (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__keys(var1);
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var7 = core__flat___NativeString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce = var5;
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var4, var5); /* has on <var4:RemovableCollection[nullable Object](RemovableCollection[String])>*/
}
var9 = !var8;
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline light_c#MModule#ldflags (self) on <self:MModule> */
var12 = self->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <self:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "";
var16 = core__flat___NativeString___to_s_full(var15, 0l, 0l);
var14 = var16;
varonce13 = var14;
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var10, var14);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#AMethPropdef#compile_ffi_support_to_c for (self: AMethPropdef, AbstractCompilerVisitor) */
void nitc__light___AMethPropdef___compile_ffi_support_to_c(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : AbstractCompiler */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
val* var15 /* : nullable AModule */;
val* var_amodule /* var amodule: nullable AModule */;
val* var16 /* : nullable MPropDef */;
val* var18 /* : nullable MPropDef */;
val* var19 /* : MClassDef */;
val* var21 /* : MClassDef */;
val* var22 /* : MClassType */;
val* var24 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var25 /* : nullable MPropDef */;
val* var27 /* : nullable MPropDef */;
val* var28 /* : MProperty */;
val* var30 /* : MProperty */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : Sys */;
val* var35 /* : SignatureLength */;
val* var36 /* : Sys */;
val* var37 /* : CallContext */;
val* var38 /* : String */;
val* var_csignature /* var csignature: String */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : String */;
var_v = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 86);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var11 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var9) on <var9:AbstractCompiler> */
var14 = var9->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var9:AbstractCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc__loader___ModelBuilder___mmodule2node(var12, var_mmodule);
}
var_amodule = var15;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 88);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var16) on <var16:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var16:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_mclass_type = var22;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var27 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 91);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var25) on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "___impl";
var33 = core__flat___NativeString___to_s_full(var32, 7l, 7l);
var31 = var33;
varonce = var31;
}
var34 = glob_sys;
{
var35 = nitc__nitni_utilities___core__Sys___long_signature(var34);
}
var36 = glob_sys;
{
var37 = nitc__nitni_utilities___core__Sys___internal_call_context(var36);
}
{
var38 = nitc__nitni_utilities___MMethod___build_csignature(var28, var_mclass_type, var_mmodule, var31, var35, var37);
}
var_csignature = var38;
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ";";
var44 = core__flat___NativeString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[1]=var42;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[0]=var_csignature;
{
var45 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
nitc___nitc__AbstractCompilerVisitor___declare_once(var_v, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <var_v:AbstractCompilerVisitor>*/
}
if (var_amodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 95);
fatal_exit(1);
} else {
nitc__light_ffi___AModule___ensure_compile_ffi_wrapper(var_amodule); /* Direct call light_ffi#AModule#ensure_compile_ffi_wrapper on <var_amodule:nullable AModule>*/
}
{
nitc__light_ffi___AMethPropdef___compile_ffi_method(self, var_mmodule); /* Direct call light_ffi#AMethPropdef#compile_ffi_method on <self:AMethPropdef>*/
}
{
nitc__light___MModule___ensure_compile_nitni_base(var_mmodule, var_v); /* Direct call light#MModule#ensure_compile_nitni_base on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method light#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__light___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable AExternCodeBlock */;
val* var3 /* : nullable AExternCodeBlock */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var20 /* : MClassDef */;
val* var22 /* : MClassDef */;
val* var23 /* : MClassType */;
val* var25 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var26 /* : MProperty */;
val* var28 /* : MProperty */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : MClassType */;
val* var34 /* : MClassType */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : Sys */;
val* var39 /* : SignatureLength */;
val* var40 /* : String */;
val* var_externname /* var externname: String */;
val* var_recv_var /* var recv_var: nullable RuntimeVariable */;
val* var41 /* : nullable MSignature */;
val* var43 /* : nullable MSignature */;
val* var44 /* : nullable MType */;
val* var46 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var_other50 /* var other: nullable Object */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : MType */;
val* var54 /* : RuntimeVariable */;
val* var55 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
long var_a /* var a: Int */;
long var56 /* : Int */;
long var58 /* : Int */;
long var_ /* var : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : MClassDef */;
val* var69 /* : MClassDef */;
val* var70 /* : MClass */;
val* var72 /* : MClass */;
val* var73 /* : MClassType */;
val* var75 /* : MClassType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var76 /* : nullable MSignature */;
val* var78 /* : nullable MSignature */;
val* var79 /* : Array[MParameter] */;
val* var81 /* : Array[MParameter] */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
val* var89 /* : nullable Object */;
val* var90 /* : MType */;
val* var92 /* : MType */;
val* var93 /* : MType */;
short int var94 /* : Bool */;
val* var95 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var123 /* : NativeArray[String] */;
static val* varonce122;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var142 /* : NativeArray[String] */;
static val* varonce141;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
long var149 /* : Int */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
val* var157 /* : NativeArray[String] */;
static val* varonce156;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : String */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
val* var179 /* : NativeArray[String] */;
static val* varonce178;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : String */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : String */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : String */;
val* var204 /* : NativeArray[String] */;
static val* varonce203;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
val* var216 /* : String */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : String */;
val* var221 /* : String */;
val* var222 /* : String */;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : String */;
val* var231 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable AExternCodeBlock(AExternCodeBlock)> */
var9 = var1 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var10 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__light___AMethPropdef___compile_externmeth_to_c]))(self, p0, p1, p2); /* compile_externmeth_to_c on <self:AMethPropdef>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = nitc__light_only___AMethPropdef___accept_externmeth(self);
}
var12 = !var11;
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline light_ffi#MModule#uses_ffi= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:MModule> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mclass_type = var23;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var28 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce!=NULL)) {
var35 = varonce;
} else {
var36 = "___impl";
var37 = core__flat___NativeString___to_s_full(var36, 7l, 7l);
var35 = var37;
varonce = var35;
}
var38 = glob_sys;
{
var39 = nitc__nitni_utilities___core__Sys___long_signature(var38);
}
{
var40 = nitc__nitni_utilities___MMethod___build_cname(var26, var32, var_mmodule, var35, var39);
}
var_externname = var40;
var_recv_var = ((val*)NULL);
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var43 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var41 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 122);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var41) on <var41:nullable MSignature> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1795);
fatal_exit(1);
}
var46 = var41->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var41:nullable MSignature> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_return_mtype = var44;
if (var_return_mtype == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other50 = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other50); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var52 = !var51;
var48 = var52;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
{
var53 = ((val*(*)(val* self, val* p0, val* p1))(var_return_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_return_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_return_mtype:nullable MType(MType)>*/
}
var_return_mtype = var53;
{
var54 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_return_mtype);
}
var_recv_var = var54;
} else {
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
var55 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var55); /* Direct call array#Array#init on <var55:Array[String]>*/
}
var_arguments_for_c = var55;
var_a = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var58 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
var_ = var56;
for(;;) {
{
{ /* Inline kernel#Int#< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var61 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_a < var_;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
} else {
goto BREAK_label;
}
{
var63 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_a);
}
var_arg = var63;
{
{ /* Inline kernel#Int#== (var_a,0l) on <var_a:Int> */
var66 = var_a == 0l;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var69 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var67) on <var67:MClassDef> */
var72 = var67->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var67:MClassDef> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var70) on <var70:MClass> */
var75 = var70->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var70:MClass> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_param_mtype = var73;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var78 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 137);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var76) on <var76:nullable MSignature> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var81 = var76->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var76:nullable MSignature> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_a,1l) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var84 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var88 = var_a - 1l;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
var89 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var79, var82);
}
{
{ /* Inline model#MParameter#mtype (var89) on <var89:nullable Object(MParameter)> */
var92 = var89->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var89:nullable Object(MParameter)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
var_param_mtype = var90;
}
{
var93 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var93;
{
var94 = ((short int(*)(val* self))(var_param_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_param_mtype); /* is_cprimitive on <var_param_mtype:MType>*/
}
if (var94){
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var97 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1867);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var95); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "struct nitni_instance* var_for_c_";
var103 = core__flat___NativeString___to_s_full(var102, 33l, 33l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ";";
var107 = core__flat___NativeString___to_s_full(var106, 1l, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
var108 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var99)->values[1]=var108;
{
var109 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var109); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "var_for_c_";
var115 = core__flat___NativeString___to_s_full(var114, 10l, 10l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[0]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = " = nit_alloc(sizeof(struct nitni_instance));";
var119 = core__flat___NativeString___to_s_full(var118, 44l, 44l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var111)->values[2]=var117;
} else {
var111 = varonce110;
varonce110 = NULL;
}
var120 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var111)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "var_for_c_";
var127 = core__flat___NativeString___to_s_full(var126, 10l, 10l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "->value = ";
var131 = core__flat___NativeString___to_s_full(var130, 10l, 10l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var123)->values[2]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = ";";
var135 = core__flat___NativeString___to_s_full(var134, 1l, 1l);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var123)->values[4]=var133;
} else {
var123 = varonce122;
varonce122 = NULL;
}
var136 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var123)->values[1]=var136;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var139 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1867);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
((struct instance_core__NativeArray*)var123)->values[3]=var137;
{
var140 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce141==NULL)) {
var142 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "var_for_c_";
var146 = core__flat___NativeString___to_s_full(var145, 10l, 10l);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var142)->values[0]=var144;
} else {
var142 = varonce141;
varonce141 = NULL;
}
var147 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var142)->values[1]=var147;
{
var148 = ((val*(*)(val* self))(var142->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var142); /* native_to_s on <var142:NativeArray[String]>*/
}
varonce141 = var142;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var148); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
}
{
var149 = core___core__Int___Discrete__successor(var_a, 1l);
}
var_a = var149;
}
BREAK_label: (void)0;
if (var_recv_var == NULL) {
var150 = 1; /* is null */
} else {
var150 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recv_var,((val*)NULL)) on <var_recv_var:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_recv_var,var_other) on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)> */
var155 = var_recv_var == var_other;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var150 = var151;
}
if (var150){
if (unlikely(varonce156==NULL)) {
var157 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "(";
var161 = core__flat___NativeString___to_s_full(var160, 1l, 1l);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var157)->values[1]=var159;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = ");";
var165 = core__flat___NativeString___to_s_full(var164, 2l, 2l);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var157)->values[3]=var163;
} else {
var157 = varonce156;
varonce156 = NULL;
}
((struct instance_core__NativeArray*)var157)->values[0]=var_externname;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = ", ";
var169 = core__flat___NativeString___to_s_full(var168, 2l, 2l);
var167 = var169;
varonce166 = var167;
}
{
var170 = core__abstract_text___Collection___join(var_arguments_for_c, var167);
}
((struct instance_core__NativeArray*)var157)->values[2]=var170;
{
var171 = ((val*(*)(val* self))(var157->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var157); /* native_to_s on <var157:NativeArray[String]>*/
}
varonce156 = var157;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (var_return_mtype == NULL) {
var172 = 0; /* is null */
} else {
var172 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other50 = ((val*)NULL);
{
var175 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other50); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var176 = !var175;
var173 = var176;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
var172 = var173;
}
if (unlikely(!var172)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 154);
fatal_exit(1);
}
{
var177 = ((short int(*)(val* self))(var_return_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_return_mtype); /* is_cprimitive on <var_return_mtype:nullable MType(MType)>*/
}
if (var177){
if (unlikely(varonce178==NULL)) {
var179 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = " = ";
var183 = core__flat___NativeString___to_s_full(var182, 3l, 3l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var179)->values[1]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "(";
var187 = core__flat___NativeString___to_s_full(var186, 1l, 1l);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var179)->values[3]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ");";
var191 = core__flat___NativeString___to_s_full(var190, 2l, 2l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var179)->values[5]=var189;
} else {
var179 = varonce178;
varonce178 = NULL;
}
{
var192 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var179)->values[0]=var192;
((struct instance_core__NativeArray*)var179)->values[2]=var_externname;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = ", ";
var196 = core__flat___NativeString___to_s_full(var195, 2l, 2l);
var194 = var196;
varonce193 = var194;
}
{
var197 = core__abstract_text___Collection___join(var_arguments_for_c, var194);
}
((struct instance_core__NativeArray*)var179)->values[4]=var197;
{
var198 = ((val*(*)(val* self))(var179->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var198); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "struct nitni_instance* ret_var;";
var202 = core__flat___NativeString___to_s_full(var201, 31l, 31l);
var200 = var202;
varonce199 = var200;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce203==NULL)) {
var204 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "ret_var = ";
var208 = core__flat___NativeString___to_s_full(var207, 10l, 10l);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var204)->values[0]=var206;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "(";
var212 = core__flat___NativeString___to_s_full(var211, 1l, 1l);
var210 = var212;
varonce209 = var210;
}
((struct instance_core__NativeArray*)var204)->values[2]=var210;
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = ");";
var216 = core__flat___NativeString___to_s_full(var215, 2l, 2l);
var214 = var216;
varonce213 = var214;
}
((struct instance_core__NativeArray*)var204)->values[4]=var214;
} else {
var204 = varonce203;
varonce203 = NULL;
}
((struct instance_core__NativeArray*)var204)->values[1]=var_externname;
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = ", ";
var220 = core__flat___NativeString___to_s_full(var219, 2l, 2l);
var218 = var220;
varonce217 = var218;
}
{
var221 = core__abstract_text___Collection___join(var_arguments_for_c, var218);
}
((struct instance_core__NativeArray*)var204)->values[3]=var221;
{
var222 = ((val*(*)(val* self))(var204->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var204); /* native_to_s on <var204:NativeArray[String]>*/
}
varonce203 = var204;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var222); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = " = ret_var->value;";
var228 = core__flat___NativeString___to_s_full(var227, 18l, 18l);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[1]=var226;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
var229 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var224)->values[0]=var229;
{
var230 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
}
{
var231 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_recv_var, var_return_mtype); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_recv_var = var231;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_recv_var); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
{
nitc__light___AMethPropdef___compile_ffi_support_to_c(self, var_v); /* Direct call light#AMethPropdef#compile_ffi_support_to_c on <self:AMethPropdef>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__light___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable AExternCodeBlock */;
val* var3 /* : nullable AExternCodeBlock */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var20 /* : MClassDef */;
val* var22 /* : MClassDef */;
val* var23 /* : MClassType */;
val* var25 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var26 /* : MProperty */;
val* var28 /* : MProperty */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : MClassType */;
val* var34 /* : MClassType */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : Sys */;
val* var39 /* : SignatureLength */;
val* var40 /* : String */;
val* var_externname /* var externname: String */;
val* var41 /* : nullable Object */;
val* var42 /* : MType */;
val* var44 /* : MType */;
val* var_return_mtype /* var return_mtype: MType */;
val* var45 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var46 /* : nullable Object */;
val* var47 /* : Array[String] */;
val* var_arguments_for_c /* var arguments_for_c: Array[String] */;
long var_a /* var a: Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var_ /* var : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var56 /* : nullable MSignature */;
val* var58 /* : nullable MSignature */;
val* var59 /* : Array[MParameter] */;
val* var61 /* : Array[MParameter] */;
val* var62 /* : nullable Object */;
val* var63 /* : MType */;
val* var65 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var66 /* : MType */;
short int var67 /* : Bool */;
val* var68 /* : String */;
val* var70 /* : String */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var115 /* : NativeArray[String] */;
static val* varonce114;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
long var122 /* : Int */;
short int var123 /* : Bool */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : String */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : String */;
val* var143 /* : String */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : String */;
val* var150 /* : NativeArray[String] */;
static val* varonce149;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : String */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var170 /* : NativeArray[String] */;
static val* varonce169;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : String */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var177 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable AExternCodeBlock(AExternCodeBlock)> */
var9 = var1 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var10 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__light___AMethPropdef___compile_externinit_to_c]))(self, p0, p1, p2); /* compile_externinit_to_c on <self:AMethPropdef>*/
}
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = nitc__light_only___AMethPropdef___accept_externmeth(self);
}
var12 = !var11;
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline light_ffi#MModule#uses_ffi= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 1; /* _uses_ffi on <var_mmodule:MModule> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mclass_type = var23;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var28 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var31 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce!=NULL)) {
var35 = varonce;
} else {
var36 = "___impl";
var37 = core__flat___NativeString___to_s_full(var36, 7l, 7l);
var35 = var37;
varonce = var35;
}
var38 = glob_sys;
{
var39 = nitc__nitni_utilities___core__Sys___long_signature(var38);
}
{
var40 = nitc__nitni_utilities___MMethod___build_cname(var26, var32, var_mmodule, var35, var39);
}
var_externname = var40;
{
var41 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var41) on <var41:nullable Object(RuntimeVariable)> */
var44 = var41->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var41:nullable Object(RuntimeVariable)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_return_mtype = var42;
{
var45 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_return_mtype);
}
var_recv_var = var45;
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(var_v, var_mpropdef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var46 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_arguments);
}
var47 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var47); /* Direct call array#Array#init on <var47:Array[String]>*/
}
var_arguments_for_c = var47;
var_a = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var50 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_ = var48;
for(;;) {
{
{ /* Inline kernel#Int#< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var53 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_a < var_;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
} else {
goto BREAK_label;
}
{
var55 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_a);
}
var_arg = var55;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var58 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 195);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var56) on <var56:nullable MSignature> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var61 = var56->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var56:nullable MSignature> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var59, var_a);
}
{
{ /* Inline model#MParameter#mtype (var62) on <var62:nullable Object(MParameter)> */
var65 = var62->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var62:nullable Object(MParameter)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_param_mtype = var63;
{
var66 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_param_mtype, var_mmodule, var_mclass_type); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var66;
{
var67 = ((short int(*)(val* self))(var_param_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_param_mtype); /* is_cprimitive on <var_param_mtype:MType>*/
}
if (var67){
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var70 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1867);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var68); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
} else {
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "struct nitni_instance* var_for_c_";
var76 = core__flat___NativeString___to_s_full(var75, 33l, 33l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ";";
var80 = core__flat___NativeString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var72)->values[2]=var78;
} else {
var72 = varonce71;
varonce71 = NULL;
}
var81 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var72)->values[1]=var81;
{
var82 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce83==NULL)) {
var84 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "var_for_c_";
var88 = core__flat___NativeString___to_s_full(var87, 10l, 10l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var84)->values[0]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " = nit_alloc(sizeof(struct nitni_instance));";
var92 = core__flat___NativeString___to_s_full(var91, 44l, 44l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var84)->values[2]=var90;
} else {
var84 = varonce83;
varonce83 = NULL;
}
var93 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var84)->values[1]=var93;
{
var94 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "var_for_c_";
var100 = core__flat___NativeString___to_s_full(var99, 10l, 10l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var96)->values[0]=var98;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "->value = ";
var104 = core__flat___NativeString___to_s_full(var103, 10l, 10l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var96)->values[2]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = ";";
var108 = core__flat___NativeString___to_s_full(var107, 1l, 1l);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var96)->values[4]=var106;
} else {
var96 = varonce95;
varonce95 = NULL;
}
var109 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var96)->values[1]=var109;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_arg) on <var_arg:RuntimeVariable> */
var112 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_arg:RuntimeVariable> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1867);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
((struct instance_core__NativeArray*)var96)->values[3]=var110;
{
var113 = ((val*(*)(val* self))(var96->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce114==NULL)) {
var115 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "var_for_c_";
var119 = core__flat___NativeString___to_s_full(var118, 10l, 10l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var115)->values[0]=var117;
} else {
var115 = varonce114;
varonce114 = NULL;
}
var120 = core__flat___Int___core__abstract_text__Object__to_s(var_a);
((struct instance_core__NativeArray*)var115)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var115->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments_for_c, var121); /* Direct call array#Array#add on <var_arguments_for_c:Array[String]>*/
}
}
{
var122 = core___core__Int___Discrete__successor(var_a, 1l);
}
var_a = var122;
}
BREAK_label: (void)0;
{
var123 = ((short int(*)(val* self))(var_return_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_return_mtype); /* is_cprimitive on <var_return_mtype:MType>*/
}
if (var123){
if (unlikely(varonce124==NULL)) {
var125 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = " = ";
var129 = core__flat___NativeString___to_s_full(var128, 3l, 3l);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var125)->values[1]=var127;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "(";
var133 = core__flat___NativeString___to_s_full(var132, 1l, 1l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var125)->values[3]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = ");";
var137 = core__flat___NativeString___to_s_full(var136, 2l, 2l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var125)->values[5]=var135;
} else {
var125 = varonce124;
varonce124 = NULL;
}
{
var138 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var125)->values[0]=var138;
((struct instance_core__NativeArray*)var125)->values[2]=var_externname;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = ", ";
var142 = core__flat___NativeString___to_s_full(var141, 2l, 2l);
var140 = var142;
varonce139 = var140;
}
{
var143 = core__abstract_text___Collection___join(var_arguments_for_c, var140);
}
((struct instance_core__NativeArray*)var125)->values[4]=var143;
{
var144 = ((val*(*)(val* self))(var125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var144); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "struct nitni_instance* ret_var;";
var148 = core__flat___NativeString___to_s_full(var147, 31l, 31l);
var146 = var148;
varonce145 = var146;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce149==NULL)) {
var150 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "ret_var = ";
var154 = core__flat___NativeString___to_s_full(var153, 10l, 10l);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var150)->values[0]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "(";
var158 = core__flat___NativeString___to_s_full(var157, 1l, 1l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var150)->values[2]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ");";
var162 = core__flat___NativeString___to_s_full(var161, 2l, 2l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var150)->values[4]=var160;
} else {
var150 = varonce149;
varonce149 = NULL;
}
((struct instance_core__NativeArray*)var150)->values[1]=var_externname;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = ", ";
var166 = core__flat___NativeString___to_s_full(var165, 2l, 2l);
var164 = var166;
varonce163 = var164;
}
{
var167 = core__abstract_text___Collection___join(var_arguments_for_c, var164);
}
((struct instance_core__NativeArray*)var150)->values[3]=var167;
{
var168 = ((val*(*)(val* self))(var150->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var168); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce169==NULL)) {
var170 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = " = ret_var->value;";
var174 = core__flat___NativeString___to_s_full(var173, 18l, 18l);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var170)->values[1]=var172;
} else {
var170 = varonce169;
varonce169 = NULL;
}
{
var175 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var170)->values[0]=var175;
{
var176 = ((val*(*)(val* self))(var170->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var170); /* native_to_s on <var170:NativeArray[String]>*/
}
varonce169 = var170;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
}
{
var177 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_recv_var, var_return_mtype); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_recv_var = var177;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_recv_var); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
{
nitc__light___AMethPropdef___compile_ffi_support_to_c(self, var_v); /* Direct call light#AMethPropdef#compile_ffi_support_to_c on <self:AMethPropdef>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light#CCompilationUnit#write_as_nitni for (self: CCompilationUnit, MModule, String) */
void nitc__light___CCompilationUnit___write_as_nitni(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_base_name /* var base_name: String */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_h_file /* var h_file: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : Array[String] */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var_c_file /* var c_file: String */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Array[String] */;
val* var60 /* : Array[String] */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
val* var67 /* : String */;
var_mmodule = p0;
var_compdir = p1;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "._nitni";
var4 = core__flat___NativeString___to_s_full(var3, 7l, 7l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[1]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_core__NativeArray*)var)->values[0]=var5;
{
var6 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_base_name = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ".h";
var12 = core__flat___NativeString___to_s_full(var11, 2l, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
} else {
var8 = varonce7;
varonce7 = NULL;
}
((struct instance_core__NativeArray*)var8)->values[0]=var_base_name;
{
var13 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
var_h_file = var13;
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "/";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[1]=var17;
} else {
var15 = varonce14;
varonce14 = NULL;
}
((struct instance_core__NativeArray*)var15)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var15)->values[2]=var_h_file;
{
var20 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
var21 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var21); /* Direct call array#Array#init on <var21:Array[String]>*/
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "_NITG_NITNI_H";
var27 = core__flat___NativeString___to_s_full(var26, 13l, 13l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[1]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var28 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
{
var29 = core___core__String___Object__to_s(var28);
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__String__to_upper]))(var29); /* to_upper on <var29:String>*/
}
((struct instance_core__NativeArray*)var23)->values[0]=var30;
{
var31 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nitc__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var20, var21, var31); /* Direct call light_ffi_base#CCompilationUnit#write_header_to_file on <self:CCompilationUnit>*/
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ".c";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[1]=var35;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_core__NativeArray*)var33)->values[0]=var_base_name;
{
var38 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
var_c_file = var38;
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "/";
var44 = core__flat___NativeString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[1]=var42;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var40)->values[2]=var_c_file;
{
var45 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
var46 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var46, 1l); /* Direct call array#Array#with_capacity on <var46:Array[String]>*/
}
var_ = var46;
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\"";
var52 = core__flat___NativeString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "\"";
var56 = core__flat___NativeString___to_s_full(var55, 1l, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var48)->values[2]=var54;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_core__NativeArray*)var48)->values[1]=var_h_file;
{
var57 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var57); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var45, var_); /* Direct call light_ffi_base#CCompilationUnit#write_body_to_file on <self:CCompilationUnit>*/
}
{
{ /* Inline c_tools#CCompilationUnit#files (self) on <self:CCompilationUnit> */
var60 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "/";
var66 = core__flat___NativeString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[1]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
((struct instance_core__NativeArray*)var62)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var62)->values[2]=var_c_file;
{
var67 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var58, var67); /* Direct call array#Array#add on <var58:Array[String]>*/
}
RET_LABEL:;
}
